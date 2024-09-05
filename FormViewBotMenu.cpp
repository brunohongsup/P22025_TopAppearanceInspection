#include "stdafx.h"
#include "FormViewBotMenu.h"

// FormViewTopMenu.cpp

IMPLEMENT_DYNCREATE(CFormViewBotMenu, CRavidFormViewBase)

CFormViewBotMenu::CFormViewBotMenu() : CRavidFormViewBase(IDD_FORM_BOTMENU)
{
// 	ZeroMemory(m_bSignal, sizeof(m_bSignal));
// 
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


	m_pDlgHistoryChart = nullptr;
	m_pDlgDataChart = nullptr;
}

CFormViewBotMenu::~CFormViewBotMenu()
{
	if(m_pDlgHistoryChart)
	{
		delete[] m_pDlgHistoryChart;
	}

	if(m_pDlgDataChart)
	{
		delete[] m_pDlgDataChart;
	}
}

#ifdef _DEBUG
void CFormViewBotMenu::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewBotMenu::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG

void CFormViewBotMenu::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);
	int nIndex = 0;

	// Button
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_HISTORY, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_CHART, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_MODEL, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_REGISTER, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_CAMERA, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_COMM, m_Button[nIndex++]);
	DDX_Control(pDX, IDC_BUTTON_BOTMENU_OPTIONS, m_Button[nIndex++]);

	// Label	
	nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_BOTMENU_CPU_TITLE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_RAM_TITLE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_STORAGE_TITLE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_CPU_PERCENTAGE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_RAM_PERCENTAGE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_STORAGE_PERCENTAGE, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_DATE_TIME, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_BOTMENU_RUN_STATUS, m_Label[nIndex++]);

	DDX_Control(pDX, IDC_STATIC_BOTTOMMENU_STATUS, m_picRun);


   // List
// 	nIndex = 0;
// 	DDX_Control(pDX, IDC_LIST_TEMP1, m_List[nIndex++]);
// 	DDX_Control(pDX, IDC_LIST_TEMP2, m_List[nIndex++]);
}

void CFormViewBotMenu::OnInitialUpdate()
{
	CRavidFormViewBase::OnInitialUpdate();

	// Initialize
	InitializeButton();
// 	InitializeButtonLanguage();
 	InitializeLabel();
// 	InitializeListCtrl();





	m_picRun.SetBkColor(BASE_COLOR);
	m_picRun.Load(MAKEINTRESOURCE(IDR_GIF_PROGRESS_2), _T("GIF"));
	bTimerFlg = false;
	// UI Timer
	SetTimer(0, 1000, nullptr);
	SetTimer(1, 500, nullptr);
 	SetTimer(2, 500, nullptr);


	m_tip_ctrl.Create(this, TTS_ALWAYSTIP | TTS_NOPREFIX);
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_HISTORY), _T("History"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_CHART), _T("Chart"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_MODEL), _T("Model"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_REGISTER), _T("Register"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_CAMERA), _T("Camera"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_COMM), _T("Communication"));
	m_tip_ctrl.AddTool(GetDlgItem(IDC_BUTTON_BOTMENU_OPTIONS), _T("Options"));


	m_tip_ctrl.SetMaxTipWidth(300);
	m_tip_ctrl.SetDelayTime(TTDT_AUTOPOP, 20000);

}

void CFormViewBotMenu::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
}

void CFormViewBotMenu::OnPaint()
{
	CPaintDC pDC(this);
}

HBRUSH CFormViewBotMenu::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);
	return hbr;
}

void CFormViewBotMenu::OnTimer(UINT_PTR nIDEvent)
{

	switch(nIDEvent)
	{
	case 0: // 1000ms
		{
			// Update
			SetDateTime();
		}
		break;
	case 1: // 500ms
		{
			// Update
			SetSystemStatus();
		}
		break;
	case 2: // 500ms
		{	
			if(CSequenceManager::IsRunning() && !bTimerFlg)
			{
				m_picRun.Draw();
				bTimerFlg = true;
			}
			else if(!CSequenceManager::IsRunning() && bTimerFlg)
			{
				m_picRun.Stop();
				bTimerFlg = false;
			}

		}
		break;
	default:
		break;
	}
	CRavidFormViewBase::OnTimer(nIDEvent);
}

