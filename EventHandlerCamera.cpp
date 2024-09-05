#include "stdafx.h"
#include "EventHandlerCamera.h"
#include <omp.h>

#include "DeviceEuresysGrablinkFullTest.h"



#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////

CEventHandlerCamera::CEventHandlerCamera()
{
	m_nGrabCount = 0;
	m_pFindDefectThread = nullptr;
	m_pMeasureThread = nullptr;
}

//Device No를 가지고 초기화 할 수 있도록 생성자 추가.
CEventHandlerCamera::CEventHandlerCamera(CDefinition::EDeviceNo eDevNo)
{
	m_eDevNo = eDevNo;
	m_pFindDefectThread = nullptr;
	m_pMeasureThread = nullptr;
}

CEventHandlerCamera::~CEventHandlerCamera()
{
	m_nGrabCount = 0;

	StopMeasureThread();
	StopFindDefectThread();


	for(auto& item : m_deqFindDefectInfo)
		delete item;

	m_deqFindDefectInfo.clear();

	for(auto& item : m_deqMeasureInfo)
		delete item;

	m_deqMeasureInfo.clear();

}

//////////////////////////////////////////////////////////////////////////
//재정의 시작
void CEventHandlerCamera::OnInspect(Ravid::Algorithms::CRavidImage * pImgInfo, int nInspectionType, Ravid::Framework::CRavidImageView * pView, int nChannel)
{
	if(nChannel != m_eDevNo)
		return;

	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

	CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)nChannel));
	if(!pImageView)
		return;

	if(!CSequenceManager::IsRunning())
		pImageView->ClearLayerDrawingObject();
	

	Ravid::Miscellaneous::CPerformanceCounter pc;
	pc.Start();

	CLogManager::Write(ELogType_Main, _T("[Ins] 1 : %0.3lf ms"), pc.GetElapsedTime());

	if(nInspectionType == InspectKind_Measurement)
	{
		SInspectionInfo sInspectionInfo;
		SImageInfo* pI = new SImageInfo(pImgInfo);
		if(!pI)
			return;

		std::vector<SMeasurementKind> vct;
		GetMesurementKindData(vct);

		sInspectionInfo.vctImg.push_back(pI);

		CInspection ci;
		ci.InspectionMeasure(nChannel, &sInspectionInfo, vct, pImageView);

		CInspectionResult cResult = sInspectionInfo.cResult;

		SetInspectionResult(InspectKind_Measurement, cResult);

		SetMeasuredData(sInspectionInfo.vctMeasureResult);


		if(!CSequenceManager::IsRunning())
		{
			// 20221018 Test
			//pHandlerMain->SaveSQLiteDataFile(nChannel, GetMeasuredData());
		


// 			CFormViewMain* pMainFrom = dynamic_cast<CFormViewMain*>(CUIManager::FindView(typeid(CFormViewMain)));
// 			if(!pMainFrom)
// 				return;
// 
// 			if(!nChannel)
// 			{
// 				pMainFrom->SettingTotalSheet(CFormViewMain::ETabPage_Upper, sInspectionInfo.vctMeasureResult, pHandlerMain->GetSignalTime());
// 				pMainFrom->SettingMeasurementSheet(sInspectionInfo.vctMeasureResult);
// 			}

		}


		sInspectionInfo.ImageClear();
	}
	else
	{
		SInspectionInfo sInspectionInfo;
		SImageInfo* pI = new SImageInfo(pImgInfo);
		if(!pI)
			return;

		sInspectionInfo.vctImg.push_back(pI);

		CInspection ci;
		ci.InspectionDefect(nChannel, &sInspectionInfo, pImageView);
		CInspectionResult cResult = sInspectionInfo.cResult;

		if(CSequenceManager::IsRunning())
		{
			//pHandlerMain->SetForJsonDefectData((ECameraNum)nChannel, sInspectionInfo.vctDefectResult);


			DrawImageDefectMap(sInspectionInfo.vctDefectResult);
		
		}
		CString strNG = cResult.GetName(cResult.GetResultType());
		CLogManager::Write(ELogType_Main, _T("[Defect]Result [%d][%s]"), nChannel, strNG);

		SetInspectionResult(InspectKind_FindDefect, cResult);


		SetDefectedData(sInspectionInfo.vctDefectResult);


		sInspectionInfo.ImageClear();
	}

	CLogManager::Write(ELogType_Main, _T("[Ins] End : %0.3lf ms"), pc.GetElapsedTime());
}

