
// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이 
// 들어 있는 포함 파일입니다.

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 거의 사용되지 않는 내용은 Windows 헤더에서 제외합니다.
#endif

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#ifndef _WIN32_WINDOWS		// Allow use of features specific to Windows 98 or later.
#define _WIN32_WINDOWS 0x0410 // Change this to the appropriate value to target Windows Me or later.
#endif

#ifndef _WIN32_IE			// Allow use of features specific to IE 6.0 or later.
#define _WIN32_IE 0x0600	// Change this to the appropriate value to target other versions of IE.
#endif


#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // 일부 CString 생성자는 명시적으로 선언됩니다.

// MFC의 공통 부분과 무시 가능한 경고 메시지에 대한 숨기기를 해제합니다.
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 핵심 및 표준 구성 요소입니다.
#include <afxext.h>         // MFC 확장입니다.





#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // Internet Explorer 4 공용 컨트롤에 대한 MFC 지원입니다.
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // Windows 공용 컨트롤에 대한 MFC 지원입니다.
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // MFC의 리본 및 컨트롤 막대 지원

#include "Ravid.h"


#include "RavidMelsecLib/RavidMelsec.h"

#pragma comment(lib, "RavidMelsecLib" LIB_DEBUG_POSTFIX)

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
#include "eVision/VDefinitionCls/Definition.h"

#pragma warning(disable : 4800)
#pragma warning(disable : 4244)
#pragma warning(disable : 4819)
#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

//////////////////////////////////////////////////////////////////////////
#ifndef _M_X64		// 32bit
	#ifdef WIN64
		#undef WIN64
	#endif

	#ifdef _WIN64
		#undef _WIN64
	#endif

	#ifndef WIN32
		#define WIN32
	#endif

	#ifndef _WIN32
		#define _WIN32
	#endif
#else				// 64bit
	#ifndef WIN64
		#define WIN64
	#endif

	#ifndef _WIN64
		#define _WIN64
	#endif
#endif

#ifndef _WIN64
	#ifdef _DEBUG
		#pragma comment(lib, "eVision/Lib_Win32/opencv_core2411.lib")
		#pragma comment(lib, "eVision/Lib_Win32/JHBiscuit.lib")
	#else
		#pragma comment(lib, "eVision/Lib_Win32/opencv_core2411.lib")
		#pragma comment(lib, "eVision/Lib_Win32/JHBiscuit.lib")
	#endif
#else
	#ifdef _DEBUG
		#pragma comment(lib, "eVision/Lib_x64/opencv_core2411.lib")
		#pragma comment(lib, "eVision/Lib_x64/JHBiscuit.lib")
	#else
		#pragma comment(lib, "eVision/Lib_x64/opencv_core2411.lib")
		#pragma comment(lib, "eVision/Lib_x64/JHBiscuit.lib")
	#endif
#endif
//////////////////////////////////////////////////////////////////////////

#include "eVision/CommonLibraries/Includes/OpenEVision/Open_eVision_1_2.h"
using namespace Euresys::Open_eVision_1_2;
//////////////////////////////////////////////////////////////////////////

// Ravid
using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Mathematics;
using namespace Ravid::Miscellaneous;

// Def
#include "Definition.h"


#if		defined(_WIN64)
#pragma comment(lib, "ChartDirectLibrary/lib.x64/chartdir60.lib")
#else
#pragma comment(lib, "ChartDirectLibrary/lib.win32/chartdir60.lib")
#endif

#include "ChartDirectLibrary/chartdir.h"
#include <afxext.h>
#include <afxwin.h>



#ifdef UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif