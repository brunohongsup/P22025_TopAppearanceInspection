#include "stdafx.h"
#include "FormViewMain.h"
#include "EventHandlerCamera.h"


// FormViewMain.cpp

IMPLEMENT_DYNCREATE(CFormViewMain, CRavidFormViewBase)

CFormViewMain::CFormViewMain() : CRavidFormViewBase(IDD_FORM_MAIN)
{
// 	ZeroMemory(m_bSignal, sizeof(m_bSignal));
// 
// 	m_FontTitle.CreateFont(
// 		24,						// 글자높이
// 		10,						// 글자너비
// 		0,						// 출력각도
// 		0,						// 기준 선에서의각도
// 		FW_EXTRABOLD/*FW_HEAVY*/,				// 글자굵기
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


CFormViewMain::~CFormViewMain()
{
	ReleaseCustomDialog();
	ReleasePageDataSheet();
}

#ifdef _DEBUG
void CFormViewMain::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewMain::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG

void CFormViewMain::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);
	int nIndex = 0;

	// Tab Ctrl
	DDX_Control(pDX, IDC_TAB_MAIN_MONITORING, m_tccPage);

	// Sheet
	DDX_Control(pDX, IDC_CUSTOM_MAIN_LIVE_DATA, m_Sheet[ESheetType_Measurement]);
	DDX_Control(pDX, IDC_CUSTOM_MAIN_MONITOR, m_Sheet[ESheetType_MachineMonitoring]);

	// Label
	DDX_Control(pDX, IDC_STATIC_MAIN1, m_Label[ELabel_Title_MachineMonitoring]);
	DDX_Control(pDX, IDC_STATIC_MAIN2, m_Label[ELabel_Title_Measurement]);
	DDX_Control(pDX, IDC_STATIC_MAIN3, m_Label[ELabel_Title_Total]);
}

void CFormViewMain::OnInitialUpdate()
{
	CRavidFormViewBase::OnInitialUpdate();

	// Initialize

	InitializeLabel();
	InitializeTabCtrl();

	InitializeSheetMeasurement();
	InitializeSheetMachineMonitor();

	CreateCustomDialog();


	// UI Timer
	SetTimer(0, 1000, nullptr);
	SetTimer(1, 100, nullptr);


}

void CFormViewMain::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
}

void CFormViewMain::OnPaint()
{
	CPaintDC pDC(this);
}

HBRUSH CFormViewMain::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);
	return hbr;
}

