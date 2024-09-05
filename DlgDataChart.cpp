// #include "stdafx.h"
// #include "DialogViewDataChart.h"

// DialogViewDataChart.cpp: 구현 파일
#include "stdafx.h"
#include "DlgDataChart.h"
// #include "afxdialogex.h"
 #include <stdlib.h>

#include <random>

// CRavidDialogView_Melsec 대화 상자

IMPLEMENT_DYNAMIC(CDlgDataChart, CDialog)

CDlgDataChart::CDlgDataChart(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_DATA_CHART, pParent)
{
// 	m_Font.CreateFont(
// 		20,						// 글자높이
// 		8,						// 글자너비
// 		0,						// 출력각도
// 		0,						// 기준 선에서의각도
// 		FW_HEAVY,				// 글자굵기
// 		FALSE,					// Italic 적용여부
// 		FALSE,                  // 밑줄적용여부
// 		FALSE,					// 취소선적용여부
// 		DEFAULT_CHARSET,		// 문자셋종류
// 		OUT_DEFAULT_PRECIS,		// 출력정밀도
// 		CLIP_DEFAULT_PRECIS,	// 클리핑정밀도
// 		DEFAULT_QUALITY,		// 출력문자품질
// 		DEFAULT_PITCH,			// 글꼴Pitch
// 		_T("맑은 고딕")			// 글꼴
// 
// 	);
}

CDlgDataChart::~CDlgDataChart()
{
	for(int i = 0; i < _countof(m_ChartViewer); i++)
		delete m_ChartViewer[i].getChart();
}

void CDlgDataChart::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
//	DDX_Radio(pDX, IDC_RADIO_CHART_CAMERA1, m_eRadioType);

	DDX_Control(pDX, IDC_SPREAD_DATACHART, m_Sheet);

	int nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_GRAPH_PRO, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH_HISTOGRAM, m_ChartViewer[nIndex++]);


	// Label	
	nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_CHART_NAME1, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME2, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME3, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME4, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME5, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME6, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME7, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME8, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME9, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME10, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME11, m_Label[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_CHART_NAME12, m_Label[nIndex++]);


	DDX_Control(pDX, IDC_CHECK_CHART_STAGE1, m_btnCheckBox[ECheckBox_Stage1]);
	DDX_Control(pDX, IDC_CHECK_CHART_STAGE2, m_btnCheckBox[ECheckBox_Stage2]);
	DDX_Control(pDX, IDC_CHECK_CHART_STAGE3, m_btnCheckBox[ECheckBox_Stage3]);
	DDX_Control(pDX, IDC_CHECK_CHART_STAGE4, m_btnCheckBox[ECheckBox_Stage4]);
	DDX_Control(pDX, IDC_CHECK_CHART_RESULT1, m_btnCheckBox[ECheckBox_ResultOK]);
	DDX_Control(pDX, IDC_CHECK_CHART_RESULT2, m_btnCheckBox[ECheckBox_ResultNG]);
	DDX_Control(pDX, IDC_CHECK_CHART_RESULT3, m_btnCheckBox[ECheckBox_EachResult]);
	DDX_Control(pDX, IDC_RADIO_CHART_CAMERA1, m_btnRadioBtn[ERadio_UpperCam]);
	DDX_Control(pDX, IDC_RADIO_CHART_CAMERA2, m_btnRadioBtn[ERadio_Lowercam]);


	DDX_Control(pDX, IDC_COMBO_CHART_MODEL, m_ComboBox[ECombo_ChartModel]);
	DDX_Control(pDX, IDC_COMBO_CHART_LOTTYPE, m_ComboBox[ECombo_LotID]);

	DDX_Control(pDX, IDC_COMBO_CHART_RESULT1, m_ComboBox[ECombo_Reuslt_CellNo]);
	DDX_Control(pDX, IDC_COMBO_CHART_RESULT2, m_ComboBox[ECombo_Reuslt_Class]);



}

BEGIN_MESSAGE_MAP(CDlgDataChart, CDialog)

	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH_PRO, OnViewPortChanged_Pro)
	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH_PRO, OnMouseMovePlotArea_Pro)

	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH_HISTOGRAM, OnViewPortChanged_His)
	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH_HISTOGRAM, OnMouseMovePlotArea_His)

	ON_NOTIFY(NM_DBLCLK, IDC_SPREAD_DATACHART, OnSheetDblClick)
	ON_NOTIFY(NM_CLICK, IDC_SPREAD_DATACHART, OnSheetClick)
	ON_NOTIFY(GVN_BEGINDRAG, IDC_SPREAD_DATACHART, OnSheetBeginDrag)
	ON_NOTIFY(GVN_SELCHANGING, IDC_SPREAD_DATACHART, OnSheetStartSelChange)
	ON_WM_SIZE()
	ON_WM_PAINT()
	ON_WM_CTLCOLOR()
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_WM_GETMINMAXINFO()
	ON_WM_SYSCOMMAND()
	ON_WM_CLOSE()
	ON_WM_ERASEBKGND()
	ON_BN_CLICKED(IDC_BUTTON_CHART_SEARCHSTOP, &CDlgDataChart::OnBnClickedButtonChartSearchstop)
	ON_BN_CLICKED(IDC_BUTTON_CHART_SEARCH, &CDlgDataChart::OnBnClickedButtonChartSearch)

	ON_BN_CLICKED(IDC_CHECK_CHART_RESULT1, &CDlgDataChart::OnBnClickedCheckChartResult1)
	ON_BN_CLICKED(IDC_CHECK_CHART_RESULT2, &CDlgDataChart::OnBnClickedCheckChartResult2)