void CFormViewBotMenu::OnDestroy()
{
	CRavidFormViewBase::OnDestroy();

	KillTimer(0);
	KillTimer(1);
	KillTimer(2);

}

void CFormViewBotMenu::InitData()
{
	// 모델 오픈 후 호출
		// Dialog
	if(!m_pDlgHistoryChart)
	{
		m_pDlgHistoryChart = new CDlgHistoryChart(this);

		if(!m_pDlgHistoryChart)
			return;

		if(m_pDlgHistoryChart->GetSafeHwnd() == NULL)
			m_pDlgHistoryChart->Create(IDD_DIALOG_HISTORY_CHART, this);

		m_pDlgHistoryChart->ShowWindow(SW_HIDE);
	}

	if(!m_pDlgDataChart)
	{
		m_pDlgDataChart = new CDlgDataChart(this);

		if(!m_pDlgDataChart)
			return;

		if(m_pDlgDataChart->GetSafeHwnd() == NULL)
			m_pDlgDataChart->Create(IDD_DIALOG_DATA_CHART, this);

		m_pDlgDataChart->ShowWindow(SW_HIDE);
	}

	InitHistoryChart();
	InitDataChart();

}

void CFormViewBotMenu::InitializeButton()
{
	do
	{
		HICON hIcon;
		// History
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_HISTORY);
		m_Button[EButton_History].SetIcon(hIcon);
		m_Button[EButton_History].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_History].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_History].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_History].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);

		// Chart
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_CHART);
		m_Button[EButton_Chart].SetIcon(hIcon);
		m_Button[EButton_Chart].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Chart].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Chart].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Chart].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);

		// Model
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_MODEL);
		m_Button[EButton_Model].SetIcon(hIcon);
		m_Button[EButton_Model].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Model].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Model].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Model].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);

		// Register
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_REGISTER);
		m_Button[EButton_Register].SetIcon(hIcon);
		m_Button[EButton_Register].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Register].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Register].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Register].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);

		// Camera
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_CAMERA);
		m_Button[EButton_Camera].SetIcon(hIcon);
		m_Button[EButton_Camera].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Camera].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Camera].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Camera].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);

		// Comm
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_COMM);
		m_Button[EButton_Comm].SetIcon(hIcon);
		m_Button[EButton_Comm].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Comm].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Comm].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Comm].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);
		
		// Options
		hIcon = AfxGetApp()->LoadIcon(IDI_ICON_OPTIONS);
		m_Button[EButton_Options].SetIcon(hIcon);
		m_Button[EButton_Options].SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Options].SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, RGB(40, 40, 40), TRUE);
		m_Button[EButton_Options].SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, WHITE, TRUE);
		m_Button[EButton_Options].SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, WHITE, TRUE);
	}
	while(false);
}

void CFormViewBotMenu::InitializeLabel()
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

	m_Font.CreateFontIndirect(&m_lf);//정의된 font로 설정 

	m_Label[ELabel_DateTime].SetTextColor(WHITE);
	m_Label[ELabel_DateTime].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_DateTime].SetFont(&m_Font);

	m_Label[ELabel_RunStatus].SetTextColor(WHITE);
	m_Label[ELabel_RunStatus].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_RunStatus].SetFont(&m_Font);

	/////////////////////////////////////////////////////////
	m_lf.lfHeight = 16;
	m_lf.lfWidth = 7;
	m_FontCPU.CreateFontIndirect(&m_lf);//정의된 font로 설정 
	for(int i = 0; i <= ELabel_HDD_Percentage; i++)
	{
		m_Label[i].SetTextColor(WHITE);
		m_Label[i].SetBkColor(CUSTOM_DARK);
		m_Label[i].SetFont(&m_FontCPU);
	}
}

