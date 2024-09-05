// CFormViewMain.cpp: 구현 파일
//

#include "stdafx.h"
#include "FormViewCameraControl.h"

#include "MVSolTrigger.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#pragma warning(disable: 4819)

IMPLEMENT_DYNCREATE(CFormViewCameraControl, CRavidFormViewBase)

CFormViewCameraControl::CFormViewCameraControl()
	: CRavidFormViewBase(IDD_FORM_CAMERA)
{

}

CFormViewCameraControl::~CFormViewCameraControl()
{

}
 
void CFormViewCameraControl::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);
 	DDX_Control(pDX, IDC_SPREAD_CAMERA_CAL, m_Sheet);
		
	DDX_Control(pDX, IDC_STATIC_GROUP_CAMERA, m_static[EStatic_Camera]);
	DDX_Control(pDX, IDC_STATIC_GROUP_CAL, m_static[EStatic_Calibration]);

	// Picture Control
	DDX_Control(pDX, IDC_STATIC_CAMERA_DRAW, m_picCamDraw);

	DDX_Control(pDX, IDC_BTN_CAMERA_FRONT, m_btn[EButton_TypeLeft]);
	DDX_Control(pDX, IDC_BTN_CAMERA_REAR, m_btn[EButton_TypeRight]);
}
 
BEGIN_MESSAGE_MAP(CFormViewCameraControl, CRavidFormViewBase)
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_WM_SIZE()

	ON_NOTIFY(NM_DBLCLK, IDC_SPREAD_CAMERA_CAL, OnSheetDblClick)
	ON_NOTIFY(NM_CLICK, IDC_SPREAD_CAMERA_CAL, OnSheetClick)
	ON_NOTIFY(NM_RCLICK, IDC_SPREAD_CAMERA_CAL, OnSheetRClick)
	ON_NOTIFY(GVN_BEGINLABELEDIT, IDC_SPREAD_CAMERA_CAL, OnSheetStartEdit)
	ON_NOTIFY(GVN_ENDLABELEDIT, IDC_SPREAD_CAMERA_CAL, OnSheetEndEdit)
	ON_NOTIFY(GVN_SELCHANGING, IDC_SPREAD_CAMERA_CAL, OnSheetStartSelChange)
	ON_NOTIFY(GVN_SELCHANGED, IDC_SPREAD_CAMERA_CAL, OnSheetEndSelChange)
	ON_NOTIFY(GVN_BEGINDRAG, IDC_SPREAD_CAMERA_CAL, OnSheetBeginDrag)

	ON_BN_CLICKED(IDC_BTN_CAMERA_FRONT, &CFormViewCameraControl::OnBnClickedBtnCameraFront)
	ON_BN_CLICKED(IDC_BTN_CAMERA_REAR, &CFormViewCameraControl::OnBnClickedBtnCameraRear)
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()

#ifdef _DEBUG
void CFormViewCameraControl::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewCameraControl::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG


void CFormViewCameraControl::OnInitialUpdate()
{
	CRavidFormViewBase::OnInitialUpdate();
	InitializeThreadDisplayer();

	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	CSize szScrollSize(0, 0);
	SetScrollSizes(MM_TEXT, szScrollSize);

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));
	m_lf.lfHeight = 20;
	m_lf.lfWidth = 8;
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

	m_font.CreateFontIndirect(&m_lf);//정의된 font로 설정 
	m_fontBtn.CreatePointFont(100, _T("MS Shell Dlg"));

	for(int i = 0; i < EButton_Count; i++)
	{
		m_btn[i].SetFont(&m_fontBtn);
		m_btn[i].SetFaceColor(RGB(40, 40, 40));
		m_btn[i].SetTextColor(WHITE);
	}


	for(int i = 0; i < EStatic_Count; i++)
	{
		m_static[i].SetFont(&m_font);
		m_static[i].SetBkColor(BASE_COLOR);

		SetWindowTheme(m_static[i].m_hWnd, _T(""), _T(""));
	}

	m_picCamDraw.SetBkColor(CUSTOM_DARK);
	m_picCamDraw.Load(MAKEINTRESOURCE(IDB_PNG_CAMDRAW), _T("PNG"));

	m_btn[m_eCamType].SetFaceColor(LIMEGREEN);
	m_btn[m_eCamType].Invalidate();
	m_btn[(m_eCamType + 1) % 2].SetFaceColor(BASE_COLOR);
	m_btn[(m_eCamType + 1) % 2].Invalidate();

	InitializeSheet();
}

