#include "stdafx.h"
#include "FormViewComm.h"

// FormViewComm.cpp

IMPLEMENT_DYNCREATE(CFormViewComm, CRavidFormViewBase)

CFormViewComm::CFormViewComm() : CRavidFormViewBase(IDD_FORM_COMM)
{
	ZeroMemory(m_bSignal, sizeof(m_bSignal));

	m_FontBasic.CreateFont(
		14,						// 글자높이
		7,						// 글자너비
		0,						// 출력각도
		0,						// 기준 선에서의각도
		FW_BOLD/*FW_HEAVY*/,				// 글자굵기
		FALSE,					// Italic 적용여부
		FALSE,                  // 밑줄적용여부
		FALSE,					// 취소선적용여부
		DEFAULT_CHARSET,		// 문자셋종류
		OUT_DEFAULT_PRECIS,		// 출력정밀도
		CLIP_DEFAULT_PRECIS,	// 클리핑정밀도
		DEFAULT_QUALITY,		// 출력문자품질
		DEFAULT_PITCH,			// 글꼴Pitch
		_T("HY견고딕 보통")		// 글꼴

	);

	// Melsec Auto Read Setting
	m_eMelsecType = EMelsecDataType_B;
	m_cSelectedArea = 'B';
	m_nSelectedAddr = 0;
}

CFormViewComm::~CFormViewComm()
{
}

#ifdef _DEBUG
void CFormViewComm::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewComm::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG

void CFormViewComm::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);

	int nIndex = 0;

	DDX_Control(pDX, IDC_EDIT_COMM_MELSEC_ADDR, m_Edit[nIndex++]);
	DDX_Control(pDX, IDC_EDIT_COMM_MELSEC_VALUE, m_Edit[nIndex++]);

	// Button
	nIndex = 0;
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_TYPE_B, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_TYPE_W, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_READ, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_WRITE, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_WORD, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_STRING, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_BLOCK_L_SHIFT, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_L_SHIFT, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_R_SHIFT, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_COMM_MELSEC_BLOCK_R_SHIFT, m_Button[nIndex++]);

	// Label
	nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_COMM_PLC, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_DINPUT, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_DOUTPUT, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_MELSEC_TYPE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_MELSEC_ADDR, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_MELSEC_VALUE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_COMM_MELSEC_ALIVE, m_Label[nIndex++]);

	// List
// 	nIndex = 0;
// 	DDX_Control(pDX, IDC_LIST_TEMP1, m_List[nIndex++]);
// 	DDX_Control(pDX, IDC_LIST_TEMP2, m_List[nIndex++]);

	// Ravid Sheet
	DDX_Control(pDX, IDC_RAVIDSHEET_COMM_MELSEC, m_Sheet[ESheet_PLC]);
	DDX_Control(pDX, IDC_RAVIDSHEET_COMM_DINPUT, m_Sheet[ESheet_DI]);
	DDX_Control(pDX, IDC_RAVIDSHEET_COMM_DOUTPUT, m_Sheet[ESheet_DO]);
}

void CFormViewComm::OnInitialUpdate()
{
	CRavidFormViewBase::OnInitialUpdate();

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

	m_font.CreateFontIndirect(&m_lf);//정의된 font로 설정 

	// Initialize
	InitLabel();
	InitButton();
// 	InitializeButtonLanguage();
// 	InitializeListCtrl();

	InitSheet();

	// UI Timer
	SetTimer(0, 1000, nullptr);
	SetTimer(1, 100, nullptr);
// 	SetTimer(200, 1000, nullptr);

}

void CFormViewComm::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
}

void CFormViewComm::OnPaint()
{
	CPaintDC pDC(this);

// 	CRavidFormViewBase::OnPaint();
}

HBRUSH CFormViewComm::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);
	return hbr;
}