void CEventHandlerCamera::OnTeach(Ravid::Algorithms::CRavidImage * pImgInfo, Ravid::Framework::CTeachingObject * pTeachingObject, Ravid::Framework::CRavidImageView * pView, int nChannel)
{

	CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nChannel));

	if(!pImageView)
		return;

	CModelInfo* pModelInfo = GetModel();
	if(!pModelInfo)
		return;

	CDefinition::SdefaultModelParam modelParam;
	if(!GetModelParam(modelParam))
		return;

	CUtil util;

	COLORREF cr[CDefinition::eMaualTeachingBox_count] = {RED, ORANGE, YELLOW, GREEN};
	CString strText[CDefinition::eMaualTeachingBox_count] = { _T("Left"), _T("Top"), _T("Right"), _T("Bottom") };

	CString *str[CDefinition::eMaualTeachingBox_count];

	for(int i = 0; i < CDefinition::eMaualTeachingBox_count; i++)
	{
		if(nChannel == 0)
			str[i] = &modelParam.strCellFindAreaBox1[i];
		else
			str[i] = &modelParam.strCellFindAreaBox2[i];
	}

	CRavidRect<double> pRect;

	for(int i = 0; i < CDefinition::eMaualTeachingBox_count; i++)
	{
		pTeachingObject->GetAt(i)->GetRect(pRect);

		CRavidPoint<int> rp;
		rp.x = (int)pRect.left;
		rp.y = (int)pRect.top;

		pImageView->DrawShape(CDefinition::ELayer_Operator, &pRect, cr[i]);

		pImageView->DrawText(CDefinition::ELayer_Operator, &rp, strText[i], cr[i], ERavidImageViewLayerTransparencyColor, 12);

		*str[i] = util.ConvertRectStructureToString(&pRect);
	}

	pModelInfo->SaveData(&modelParam, sizeof(modelParam));

}

void CEventHandlerCamera::OnAcquisition(Ravid::Algorithms::CRavidImage * pImgInfo, int nChannel, Ravid::Framework::CRavidImageView * pView, Ravid::Device::CDeviceBase * pDevice)
{
	do 
	{
		//카메라와 연결된 View를 직접 컨트롤 할 경우와 자동 컨트롤 하는 경우가 다르다.
		//직접 컨트롤 할 경우 해당 View를 연결하지 않았기 때문에 View에 해당하는 포인터가 없으므로 예외처리 방법의 차이가 존재할 뿐이다.
		//직접 컨트롤의 경우 RavidSettings에서 Device에 ObjectNumber를 -1로 하게 되면 가능하다.
		//직접 컨트롤을 하지 않을 경우도 아래의 방법은 적용 가능하다. pView의 포인터를 가지고 하면 됨.
		//여기서는 직접 컨트롤하는 방법으로 적용하도록 한다.
		//CLogManager::Write(0, _T("OnAqqusition-------------------------------------------------------- %d"), m_nGrabCount);


		if(pView)
			break;

		//해당 채널Number와 Device가 다르면 예외처리
		if(nChannel != (int)m_eDevNo)

			break;

		//카메라로 부터 받은 Image의 포인터가 없거나, 포인터안에 데이터가 없을 경우 예외처리
		if (!pImgInfo || !pImgInfo->GetBuffer())
		{
			break;
		}

		switch (m_eDevNo)
		{
		case CDefinition::EDeviceNo_ColorLineCamera:
		{
			//CLogManager::Write(0, _T("Color LINE TRIGGER COUNT - %d"), m_nGrabCount);

			CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(pDevice);
			if (!pCamera)
				break;

			int nHactivaPx = -1;
			int nSeqLength = -1;
			int nPageLength = -1;


			if (pCamera->GetHactive_Px(&nHactivaPx) != EEuresysGetFunction_OK)
			{
				CLogManager::Write(0, _T("Get Hactive Error"));
				break;
			}

			if (pCamera->GetPageLength_Ln(&nPageLength) != EEuresysGetFunction_OK)
			{
				CLogManager::Write(0, _T("Get PageLength Error"));
				break;
			}
			if (pCamera->GetSeqLength_Pg(&nSeqLength) != EEuresysGetFunction_OK)
			{
				CLogManager::Write(0, _T("Get SeqLength Error"));
				break;
			}

			if (nHactivaPx <= 0 || nPageLength <= 0 || pImgInfo->GetSizeX() != nHactivaPx)
			{
				CLogManager::Write(0, _T("Hac,PageLen <0, x != Hactive Error"));
				break;
			}

			if (m_nGrabCount >= nSeqLength)
			{
				CLogManager::Write(0, _T("Grab Count Error"));
				break;
			}

			
			pImgInfo->Lock();

			CameraBufferRotateAndPasteColor(pImgInfo, m_nGrabCount, m_nGrabCount >= nSeqLength - 1 ? true : false);

			m_nGrabCount++;

			pImgInfo->Unlock();


			CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nChannel));
			if (!pImageView)
				break;

			pImageView->SetImageInfo(&m_rCameraImage, false);
			pImageView->Invalidate();

			break;

		}
		case CDefinition::EDeviceNo_MonoLineCamera:
		{

			//CLogManager::Write(0, _T("Mono LINE TRIGGER COUNT - %d"), m_nGrabCount);

			CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(pDevice);
			if (!pCamera)
				break;

			int nHactivaPx = -1;
			int nSeqLength = -1;
			int nPageLength = -1;

			if (pCamera->GetHactive_Px(&nHactivaPx) != EEuresysGetFunction_OK)
				break;


			if (pCamera->GetPageLength_Ln(&nPageLength) != EEuresysGetFunction_OK)
				break;

			if (pCamera->GetSeqLength_Pg(&nSeqLength) != EEuresysGetFunction_OK)
				break;


			if (nHactivaPx <= 0 || nPageLength <= 0 || pImgInfo->GetSizeX() != nHactivaPx)
				break;

			if (m_nGrabCount >= nSeqLength)
				break;

			pImgInfo->Lock();

			CameraBufferRotateAndPasteMono(pImgInfo, m_nGrabCount, m_nGrabCount >= nSeqLength - 1 ? true : false);

			m_nGrabCount++;

			pImgInfo->Unlock();


			CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nChannel));
			if (!pImageView)
				break;

			pImageView->SetImageInfo(&m_rCameraImage, false);
			pImageView->Invalidate();

			break;

		}
		default:
		{
			CLogManager::Write(0, _T("NONE TRIGGER COUNT - %d"), m_nGrabCount);
			break;
		}
		
		}
	}
	while(false);

}

