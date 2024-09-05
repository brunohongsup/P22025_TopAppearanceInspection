
#include "stdafx.h"

#include "EventHandlerMain.h"
#include "FormViewRegister.h"
#include "FormViewOptions.h"
#include "FormViewTopMenu.h"
#include "FormViewBotMenu.h"
#include "FormViewCameraControl.h"
#include "FormViewMain.h"
#include "ISaveInfo.h"
#include "CSaveData.h"
#include "CSaveImage.h"
#include "json_Generator.h"

#include "CommonCls/UtilStringManager.h"
#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif

CEventHandlerMain::CEventHandlerMain()
	: m_pDllSocket(nullptr)
{
#ifdef _DEBUG
#else
	
#endif
	MelsecThreadStart();
	AliveThreadStart();
	StartSaveThread();
	m_pDllSocket = new CCellTrackerSocketVer2013();
	m_eCellDataReceived = ECellDataReceivedStatus::NotReceived;
	CellTrackerThreadStart();
}

CEventHandlerMain::~CEventHandlerMain()
{
#ifdef _DEBUG
#else
	MelsecThreadStop();

	AliveThreadStop();
#endif
	StopSaveThread();
	CellTrackerThreadStop();
	if(m_pDllSocket)
	{
		delete m_pDllSocket;
		m_pDllSocket = nullptr;
	}
}

void CEventHandlerMain::OnInspect(Ravid::Algorithms::CRavidImage * pImgInfo, int nInspectionType, Ravid::Framework::CRavidImageView * pView, int nChannel)
{
	do
	{
		//LightOn(true);
	}
	while(false);
}

void CEventHandlerMain::OnTeach(Ravid::Algorithms::CRavidImage * pImgInfo, Ravid::Framework::CTeachingObject * pTeachingObject, Ravid::Framework::CRavidImageView * pView, int nChannel)
{
}

void CEventHandlerMain::OnAcquisition(Ravid::Algorithms::CRavidImage * pImgInfo, int nChannel, Ravid::Framework::CRavidImageView * pView)
{
}

void CEventHandlerMain::OnReceivingPacket(Ravid::Framework::CPacket * pPacket, Ravid::Device::CDeviceBase * pDevice)
{
}

void CEventHandlerMain::OnLogMessage(Ravid::Framework::SRavidLogData * pLogData)
{
}

void CEventHandlerMain::OnSequenceStart()
{
}

void CEventHandlerMain::OnSequencePause()
{
}

void CEventHandlerMain::OnSequenceStop()
{
}

void CEventHandlerMain::OnOpenModel(Ravid::Framework::CModelInfo * pModelInfo)
{
	do
	{
		//SaveJsonData(true, GetCellTrackingData());

		CFormViewRegister* pRegister = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
		if(!pRegister)
			return;

		CFormViewOptions* pOptionsFrom = dynamic_cast<CFormViewOptions*>(CUIManager::FindView(typeid(CFormViewOptions)));
		if(!pOptionsFrom)
			return;

		CFormViewTopMenu* pTopView = dynamic_cast<CFormViewTopMenu*>(CUIManager::FindView(typeid(CFormViewTopMenu)));
		if(!pTopView)
			return;

		CFormViewBotMenu* pBottomView = dynamic_cast<CFormViewBotMenu*>(CUIManager::FindView(typeid(CFormViewBotMenu)));
		if(!pBottomView)
			return;

		CFormViewCameraControl* pCameraForm = dynamic_cast<CFormViewCameraControl*>(CUIManager::FindView(typeid(CFormViewCameraControl)));
		if(!pCameraForm)
			return;

		CFormViewMain* pMainFrom = dynamic_cast<CFormViewMain*>(CUIManager::FindView(typeid(CFormViewMain)));
		if(!pMainFrom)
			return;

		if(!pModelInfo)
			break;

	

		//On OpenModel -> UI Configuration Set
	//	CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);

		//모델 열때마다 최근 모델 갱신 하기, 저장 Path 모델 루트 폴더
		m_AssistDskim.SaveLastModel();

		GetModelParam(m_sParameter);

		m_pCurrentModelInfo = pModelInfo;
		m_sPrevParam = m_sParameter;

		SaveJsonParam(pModelInfo, EModifyReason_OnOff);

		pRegister->SetModelParamPtr(&m_sParameter);
		pRegister->OnOpenModel();

		pOptionsFrom->SetModelParamPtr(&m_sParameter);
		pOptionsFrom->InitData();

		ConnectCellTracker();

		MVSolOpen("COM2");

		SetMVSolTrigger(0, EPacketDir_Send_Foward);

		//pTopView->SetModelParamPtr(&m_sParameter);
		//pTopView->InitData();
		pBottomView->SetModelParamPtr(&m_sParameter);
		pBottomView->InitData();




		pCameraForm->SetModelParamPtr(&m_sParameter);
		pCameraForm->UpdateSheet();
	

		m_strModelName = pModelInfo->GetModelName();

		SetFileCleaner();
	}
	while(false);
}

void CEventHandlerMain::OnCloseModel(Ravid::Framework::CModelInfo * pModelInfo)
{
	MVSolTerminate();
	SaveJsonParam(pModelInfo, EModifyReason_OnOff);
	TerminateFileCleaner();

}

void CEventHandlerMain::OnLogIn()
{
}

void CEventHandlerMain::OnLogOut()
{
}

void CEventHandlerMain::OnModelParameterSaveChanged()
{
	GetModelParam(m_sParameter);

	SaveJsonParam(m_pCurrentModelInfo, EModifyReason_ModifyAlgorithm);

}

void CEventHandlerMain::OnUserToolbarEventRavidMainFrame(UINT ulResourceID)
{
	int kkk = 0;
}

void CEventHandlerMain::OnToolbarEventRavidMainFrame(Ravid::Framework::ERavidToolBarEventMainFrame eEvent)
{
	int kkk = 0;
}

void CEventHandlerMain::OnToolbarEventRavidChildFrameBase(CView * pView, Ravid::Framework::ERavidToolBarEventChildFrameBase eEvent)
{
	int kkk = 0;
}