void CFormViewComm::OnTimer(UINT_PTR nIDEvent)
{

	switch(nIDEvent)
	{
	case 0: // 1000ms
		{
			// Update
			if(IsWindowVisible())
			{
				AliveCheck();
			}
		}
		break;
	case 1: // 200ms
		{
			// Update
			if(IsWindowVisible())
			{
// 				AliveCheck();
				ResetMelsecDataSheet();

				// 셋팅 된 I/O 업데이트
				UpdateDISheet();
				UpdateDOSheet();

// 				ResetMelsecDataSheet();
			}
		}
		break;
	default:
		break;
	}
	CRavidFormViewBase::OnTimer(nIDEvent);
}

void CFormViewComm::OnDestroy()
{
	CRavidFormViewBase::OnDestroy();

	SaveIOAddressSheet();

	KillTimer(0);
	KillTimer(1);
}

// 16진수 형태의 값을 10진수로 변환
// ex) 1000(16) -> 4096(10)
int CFormViewComm::TransformHexToDec(int nHexTypeNumber)
{
	// 10진수 형태의 값을 16진수로 바꾸기 (변환 아님)
	int nAddr = 0;
	int nPow = 1;

	for(int i = 0; i < 5; i++)
	{
		nAddr += (nHexTypeNumber % 10) * nPow;

		nHexTypeNumber /= 10;
		nPow *= 16;
	}

	return nAddr;
}

void CFormViewComm::InitLabel()
{
	do
	{
		for(int i = 0; i < ELabel_Count; i++)
		{
			switch(i)
			{
			case CFormViewComm::ELabel_TitlePLC:
			case CFormViewComm::ELabel_TitleIn:
			case CFormViewComm::ELabel_TitleOut:
				{
					m_Label[i].SetTextColor(WHITE);
					m_Label[i].SetBkColor(BASE_COLOR);
					m_Label[i].SetFont(&m_font);
					SetWindowTheme(m_Label[i].m_hWnd, _T(""), _T(""));
				}

				break;

			case CFormViewComm::ELabel_DataType:
			case CFormViewComm::ELabel_Address:
			case CFormViewComm::ELabel_Alive:
				break;
			}
		}
	}
	while(false);
}

void CFormViewComm::InitButton()
{
	do
	{
		for(int i = 0; i < EButton_Count; i++)
		{
			switch(i)
			{
			case CFormViewComm::EButton_PLCTypeB:
				m_Button[i].SetNormalGradient(PALEGREEN);
				break;
			case CFormViewComm::EButton_PLCTypeW:
			case CFormViewComm::EButton_PLCRead:
			case CFormViewComm::EButton_PLCWrite:
			case CFormViewComm::EButton_Word:
			case CFormViewComm::EButton_String:
			case CFormViewComm::EButton_BlockL:
			case CFormViewComm::EButton_L:
			case CFormViewComm::EButton_R:
			case CFormViewComm::EButton_BlockR:
				m_Button[i].SetNormalGradient(LIGHTGRAY);
				break;
			}

			m_Button[i].Invalidate();
		}
	}
	while(false);
}

bool CFormViewComm::InitSheet()
{
	bool bResult = false;

	do
	{
		InitSheetPLC();

		// User IO Map 로드 실패시 기본 IO Map Setting
// 		if(!/*false*/LoadIOAddressSheet())
// 		{
		InitSheetDI();
		InitSheetDO();
// 		}
// 		LoadIOAddressSheet();
	}
	while(false);

	return bResult;
}