void CEventHandlerCamera::OnReceivingPacket(Ravid::Framework::CPacket * pPacket, Ravid::Device::CDeviceBase * pDevice)
{

}

void CEventHandlerCamera::StartMeasureThread()
{
	m_bMeasureThread = true;

	CreateRavidThreadContext(pContext)
	{
		while(m_bMeasureThread)
		{
			Sleep(10);

			int nObjectID = GetObjectID();

			CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(nObjectID));

			if(!pHandler)
				break;

			pHandler->m_csMeasureInfo.Lock();

			if(!pHandler->m_deqMeasureInfo.size())
			{
				pHandler->m_csMeasureInfo.Unlock();
				continue;
			}


			SImageInfo* GrabImageInfo;
			ZeroMemory(&GrabImageInfo, sizeof(GrabImageInfo));

			GrabImageInfo = pHandler->m_deqMeasureInfo.front();
			pHandler->m_deqMeasureInfo.pop_front();

			pHandler->m_csMeasureInfo.Unlock();


			CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nObjectID));
			if(!pImageView)
				break;

			pHandler->Lock();
			CString strMsg;
			strMsg.Format(_T("[MeasureThread] Index Number - %d "), GrabImageInfo->nIdx);
			CLogManager::Write(ELogType_Vision, strMsg);

			Sleep(1);

			pHandler->OnInspect(GrabImageInfo->pImage, InspectKind_Measurement, pImageView, GrabImageInfo->nIdx);

			pHandler->SetInspectionEnd(InspectKind_Measurement, true);

			pHandler->Unlock();


			if(GrabImageInfo)
			{
				if(GrabImageInfo->pImage)
				{
					delete GrabImageInfo->pImage;
					GrabImageInfo->pImage = nullptr;
				}

				delete GrabImageInfo;
				GrabImageInfo = nullptr;
			}

			//pImageView->DrawingLayer();
		}
	};
	CThreadHelper::Run(pContext);

	m_pMeasureThread = pContext;
}

void CEventHandlerCamera::StopMeasureThread()
{
	if(m_pMeasureThread)
	{
		m_bMeasureThread = false;

		if(m_pMeasureThread)
		{
			CThreadHelper::Wait(m_pMeasureThread, 1500);

			m_pMeasureThread = nullptr;
		}
	}
}

void CEventHandlerCamera::StartFindDefectThread()
{
	m_bFindDefectThread = true;

	CreateRavidThreadContext(pContext)
	{
		while(m_bFindDefectThread)
		{
			Sleep(10);

			int nObjectID = GetObjectID();

			CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(nObjectID));

			if(!pHandler)
				break;

			pHandler->m_csFindDefectInfo.Lock();

			if(!pHandler->m_deqFindDefectInfo.size())
			{
				pHandler->m_csFindDefectInfo.Unlock();
				continue;
			}


			SImageInfo* GrabImageInfo;
			ZeroMemory(&GrabImageInfo, sizeof(GrabImageInfo));

			GrabImageInfo = pHandler->m_deqFindDefectInfo.front();
			pHandler->m_deqFindDefectInfo.pop_front();

			pHandler->m_csFindDefectInfo.Unlock();


			CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nObjectID));
			if(!pImageView)
				break;

			pHandler->Lock();
			CString strMsg;
			strMsg.Format(_T("[FindDefectThread] Index Number - %d "), GrabImageInfo->nIdx);
			CLogManager::Write(ELogType_Vision, strMsg);

			Sleep(1);

			pHandler->OnInspect(GrabImageInfo->pImage, InspectKind_FindDefect, pImageView, GrabImageInfo->nIdx);


			// Test 