void CEventHandlerMain::OnToolbarEventRavidImageView(Ravid::Framework::CRavidImageView * pView, Ravid::Framework::ERavidToolBarEventImageView eEvent)
{
	int kkk = 0;
}

void CEventHandlerMain::OnToolbarEventRavidLogViewer(Ravid::Framework::CRavidLogViewer * pView, Ravid::Framework::ERavidToolBarEventLogViewer eEvent)
{
	int kkk = 0;
}

void CEventHandlerMain::OnToolbarEventImageProcessingTool(Ravid::Framework::CRavidImageProcessingTool * pView, Ravid::Framework::ERavidToolBarImageProcessingTool eEvent)
{
}

void CEventHandlerMain::OnRunUIConfiguration(long nNumber)
{
}

void CEventHandlerMain::OnTerminate()
{
}

void CEventHandlerMain::MelsecThreadStart()
{
	m_bMelsecThread = true;
	CreateRavidThreadContext(pContext)
	{
		while(m_bMelsecThread)
		{
			MelsecReadIO();
			MelsecReadWord();

			// 멜섹 체크 할거 있으면 추가하세요.
			//2호기 추가
			//CheckPlcStopSignal();
			Sleep(20);
		}
	};
	CThreadHelper::Run(pContext);
	m_pMelsecThread = pContext;
}

ISaveInfo * CEventHandlerMain::PopSaveInfo()
{
	m_csSaveQueue.Lock();
	if(m_queSaveInfo.empty())
	{
		m_csSaveQueue.Unlock();
		return nullptr;
	}
	
	ISaveInfo* pFront = m_queSaveInfo.front();
	m_queSaveInfo.pop();
	m_csSaveQueue.Unlock();

	return pFront;
}

bool CEventHandlerMain::PushSaveInfo(ISaveInfo * pSaveInfo)
{
	if(pSaveInfo == nullptr)
	{
		return false;
	}

	m_csSaveQueue.Lock();
	m_queSaveInfo.push(pSaveInfo);
	m_csSaveQueue.Unlock();

	return true;
}

void CEventHandlerMain::StartSaveThread()
{
	m_bSaveThread = true;
	CreateRavidThreadContext(pContext)
	{
		while(m_bSaveThread)
		{
			ISaveInfo* pSaveInfo = PopSaveInfo();
			if(pSaveInfo == nullptr)
			{
				Sleep(10000);
				continue;
			}

			bool bSaveResult = pSaveInfo->DoSave();
			if(bSaveResult)
			{
				delete pSaveInfo;
			}
			else
			{
				PushSaveInfo(pSaveInfo);
			}
			Sleep(5000);
		}
	};
	CThreadHelper::Run(pContext);
	m_pSaveThread = pContext;
}

void CEventHandlerMain::StopSaveThread()
{
	if(m_pSaveThread)
	{
		m_bSaveThread = false;
		CThreadHelper::Wait(m_pSaveThread, 2000);
	}
}

void CEventHandlerMain::CellTrackerThreadStart()
{
	m_bCellTrackerThread = true;
	CreateRavidThreadContext(pContext)
	{
		while(m_bCellTrackerThread)
		{
			if(!m_pDllSocket)
				continue;

			sCellTrackerData* pInfo = nullptr;

			m_pDllSocket->Lock();
			std::deque<sCellTrackerData*>* pQueue = m_pDllSocket->GetDataQueue();

			if(pQueue->size())
			{
				pInfo = pQueue->front();
				pQueue->pop_front();
				if(HasReceivedCellData() == ECellDataReceivedStatus::NotReceived)
				{
					m_sCellTrackingData = *pInfo;
					CLogManager::Write(ELogType_Initialize, _T("CellNum=%d,LotID=%s,CellID1=%s,CellID2=%s"), pInfo->nCellIDCount, pInfo->strLotID, pInfo->strCellID[0], pInfo->strCellID[1]);
					SetReceivedCellDataStatus(ECellDataReceivedStatus::Received);
				}
			}
			m_pDllSocket->Unlock();

			if(pInfo)
			{
				delete pInfo;
				pInfo = nullptr;
			}
		}
	};
	CThreadHelper::Run(pContext);
	m_pCellTrackerThread = pContext;
}

void CEventHandlerMain::CellTrackerThreadStop()
{
	if(m_pCellTrackerThread)
	{
		m_bCellTrackerThread = false;
		if(m_pCellTrackerThread)
			CThreadHelper::Wait(m_pCellTrackerThread, 1500);
	}
}

void CEventHandlerMain::ShowCellTrackerIPConfigShow()
{
	m_pDllSocket->ToggleShowHide();
}

void CEventHandlerMain::ConnectCellTracker()
{
	CString strPath;
	GetCurrentDirectory(MAX_PATH, strPath.GetBuffer(MAX_PATH));
	strPath.ReleaseBuffer();
	strPath += _T("\\APIDLL_Fold\\Dll_API_Fold_Client_1");
	//strPath += _T('\\APIDLL_Fold\\Dll_API_Fold_Client_2');

	m_pDllSocket->EnableQueueBuffer(strPath);
}


void CEventHandlerMain::MelsecThreadStop()
{
	if(m_pMelsecThread)
	{
		m_bMelsecThread = false;
		if(m_pMelsecThread)
		{
			CThreadHelper::Wait(m_pMelsecThread, 1500);
		}
	}
}

void CEventHandlerMain::AliveThreadStart()
{
	m_bAliveThread = true;
	CreateRavidThreadContext(pContext)
	{
		while(m_bAliveThread)
		{
			bool bIO = MelsecGetDataIO(EAddressType_Output, EMelsecBitOut_Alive);
			MelsecWriteIO(EMelsecBitOut_Alive, !bIO);

			Sleep(1000);
		}
	};
	CThreadHelper::Run(pContext);
	m_pAliveThread = pContext;
}

void CEventHandlerMain::AliveThreadStop()
{
	if(m_pAliveThread)
	{
		m_bAliveThread = false;
		if(m_pAliveThread)
			CThreadHelper::Wait(m_pAliveThread, 1500);
	}
}
void CEventHandlerMain::CheckPlcStopSignal()
{
	if(MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_InspectionStop))
	{
		if (CSequenceManager::IsRunning())
		{
			CSequenceManager::Stop();
		}
	}
}

bool CEventHandlerMain::MelsecInitialize()
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
		if(!pMNETG) break;

		pMNETG->SetChannel(151);
		pMNETG->SetStationNo(255);
		pMNETG->SetNetworkNo(0);
		pMNETG->Initialize() == EDeviceInitializeResult_OK ? bResult = true : bResult = false;
	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecTerminate()
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
		if(!pMNETG) break;

		pMNETG->Terminate() == EDeviceTerminateResult_OK ? bResult = true : bResult = false;
	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecReadIO()
{
	bool bResult = false;

	do
	{
		//PLC, Vision Address Block Read
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		pMNETG->RecvData((long)MNETG_DEVTYPE_B, CDefinition::EMelsecBitIn_StartAddr, sizeof(m_nBitIn) / sizeof(short), m_nBitIn);
		//pMNETG->RecvData((long)MNETG_DEVTYPE_B, CDefinition::EMelsecBitOut_StartAddr, sizeof(m_nBitOut) / sizeof(short), m_nBitOut);
		bResult = true;

	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecReadWord()
{
	bool bReturn = false;

	do
	{
		auto app = AfxGetApp();
		auto visionApp = static_cast<CP22025_TopEngBatteryAppearanceInspectionApp*>(app);
		auto cellTracker = CCellTracker::GetInstance();

		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		bReturn = pMNETG->RecvData((long)MNETG_DEVTYPE_W, CDefinition::EMelsecWordIn_StartAddr, sizeof(m_nWordIn) / sizeof(short), m_nWordIn);
		bReturn &= pMNETG->RecvData((long)MNETG_DEVTYPE_W, CDefinition::EMelsecWordOut_StartAddr, sizeof(m_nWordOut) / sizeof(short), m_nWordOut);
	}
	while(false);

	return bReturn;
}

bool CEventHandlerMain::MelsecWriteIO(int nAddress, bool bON, bool bBlock)
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		int nIndex = (int)nAddress / 16;

		if(nIndex >= (CDefinition::EMelsecBitOut_ReadCount / 16 + 1))
			break;
		int nShift = (int)nAddress % 16;

		int nAdd = EMelsecBitOut_StartAddr + nAddress - nShift;
		int nTemp = (1 << (int)nShift);

		if(bON)
			m_nBitOut[nIndex] |= nTemp;
		else
			m_nBitOut[nIndex] &= ~nTemp;

		if(bBlock)
		{
			short nBlock = bON == true ? 65535 : 0;
			pMNETG->SendData((long)MNETG_DEVTYPE_B, nAdd, 1, &nBlock);
		}
		else
		{
			pMNETG->SendData((long)MNETG_DEVTYPE_B, nAdd, 1, &m_nBitOut[nIndex]);
		}

		bResult = true;

	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecWriteIO(int nAddress, bool bON, int nCount)
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceSocketMNETG), 0));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		int nIndex = (int)nAddress / 16;
		if(nIndex >= (EMelsecBitOut_ReadCount / 16 + 1))
			break;
		int nShift = (int)nAddress % 16;

		short nAdd = EMelsecBitOut_StartAddr + nAddress - nShift;
		short nTemp = 0/*(1 << (int)nShift)*/;
		for(int i = 0; i < nCount; i++)
		{
			nTemp += 1 << (nShift + i);
		}

		if(bON)
			m_nBitOut[nIndex] |= nTemp;
		else
			m_nBitOut[nIndex] &= ~nTemp;

		if(false)
		{
			short nBlock = bON == true ? 65535 : 0;
			pMNETG->SendData((short)MNETG_DEVTYPE_B, nAdd, 1, &nBlock);
		}
		else
		{
			pMNETG->SendData((short)MNETG_DEVTYPE_B, nAdd, 1, &m_nBitOut[nIndex]);
		}

		bResult = true;

	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecWriteWord(int nAddress, long * nData)
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		int nAdd = EMelsecWordOut_StartAddr + nAddress;

		pMNETG->SendData((long)MNETG_DEVTYPE_W, nAdd, sizeof(*nData), (short*)nData);

		bResult = true;
		auto winApp = AfxGetApp();
		auto app = static_cast<CP22025_TopEngBatteryAppearanceInspectionApp*>(winApp);
	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecWriteWord(int nAddress, int nCount, short * nData)
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		int nAdd = EMelsecWordOut_StartAddr + nAddress;

		pMNETG->SendData((long)MNETG_DEVTYPE_W, nAdd, nCount, nData);

		bResult = true;

	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecWriteWord(int nAddress, int nCount, long * pData)
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceSocketMNETG), 0));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		short nAdd = EMelsecWordOut_StartAddr + nAddress;

		pMNETG->SendData((short)MNETG_DEVTYPE_W, nAdd, nCount, pData);

		bResult = true;

	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::MelsecWriteWordToString(int nAddress, CString lpszData)
{
	return false;
}

void CEventHandlerMain::ConvertLongToWord(long lSource, WORD * pDst, WORD * pDst2)
{
}

void CEventHandlerMain::ConvertShortToWord(short lSource, WORD * pDst, WORD * pDst2)
{
}

bool CEventHandlerMain::MelsecGetDataIO(CDefinition::EAddressType eType, int nAddress)
{
	bool bResult = false;

	do
	{
		int nIndex = (int)nAddress / 16;
		if(nIndex >= (EMelsecBitIn_ReadCount / 16 + 1))
			break;

		int nShift = (int)nAddress % 16;

		if(eType == EAddressType_Input)
			return bResult = (((m_nBitIn[nIndex] >> (int)nShift) & 0x01) == 1 ? true : false);

		if(eType == EAddressType_Output)
			return bResult = (((m_nBitOut[nIndex] >> (int)nShift) & 0x01) == 1 ? true : false);

	}
	while(false);

	return bResult;
}