void CFormViewBotMenu::SetDateTime()
{
	CTime tm = CTime::GetCurrentTime();

	CString strTime;
	strTime.Format(_T("%04d.%02d.%02d \n %02d:%02d:%02d"),
				   tm.GetYear(),
				   tm.GetMonth(),
				   tm.GetDay(),
				   tm.GetHour(),
				   tm.GetMinute(),
				   tm.GetSecond()
	);

	CString strPostTime;
	m_Label[ELabel_DateTime].GetWindowTextW(strPostTime);

	if(strPostTime != strTime)
	{
		m_Label[ELabel_DateTime].SetWindowTextW(strTime);
		m_Label[ELabel_DateTime].Invalidate();
	}
}

void CFormViewBotMenu::SetHistoryChart(std::vector<SMeasuredData> vctData, std::vector<SMeasurementKind> vctKind)
{

	CString strName[CDlgHistoryChart::eChartType_Count] = 
	{
		_T("A1"),_T("B1"),_T("TWC"),_T("L1"),_T("M1"),_T("N1"),_T("O1"),_T("P1")
	};

	for(int i = 0; i < CDlgHistoryChart::eChartType_Count; i ++)
	{
		double dblUSL = 0.f;
		double dblLSL = 0.f;
		CDlgHistoryChart::eChartType eType = (CDlgHistoryChart::eChartType)i;
		vector<SMeasuredData> sChartData;
		sChartData.resize(3);

		if(!vctData.size())
		{
			CLogManager::Write(ELogType_Vision, _T("Form Bottom Error....data vector size 0"));
			break;
		}
		int nIndexNumber = m_mapStringToIndex[strName[i]];

		if(nIndexNumber < 0 || nIndexNumber >= vctData.size() || nIndexNumber >= vctKind.size())
		{
			CLogManager::Write(ELogType_Vision, _T("Form Bottom Error....Not found String Index"));
			break;
		}

		sChartData[0] = vctData[nIndexNumber];
		sChartData[1] = vctData[nIndexNumber + 1];
		sChartData[2].dblData = Chart::NoValue; // 사용안함.

		dblUSL = vctKind[nIndexNumber].dblReference + vctKind[nIndexNumber].dblUSL;
		dblLSL = vctKind[nIndexNumber].dblReference - vctKind[nIndexNumber].dblUSL;

		m_pDlgHistoryChart->SetData(eType, sChartData, dblUSL, dblLSL);

	}

	m_pDlgHistoryChart->drawChart();

}

void CFormViewBotMenu::InitHistoryChart()
{

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));
	if(!pHandler) 
		return;


	std::vector<SMeasurementKind> vct;
	pHandler->GetMesurementKindData(vct);

	int nRow = 0;
	for(SMeasurementKind sData : vct)
	{
		m_mapStringToIndex[sData.strName] = nRow;
		nRow++;
	}


}

void CFormViewBotMenu::InitDataChart()
{
	m_pDlgDataChart->InitializeDataSheet();
}

void CFormViewBotMenu::SetSystemStatus()
{
	CString strData;
	COLORREF color;


	// CPU
	double dblCPUUsage = GetCPUUsage();
	color = dblCPUUsage > 80 ? RGB(255, 100, 100) : RGB(100, 255, 100);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_CPU))->SetBarColor(color);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_CPU))->SetPos((int)dblCPUUsage);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_CPU))->Invalidate();
	strData.Format(_T("%02.1f%%"), dblCPUUsage);
	m_Label[ELabel_CPU_Percentage].SetWindowText(strData);
	m_Label[ELabel_CPU_Percentage].Invalidate();

	// 메모리(RAM)
	MEMORYSTATUS memoryStatus;
	GlobalMemoryStatus(&memoryStatus);
	double dblUsedMemory = (double)memoryStatus.dwAvailPhys / 1073741824.;
	double dblTotalMemory = (double)memoryStatus.dwTotalPhys / 1073741824.;
	color = ((dblTotalMemory - dblUsedMemory) / dblTotalMemory * 100) > 80 ? RGB(255, 100, 100) : RGB(100, 255, 100);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_RAM))->SetBarColor(color);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_RAM))->SetPos((int)((dblTotalMemory - dblUsedMemory) / dblTotalMemory * 100));
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_RAM))->Invalidate();
	strData.Format(_T("%02.1f%%"), ((dblTotalMemory - dblUsedMemory) / dblTotalMemory * 100));
	m_Label[ELabel_RAM_Percentage].SetWindowText(strData);
	m_Label[ELabel_RAM_Percentage].Invalidate();

