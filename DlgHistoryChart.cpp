// DlgHistoryChart.cpp: 구현 파일
//


#include "stdafx.h"
#include "DlgHistoryChart.h"
#include <stdlib.h>


#include <random>
//https://www.advsofteng.com/doc/cdcpp.htm#multiline2.htm

// CDlgHistoryChart 대화 상자

static const int DataRateTimer = 1;
static const int ChartUpdateTimer = 2;
static const int DataInterval = 400;



IMPLEMENT_DYNAMIC(CDlgHistoryChart, CDialog)

CDlgHistoryChart::CDlgHistoryChart(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_HISTORY_CHART, pParent)
{

}

CDlgHistoryChart::~CDlgHistoryChart()
{
//	delete m_ranSeries;
	for(int i = 0; i < _countof(m_ChartViewer); i++)
		delete m_ChartViewer[i].getChart();
}

void CDlgHistoryChart::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	int nIndex = 0;
	DDX_Control(pDX, IDC_STATIC_GRAPH1, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH2, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH3, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH4, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH5, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH6, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH7, m_ChartViewer[nIndex++]);
	DDX_Control(pDX, IDC_STATIC_GRAPH8, m_ChartViewer[nIndex++]);


}


BEGIN_MESSAGE_MAP(CDlgHistoryChart, CDialog)
	//ON_WM_PAINT()
	//ON_WM_QUERYDRAGICON()
	//ON_WM_DESTROY()

// 	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_STARTDATE, OnStartDateChanged)
// 	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_ENDDATE, OnEndDateChanged)

// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH1, OnViewPortChanged1)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH2, OnViewPortChanged2)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH3, OnViewPortChanged3)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH4, OnViewPortChanged4)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH5, OnViewPortChanged5)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH6, OnViewPortChanged6)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH7, OnViewPortChanged7)
// 	ON_CONTROL(CVN_ViewPortChanged, IDC_STATIC_GRAPH8, OnViewPortChanged8)
// 
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH1, OnMouseMovePlotArea1)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH2, OnMouseMovePlotArea2)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH3, OnMouseMovePlotArea3)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH4, OnMouseMovePlotArea4)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH5, OnMouseMovePlotArea5)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH6, OnMouseMovePlotArea6)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH7, OnMouseMovePlotArea7)
// 	ON_CONTROL(CVN_MouseMovePlotArea, IDC_STATIC_GRAPH8, OnMouseMovePlotArea8)

	//ON_WM_HSCROLL()
	//ON_WM_MOUSEWHEEL()
	ON_WM_TIMER()
	ON_WM_DESTROY()
	//ON_WM_ERASEBKGND()
END_MESSAGE_MAP()

BOOL CDlgHistoryChart::OnInitDialog()
{
	CDialog::OnInitDialog();

	Chart::setLicenseCode("RDST-26MW-7CRP-QFFS-030D-15EA");



	for(int i = 0; i < eChartType_Count; ++i)
	{
		for(int j = 0; j < sampleSize; ++j)
		{
			m_dataSeriesA[i][j] = m_dataSeriesB[i][j] = m_dataSeriesC[i][j] = m_dlbULSLimit[i][j] = m_dlbLSLLimit[i][j] = Chart::NoValue;
		}

		m_currentIndex[i] = 0;

	}

	// 초기값을 수정하면, 이전 데이터 부터 확인 가능..

	SYSTEMTIME st;
	GetLocalTime(&st);
	m_nextDataTime = Chart::chartTime(st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute,
									  st.wSecond);




	// Test.
	/*
	std::random_device rd;
// random_device 를 통해 난수 생성 엔진을 초기화 한다.
	std::mt19937 gen(rd());
	// 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
	std::uniform_int_distribution<int> dis(29, 32);
	for(int i = 0; i < m_lDataSize; i++)
	{
		m_dblData[i] = dis(gen) / 10.f;
		m_dblData2[i] = dis(gen) / 10.f;

		m_dlbULSLimit[i] = 3.9;
		m_dlbLSLLimit[i] = 2.1;
	}
	*/

		
	drawChart(); 
	


	return TRUE;  // return TRUE unless you set the focus to a control
}

HBRUSH CDlgHistoryChart::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
	switch(nCtlColor)
	{
	case CTLCOLOR_STATIC:
		{
			pDC->SetTextColor(BLACK);
			pDC->SetBkColor(BASE_COLOR);
			return (HBRUSH)GetStockObject(NULL_BRUSH);
		}
		break;
	case CTLCOLOR_DLG:
		{
			pDC->SetBkColor(RGB(40, 40, 40));
			return (HBRUSH)GetStockObject(NULL_BRUSH);
		}
		break;
	}
	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
}


void CDlgHistoryChart::drawChart()
{
	for(int i = 0; i < _countof(m_ChartViewer); i++)
		drawChart_Projection(&m_ChartViewer[i], i);

}