void CFormViewCameraControl::InitializeSheet()
{
	USES_CONVERSION;

	const int nRowsStatistics = 3;
	const int nColsStatistics = 3;

	CRect rcSize;
	m_Sheet.GetWindowRect(rcSize);
	int nColSize = rcSize.Width() / nColsStatistics;

	m_Sheet.SetFixedColumnCount(1);
	m_Sheet.SetFixedRowCount(1);

	m_Sheet.SetRowCount(nRowsStatistics);
	m_Sheet.SetColumnCount(nColsStatistics);

	m_Sheet.SetBkColor(CUSTOM_DARK);

	// Sheet Sizing
	// Column
	m_Sheet.SetColumnWidth(0, 100);
	m_Sheet.SetColumnWidth(4, 100);
	m_Sheet.ExpandColumnsToFit();
	m_Sheet.ExpandRowsToFit();

	m_Sheet.EnableSelection(TRUE);
	m_Sheet.SetEditable(TRUE);
	m_Sheet.SetRowResize(FALSE);
	m_Sheet.SetColumnResize(FALSE);

	m_Sheet.SetFixedColumnSelection(FALSE);
	m_Sheet.SetFixedRowSelection(FALSE);


	const char* lpszTitle[nRowsStatistics][nColsStatistics] =
	{
		{"Item","X (mm)","Y (mm)"},
		{"Resolution","0","0"},
		{"FOV","0","0"},
	};

	COLORREF crFonts[nRowsStatistics][nColsStatistics] =
	{
		{WHITE,WHITE,WHITE},
		{WHITE,BLACK,BLACK},
		{WHITE,BLACK,BLACK},
	};

	COLORREF crBG[nRowsStatistics][nColsStatistics] =
	{
		{DARKGRAY,DARKGRAY,DARKGRAY},
		{DARKGRAY,WHITE,WHITE},
		{DARKGRAY,WHITE,WHITE},
	};

	m_Sheet.SetTextColor(CUSTOM_DARK);


	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);
	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));
	m_lf.lfHeight = 23;
	m_lf.lfWidth = 8;
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

	for(int nRow = 0; nRow < m_Sheet.GetRowCount(); nRow++)
	{
		for(int nCol = 0; nCol < m_Sheet.GetColumnCount(); nCol++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = nRow;
			sCellInfo.nCol = nCol;


			str.Format(_T("%s"), A2T(lpszTitle[nRow][nCol]));
			sCellInfo.strText = str;

			COLORREF crBackGround = crBG[nRow][nCol];
			COLORREF crFont = crFonts[nRow][nCol];

			m_Sheet.SetItem(&sCellInfo);
			m_Sheet.SetItemBkColour(nRow, nCol, crBackGround);

			m_Sheet.SetItemFgColour(nRow, nCol, crFont);
			m_Sheet.SetItemFormat(nRow, nCol, sCellInfo.dwFormat);

			m_Sheet.SetItemFont(nRow, nCol, &m_lf);

		}
	}

	m_Sheet.SetGridLineColor(RGB(60, 60, 60));
	m_Sheet.Invalidate();


}

void CFormViewCameraControl::UpdateSheet()
{
	CImageCameraView* pViewImage[EViewNo_ImageViewCameraLower + 1] = { nullptr, };

	for(int i = 0; i < EViewNo_ImageViewCameraLower + 1; i++)
		pViewImage[i] = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), EViewNo_ImageViewCameraUpper + i));

	if(!pViewImage[EViewNo_ImageViewCameraUpper])
		return;

	if(!pViewImage[EViewNo_ImageViewCameraLower])
		return;

	int nType = m_eCamType == ECameraNum_Upper ? EViewNo_ImageViewCameraUpper : EViewNo_ImageViewCameraLower;

	CString str;
	str.Format(_T("%.3f"), pViewImage[nType]->GetAccuracyX());
	m_Sheet.SetItemText(1, 1, str);

	str.Format(_T("%.3f"), pViewImage[nType]->GetAccuracyY());
	m_Sheet.SetItemText(1, 2, str);


	str.Format(_T("%.3f"), pViewImage[nType]->GetAccuracyX() * CamSizeX);
	m_Sheet.SetItemText(2, 1, str);

	str.Format(_T("%.3f"), pViewImage[nType]->GetAccuracyY() * CamSizeY);
	m_Sheet.SetItemText(2, 2, str);


	OptionsFormUpdate();
}