void CFormViewMain::OnTimer(UINT_PTR nIDEvent)
{

	switch(nIDEvent)
	{
	case 0: // 1000ms
		{
			// Update
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

void CFormViewMain::OnDestroy()
{
	CRavidFormViewBase::OnDestroy();

	KillTimer(0);
	KillTimer(1);

	//ghjang RAVID TEST
	//CLogManager::Write(0, _T("OnDestroy!!!"));
}

void CFormViewMain::InitializeLabel()
{
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

	m_FontTitle.CreateFontIndirect(&m_lf);//정의된 font로 설정 


	for(int i = 0; i < ELabel_Count; i++)
	{
		m_Label[i].SetTextColor(WHITE);
 		m_Label[i].SetBkColor(CUSTOM_DARK);
		//m_Label[i].SetFontSize(15);
		m_Label[i].SetFont(&m_FontTitle);
	}

}

void CFormViewMain::InitializeTabCtrl()
{

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));
	m_lf.lfHeight = 17;
	m_lf.lfWidth = 7;
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

	m_FontTab.CreateFontIndirect(&m_lf);//정의된 font로 설정 
	m_tccPage.SetFont(&m_FontTab);
		
	int nIdx = 0;
	m_tccPage.InsertItem(nIdx++, _T("Upper"));
	m_tccPage.InsertItem(nIdx++, _T("Lower"));

	m_tccPage.InsertItem(nIdx++, _T("Upper NG"));
	m_tccPage.InsertItem(nIdx++, _T("Lower NG"));


	CreatePageDataSheet();
}

void CFormViewMain::InitializeSheetMeasurement()
{
	const int nRowsStatistics = 50;
	const int nColsStatistics = 6;

	CRect rcSize;
	m_Sheet[ESheetType_Measurement].GetWindowRect(rcSize);
	int nColSize = rcSize.Width() / nColsStatistics;

	m_Sheet[ESheetType_Measurement].SetRowCount(nRowsStatistics);
	m_Sheet[ESheetType_Measurement].SetColumnCount(nColsStatistics);

	m_Sheet[ESheetType_Measurement].SetBkColor(CUSTOM_DARK);

	// Sheet Sizing
	// Column
	m_Sheet[ESheetType_Measurement].SetColumnWidth(0, 100);
	m_Sheet[ESheetType_Measurement].SetColumnWidth(4, 100);
// 	m_Sheet[ESheetType_Measurement].ExpandColumnsToFit();
// 	m_Sheet[ESheetType_Measurement].ExpandRowsToFit();
	m_Sheet[ESheetType_Measurement].SetRowResize(FALSE);
	m_Sheet[ESheetType_Measurement].SetColumnResize(FALSE);
	m_Sheet[ESheetType_Measurement].SetEditable(FALSE);

	int nCol = 0, nRow = 0;
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("NAME"));
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("OUT"));
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("DRAW"));
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("DATA"));
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("REFERECE"));
	m_Sheet[ESheetType_Measurement].SetItemText(0, nCol++, _T("RANGE"));


	m_Sheet[ESheetType_Measurement].SetTextColor(CUSTOM_DARK);

	for(int nRow = 0; nRow < m_Sheet[ESheetType_Measurement].GetRowCount(); nRow++)
	{
		for(int nCol = 0; nCol < m_Sheet[ESheetType_Measurement].GetColumnCount(); nCol++)
		{
			if(nRow == 0)
				m_Sheet[ESheetType_Measurement].SetItemBkColour(nRow, nCol, RGB(250, 250, 250));
			else
			{
				m_Sheet[ESheetType_Measurement].SetItemBkColour(nRow, nCol, CUSTOM_DARK);
				m_Sheet[ESheetType_Measurement].SetItemFgColour(nRow, nCol, RGB(250, 250, 250));
			}
		}
	}

	m_Sheet[ESheetType_Measurement].SetGridLineColor(RGB(60, 60, 60));
	m_Sheet[ESheetType_Measurement].Invalidate();


}