// 			CString str;
// 			str.Format(_T("C:\\Ravid\\CheckDefect%d.bmp"), nObjectID);
// 			GrabImageInfo->pImage->Save(str);

			pHandler->SetInspectionEnd(InspectKind_FindDefect, true);

			pHandler->Unlock();


			if(GrabImageInfo)
			{
				if(GrabImageInfo->pImage)
				{
					delete GrabImageInfo->pImage;
					GrabImageInfo->pImage = nullptr;
				}

				delete GrabImageInfo;
				GrabImageInfo = nullptr;
			}

			//pImageView->DrawingLayer();
		}
	};
	CThreadHelper::Run(pContext);

	m_pFindDefectThread = pContext;
}

void CEventHandlerCamera::StopFindDefectThread()
{
	if(m_pFindDefectThread)
	{
		m_bFindDefectThread = false;

		if(m_pFindDefectThread)
		{
			CThreadHelper::Wait(m_pFindDefectThread, 1500);

			m_pFindDefectThread = nullptr;
		}
	}
}

void CEventHandlerCamera::DrawImageDefectMap(std::vector<SDefectData> vct)
{
	int nObjectID = GetObjectID();

	do 
	{
		for(SDefectData sData : vct)
		{
			m_rlDefctMapBuff.Mask(0, sData.rpg);
		}


	} while (false);

}

void CEventHandlerCamera::OnLogMessage(Ravid::Framework::SRavidLogData * pLogData)
{
}

void CEventHandlerCamera::OnSequenceStart()
{
	StartMeasureThread();
	StartFindDefectThread();
}

void CEventHandlerCamera::OnSequencePause()
{
}

void CEventHandlerCamera::OnSequenceStop()
{
	StopFindDefectThread();
	StopMeasureThread();
}

void CEventHandlerCamera::OnOpenModel(Ravid::Framework::CModelInfo * pModelInfo)
{
	int nObjectID = GetObjectID();

	if(nObjectID != m_eDevNo)
		return;

	SetCameraImageBuffer();
	CFormViewRegister* pRegister = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pRegister)
		return;

	LoadMeasurementROIFormIni();
	LoadMeasurementKindFormIni();

	pRegister->GetPageMarkROI()->UpdateListBox();
	pRegister->SetROIDataToMeasurementDlgListBox();
	pRegister->GetPageMeasure()->UpdateListBox();

	if(m_eDevNo != EDeviceNo_ColorLineCamera)
		return;

	CFormViewMain* pMainFrom = dynamic_cast<CFormViewMain*>(CUIManager::FindView(typeid(CFormViewMain)));
	if(!pMainFrom)
		return;

	pMainFrom->SettingMeasurementSheet();



}

void CEventHandlerCamera::OnCloseModel(Ravid::Framework::CModelInfo * pModelInfo)
{
	
}

void CEventHandlerCamera::OnLogIn()
{
}

void CEventHandlerCamera::OnLogOut()
{
}

void CEventHandlerCamera::OnModelParameterSaveChanged()
{
}

void CEventHandlerCamera::OnUserToolbarEventRavidMainFrame(UINT ulResourceID)
{
}

void CEventHandlerCamera::OnToolbarEventRavidMainFrame(Ravid::Framework::ERavidToolBarEventMainFrame eEvent)
{
}

void CEventHandlerCamera::OnToolbarEventRavidChildFrameBase(CView * pView, Ravid::Framework::ERavidToolBarEventChildFrameBase eEvent)
{
}

void CEventHandlerCamera::OnToolbarEventRavidImageView(Ravid::Framework::CRavidImageView * pView, Ravid::Framework::ERavidToolBarEventImageView eEvent)
{
}

void CEventHandlerCamera::OnToolbarEventRavidLogViewer(Ravid::Framework::CRavidLogViewer * pView, Ravid::Framework::ERavidToolBarEventLogViewer eEvent)
{
}

void CEventHandlerCamera::OnToolbarEventImageProcessingTool(Ravid::Framework::CRavidImageProcessingTool * pView, Ravid::Framework::ERavidToolBarImageProcessingTool eEvent)
{
}