bool CFormViewComm::InitSheetPLC()
{
	bool bResult = false;

	do
	{
		CRect rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet[ESheet_PLC].GetClientRect(&rc);

		const int nColsStatistics = 32;
		const int nRowsStatistics = 16;


		m_Sheet[ESheet_PLC].SetRowResize(FALSE);
		m_Sheet[ESheet_PLC].SetColumnResize(FALSE);
		m_Sheet[ESheet_PLC].SetFixedColumnSelection(FALSE);
		m_Sheet[ESheet_PLC].SetRowCount(nRowsStatistics);
		m_Sheet[ESheet_PLC].SetColumnCount(nColsStatistics);
		m_Sheet[ESheet_PLC].SetEditable(FALSE);

		for(int i = 0; i < nColsStatistics; i++)
			m_Sheet[ESheet_PLC].SetColumnWidth(i, 70);

		int nType = 0;/*m_Combo[ECombo_AddressType1].GetCurSel();*/

		CString strName;
		CString strType;
		if(nType)
			strType.Format(_T("W"));
		else
			strType.Format(_T("B"));

		int nTemp = 0x200;

		for(int nCol = 0; nCol < m_Sheet[ESheet_PLC].GetColumnCount(); nCol++)
		{
			for(int nRow = 0; nRow < m_Sheet[ESheet_PLC].GetRowCount(); nRow++)
			{
				if(nCol % 2 == 1)
				{
					m_Sheet[ESheet_PLC].SetItemText(nRow, nCol, _T("0"));
				}
				else
				{
// 					strName.Format(_T("%s%04X"), strType, nTemp++);
// 					m_Sheet[ESheet_PLC].SetItemText(nRow, nCol, strName);
// 					m_Sheet[ESheet_PLC].SetItemBkColour(nRow, nCol, LIGHTGRAY);
					m_Sheet[ESheet_PLC].SetItemBkColour(nRow, nCol, WHITE);
				}

// 				m_rsMelsecSheet.SetItemFont(nRow, nCol, &m_lf);

			}
		}

		SetPLCSheetAddr();

		m_Sheet[ESheet_PLC].Invalidate();

		bResult = true;
	}
	while(false);

	return bResult;
}

bool CFormViewComm::InitSheetDI()
{
	bool bResult = false;

	do
	{
		CRect rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet[ESheet_DI].GetClientRect(&rc);

		const int nColsStatistics = 8;
		const int nRowsStatistics = 9;

		// Set Row, Column Count 
		m_Sheet[ESheet_DI].SetRowResize(FALSE);
		m_Sheet[ESheet_DI].SetColumnResize(FALSE);
		m_Sheet[ESheet_DI].SetFixedColumnSelection(FALSE);
		m_Sheet[ESheet_DI].SetRowCount(nRowsStatistics);
		m_Sheet[ESheet_DI].SetColumnCount(nColsStatistics);

		if(!LoadInAddressSheet())
		{
			// Load File 없을경우, Init
			// Title
			CString strText;
			for(int nCol = 0; nCol < m_Sheet[ESheet_DI].GetColumnCount(); nCol++)
			{
				if(nCol % 2 == 0)
					m_Sheet[ESheet_DI].SetItemText(0, nCol, _T("Addr"));
				else
					m_Sheet[ESheet_DI].SetItemText(0, nCol, _T("Name"));

				m_Sheet[ESheet_DI].SetItemBkColour(0, nCol, DARKGRAY);
			}


			for(int nCol = 0; nCol < m_Sheet[ESheet_DI].GetColumnCount(); nCol++)
			{
				for(int nRow = 1; nRow < m_Sheet[ESheet_DI].GetRowCount(); nRow++)
				{
					if(nCol % 2 == 0)
					{
						int Addr = (nCol * 8) / 2 + nRow - 1;

						/*strText.Format(_T("DI %02X :"), Addr);*/
						strText.Format(_T("0X%02X"), Addr);

						m_Sheet[ESheet_DI].SetItemText(nRow, nCol, strText);
					}
					else
					{
						strText.Format(_T("Temp"));
					}
					m_Sheet[ESheet_DI].SetItemText(nRow, nCol, strText);
					m_Sheet[ESheet_DI].SetItemBkColour(nRow, nCol, BASE_COLOR);
				}
			}
		}

		m_Sheet[ESheet_DI].ExpandToFit();
		m_Sheet[ESheet_DI].SetGridLines(0);
		m_Sheet[ESheet_DI].SetFont(&m_FontBasic);
// 		m_Sheet[ESheet_DI].SetBkColor(CUSTOM_BACKGROUND_COLOR);
// 		Sleep(100);
		m_Sheet[ESheet_DI].SetTextColor(WHITE/*CUSTOM_BACKGROUND_COLOR*/);

		// Color
		for(int nRow = 0; nRow < m_Sheet[ESheet_DI].GetRowCount(); nRow++)
		{
			for(int nCol = 0; nCol < m_Sheet[ESheet_DI].GetColumnCount(); nCol++)
			{
				if(nRow == 0)
					m_Sheet[ESheet_DI].SetItemBkColour(nRow, nCol, DARKGRAY);
				else
					m_Sheet[ESheet_DI].SetItemBkColour(nRow, nCol, BASE_COLOR);
			}
		}

		m_Sheet[ESheet_DI].Invalidate();

		bResult = true;
	}
	while(false);

	return bResult;
}