//	ON_CONTROL_RANGE(BN_CLICKED, IDC_RADIO_CHART_CAMERA1, IDC_RADIO_CHART_CAMERA2, RadioFlg)

ON_BN_CLICKED(IDC_RADIO_CHART_CAMERA1, &CDlgDataChart::OnBnClickedRadioChartCamera1)
ON_BN_CLICKED(IDC_RADIO_CHART_CAMERA2, &CDlgDataChart::OnBnClickedRadioChartCamera2)
ON_BN_CLICKED(IDC_BUTTON_CHART_EXCEL, &CDlgDataChart::OnBnClickedButtonChartExcel)
END_MESSAGE_MAP()


// CDialogGrabMask 메시지 처리기

BOOL CDlgDataChart::OnInitDialog()
{
	CDialog::OnInitDialog();
	GetWindowRect(&m_crWindowSize);

	// Test.
//	std::random_device rd;
// random_device 를 통해 난수 생성 엔진을 초기화 한다.
//	std::mt19937 gen(rd());
	// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
//	std::uniform_int_distribution<int> dis(22, 38);
// 	for(int i = 0; i < m_lDataSize; i++)
// 	{
// 		m_dblData[i] = dis(gen) / 10.f;
// 		m_dlbULSLimit[i] = 3.9;
// 		m_dlbLSLLimit[i] = 2.1;
// 	}
// 
// 	m_dblAHistogram = DoubleArray(m_dblData, m_lDataSize);

	InitializeChart();
	InitializeLabel();

	//LoadModelToComboBox();
	//LoadLotIDToComboBox();
	
	m_eRadioType = ERadio_UpperCam;
	((CButton*)this->GetDlgItem(IDC_RADIO_CHART_CAMERA1))->SetCheck(TRUE);

	return 0;
}

BOOL CDlgDataChart::PreTranslateMessage(MSG * pMsg)
{
	if(pMsg->message == WM_KEYDOWN)
	{
		if(pMsg->wParam == VK_RETURN)
			return TRUE;
		else if(pMsg->wParam == VK_ESCAPE)
			return TRUE;
	}

	return CDialog::PreTranslateMessage(pMsg);
}

void CDlgDataChart::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, 0, 0);
}

void CDlgDataChart::OnPaint()
{
	CPaintDC pDC(this);
}

HBRUSH CDlgDataChart::OnCtlColor(CDC * pDC, CWnd * pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	if(pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_STAGE1
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_STAGE2
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_STAGE3
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_STAGE4
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_RESULT1
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_RESULT2
	   || pWnd->GetDlgCtrlID() == IDC_CHECK_CHART_RESULT3
	   || pWnd->GetDlgCtrlID() == IDC_RADIO_CHART_CAMERA1
	   || pWnd->GetDlgCtrlID() == IDC_RADIO_CHART_CAMERA2
	   )
	{
		pDC->SetTextColor(WHITE);
		pDC->SetBkMode(TRANSPARENT);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}



	return hbr;
}

void CDlgDataChart::OnTimer(UINT_PTR nIDEvent)
{
	CDialog::OnTimer(nIDEvent);
}

void CDlgDataChart::OnDestroy()
{
	CDialog::OnDestroy();
}

void CDlgDataChart::OnGetMinMaxInfo(MINMAXINFO * pMMI)
{
	pMMI->ptMinTrackSize = CPoint(m_crWindowSize.Width(), m_crWindowSize.Height());
	pMMI->ptMaxTrackSize = CPoint(m_crWindowSize.Width(), m_crWindowSize.Height());

	CDialog::OnGetMinMaxInfo(pMMI);
}

void CDlgDataChart::OnSysCommand(UINT nID, LPARAM lParam)
{
	if(nID == SC_CLOSE)
	{
		//??
		//return;
	}

	CDialog::OnSysCommand(nID, lParam);
}

// void CDlgDataChart::RadioFlg(UINT ID)
// {
// 	UpdateData(TRUE);
// 
// 	switch(m_eRadioType)
// 	{
// 	case CDlgDataChart::ERadio_UpperCam:
// 		{
// 
// 		}
// 		break;
// 	case CDlgDataChart::ERadio_Lowercam:
// 		{
// 
// 		}
// 		break;
// 	default:
// 		break;
// 	}
// 
// }