void CEventHandlerCamera::OnRunUIConfiguration(long nNumber)
{
}
//재정의 끝
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
//사용자 정의 함수 시작
bool CEventHandlerCamera::SetCameraImageBuffer()
{
	bool bReturn = true;

	int nObjectID = GetObjectID();


	do 
	{
		//////////////////////////////////////////////////////////////////////////
		//Create Image
		//생성시 지정된 Device를 로드한다.
		CDeviceBase* pDevice = CDeviceManager::GetDeviceByIndex(m_eDevNo);
		if(!pDevice)
			return false;

		//카메라에 해당하는 View 연결
		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), m_eDevNo));
		if(!pImageView)
			return false;

		//실제 Setting File에 로드한 카메라의 클래스 형태로 캐스팅 한다.
		switch(nObjectID)
		{
			
		case CDefinition::ECameraNum_Upper:
			{
				CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(pDevice);
				if(!pCamera)
					return false;

				//Area카메라의 경우 SizeX, SizeY만 있을 것이므로 해당 데이터를 이용해 이미지 버퍼의 크기를 정해준다.
				int nSizeX = -1;
				int nSeqLength = -1;
				int nPageLength = -1;

				//Device내에 저장된 파라메터를 불러와 위의 데이터에 넣어줌.
				bReturn = pCamera->GetHactive_Px(&nSizeX) == EEuresysGetFunction_OK ? true : false;
				bReturn = pCamera->GetSeqLength_Ln(&nSeqLength) == EEuresysGetFunction_OK ? true : false;
				bReturn = pCamera->GetPageLength_Ln(&nPageLength) == EEuresysGetFunction_OK ? true : false;

				//예외처리.
				if(nSizeX < 1 || nSeqLength < 3 || nPageLength < 1)
					return false;

				//현재 버퍼가 존재하는지 Check
				if(m_rCameraImage.GetBuffer())
					m_rCameraImage.Clear();

				if(m_rImageBufferMono.GetBuffer())
					m_rImageBufferMono.Clear();

				if(m_rImageBufferMonoTong.GetBuffer())
					m_rImageBufferMonoTong.Clear();

				if(m_rlDefctMapBuff.GetBuffer())
					m_rlDefctMapBuff.Clear();
	

				CMultipleVariable rmvFillValue;
				rmvFillValue.AddValue(255);
				bReturn &= m_rImageBufferMono.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_1C_U8) == EAlgorithmResult_OK ? true : false;
	
				bReturn &= m_rImageBufferMonoTong.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_1C_U8) == EAlgorithmResult_OK ? true : false;

				bReturn &= m_rlDefctMapBuff.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_1C_U8) == EAlgorithmResult_OK ? true : false;


				rmvFillValue.AddValue(255);
				rmvFillValue.AddValue(255);
				//카메라 파라메터와 맞는 ImageBuffer 생성
				bReturn &= m_rCameraImage.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_3C_U8) == EAlgorithmResult_OK ? true : false;


			}
			break;
		case CDefinition::ECameraNum_Lower:
			{
				CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(pDevice);
				if(!pCamera)
					return false;

				//Area카메라의 경우 SizeX, SizeY만 있을 것이므로 해당 데이터를 이용해 이미지 버퍼의 크기를 정해준다.
				int nSizeX = -1;
				int nSeqLength = -1;
				int nPageLength = -1;

				//Device내에 저장된 파라메터를 불러와 위의 데이터에 넣어줌.
				bReturn = pCamera->GetHactive_Px(&nSizeX) == EEuresysGetFunction_OK ? true : false;
				bReturn = pCamera->GetSeqLength_Ln(&nSeqLength) == EEuresysGetFunction_OK ? true : false;
				bReturn = pCamera->GetPageLength_Ln(&nPageLength) == EEuresysGetFunction_OK ? true : false;

				//예외처리.
				if(nSizeX < 1 || nSeqLength < 3 || nPageLength < 1)
					return false;

				//현재 버퍼가 존재하는지 Check
				if(m_rCameraImage.GetBuffer())
					m_rCameraImage.Clear();

				if(m_rlDefctMapBuff.GetBuffer())
					m_rlDefctMapBuff.Clear();

				CMultipleVariable rmvFillValue;
				rmvFillValue.AddValue(255);

				//카메라 파라메터와 맞는 ImageBuffer 생성
				bReturn &= m_rCameraImage.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_1C_U8) == EAlgorithmResult_OK ? true : false;
				bReturn &= m_rlDefctMapBuff.CreateImageBuffer(nSeqLength, nSizeX, rmvFillValue, CRavidImage::EValueFormat_1C_U8) == EAlgorithmResult_OK ? true : false;

			}
			break;
		default:
			break;
		}
		
		pImageView->SetImageInfo(&m_rCameraImage);

		bReturn = ResetCameraImageBuffer();
		//////////////////////////////////////////////////////////////////////////
	}
	while(false);

	return bReturn;
}