void CFormViewCameraControl::SettingViewParam()
{
	CImageCameraView* pViewImage[EViewNo_ImageViewCameraLower + 1] = { nullptr, };

	for(int i = 0; i < EViewNo_ImageViewCameraLower + 1; i++)
		pViewImage[i] = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), EViewNo_ImageViewCameraUpper + i));

	if(!pViewImage[EViewNo_ImageViewCameraUpper])
		return;

	if(!pViewImage[EViewNo_ImageViewCameraLower])
		return;

	int nType = m_eCamType == ECameraNum_Upper ? EViewNo_ImageViewCameraUpper : EViewNo_ImageViewCameraLower;


	CString str;
	str = m_Sheet.GetItemText(1, 1);
	pViewImage[nType]->SetAccuracyX(_ttof(str));
	str = m_Sheet.GetItemText(1, 2);
	pViewImage[nType]->SetAccuracyY(_ttof(str));


}

void CFormViewCameraControl::OptionsFormUpdate()
{
	CFormViewOptions* pOptionsFrom = dynamic_cast<CFormViewOptions*>(CUIManager::FindView(typeid(CFormViewOptions)));
	if(!pOptionsFrom)
		return;

	pOptionsFrom->InitData();

}


void CFormViewCameraControl::OnTimer(UINT_PTR nIDEvent)
{
	ImplementThreadDisplayer();

	switch(nIDEvent)
	{
	case 0:
		{
			KillTimer(nIDEvent);	
		}
	default:
		break;

	}

	CRavidFormViewBase::OnTimer(nIDEvent);
}

void CFormViewCameraControl::OnDestroy()
{
	CRavidFormViewBase::OnDestroy();
	TerminateThreadDisplayer();
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}

void CFormViewCameraControl::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
	//CRavidFormViewBase::OnSize(nType, cx, cy);


	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}

void CFormViewCameraControl::OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* /*pResult*/)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	//strMsg.Format(_T("Double Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);


	//CLogManager::Write(0, strMsg);

}

void CFormViewCameraControl::OnSheetClick(NMHDR *pNotifyStruct, LRESULT*)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);


	//CLogManager::Write(0, strMsg);
}

void CFormViewCameraControl::OnSheetClickLight(NMHDR *pNotifyStruct, LRESULT*)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

// 	switch(pItem->iColumn - 1)
// 	{
// 
// 	default:
// 		break;
// 	}
	//CLogManager::Write(0, strMsg);
}

void CFormViewCameraControl::OnSheetRClick(NMHDR *pNotifyStruct, LRESULT*)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Right Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	//CLogManager::Write(0, strMsg);

}

// GVN_BEGINLABELEDIT
void CFormViewCameraControl::OnSheetStartEdit(NMHDR *pNotifyStruct, LRESULT* pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Start Edit on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

}

// GVN_ENDLABELEDIT
void CFormViewCameraControl::OnSheetEndEdit(NMHDR *pNotifyStruct, LRESULT* pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("End Edit on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	CString strValue;

	if(pItem->iRow < 1)
		return;

	if(pItem->iColumn < 1)
		return;

	strValue = m_Sheet.GetItemText(pItem->iRow, pItem->iColumn);

	double dblValue = _ttof(strValue);

// 	if(pItem->iRow <= 6)
// 		m_SDefaultModelParam.nDefectThreshold[pItem->iRow - 1] = int(dblValue);
// 	else
// 		m_SDefaultModelParam.dblBurrThreshold[pItem->iRow - 7] = int(dblValue);
//
// 	SetSettingValue();
}

// GVN_SELCHANGING
void CFormViewCameraControl::OnSheetStartSelChange(NMHDR *pNotifyStruct, LRESULT* /*pResult*/)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("Start Selection Change on row %d, col %d \n"),
				  pItem->iRow, pItem->iColumn);

}