void CDlgDataChart::trackLineLabel(XYChart * c, int mouseX)
{
	// Clear the current dynamic layer and get the DrawArea object to draw on it.
	DrawArea *d = c->initDynamicLayer();

	// The plot area object
	PlotArea *plotArea = c->getPlotArea();

	// Get the data x-value that is nearest to the mouse, and find its pixel coordinate.
	double xValue = c->getNearestXValue(mouseX);
	int xCoor = c->getXCoor(xValue);
	if(xCoor < plotArea->getLeftX())
		return;

	// Draw a vertical track line at the x-position
	d->vline(plotArea->getTopY(), plotArea->getBottomY(), xCoor, 0x888888);

	// Draw a label on the x-axis to show the track line position.
	std::ostringstream xlabel;
	xlabel << "<*font,bgColor=000000*> " << c->xAxis()->getFormattedLabel(xValue, "hh:nn:ss.ff")
		<< " <*/font*>";
	TTFText *t = d->text(xlabel.str().c_str(), "arialbd.ttf", 10);

	// Restrict the x-pixel position of the label to make sure it stays inside the chart image.
	int xLabelPos = max(0, min(xCoor - t->getWidth() / 2, c->getWidth() - t->getWidth()));
	t->draw(xLabelPos, plotArea->getBottomY() + 6, 0xffffff);
	t->destroy();

	// Iterate through all layers to draw the data labels
	for(int i = 0; i < c->getLayerCount(); ++i)
	{
		Layer *layer = c->getLayerByZ(i);

		// The data array index of the x-value
		int xIndex = layer->getXIndexOf(xValue);

		// Iterate through all the data sets in the layer
		for(int j = 0; j < layer->getDataSetCount(); ++j)
		{
			DataSet *dataSet = layer->getDataSetByZ(j);
			const char *dataSetName = dataSet->getDataName();

			// Get the color, name and position of the data label
			int color = dataSet->getDataColor();
			int yCoor = c->getYCoor(dataSet->getPosition(xIndex), dataSet->getUseYAxis());

			// Draw a track dot with a label next to it for visible data points in the plot area
			if((yCoor >= plotArea->getTopY()) && (yCoor <= plotArea->getBottomY()) && (color !=
			   Chart::Transparent) && dataSetName && *dataSetName)
			{
				d->circle(xCoor, yCoor, 4, 4, color, color);

				std::ostringstream label;
				label << "<*font,bgColor=" << std::hex << color << "*> "
					<< c->formatValue(dataSet->getValue(xIndex), "{value|P4}") << " <*font*>";
				t = d->text(label.str().c_str(), "arialbd.ttf", 10);

				// Draw the label on the right side of the dot if the mouse is on the left side the
				// chart, and vice versa. This ensures the label will not go outside the chart image.
				if(xCoor <= (plotArea->getLeftX() + plotArea->getRightX()) / 2)
					t->draw(xCoor + 6, yCoor, 0xffffff, Chart::Left);
				else
					t->draw(xCoor - 6, yCoor, 0xffffff, Chart::Right);

				t->destroy();
			}
		}
	}
}

void CDlgDataChart::updateControls(CChartViewer * viewer, int nIndex)
{
		// Update the start date control to reflect the view port.
	double currentStartDate = viewer->getValueAtViewPort("x", viewer->getViewPortLeft());
	int startYMD = Chart::getChartYMD(currentStartDate);
	int startHMS = (int)fmod(currentStartDate, 86400);
	CTime startDate = CTime(startYMD / 10000, (startYMD % 10000) / 100, startYMD % 100,
							startHMS / 3600, (startHMS % 3600) / 60, startHMS % 60);
	//m_StartDate.SetTime(&startDate);

	// Update the end date control to reflect the view port.
	double currentEndDate = viewer->getValueAtViewPort("x", viewer->getViewPortLeft() +
													   viewer->getViewPortWidth());
	int endYMD = Chart::getChartYMD(currentEndDate);
	int endHMS = (int)fmod(currentEndDate, 86400);
	CTime endDate = CTime(endYMD / 10000, (endYMD % 10000) / 100, endYMD % 100,
						  endHMS / 3600, (endHMS % 3600) / 60, endHMS % 60);
	//m_EndDate.SetTime(&endDate);

	// Update the scroll bar to reflect the view port position and width of the view port.
	//m_HScrollBar[nIndex].EnableWindow(viewer->getViewPortWidth() < 1);
	if(viewer->getViewPortWidth() < 1)
	{
		SCROLLINFO info;
		info.cbSize = sizeof(SCROLLINFO);
		info.fMask = SIF_ALL;
		info.nMin = 0;
		info.nMax = 0x1fffffff;
		info.nPage = (int)ceil(viewer->getViewPortWidth() * (info.nMax - info.nMin));
		info.nPos = (int)(0.5 + viewer->getViewPortLeft() * (info.nMax - info.nMin)) + info.nMin;
		//m_HScrollBar[nIndex].SetScrollInfo(&info);
	}
}

void CDlgDataChart::InitializeLabel()
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

	for(int i = ELabel_TimeFrom; i < ELabel_Count; i++)
	{
		m_Label[i].SetTextColor(WHITE);
		m_Label[i].SetBkColor(CUSTOM_DARK);
		m_Label[i].SetFont(&m_Font);
	}
	m_lf.lfHeight = 25;
	m_lf.lfWidth = 10;
	m_FontTitle.CreateFontIndirect(&m_lf);//정의된 font로 설정 

	m_Label[ELabel_search].SetTextColor(WHITE);
	m_Label[ELabel_search].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_search].SetFont(&m_FontTitle);

	m_Label[ELabel_Time].SetTextColor(WHITE);
	m_Label[ELabel_Time].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Time].SetFont(&m_FontTitle);

	m_Label[ELabel_Condition].SetTextColor(WHITE);
	m_Label[ELabel_Condition].SetBkColor(CUSTOM_DARK);
	m_Label[ELabel_Condition].SetFont(&m_FontTitle);


	for(int i = 0; i < ECheckBox_Count; i++)
	{
		m_btnCheckBox[i].SetFont(&m_Font);
		SetWindowTheme(m_btnCheckBox[i].m_hWnd, _T(""), _T(""));
	}

	m_btnCheckBox[ECheckBox_ResultOK].SetCheck(true);
	m_btnCheckBox[ECheckBox_ResultNG].SetCheck(true);

	for(int i = 0; i < ERadio_Count; i++)
	{
		m_btnRadioBtn[i].SetFont(&m_Font);
		SetWindowTheme(m_btnRadioBtn[i].m_hWnd, _T(""), _T(""));
	}

	/////////////////////////////////////////////////////////

}
void CDlgDataChart::InitializeChart(int nIndex)
{
// 	CRect rect;
// 	GetDlgItem(IDC_STATIC_DATACHART_GRAPH1)->GetWindowRect(rect);
// 	ScreenToClient(rect);
//
// 	m_cChart[EChart1].Create(WS_VISIBLE | WS_CHILD, rect, this);
// 
// 	// customize the control
// 	m_cChart[EChart1].SetRange(1.0, 3000.0, 1);
// 	m_cChart[EChart1].SetYUnits(_T("Y Axis"));
// 	m_cChart[EChart1].SetXUnits(_T("X Axis"));
// 	m_cChart[EChart1].SetBackgroundColor(WHITE); // RGB(8, 6, 6)
// 	m_cChart[EChart1].SetGridColor(RGB(192, 192, 255)); // RGB(192, 192, 255)
// 	m_cChart[EChart1].SetPlotColor(RGB(65, 255, 58));

	drawChart_Projection(nIndex, &m_ChartViewer[EChart_Projection]);
	drawChart_Histogram(nIndex, &m_ChartViewer[EChart_Histogram]);

}

