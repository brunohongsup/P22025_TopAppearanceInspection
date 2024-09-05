#include "stdafx.h"

#include "EventHandlerComm.h"


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CEventHandlerComm::CEventHandlerComm()
{
}


CEventHandlerComm::~CEventHandlerComm()
{
}

void CEventHandlerComm::OnInspect(Algorithms::CRavidImage * pImgInfo, int nInspectionType, CRavidImageView * pView, int nChannel)
{

	// Test

	do 
	{


	} while (false);


}

void CEventHandlerComm::OnAcquisition(Ravid::Algorithms::CRavidImage * pImgInfo, int nChannel, Ravid::Framework::CRavidImageView * pView, Ravid::Device::CDeviceBase * pDevice)
{

}

void CEventHandlerComm::OnReceivingPacket(CPacket * pPacket, Device::CDeviceBase * pDevice)
{

}

void CEventHandlerComm::OnLogMessage(SRavidLogData * pLogData)
{
}

void CEventHandlerComm::OnSequenceStart()
{

}

void CEventHandlerComm::OnSequencePause()
{

}

void CEventHandlerComm::OnSequenceStop()
{
	
}

void CEventHandlerComm::WhenItOpenModelInit()
{
	//LightSetting((CDefinition::EEventHandler)0, true);

	//LightSetting((CDefinition::EEventHandler)1, true);

	SetMVSolFactoryInit(1);
	SetMVSolFactoryInit(2);


// 	CDefinition::SMelsecAddress sMelsec;
// 
// 	WriteData(sMelsec.lWrite_UVW_ModelNumber, (long)GetFrameWorkModelNum());


	CDefinition::SModelParam modelParam;
	if(!GetModelParam(modelParam))
		return;

// 	m_nFolderAutoDelete = modelParam.nFolderAutoDelete;
// 	m_nStoragePeriod = modelParam.nStoragePeriod;
// 	m_fStorageCapacity = modelParam.fStorageCapacity;

}

void CEventHandlerComm::OnOpenModel(CModelInfo * pModelInfo)
{	
	int nObjectID = GetObjectID();

// 	long lNum = GetPLCData(CDefinition::EMelsec_Read_ModelNumber);
// 
// 	if(lNum <= 0)
// 		lNum = 1;
// 
// 	for(int i = 0; i < CDefinition::EEventHandler_Count - 1; i++)
// 	{
// 		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(i));
// 
// 		if(!pHandler)
// 			return;
// 
// 		pHandler->SetFrameWorkModelNum(lNum);
// 	}



// 	CFormViewOperationalInfo* pFormOpInfo = dynamic_cast<CFormViewOperationalInfo*>(CUIManager::FindView(RUNTIME_CLASS(CFormViewOperationalInfo), CDefinition::EViewID_FormView_OpterationalInfo));
// 
// 	if(!pFormOpInfo)
// 		return;
// 
// 	pFormOpInfo->SetComboModelNum(lNum);

	WhenItOpenModelInit();

	// 자동런 시작
	CRavidMainFrameToolBarHandler Toolbar;
	Toolbar.StartSequence();
}

void CEventHandlerComm::OnCloseModel(CModelInfo * pModelInfo)
{

}

void CEventHandlerComm::OnLogIn(CString strUserName, EUserType eChangedUserType)
{
}

void CEventHandlerComm::OnLogOut()
{
}

void CEventHandlerComm::OnModelParameterSaveChanged()
{

	LightSetting((CDefinition::EEventHandler)0);

	LightSetting((CDefinition::EEventHandler)1);



	CDefinition::SModelParam modelParam;
	if(!GetModelParam(modelParam))
		return;

// 	if(
// 		m_nFolderAutoDelete != modelParam.nFolderAutoDelete ||
// 		m_nStoragePeriod != modelParam.nStoragePeriod ||
// 		m_fStorageCapacity != modelParam.fStorageCapacity
// 		)
// 	{
// 		m_nFolderAutoDelete = modelParam.nFolderAutoDelete;
// 		m_nStoragePeriod = modelParam.nStoragePeriod;
// 		m_fStorageCapacity = modelParam.fStorageCapacity;
// 
// 		SetFileCleaner();
// 	}

}

void CEventHandlerComm::OnDeviceInitialized(Device::CDeviceBase * pDevice)
{
}

void CEventHandlerComm::OnDeviceTerminated(Device::CDeviceBase * pDevice)
{
}

void CEventHandlerComm::OnStartImageInspectionTool()
{
}

void CEventHandlerComm::OnEndImageInspectionTool()
{
}

void CEventHandlerComm::OnUserToolbarEventRavidMainFrame(UINT ulResourceID)
{
}

void CEventHandlerComm::OnToolbarEventRavidMainFrame(ERavidToolBarEventMainFrame eEvent)
{
}

void CEventHandlerComm::OnToolbarEventRavidChildFrameBase(CView * pView, ERavidToolBarEventChildFrameBase eEvent)
{
}

void CEventHandlerComm::OnToolbarEventRavidImageView(CRavidImageView * pView, ERavidToolBarEventImageView eEvent)
{

	if(eEvent == ERavidToolBarEventImageView_Inspect)
	{
		if(CSequenceManager::IsRunning())
		{
			m_bInspectEeception = true;
		}
		else
		{
			m_bInspectEeception = false;
		}
	}


}

void CEventHandlerComm::OnToolbarEventRavidLogViewer(CRavidLogViewer * pView, ERavidToolBarEventLogViewer eEvent)
{
}

void CEventHandlerComm::OnToolbarEventImageProcessingTool(CRavidImageProcessingTool * pView, ERavidToolBarImageProcessingTool eEvent)
{
}

