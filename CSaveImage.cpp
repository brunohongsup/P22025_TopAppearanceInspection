#include "stdafx.h"
#include "CSaveImage.h"
#include "CommonCls/UtilCommFuncFile.h"
#include "EventHandlerMain.h"

//CSaveImage::CSaveImage(CRavidImage * pImg, CRavidImageView * pImgView, const int nViewNum, CDef::EInspectionType eType, int nSaveImgType)
//	: m_pImg(nullptr)
//	, m_pCaptureImg(nullptr)
//{
//	m_pImg = new CRavidImage();
//	m_pCaptureImg = new CRavidImage();
//	m_pImg->Copy(pImg);
//	pImgView->CaptureScreen(m_pCaptureImg);
//	
//}


CSaveImage::CSaveImage(const int nObjectID, CTime tmSignalTime,const SCellTrackerData& sCellTrackingData,ECameraNum eCameraNum, bool bInspResult, CRavidImage * pInspImg, CRavidImageView * pImgView)
	: ISaveInfo(sCellTrackingData)
	, m_nObjectID(nObjectID)
	, m_eCameraNum(eCameraNum)
	, m_bInspResult(bInspResult)
	, m_pImg(nullptr)
	, m_pCaptureImg(nullptr)
	, m_signalTime(tmSignalTime)
{
	m_pImg = new CRavidImage();
	m_pCaptureImg = new CRavidImage();
	m_pImg->Copy(pInspImg);
	pImgView->CaptureScreen(m_pCaptureImg);
	
}

CSaveImage::~CSaveImage()
{
	if(m_pImg)
	{
		delete m_pImg;
		m_pImg = nullptr;
	}
	if(m_pCaptureImg)
	{
		delete m_pCaptureImg;
		m_pCaptureImg = nullptr;
	}
}

bool CSaveImage::DoSave()
{
	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
	{
		return false;
	}

	bool bReturn = false;
	const int nObjectID = m_nObjectID;


	do
	{
		CModelInfo* pModelInfo = pHandler->GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!pHandler->GetModelParam(modelParam))
			break;

		CUtilCommFuncFile commfuncfile;


		CString strFilePath = _T("");

		strFilePath = pHandler->GetSavePath();

		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		if(strFilePath.IsEmpty())
			break;

		strFilePath.AppendFormat(_T("\\Image"));
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		//////////////////////////////////////////////////////////////////////////
		//
		CString strViewName = m_eCameraNum == ECameraNum_Upper ? _T("Upper") : _T("Lower");
		strFilePath.AppendFormat(_T("\\%s"), strViewName);
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		strFilePath.AppendFormat(_T("\\%s"), m_bInspResult ? _T("Pass") : _T("Fail"));
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		CString strTime = _T("");
		CTime tm = m_signalTime;

		strTime.Format(_T("%02d_%02d_%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		CString strImagePath = strFilePath;

		CString strImageName;

		strImageName.Format(_T("%s_%s_%s"), strTime, m_sCellTrackingData.strLotID, m_sCellTrackingData.strCellID[0]);


		CString strImageType = modelParam.nSaveImageType ? _T(".jpg") : _T(".bmp");
		CString strImageFile;
		strImageFile.Format(_T("%s\\%s%s"), strImagePath, strImageName, strImageType);

		/////////////////////////////////////////////////////////////////////////

		CString strImageFileSC;
		strImageFileSC.Format(_T("%s\\%s_SC.jpg"), strImagePath, strImageName);

		Ravid::EAlgorithmResult eResult = Ravid::EAlgorithmResult_OK;
		if(m_pImg!=nullptr)
		{
			eResult = m_pImg->Save(strImageFile);
			if(eResult != EAlgorithmResult_OK)
			{
				return false;
			}
		}
		if(m_pCaptureImg != nullptr)
		{
			eResult = m_pCaptureImg->Save(strImageFileSC);
			if(eResult != EAlgorithmResult_OK)
			{
				delete m_pImg;
				m_pImg = nullptr;
				return false;
			}
		}
		bReturn = true;
	}
	while(false);

	return bReturn;
}
