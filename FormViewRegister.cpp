// RegisterFormView.cpp: 구현 파일
//

#include "stdafx.h"
#include "FormViewRegister.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
// CFormViewRegister

IMPLEMENT_DYNCREATE(CFormViewRegister, CRavidFormViewBase)

CFormViewRegister::CFormViewRegister()
	: CRavidFormViewBase(IDD_FORM_REGISTER)
{
	m_pPageImageStatistic = nullptr;
	m_pPageMarkROI = nullptr;
	m_pPageMeasure = nullptr;

	m_pModelParam = nullptr;

}

CFormViewRegister::~CFormViewRegister()
{
	if (m_pPageImageStatistic)
		delete m_pPageImageStatistic;
	if (m_pPageMarkROI)
		delete m_pPageMarkROI;
	if (m_pPageMeasure)
		delete m_pPageMeasure;

	m_font.DeleteObject();
	m_fontBtn.DeleteObject();
}

void CFormViewRegister::DoDataExchange(CDataExchange* pDX)
{
// 	DDX_Control(pDX, IDC_BTN_REGISTER_ALIGN_LEFTTOP, m_btn[EBtn_Align_LeftTop]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_ALIGN_LEFTBOTTOM, m_btn[EBtn_Align_LeftBottom]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_ALIGN_RIGHTTOP, m_btn[EBtn_Align_RightTop]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_ALIGN_RIGHTBOTTOM, m_btn[EBtn_Align_RightBottom]);
	DDX_Control(pDX, IDC_BTN_REGISTER_LIVE, m_btn[EBtn_Live]);
	DDX_Control(pDX, IDC_BTN_REGISTER_STOP, m_btn[EBtn_Stop]);
	DDX_Control(pDX, IDC_BTN_REGISTER_LOADDXF, m_btn[EBtn_LoadDXF]);
	DDX_Control(pDX, IDC_BTN_REGISTER_DRAWDXF, m_btn[EBtn_DrawDXF]);
	DDX_Control(pDX, IDC_BTN_REGISTER_LOAD, m_btn[EBtn_Load]);
	DDX_Control(pDX, IDC_BTN_REGISTER_SAVE, m_btn[EBtn_Save]);
	DDX_Control(pDX, IDC_BTN_REGISTER_FRONT, m_btn[EBtn_Front]);
	DDX_Control(pDX, IDC_BTN_REGISTER_REAR, m_btn[EBtn_Rear]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_ADD, m_btn[EBtn_Add]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_DELETE, m_btn[EBtn_Delete]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_EDIT, m_btn[EBtn_Edit]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_SETDATUM, m_btn[EBtn_Datum]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_MEASUREALL, m_btn[EBtn_MeasureAll]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_MEASURE, m_btn[EBtn_Measure]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_SHOWMEASURE, m_btn[EBtn_ShowMeasure]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_LOADFORMEXCEL, m_btn[EBtn_LoadFromExcel]);
// 	DDX_Control(pDX, IDC_BTN_REGISTER_EXCEL_SAVETOEXCEL, m_btn[EBtn_SaveToExcel]);

	DDX_Control(pDX, IDC_BTN_REGISTER_TAB_MEASURE, m_btn[EBtn_Tab_Measure]);
	DDX_Control(pDX, IDC_BTN_REGISTER_TAB_MARKROI, m_btn[EBtn_Tab_MarkROI]);
	DDX_Control(pDX, IDC_BTN_REGISTER_TAB_IMAGESTATISTIC, m_btn[EBtn_Tab_ImageStatistic]);

	DDX_Control(pDX, IDC_STATIC_GROUP1, m_static[EStatic_Camera]);
// 	DDX_Control(pDX, IDC_STATIC3333, m_static[EStatic_MeasureMent]);
// 	DDX_Control(pDX, IDC_STATIC44444, m_static[EStatic_Result]);


	CRavidFormViewBase::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFormViewRegister, CRavidFormViewBase)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BTN_REGISTER_TAB_MEASURE, &CFormViewRegister::OnBnClickedBtnRegisterTabMeasure)
	ON_BN_CLICKED(IDC_BTN_REGISTER_TAB_MARKROI, &CFormViewRegister::OnBnClickedBtnRegisterTabMarkroi)
	ON_BN_CLICKED(IDC_BTN_REGISTER_TAB_IMAGESTATISTIC, &CFormViewRegister::OnBnClickedBtnRegisterTabImagestatistic)
