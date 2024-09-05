#include "stdafx.h"
#include "ISaveInfo.h"
//#include "CommFuncFile.h"
#include "CommonCls/UtilCommFuncFile.h"

ISaveInfo::~ISaveInfo()
{
	/*if(m_pImg)
	{
		delete m_pImg;
		m_pImg = nullptr;
	}
	if(m_pCaptureImg)
	{
		delete m_pCaptureImg;
		m_pCaptureImg = nullptr;
	}*/
}

//
//ISaveInfo::ISaveInfo(CRavidImage * pImg, CRavidImageView * pView, const CString & strViewName, const CString & strInspectTypeName, const CString & strSignalTime, const CString & strSavePath, const CString & strHandlerName, const CString & strStageName, CDef::SAlign * pAlign, CDef::sAlignResult sMarkResult, CDef::EInspectionType eType, int nSaveType, bool bAlginResult)
//	: m_pCaptureImg(nullptr)
//	, m_pImg(nullptr)
//{
//	m_pCaptureImg = new CRavidImage();
//	m_pImg = new CRavidImage();
//
//	m_pImg->Copy(pImg);
//
//
//
//
//}

//bool ISaveInfo::SaveImage()
//{
//	bool bReturn = true;
//
//	do
//	{
//
//		CCommFuncFile commfuncfile;
//		CString strFilePath = m_strSavePath;
//
//		if(!commfuncfile.IsFolderExist(strFilePath))
//		{
//			commfuncfile.MakeFolder(strFilePath);
//		}
//
//		if(strFilePath.IsEmpty())
//			break;
//
//		strFilePath.AppendFormat(_T("\\Image"));
//		if(!commfuncfile.IsFolderExist(strFilePath))
//		{
//			commfuncfile.MakeFolder(strFilePath);
//		}
//
//
//		//CDef::SName sNames;
//		//////////////////////////////////////////////////////////////////////////
//		//
//
//		//strFilePath.AppendFormat(_T("\\%s"), sNames.strInspectType[SInfo.eInsType]);
//		strFilePath.AppendFormat(_T("\\%s"), m_strInspectTypeName);
//		if(!commfuncfile.IsFolderExist(strFilePath))
//		{
//			commfuncfile.MakeFolder(strFilePath);
//		}
//
//		CString strViewName = m_strViewName;
//		strFilePath.AppendFormat(_T("\\%s"), strViewName);
//		if(!commfuncfile.IsFolderExist(strFilePath))
//			commfuncfile.MakeFolder(strFilePath);
//
//		strFilePath.AppendFormat(_T("\\%s"), m_bAlignResult ? _T("Pass") : _T("Fail"));
//		if(!commfuncfile.IsFolderExist(strFilePath))
//		{
//			commfuncfile.MakeFolder(strFilePath);
//		}
//
//
//		CString strTime = _T("");
//		//strTime = GetSignalTime();
//		strTime = m_strSignalTime;
//
//		CString strImagePath = strFilePath;
//
//		CString strImageName;
//		strImageName.Format(_T("%s"), strTime);
//
//
//		CString strImageType = m_nImageSaveType ? _T(".jpg") : _T(".bmp");
//		CString strImageFile;
//		strImageFile.Format(_T("%s\\%s%s"), strImagePath, strImageName, strImageType);
//
//		/////////////////////////////////////////////////////////////////////////
//
//
//// 		strFilePath.AppendFormat(_T("\\%s"), SInfo.bResult ? _T("Pass") : _T("Fail"));
//// 		if(!commfuncfile.IsFolderExist(strFilePath))
//// 			commfuncfile.MakeFolder(strFilePath);
//// 
//// 		CString strTime = _T("");
//// 		strTime = GetSignalTime();
//// 
//// 		CString strImagePath;
//// 		strImagePath.Format(_T("%s\\%s_%s"), strFilePath, strLine, strTime);
//// 
//// 		if(!commfuncfile.IsFolderExist(strImagePath))
//// 			commfuncfile.MakeFolder(strImagePath);
//// 
//// 		CString strImageType = !modelParam.cImageSaveType ? _T(".jpg") : _T(".bmp");
//// 
//// 		CString strViewName = GetViewName(SInfo.nViewNumber);
//// 		CString strImageFile;
//// 
//// 		strImageFile.Format(_T("%s\\%s%s"), strImagePath, strViewName, strImageType);
//
//
//		CString strImageFileSC;
//		strImageFileSC.Format(_T("%s\\%s_SC.jpg"), strImagePath, strImageName);
//
//
//		if(m_eInspectType == CDef::EInspectionType_LaserCalibration || m_eInspectType == CDef::EInspectionType_UVWCalibration)
//		{
//			CTime tm = CTime::GetCurrentTime();
//			CString strTime;
//			strTime.Format(_T("%02d%02d%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());
//
//			strImageFile.Format(_T("%s\\%s%s%s"), strImagePath, strViewName, strTime, strImageType);
//			strImageFileSC.Format(_T("%s\\%s_SC%s.jpg"), strImagePath, strViewName, strTime);
//
//		}
//
//		if(m_pImg)
//		{
//			bReturn &= m_pImg->Save(strImageFile);
//		}
//		if(!bReturn)
//		{
//			return bReturn;
//		}
//		if(m_pCaptureImg)
//		{
//			bReturn &= m_pCaptureImg->Save(strImageFileSC);
//		}
//		if(!bReturn)
//		{
//			delete m_pImg;
//			m_pImg = nullptr;
//		}
//	}
//	while(false);
//
//	return bReturn;
//}
//
//bool ISaveInfo::SaveData()
//{
//	bool bReturn = true;
//
//	do
//	{
//		/*CModelInfo* pModelInfo = GetModel();
//		if(!pModelInfo)
//			break;
//
//		CDef::SDefaultModelParam modelParam;
//		if(!GetModelParam(modelParam))
//			break;*/
//
//
//		CCommFuncFile commfuncfile;
//
//
//		CString strFilePath = _T("");
//
//		strFilePath = m_strSavePath;
//
//		if(strFilePath.IsEmpty())
//			break;
//
//
//		strFilePath.AppendFormat(_T("\\Data"));
//		if(commfuncfile.IsFolderExist(strFilePath))
//		{
//			commfuncfile.MakeFolder(strFilePath);
//		}
//
//
//
//		int nPos = 0;
//
//		while(1)
//		{
//			nPos = strFilePath.Find(_T("\\"), nPos);
//
//			if(nPos < 0)
//			{
//				CreateDirectory(strFilePath, 0);
//				break;
//			}
//
//			CreateDirectory(strFilePath.Left(nPos), 0);
//			++nPos;
//		}
//
//		CDef::SName sNames;
//
//		//strFilePath.Format(_T("%s\\%s_%s.csv"), strFilePath, sNames.strHandler[eHandler], sNames.strStage[eStage]);
//		strFilePath.Format(_T("%s\\%s_%s.csv"), strFilePath, m_strHandlerName, m_strStageName);
//
//		//////////////////////////////////////////////////////////////////////////
//
//		CString strResult[2];
//
//		strResult[0] = m_sAlignData[0].bResult ? _T("OK") : _T("NG");
//		strResult[1] = m_sAlignData[1].bResult ? _T("OK") : _T("NG");
//
//		CString strTop;
//		strTop = _T("Time,Pos1 X, Pos1 Y, Pos2 X, Pos2 Y,Pos3 X, Pos3 Y,Pos4 X, Pos4 Y, Stage1 X, Stage1 Y, Stage1 A, Stage2 X, Stage2 Y, Stage2 A, Result1 , Result2\n");
//
//		FILE* fp = nullptr;
//
//		if(!commfuncfile.IsFileExist(strFilePath))
//		{
//			errno_t err = _wfopen_s(&fp, strFilePath, _T("at"));
//			if(!err)
//			{
//				if(fp)
//				{
//					fputws(strTop, fp);
//					fclose(fp);
//				}
//			}
//
//		}
//
//		CString strTime = _T("");
//
//		strTime = m_strSignalTime;
//
//		CString strData;
//		strData.Format(_T("%s,"), strTime);
//		for(int i = 0; i < CDef::EAlignMark_Count; i++)
//		{
//			strData.AppendFormat(_T("%.3f,%.3f,"), m_sAlignMarkResult.rqdMarkCenter[i].GetCenter().x, m_sAlignMarkResult.rqdMarkCenter[i].GetCenter().y);
//		}
//
//		strData.AppendFormat(_T("%.3f, %.3f, %.3f, %.3f, %.3f, %.3f, %s, %s"),
//							 m_sAlignData[0].dx, m_sAlignData[0].dy, m_sAlignData[0].dAngle, m_sAlignData[1].dx, m_sAlignData[1].dy, m_sAlignData[1].dAngle, m_sAlignData[0], m_sAlignData[1]);
//
//		strData.AppendFormat(_T("\n"));
//
//		errno_t err = _wfopen_s(&fp, strFilePath, _T("at"));
//
//		if(!err)
//		{
//			if(fp)
//			{
//				fputws(strData, fp);
//				fclose(fp);
//			}
//		}
//	}
//	while(false);
//
//
//
//	return bReturn;
//}