void CDlgDataChart::InitializeDataSheet()
{
	do
	{
		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));
		if(!pHandler)
			return;

		std::vector<SMeasurementKind> vct;
		pHandler->GetMesurementKindData(vct);


		const int nRowsStatistics = 10000 + 1;
		const int nColsStatistics = 60;

// 		const int nRowsStatistics = 100;
// 		const int nColsStatistics = 60;

		m_Sheet.SetRowCount(nRowsStatistics);
		m_Sheet.SetColumnCount(nColsStatistics);
		m_Sheet.SetFixedRowCount();

		m_Sheet.SetRowResize(FALSE);
		m_Sheet.SetColumnResize(FALSE);
		m_Sheet.SetEditable(FALSE);

		int nCount = 0;
		m_Sheet.SetItemText(0, nCount++, _T("No."));

		for(SMeasurementKind sData : vct)
		{
			sDataJudgmentStd sd;
			sd.dblRef =	sData.dblReference;
			sd.dblUSL = sData.dblUSL;
			sd.dblLSL = sData.dblLSL;
			sd.strName = sData.strName;

			m_mapDataLimit[nCount] = sd;
			m_mapDataIndex[sData.strName] = nCount;
			m_Sheet.SetItemText(0, nCount++, sData.strName);
		
		}
		m_Sheet.SetGridLineColor(RGB(60, 60, 60));

		// Column Size
		for(int nCol = 0; nCol < m_Sheet.GetColumnCount(); nCol++)
			m_Sheet.SetColumnWidth(nCol, 80);

		m_Sheet.SetColumnWidth(0, 50);

		for(int nRow = 0; nRow < m_Sheet.GetRowCount(); nRow++)
			m_Sheet.SetRowHeight(nRow, 20);

		for(int nRow = 1; nRow < m_Sheet.GetRowCount(); nRow++)
			for(int nCol = 0; nCol < m_Sheet.GetColumnCount(); nCol++)
			{
				m_Sheet.SetItemBkColour(0, nCol, RGB(250, 250, 250));
				m_Sheet.SetItemBkColour(nRow, nCol, CUSTOM_DARK);
			}

		m_Sheet.Invalidate();

	}
	while(false);
}

void CDlgDataChart::SheetDataReset()
{
	for(int i = 1; i < m_currentIndex+1; i++)
	{
		for(int j = 0; j < 60 + 1; j++)
		{
			m_Sheet.SetItemBkColour(i, j, CUSTOM_DARK);
			m_Sheet.SetItemFgColour(i, j, RGB(250, 250, 250));
			m_Sheet.SetItemText(i, j, _T(""));
		}
	}


}

void CDlgDataChart::drawChart_Projection(int nIndex, CChartViewer * viewer)
{

	XYChart* c = new XYChart(750, 360);
	  
	do
	{

		c->setRoundedFrame();
// Set the plotarea at (50, 30) and of size 500 x 300 pixels, with transparent background and
// border and light grey (0xcccccc) horizontal grid lines
		c->setPlotArea(50, 50, 660, 250, RGB(255, 255, 255), RGB(250, 250, 250), 0xcccccc, 0xcccccc);
		c->addTitle("    Mesurement", "Bold", 12, 0x555555);

		//////////////////////////
			// Add a legend box with horizontal layout above the plot area at (70, 35). Use 12pt Arial font,
		// transparent background and border, and line style legend icon.
		LegendBox* b = c->addLegend(70, 15, false, "Bold", 12);
		b->setBackground(Chart::Transparent, Chart::Transparent);
		b->setLineStyleKey();

		// Set axis label font to 12pt Arial
		c->xAxis()->setLabelStyle("Bold", 12);
		c->yAxis()->setLabelStyle("Bold", 12);

		// Set the x and y axis stems to transparent, and the x-axis tick color to grey (0xaaaaaa)
		c->xAxis()->setColors(Chart::Transparent, Chart::TextColor, Chart::TextColor, 0xaaaaaa);
		c->yAxis()->setColors(Chart::Transparent);

		// Set the major/minor tick lengths for the x-axis to 10 and 0.
		c->xAxis()->setTickLength(15, 0);

		//////////////////////////

		// Add a line chart layer using the given data

		LineLayer* layer = c->addLineLayer();

		c->xAxis()->setWidth(3);
		c->yAxis()->setWidth(3);

		c->xAxis()->setAutoScale(0, 0, 0);
		//c->yAxis()->setAutoScale(0, 0, 0);

		if(m_dlbLSLLimit[0] == Chart::NoValue)
			break;

		double dblScaleOffset = m_dlbULSLimit[0] - m_dlbLSLLimit[0];

		c->yAxis()->setDateScale(m_dlbLSLLimit[0] - dblScaleOffset, m_dlbULSLimit[0] + dblScaleOffset);



		layer->addDataSet(DoubleArray(m_dataSeriesA, m_currentIndex), RGB(255, 0, 0), m_strNameA.GetBuffer());
// 		layer->addDataSet(DoubleArray(m_dataSeriesB, m_currentIndex), RGB(0, 0, 255), m_strNameB.GetBuffer());
// 		layer->addDataSet(DoubleArray(m_dataSeriesC, m_currentIndex), RGB(0, 200, 0), m_strNameC.GetBuffer());

		layer->addDataSet(DoubleArray(m_dlbULSLimit, m_currentIndex), c->dashLineColor(RGB(0, 128, 0), Chart::DashLine), "ULS");
		layer->addDataSet(DoubleArray(m_dlbLSLLimit, m_currentIndex), c->dashLineColor(RGB(0, 0, 128), Chart::DashLine), "LSL");



	}
	while(false);


	delete viewer->getChart();
	viewer->setChart(c);
	//delete c;

}