void CFormViewMain::InitializeSheetMachineMonitor()
{
	USES_CONVERSION;

	const int nRowsStatistics = 4;
	const int nColsStatistics = 4;

	CRect rcSize;
	m_Sheet[ESheetType_MachineMonitoring].GetWindowRect(rcSize);
	int nColSize = rcSize.Width() / nColsStatistics;

	m_Sheet[ESheetType_MachineMonitoring].SetRowCount(nRowsStatistics);
	m_Sheet[ESheetType_MachineMonitoring].SetColumnCount(nColsStatistics);

	m_Sheet[ESheetType_MachineMonitoring].SetBkColor(CUSTOM_DARK);

	// Sheet Sizing
	// Column
	m_Sheet[ESheetType_MachineMonitoring].SetColumnWidth(0, 100);
	m_Sheet[ESheetType_MachineMonitoring].SetColumnWidth(4, 100);
	m_Sheet[ESheetType_MachineMonitoring].ExpandColumnsToFit();
	m_Sheet[ESheetType_MachineMonitoring].ExpandRowsToFit();

	m_Sheet[ESheetType_MachineMonitoring].EnableSelection(FALSE);
	m_Sheet[ESheetType_MachineMonitoring].SetRowResize(FALSE);
	m_Sheet[ESheetType_MachineMonitoring].SetColumnResize(FALSE);
	m_Sheet[ESheetType_MachineMonitoring].SetEditable(FALSE);
	m_Sheet[ESheetType_MachineMonitoring].SetFixedColumnSelection(FALSE);

// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(0, 0, _T("Model"));
// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(0, 2, _T("Lot ID"));
// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(1, 0, _T("Total"));
// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(1, 2, _T("Yield"));
// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(2, 0, _T("OK"));
// 	m_Sheet[ESheetType_MachineMonitoring].SetItemText(2, 2, _T("NG"));

	const char* lpszTitle[nRowsStatistics][nColsStatistics] = 
	{
		{"Model","Model name","Lot ID","default"},
		{"Total","0","Yield","0"},
		{"OK","0","NG","0"},
		{"Defect","0","Measurement","0"},
	};

	COLORREF crFonts[nRowsStatistics][nColsStatistics] = 
	{
		{BLACK,BLACK,BLACK,BLACK},
		{BLACK,BLACK,BLACK,BLACK},
		{LIME, LIME, LIGHTRED, LIGHTRED},
		{MEDIUMVIOLETRED, MEDIUMVIOLETRED, PALEVIOLETRED, PALEVIOLETRED},
	};

	m_Sheet[ESheetType_MachineMonitoring].SetTextColor(CUSTOM_DARK);


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

	for(int nRow = 0; nRow < m_Sheet[ESheetType_MachineMonitoring].GetRowCount(); nRow++)
	{
		for(int nCol = 0; nCol < m_Sheet[ESheetType_MachineMonitoring].GetColumnCount(); nCol++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = nRow;
			sCellInfo.nCol = nCol;


			str.Format(_T("%s"), A2T(lpszTitle[nRow][nCol]));
			sCellInfo.strText = str;

			COLORREF crBackGround = WHITE;
			COLORREF crFont = crFonts[nRow][nCol];

			m_Sheet[ESheetType_MachineMonitoring].SetItem(&sCellInfo);
			m_Sheet[ESheetType_MachineMonitoring].SetItemBkColour(nRow, nCol, crBackGround);

			m_Sheet[ESheetType_MachineMonitoring].SetItemFgColour(nRow, nCol, crFont);
			m_Sheet[ESheetType_MachineMonitoring].SetItemFormat(nRow, nCol, sCellInfo.dwFormat);

			m_Sheet[ESheetType_MachineMonitoring].SetItemFont(nRow, nCol, &m_lf);
		
		}
	}

	m_Sheet[ESheetType_MachineMonitoring].SetGridLineColor(RGB(60, 60, 60));
	m_Sheet[ESheetType_MachineMonitoring].Invalidate();


}

void CFormViewMain::SettingMeasurementSheet(bool bAllReset)
{
	do 
	{
		// upper Only -- just Temp...
		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));
		if(!pHandler)
			return;

		std::vector<SMeasurementKind> vct;
		pHandler->GetMesurementKindData(vct);


		int nRow = 1;
		for(SMeasurementKind sData : vct)
		{
			m_mapStringToIndex[sData.strName] = nRow;

			if(bAllReset)
			{
				m_Sheet[ESheetType_Measurement].SetItemText(nRow, 0, sData.strName);
				m_Sheet[ESheetType_Measurement].SetItemText(nRow, 1, _T("0"));
				m_Sheet[ESheetType_Measurement].SetItemText(nRow, 2, _T("0"));
				m_Sheet[ESheetType_Measurement].SetItemText(nRow, 3, _T("0.000"));
			}

			CString str;
			double dblRef = sData.dblReference;
			str.Format(_T("%.3f"), dblRef);
			m_Sheet[ESheetType_Measurement].SetItemText(nRow, 4, str);

			double dblRange1 = dblRef - sData.dblLSL;
			double dblRange2 = dblRef + sData.dblUSL;

			str.Format(_T("%.3f / %.3f"), dblRange1, dblRange2);
			m_Sheet[ESheetType_Measurement].SetItemText(nRow, 5, str);

			nRow++;
		}

		m_Sheet[ESheetType_Measurement].Invalidate();

		if(!bAllReset)
			break;

		for(int i = 0; i < ETabPage_Count; i++)
		{
			if(!m_pPageDataSheet[i])
				break;

			m_pPageDataSheet[i]->InitializeDataSheet(vct);
		}

	} while (false);

}