void CEventHandlerComm::OnCloseModelManager()
{
	UpdateModel();
}

void CEventHandlerComm::OnRunUIConfiguration(long nNumber)
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CEventHandlerComm::Initialize()
{


	CDefinition::SModelParam modelParam;
	if(!GetModelParam(modelParam))
		return;


// 	SetMachineNum(modelParam.lMachineNumber);
// 
// 
// 	CFormViewOperationalInfo* pFormOpInfo = dynamic_cast<CFormViewOperationalInfo*>(CUIManager::FindView(RUNTIME_CLASS(CFormViewOperationalInfo), CDefinition::EViewID_FormView_OpterationalInfo));
// 
// 	if(pFormOpInfo)
// 		pFormOpInfo->InitialFormData();


// 	for(int i = 0; i < 4; i ++)
// 	{
// 		CFormViewGlassInfo* pFormGlassInfo = dynamic_cast<CFormViewGlassInfo*>(CUIManager::FindView(RUNTIME_CLASS(CFormViewGlassInfo), CDefinition::EViewID_FormView_Infomation_UVW_Left + i));
// 
// 		if(pFormGlassInfo)
// 			pFormGlassInfo->InitialFormData();
// 	}

	SetFileCleaner();
	
}

void CEventHandlerComm::Terminate()
{
	
}


bool CEventHandlerComm::SetFileCleaner()
{
	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = CModelManager::FindModelInfo(GetFrameWorkModelNum());
		if(!pModelInfo)
			break;

		if(!pModelInfo->IsOpen())
			break;


		CDefinition::SModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		if(m_cFileCleaner.IsRunning())
		{
			m_cFileCleaner.Terminate();
		}

		CString strMsg;
// 		if(modelParam.nFolderAutoDelete == 1)
// 		{
// 			strMsg.Format(_T("[File Cleaner Stop - Manual Mode]"));
// 			CLogManager::Write(CDefinition::ELogType_System, strMsg);
// 			break;
// 		}


		CUtilCommFuncFile cff;


		CString strBasePath = _T("D:\\Record");

		CString strImagePath = _T("");

		if(strImagePath == _T(""))
			strImagePath.AppendFormat(_T("%s"), strBasePath);


		if(!cff.IsFolderExist((LPCTSTR)strImagePath))
			if(!cff.MakeFolder((LPCTSTR)strImagePath))
				break;

		float fLimit = 80;

		if(fLimit <= 0 || fLimit >= 100)
			fLimit = 80;

		int nPeriod = 15;

		if(!nPeriod)
			nPeriod = 60;

		m_cFileCleaner.SetRemoveFileAttribute(true);
		m_cFileCleaner.SetRecursive(true);
		m_cFileCleaner.SetExpirationDate(nPeriod);
		m_cFileCleaner.SetLimitDriveVolume(true);
		m_cFileCleaner.SetDriveVolumeLimitPercentage(fLimit);
		m_cFileCleaner.AddDeletingFolder(strImagePath);
		m_cFileCleaner.AddDeletingFolder(_T("D:\\ModelBackUp"));
		m_cFileCleaner.AddDeletingFolder(_T("D:\\ProgramLog"));

		if(!m_cFileCleaner.Initialize())
			break;

		strMsg.Format(_T("[File Cleaner Start]"));
		CLogManager::Write(0, strMsg);

		bReturn = true;


	}
	while(false);

	return bReturn;
}

void CEventHandlerComm::TerminateFileCleaner()
{
	if(m_cFileCleaner.IsRunning())
	{
		m_cFileCleaner.Terminate();
	}
}