void CDlgHistoryChart::drawChart_Projection(CChartViewer * viewer, int nIndex)
{

	XYChart* c = new XYChart(750, 190);

	do 
	{

		c->setRoundedFrame();
// Set the plotarea at (50, 30) and of size 500 x 300 pixels, with transparent background and
// border and light grey (0xcccccc) horizontal grid lines
		c->setPlotArea(50, 50, 660, 100, RGB(255, 255, 255), RGB(250, 250, 250), 0xcccccc, 0xcccccc);
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

		if(m_dlbLSLLimit[nIndex][0] == Chart::NoValue)
			break;

		double dblScaleOffset = m_dlbULSLimit[nIndex][0] - m_dlbLSLLimit[nIndex][0];

		c->yAxis()->setDateScale(m_dlbLSLLimit[nIndex][0] - dblScaleOffset, m_dlbULSLimit[nIndex][0] + dblScaleOffset);


		layer->addDataSet(DoubleArray(m_dataSeriesA[nIndex], m_currentIndex[nIndex]), RGB(255, 0, 0), m_strNameA[nIndex].GetBuffer());
		layer->addDataSet(DoubleArray(m_dataSeriesB[nIndex], m_currentIndex[nIndex]), RGB(0, 0, 255), m_strNameB[nIndex].GetBuffer());
		layer->addDataSet(DoubleArray(m_dataSeriesC[nIndex], m_currentIndex[nIndex]), RGB(0, 200, 0), m_strNameC[nIndex].GetBuffer());

		layer->addDataSet(DoubleArray(m_dlbULSLimit[nIndex], m_currentIndex[nIndex]), c->dashLineColor(RGB(0, 128, 0), Chart::DashLine), "ULS");
		layer->addDataSet(DoubleArray(m_dlbLSLLimit[nIndex], m_currentIndex[nIndex]), c->dashLineColor(RGB(0, 0, 128), Chart::DashLine), "LSL");



	} while (false);


	delete viewer->getChart();
	viewer->setChart(c);
	//delete c;

}

void CDlgHistoryChart::updateControls(CChartViewer * viewer, int nIndex)
{

}

void CDlgHistoryChart::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

}

BOOL CDlgHistoryChart::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	return FALSE;
}


void CDlgHistoryChart::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CDialog::OnTimer(nIDEvent);
}

void CDlgHistoryChart::OnDestroy()
{
	CDialog::OnDestroy();
	
	return;

	KillTimer(DataRateTimer);
	KillTimer(ChartUpdateTimer);
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


void CDlgHistoryChart::SetData(int nIndex, std::vector<SMeasuredData> vctMeasured, double dblUSL, double dblLSL)
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

		if(vctMeasured.size() < 3)
			break;

		double dataA = vctMeasured[0].dblData;
		double dataB = vctMeasured[1].dblData;
		double dataC = vctMeasured[2].dblData;

		m_strNameA[nIndex] = (CStringA)vctMeasured[0].strName;
		m_strNameB[nIndex] = (CStringA)vctMeasured[1].strName;
		m_strNameC[nIndex] = (CStringA)vctMeasured[2].strName;

		// In this demo, if the data arrays are full, the oldest 5% of data are discarded.
		if(m_currentIndex[nIndex] >= sampleSize)
		{
			m_currentIndex[nIndex] = sampleSize * 95 / 100 - 1;

			for(int i = 0; i < m_currentIndex[nIndex]; ++i)
			{
				int srcIndex = i + sampleSize - m_currentIndex[nIndex];

				m_dataSeriesA[nIndex][i] = m_dataSeriesA[nIndex][srcIndex];
				m_dataSeriesB[nIndex][i] = m_dataSeriesB[nIndex][srcIndex];
				m_dataSeriesC[nIndex][i] = m_dataSeriesC[nIndex][srcIndex];

				m_dlbULSLimit[nIndex][i] = m_dlbULSLimit[nIndex][srcIndex];		
				m_dlbLSLLimit[nIndex][i] = m_dlbLSLLimit[nIndex][srcIndex];

			}
		}

		// Store the new values in the current index position, and increment the index.

		m_dataSeriesA[nIndex][m_currentIndex[nIndex]] = dataA;
		m_dataSeriesB[nIndex][m_currentIndex[nIndex]] = dataB;
		m_dataSeriesC[nIndex][m_currentIndex[nIndex]] = dataC;

		m_dlbULSLimit[nIndex][m_currentIndex[nIndex]] = dblUSL;
		m_dlbLSLLimit[nIndex][m_currentIndex[nIndex]] = dblLSL;
		++m_currentIndex[nIndex];

		//m_nextDataTime += DataInterval / 1000.0;
	}
	while(false/*m_nextDataTime < now*/);


	//OnChartUpdateTimer();
	//drawChart(&m_ChartViewer[nIndex], nIndex);
}


BOOL CDlgHistoryChart::OnEraseBkgnd(CDC* pDC)
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
