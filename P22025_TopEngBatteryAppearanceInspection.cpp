
// P22025_TopEngBatteryAppearanceInspection.cpp: 응용 프로그램에 대한 클래스 동작을 정의합니다.
//

#include "stdafx.h"
#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "DeviceEuresysGrablinkFullTest.h"

#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif

// CP22025_TopEngBatteryAppearanceInspectionApp

BEGIN_MESSAGE_MAP(CP22025_TopEngBatteryAppearanceInspectionApp, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinAppEx::OnHelp)
END_MESSAGE_MAP()


// CP22025_TopEngBatteryAppearanceInspectionApp 생성

CP22025_TopEngBatteryAppearanceInspectionApp::CP22025_TopEngBatteryAppearanceInspectionApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CP22025_TopEngBatteryAppearanceInspectionApp 개체입니다.

CP22025_TopEngBatteryAppearanceInspectionApp theApp;


#define TM_SIBURAL (WM_USER + 100)
// CP22025_TopEngBatteryAppearanceInspectionApp 초기화

BOOL CP22025_TopEngBatteryAppearanceInspectionApp::InitInstance()
{
	//_crtBreakAlloc = 806974;

	CWinAppEx::InitInstance();

	//로그 루트 패스 변경
	CLogManager::SetRootPath(_T("D:\\VisionLog"));

	JHBiscuit_Initialize_OEV_8359("~!~!@#3_OIUKMGH@^Gdt3$^8Ow1wfg78(_@#GS@)_##2H!DJJ@@^jhs23%^&q2S@@7!!FG%^&*&(@e@FFH#^EFHi6*$%^URTYg%*)F(@)!D:KHK#:@SfdSq2@4353^&trew");

	SetRegistryKey(_T("P22025_TopEngBatteryAppearanceInspection"));

	//_crtBreakAlloc = 706352;
	

	//RAVID Title 변경
	CUIManager::SetRavidTitle(_T("Ravid Framework 1.0.5.4000 - Ver 1.0.00"));

	//////////////////////////////////////////////////////////////////////////
	//개인 FormView, ImageView 등의 클래스 추가.
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewMain));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewRegister));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewCameraControl));


	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewTopMenu));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewBotMenu));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewOptions));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewComm));


	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CImageViewMain));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CImageCameraView));
	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CImageViewTeaching));

	CDeviceManager::RegisterDeviceInfos(new CDeviceEuresysGrablinkFullTest);


	//////////////////////////////////////////////////////////////////////////

	bool bSetting = false;

	Ravid::Framework::CFrameworkManager::Begin(_T("P22025_TopEngBatteryAppearanceInspection_Settings"), bSetting);

	if(bSetting)
		return TRUE;

	Ravid::Framework::CAuthorityManager::LogIn(_T("root"), _T(""));

	//Ravid::Framework::CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);

		
	CUIManager::SetSkinType(ERavidSkinType_Dark);

	AddEventHandler();
	AddSequence();
	InitView();
	InitDevice();

	m_AssistDskim.OpenLastModel();


	this->PostThreadMessage(TM_SIBURAL, 0, 0);

	return TRUE;
}

int CP22025_TopEngBatteryAppearanceInspectionApp::ExitInstance()
{
	CWinAppEx::ExitInstance();

	TerminateAllDevice();

	return TRUE;
}

bool CP22025_TopEngBatteryAppearanceInspectionApp::InitDevice()
{
	bool bReturn = true;

	do
	{
		CString strMsg;

		CDeviceSocketMNETG* pMelsec = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceSocketMNETG), 0));
		EDeviceInitializeResult eResult = EDeviceInitializeResult_UnknownError;

		if(pMelsec)
		{
			pMelsec->SetStationNo(255);
			pMelsec->SetNetworkNo(000);
			pMelsec->SetChannel(151);

			if(pMelsec->IsInitialized())
				pMelsec->Terminate();

			if(pMelsec->Initialize() == EDeviceInitializeResult_OK)
			{
				strMsg.Format(_T("[Initialize] Socket MNETG Initialized Successed"));
				CLogManager::Write(ELogType_Initialize, strMsg);
			}
			else
			{
				bReturn &= false;
				strMsg.Format(_T("[Initialize] Socket MNETG Initialized Failed"));
				CLogManager::Write(ELogType_Initialize, strMsg);
			}
		}
		else
		{
			bReturn &= false;
			strMsg.Format(_T("[Initialize] Socket MNETG Get Pointer Error - Checked Device & Setting File"));
			CLogManager::Write(ELogType_Initialize, strMsg);
		}


		CDeviceRS232C* pSerial = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceRS232C), 0));
		if(pSerial)
		{
			if(pSerial->Initialize() == EDeviceInitializeResult_OK)
			{
				strMsg.Format(_T("[Initialize] Serial Initialized Successed"));
				CLogManager::Write(ELogType_Initialize, strMsg);
			}
			else
			{
				bReturn &= false;
				strMsg.Format(_T("[Initialize] Serial Initialized Failed"));
				CLogManager::Write(ELogType_Initialize, strMsg);
			}
		}
		else
		{
			bReturn &= false;
			strMsg.Format(_T("[Initialize] Serial Get Pointer Error - Checked Device & Setting File"));
			CLogManager::Write(ELogType_Initialize, strMsg);
		}

		for(int i = 0; i < ECameraNum_Count; i++)
		{
			CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), i));

			if(pCamera)
			{
				if(pCamera->Initialize() == EDeviceInitializeResult_OK)
				{
					strMsg.Format(_T("[Initialize] Camera Initialized Successed - %d"), i);
					CLogManager::Write(ELogType_Initialize, strMsg);
				}
				else
				{
					bReturn &= false;
					strMsg.Format(_T("[Initialize] Camera Initialized Failed - %d"), i);
					CLogManager::Write(ELogType_Initialize, strMsg);
				}
			}
			else
			{
				bReturn &= false;
				strMsg.Format(_T("[Initialize] Camera Get Pointer Error - Checked Device & Setting File"));
				CLogManager::Write(ELogType_Initialize, strMsg);
			}
		}
	}
	while(false);

	return bReturn;
}