void CEventHandlerComm::UpdateModel()
{
	bool bOpenCheck = false;
	for(int i = 0; i < CModelManager::GetModelInfoCount(); i++)
	{
		CModelInfo* pModelInfo = CModelManager::GetModelInfo(i);

		if(pModelInfo)
		{
			if(!pModelInfo->IsOpen())
			{
				pModelInfo->Open();
				bOpenCheck = true;
			}
		}
	}

	SetModelInfo();

// 	if(bOpenCheck)
// 	{
// 		CFormViewOperationalInfo* pFormOpInfo = dynamic_cast<CFormViewOperationalInfo*>(CUIManager::FindView(RUNTIME_CLASS(CFormViewOperationalInfo), CDefinition::EViewID_FormView_OpterationalInfo));
// 
// 		if(pFormOpInfo)
// 			pFormOpInfo->InitComboBox();
// 	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CEventHandlerComm::CopyModelFolder()
{
	CUtilCommFuncFile  uTil;

	CString strSrc = CModelManager::GetModelRootPath();

	strSrc = strSrc.Left(strSrc.ReverseFind(_T('\\')));
	
	strSrc += _T("\\Model");


	CString strDes;

	strDes.Format(_T("D:\\ModelBackUp"));

	if(!uTil.IsFolderExist(strDes))
	{
		if(!uTil.MakeFolder(strDes))
			return;
	}

	CTime tm = CTime::GetCurrentTime();

	strDes.AppendFormat(_T("\\%04d-%02d-%02d"), tm.GetYear(), tm.GetMonth(), tm.GetDay());

	if(!uTil.IsFolderExist(strDes))
	{
		if(!uTil.MakeFolder(strDes))
			return;
	}
	else // 하루에 하나의 모델만 백업.
	{
		return;
	}

	strDes += _T("\\");

	uTil.DoFolderCopy(strSrc, strDes);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// bool CEventHandlerComm::IsInIOEvent(CDefinition::EInputIO eIn)
// {
// 	bool bReturn = false;
// 
// 	do
// 	{
// 		CDeviceMVTechDio* pDIO = dynamic_cast<CDeviceMVTechDio*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceMVTechDio), 0));
// 
// 		if(!pDIO)
// 			break;
// 
// 		if(!pDIO->IsInitialized())
// 			break;
// 
// 		bReturn = pDIO->ReadInBit((int)eIn);
// 
// 
// 	}
// 	while(false);
// 
// 	return bReturn;
// }
// 
// bool CEventHandlerComm::OutIOEvent(CDefinition::EOutputIO eOut, bool bOn)
// {
// 	bool bReturn = false;
// 
// 	do
// 	{
// 		CDeviceMVTechDio* pDIO = dynamic_cast<CDeviceMVTechDio*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceMVTechDio), 0));
// 
// 		if(!pDIO)
// 			break;
// 
// 		if(!pDIO->IsInitialized())
// 			break;
// 
// 		bReturn = pDIO->WriteOutBit((int)eOut, bOn);
// 	}
// 	while(false);
// 
// 	return bReturn;
// }

bool CEventHandlerComm::WriteWordBit(LPCTSTR lAddress, bool bOn, short nPos)
{
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		short nData = ReadData(lAddress);

		short nShiftData = (1 << nPos);

		if(bOn)
		{
			nData = nData | nShiftData;
		}
		else
		{
			short nTemp = nData & nShiftData;
			nData = nData - nTemp;
		}

		if(!CRavidMelsec::SendData(lAddress, 1, &nData))
			break; 

		bReturn = true;

	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}

bool CEventHandlerComm::ReadWordBit(LPCTSTR lAddress, short nPos)
{
	bool bReturn = false;

	do
	{
		short nData = ReadData(lAddress);

		bReturn = (nData >> nPos) & 1;

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::WriteData(_In_ LPCTSTR lAddress, _In_ double dblData)
{
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		long lWrite[2];
		ZeroMemory(lWrite, sizeof(lWrite));

		ConvertPLCWord((long)(dblData * 1000), lWrite[0], lWrite[1]);


		if(!CRavidMelsec::SendData(lAddress, 2, (long*)lWrite))
			break;

		bReturn = true;

	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}

bool CEventHandlerComm::WriteData(_In_ LPCTSTR lAddress, _In_ short nData)
{
	bool bReturn = false;

	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		if(!CRavidMelsec::SendData(lAddress, 1, &nData))
			break;

		bReturn = true;

	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}

bool CEventHandlerComm::WriteData(LPCTSTR lAddress, long lData)
{
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		if(!CRavidMelsec::SendData(lAddress, 1, &lData))
			break;

		bReturn = true;

	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}

short CEventHandlerComm::ReadData(_In_ LPCTSTR lAddress)
{
	short nReturn = 0; // 
	m_csReadPLC.Lock();
	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		if(!CRavidMelsec::RecvData(lAddress, 1, &nReturn))
			break;

	}
	while(false);
	m_csReadPLC.Unlock();
	return nReturn;
}

bool CEventHandlerComm::ReadCellID(/*_In_ CDefinition::ECamera eLine*/)
{
	USES_CONVERSION;

	bool bReturn = false;
	m_csReadPLC.Lock();
	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}


		char chGlassID[60];
		ZeroMemory(chGlassID, sizeof(chGlassID));

//		strcpy_s(chGlassID, T2A(str));

//		CDefinition::sMelsecAddress sm;


		if(!CRavidMelsec::RecvData(_T(""), 24, (short*)chGlassID))
			break;

		char chGlassIDTable[3][20];

		// Real Change
		//int nRealNum[3] {2, 1, 0};
		for(int i = 0; i < 3; i++)
		{
			CString stID;

			if(stID.GetBuffer() != 0)
			{
				stID.ReleaseBuffer();
				stID.Empty();
			}

			ZeroMemory(chGlassIDTable[i], sizeof(chGlassIDTable[i]));

			int nAdd = i * 16;
			memcpy(chGlassIDTable[i], chGlassID + nAdd, sizeof(chGlassIDTable[i]));

			if(strlen(chGlassIDTable[i]) > 1)
				chGlassIDTable[i][strlen(chGlassIDTable[i])] = '\0';


			for(int j = 0; j < 16; j++)
			{
				if(chGlassIDTable[i][j] != NULL)
				{
					stID.AppendChar(chGlassIDTable[i][j]);
				}
			}

			//m_strCellID[eLine][i] = stID;


		}


	}
	while(false);
	m_csReadPLC.Unlock();
	return bReturn;
}

bool CEventHandlerComm::WriteCellID()
{
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}


		CString str;// Cell ID

		if(str.GetLength() > 40)
			return false;


		char chID[40];
		ZeroMemory(chID, sizeof(chID));
		strcpy_s(chID, CT2A(str));

// 		CDefinition::sMelsecAddress sm;
// 
// 		if(!CRavidMelsec::SendData(sm.lWrite_CellID, 10, (short*)chID))
// 			break;


		bReturn = true;



	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}

bool CEventHandlerComm::WriteAGCData(int nMaxCount)
{
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		//CDefinition::SMelsecAddress sAdd;
		bReturn = true;

		long lIndex = (nMaxCount * 5);
		int m = int(lIndex / 2000);

		for(int i = 0; i < m + 1; i++)
		{
			if(!CRavidMelsec::SendData(_T(""), 2000, (long*)m_lAGCDatas[i])) // MAX Block 2048
			{
				bReturn &= false;
				break;
			}
		}
	}
	while(false);
	m_csSendPLC.Unlock();

	return bReturn;
}