void CFormViewMain::SettingMeasurementSheet(std::vector<SMeasuredData> vct)
{
	for(SMeasuredData sData : vct)
	{
		CString str;
		str.Format(_T("%.3f"), sData.dblData);
		long nIndex = m_mapStringToIndex[sData.strName];

		COLORREF BkColor = BASE_COLOR;
		COLORREF FGColor = WHITE;


		if(!sData.bResult)
		{
			BkColor = RGB(248, 204, 215);
			FGColor = BASE_COLOR;
		}

		m_Sheet[ESheetType_Measurement].SetItemBkColour(nIndex, 3, BkColor);
		m_Sheet[ESheetType_Measurement].SetItemFgColour(nIndex, 3, FGColor);

		m_Sheet[ESheetType_Measurement].SetItemText(nIndex, 3, str);

		m_Sheet[ESheetType_Measurement].Invalidate();
	}
}

void CFormViewMain::SettingMachineMonitorSheet(sFormMachineMonitoring sData, bool bReset)
{

	do
	{
		CString str;
		m_nTotalCount++;

		if(sData.bResult)
			m_nOKCount++;
		else
		{
			if(sData.bNGTypeMeasurement)
				m_nMeasurementNG++;
			else
				m_nDefectNG++;

		}

		long nNG = m_nTotalCount - m_nOKCount;
		double dblYield = double((double)m_nOKCount / (double)m_nTotalCount) * 100.f;

		if(bReset)
		{
			m_nTotalCount = 0;
			m_nOKCount = 0;
			nNG = 0;
			dblYield = 0.f;
			m_nMeasurementNG = 0;
			m_nDefectNG = 0;
		}

		m_Sheet[ESheetType_MachineMonitoring].SetItemText(0, 1, sData.strModel);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(0, 3, sData.strLotID);


		str.Format(_T("%d"), m_nTotalCount);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(1, 1, str);
		str.Format(_T("%.3f"), dblYield);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(1, 3, str);
		str.Format(_T("%d"), m_nOKCount);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(2, 1, str);
		str.Format(_T("%d"), nNG);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(2, 3, str);

		str.Format(_T("%d"), m_nMeasurementNG);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(3, 3, str);
		str.Format(_T("%d"), m_nDefectNG);
		m_Sheet[ESheetType_MachineMonitoring].SetItemText(3, 1, str);


		m_Sheet[ESheetType_MachineMonitoring].Invalidate();

	}
	while(false);

}

void CFormViewMain::SettingTotalSheet(ETabPage ePage, const SCellTrackerData& sCellTrackingData,const std::vector<SMeasuredData>& vct, CTime tm, bool bDfectNG)
{
	do 
	{
		bool bIsMonoImg = false;
		if(ePage == ETabPage_Lower || ePage == ETabPage_LowerNG)
		{
			bIsMonoImg = true;
		}
		m_pPageDataSheet[ePage]->SettingTotalSheet(sCellTrackingData, vct, tm, bDfectNG, bIsMonoImg);

		if(ePage != ETabPage_Upper)
			break;

		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));
		if(!pHandler)
			return;

		std::vector<SMeasurementKind> vctKind;
		pHandler->GetMesurementKindData(vctKind);


		CFormViewBotMenu* pBottomView = dynamic_cast<CFormViewBotMenu*>(CUIManager::FindView(typeid(CFormViewBotMenu)));
		if(!pBottomView)
			return;


		pBottomView->SetHistoryChart(vct, vctKind);



	} while (false);
}

void CFormViewMain::CreateCustomDialog()
{
	// History Dialog
	m_pDlgHistory = new CDlgViewHistory(this);
	m_pDlgHistory->Create(this);
	m_pDlgHistory->ShowWindow(SW_HIDE);

	// History Dialog
	m_pDlgDefectmap = new CDlgViewDefectMap(this);
	m_pDlgDefectmap->Create(this);
	m_pDlgDefectmap->ShowWindow(SW_HIDE);


}

