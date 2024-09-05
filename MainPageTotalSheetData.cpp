// DialogPageAlignData.cpp: 구현 파일
#include "stdafx.h"
#include "MainPageTotalSheetData.h"


IMPLEMENT_DYNAMIC(CMainPageTotalSheetData, CRavidDialogBase)

CMainPageTotalSheetData::CMainPageTotalSheetData(CWnd* pParent /*=nullptr*/)
	: CRavidDialogBase(IDD_FORM_MAIN_PAGE_DATASHEET, pParent)
{
	m_Font.CreateFont(
		20,						// 글자높이
		8,						// 글자너비
		0,						// 출력각도
		0,						// 기준 선에서의각도
		FW_HEAVY,				// 글자굵기
		FALSE,					// Italic 적용여부
		FALSE,                  // 밑줄적용여부
		FALSE,					// 취소선적용여부
		DEFAULT_CHARSET,		// 문자셋종류
		OUT_DEFAULT_PRECIS,		// 출력정밀도
		CLIP_DEFAULT_PRECIS,	// 클리핑정밀도
		DEFAULT_QUALITY,		// 출력문자품질
		DEFAULT_PITCH,			// 글꼴Pitch
		_T("맑은 고딕")			// 글꼴
	);


	m_pDlgViewHistory = nullptr;
}

CMainPageTotalSheetData::~CMainPageTotalSheetData()
{
	if(m_pDlgViewHistory)
	{
		delete[] m_pDlgViewHistory;
	}
}

void CMainPageTotalSheetData::DoDataExchange(CDataExchange* pDX)
{
	CRavidDialogBase::DoDataExchange(pDX);

	int nIndex = 0;
	DDX_Control(pDX, IDC_RAVIDSHEET_DATA_PAGE_ALIGN_OFFSET, m_Sheet);
}

BOOL CMainPageTotalSheetData::Create(CWnd * pParent)
{
	return __super::Create(IDD_FORM_MAIN_PAGE_DATASHEET, pParent);
}

BEGIN_MESSAGE_MAP(CMainPageTotalSheetData, CRavidDialogBase)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_WM_GETMINMAXINFO()
	ON_WM_SYSCOMMAND()

	ON_NOTIFY(NM_DBLCLK, IDC_RAVIDSHEET_DATA_PAGE_ALIGN_OFFSET, OnSheetDblClick)
	ON_NOTIFY(NM_CLICK, IDC_RAVIDSHEET_DATA_PAGE_ALIGN_OFFSET, OnSheetClick)	

END_MESSAGE_MAP()


// CDialogGrabMask 메시지 처리기

BOOL CMainPageTotalSheetData::OnInitDialog()
{
	CRavidDialogBase::OnInitDialog();
	GetWindowRect(&m_crWindowSize);


	long nID = GetObjectID();
	if(!m_pDlgViewHistory)
	{
		m_pDlgViewHistory = new CDlgViewHistory(this);

		if(!m_pDlgViewHistory)
			return FALSE;

		if(m_pDlgViewHistory->GetSafeHwnd() == NULL)
			m_pDlgViewHistory->Create(this);

		m_pDlgViewHistory->ShowWindow(SW_HIDE);
	}

	//InitializeDataSheet();
	return 0;
}

BOOL CMainPageTotalSheetData::PreTranslateMessage(MSG * pMsg)
{
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_RETURN)
			return TRUE;
		else if(pMsg->wParam == VK_ESCAPE)
			return TRUE;
	}

	return CRavidDialogBase::PreTranslateMessage(pMsg);
}

void CMainPageTotalSheetData::OnSize(UINT nType, int cx, int cy)
{
	CRavidDialogBase::OnSize(nType, 0, 0);
}

void CMainPageTotalSheetData::OnPaint()
{
	CPaintDC pDC(this);
}

HBRUSH CMainPageTotalSheetData::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CRavidDialogBase::OnCtlColor(pDC, pWnd, nCtlColor);

	UINT nID = pWnd->GetDlgCtrlID();
// 	switch(nID)
// 	{
// // 	case IDC_STATIC_SYSTEM_PLC_STATE:
// // 		{
// // 			pDC->SetBkColor(m_bSheetThreadFlag ? BLUE : BLUE);
// // 			hbr = ::CreateSolidBrush(m_bSheetThreadFlag ? BLUE : BLUE);
// // 		}
// // 		break;
// // 	default:
// // 		break;
// 	}
	return hbr;
}