// 	ON_BN_CLICKED(IDC_BTN_REGISTER_ALIGN_LEFTTOP, &CFormViewRegister::OnBnClickedBtnRegisterAlignLefttop)
// 	ON_BN_CLICKED(IDC_BTN_REGISTER_ALIGN_RIGHTTOP, &CFormViewRegister::OnBnClickedBtnRegisterAlignRighttop)
// 	ON_BN_CLICKED(IDC_BTN_REGISTER_ALIGN_LEFTBOTTOM, &CFormViewRegister::OnBnClickedBtnRegisterAlignLeftbottom)
// 	ON_BN_CLICKED(IDC_BTN_REGISTER_ALIGN_RIGHTBOTTOM, &CFormViewRegister::OnBnClickedBtnRegisterAlignRightbottom)
	ON_BN_CLICKED(IDC_BTN_REGISTER_LIVE, &CFormViewRegister::OnBnClickedBtnRegisterLive)
	ON_BN_CLICKED(IDC_BTN_REGISTER_STOP, &CFormViewRegister::OnBnClickedBtnRegisterStop)
	ON_BN_CLICKED(IDC_BTN_REGISTER_FRONT, &CFormViewRegister::OnBnClickedBtnRegisterFront)
	ON_BN_CLICKED(IDC_BTN_REGISTER_REAR, &CFormViewRegister::OnBnClickedBtnRegisterRear)
	ON_WM_SIZE()
	ON_BN_CLICKED(IDC_BTN_REGISTER_LOAD, &CFormViewRegister::OnBnClickedBtnRegisterLoad)
	ON_BN_CLICKED(IDC_BTN_REGISTER_SAVE, &CFormViewRegister::OnBnClickedBtnRegisterSave)
END_MESSAGE_MAP()

#ifdef _DEBUG
void CFormViewRegister::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewRegister::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG


void CFormViewRegister::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


HBRUSH CFormViewRegister::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
// 	switch(nCtlColor)
// 	{
// 	case CTLCOLOR_STATIC:
// 		{
// // 			pDC->SetTextColor(WHITE);
// // 			pDC->SetBkColor(RGB(40, 40, 40));
// // 
// // 			return (HBRUSH)GetStockObject(NULL_BRUSH);
// 
// 			pDC->SetTextColor(RGB(120, 120, 120));
// 			pDC->SetBkMode(TRANSPARENT);
// 			return (HBRUSH)GetStockObject(NULL_BRUSH);
// 		}
// 		break;
// 
// 	}
	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return hbr;
}

void CFormViewRegister::OnInitialUpdate()
{
	__super::OnInitialUpdate();

	CSize szScrollSize(0, 0);
	SetScrollSizes(MM_TEXT, szScrollSize);

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));//Tahoma
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

	//////////////////////////////////////////////////////////////////////////
	m_font.CreateFontIndirect(&m_lf);

	m_fontBtn.CreatePointFont(100, _T("MS Shell Dlg"));

	for(int i = 0; i < EBtn_Count; i++)
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


	CRect crBtn, crPage, crView;
	GetWindowRect(crView);
	m_btn[EBtn_Tab_Measure].GetWindowRect(crBtn);
	int nOffset = crBtn.bottom - crView.top - 10;

	if (!m_pPageMeasure)
	{
		m_pPageMeasure = new CRegisterPageMeasure(this);

		if (!m_pPageMeasure)
			return;

		if (m_pPageMeasure->GetSafeHwnd() == NULL)
			m_pPageMeasure->Create(IDD_FORM_REGISTER_PAGE_MEASURE, this);

		m_pPageMeasure->GetClientRect(crPage);
		m_pPageMeasure->SetWindowPos(nullptr, 0, nOffset, crPage.Width(), crPage.Height(), SWP_NOSIZE);
		m_pPageMeasure->ShowWindow(SW_SHOW);
	}

	if (!m_pPageMarkROI)
	{
		m_pPageMarkROI = new CRegisterPageMarkROI(this);

		if (!m_pPageMarkROI)
			return;

		if (m_pPageMarkROI->GetSafeHwnd() == NULL)
			m_pPageMarkROI->Create(IDD_FORM_REGISTER_PAGE_MARKROI, this);

		m_pPageMarkROI->GetClientRect(crPage);
		m_pPageMarkROI->SetWindowPos(nullptr, 0, nOffset, crPage.Width(), crPage.Height(), SWP_NOSIZE);
		m_pPageMarkROI->ShowWindow(SW_SHOW);

	}

	if (!m_pPageImageStatistic)
	{
		m_pPageImageStatistic = new CRegisterPageImageStatistic(this);

		if (!m_pPageImageStatistic)
			return;

		if (m_pPageImageStatistic->GetSafeHwnd() == NULL)
			m_pPageImageStatistic->Create(IDD_FORM_REGISTER_PAGE_IMAGESTATISTIC, this);

		m_pPageImageStatistic->GetClientRect(crPage);
		m_pPageImageStatistic->SetWindowPos(nullptr, 0, nOffset, crPage.Width(), crPage.Height(), SWP_NOSIZE);
		m_pPageImageStatistic->ShowWindow(SW_HIDE);
	}


	////////////////////////////////////////////////////////////////////////

	m_btn[EBtn_Tab_Measure].SetFaceColor(GRAY);
	m_btn[EBtn_Tab_Measure].Invalidate();
	m_btn[EBtn_Tab_MarkROI].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_MarkROI].Invalidate();
	m_btn[EBtn_Tab_ImageStatistic].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_ImageStatistic].Invalidate();

