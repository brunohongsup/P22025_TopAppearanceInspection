#pragma once
#include "P22025_TopEngBatteryAppearanceInspection.h"
//#include "resource.h"
#include "Definition.h"
#include "afxdialogex.h"


#include "ChartDirectLibrary/ChartViewer.h"

#include <map>


#include <deque>

// CDlgHistoryChart 대화 상자

using namespace CDefinition;
class CDlgHistoryChart : public CDialog
{
	DECLARE_DYNAMIC(CDlgHistoryChart)

public:
	CDlgHistoryChart(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgHistoryChart();

	enum eChartType
	{
		eChartType_A = 0,
		eChartType_B,
		eChartType_C,
		eChartType_D,
		eChartType_E,
		eChartType_F,
		eChartType_G,
		eChartType_H,

		eChartType_Count = 8,
	};

	struct sChartInfo
	{
		int nChartSizeX = 0;
		int nChartSizeY = 0;

		CString strChartTitleTop = _T("");
		CString strChartTitleY = _T(""); 

	};


// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_HISTORY_CHART };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.


private:

	sChartInfo m_ChartInfo;
	CChartViewer m_ChartViewer[eChartType_Count];

	DECLARE_MESSAGE_MAP()

	// The number of samples per data series used in this demo
	static const int sampleSize = 100;


	// Use A B C
	double m_dataSeriesA[eChartType_Count][sampleSize];	// The values for the data series A
	double m_dataSeriesB[eChartType_Count][sampleSize];	// The values for the data series B
	double m_dataSeriesC[eChartType_Count][sampleSize];	// The values for the data series C

	CStringA m_strNameA[eChartType_Count];
	CStringA m_strNameB[eChartType_Count];
	CStringA m_strNameC[eChartType_Count];

	//  Limit 
	double m_dlbULSLimit[eChartType_Count][sampleSize];
	double m_dlbLSLLimit[eChartType_Count][sampleSize];
	// The index of the array position to which new data values are added.
	int m_currentIndex[eChartType_Count] = {0,};

	// Used by the random number generator to generate real time data.
	double m_nextDataTime;

	RanSeries *m_ranSeries;
	DoubleArray m_dblAtimeStamps;
	DoubleArray m_dblAdataSeriesA;
	DoubleArray m_dblAdataSeriesB;
	DoubleArray m_dblAdataSeriesC;


	void drawChart_Projection(CChartViewer * viewer, int nIndex = 0);
	void updateControls(CChartViewer *viewer, int nIndex);

public:

	// Draw chart
	void drawChart();


	virtual BOOL OnInitDialog();
	HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

	void SetData(int nIndex, std::vector<SMeasuredData> sData, double dblUSL = Chart::NoValue, double dblLSL = Chart::NoValue);


	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);



	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();


	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};