bool CEventHandlerCamera::ResetCameraImageBuffer()
{
	bool bReturn = false;

	int nObjectID = GetObjectID();


	do
	{
		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), m_eDevNo));
		if(!pImageView)
			break;


		CMultipleVariable rmvFillValue;
		rmvFillValue.AddValue(255);

		if(m_eDevNo == EDeviceNo_ColorLineCamera)
		{
			rmvFillValue.AddValue(255);
			rmvFillValue.AddValue(255);
		}

		if(m_rCameraImage.Mask(rmvFillValue, nullptr) == EAlgorithmResult_OK)
			bReturn = true;
		else
			bReturn = false;

		for(int i = 0; i < CDefinition::ELayerNo_Count; ++i)
			pImageView->GetLayer(i)->Clear();


		pImageView->SetImageInfo(&m_rCameraImage, false);
		pImageView->Invalidate();

		m_nGrabCount = 0;
	}
	while(false);

	return bReturn;
}

void CEventHandlerCamera::ClearCameraImageBuffer()
{	
	if(m_rCameraImage.GetBuffer())	
		m_rCameraImage.Clear();

}

void CEventHandlerCamera::CameraBufferRotateAndPasteColor(_In_ CRavidImage *pImgInfo, _In_ int nCount, _In_ bool bLastShot)
{

	m_csBuffer.Lock();

	do 
	{
		CRavidImage* pImageBufferColor = &m_rCameraImage;

		if (!pImageBufferColor)
			break;


		double dblAngle = -90.000;
		bool bUseResize = true;
		CRavidImage::EInterpolationMethod eMethod = CRavidImage::EInterpolationMethod_NearestNeighbor;

		CMultipleVariable mvFill;
		mvFill.AddValue(0.000);
		mvFill.AddValue(0.000);
		mvFill.AddValue(0.000);

		ptrdiff_t nImageX = pImgInfo->GetSizeY();
		ptrdiff_t nImageY = pImgInfo->GetSizeX();

		CRavidRect<double> rrSrc(0, 0, nImageX, nImageY);
		CRavidRect<double> rrDst;

		double dblStartPos = rrSrc.left + (nImageX * nCount);

		rrDst.left = dblStartPos;
		rrDst.top = rrSrc.top;
		rrDst.right = rrDst.left + nImageX;
		rrDst.bottom = rrSrc.bottom;

#pragma omp parallel for schedule(guided)
		for (ptrdiff_t y = 0; y < nImageY; ++y)
		{
			for (ptrdiff_t x = 0; x < nImageX; ++x)
			{
				BYTE R = 0;
				BYTE G = 0;
				BYTE B = 0;

				ptrdiff_t nSrcPosX = (pImgInfo->GetSizeX() - 1) - y;
				ptrdiff_t nSrcPosY = x;

				pImgInfo->GetValue(nSrcPosX, nSrcPosY, &R, &G, &B);

				ptrdiff_t nDstPosX = rrDst.left + x;
				ptrdiff_t nDstPosY = rrDst.top + y;

				pImageBufferColor->SetValue(nDstPosX, nDstPosY, R, G, B);
			}
		}

		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(GetObjectID()));

		if (!pHandler)
			break;
	
		if (CSequenceManager::IsRunning() && bLastShot)
		{
			SImageInfo* pImageInfo1 = new SImageInfo(pImageBufferColor, m_eDevNo);
			// Measurement is Color 
			pHandler->m_csMeasureInfo.Lock();
			pHandler->m_deqMeasureInfo.push_front(pImageInfo1);
			pHandler->m_csMeasureInfo.Unlock();

			SImageInfo* pImageInfo2 = new SImageInfo(pImageBufferColor, m_eDevNo);

			pHandler->m_csFindDefectInfo.Lock();
			pHandler->m_deqFindDefectInfo.push_front(pImageInfo2);
			pHandler->m_csFindDefectInfo.Unlock();

			pHandler->SetGrabEnd(true);
		}
		

	} while (false);

	
	m_csBuffer.Unlock();

}