// 	m_btn[EBtn_Align_LeftTop].SetFaceColor(LIMEGREEN);
// 	m_btn[EBtn_Align_LeftTop].Invalidate();
// 	m_btn[EBtn_Align_LeftBottom].SetFaceColor(BASE_COLOR);
// 	m_btn[EBtn_Align_LeftBottom].Invalidate();
// 	m_btn[EBtn_Align_RightTop].SetFaceColor(BASE_COLOR);
// 	m_btn[EBtn_Align_RightTop].Invalidate();
// 	m_btn[EBtn_Align_RightBottom].SetFaceColor(BASE_COLOR);
// 	m_btn[EBtn_Align_RightBottom].Invalidate();
// 	SetSelectCamera(EBtn_Align_LeftTop);

	if (!m_pModelParam)
		return;

	SetSelectPosition(ECameraNum_Upper);
//	SetSelectPosition(m_pModelParam->nCamPosition[EBtn_Align_LeftTop]);

	if(GetSelectPosition())
	{
		m_btn[EBtn_Front].SetFaceColor(LIMEGREEN);
		m_btn[EBtn_Front].Invalidate();
		m_btn[EBtn_Rear].SetFaceColor(BASE_COLOR);
		m_btn[EBtn_Rear].Invalidate();
	}
	else
	{
		m_btn[EBtn_Front].SetFaceColor(LIMEGREEN);
		m_btn[EBtn_Front].Invalidate();
		m_btn[EBtn_Rear].SetFaceColor(BASE_COLOR);
		m_btn[EBtn_Rear].Invalidate();
	}


	InitializeThreadDisplayer();
}

void CFormViewRegister::OnDestroy()
{

	__super::OnDestroy();


	TerminateThreadDisplayer();


}

void CFormViewRegister::OnOpenModel()
{
	if (!m_pModelParam)
		return;

	m_pPageMarkROI->SetModelParamPtr(m_pModelParam);
	m_pPageMarkROI->OnOpenModel();

	m_pPageImageStatistic->SetModelParamPtr(m_pModelParam);
	m_pPageImageStatistic->OnOpenModel();
	//SetSelectPosition(m_pModelParam->nCamPosition[EBtn_Align_LeftTop]);
	SetSelectPosition(ECameraNum_Upper);

	if (GetSelectPosition())
	{
		m_btn[EBtn_Front].SetFaceColor(LIMEGREEN);
		m_btn[EBtn_Front].Invalidate();
		m_btn[EBtn_Rear].SetFaceColor(BASE_COLOR);
		m_btn[EBtn_Rear].Invalidate();
	}
	else
	{
		m_btn[EBtn_Front].SetFaceColor(LIMEGREEN);
		m_btn[EBtn_Front].Invalidate();
		m_btn[EBtn_Rear].SetFaceColor(BASE_COLOR);
		m_btn[EBtn_Rear].Invalidate();
	}

	OnBnClickedBtnRegisterTabMarkroi();

}

BOOL CFormViewRegister::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg)
	{
		if (pMsg->message == WM_LBUTTONUP)
		{
		
		}
		if (pMsg->wParam == VK_RETURN)
		{

		}
	}

	return CRavidFormViewBase::PreTranslateMessage(pMsg);
}