void CMainPageTotalSheetData::OnTimer(UINT_PTR nIDEvent)
{
	CRavidDialogBase::OnTimer(nIDEvent);
}

void CMainPageTotalSheetData::OnDestroy()
{
	CRavidDialogBase::OnDestroy();
}

void CMainPageTotalSheetData::OnGetMinMaxInfo(MINMAXINFO * pMMI)
{
	pMMI->ptMinTrackSize = CPoint(m_crWindowSize.Width(), m_crWindowSize.Height());
	pMMI->ptMaxTrackSize = CPoint(m_crWindowSize.Width(), m_crWindowSize.Height());

	CRavidDialogBase::OnGetMinMaxInfo(pMMI);
}

void CMainPageTotalSheetData::OnSysCommand(UINT nID, LPARAM lParam)
{
	CRavidDialogBase::OnSysCommand(nID, lParam);
}


void CMainPageTotalSheetData::OnSheetDblClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	long nID = GetObjectID();
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Double Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	if(pItem->iRow <= 0)
	{
		return;
	}

	CString strDate;
	CString strLotID;
	CString strCellID;

	strDate = m_Sheet.GetItemText(pItem->iRow, m_mapStringToIndex.size() + 3);
	strMsg.Format(_T("Double Clicked on %s"), strDate);
	CLogManager::Write(eLogTypeUser, strMsg);


	strLotID = m_Sheet.GetItemText(pItem->iRow, 1);
	strMsg.Format(_T("Double Clicked on %s"), strLotID);
	CLogManager::Write(eLogTypeUser, strMsg);


	strCellID = m_Sheet.GetItemText(pItem->iRow, 2);
	strMsg.Format(_T("Double Clicked on %s"), strCellID);
	CLogManager::Write(eLogTypeUser, strMsg);

	m_pDlgViewHistory->SettingFolderDate(strDate);
	m_pDlgViewHistory->SettingLotID(strLotID);
	m_pDlgViewHistory->SettingCellID(strCellID);

	m_pDlgViewHistory->LoadFolderImage();

	for(int i = 0; i < ECameraNum_Count; i++)
	{
		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView((long)i));
		if(!pImageView)
			return;

		m_pDlgViewHistory->SetViewAcc(i, pImageView->GetAccuracyX(), pImageView->GetAccuracyY());
	}


	m_pDlgViewHistory->ShowWindow(SW_SHOW);

}

void CMainPageTotalSheetData::OnSheetClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}


void CMainPageTotalSheetData::InitializeDataSheet(std::vector<SMeasurementKind> vct)
{

	const int nRowsStatistics = 100;
	const int nColsStatistics = 60;

	m_Sheet.SetRowCount(nRowsStatistics);
	m_Sheet.SetColumnCount(nColsStatistics);
	m_Sheet.SetFixedRowCount();

	m_Sheet.SetRowResize(FALSE);
	m_Sheet.SetColumnResize(FALSE);
	m_Sheet.SetEditable(FALSE);

// 	m_Sheet.SetFixedRowCount(1);
// 	m_Sheet.SetFixedColumnCount(1);
	//m_sheetCameraPosition.UsingScrollBars(GVL_VERT, true);

	int nCount = 0;
	m_Sheet.SetItemText(0, nCount++, _T("No."));
	m_Sheet.SetItemText(0, nCount++, _T("Lot ID"));
	m_Sheet.SetItemText(0, nCount++, _T("Cell ID"));

	for(const SMeasurementKind& sData : vct)
	{
		m_mapStringToIndex[sData.strName] = nCount;
		m_Sheet.SetItemText(0, nCount++, sData.strName);
	}
// 	m_Sheet.SetItemText(0, nCount++, _T("AC1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC3"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC4"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC_A1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC_A2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CS_A1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CS_A2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC_C1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AC_C2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CS_C1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CS_C2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AA_1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("AA_2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CC_1"));
// 	m_Sheet.SetItemText(0, nCount++, _T("CC_2"));
// 	m_Sheet.SetItemText(0, nCount++, _T("C_ANGLE_L"));
// 	m_Sheet.SetItemText(0, nCount++, _T("C_ANGLE_R"));

	m_Sheet.SetGridLineColor(RGB(60, 60, 60));

	// Column Size
	for(int nCol = 0; nCol < m_Sheet.GetColumnCount(); nCol++)
		m_Sheet.SetColumnWidth(nCol, 80);

	m_Sheet.SetColumnWidth(0, 50);

	for(int nRow = 0; nRow < m_Sheet.GetRowCount(); nRow++)
		m_Sheet.SetRowHeight(nRow, 20);

	for(int nRow = 1; nRow < m_Sheet.GetRowCount(); nRow++)
	{
		for(int nCol = 0; nCol < m_Sheet.GetColumnCount(); nCol++)
		{
			m_Sheet.SetItemBkColour(0, nCol, RGB(250, 250, 250));
			m_Sheet.SetItemBkColour(nRow, nCol, CUSTOM_DARK);
			m_Sheet.SetItemText(nRow, nCol, _T(""));
		}
	}

	m_nSheetCount = 0;
	m_Sheet.Invalidate();
}