bool CP22025_TopEngBatteryAppearanceInspectionApp::TerminateAllDevice()
{
	bool bReturn = true;

	do
	{
		for(int i = 0; i < CDeviceManager::GetDeviceCount(); ++i)
		{
			bool bCurrent = false;
			CDeviceBase* pDevice = CDeviceManager::GetDeviceByIndex(i);
			if(pDevice)
			{
				if(pDevice->Terminate() == EDeviceTerminateResult_OK)
					bCurrent = true;
			}

			bReturn &= bCurrent;
		}
	}
	while(false);

	return bReturn;
}

bool CP22025_TopEngBatteryAppearanceInspectionApp::AddEventHandler()
{
	bool bReturn = false;

	do
	{
		if(true)
		{
			bReturn = true;

			CEventHandlerCamera* pHandlerCam1 = new CEventHandlerCamera(EDeviceNo_ColorLineCamera);
			if(pHandlerCam1)
			{
				pHandlerCam1->SetObjectID(EEventHandlerNo_CameraUpper);
				CEventHandlerManager::AddEventHandler(pHandlerCam1);
			}

			CEventHandlerCamera* pHandlerCam2 = new CEventHandlerCamera(EDeviceNo_MonoLineCamera);
			if(pHandlerCam2)
			{
				pHandlerCam2->SetObjectID(EEventHandlerNo_CameraLower);
				CEventHandlerManager::AddEventHandler(pHandlerCam2);
			}


			CEventHandlerMain* pHandlerLaser = new CEventHandlerMain;
			if(pHandlerLaser)
			{
				pHandlerLaser->SetObjectID(EEventHandlerNo_Main);
				CEventHandlerManager::AddEventHandler(pHandlerLaser);
			}

		}
	}
	while(false);

	return bReturn;
}
bool CP22025_TopEngBatteryAppearanceInspectionApp::AddSequence()
{
	bool bReturn = false;

	do
	{
		if(CDefinition::ESequenceNo_Count)
		{
			bReturn = true;

			if(!CSequenceManager::RegisterSequence(new CSequenceMain, true))
				bReturn = false;
		}
	}
	while(false);

	return bReturn;
}
bool CP22025_TopEngBatteryAppearanceInspectionApp::InitView()
{
	std::vector<CRavidChildFrameBase*> vctFrameBase;
	std::vector<CRavidFormViewBase*> vctFormView;
	std::vector<CRavidImageView*> vctImageView;

	CUIManager::GetAllRavidChildFrame(&vctFrameBase);
	CUIManager::GetAllRavidFormView(&vctFormView);
	CUIManager::GetAllRavidImageView(&vctImageView);


	for(auto iter = vctFrameBase.begin(); iter != vctFrameBase.end(); ++iter)
	{
		long nObjID = (*iter)->GetObjectID();

// 		CLogManager::Write(0, _T("[Obj ID: %d] %s"), nObjID, (*iter)->GetClassNameStr());

		if(nObjID >= CDefinition::EViewNo_FormTopMenu && nObjID < CDefinition::EViewNo_Count)
		{
			(*iter)->EnableToolBar(false);

			if(!(*iter)->IsLockRelative())
				(*iter)->LockRelative();
		}
	}

	for(auto iter = vctFormView.begin(); iter != vctFormView.end(); ++iter)
	{
	}
	for(auto iter = vctImageView.begin(); iter != vctImageView.end(); ++iter)
	{


		CImageCameraView* pViewInspection = dynamic_cast<CImageCameraView*>(*iter);

		if(pViewInspection)
		{

			for(int i = 1; i < 9; i++)
			{
				CRavidImageViewLayer* pLayer = pViewInspection->GetLayer(i);
				pLayer->Show(false);
			}

		}
	}
	return false;
}

BOOL CP22025_TopEngBatteryAppearanceInspectionApp::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if(pMsg->hwnd == NULL && pMsg->message == TM_SIBURAL)
	{

		Ravid::Framework::CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);
	}

	return CWinAppEx::PreTranslateMessage(pMsg);
}
