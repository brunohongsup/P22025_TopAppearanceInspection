#include "stdafx.h"
#include "FormViewTopMenu.h"
#include "EventHandlerCamera.h"
// FormViewTopMenu.cpp
#include "DeviceEuresysGrablinkFullTest.h"

IMPLEMENT_DYNCREATE(CFormViewTopMenu, CRavidFormViewBase)

CFormViewTopMenu::CFormViewTopMenu() : CRavidFormViewBase(IDD_FORM_TOPMENU)
{
	ZeroMemory(m_bSignal, sizeof(m_bSignal));


// 	m_FontTitle.CreateFont(
// 		24,						// 글자높이
// 		10,						// 글자너비
// 		0,						// 출력각도
// 		0,						// 기준 선에서의각도
// 		FW_BOLD/*FW_HEAVY*/,				// 글자굵기
// 		FALSE,					// Italic 적용여부
// 		FALSE,                  // 밑줄적용여부
// 		FALSE,					// 취소선적용여부
// 		DEFAULT_CHARSET,		// 문자셋종류
// 		OUT_DEFAULT_PRECIS,		// 출력정밀도
// 		CLIP_DEFAULT_PRECIS,	// 클리핑정밀도
// 		DEFAULT_QUALITY,		// 출력문자품질
// 		DEFAULT_PITCH,			// 글꼴Pitch
// 		_T("HY견고딕 보통")		// 글꼴
// 
// 	);
// 
// 	m_Font.CreateFont(
// 		14,						// 글자높이
// 		7,						// 글자너비
// 		0,						// 출력각도
// 		0,						// 기준 선에서의각도
// 		FW_BOLD/*FW_HEAVY*/,				// 글자굵기
// 		FALSE,					// Italic 적용여부
// 		FALSE,                  // 밑줄적용여부
// 		FALSE,					// 취소선적용여부
// 		DEFAULT_CHARSET,		// 문자셋종류
// 		OUT_DEFAULT_PRECIS,		// 출력정밀도
// 		CLIP_DEFAULT_PRECIS,	// 클리핑정밀도
// 		DEFAULT_QUALITY,		// 출력문자품질
// 		DEFAULT_PITCH,			// 글꼴Pitch
// 		_T("HY견고딕 보통")		// 글꼴
// 
// 	);
}

CFormViewTopMenu::~CFormViewTopMenu()
{

}

#ifdef _DEBUG
void CFormViewTopMenu::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewTopMenu::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG

void CFormViewTopMenu::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);

	int nIndex = 0;

	// Button
// 	DDX_Control(pDX, IDC_BUTTON_TEMP1, m_Button[nIndex++]);
// 	DDX_Control(pDX, IDC_BUTTON_TEMP2, m_Button[nIndex++]);
// 	DDX_Control(pDX, IDC_BUTTON_TEMP3, m_Button[nIndex++]);
// 	DDX_Control(pDX, IDC_BUTTON_TEMP4, m_Button[nIndex++]);

	// Label
	nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_TOPMENU_TITLE, m_Label[nIndex++]);
// 	DDX_Control(pDX, IDC_STATIC_TOPMENU_MODEL_NO, m_Label[nIndex++]);
// 	DDX_Control(pDX, IDC_STATIC_TOPMENU_MODEL_NAME, m_Label[nIndex++]);
// 	DDX_Control(pDX, IDC_STATIC_TOPMENU_MODEL_NO_VAL, m_Label[nIndex++]);
// 	DDX_Control(pDX, IDC_STATIC_TOPMENU_MODEL_NAME_VAL, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_TOPMENU_TITLE_CAM1, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_TOPMENU_TITLE_CAM2, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_TOPMENU_TITLE_MELSEC, m_Label[nIndex++]);
//	DDX_Control(pDX, IDC_STATIC_TOPMENU_USERLEVEL, m_Label[nIndex++]);
// 	DDX_Control(pDX, IDC_STATIC_TOPMENU_TEST, m_Label[nIndex++]);

	// List