void CDlgDataChart::SetChartData(int nIndex)
{
	// The current time in millisecond resolution
	//SYSTEMTIME st;
	//GetLocalTime(&st);
	//double now = Chart::chartTime(st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute,
	//							  st.wSecond) + st.wMilliseconds / 1000.0;


	// This is our formula for the random number generator
	do
	{
		//
		// In this demo, we use some formulas to generate new values. In real applications,
		// it may be replaced by some data acquisition code.
		//
		//double p = m_nextDataTime * 4;

		if(!m_vctLoadDatas.size())
			break;

		if(!nIndex)
			break;

		m_currentIndex = 0;

		for(std::vector<SMeasuredData> vct : m_vctLoadDatas)
		{
			if(nIndex > vct.size())
				break;

			SMeasuredData sData = vct[nIndex - 1];

			double dataA = sData.dblData;
//			double dataB = sData.dblData;
//			double dataC = sData.dblData;

			

			// In this demo, if the data arrays are full, the oldest 5% of data are discarded.
			if(m_currentIndex >= m_sampleSize)
			{
				m_currentIndex = m_sampleSize * 95 / 100 - 1;

				for(int i = 0; i < m_currentIndex; ++i)
				{
					int srcIndex = i + m_sampleSize - m_currentIndex;

					m_dataSeriesA[i] = m_dataSeriesA[srcIndex];
// 					m_dataSeriesB[i] = m_dataSeriesB[srcIndex];
// 					m_dataSeriesC[i] = m_dataSeriesC[srcIndex];

					m_dlbULSLimit[i] = m_dlbULSLimit[srcIndex];
					m_dlbLSLLimit[i] = m_dlbLSLLimit[srcIndex];

				}
			}

			// Store the new values in the current index position, and increment the index.

			if(!dataA)
				dataA = m_mapDataLimit[nIndex].dblRef;

			m_dataSeriesA[m_currentIndex] = dataA;
// 			m_dataSeriesB[m_currentIndex] = dataB;
// 			m_dataSeriesC[m_currentIndex] = dataC;

			m_dlbULSLimit[m_currentIndex] = m_mapDataLimit[nIndex].dblRef + m_mapDataLimit[nIndex].dblUSL;
			m_dlbLSLLimit[m_currentIndex] = m_mapDataLimit[nIndex].dblRef - m_mapDataLimit[nIndex].dblLSL;
			++m_currentIndex;

		}

		m_strNameA = (CStringA)m_mapDataLimit[nIndex].strName;
		//m_nextDataTime += DataInterval / 1000.0;
	}
	while(false/*m_nextDataTime < now*/);


	//OnChartUpdateTimer();
	//drawChart(&m_ChartViewer[nIndex], nIndex);
}