bool CFormViewRegister::InitSheetNGList()
{
	USES_CONVERSION;

	bool bReturn = false;


	CRect crSpread;
	ZeroMemory(&crSpread, sizeof(crSpread));
	m_SheetNgList.GetClientRect(&crSpread);

	const int nColsStatistics = 8;
	const int nRowsStatistics = 20;
	const int nFixedCols = 1;
	const int nFixedRows = 1;
	const int nCols = 4;//5
	const int nRows = 20;//4

	m_SheetNgList.SetFont(&m_font);
	m_SheetNgList.GetDefaultCell(FALSE, FALSE)->SetBackClr(BLACK);
	m_SheetNgList.SetRowResize(FALSE);
	m_SheetNgList.SetColumnResize(FALSE);
	m_SheetNgList.EnableSelection(FALSE);
	m_SheetNgList.SetFixedColumnSelection(FALSE);
	m_SheetNgList.SetFixedRowSelection(FALSE);
	m_SheetNgList.SetRowCount(nRowsStatistics);
	m_SheetNgList.SetColumnCount(nColsStatistics);
	m_SheetNgList.SetFixedColumnCount(1);
	m_SheetNgList.SetEditable(FALSE);
	//m_SheetResult.SetFixedRowCount(nRowsStatistics);
	//GVL_NONE, false);
	m_SheetNgList.UsingScrollBars(GVL_BOTH, false);
	//m_SheetNgList.UsingScrollBars(GVL_NONE, false);
	CSize czSpread;
	czSpread.cx = crSpread.right;
	czSpread.cy = crSpread.bottom;
	czSpread.cx -= 2;
	czSpread.cy -= 2;

	int nSizeWidth = crSpread.Width() / (nColsStatistics);
	nSizeWidth -= 40;
	//m_SheetNgList.SetColumnWidth(0, nSizeWidth - 160);
	//m_SheetNgList.SetColumnWidth(1, nSizeWidth - 160);
	//m_SheetNgList.SetColumnWidth(2, nSizeWidth);
	//m_SheetNgList.SetColumnWidth(3, nSizeWidth);
	//m_SheetResult.SetColumnWidth(4, );

	for (int i = 0; i < nColsStatistics; i++)
		m_SheetNgList.SetColumnWidth(i, nSizeWidth);

	for (int i = 0; i < nRowsStatistics; i++)
		m_SheetNgList.SetRowHeight(i, (int)(crSpread.Height() / nRowsStatistics));

	CString strName;
	const char* lpszTitle[nColsStatistics] = { "NO", "CELL", "STAGE","CX","CY","CA","L1","L2"/*, "Count", "Distance"*/ };

	for (int row = 0; row < m_SheetNgList.GetRowCount(); row++)
	{
		for (int col = 0; col < m_SheetNgList.GetColumnCount(); col++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = row;
			sCellInfo.nCol = col;


			COLORREF crBackGround = BLACK;
			COLORREF crFont = WHITE;

			if (row < 1)
			{
				str.Format(_T("%s"), A2T(lpszTitle[col]));
				crBackGround = WHITE;
				crFont = BLACK;
			}
// 			else if (col < 1)
// 			{
// 				str.Format(_T("%d"), row/*A2T(lpszMeasure[row])*/);
// 				crBackGround = BLACK;
// 			}


			sCellInfo.strText = str;

			m_SheetNgList.SetItem(&sCellInfo);

			m_SheetNgList.SetItemBkColour(row, col, crBackGround);
			m_SheetNgList.SetItemFgColour(row, col, crFont);
			m_SheetNgList.SetItemFormat(row, col, sCellInfo.dwFormat);
		}

	}

	Invalidate();


	return bReturn;
}