bool CMainPageTotalSheetData::SettingTotalSheet(const SCellTrackerData& sCellTrackingData, const std::vector<SMeasuredData>& vct, CTime tm, bool bDefect, bool bIsMonoImg)
{
	bool bReturn = false;

	int nID = GetObjectID();

	if(vct.empty())
		return bReturn;

	m_nSheetCount++;

	do
	{
		const int nSize = 100;

		for(int i = nSize - 1; i > 0; i--)
		{
			for(int j = 0; j < m_Sheet.GetColumnCount(); j++)
			{
				CString str;
				str = m_Sheet.GetItemText(i, j);
				COLORREF BkColor = m_Sheet.GetItemBkColour(i, j);

				m_Sheet.SetItemText(i + 1, j, str);
				m_Sheet.SetItemBkColour(i + 1, j, BkColor);
			}
		}
		CString str;

		bool bResult = true;
		int nColCount = 3;

		str.Format(_T("%s"), sCellTrackingData.strLotID);
		m_Sheet.SetItemText(1, 1, str);
		m_Sheet.SetItemBkColour(1, 1, WHITE);
		m_Sheet.SetItemFgColour(1, 1, BLACK);
		str.Format(_T("%s"), sCellTrackingData.strCellID[0]);
		m_Sheet.SetItemText(1, 2, str);
		m_Sheet.SetItemBkColour(1, 2, WHITE);
		m_Sheet.SetItemFgColour(1, 2,  BLACK);


		for(const SMeasuredData& sData : vct)
		{
			str.Format(_T("%.3f"), sData.dblData);
			long nIndex = m_mapStringToIndex[sData.strName];

			COLORREF BkColor = WHITE;

			if(!sData.bResult)
			{
				BkColor = RGB(248, 204, 215);
				bResult &= false;
			}

			m_Sheet.SetItemBkColour(1, nIndex, BkColor);
			m_Sheet.SetItemText(1, nIndex, str);
			nColCount++;
		}

		str.Format(_T("%d"), m_nSheetCount);
		m_Sheet.SetItemText(1, 0, str);
		if(bDefect)
			m_Sheet.SetItemBkColour(1, 0, YELLOW);
		else
			m_Sheet.SetItemBkColour(1, 0, WHITE);


		//Date and time
		str.Format(_T("%04d_%02d_%02d_%02d_%02d_%02d"), tm.GetYear(), tm.GetMonth(), tm.GetDay(), tm.GetHour(), tm.GetMinute(), tm.GetSecond());
		if(bIsMonoImg)
		{
			nColCount += 2;
		}
		m_Sheet.SetItemText(1, nColCount, str);
		m_Sheet.SetItemBkColour(1, nColCount, CUSTOM_DARK);
		m_Sheet.SetItemFgColour(1, nColCount, BLACK);

// 		// Result
// 		m_Sheet.SetItemText(1, nColCount, str);
// 		m_Sheet.SetItemBkColour(1, nColCount, CUSTOM_DARK);
// 		m_Sheet.SetItemFgColour(1, nColCount, BLACK);

		m_Sheet.Invalidate();
	}
	while(false);

	return bReturn;
}