bool CFormViewComm::InitSheetDO()
{
	bool bResult = false;

	do
	{
		CRect rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet[ESheet_DO].GetClientRect(&rc);

		const int nColsStatistics = 8;
		const int nRowsStatistics = 9;

		// Set Row, Column Count
		m_Sheet[ESheet_DO].SetRowResize(FALSE);
		m_Sheet[ESheet_DO].SetColumnResize(FALSE);
		m_Sheet[ESheet_DO].SetFixedColumnSelection(FALSE);
		m_Sheet[ESheet_DO].SetRowCount(nRowsStatistics);
		m_Sheet[ESheet_DO].SetColumnCount(nColsStatistics);


		if(!LoadOutAddressSheet())
		{
			// Title
			CString strText;
			for(int nCol = 0; nCol < m_Sheet[ESheet_DO].GetColumnCount(); nCol++)
			{
				if(nCol % 2 == 0)
					m_Sheet[ESheet_DO].SetItemText(0, nCol, _T("Addr"));
				else
					m_Sheet[ESheet_DO].SetItemText(0, nCol, _T("Name"));

				m_Sheet[ESheet_DO].SetItemBkColour(0, nCol, DARKGRAY);
	// 			m_Sheet[ESheet_DO].SetTextColor(CUSTOM_BACKGROUND_COLOR);
			}

			for(int nCol = 0; nCol < m_Sheet[ESheet_DO].GetColumnCount(); nCol++)
			{
				for(int nRow = 1; nRow < m_Sheet[ESheet_DO].GetRowCount(); nRow++)
				{
					if(nCol % 2 == 0)
					{
						int Addr = (nCol * 8) / 2 + nRow - 1;

						/*strText.Format(_T("DI %02X :"), Addr);*/
						strText.Format(_T("0X%02X"), Addr);

						m_Sheet[ESheet_DO].SetItemText(nRow, nCol, strText);
					}
					else
					{
						strText.Format(_T("Temp"));
					}

					m_Sheet[ESheet_DO].SetItemText(nRow, nCol, strText);
					m_Sheet[ESheet_DO].SetItemBkColour(nRow, nCol, BASE_COLOR);
				}
			}
		}

		m_Sheet[ESheet_DO].ExpandToFit();
		m_Sheet[ESheet_DO].SetGridLines(0);
		m_Sheet[ESheet_DO].SetFont(&m_FontBasic);
// 		m_Sheet[ESheet_DO].SetBkColor(CUSTOM_BACKGROUND_COLOR);
		m_Sheet[ESheet_DO].SetTextColor(WHITE);

		// Color
		for(int nRow = 0; nRow < m_Sheet[ESheet_DO].GetRowCount(); nRow++)
		{
			for(int nCol = 0; nCol < m_Sheet[ESheet_DO].GetColumnCount(); nCol++)
			{
				if(nRow == 0)
					m_Sheet[ESheet_DO].SetItemBkColour(nRow, nCol, DARKGRAY);
				else
					m_Sheet[ESheet_DO].SetItemBkColour(nRow, nCol, BASE_COLOR);
			}
		}
		m_Sheet[ESheet_DO].Invalidate();

		bResult = true;
	}
	while(false);

	return bResult;
}