// GVN_SELCHANGED
void CFormViewCameraControl::OnSheetEndSelChange(NMHDR *pNotifyStruct, LRESULT* /*pResult*/)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("End Selection Change on row %d, col %d \n"),
				  pItem->iRow, pItem->iColumn);

	SettingViewParam();
	UpdateSheet();
}

// GVN_BEGINDRAG
void CFormViewCameraControl::OnSheetBeginDrag(NMHDR *pNotifyStruct, LRESULT* /*pResult*/)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Begin Drag row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	//CLogManager::Write(0, strMsg);
}


BOOL CFormViewCameraControl::PreTranslateMessage(MSG* pMsg)
{
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_ESCAPE))
	{
		return true;
	}

	// 엔터키
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_RETURN))
	{

		if(GetDlgItem(IDC_SPREAD_CAMERA_CAL)->m_hWnd == pMsg->hwnd)
		{
			SettingViewParam();
			UpdateSheet();
		}


// 		for(int i = 0; i < eEditName_Count; i++)
// 		{
// 			if(GetDlgItem(IDC_EDIT_AREA_OFFSET1 + i)->m_hWnd == pMsg->hwnd)
// 			{
// 				SetSettingValue();
// 			}
// 		}
		return true;
	}

	return CRavidFormViewBase::PreTranslateMessage(pMsg);

}


void CFormViewCameraControl::OnBnClickedBtnCameraFront()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	m_eCamType = ECameraNum_Upper;
	m_btn[m_eCamType].SetFaceColor(LIMEGREEN);
	m_btn[m_eCamType].Invalidate();
	m_btn[(m_eCamType + 1) % 2].SetFaceColor(BASE_COLOR);
	m_btn[(m_eCamType + 1) % 2].Invalidate();

	return;

	//Temp
	//return;

	if(CSequenceManager::IsRunning())
		return;

	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

	CEventHandlerCamera* pHandlerCam = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));
	if(!pHandlerCam)
		return;


	pHandlerCam->SetGrabCount(0);
	pHandlerCam->GrabStop();
	pHandlerMain->AllClearMVSolTrigger();

	pHandlerMain->SetMVSolTrigger(0, EPacketDir_Send_Foward);

	pHandlerCam->GrabStart();

// 	
// 	CRavidImage ri;
// 	CString str;
// 	str.Format(_T("C:\\RavidUser\\Project\\P22025_TopEngBatteryStackVision\\TestpasteImage\\%d.bmp"), m_nCOuntsss + 1);
// 
// 	ri.Load(str);
// 
// 		
// 	Ravid::Miscellaneous::CPerformanceCounter pcTime;
// 	pcTime.Start();
// 
// 	pHandlerMain->CameraBufferRotateAndPasteColor(&ri, m_nCOuntsss);
// 	//pHandlerMain->RotateImage(&ri, 0, m_nCOuntsss);
// 	CLogManager::Write(ELogType_Main, _T("[ttttt] Test : %0.3lf ms"), pcTime.GetElapsedTime());
// 
// 	m_nCOuntsss++;




}


void CFormViewCameraControl::OnBnClickedBtnCameraRear()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_eCamType = ECameraNum_Lower;
	m_btn[m_eCamType].SetFaceColor(LIMEGREEN);
	m_btn[m_eCamType].Invalidate();
	m_btn[(m_eCamType + 1) % 2].SetFaceColor(BASE_COLOR);
	m_btn[(m_eCamType + 1) % 2].Invalidate();

	return;

	//Temp
	//return;

	if(CSequenceManager::IsRunning())
		return;

	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

	CEventHandlerCamera* pHandlerCam = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraLower));
	if(!pHandlerCam)
		return;

	pHandlerCam->SetGrabCount(0);
	pHandlerCam->GrabStop();
	pHandlerMain->AllClearMVSolTrigger();

	pHandlerMain->SetMVSolTrigger(1, EPacketDir_Send_Foward);

	pHandlerCam->GrabStart();

//	m_nCOuntsss = 0;
}



HBRUSH CFormViewCameraControl::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.

	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return hbr;
}