long CEventHandlerMain::MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress)
{
	long lResult = 0;

	do
	{


		if(eType == EAddressType_Input)
		{
			if(0 <= nAddress && EMelsecWordIn_ReadCount <= nAddress)
				break;

			return m_nWordIn[nAddress];
		}

		if(eType == EAddressType_Output)
		{
			if(0 <= nAddress && EMelsecWordOut_ReadCount <= nAddress)
				break;

			return m_nWordOut[nAddress];
		}
	}
	while(false);

	return lResult;
}

void CEventHandlerMain::MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress, short * nData)
{
	do
	{
		if(eType == EAddressType_Input)
		{
			if(0 <= nAddress && EMelsecWordIn_ReadCount <= nAddress)
				break;

			*nData = *(short*)&m_nWordIn[nAddress];
		}
		if(eType == EAddressType_Output)
		{
			if(0 <= nAddress && EMelsecWordOut_ReadCount <= nAddress)
				break;

			*nData = *(short*)&m_nWordOut[nAddress];
		}
	}
	while(false);
}

void CEventHandlerMain::MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress, long * nData)
{
	do
	{
		if(eType == EAddressType_Input)
		{
			if(0 <= nAddress && EMelsecWordIn_ReadCount <= nAddress)
				break;

			*nData = *(long*)&m_nWordIn[nAddress];
		}
		if(eType == EAddressType_Output)
		{
			if(0 <= nAddress && EMelsecWordOut_ReadCount <= nAddress)
				break;

			*nData = *(long*)&m_nWordOut[nAddress];
		}
	}
	while(false);
}

CString CEventHandlerMain::MelsecReadWordData(int nReadAddress, int nWordSize)
{
	CString strData;

	for(int nAddress = nReadAddress; nAddress < (nReadAddress + nWordSize); ++nAddress)
	{
		if(m_nWordIn[nAddress] == 0)
			continue;

		strData.AppendFormat(_T("%c%c"), LOBYTE(m_nWordIn[nAddress]), HIBYTE(m_nWordIn[nAddress]));
	}

	return strData;
}

bool CEventHandlerMain::MelsecReadTempBuffer()
{
	bool bResult = false;

	do
	{
		CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
		if(!pMNETG) break;
		if(!pMNETG->IsInitialized()) break;

		m_csMelsecTemp.Lock();

		if(m_cSelectedArea == 'B')
			bResult = pMNETG->RecvData((short)MNETG_DEVTYPE_B, m_nSelectedAddr, sizeof(m_nBitTemp) / sizeof(short), m_nBitTemp);
		if(m_cSelectedArea == 'W')
			bResult = pMNETG->RecvData((short)MNETG_DEVTYPE_W, m_nSelectedAddr, sizeof(m_nWordTemp) / sizeof(short), m_nWordTemp);

		m_csMelsecTemp.Unlock();
	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::CopyMelsecTempBuffer(short * pDstData)
{
	bool bResult = false;

	do
	{
		if(m_cSelectedArea == 'B')
		{
			for(int i = 0; i < CDefinition::EMelsecBitIn_ReadCount / 16 + 1; i++)
			{
				*(pDstData + i) = m_nBitTemp[i];
			}

			bResult = true;
		}
		else if(m_cSelectedArea == 'W')
		{
			for(int i = 0; i < CDefinition::EMelsecWordIn_ReadCount + 1; i++)
			{
				*(pDstData + i) = m_nWordTemp[i];
			}

			bResult = true;
		}
		else
			bResult = false;
	}
	while(false);

	return bResult;
}

bool CEventHandlerMain::SetMelsecTempInfo(int nAddress, char cArea)
{
	bool bResult = false;

	do
	{
		m_csMelsecTemp.Lock();

		m_nSelectedAddr = nAddress;
		m_cSelectedArea = cArea;

		m_csMelsecTemp.Unlock();
	}
	while(false);

	return bResult;
}


/////////////////////////////////////////////////////////////////////////////////////
// MVsol 
void CEventHandlerMain::MVSolOpen(string strPortNumber)
{
	//MVSol Initialize
	if(!GetMVSol()->IsInitialized())
		GetMVSol()->Initialize();


	if(!GetMVSol()->OpenSerialPort(strPortNumber.c_str()))
	{
		CLogManager::Write(ELogType_Initialize, _T("Failed To Initialize MVSol!!!,  Do not PortOpen"));
	}
	else
	{
		CLogManager::Write(ELogType_Initialize, _T("Succed To Initialize MVSol!!!"));
	}
}

void CEventHandlerMain::MVSolTerminate()
{
	GetMVSol()->Terminate();
	CLogManager::Write(ELogType_Initialize, _T("MVSol Terminate"));
}

bool CEventHandlerMain::SetMVSolTrigger(int nTriggerCH, EPacketDir eDir)
{
	bool bResult = false;

	do
	{
		CMVSolTrigger::EEncoderDir eEncoderdir;

		switch(eDir)
		{
		case CDefinition::EPacketDir_Send_Backward:
			{
				eEncoderdir = CMVSolTrigger::EEncoderDir_Reverse;
			}
			break;

		case CDefinition::EPacketDir_Send_Foward:
			{
				eEncoderdir = CMVSolTrigger::EEncoderDir_Normal;
			}
			break;

		}

		for(int i = 0; i < CMVSolTrigger::EEncoderCh_1 + 1; i++)
		{
			CMVSolTrigger::EEncoderCh eEncoderCh = CMVSolTrigger::EEncoderCh_0;

			GetMVSol()->SetEncoder(i, eEncoderdir, CMVSolTrigger::EEncoderType_DIFF, eEncoderCh);
			
// 			int nStartPos = 480000;
// 			if(i)
// 				nStartPos = 0;
// 
// 			GetMVSol()->SetStartPosition(i, nStartPos);
// 			GetMVSol()->SetEndPosition(i, 999999999);
// 			GetMVSol()->SetCycle(i, 40);
// 			GetMVSol()->SetEncoderResolution(0.000001);
		}


		//GetMVSol()->SetStartPosition(nTriggerCH, 1000);

		Sleep(10);
	}
	while(false);

	return bResult;
}

void CEventHandlerMain::AllClearMVSolTrigger()
{
	UINT nErr = 0;

	nErr = GetMVSol()->AllClearErrorCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearErrorCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearErrorCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearErrorCount: %d"), nErr);
	}

	nErr = GetMVSol()->AllClearDiCount();
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearDiCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearDiCount: %d"), nErr);
	}

	nErr = GetMVSol()->AllClearEncoderCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearEncoderCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearEncoderCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearEncoderCount: %d"), nErr);
	}

	nErr = GetMVSol()->AllClearPositionCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearPositionCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearPositionCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearPositionCount: %d"), nErr);
	}

	nErr = GetMVSol()->AllClearTriggerCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearTriggerCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearTriggerCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearTriggerCount: %d"), nErr);
	}

	CLogManager::Write(ELogType_Initialize, _T("MVSol Trigger All Clear!!!"));
}