void CEventHandlerCamera::CameraBufferRotateAndPasteMono(CRavidImage * pImgInfo, _In_ int nCount, _In_ bool bLastShot)
{
	m_csBuffer.Lock();

	do 
	{
		CRavidImage* pImageBuffer = &m_rCameraImage;

		if (!pImageBuffer)
			break;

		double dblAngle = -90.000;
		bool bUseResize = true;
		CRavidImage::EInterpolationMethod eMethod = CRavidImage::EInterpolationMethod_NearestNeighbor;

		CMultipleVariable mvFill;
		mvFill.AddValue(0.000);
		mvFill.AddValue(0.000);
		mvFill.AddValue(0.000);

		ptrdiff_t nImageX = pImgInfo->GetSizeY();
		ptrdiff_t nImageY = pImgInfo->GetSizeX();

		CRavidRect<double> rrSrc(0, 0, nImageX, nImageY);
		CRavidRect<double> rrDst;

		double dblStartPos = rrSrc.left + (nImageX * nCount);

		rrDst.left = dblStartPos;
		rrDst.top = rrSrc.top;
		rrDst.right = rrDst.left + nImageX;
		rrDst.bottom = rrSrc.bottom;

#pragma omp parallel for schedule(guided)
		for (ptrdiff_t y = 0; y < nImageY; ++y)
		{
			for (ptrdiff_t x = 0; x < nImageX; ++x)
			{
				BYTE bGv = 0;

				ptrdiff_t nSrcPosX = (pImgInfo->GetSizeX() - 1) - y;
				ptrdiff_t nSrcPosY = x;

				pImgInfo->GetValue(nSrcPosX, nSrcPosY, &bGv);


				ptrdiff_t nDstPosX = rrDst.left + x;
				ptrdiff_t nDstPosY = rrDst.top + y;

				pImageBuffer->SetValue(nDstPosX, nDstPosY, bGv);

			}
		}


		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(GetObjectID()));

		if (!pHandler)
			break;

		if (CSequenceManager::IsRunning() && bLastShot)
		{
			SImageInfo* pImageInfo1 = new SImageInfo(pImageBuffer, m_eDevNo);

			pHandler->m_csMeasureInfo.Lock();
			pHandler->m_deqMeasureInfo.push_front(pImageInfo1);
			pHandler->m_csMeasureInfo.Unlock();

			SImageInfo* pImageInfo2 = new SImageInfo(pImageBuffer, m_eDevNo);

			pHandler->m_csFindDefectInfo.Lock();
			pHandler->m_deqFindDefectInfo.push_front(pImageInfo2);
			pHandler->m_csFindDefectInfo.Unlock();

			pHandler->SetGrabEnd(true);
		}


	} while (false);

	m_csBuffer.Unlock();
}

bool CEventHandlerCamera::RotateImage(_In_ CRavidImage *pImgInfo, _In_ int nCh, _In_ int nCount)
{
	bool bReturn = false;

	do
	{
		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), m_eDevNo));
		if(!pImageView)
			return false;

		if(!pImgInfo)
			break;

		BYTE* pSrc = pImgInfo->GetBuffer();
		BYTE* pDst = m_rCameraImage.GetBuffer();


		ptrdiff_t nSrcX = pImgInfo->GetSizeX();
		ptrdiff_t nSrcY = pImgInfo->GetSizeY();

		ptrdiff_t nDstSizeX = m_rCameraImage.GetSizeX();
		ptrdiff_t nDstSizeY = m_rCameraImage.GetSizeY();

		ptrdiff_t nCopyPosition = nCount * nSrcY;

		for(ptrdiff_t y = 0; y < nSrcY; ++y)
		{
			for(ptrdiff_t x = 0; x < nSrcX; ++x)
			{
				*(pDst + (nDstSizeX * x) + nDstSizeX - nCopyPosition - y) = *(pSrc + ((y * nSrcX) + x));
			}
		}

		pImageView->SetImageInfo(&m_rCameraImage);

	}
	while(false);

	return bReturn;
}

CRavidImage * CEventHandlerCamera::GetGrayImage(CRavidImage * pSrc, CRavidRect<double> rrROI, eColorImageCalType eType)
{

	if(eType == 0)
		eType = eColorImageCalType_R;

	rrROI.Inflate(2,2,2,2);

	rrROI.left = __max(rrROI.left, 10);
	rrROI.top = __max(rrROI.top, 10);
	rrROI.right = __min(rrROI.right, (int)pSrc->GetSizeX() - 10);
	rrROI.bottom = __min(rrROI.bottom, (int)pSrc->GetSizeY() - 10);

	long nStart = rrROI.top;
	long nEnd = rrROI.bottom;
#pragma omp parallel for schedule(guided)
	for(ptrdiff_t y = nStart; y < nEnd; ++y)
	{
		for(ptrdiff_t x = rrROI.left; x < rrROI.right; ++x)
		{
			BYTE nGV[3] = {0,};
			pSrc->GetValue(x, y, &nGV[eColorImageType_B], &nGV[eColorImageType_G], &nGV[eColorImageType_R]);


			BYTE nGVL = 0;//R;
// 			if(eType == eColorImageType_G)
// 				nGV = G;
// 			else if(eType == eColorImageType_B)
// 				nGV = B;

			int nSum = 0;
			int nCount = 0;
			for(int i = 0; i < eColorImageType_Count; i++)
			{
				int nType = eType;
				if(nType & (1 << i))
				{
					nSum += nGV[i];
					++nCount;
				}
			}

			if(nSum && nCount)
				nGVL = nSum / nCount;

			if(nGV[eColorImageType_B] > 250 && nGV[eColorImageType_G] > 250 && nGV[eColorImageType_R] > 250)
				nGVL = 100;

			m_rImageBufferMonoTong.SetValue(x, y, nGVL);
		}
	}

	return &m_rImageBufferMonoTong;
}