bool CFormViewRegister::InitSheetResult()
{
	USES_CONVERSION;

	bool bReturn = false;

	CRect crSpread;
	ZeroMemory(&crSpread, sizeof(crSpread));
	m_SheetResult.GetClientRect(&crSpread);

	const int nColsStatistics = 4;
	const int nRowsStatistics = 20;
	const int nFixedCols = 1;
	const int nFixedRows = 1;
	const int nCols = 4;//5
	const int nRows = 20;//4
	m_SheetResult.SetFont(&m_font);
	m_SheetResult.GetDefaultCell(FALSE, FALSE)->SetBackClr(BLACK);
	m_SheetResult.SetRowResize(FALSE);
	m_SheetResult.SetColumnResize(FALSE);
	m_SheetResult.EnableSelection(FALSE);
	m_SheetResult.SetFixedColumnSelection(FALSE);
	m_SheetResult.SetFixedRowSelection(FALSE);
	m_SheetResult.SetRowCount(nRowsStatistics);
	m_SheetResult.SetColumnCount(nColsStatistics);
	m_SheetResult.SetFixedColumnCount(1);
	m_SheetResult.SetEditable(FALSE);
	//m_SheetResult.SetFixedRowCount(nRowsStatistics);
	//m_SheetResult.UsingScrollBars(GVL_VERT, false);
	m_SheetResult.UsingScrollBars(GVL_BOTH, false);

//	m_SheetResult.UsingScrollBars()
	CSize czSpread;
	czSpread.cx = crSpread.right;
	czSpread.cy = crSpread.bottom;
	czSpread.cx -= 2;
	czSpread.cy -= 2;

	int nSizeWidth = crSpread.Width() / (nColsStatistics);

	m_SheetResult.SetColumnWidth(0, nSizeWidth - 160);
	m_SheetResult.SetColumnWidth(1, nSizeWidth - 160);
	m_SheetResult.SetColumnWidth(2, nSizeWidth);
	m_SheetResult.SetColumnWidth(3, nSizeWidth);
	//m_SheetResult.SetColumnWidth(4, );

	//for (int i = 0; i < nColsStatistics; i++)
	//	m_SheetResult.SetColumnWidth(i, crSpread.Width() / (nColsStatistics+2));

	for (int i = 0; i < nRowsStatistics; i++)
		m_SheetResult.SetRowHeight(i, (int)(crSpread.Height() / nRowsStatistics) );

	CString strName;
	const char* lpszTitle[nColsStatistics] = { "NAME", "DATA", "REFERENCE","RANGE"/*, "Count", "Distance"*/ };

	for (int row = 0; row < m_SheetResult.GetRowCount(); row++)
	{
		for (int col = 0; col < m_SheetResult.GetColumnCount(); col++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = row;
			sCellInfo.nCol = col;


			COLORREF crBackGround = BLACK;
			COLORREF crFont = WHITE;

			if (row < 1)
			{
				str.Format(_T("%s"), A2T(lpszTitle[col]));
				crBackGround = WHITE;
				crFont = BLACK;
			}
// 			else if (col < 1)
// 			{
// 				str.Format(_T("%d"), row/*A2T(lpszMeasure[row])*/);
// 				crBackGround = BLACK;
// 			}


			sCellInfo.strText = str;

			m_SheetResult.SetItem(&sCellInfo);

			m_SheetResult.SetItemBkColour(row, col, crBackGround);
			m_SheetResult.SetItemFgColour(row, col, crFont);
			m_SheetResult.SetItemFormat(row, col, sCellInfo.dwFormat);
		}

	}

	Invalidate();


	return bReturn;
}


void CFormViewRegister::OnBnClickedBtnRegisterTabMeasure()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pPageMeasure->ShowWindow(SW_SHOW);
	m_pPageMarkROI->ShowWindow(SW_HIDE);
	m_pPageImageStatistic->ShowWindow(SW_HIDE);

	m_btn[EBtn_Tab_Measure].SetFaceColor(GRAY);
	m_btn[EBtn_Tab_Measure].Invalidate();
	m_btn[EBtn_Tab_MarkROI].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_MarkROI].Invalidate();
	m_btn[EBtn_Tab_ImageStatistic].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_ImageStatistic].Invalidate();

}


void CFormViewRegister::OnBnClickedBtnRegisterTabMarkroi()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pPageMeasure->ShowWindow(SW_HIDE);
	m_pPageMarkROI->ShowWindow(SW_SHOW);
	m_pPageImageStatistic->ShowWindow(SW_HIDE);

	m_btn[EBtn_Tab_Measure].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_Measure].Invalidate();
	m_btn[EBtn_Tab_MarkROI].SetFaceColor(GRAY);
	m_btn[EBtn_Tab_MarkROI].Invalidate();
	m_btn[EBtn_Tab_ImageStatistic].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_ImageStatistic].Invalidate();

//	m_pPageMarkROI->UpdateListBoxArray();
}


void CFormViewRegister::OnBnClickedBtnRegisterTabImagestatistic()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pPageMeasure->ShowWindow(SW_HIDE);
	m_pPageMarkROI->ShowWindow(SW_HIDE);
	m_pPageImageStatistic->ShowWindow(SW_SHOW);

	m_btn[EBtn_Tab_Measure].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_Measure].Invalidate();
	m_btn[EBtn_Tab_MarkROI].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Tab_MarkROI].Invalidate();
	m_btn[EBtn_Tab_ImageStatistic].SetFaceColor(GRAY);
	m_btn[EBtn_Tab_ImageStatistic].Invalidate();
}