// 	nIndex = 0;
// 	DDX_Control(pDX, IDC_LIST_TEMP1, m_List[nIndex++]);
// 	DDX_Control(pDX, IDC_LIST_TEMP2, m_List[nIndex++]);

	// Picture Control
	DDX_Control(pDX, IDC_STATIC_TOPMENU_LOGO, m_picLogo);

	nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_TOPMENU_CAM1, m_picDeviceStatus[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_TOPMENU_CAM2, m_picDeviceStatus[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_TOPMENU_MELSEC, m_picDeviceStatus[nIndex++]);

}



void CFormViewTopMenu::OnInitialUpdate()
{
	CRavidFormViewBase::OnInitialUpdate();

	// Initialize
// 	InitializeButton();
// 	InitializeButtonLanguage();
	InitializeLabel();
// 	InitializeListCtrl();

	m_picLogo.SetBkColor(CUSTOM_DARK);
	m_picLogo.Load(MAKEINTRESOURCE(IDB_PNG_LGES_LOGO), _T("PNG"));

	m_picDeviceStatus[EDeviceCtrl_Cam1].SetBkColor(CUSTOM_DARK);
	m_picDeviceStatus[EDeviceCtrl_Cam1].Load(MAKEINTRESOURCE(IDB_PNG_LED_GREEN_ICON_30), _T("PNG"));

	m_picDeviceStatus[EDeviceCtrl_Cam2].SetBkColor(CUSTOM_DARK);
	m_picDeviceStatus[EDeviceCtrl_Cam2].Load(MAKEINTRESOURCE(IDB_PNG_LED_GREEN_ICON_30), _T("PNG"));

	m_picDeviceStatus[EDeviceCtrl_Melsec].SetBkColor(CUSTOM_DARK);
	m_picDeviceStatus[EDeviceCtrl_Melsec].Load(MAKEINTRESOURCE(IDB_PNG_LED_GREEN_ICON_30), _T("PNG"));

	CreateIncludedDialog();

	// UI Timer
	SetTimer(0, 1000, nullptr);
//	SetTimer(1, 100, nullptr);
// 	SetTimer(200, 1000, nullptr);

}

void CFormViewTopMenu::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
}

void CFormViewTopMenu::OnPaint()
{
	CPaintDC pDC(this);
}

HBRUSH CFormViewTopMenu::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);
	return hbr;
}

void CFormViewTopMenu::OnTimer(UINT_PTR nIDEvent)
{

	static bool bTest = false;

	switch(nIDEvent)
	{
	case 0: // 1000ms
		{
			// Update
			bool bIsDeviceFine [3]{};
			for (int nIdx = 0; nIdx < 3; nIdx++)
			{
				if(nIdx == 0 || nIdx == 1)
				{
					CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), ECameraNum_Upper + nIdx));

					if(!pCamera)
					{
						bIsDeviceFine[nIdx] = false;
						continue;
					}

					if(!pCamera->IsInitialized())
					{
						bIsDeviceFine[nIdx] = false;
						continue;
					}
					bIsDeviceFine[nIdx] = true;
				}
				else
				{
					CDeviceSocketMNETG* pMNETG = dynamic_cast<CDeviceSocketMNETG*>(CDeviceManager::GetDeviceByIndex(CDefinition::EDeviceNo_MNetG));
					if(!pMNETG) 
					{
						bIsDeviceFine[nIdx] = false;
						continue;
					}
					if(!pMNETG->IsInitialized()) 
					{
						//break; 
						bIsDeviceFine[nIdx] = false;
						continue;
					}
				}
				bIsDeviceFine[nIdx] = true;
			}



			for (int nIdx = 0; nIdx < 3; nIdx++)
			{
				if(bIsDeviceFine[nIdx])
				{
					m_picDeviceStatus[nIdx].Load(MAKEINTRESOURCE(IDB_PNG_LED_GREEN_ICON_30), _T("PNG"));
				}
				else
				{
					m_picDeviceStatus[nIdx].Load(MAKEINTRESOURCE(IDB_PNG_LED_RED_ICON_30), _T("PNG"));
				}
				m_picDeviceStatus[nIdx].Invalidate(FALSE);

			}
			/*if(bTest)
			{

				m_picDeviceStatus[ELabel_Cam1 - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_GRAY_ICON_30), _T("PNG"));
				m_picDeviceStatus[ELabel_Cam2 - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_GRAY_ICON_30), _T("PNG"));
				m_picDeviceStatus[ELabel_Melsec - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_GRAY_ICON_30), _T("PNG"));

			}
			else
			{
				m_picDeviceStatus[ELabel_Cam1 - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_RED_ICON_30), _T("PNG"));
				m_picDeviceStatus[ELabel_Cam2 - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_RED_ICON_30), _T("PNG"));
				m_picDeviceStatus[ELabel_Melsec - 1].Load(MAKEINTRESOURCE(IDB_PNG_LED_RED_ICON_30), _T("PNG"));

			}*/



			bTest = !bTest;
		}
		break;
	case 1: // 200ms
		{
			// Update
		}
		break;
	default:
		break;
	}
	CRavidFormViewBase::OnTimer(nIDEvent);
}