// 	// C Drive
// 	double dblUsedDrive = GetFreeSpaceOfDrive(_T("C:"));
// 	color = dblUsedDrive > 80 ? RGB(255, 100, 100) : RGB(100, 255, 100);
// 	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_C))->SetBarColor(color);
// 	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_C))->SetPos((int)dblUsedDrive);
// 	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_C))->Invalidate();
// 	strData.Format(_T("%02.1f%%"), dblUsedDrive);
// 	m_Label[ELabel_CDrive_Percentage].SetWindowText(strData);
// 	m_Label[ELabel_CDrive_Percentage].Invalidate();

	// D Drive
	double dblUsedDrive = GetFreeSpaceOfDrive(_T("C:"));
	dblUsedDrive = GetFreeSpaceOfDrive(_T("D:"));
	color = dblUsedDrive > 80 ? RGB(255, 100, 100) : RGB(100, 255, 100);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_STORAGE))->SetBarColor(color);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_STORAGE))->SetPos((int)dblUsedDrive);
	((CProgressCtrl*)GetDlgItem(IDC_PROGRESS_BOTMENU_STORAGE))->Invalidate();
	strData.Format(_T("%02.1f%%"), dblUsedDrive);
	m_Label[ELabel_HDD_Percentage].SetWindowText(strData);
	m_Label[ELabel_HDD_Percentage].Invalidate();
}

double CFormViewBotMenu::GetFreeSpaceOfDrive(CString strDisk)
{
	ULARGE_INTEGER avail, total, free;

	GetDiskFreeSpaceEx(strDisk, &avail, &total, &free);

	//GBytes total.QuadPart>>30 
	//MBytes total.QuadPart>>20
	//KBytes total.QuadPart>>10

	double disk_size = (int)(total.QuadPart >> 20);
	double disk_free_size = (int)(free.QuadPart >> 20);

	double dbReturn = 100 - (disk_free_size / disk_size * 100);

	return dbReturn;
}

double CFormViewBotMenu::GetCPUUsage()
{
	double dblReturn = 0.;

	FILETIME ftSysIdle, ftSysKernel, ftSysUser = { 0 };

	if(!GetSystemTimes(&ftSysIdle, &ftSysKernel, &ftSysUser))
		return dblReturn;

	if(!IsCPUUsageFirstRun())
	{
		ULONGLONG ftSysKernelDiff = GetSubtractTimes(ftSysKernel, m_ftPrevSysKernel);
		ULONGLONG ftSysUserDiff = GetSubtractTimes(ftSysUser, m_ftPrevSysUser);
		ULONGLONG ftSysIdleDiff = GetSubtractTimes(ftSysIdle, m_ftPrevSysIdle);
		ULONGLONG nTotalSys = ftSysKernelDiff + ftSysUserDiff;

		dblReturn = double(nTotalSys) - double(ftSysIdleDiff);
		dblReturn *= 100.0;
		dblReturn /= double(nTotalSys);

		dblReturn = __max(__min(dblReturn, 100.), 0.);
	}

	m_ftPrevSysKernel = ftSysKernel;
	m_ftPrevSysUser = ftSysUser;
	m_ftPrevSysIdle = ftSysIdle;

	m_bIsCPUUsageFirstRun = false;

	return dblReturn;
}