void CDlgDataChart::drawChart_Histogram(int nIndex, CChartViewer * viewer)
{
	char buffer[1024];

	//
	// This example demonstrates creating a histogram with a bell curve from raw data. About half of
	// the code is to sort the raw data into slots and to generate the points on the bell curve. The
	// remaining half of the code is the actual charting code.
	//

	// Generate a random guassian distributed data series as the input data for this example.
	RanSeries* r = new RanSeries(66);
	//DoubleArray samples = r->getGaussianSeries(200, 100, 10);

	//
	// Classify the numbers into slots. In this example, the slot width is 5 units.
	//
	double slotSize = 1.6;

	m_dblAHistogram = DoubleArray(m_dataSeriesA, m_currentIndex);

	// Compute the min and max values, and extend them to the slot boundary.
	ArrayMath m = ArrayMath(m_dblAHistogram);
	double minX = (int)(m.minValue() / slotSize) * slotSize;
	double maxX = (int)(m.maxValue() / slotSize) * slotSize + slotSize;

	// We can now determine the number of slots
	int slotCount = (int)((maxX - minX) / slotSize + 0.5);
	double* frequency = new double[slotCount];
	memset(frequency, 0, sizeof(*frequency) * slotCount);

	// Count the data points contained in each slot
	for(int i = 0; i < m_dblAHistogram.len; ++i)
	{
		int slotIndex = (int)((m_dblAHistogram[i] - minX) / slotSize);
		frequency[slotIndex] = frequency[slotIndex] + 1;
	}

	//
	// Compute Normal Distribution Curve
	//

	// The mean and standard deviation of the data
	double mean = m.avg();
	double stdDev = m.stdDev();

	// The normal distribution curve (bell curve) is a standard statistics curve. We need to
	// vertically scale it to make it proportion to the frequency count.
	double scaleFactor = slotSize * m_dblAHistogram.len / stdDev / sqrt(2 * 3.1416);

	// In this example, we plot the bell curve up to 3 standard deviations.
	double stdDevWidth = 6;

	// We generate 4 points per standard deviation to be joined with a spline curve.
	int bellCurveResolution = (int)(stdDevWidth * 4 + 1);
	double* bellCurve = new double[bellCurveResolution];
	for(int i = 0; i < bellCurveResolution; ++i)
	{
		double z = 2 * i * stdDevWidth / (bellCurveResolution - 1) - stdDevWidth;
		bellCurve[i] = exp(-z * z / 2) * scaleFactor;
	}

	//
	// At this stage, we have obtained all data and can plot the chart.
	//

	// Create a XYChart object of size 600 x 360 pixels
	XYChart* c = new XYChart(750, 360);

	// Set the plotarea at (50, 30) and of size 500 x 300 pixels, with transparent background and
	// border and light grey (0xcccccc) horizontal grid lines
	c->setPlotArea(60, 30, 650, 300, Chart::Transparent, -1, Chart::Transparent, 0xcccccc);

	// Display the mean and standard deviation on the chart

	double dblCP = (m_mapDataLimit[nIndex].dblUSL + m_mapDataLimit[nIndex].dblLSL) / (6 * stdDev);

	if(!m_dblAHistogram.len)
	{
		dblCP = 0.f;
	}

	sprintf(buffer, "Mean = %.3f, Std = %.3f, CPK = %.3f", mean, stdDev, dblCP);
	c->addTitle(buffer, "Arial");

	// Set the x and y axis label font to 12pt Arial
	c->xAxis()->setLabelStyle("Arial", 12);
	c->yAxis()->setLabelStyle("Arial", 12);

	// Set the x and y axis stems to transparent, and the x-axis tick color to grey (0x888888)
	c->xAxis()->setColors(Chart::Transparent, Chart::TextColor, Chart::TextColor, 0x888888);
	c->yAxis()->setColors(Chart::Transparent);

	// Draw the bell curve as a spline layer in red (0xdd0000) with 2-pixel line width
	SplineLayer* bellLayer = c->addSplineLayer(DoubleArray(bellCurve, bellCurveResolution), 0xdd0000
	);
	bellLayer->setXData(mean - stdDevWidth * stdDev, mean + stdDevWidth * stdDev);
	bellLayer->setLineWidth(2);

	// Draw the histogram as bars in blue (0x6699bb) with dark blue (0x336688) border
	BarLayer* histogramLayer = c->addBarLayer(DoubleArray(frequency, slotCount), 0x6699bb);
	histogramLayer->setBorderColor(0x336688);
	// The center of the bars span from minX + half_bar_width to maxX - half_bar_width
	histogramLayer->setXData(minX + slotSize / 2.0, maxX - slotSize / 2.0);
	// Configure the bars to touch each other with no gap in between
	histogramLayer->setBarGap(Chart::TouchBar);
	// Use rounded corners for decoration
	histogramLayer->setRoundedCorners();

	// ChartDirector by default will extend the x-axis scale by 0.5 unit to cater for the bar width.
	// It is because a bar plotted at x actually occupies (x +/- half_bar_width), and the bar width
	// is normally 1 for label based x-axis. However, this chart is using a linear x-axis instead of
	// label based. So we disable the automatic extension and add a dummy layer to extend the x-axis
	// scale to cover minX to maxX.
	c->xAxis()->setIndent(false);
	c->addLineLayer()->setXData(minX, maxX);

	// For the automatic y-axis labels, set the minimum spacing to 40 pixels.
	c->yAxis()->setTickDensity(40);

	// Output the chart
	//c->makeChart("histogram.png");

	//free up resources
	delete r;
	delete[] frequency;
	delete[] bellCurve;

// 	if(!viewer->isInMouseMoveEvent())
// 	{
// 		trackLineLabel(c, (0 == viewer->getChart()) ? c->getPlotArea()->getRightX() :
// 					   viewer->getPlotAreaMouseX());
// 	}

	// Set the chart image to the WinChartViewer
	delete viewer->getChart();
	viewer->setChart(c);
	//delete c;

    return;
}

void CDlgDataChart::OnViewPortChanged_Pro()
{
	long nIndex = 0;
// In addition to updating the chart, we may also need to update other controls that
// changes based on the view port.
// 	updateControls(&m_ChartViewer[nIndex], nIndex);
// 
// 	// Update the chart if necessary
// 	if(m_ChartViewer[nIndex].needUpdateChart())
// 		drawChart(&m_ChartViewer[nIndex], nIndex);

}

void CDlgDataChart::OnMouseMovePlotArea_Pro()
{
	long nIndex = 0;
// Get the focus to ensure being able to receive mouse wheel events
//	m_ChartViewer[nIndex].SetFocus();

// 	trackLineLabel((XYChart *)m_ChartViewer[nIndex].getChart(), m_ChartViewer[nIndex].getPlotAreaMouseX());
// 	m_ChartViewer[nIndex].updateDisplay();
}

void CDlgDataChart::OnViewPortChanged_His()
{
	long nIndex = 1;
	// In addition to updating the chart, we may also need to update other controls that
	// changes based on the view port.
	//updateControls(&m_ChartViewer[nIndex], nIndex);

	// Update the chart if necessary
// 	if(m_ChartViewer[nIndex].needUpdateChart())
// 		drawChart_Histogram(&m_ChartViewer[nIndex]);

}