void CEventHandlerMain::ClearMVSolTriggerBeforeGrab()
{
	UINT nErr = 0;

	nErr = GetMVSol()->AllClearEncoderCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearEncoderCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearEncoderCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearEncoderCount: %d"), nErr);
	}

	nErr = GetMVSol()->AllClearTriggerCount();
	CLogManager::Write(ELogType_Initialize, _T("AllClearTriggerCount: %d"), nErr);
	Sleep(5);
	if(nErr != 0)
	{
		nErr = GetMVSol()->AllClearTriggerCount();
		CLogManager::Write(ELogType_Initialize, _T("AllClearTriggerCount: %d"), nErr);
	}
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Light Control Setting

bool CEventHandlerMain::LightControllerSetBrightValue(int nCh, int nValue)
{
	bool bReturn = false;
	do
	{
		CDeviceRS232C* pSerial = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceRS232C), ERS232C_Light1));
		if(!pSerial)
			break;

		if(!pSerial->IsInitialized())
			break;

		if(nCh < -1 || nCh > 16)
			break;
		char cCh = '0';

		if(nCh > 10)
		{
			nCh -= 10;
			cCh = 'A';
		}

		cCh += nCh;

		CStringA strCommand;
		strCommand.Format("C%c%02x%c%c", cCh, nValue, 0x0D, 0x0A);

		CPacket cPacket;
		cPacket.SetData((char*)(LPCSTR)strCommand, strCommand.GetLength());

		if(pSerial->Send(&cPacket) != ECommSendResult_OK)
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEventHandlerMain::LightControllerEnableChannel(int nCh, bool bEnable, bool bAll)
{
	bool bReturn = false;
	do
	{
		CDeviceRS232C* pSerial = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceRS232C), ERS232C_Light1));
		if(!pSerial)
			break;

		if(!pSerial->IsInitialized())
			break;

		if(nCh < -1 || nCh > 16)
			break;
		char cCh = '0';

		if(nCh > 10)
		{
			nCh -= 10;
			cCh = 'A';
		}

		cCh += nCh;

		CStringA strType;
		if(bEnable)
			strType.Format("ON");
		else
			strType.Format("OF");

		CStringA strCommand;
		strCommand.Format("H%c%s%c%c", cCh, strType, 0x0D, 0x0A);

		if(bAll)
		{
			if(bEnable)
				strCommand.Format("AP11%c%c", 0x0D, 0x0A);
			else
				strCommand.Format("AP00%c%c", 0x0D, 0x0A);

		}

		CPacket cPacket;
		cPacket.SetData((char*)(LPCSTR)strCommand, strCommand.GetLength());

		if(pSerial->Send(&cPacket) != ECommSendResult_OK)
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEventHandlerMain::LightControllerSetting()
{
	bool bReturn = true;

	do 
	{
		SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		// 모델 파라미터.
		//BYTE nLightVal[5] = {150,150,70,70,70}; // 221213{150,150,150,150,70}; 
		for(int i = 0; i < 5; i ++)
			bReturn &= LightControllerSetBrightValue(i + 1, modelParam.cLightBrightness[i]);

	} while (false);

	return bReturn;
}

bool CEventHandlerMain::LightOn(bool bOn)
{
	return LightControllerEnableChannel(0, bOn, true);
}