void CFormViewTopMenu::OnDestroy()
{
	CRavidFormViewBase::OnDestroy();

	ReleaseIncludedDialog();

//	KillTimer(0);
//	KillTimer(1);
}

BEGIN_MESSAGE_MAP(CFormViewTopMenu, CRavidFormViewBase)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()

END_MESSAGE_MAP()



bool CFormViewTopMenu::CreateIncludedDialog()
{
	bool bResult = false;

	do
	{
		// Teaching Menu
// 		m_pDlgImage = new CRavidDlgImageViewTest(/*this*/);
// 		m_pDlgImage->Create(/*IDD_DIALOG_IMAGE,*/ /*this*/);
// 		m_pDlgImage->ShowWindow(SW_SHOW);

		bResult = true;
	}
	while(false);

	return bResult;
}

bool CFormViewTopMenu::ReleaseIncludedDialog()
{
	bool bResult = false;

	do
	{

		bResult = true;
	}
	while(false);

	return bResult;
}

void CFormViewTopMenu::InitializeLabel()
{

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));
	m_lf.lfHeight = 30;
	m_lf.lfWidth = 12;
	m_lf.lfEscapement = 0;
	m_lf.lfOrientation = 0;
	m_lf.lfItalic = 0;
	m_lf.lfUnderline = 0;
	m_lf.lfStrikeOut = 0;
	m_lf.lfWeight = 200;
	m_lf.lfCharSet = HANGEUL_CHARSET;//ARABIC_CHARSET;
	m_lf.lfOutPrecision = OUT_STROKE_PRECIS;
	m_lf.lfClipPrecision = 2;
	m_lf.lfQuality = 1;
	m_lf.lfPitchAndFamily = 1;

	///////////////////////////////////////////////////////////

	m_FontTitle.CreateFontIndirect(&m_lf);//정의된 font로 설정 
	m_Label[ELabel_Title].SetTextColor(WHITE);
	m_Label[ELabel_Title].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Title].SetFont(&m_FontTitle);



	m_lf.lfHeight = 18;
	m_lf.lfWidth = 6;
	m_Label[ELabel_Cam1].SetTextColor(WHITE);
	m_Label[ELabel_Cam1].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Cam1].SetFont(&m_Font);

	m_Label[ELabel_Cam2].SetTextColor(WHITE);
	m_Label[ELabel_Cam2].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Cam2].SetFont(&m_Font);

	m_Label[ELabel_Melsec].SetTextColor(WHITE);
	m_Label[ELabel_Melsec].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Melsec].SetFont(&m_Font);


}