void CDlgDataChart::OnMouseMovePlotArea_His()
{
//	long nIndex = 1;
// Get the focus to ensure being able to receive mouse wheel events
//	m_ChartViewer[nIndex].SetFocus();

// 	trackLineLabel((XYChart *)m_ChartViewer[nIndex].getChart(), m_ChartViewer[nIndex].getPlotAreaMouseX());
// 	m_ChartViewer[nIndex].updateDisplay();
}

BOOL CDlgDataChart::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	do
	{
		if(!pDC)
			break;

		CRect crDlg;
		GetClientRect(crDlg);

		pDC->GetClipBox(crDlg);
		pDC->FillSolidRect(crDlg, CUSTOM_DARK);

	}
	while(false);

	return false;

	return CDialog::OnEraseBkgnd(pDC);
}


void CDlgDataChart::OnBnClickedButtonChartSearchstop()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgDataChart::OnBnClickedButtonChartSearch()
{
	if(m_eConditionResultCheckBox == EResultCheckBox_None)
		return;

	SheetDataReset();
	
	int nIndex = m_ComboBox[ECombo_ChartModel].GetLBTextLen(m_ComboBox[ECombo_ChartModel].GetCurSel());
	CString strModelName;
	m_ComboBox[ECombo_ChartModel].GetLBText(m_ComboBox[ECombo_ChartModel].GetCurSel(), strModelName.GetBuffer(nIndex));

	nIndex = m_ComboBox[ECombo_LotID].GetLBTextLen(m_ComboBox[ECombo_LotID].GetCurSel());
	CString strLotID;
	m_ComboBox[ECombo_LotID].GetLBText(m_ComboBox[ECombo_LotID].GetCurSel(), strLotID.GetBuffer(nIndex));

	nIndex = m_ComboBox[ECombo_Reuslt_CellNo].GetLBTextLen(m_ComboBox[ECombo_Reuslt_CellNo].GetCurSel());
	CString strCellNo;
	m_ComboBox[ECombo_Reuslt_CellNo].GetLBText(m_ComboBox[ECombo_Reuslt_CellNo].GetCurSel(), strCellNo.GetBuffer(nIndex));

	nIndex = m_ComboBox[ECombo_Reuslt_Class].GetLBTextLen(m_ComboBox[ECombo_Reuslt_Class].GetCurSel());

	CString strClass;
	m_ComboBox[ECombo_Reuslt_Class].GetLBText(m_ComboBox[ECombo_Reuslt_Class].GetCurSel(), strClass.GetBuffer(nIndex));

		
	CUtil util;
	CUtilCommFuncFile commFuncFile;
	
	CTime timeFrom;
	((CDateTimeCtrl*)(GetDlgItem(IDC_DATETIMEPICKER_CHART_FROM)))->GetTime(timeFrom);
	CTime timeTo;
	((CDateTimeCtrl*)(GetDlgItem(IDC_DATETIMEPICKER_CHART_TO)))->GetTime(timeTo);


	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(m_eRadioType));
	if(!pHandler)
		return;

	std::vector<std::vector<SMeasuredData>> vctDatas;
	pHandler->SearchDataHistory(m_eRadioType, timeFrom, timeTo, &vctDatas);
	m_vctLoadDatas.clear();

//	m_vctLoadDatas = vctDatas;

	int nCountNo = 1;
	int nRoofCount = 0;
	for(std::vector<SMeasuredData> vct : vctDatas)
	{
		nRoofCount++;
		COLORREF cfBK = CUSTOM_DARK;
		COLORREF cfFG = RGB(250, 250, 250);
		int nCount = 0;
		CString strData;
		strData.Format(_T("%d"), nCountNo);
		m_Sheet.SetItemFgColour(nCountNo, nCount, cfFG);
		m_Sheet.SetItemText(nCountNo, nCount++, strData);

		bool bIsOnlyOK = true;
		for(SMeasuredData sData : vct)
		{
			strData.Format(_T("%.3f"), sData.dblData);

			nCount = m_mapDataIndex[sData.strName];

			if(!nCount)
				continue;;

			bIsOnlyOK &= sData.bResult;

			if(!sData.bResult)
			{
				cfBK = RGB(248, 204, 215);
				cfFG = CUSTOM_DARK;
			}
			else
			{
				cfBK = CUSTOM_DARK;
				cfFG = RGB(250, 250, 250);
			}
	

			m_Sheet.SetItemBkColour(nCountNo, nCount, cfBK);
			m_Sheet.SetItemFgColour(nCountNo, nCount, cfFG);

			m_Sheet.SetItemText(nCountNo, nCount, strData);

		}
		// 선택에 따라, 루프를 카운트하지않고 덮어쓴다.
		switch(m_eConditionResultCheckBox)
		{
		case CDlgDataChart::EResultCheckBox_OK:
			{
				if(bIsOnlyOK)
				{
					nCountNo++;
					m_vctLoadDatas.push_back(vct);
				}
				else
				{
					if(nRoofCount >= vctDatas.size())
					{
						for(int i = 0; i < vctDatas.size() + 1; i++)
						{
							cfBK = CUSTOM_DARK;
							cfFG = RGB(250, 250, 250);
							m_Sheet.SetItemBkColour(nCountNo, i, cfBK);
							m_Sheet.SetItemFgColour(nCountNo, i, cfFG);
							m_Sheet.SetItemText(nCountNo, i, _T(""));
						}
					}
				}
			}
			break;
		case CDlgDataChart::EResultCheckBox_NG:
			{
				if(!bIsOnlyOK)
				{
					nCountNo++;
					m_vctLoadDatas.push_back(vct);
				}
				else
				{
					if(nCountNo >= vctDatas.size())
					{
						for(int i = 0; i < vctDatas.size() + 1; i++)
						{
							cfBK = CUSTOM_DARK;
							cfFG = RGB(250, 250, 250);
							m_Sheet.SetItemBkColour(nCountNo, i, cfBK);
							m_Sheet.SetItemFgColour(nCountNo, i, cfFG);
							m_Sheet.SetItemText(nCountNo, i, _T(""));
						}
					}
				}
			}
			break;
		case CDlgDataChart::EResultCheckBox_Both:
			{
				nCountNo++;
				m_vctLoadDatas.push_back(vct);
			}
			break;
		default:
			break;
		}

	}

	m_Sheet.Invalidate();

	SetChartData(1);

	InitializeChart();
}