void CFormViewRegister::OnBnClickedBtnRegisterLive()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	//pHandler->StartLive(GetSelectCamera());

	m_btn[EBtn_Live].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Live].Invalidate();
	m_btn[EBtn_Stop].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Stop].Invalidate();
}


void CFormViewRegister::OnBnClickedBtnRegisterStop()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	//pHandler->StopLive(GetSelectCamera());

	m_btn[EBtn_Live].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Live].Invalidate();
	m_btn[EBtn_Stop].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Stop].Invalidate();
}


void CFormViewRegister::OnBnClickedBtnRegisterFront()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	if (!m_pModelParam)
		return;

	m_btn[EBtn_Front].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Front].Invalidate();
	m_btn[EBtn_Rear].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Rear].Invalidate();


	SetSelectPosition(ECameraNum_Upper);


	GetPageMarkROI()->UpdateListBox();
	SetROIDataToMeasurementDlgListBox();
	GetPageMeasure()->UpdateListBox();
}


void CFormViewRegister::OnBnClickedBtnRegisterRear()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	if (!m_pModelParam)
		return;

	m_btn[EBtn_Front].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Front].Invalidate();
	m_btn[EBtn_Rear].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Rear].Invalidate();

	SetSelectPosition(ECameraNum_Lower);


	GetPageMarkROI()->UpdateListBox();
	SetROIDataToMeasurementDlgListBox();
	GetPageMeasure()->UpdateListBox();
}



void CFormViewRegister::OnBnClickedBtnRegisterLoad()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CFormViewRegister::OnBnClickedBtnRegisterSave()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

/////////////////////////////////////////////////////////
// Page MarkROI 

long CFormViewRegister::SetROIDataAdd(SMeasurementROI sData)
{
	int nReturn = -1;
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return nReturn;

	nReturn = pHandler->SetMesurementROIDataAdd(sData);

	return nReturn;
}

bool CFormViewRegister::GetROIData(int nIndex, SMeasurementROI& sData)
{
	bool bReturn = false;

	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return bReturn;

	if(pHandler->GetMesurementROIData(nIndex, sData))
		bReturn = true;

	return bReturn;
}


void CFormViewRegister::SetROIDataAdjustedSave(int nAdjustNumber, SMeasurementROI sData)
{
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	std::vector<SMeasurementROI> vct;
	pHandler->GetMesurementROIData(vct);

	bool bCheckSame = false;
	for(int i = 0; i < vct.size(); i++)
	{
		if(sData.strSerialNumber == vct[i].strSerialNumber)
		{
			bCheckSame = true;
			break;
		}
	}

	if(!bCheckSame)
		nAdjustNumber = SetROIDataAdd(sData);

	pHandler->SetMesurementROIDataAdjust(nAdjustNumber, sData);

	pHandler->SaveMeasurementROIFormIni();

	pHandler->UpdateMeasurementKindParam();

}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//

long CFormViewRegister::SetMeasuremetKindDataAdd(SMeasurementKind sData)
{

	int nReturn = -1;
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return nReturn;

	nReturn = pHandler->SetMesurementKindDataAdd(sData);

	return nReturn;
}

bool CFormViewRegister::GetMeasuremetKindData(int nIndex, SMeasurementKind & sData)
{
	bool bReturn = false;

	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return bReturn;

	if(pHandler->GetMesurementKindData(nIndex, sData))
		bReturn = true;

	return bReturn;
}

void CFormViewRegister::SetMeasuremetKindDataAdjustedSave(int nAdjustNumber, SMeasurementKind sData)
{
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	std::vector<SMeasurementKind> vct;
	pHandler->GetMesurementKindData(vct);

	bool bNew = false;
	if(nAdjustNumber >= vct.size())
		bNew = true;

// 
// 	bool bCheckSame = false;
// 	for(int i = 0; i < vct.size(); i++)
// 	{
// 		if(sData.strName == vct[i].strName)
// 		{
// 			bCheckSame = true;
// 			break;
// 		}
// 	}

	if(bNew)
		nAdjustNumber = SetMeasuremetKindDataAdd(sData);

	pHandler->SetMesurementKindDataAdjust(nAdjustNumber, sData);

	pHandler->SaveMeasurementKindFormIni();
}


void CFormViewRegister::SetROIDataToMeasurementDlgListBox()
{
	ECameraNum eCam = GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	std::vector<SMeasurementROI> vct;
	pHandler->GetMesurementROIData(vct);

	m_pPageMeasure->SettingROIList(vct);
}