void CEventHandlerMain::SaveJsonData()
{
	CString strJson;
	CJsonObject json;
	CJsonObject* pDataArray = new CJsonObject;

	sJSonKey sKey;

	// base // IN Data
	pDataArray->SetValue(sKey.lpszKey[EJson_CATEGORY], _T("INSP"));
	int nIdx = EJson_Vision_Input_Time;

	int nCount = EJson_Cell_Final_Judge - nIdx;
	for(int i = 0; i < nCount + 1; i++)
		pDataArray->SetValue(sKey.lpszKey[nIdx + i], GetJsonGeneralData(EJsonApperance(nIdx + i)));
	
																						  
	////////////////////////////////////////////////////
	//IQ 
	CJsonArray* pIQInfoArray = new CJsonArray;
	for (int i = 0; i < m_vctStringIQ.size(); i ++)
	{
		sApperanceIQ sIq = m_vctStringIQ[i];
		CJsonObject* pIQInfo = new CJsonObject;

		for(EJsonApperance eNum = EJson_Iq_Camera_Location; eNum < EJson_Iq_Image_File_Name + 1;)
		{
			pIQInfo->SetValue(sKey.lpszKey[eNum], sIq.strIq[eNum]);
			eNum = EJsonApperance(eNum + 1);
		}

		pIQInfoArray->Push(pIQInfo);
	}
	pDataArray->SetValue(_T("IQ_INFO"), pIQInfoArray);

	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Judge_Result], GetJsonGeneralData(EJson_Dimesion_Judge_Result));
	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Total_NG_Count], GetJsonGeneralData(EJson_Dimesion_Total_NG_Count));

	////////////////////////////////////////////////////
	//Dimension
	CJsonArray* pDimension1Array = new CJsonArray;
	CJsonArray* pDimension2Array = new CJsonArray;

	CJsonArray* pDimensionInfoArray = new CJsonArray;

	for(int i = 0; i < m_vctStringDimensionData.size(); i++)
	{
		sApperanceDimension sD = m_vctStringDimensionData[i];

		if(sD.strDimension[EJson_Dimesion_Judge] == _T("NG"))
		{
			pDimension1Array->Push(sD.strDimension[EJson_Dimesion_Name]);
			pDimension2Array->Push(sD.strDimension[EJson_Dimesion_Name_Real]);
		}

		CJsonObject* pDimension_Info = new CJsonObject;
		EJsonApperance eNum = EJson_Dimesion_Name;

		for(EJsonApperance eNum = EJson_Dimesion_Name; eNum < EJson_Dimesion_Offset + 1;)
		{
			pDimension_Info->SetValue(sKey.lpszKey[eNum], sD.strDimension[eNum]);
			eNum = EJsonApperance(eNum + 1);
		}

		pDimensionInfoArray->Push(pDimension_Info);

	}
	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Reason_All], pDimension1Array);
	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Reason_All_Real], pDimension2Array);

	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Reason_Main], GetJsonGeneralData(EJson_Dimesion_Reason_Main));
	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_Reason_Main_Real], GetJsonGeneralData(EJson_Dimesion_Reason_Main_Real));
	pDataArray->SetValue(sKey.lpszKey[EJson_Dimesion_NG_Value], GetJsonGeneralData(EJson_Dimesion_NG_Value));

	pDataArray->SetValue(_T("DIMENSION_INFO"), pDimensionInfoArray);

	////////////////////////////////////////////////////
	//Defect
	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Judge_Result], GetJsonGeneralData(EJson_Appearance_Judge_Result));
	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Total_NG_count], GetJsonGeneralData(EJson_Appearance_Total_NG_count));

	CJsonArray* pAppearance1Array = new CJsonArray;
	CJsonArray* pAppearance2Array = new CJsonArray;
	CJsonArray* pDefectInfoArray = new CJsonArray;

	for(int i = 0; i < m_vctStringDefectData.size(); i++)
	{

		sApperanceDefect sD = m_vctStringDefectData[i];

		pAppearance1Array->Push(sD.strDefect[EJson_Defect_Type_Rule_Base_Name]);
		pAppearance2Array->Push(sD.strDefect[EJson_Defect_Type_Rule_Base_Name_Real]);

		CJsonObject* pDefect_Info = new CJsonObject;

		for(EJsonApperance eNum = EJson_Defect_Index; eNum < EJson_Defect_Crop_Image_File_Name + 1;)
		{
			pDefect_Info->SetValue(sKey.lpszKey[eNum], sD.strDefect[eNum]);
			eNum = EJsonApperance(eNum + 1);
		}

		pDefectInfoArray->Push(pDefect_Info);

	}
	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Reason_All], pAppearance1Array);
	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Reason_All_Real], pAppearance2Array);

	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Reason_Main], GetJsonGeneralData(EJson_Appearance_Reason_Main));
	pDataArray->SetValue(sKey.lpszKey[EJson_Appearance_Reason_Main_Real], GetJsonGeneralData(EJson_Appearance_Reason_Main_Real));

	pDataArray->SetValue(_T("DEFECT_INFO"), pDefectInfoArray);

	////////////////////////////////////////////////////
	//
	CJsonArray* pArrayInData = new CJsonArray;
	pArrayInData->Push(pDataArray);

	CJsonObject* pData = new CJsonObject;
	pData->SetValue(sKey.lpszKey[EJson_IN_DATA], pArrayInData);

	json.SetValue(sKey.lpszKey[EJson_TXN_ID], _T(""));
	json.SetValue(sKey.lpszKey[EJson_inDName], _T("IN_DATA"));
	json.SetValue(sKey.lpszKey[EJson_outDTName], _T(""));
	json.SetValue(sKey.lpszKey[EJson_actID], _T("INSPECTION"));
	json.SetValue(sKey.lpszKey[EJson_refDS], pData);

	json.ToString(strJson);

	CUtilCommFuncFile cUtil;


/*D:\DAT\Vision Type\JSON\INSP\yyyymm\dd\hh\LotID\*/
	CString strPath;
	CString strYearMonth, strDay, strHour, strLotID;
	strYearMonth.Format(_T("%04d%02d"), GetSignalTime().GetYear(), GetSignalTime().GetMonth());
	strDay.Format(_T("%02d"), GetSignalTime().GetDay());
	strHour.Format(_T("%02d"), GetSignalTime().GetHour());
	strLotID = GetJsonGeneralData(EJson_Lot_ID);
	if(strLotID == _T(""))
		strLotID = _T("NA");

  //strPath.Format(_T("D:\\DAT\\Mono_Align\\JSON\\INSP\\%s\\%s\\%s\\%s\\"), strYearMonth,strDay,strHour, strLotID);
	strPath.Format(_T("D:\\DAT"));
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);

	strPath.AppendFormat(_T("\\Appearance"));
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\JSON"));;
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\INSP"));;
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\%s"), strYearMonth);
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\%s"), strDay);
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\%s"), strHour);
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);
	strPath.AppendFormat(_T("\\%s"), strLotID);
	if(!cUtil.IsFolderExist(strPath))
		cUtil.MakeDirectoryFullPath(strPath);

	CString strToTalResult = GetJsonGeneralData(EJson_Cell_Final_Judge);
	CString strImageResult = GetJsonGeneralData(EJson_Cell_Final_Judge);

	CString strLineNum = GetJsonGeneralData(EJson_Line_Number), strMachineNum = GetJsonGeneralData(EJson_Machine_Number), strEQPID = GetJsonGeneralData(EJson_EQP_ID), strCellID = GetJsonGeneralData(EJson_Cell_ID);
	strPath.AppendFormat(_T("\\APPEARANCE_%s_%s_%s_%s_%s_%s_TOP_2_1_%s_%s.json"), GetForSPCTime(ESPCTimeLogType_InspProcessingTime), strLineNum, strMachineNum, strEQPID, strLotID, strCellID, strImageResult, strToTalResult);

	FILE *pFile = _tfopen(strPath, _T("at"));

	if (pFile)
	{
		fputws(strJson, pFile);
	}
	else
	{
		AfxMessageBox(L"저장이 되지 않았습니다. (JsonData)");
		return;
	}
	fclose(pFile);
	pFile = NULL;
}