CRavidImage * CEventHandlerCamera::GetGrayImage_SIMD(CRavidImage * pSrc, CRavidRect<double> rrROI, eColorImageType eType)
{	

	eColorImageCalType eTypeConv = eColorImageCalType_R;

	switch(eType)
	{
	case CDefinition::eColorImageType_R:
		eTypeConv = eColorImageCalType_R;
		break;
	case CDefinition::eColorImageType_G:
		eTypeConv = eColorImageCalType_G;
		break;
	case CDefinition::eColorImageType_B:
		eTypeConv = eColorImageCalType_B;
		break;
	default:
		break;
	}

	rrROI.Inflate(2, 2, 2, 2);

	int nWidth = rrROI.GetWidth();

	if(nWidth < 16)
		return GetGrayImage(pSrc, rrROI, eTypeConv);

	int nRemain = nWidth % 16;
	rrROI.right += (16 - nRemain);

	rrROI.top = __max(rrROI.top, 10);
	rrROI.bottom = __min(rrROI.bottom, (int)pSrc->GetSizeY() - 10);

	if(rrROI.left  < 10)
		return GetGrayImage(pSrc, rrROI, eTypeConv);

	if(rrROI.right > (int)pSrc->GetSizeX() - 10)
		return GetGrayImage(pSrc, rrROI, eTypeConv);


	__m128i mmSrc, mmDst;
	__m128i mmZero = _mm_setzero_si128();
	__m128i mmCmp = _mm_set1_epi16((short)0);
	__m128i mmVL;
	__m128i mmVH;
	__m128i mmRL;
	__m128i mmRH;
//	__m128i mmR;


	CRavidImage riImage_Color;
	CRavidImage riImage_Mono;


	CRavidRect<int> rrSrc(0, 0, rrROI.GetWidth(), rrROI.GetHeight());
	riImage_Color.CreateImageBuffer(rrSrc.GetWidth(), rrSrc.GetHeight(), 0, CRavidImage::EValueFormat_3C_U8);
	riImage_Mono.CreateImageBuffer(rrSrc.GetWidth(), rrSrc.GetHeight(), 0, CRavidImage::EValueFormat_1C_U8);

	pSrc->Paste(riImage_Color, &rrROI, &rrSrc);

	CInspection i;
	i.GetColorComponent(&riImage_Color, &riImage_Mono, eType);
// 	CString str;
// 	str.Format(_T("C:\\Ravid\\Chec1.bmp"));
// 	riImage_Mono.Save(str);


	BYTE* pImgSrc = riImage_Mono.GetBuffer();
	BYTE* pImgDst = m_rImageBufferMonoTong.GetBuffer();
	 
	for(int y = rrROI.top; y < rrROI.bottom; ++y)
	{
		int nIdxSrc = riImage_Mono.GetSizeX() * (y - rrROI.top);
		int nIdxDst = m_rImageBufferMonoTong.GetSizeX() * y;

		for(int x = rrROI.left; x < rrROI.right; x += 16)
		{
			int nSrcX = x - rrROI.left;

			mmSrc = _mm_loadu_si128((__m128i*)(pImgSrc + nIdxSrc + nSrcX));

			mmVL = _mm_unpacklo_epi8(mmSrc, mmZero);
			mmVH = _mm_unpackhi_epi8(mmSrc, mmZero);

			mmRL = _mm_max_epi16(mmVL, mmCmp);
			mmRH = _mm_max_epi16(mmVH, mmCmp);

			mmDst = _mm_packus_epi16(mmRL, mmRH);

			_mm_storeu_si128((__m128i*)(pImgDst + nIdxDst + x), mmDst);
		}

	} 


// 	str.Format(_T("C:\\Ravid\\Chec1123.bmp"));
// 	m_rImageBufferMonoTong.Save(str);

	return &m_rImageBufferMonoTong;
}


bool CEventHandlerCamera::GrabStart()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), ECameraNum_Upper + nObjectID));

		if(!pCamera)
			break;

		if(!pCamera->IsInitialized())
			break;

		if(!pCamera->IsGrabAvailable())
			break;

		if(pCamera->Grab() != EDeviceGrabResult_OK)
			break;

		if(pCamera->Trigger() != EDeviceTriggerResult_OK)
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEventHandlerCamera::GrabStop()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), ECameraNum_Upper + nObjectID));

		if(!pCamera)
			break;

		if(!pCamera->IsInitialized())
			break;

		if(pCamera->Stop() != EDeviceStopResult_OK)
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEventHandlerCamera::TriggerStart()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), ECameraNum_Upper + nObjectID));

		if(!pCamera)
			break;

		if(!pCamera->IsInitialized())
			break;

		if(pCamera->Trigger() != EDeviceTriggerResult_OK)
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

//사용자 정의 함수 끝
//////////////////////////////////////////////////////////////////////////