bool CFormViewComm::ResetMelsecDataSheet()
{
	bool bResult = false;

	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

		// Read Data
		if(m_cSelectedArea == 'B')
			pHandler->CopyMelsecTempBuffer(m_nBit);
		else if(m_cSelectedArea == 'W')
			pHandler->CopyMelsecTempBuffer(m_nWord);

		int nIndex = 0;
		int nShift = 0;
		int nData = 0;
		CString strData;

		for(int nCol = 0; nCol < m_Sheet[ESheet_PLC].GetColumnCount(); nCol++)
		{
			for(int nRow = 0; nRow < m_Sheet[ESheet_PLC].GetRowCount(); nRow++)
			{
				if(nCol % 2 == 1)
				{
					if(m_cSelectedArea == 'B')
					{
						nIndex = nCol / 2;
						nShift = nRow;
						if(nIndex >= (256 / 16 + 1)) break;
						nData = (((m_nBit[nIndex] >> (int)nShift) & 0x01) == 1 ? true : false);

						strData.Format(_T("%s"), nData ? _T("ON") : _T("OFF"));
						m_Sheet[ESheet_PLC].SetItemBkColour(nRow, nCol, nData % 2 ? RGB(100, 255, 100) : RGB(255, 100, 100));
						m_Sheet[ESheet_PLC].SetItemText(nRow, nCol, strData);
					}

					if(m_cSelectedArea == 'W')
					{
						nIndex = ((nCol / 2) * 16) + nRow;
						if(nIndex >= (256 + 1)) break;
						nData = m_nWord[nIndex];

						if(m_bSignal[ESignal_IsString])
							strData.Format(_T("%c%c"), LOBYTE(nData), HIBYTE(nData));
						else
							strData.Format(_T("%d"), nData);

						m_Sheet[ESheet_PLC].SetItemBkColour(nRow, nCol, nRow % 2 ? RGB(255, 255, 255) : RGB(230, 230, 230));
						m_Sheet[ESheet_PLC].SetItemText(nRow, nCol, strData);
					}

				}
			}
		}

		m_Sheet[ESheet_PLC].Invalidate();
	}
	while(false);

	return bResult;
}

void CFormViewComm::SetPLCAddrData(int nStartAdrr, EMelsecDataType eMelsecType)
{
	m_nSelectedAddr = nStartAdrr;
	m_eMelsecType = eMelsecType;

	switch(eMelsecType)
	{
	case CFormViewComm::EMelsecDataType_B:
		m_cSelectedArea = 'B';
		break;
	case CFormViewComm::EMelsecDataType_W:
		m_cSelectedArea = 'W';
		break;
	}
}

void CFormViewComm::AliveCheck()
{
	m_Label[ELabel_Alive].SetBkColor(m_bSignal[ESignal_Alive] ? LIGHTRED : BLUE);
	m_Label[ELabel_Alive].Invalidate();

	m_bSignal[ESignal_Alive] = !m_bSignal[ESignal_Alive];
}

void CFormViewComm::SetPLCSheetAddr()
{
	CString strAddr;

	int nAddrOffset = 0 + m_nSelectedAddr;
	for(int nCol = 0; nCol < m_Sheet[ESheet_PLC].GetColumnCount(); nCol++)
	{
		for(int nRow = 0; nRow < m_Sheet[ESheet_PLC].GetRowCount(); nRow++)
		{
			if(nCol % 2 == 0)
			{
				strAddr.Format(_T("%c%04X"), m_eMelsecType == EMelsecDataType_B ? 'B' : 'W', nAddrOffset++);
				m_Sheet[ESheet_PLC].SetItemText(nRow, nCol, strAddr);
			}
		}
	}

	m_Sheet[ESheet_PLC].Invalidate();
}

bool CFormViewComm::SaveIOAddressSheet()
{
	bool bResult = false;

	do
	{
		BOOL bResult1 = m_Sheet[ESheet_DI].Save(_T("DI.csv"));
		BOOL bResult2 = m_Sheet[ESheet_DO].Save(_T("DO.csv"));

		bResult = bResult1 && bResult2;
	}
	while(false);

	return bResult;
}