bool CEventHandlerComm::SendToPLCMadeData(/*CDefinition::EStage eStage, CDefinition::SUVW sData[2]*/)
{
	USES_CONVERSION;
	bool bReturn = false;
	m_csSendPLC.Lock();

	do
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		CString strMsg;

		const int nSize = 20;

		long lWrite[nSize];
		ZeroMemory(lWrite, sizeof(lWrite));

// 		CDefinition::sMelsecAddress sMs;
// 		LPCTSTR lAddress = sMs.lWrite_UVWMoveDist[eStage];

// 		for(int i = 0; i < 2; i ++)
// 		{
// 			int n = 0;
// 			if(i)
// 				n = 10;
// 
// 			ConvertPLCWord((long)(sData[i].y1 * 1000), lWrite[0 + n], lWrite[1 + n]);
// 			ConvertPLCWord((long)(sData[i].y2 * 1000), lWrite[2 + n], lWrite[3 + n]);
// 			ConvertPLCWord((long)(sData[i].x1 * 1000), lWrite[4 + n], lWrite[5 + n]);
// 		
// 			// OK = 1
// 			short nData = 0;
// 			if(sData[i].bResult)
// 				nData = 1;
// 			else
// 				nData = 2;
// 
// 			lWrite[9 + n] = nData;
// 		}
// 
// 		
// 		if(!CRavidMelsec::SendData(lAddress, nSize, (long*)lWrite))
// 			break;
// 
// 		bReturn = true;

	}
	while(false);
	m_csSendPLC.Unlock();

	return  bReturn;

}



bool CEventHandlerComm::ConvertPLCWord(long nValue, long& nFirst, long& nSecond)
{
	long ld = 0;
	long lH = 0;
	long lL = 0;

	if(nValue >= 0)
	{
		ld = nValue;
		lH = ld / 65536;
		if(ld > 65536)
			lL = ld - 65536;
		else
			lL = ld;
	}
	else
	{
		ld = abs(nValue);
		lH = ld / 65536;
		if(ld > 65536)
			lL = ld - 65536;
		else
			lL = ld;

		lH = 65535 - lH;
		lL = 65536 - lL;

		if(lL > 65535)
			lL = 65535;

	}

	nFirst = lL;
	nSecond = lH;

	return true;
}

double CEventHandlerComm::ReadDoubleWord(LPCTSTR lAddress)
{
	double dblReturn = 0.f;
	m_csReadPLC.Lock();
	do 
	{
		if(!CRavidMelsec::IsInitialized())
		{
			CRavidMelsec::Initialize();
			CRavidMelsec::Open(1);
		}

		long nData[2] = {0, };

		if(!CRavidMelsec::RecvData(lAddress, 2, nData))
			break;


		dblReturn = (double)(nData[0] + (nData[1] * 65536)) / 1000.f;

	} while (false);
	m_csReadPLC.Unlock();
	return dblReturn;
}



bool CEventHandlerComm::ChangeCameraROI()
{
//	CModelInfo* pModelInfo = CModelManager::FindModelInfo(GetFrameWorkModelNum());
// 	if(!pModelInfo)
// 		return false;
// 
// 	if(!pModelInfo->IsOpen())
// 		return false;
// 
// 	CString strFile = pModelInfo->GetModelType();

// 	strFile.MakeUpper();
// 
// 	if(strFile.Find(_T("TELECENTRIC")) >= 0)
// 		return true;



	CDeviceBaslerUSB* pCamera = dynamic_cast<CDeviceBaslerUSB*>(CDeviceManager::GetDeviceByIndex(RUNTIME_CLASS(CDeviceBaslerUSB), 0));
	if(!pCamera)
		return false;

	CUtil util;

	CRavidRect<double> drcPercentage;



	int nNewSizeX = int(ceil(((drcPercentage.right - drcPercentage.left) / 100.) * 2592));
	int nNewSizeY = int(ceil(((drcPercentage.bottom - drcPercentage.top) / 100.) * 1944));

	nNewSizeX = ((nNewSizeX + 3) / 4) * 4;

	CRavidImageView* pImageView = dynamic_cast<CRavidImageView*>(CUIManager::FindView(typeid(CRavidImageView), 0));
	if(!pImageView)
		return false;


	if(1944 != nNewSizeY || 2592 != nNewSizeX)
	{
		pCamera->GetImageInfo()->SetSizeX(nNewSizeX);
		pCamera->GetImageInfo()->SetSizeY(nNewSizeY);

		CRavidImage ImgTemp;

		ImgTemp.CreateImageBuffer(pCamera->GetImageInfo()->GetSizeX(), 1944, 255);

		pImageView->SetImageInfo(&ImgTemp);
		pImageView->Invalidate();

		if(pImageView)
		{
			pImageView->SetImageInfo(pCamera->GetImageInfo());
		}
	}

	return true;
}


bool CEventHandlerComm::AssignString(TCHAR** lpszDst, const TCHAR* lpszSrc)
{
	bool bReturn = false;

	if(lpszDst)
	{
		*lpszDst = nullptr;

		if(lpszSrc)
		{
			size_t szLength = _tcslen(lpszSrc);

			if(szLength > 0)
			{
				*lpszDst = new TCHAR[szLength + 1];

				if(*lpszDst)
				{
					//_tcscpy(*lpszDst, lpszSrc);

					// ?? 사용하면 뷰 갱신 할 때 AfxWinMain 에서 죽음....
					wcscpy_s(*lpszDst, sizeof(lpszDst), lpszSrc);
					bReturn = true;
				}
			}
		}
	}

	return bReturn;
}

bool CEventHandlerComm::AssignString(const TCHAR** lpszDst, const TCHAR* lpszSrc)
{
	return AssignString((TCHAR**)lpszDst, lpszSrc);
}

