
// P22025_TopEngBatteryAppearanceInspection.h: PROJECT_NAME 응용 프로그램에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'stdafx.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.

//////////////////////////////////////////////////////////////////////////
#include "Definition.h"

#include "EventHandlerMain.h"
#include "EventHandlerCamera.h"
#include "EHDeviceRS232C_MVSol.h"

#include "SequenceMain.h"

#include "FormViewMain.h"
#include "FormViewCameraControl.h"
#include "FormViewRegister.h"
#include "FormViewTopMenu.h"
#include "FormViewBotMenu.h"
#include "FormViewOptions.h"
#include "FormViewComm.h"

#include "RegisterPageImageStatistic.h"
#include "RegisterPageMarkROI.h"
#include "RegisterPageMeasure.h"
#include "DlgEditROI.h"

#include "ImageViewMain.h"
#include "ImageCameraView.h"
#include "ImageViewTeaching.h"

#include "CommonCls/RavidAssistDskim.h"
#include "CCellTracker.h"
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Mathematics;
using namespace Ravid::Miscellaneous;

using namespace CDefinition;
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
#include "eVision/CommonLibraries/Includes/JHBiscuit/JHBiscuit.h"
//////////////////////////////////////////////////////////////////////////

// CP22025_TopEngBatteryAppearanceInspectionApp:
// 이 클래스의 구현에 대해서는 P22025_TopEngBatteryAppearanceInspection.cpp을(를) 참조하세요.
//

class CP22025_TopEngBatteryAppearanceInspectionApp : public CWinAppEx
{
public:
	CP22025_TopEngBatteryAppearanceInspectionApp();

// 재정의입니다.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 구현입니다.
public:
	bool InitDevice();
	bool TerminateAllDevice();
	bool AddEventHandler();
	bool AddSequence();
	bool InitView();
	
public:
	
private:

	//////////////////////////////////////////////////////////////////////////
	CRavidAssistDskim m_AssistDskim;
	//////////////////////////////////////////////////////////////////////////

	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

extern CP22025_TopEngBatteryAppearanceInspectionApp theApp;
 