// bool CFormViewComm::LoadIOAddressSheet()
// {
// 	bool bResult = false;
// 
// 	do
// 	{
// 		bResult = m_Sheet[ESheet_DI].Load(_T("DI.csv"));
// 		bResult &= m_Sheet[ESheet_DO].Load(_T("DO.csv"));
// 	}
// 	while(false);
// 
// 	return bResult;
// }

bool CFormViewComm::LoadInAddressSheet()
{
	bool bResult = false;

	do
	{
		bResult = m_Sheet[ESheet_DI].Load(_T("DI.csv"));
	}
	while(false);

	return bResult;
}

bool CFormViewComm::LoadOutAddressSheet()
{
	bool bResult = false;

	do
	{
		bResult = m_Sheet[ESheet_DO].Load(_T("DO.csv"));
	}
	while(false);

	return bResult;
}

void CFormViewComm::UpdateDISheet()
{
	do
	{
// 		CPerformanceCounter pcTimer;
// 		pcTimer.Start();

		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

// 		int arrAddress[0x20] = { 0x00, };

		for(int nCol = 0; nCol < m_Sheet[ESheet_DI].GetColumnCount(); nCol++)
		{
			for(int nRow = 1; nRow < m_Sheet[ESheet_DI].GetRowCount(); nRow++)
			{
				// Addr 값 Read
				if(nCol % 2 == 0)
				{
					int nAddr = _ttof(m_Sheet[ESheet_DI].GetItemText(nRow, nCol));

					m_Sheet[ESheet_DI].SetItemBkColour(nRow, nCol + 1, pHandler->MelsecGetDataIO(CDefinition::EAddressType_Input, nAddr) ? LIME : LIGHTRED);
				}
			}
		}

		m_Sheet[ESheet_DI].Invalidate();

// 		CLogManager::Write(0, _T("Time : %.2f"), pcTimer.GetElapsedTime());
	}
	while(false);
}

void CFormViewComm::UpdateDOSheet()
{
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;


		for(int nCol = 0; nCol < m_Sheet[ESheet_DO].GetColumnCount(); nCol++)
		{
			for(int nRow = 1; nRow < m_Sheet[ESheet_DO].GetRowCount(); nRow++)
			{
				// Addr 값 Read
				if(nCol % 2 == 0)
				{
					int nAddr = _ttof(m_Sheet[ESheet_DO].GetItemText(nRow, nCol));

					m_Sheet[ESheet_DO].SetItemBkColour(nRow, nCol + 1, pHandler->MelsecGetDataIO(CDefinition::EAddressType_Input, nAddr) ? LIME : LIGHTRED);
				}
			}
		}

		m_Sheet[ESheet_DO].Invalidate();
	}
	while(false);
}

BEGIN_MESSAGE_MAP(CFormViewComm, CRavidFormViewBase)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()

	ON_BN_CLICKED(IDC_BUTTON_COMM_TEST, &CFormViewComm::OnBnClickedButtonCommTest)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_TYPE_B, &CFormViewComm::OnBnClickedButtonCommMelsecTypeB)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_TYPE_W, &CFormViewComm::OnBnClickedButtonCommMelsecTypeW)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_READ, &CFormViewComm::OnBnClickedButtonCommMelsecRead)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_WRITE, &CFormViewComm::OnBnClickedButtonCommMelsecWrite)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_WORD, &CFormViewComm::OnBnClickedButtonCommMelsecWord)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_STRING, &CFormViewComm::OnBnClickedButtonCommMelsecString)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_BLOCK_L_SHIFT, &CFormViewComm::OnBnClickedButtonCommMelsecBlockLShift)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_L_SHIFT, &CFormViewComm::OnBnClickedButtonCommMelsecLShift)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_R_SHIFT, &CFormViewComm::OnBnClickedButtonCommMelsecRShift)
	ON_BN_CLICKED(IDC_BUTTON_COMM_MELSEC_BLOCK_R_SHIFT, &CFormViewComm::OnBnClickedButtonCommMelsecBlockRShift)