bool CEventHandlerComm::DeleteStringFromHeap(TCHAR** lpszString)
{
	bool bReturn = false;

	if(lpszString)
	{
		if(*lpszString)
		{
			delete[] * lpszString;
			*lpszString = nullptr;

			bReturn = true;
		}
	}

	return bReturn;
}

bool CEventHandlerComm::DeleteStringFromHeap(const TCHAR** lpszString)
{
	return DeleteStringFromHeap((TCHAR**)lpszString);
}

bool CEventHandlerComm::LightSetting(CDefinition::EEventHandlerNo eHType, bool bCompulsion, bool bLaserAGCMode)
{
	bool bReturn = false;

	Lock();

	do
	{
		CDefinition::SModelParam sParam;
		GetModelParam(sParam);

		CDefinition::EDevice eDevice = CDefinition::EDevice_RS232C_MVTechStrobe1;

		int nStart = 0;
		int nEnd = 4;

		if(eHType == 1)
		{
			eDevice = CDefinition::EDevice_RS232C_MVTechStrobe2;
			nStart = 4;
			nEnd = 8;
		}

		BYTE cLightLimit[8] = { 135,80,135,80,135,80,135,80 }; // 고정 Root 로그인 시 파라미터 변경 가능.
		long nLightOnTime[8] = { 18,18,18,18,18,18,18,18 };
		BYTE cLightBrightness[8] = { 0, };


		bReturn = true;

		for(int i = nStart; i < nEnd; ++i)
		{		
// 			cLightBrightness[i] = sParam.nLightBrightness[i];
// 			
// 			if(EUserType_Root == CAuthorityManager::GetCurrentUserType())
// 			{
// 				cLightLimit[i] = sParam.nLightLimit[i];
// 				nLightOnTime[i] = sParam.nLightOntime[i];
// 			}
	
// 			if(eHType == CDefinition::EEventHandler_Laser && bLaserAGCMode)
// 			{
// 				nLightOnTime[i] = 2020;
// 			}

			int nRealCh = i;

// 			if(eHType == CDefinition::EEventHandler_Laser)
// 				nRealCh -= 4;
			

			if(cLightLimit[i] != m_cLightLimit[i] || bCompulsion)
			{
				m_csSendPacket.Lock();

				bReturn &= SetLimit(eDevice, nRealCh, cLightLimit[i]);
				Sleep(100);
				bReturn &= SetLimit(eDevice, nRealCh, cLightLimit[i]);
				m_csSendPacket.Unlock();

				m_cLightLimit[i] = cLightLimit[i];

				Sleep(100);

			}

			if(nLightOnTime[i] != m_nLightOnTime[i] || bCompulsion)
			{
				m_csSendPacket.Lock();

				bReturn &= SetOnTime(eDevice, nRealCh, nLightOnTime[i]);
				Sleep(100);
				bReturn &= SetOnTime(eDevice, nRealCh, nLightOnTime[i]);
				m_csSendPacket.Unlock();

				m_nLightOnTime[i] = nLightOnTime[i];
				Sleep(100);

			}

			if(cLightBrightness[i] != m_cLightBrightness[i] || bCompulsion)
			{
				m_csSendPacket.Lock();

				bReturn &= SetBrightValue(eDevice, nRealCh, cLightBrightness[i]);
				Sleep(100);
				bReturn &= SetBrightValue(eDevice, nRealCh, cLightBrightness[i]);
				m_csSendPacket.Unlock();

				m_cLightBrightness[i] = cLightBrightness[i];
				Sleep(100);

			}

		}
	}
	while(false);

	Unlock();

	return bReturn;
}