bool CEventHandlerMain::SaveJsonParam(Ravid::Framework::CModelInfo * pModelInfo, EModifyReason eModifyReason)
{
	bool bReturn = false;

	CString strJson;
	CJsonObject json;

	CJsonObject* pDataIn = new CJsonObject;
	CJsonObject* pDataParam = new CJsonObject;
	CJsonObject* pInDataObject = new CJsonObject;
	CJsonObject* pParaInfo = new CJsonObject;

	CJsonArray* pArrayInData = new CJsonArray;
	CJsonArray* pArrayParaInfo = new CJsonArray;
	CJsonArray* pArraySpecInfo = new CJsonArray;


	CString strRecipe, strModifyReason, strModifier;

	switch(eModifyReason)
	{
	case CDefinition::EModifyReason_OnOff:
		{
			strModifyReason = _T("RESTART");
			strModifier = _T("NA");
			if(pModelInfo)
				strRecipe = pModelInfo->GetModelName();
			else if(m_pCurrentModelInfo)
				strRecipe = m_pCurrentModelInfo->GetModelName();
		}
		break;
	case CDefinition::EModifyReason_ModifyAlgorithm:
	case CDefinition::EModifyReason_ModifySpec:
		{
			strModifyReason = _T("REASON");
			strModifier = _T("NUGU");
			if(pModelInfo)
				strRecipe = pModelInfo->GetModelName();
		}
		break;
	default:
		break;
	}
	strRecipe.MakeUpper();

	do 
	{
		// base
		pInDataObject->SetValue(_T("CATEGORY"), _T("SPEC_PARA"));
		pInDataObject->SetValue(_T("EQP_ID"), m_sEqpInfo.strMachineID);
		pInDataObject->SetValue(_T("EQP_INSP_ID"), m_sEqpInfo.strMachineNoID);
		pInDataObject->SetValue(_T("RECIPE_ID"), strRecipe);
		pInDataObject->SetValue(_T("INSP_SW_VERSION"), m_sEqpInfo.strVer);
		pInDataObject->SetValue(_T("MODIFY_TIME"), GetStringOfCurrentTimeWithMillisecond());
		pInDataObject->SetValue(_T("MODIFIER"), strModifier);
		pInDataObject->SetValue(_T("MODIFY_REASON"), strModifyReason);

		CJsonObject jsParam[2];// 0 : Param, 1 : Spec
		MakeJsonRavidParamData(pModelInfo, jsParam);
			//User Param
		// MarkJsonUserParamData();
		//////////////////////////////////////////////////////////////////////////

		pArrayParaInfo->Push(&jsParam[0]);
		pInDataObject->SetValue(_T("PARA_INFO"), pArrayParaInfo);

	
		pArraySpecInfo->Push(&jsParam[1]);
		pInDataObject->SetValue(_T("SPEC_INFO"), pArraySpecInfo);


	
 		pArrayInData->Push(pInDataObject);
		pDataIn->SetValue(_T("IN_DATA"), pArrayInData);
	
		json.SetValue(_T("TXN_ID"), _T(""));
		json.SetValue(_T("inDTName"), _T(""));
		json.SetValue(_T("outDTName"), _T(""));
		json.SetValue(_T("actID"), _T("SPEC_PARA"));
		json.SetValue(_T("refDS"), pDataIn);
		json.ToString(strJson);


		CUtilCommFuncFile cUtil;

		CString strPath;
		strPath.Format(_T("D:\\JsonData\\"));
		if(!cUtil.IsFolderExist(strPath))
			cUtil.MakeDirectoryFullPath(strPath);

		strPath.AppendFormat(_T("ParamTest.json"));


		FILE *pFile = _tfopen(strPath, _T("at"));

		if(pFile)
		{
			fputws(strJson, pFile);
		}
		else
		{
			AfxMessageBox(L"저장이 되지 않았습니다.(JsonData Param)");
			break;
		}
		fclose(pFile);
		pFile = NULL;

		bReturn = true;

	} while (false);

	return bReturn;
}

CString CEventHandlerMain::GetStringOfCurrentTimeWithMillisecond()
{
	// GEM Clock : MES 전용..,

	CString strResult;
	strResult.Empty();

	SYSTEMTIME st;
	//GetSystemTime(&st);
	GetLocalTime(&st);

	CString strValue;
	strValue.Format(_T("%04d"), st.wYear);
	strResult += strValue;
	strValue.Format(_T("%02d"), st.wMonth);
	strResult += strValue;
	strValue.Format(_T("%02d"), st.wDay);
	strResult += strValue;
	strValue.Format(_T("%02d"), st.wHour);
	strResult += strValue;
	strValue.Format(_T("%02d"), st.wMinute);
	strResult += strValue;
	strValue.Format(_T("%02d"), st.wSecond);
	strResult += strValue;
	strValue.Format(_T("%03d"), st.wMilliseconds / 10);
	strResult += strValue;

	return strResult;
}