void CFormViewMain::CreatePageDataSheet()
{
	CRect crCurrentDlgAction;

	for(int i = 0; i < ETabPage_Count; i++)
	{
		if(!m_pPageDataSheet[i])
		{
			m_pPageDataSheet[i] = new CMainPageTotalSheetData(this);
			m_pPageDataSheet[i]->Create(&m_tccPage);
		}
		//if(m_pPageDataSheet->GetSafeHwnd() == NULL)
		//	m_pPageDataSheet->Create( &m_tcPageTab);

		m_pPageDataSheet[i]->GetClientRect(crCurrentDlgAction);
		m_pPageDataSheet[i]->MoveWindow(0, 25, crCurrentDlgAction.Width(), crCurrentDlgAction.Height());
		m_pPageDataSheet[i]->SetObjectID(i);

		if(i == ETabPage_Upper)
			m_pPageDataSheet[i]->ShowWindow(SW_SHOW);
		else
			m_pPageDataSheet[i]->ShowWindow(SW_HIDE);
	}
}

void CFormViewMain::ReleaseCustomDialog()
{
	// History Dialog
	if(m_pDlgHistory)
	{
		m_pDlgHistory->DestroyWindow();
		delete m_pDlgHistory;
		m_pDlgHistory = nullptr;
	}

	if(m_pDlgDefectmap)
	{
		m_pDlgDefectmap->DestroyWindow();
		delete m_pDlgDefectmap;
		m_pDlgDefectmap = nullptr;
	}
}

void CFormViewMain::ReleasePageDataSheet()
{
	for(int i = 0; i < ETabPage_Count; i++)
	{
		if(m_pPageDataSheet[i])
		{
			delete m_pPageDataSheet[i];
			m_pPageDataSheet[i] = nullptr;
		}
	}
}

BEGIN_MESSAGE_MAP(CFormViewMain, CRavidFormViewBase)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()

	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB_MAIN_MONITORING, &CFormViewMain::OnTcnSelchangeTabMainMonitoring)
	ON_WM_ERASEBKGND()
	ON_BN_CLICKED(IDC_BUTTON_MAIN1, &CFormViewMain::OnBnClickedButtonMain1)
	ON_BN_CLICKED(IDC_BUTTON_MAIN2, &CFormViewMain::OnBnClickedButtonMain2)
	ON_BN_CLICKED(IDC_BUTTON_CELL_TRACKER_IP_CONFIG, &CFormViewMain::OnBnClickedButtonCellTrackerIpConfig)
END_MESSAGE_MAP()



void CFormViewMain::OnTcnSelchangeTabMainMonitoring(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;

	int nSell = m_tccPage.GetCurSel();


	for(int i = 0; i < ETabPage_Count; i++)
	{
		if(i == nSell)
			m_pPageDataSheet[i]->ShowWindow(SW_SHOW);
		else
			m_pPageDataSheet[i]->ShowWindow(SW_HIDE);

	}

}


BOOL CFormViewMain::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	return CRavidFormViewBase::OnEraseBkgnd(pDC);
}


void CFormViewMain::OnBnClickedButtonMain1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	SettingMeasurementSheet();
	sFormMachineMonitoring sData;
	SettingMachineMonitorSheet(sData, true);

	// Test
// 	for(int i = 0; i < 2; i++)
// 	{
// 		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(i));
// 
// 		if(!pHandler)
// 			return;
// 
// 		pHandler->SetGrabCount(0);
// 		pHandler->ResetCameraImageBuffer();
// 		pHandler->GrabStop();
// 	}
}


void CFormViewMain::OnBnClickedButtonMain2()
{
	// Defect map dlg open


//	int n = 3 & 2
// 	eColorImageCalType e;
// 
// 	e = eColorImageCalType_R;
// 
// 	
// 
// 	for(int i = 0; i < 3; i++)
// 	{
// 		int dd = 1;
// 
// 		int aa = dd << i;
// 
// 		bool b = e << (i + 1);
// 
// 
// 		int iii = 90;
// 	}

// 	return;

	for(int i = 0; i < ECameraNum_Count; i++)
	{
		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(i));
		if(!pHandler)
			return;

		CDlgViewDefectMap::EImgView e = (CDlgViewDefectMap::EImgView)i;

		m_pDlgDefectmap->SetImageBuffer(e, pHandler->GetDefectMapImageInfo());
	}

	m_pDlgDefectmap->ShowWindow(SW_SHOW);
}


void CFormViewMain::OnBnClickedButtonCellTrackerIpConfig()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
	{
		return;
	}
	pHandler->ShowCellTrackerIPConfigShow();
}