END_MESSAGE_MAP()


void CFormViewComm::OnBnClickedButtonCommTest()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	InitSheetDI();
}


void CFormViewComm::OnBnClickedButtonCommMelsecTypeB()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		m_eMelsecType = EMelsecDataType_B;
		m_cSelectedArea = 'B';

		m_Button[EButton_PLCTypeB].SetNormalGradient(PALEGREEN);
		m_Button[EButton_PLCTypeW].SetNormalGradient(LIGHTGRAY);

		m_Button[EButton_PLCTypeB].Invalidate();
		m_Button[EButton_PLCTypeW].Invalidate();

		SetPLCSheetAddr();

		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);
}


void CFormViewComm::OnBnClickedButtonCommMelsecTypeW()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		m_eMelsecType = EMelsecDataType_W;
		m_cSelectedArea = 'W';

		m_Button[EButton_PLCTypeB].SetNormalGradient(LIGHTGRAY);
		m_Button[EButton_PLCTypeW].SetNormalGradient(PALEGREEN);

		m_Button[EButton_PLCTypeB].Invalidate();
		m_Button[EButton_PLCTypeW].Invalidate();

		SetPLCSheetAddr();

		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);
}


void CFormViewComm::OnBnClickedButtonCommMelsecRead()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

		CString strAddress;
		m_Edit[EEdit_Address].GetWindowTextW(strAddress);
		int nValue = _ttoi(strAddress);

		// 16진수(주소값) -> 10진수
		int nAddr = TransformHexToDec(nValue);

		m_nSelectedAddr = nAddr;

		SetPLCSheetAddr();

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);
}


void CFormViewComm::OnBnClickedButtonCommMelsecWrite()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

		CString strAddress;
		m_Edit[EEdit_Address].GetWindowTextW(strAddress);
		int nValue = _ttoi(strAddress);

		int nAddr = TransformHexToDec(nValue);

		CString strVal;
		m_Edit[EEdit_SetValue].GetWindowTextW(strVal);
		short sData = _ttoi(strVal);

		if(m_cSelectedArea == 'B')
			pHandler->MelsecWriteIO(nAddr - EMelsecBitOut_StartAddr, sData > 0 ? true : false);
		else if(m_cSelectedArea == 'W')
			pHandler->MelsecWriteWord(nAddr - EMelsecWordOut_StartAddr, 1, &sData);
	}
	while(false);
}


void CFormViewComm::OnBnClickedButtonCommMelsecWord()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_bSignal[ESignal_IsString] = false;

}


void CFormViewComm::OnBnClickedButtonCommMelsecString()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_bSignal[ESignal_IsString] = true;
}


void CFormViewComm::OnBnClickedButtonCommMelsecBlockLShift()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

// 		int nShift = TransformHexToDec(100); // 0x100 쉬프트
		m_nSelectedAddr -= 0x100;

		SetPLCSheetAddr();

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);

}


void CFormViewComm::OnBnClickedButtonCommMelsecLShift()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

// 		int nShift = TransformHexToDec(0x010); // 0x010 쉬프트
		m_nSelectedAddr -= 0x010;

		SetPLCSheetAddr();

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);

}


void CFormViewComm::OnBnClickedButtonCommMelsecRShift()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

// 		int nShift = TransformHexToDec(0x010);
		m_nSelectedAddr += 0x010;

		SetPLCSheetAddr();

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);
}


void CFormViewComm::OnBnClickedButtonCommMelsecBlockRShift()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			break;

// 		int nShift = TransformHexToDec(0x100);
		m_nSelectedAddr += 0x100;

		SetPLCSheetAddr();

		pHandler->SetMelsecTempInfo(m_nSelectedAddr, m_cSelectedArea);
	}
	while(false);
}