bool CEventHandlerMain::MakeJsonRavidParamData(CModelInfo* pModel, CJsonObject* pJsParam)
{
	bool bReturn = false;
	do
	{
		if(!pModel)
			break;

		SdefaultModelParam sParam;
		pModel->GetData(&sParam, sizeof(sParam));

		//////////////////////////////////////////////////////////////////////////
		std::vector<SRavidParameterElement>* pEle = nullptr;
		pEle = pModel->GetParameterElements();
		if(!pEle)
			break;
		if(!pEle->size())
			break;
		CString strCategory, strName, strData;

		int nDepth = 0;

		for(int i = 0; i < 2; ++i)
		{
			pJsParam[i].SetValue(_T("PARA_INSP_TYPE"), _T("DEFECT"));
			pJsParam[i].SetValue(_T("PARA_NO"), _T(""));
			pJsParam[i].SetValue(_T("PARA_CAM_POSITION"), _T(""));
			pJsParam[i].SetValue(_T("PARA_DETECTION_NAME"), _T(""));
		}

		int nType = 0;
		for(auto iter : *pEle)
		{
			strData = _T("");

			switch(iter.eDataType)
			{
			case ERavidParameterDataType_Category://처리
				{
					if(iter.nDepth <= nDepth)
					{
						CUtilStringManager smTemp(strCategory, _T(";"));
						int nc = smTemp.GetCount();
						if(nc)
						{
							strCategory = _T("");

							for(int i = 0; i < nc; ++i)
							{
								if(i == iter.nDepth)
								{
									strCategory.AppendFormat(_T("%s"), iter.strParameterName);
									break;
								}
								else
									strCategory.AppendFormat(_T("%s"), smTemp.GetSplit(i));
						
								strCategory += _T(";");
							}		
						}
						else
							strCategory.Format(_T("%s"),iter.strParameterName);
						
						nDepth = iter.nDepth;
					}
					else
					{
						strCategory.AppendFormat(_T(";%s"), iter.strParameterName);
					}
					continue;
				}
				break;
			case ERavidParameterDataType_Char:
				strData.Format(_T("%d"), *(char*)iter.pData);
				break;

			case ERavidParameterDataType_UnsingedChar:
				strData.Format(_T("%d"), *(unsigned char*)iter.pData);
				break;

			case ERavidParameterDataType_Short:
				strData.Format(_T("%d"), *(short*)iter.pData);
				break;

			case ERavidParameterDataType_UnsignedShort:
				strData.Format(_T("%d"), *(unsigned short*)iter.pData);
				break;

			case ERavidParameterDataType_Long:
				strData.Format(_T("%d"), *(long*)iter.pData);
				break;

			case ERavidParameterDataType_UnsignedLong:
				strData.Format(_T("%d"), *(unsigned long*)iter.pData);
				break;

			case ERavidParameterDataType_LongLong:
				strData.Format(_T("%d"), *(long long*)iter.pData);
				break;

			case ERavidParameterDataType_UnsignedLongLong:
				strData.Format(_T("%d"), *(unsigned long long*)iter.pData);
				break;

			case ERavidParameterDataType_Float:
				strData.Format(_T("%0.3lf"), *(float*)iter.pData);
				break;

			case ERavidParameterDataType_Double:
				strData.Format(_T("%0.3lf"), *(double*)iter.pData);
				break;

			case ERavidParameterDataType_String:
				strData.Format(_T("%s"), *(CString*)iter.pData);
				break;

			default:
				strData.Format(_T("NULL,"));
				break;
			}

			strName.Format(_T("%s_%s"), strCategory, iter.strParameterName);
			if(strName.Find(_T("[SPEC]")) < 0)
				nType = 0;
			else
				nType = 1;
			CUtilStringManager smTemp(strName, _T(";"));
			int nC = smTemp.GetCount();
			if(nC)
			{
				strName.Format(_T("%s"), smTemp.GetSplit(nC-1));
			}
			strName.Replace(_T(" "), _T("_"));

			if(iter.eInputBoxType == ERavidParameterFieldInputBoxType_Combo)
			{
				int nSelect = _ttoi(strData);
				CUtilStringManager utString(iter.strExtraData, _T(";"));
				
				if(nSelect < utString.GetCount())
					strData = utString.GetSplit(nSelect); 
			}
			strName.MakeUpper();
			strData.MakeUpper();
			pJsParam[nType].SetValue(strName, strData);
		}
	
		bReturn = true;
	}
	while(false);
	return bReturn;
}

bool CEventHandlerMain::SetFileCleaner()
{
	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		CDefinition::SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		if(m_cFileCleaner.IsRunning())
		{
			m_cFileCleaner.Terminate();
		}

		CString strMsg;
		if(false)
		{
			strMsg.Format(_T("[File Cleaner Stop - Manual Mode]"));
			CLogManager::Write(ELogType_Main, strMsg);
			break;
		}


		CUtilCommFuncFile cff;


		CString strBasePath = (CString)DataDir;/*_T("D:\\Record\\Files");*/

		CString strImagePath = _T("");

//		if(modelParam.strSavePath == _T(""))
		strImagePath.AppendFormat(_T("%s"), strBasePath);


		if(!cff.IsFolderExist((LPCTSTR)strImagePath))
			if(!cff.MakeFolder((LPCTSTR)strImagePath))
				break;

		float fLimit = 85.f;

		if(fLimit <= 0 || fLimit >= 100)
			fLimit = 80;

		int nPeriod = modelParam.nSaveImageDuration;

//		if(!nPeriod)
			nPeriod = 365;

		m_cFileCleaner.SetRemoveFileAttribute(true);
		m_cFileCleaner.SetRecursive(true);
		m_cFileCleaner.SetExpirationDate(nPeriod);
		m_cFileCleaner.SetLimitDriveVolume(true);
		m_cFileCleaner.SetDriveVolumeLimitPercentage(fLimit);
		m_cFileCleaner.AddDeletingFolder(strImagePath);
		m_cFileCleaner.AddDeletingFolder(_T("D:\\VisionLog"));
		//m_cFileCleaner.AddDeletingFolder(_T("D:\\ProgramLog"));

		if(!m_cFileCleaner.Initialize())
			break;

		strMsg.Format(_T("[File Cleaner Start]"));
		CLogManager::Write(ELogType_Main, strMsg);

		bReturn = true;


	}
	while(false);

	return bReturn;
}

void CEventHandlerMain::TerminateFileCleaner()
{
	if(m_cFileCleaner.IsRunning())
	{
		m_cFileCleaner.Terminate();
	}
}