ULONGLONG CFormViewBotMenu::GetSubtractTimes(const FILETIME & ftSys, const FILETIME & ftPre)
{
	ULONGLONG ullSys = 0, ullPre = 0;

	memcpy(&ullSys, &ftSys, sizeof(ULONGLONG));
	memcpy(&ullPre, &ftPre, sizeof(ULONGLONG));

	return ullSys - ullPre;
}

BEGIN_MESSAGE_MAP(CFormViewBotMenu, CRavidFormViewBase)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()

	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_MODEL, &CFormViewBotMenu::OnBnClickedButtonBotmenuModel)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_REGISTER, &CFormViewBotMenu::OnBnClickedButtonBotmenuRegister)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_CAMERA, &CFormViewBotMenu::OnBnClickedButtonBotmenuCamera)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_COMM, &CFormViewBotMenu::OnBnClickedButtonBotmenuComm)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_OPTIONS, &CFormViewBotMenu::OnBnClickedButtonBotmenuOptions)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_HISTORY, &CFormViewBotMenu::OnBnClickedButtonBotmenuHistory)
	ON_BN_CLICKED(IDC_BUTTON_BOTMENU_CHART, &CFormViewBotMenu::OnBnClickedButtonBotmenuChart)
END_MESSAGE_MAP()


void CFormViewBotMenu::OnBnClickedButtonBotmenuModel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do 
	{
		CRavidMainFrameToolBarHandler Toolbar;

		Toolbar.OpenModelManager();

		CLogManager::Write(ELogType_Main, _T("[Manual Menu] Model Button Check..."));
	} while (false);
}


void CFormViewBotMenu::OnBnClickedButtonBotmenuRegister()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do 
	{
		CFormViewMain* pMainFrom = dynamic_cast<CFormViewMain*>(CUIManager::FindView(typeid(CFormViewMain)));
		if(!pMainFrom)
			return;

		if(CUIManager::GetCurrentUIConfigurationNumber() == CDefinition::EUIConfig_Register)
		{
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);

			pMainFrom->SettingMeasurementSheet(false);

		}
		else
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Register);

		// Setting

		CLogManager::Write(ELogType_Main, _T("[Manual Menu] Register Button Check..."));
	} while (false);
}


void CFormViewBotMenu::OnBnClickedButtonBotmenuCamera()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		if(CUIManager::GetCurrentUIConfigurationNumber() == CDefinition::EUIConfig_CameraControl)
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);
		else
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_CameraControl);

		CLogManager::Write(0, _T("[Manual Menu] Camera Button Check..."));
	}
	while(false);
}


void CFormViewBotMenu::OnBnClickedButtonBotmenuComm()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		if(CUIManager::GetCurrentUIConfigurationNumber() == CDefinition::EUIConfig_Comm)
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);
		else
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Comm);

		

		CLogManager::Write(ELogType_Main, _T("[Manual Menu] Comm Button Check..."));
	}
	while(false);
}


void CFormViewBotMenu::OnBnClickedButtonBotmenuOptions()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	do
	{
		if(CUIManager::GetCurrentUIConfigurationNumber() == CDefinition::EUIConfig_Options)
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Main);
		else
			CUIManager::RunUIConfiguration(CDefinition::EUIConfig_Options);

		// Setting

		CLogManager::Write(ELogType_Main, _T("[Manual Menu] Options Button Check..."));
	}
	while(false);
}


BOOL CFormViewBotMenu::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	m_tip_ctrl.RelayEvent(pMsg);

	return CRavidFormViewBase::PreTranslateMessage(pMsg);
}


void CFormViewBotMenu::OnBnClickedButtonBotmenuHistory()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pDlgHistoryChart->ShowWindow(SW_SHOW);

}


void CFormViewBotMenu::OnBnClickedButtonBotmenuChart()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_pDlgDataChart->LoadLotIDToComboBox();
	m_pDlgDataChart->LoadModelToComboBox();
	m_pDlgDataChart->LoadCellNumToComboBox();
	m_pDlgDataChart->LoadClassToComboBox();

	m_pDlgDataChart->ShowWindow(SW_SHOW);

}


/////////////////////////////////////////////////////////
//