bool CEventHandlerComm::SetBrightValue(int nDevice, int nCh, int nBrightness)
{
	assert(0 <= nCh && nCh <= 3);
	assert(0 <= nBrightness && nBrightness <= 255);

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		if(nCh < 0)
			break;

		if(nBrightness < 0)
		{
			nBrightness = 0;
		}
		else if(nBrightness > 255)
		{
			nBrightness = 255;
		}

		int nSerialCh = nCh + 1;

		CStringA strValue;
		strValue.Format("#CH%02dSB%04d&", nSerialCh, nBrightness);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetOnTime(int nDevice, int nCh, int nOnTime)
{
	assert(0 <= nCh && nCh <= 3);
	assert(0 <= nOnTime);

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		if(nCh < 0)
			break;

		if(nOnTime < 0)
			break;

		int nSerialCh = nCh + 1;

		CStringA strValue;
		strValue.Format("#CH%02dSO%04d&", nSerialCh, nOnTime);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();
	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetLimit(int nDevice, int nCh, int nLimit)
{
	assert(0 <= nCh && nCh <= 3);
	assert(0 <= nLimit && nLimit <= 255);

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		if(nCh < 0)
			break;

		if(nLimit < 0)
		{
			nLimit = 0;
		}
		else if(nLimit > 255)
		{
			nLimit = 255;
		}

		int nSerialCh = nCh + 1;

		CStringA strValue;
		strValue.Format("#CH%02dLM%04d&", nSerialCh, nLimit);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();
	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetLightOn(int nDevice, int nCh)
{
	assert(0 <= nCh && nCh <= 3);

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		if(nCh < 0)
			break;

		int nSerialCh = nCh + 1;

		CStringA strValue;

		strValue.Format("#CH%02dON0001&", nSerialCh);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetLightOff(int nDevice, int nCh)
{
	assert(0 <= nCh && nCh <= 3);

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		if(nCh < 0)
			break;

		int nSerialCh = nCh + 1;

		CStringA strValue;

		strValue.Format("#CH%02dON0000&", nSerialCh);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetPageData(int nDevice, int nPageNumber, int nOnTime1, int nBrightValue1, int nOnTime2, int nBrightValue2, int nOnTime3, int nBrightValue3, int nOnTime4, int nBrightValue4)
{

	bool bReturn = false;

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;


		CStringA strValue;
		strValue.Format("#PG%02dPV", nPageNumber);


		CStringA strData;
		strData.Format("%04d,%04d,%04d,%04d,%04d,%04d,%04d,%04d", nOnTime1, nBrightValue1, nOnTime2, nBrightValue2, nOnTime3, nBrightValue3, nOnTime4, nBrightValue4);
		strValue += strData;
		strValue += "&";


		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();
	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetActivePageNumber(int nDevice, int nPageNumber)
{
	//page 번호는 0~49번까지....

	bool bReturn = false;

	Lock();

	do
	{
		CDeviceRS232C* pRS232C = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(nDevice));

		if(!pRS232C)
			break;

		if(!pRS232C->IsInitialized())
			break;

		CStringA strValue;

		strValue.Format("#CH%02dAP0001&", nPageNumber);

		CPacket packet;
		packet.SetData((char*)(LPCSTR)strValue, strValue.GetLength());

		ECommSendResult eSendResult;

		eSendResult = pRS232C->Send(&packet);

		eSendResult == ECommSendResult_OK ? bReturn = true : bReturn = false;

		packet.Clear();

	}
	while(false);

	Unlock();

	return bReturn;
}


///////////////////////////////////////////////////////////////////////////////////////////////

void CEventHandlerComm::StartReadPLCDataThread()
{
	m_bReadPLCDataThread = true;

	CreateRavidThreadContext(pContext)
	{
		CEventHandlerComm* pHandler = dynamic_cast<CEventHandlerComm*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_Comm));

		if(!pHandler)
			return;

		while(m_bReadPLCDataThread)
		{
			//CDefinition::sMelsecAddress sm;

			if(!CRavidMelsec::IsInitialized())
			{
				CRavidMelsec::Initialize();
				CRavidMelsec::Open(1);
			}
		
			m_csReadPLC.Lock();

			//CRavidMelsec::RecvData(sm.lRead_Datas, CDefinition::EMelsec_Read_Count, m_nReadDatas);

			m_csReadPLC.Unlock();


			Sleep(10);

		}

	};
	CThreadHelper::Run(pContext);

	m_pReadPLCDataThread = pContext;
}

void CEventHandlerComm::StopReadPLCDataThread()
{
	if(m_pReadPLCDataThread)
	{
		m_bReadPLCDataThread = false;

		if(m_pReadPLCDataThread)
		{
			CThreadHelper::Wait(m_pReadPLCDataThread, 1500);

			m_pReadPLCDataThread = nullptr;
		}
	}
}


void CEventHandlerComm::StartMultiWorkThread()
{
	m_bMultiWorkThread = true;

	CreateRavidThreadContext(pContext)
	{
		CEventHandlerComm* pHandler = dynamic_cast<CEventHandlerComm*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_Comm));

		if(!pHandler)
			return;



	};
	CThreadHelper::Run(pContext);

	m_pMultiWorkThread = pContext;
}

void CEventHandlerComm::StopMultiWorkThread()
{
	if(m_pMultiWorkThread)
	{
		m_bMultiWorkThread = false;

		if(m_pMultiWorkThread)
		{
			CThreadHelper::Wait(m_pMultiWorkThread, 1500);

			m_pMultiWorkThread = nullptr;
		}
	}
}


void CEventHandlerComm::StartAliveThread()
{
	m_bAliveThread = true;

	CreateRavidThreadContext(pContext)
	{
		CEventHandlerComm* pHandler = dynamic_cast<CEventHandlerComm*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_Comm));

		if(!pHandler)
			return;

		bool bAlive = false;

		while(m_bAliveThread)
		{
			Sleep(500);

			//CDefinition::SMelsecAddress sm;

			bAlive = !bAlive;

			//pHandler->WriteData(sm.lWrite_UVW_Alive, (short)bAlive);
		}

	};
	CThreadHelper::Run(pContext);

	m_pAliveThread = pContext;
}