void CDlgDataChart::LoadModelToComboBox()
{

	CModelInfo* pModelInfo = nullptr;

	std::vector<CString> vctStrNames;

	for(size_t i = 0; i < CModelManager::GetModelInfoCount(); i++)
	{
		pModelInfo = CModelManager::GetModelInfo(i);

		if(!pModelInfo)
			continue;

		vctStrNames.push_back(pModelInfo->GetModelName());
	}

	m_ComboBox[ECombo_ChartModel].ResetContent();

	for(int i = 0; i < vctStrNames.size(); i++)
		m_ComboBox[ECombo_ChartModel].InsertString(i, vctStrNames[i]);

	m_ComboBox[ECombo_ChartModel].SetCurSel(0);

}

void CDlgDataChart::LoadLotIDToComboBox()
{
	std::vector<CString> vctStr(3);

	vctStr[0] = "LOT ALL";
	vctStr[1] = "LOT 1";
	vctStr[2] = "LOT 2";

	m_ComboBox[ECombo_LotID].ResetContent();
	for(int i = 0; i < vctStr.size(); i++)
		m_ComboBox[ECombo_LotID].InsertString(i, vctStr[i]);

	m_ComboBox[ECombo_LotID].SetCurSel(0);
}

void CDlgDataChart::LoadCellNumToComboBox()
{
	std::vector<CString> vctStr(3);

	vctStr[0] = "Cell All";
	vctStr[1] = "Cell 1";
	vctStr[2] = "Cell 2";

	m_ComboBox[ECombo_Reuslt_CellNo].ResetContent();
	for(int i = 0; i < vctStr.size(); i++)
		m_ComboBox[ECombo_Reuslt_CellNo].InsertString(i, vctStr[i]);

	m_ComboBox[ECombo_Reuslt_CellNo].SetCurSel(0);
}

void CDlgDataChart::LoadClassToComboBox()
{
	std::vector<CString> vctStr(3);

	vctStr[0] = "Class ALL";
	vctStr[1] = "Class 1";
	vctStr[2] = "Class 2";

	m_ComboBox[ECombo_Reuslt_Class].ResetContent();
	for(int i = 0; i < vctStr.size(); i++)
		m_ComboBox[ECombo_Reuslt_Class].InsertString(i, vctStr[i]);

	m_ComboBox[ECombo_Reuslt_Class].SetCurSel(0);
}


void CDlgDataChart::OnBnClickedCheckChartResult1()
{
	int i = 0;
	i += m_btnCheckBox[ECheckBox_ResultOK].GetCheck() ? 1 << 0 : 0;
	i += m_btnCheckBox[ECheckBox_ResultNG].GetCheck() ? 1 << 1 : 0;


	m_eConditionResultCheckBox = (EResultCheckBox)i;

}

void CDlgDataChart::OnBnClickedCheckChartResult2()
{
	int i = 0;
	i += m_btnCheckBox[ECheckBox_ResultOK].GetCheck() ? 1 << 0 : 0;
	i += m_btnCheckBox[ECheckBox_ResultNG].GetCheck() ? 1 << 1 : 0;


	m_eConditionResultCheckBox = (EResultCheckBox)i;

}

void CDlgDataChart::OnSheetDblClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("DblClicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);


}

void CDlgDataChart::OnSheetClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	SetChartData(pItem->iColumn);

	InitializeChart(pItem->iColumn);
	 

}

void CDlgDataChart::OnSheetBeginDrag(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("BeginDrag on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

}

void CDlgDataChart::OnSheetStartSelChange(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;

	CString strMsg;
	strMsg.Format(_T("StartSelChange on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

	SetChartData(pItem->iColumn);

	InitializeChart(pItem->iColumn);
}


void CDlgDataChart::OnBnClickedRadioChartCamera1()
{
	m_eRadioType = ERadio_UpperCam;
	((CButton*)this->GetDlgItem(IDC_RADIO_CHART_CAMERA1))->SetCheck(TRUE);
	((CButton*)this->GetDlgItem(IDC_RADIO_CHART_CAMERA2))->SetCheck(FALSE);

}


void CDlgDataChart::OnBnClickedRadioChartCamera2()
{
	m_eRadioType = ERadio_Lowercam;
	((CButton*)this->GetDlgItem(IDC_RADIO_CHART_CAMERA1))->SetCheck(FALSE);
	((CButton*)this->GetDlgItem(IDC_RADIO_CHART_CAMERA2))->SetCheck(TRUE);

}


void CDlgDataChart::OnBnClickedButtonChartExcel()
{
	CFileDialog dlg(FALSE, _T("csv"), NULL, OFN_OVERWRITEPROMPT, _T("csv Files (*.csv)|*.csv||"));

	if(dlg.DoModal() == IDOK)
	{
		CString filePath = dlg.GetPathName();
		m_Sheet.Save(filePath);
	}
}