void CEventHandlerComm::StopAliveThread()
{
	if(m_pAliveThread)
	{
		m_bAliveThread = false;

		if(m_pAliveThread)
		{
			CThreadHelper::Wait(m_pAliveThread, 1500);

			m_pAliveThread = nullptr;
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void CEventHandlerComm::StartCameraLive(int nPortNumber, int nCameraCh, bool bLive, bool bOn)
{
	do 
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh eTrgCh[4] =
		{
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh0,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh1,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh2,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh3
		};

		unsigned char cCh = 0;
		for(int i = 0; i < 3; i ++)
		{
			CDeviceEuresysDominoSymphony* pCamera = dynamic_cast<CDeviceEuresysDominoSymphony*>(CDeviceManager::GetDeviceByIndex(RUNTIME_CLASS(CDeviceEuresysDominoSymphony), i));

			if(!pCamera)
				break;

			if(!pCamera->IsGrabAvailable())
				cCh += eTrgCh[i];
		}
		// Parameter jhjo
		long nLiveInverval = 150000;
		long nTriggerPluseWidth = 1000;

		if(!bLive && bOn)
			cCh = eTrgCh[nCameraCh];



		pDevice->SetTrgOption(nPortNumber, nCameraCh, CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh(cCh), nLiveInverval, 0, nTriggerPluseWidth, 0);
		

		//if(/*bLive ||*/ !cCh)
			pDevice->SetVirtualTrg(nPortNumber, nCameraCh, bOn, bLive);
	

	} while (false);

}

void CEventHandlerComm::ManualTrigger(int nPortNumber, int nCameraCh)
{
	do
	{

		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		pDevice->SetVirtualTrg(nPortNumber, nCameraCh, false, false);


	}
	while(false);
}

bool CEventHandlerComm::CameraGrabReady(int nCameraCh, bool bOn)
{
	bool bReturn = false;
	do 
	{
		int nStart = nCameraCh;
		int nEnd = nCameraCh + 1;

		if(nCameraCh == 2)
			++nEnd;

		for(int i = nStart; i < nEnd; i ++)
		{
			CDeviceEuresysDominoSymphony* pCamera = dynamic_cast<CDeviceEuresysDominoSymphony*>(CDeviceManager::GetDeviceByIndex(RUNTIME_CLASS(CDeviceEuresysDominoSymphony), i));

			if(!pCamera)
				break;

			if(bOn)
				pCamera->Grab();
			else
				pCamera->Stop();


			bReturn = true;
		}


	} while (false);

	return bReturn;
}

bool CEventHandlerComm::SoftTrigger(int nCameraCh, bool bOn)
{
	bool bReturn = false;
	do
	{

		int nStart = nCameraCh;
		int nEnd = nCameraCh + 1;

		if(nCameraCh == 1)
			++nEnd;

		for(int i = nStart; i < nEnd; i++)
		{
			CDeviceEuresysDominoSymphony* pCamera = dynamic_cast<CDeviceEuresysDominoSymphony*>(CDeviceManager::GetDeviceByIndex(RUNTIME_CLASS(CDeviceEuresysDominoSymphony), i));

			if(!pCamera)
				break;


			//pCamera->Trigger();

			if(bOn)
				pCamera->Live();
			else
				pCamera->Stop();

			bReturn = true;

		}

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetCamraExpose(int nCameraCh, int nVal)
{
	bool bReturn = false;
	do
	{

		int nStart = nCameraCh;
		int nEnd = nCameraCh + 1;

		if(nCameraCh == 1)
			++nEnd;

		for(int i = nStart; i < nEnd; i++)
		{
			CDeviceEuresysDominoSymphony* pCamera = dynamic_cast<CDeviceEuresysDominoSymphony*>(CDeviceManager::GetDeviceByIndex(RUNTIME_CLASS(CDeviceEuresysDominoSymphony), i));

			if(!pCamera)
				break;

			if(!pCamera->SetExpose_us(nVal))
				break;

			bReturn = true;
		}

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::SetMVSolEncoder(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do 
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;


		pDevice->SetEncoderOption(nPortNumber, nENCLineCh, 1);


		bReturn = true;
	} while (false);

	return bReturn;
}

bool CEventHandlerComm::SetMVSolTrigger(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do 
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh eTrgCh[4] = 
		{
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh0,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh1,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh2,
			CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh3
		
		};

		CDefinition::SModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;


		// Parameter jhjo
		long nLiveInverval = 0;
		long nTriggerPluseWidth = 10;

		pDevice->SetTrgOption(nPortNumber, nENCLineCh, eTrgCh[nENCLineCh], nLiveInverval, 0, nTriggerPluseWidth, 100);

		bReturn = true;

	} while (false);

	return bReturn;
}

bool CEventHandlerComm::TriggerEnable(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do
	{

		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		pDevice->SetEnableTrgOut(nPortNumber, nENCLineCh);

		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::TriggerEnableOff(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do
	{

		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		pDevice->SetEnableTrgOutOff(nPortNumber, nENCLineCh);

		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::TriggerEnableOn(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do
	{

		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		pDevice->SetEnableTrgOutOn(nPortNumber, nENCLineCh);

		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::TriggerCountClear(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh eTrgCh = CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh0;
		eTrgCh = (CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh)nENCLineCh;


		pDevice->SetResetCount(nPortNumber, nENCLineCh, false);

		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CEventHandlerComm::EncoderCountClear(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;

	do
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh eTrgCh = CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh0;
		eTrgCh = (CEHDeviceRS232C_MVSol::EMVSol_OutTrgCh)nENCLineCh;


		pDevice->SetResetCount(nPortNumber, nENCLineCh);

		bReturn = true;

	}
	while(false);

	return bReturn;
}
// 
// bool CEventHandlerComm::SetTriggerPos(int nPortNumber, CDefinition::EEventHandler eHandler, CDefinition::EStage eStage, bool bClearAll, bool bReverse)
// {
// 	bool bReturn = false;
// 
// 	do
// 	{
// 		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
// 		if(!pDevice)
// 			break;
// 
// 		bool bUpdate = false;
// 		double dblData[CDefinition::ETriggerPosition_Count];
// 		ZeroMemory(dblData, sizeof(dblData));
// 		bUpdate = ReadPositionData(eHandler, eStage, dblData);
// 
// 		
// 		dblData[CDefinition::ETriggerPosition_Start];
// 
// 		std::vector<long long> vctQueuePosition;
// 		vctQueuePosition.clear();
// 
// 		///////////////////////////////////////////////////////////////////////////////////////
// 		//
// 		double dblUseSpeed = ReadMotionSpeed(eHandler, eStage);
// 		double dblAcc = 0.00456;
// 
// 		double dblStandardSeed = 300.f;
// 
// 		double dblDiffPixel = 10.f; //y
// 		double dblDiiffSpeed = 300.f; // x
// 		// 0~300 까지 속도에서 최대 10 Pixel 변화.
// 
// 		double dblGradient = dblDiffPixel / dblDiiffSpeed; // a
// 
// 		double dblOffsetPixel = dblGradient * dblUseSpeed;
// 
// 		long long llOffset = long long((dblOffsetPixel * dblAcc) * 1000);
// 
// 		if(false)
// 			llOffset = 0;
// 
// 		CString strOrg;
// 		CString strOffset;
// 
// 
// 		int nEnd = CDefinition::ETriggerPosition_Count;
// 
// 		if(eHandler == CDefinition::EEventHandler_Laser)
// 			nEnd -= 2;
// 
// 		for(int i = CDefinition::ETriggerPosition_1_1; i < nEnd; i++)
// 		{
// 
// 			double dblStend = dblData[CDefinition::ETriggerPosition_Start] * 1000; 
// 
// 			long long llData = long long((dblData[i] * 1000) - dblStend);
// 
// 			// 정방향
// 			// 예) 시작점 10, L1 20, L2 30, R1 ....... 시작점에서 증가..
// 			// Position 10, 20 30 40 ..
// 			// 역방향 
// 			// 예) 시작점 100, L1 20 , L2 30 ... R1 .. 
// 
// 
// 			CString strs;
// 
// 
// 			strs.Format(_T(", %d"), llData);
// 
// 			strOrg += strs;
// 
// 			if(bReverse)
// 				llData -= llOffset;
// 			else
// 				llData += llOffset;
// 
// 			vctQueuePosition.push_back(llData);
// 	
// 			strs.Format(_T(", %d"), llData);
// 
// 			strOffset += strs;
// 		}
// 
// 		if(bReverse)
// 		{	
// 			std::sort(vctQueuePosition.begin(), vctQueuePosition.end(), [&](long long s1, long long s2) -> bool 
// 			{	
// 				return fabs(s1) < fabs(s2); 
// 			});
// 			
// 			CDefinition::SName sNames;
// 
// 			CString strMsg;
// 			strMsg.Format(_T("[%s-%s] Reverse Mode On "), sNames.strHandler[eHandler], sNames.strStage[eStage]);
// 			CLogManager::Write(CDefinition::ELogType_Handler, strMsg);
// 		}
// 
// 		//if(bUpdate)
// 		{
// 			CDefinition::SName sNames;
// 
// 			CString strMsg;
// 			strMsg.Format(_T("[%s-%s] Org Trigger Data (Speed:%.3f) - %s  "), sNames.strHandler[eHandler], sNames.strStage[eStage], dblUseSpeed, strOrg);
// 			CLogManager::Write(CDefinition::ELogType_Handler, strMsg);
// 
// 			CString strs;
// 			strs.Format(_T("[%s-%s] Setting Trigger Data ->"), sNames.strHandler[eHandler], sNames.strStage[eStage]);
// 			for (long long n : vctQueuePosition)
// 			{
// 				CString str;
// 
// 				str.Format(_T(",%d "), n);
// 
// 				strs += str;
// 			}
// 
// 			CLogManager::Write(CDefinition::ELogType_Handler, strs);
// 
// 
// 			pDevice->SettingTrgPos(nPortNumber, eHandler, vctQueuePosition, true, bClearAll);
// 		}
// 
// 		bReturn = true;
// 
// 	}
// 	while(false);
// 
// 	return bReturn;
// }

bool CEventHandlerComm::SetMVSolFactoryInit(int nPortNumber)
{
	bool bReturn = false;
	m_csSendPacket.Lock();

	do
	{
		CEHDeviceRS232C_MVSol* pDevice = dynamic_cast<CEHDeviceRS232C_MVSol*>(CEventHandlerManager::GetEventHandler(CDefinition::EEventHandler_MVSol));
		if(!pDevice)
			break;

		pDevice->SetFactoryInit(nPortNumber);

		bReturn = true;

	}
	while(false);
	m_csSendPacket.Unlock();

	return bReturn;
}

bool CEventHandlerComm::SetMVSolInitialize(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;


	do
	{
		if(!EncoderCountClear(nPortNumber, nENCLineCh))
			break;

		if(!TriggerCountClear(nPortNumber, nENCLineCh))
			break;

	
		if(!SetMVSolTrigger(nPortNumber, nENCLineCh))
			break;

// 		if(!SetMVSolEncoder(nENCLineCh))
// 			break;



		bReturn = true;

	}
	while(false);

	return bReturn;
}


// bool CEventHandlerComm::SetMVSolPreReady(int nPortNumber, int nENCLineCh, CDefinition::EStage eStage, bool bClearAll, bool bReverse)
// {
// 	bool bReturn = false;
// 
// 	m_csSendPacket.Lock();
// 
// 	do
// 	{
// 		if(!SetMVSolInitialize(nPortNumber, nENCLineCh))
// 			break;
// 
// 		if(!SetTriggerPos(nPortNumber, (CDefinition::EEventHandler)nENCLineCh, eStage, bClearAll, bReverse))
// 			break;
// 
// 		if(!TriggerEnableOff(nPortNumber, nENCLineCh))
// 			break;
// 
// 
// 		bReturn = true;
// 
// 	}
// 	while(false);
// 	m_csSendPacket.Unlock();
// 	return bReturn;
// }

bool CEventHandlerComm::SetMVSolStartReady(int nPortNumber, int nENCLineCh)
{
	bool bReturn = false;
	m_csSendPacket.Lock();

	do
	{

		if(!EncoderCountClear(nPortNumber, nENCLineCh))
			break;

		if(!TriggerEnableOn(nPortNumber, nENCLineCh))
			break;

		bReturn = true;

	}
	while(false);
	m_csSendPacket.Unlock();

	return bReturn;
}

///////////////////////////////////////////////////////////////////////////////////////////////



