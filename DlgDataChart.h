#pragma once
//#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "Definition.h"
#include "afxdialogex.h"
#include "resource.h"

#include "CommonCls/Util.h"
#include "CommonCls/UtilCommFuncFile.h"
#include "EHBase.h"
//#include "UI/OScopeCtrl.h"
#include "ChartDirectLibrary/ChartViewer.h"
#pragma comment(lib, "UxTheme.lib")

// CRavidDialogView_Melsec 대화 상자


using namespace CDefinition;
class CDlgDataChart : public CDialog
{
	DECLARE_DYNAMIC(CDlgDataChart)

public:
	CDlgDataChart(CWnd* pParent = nullptr);
	virtual ~CDlgDataChart();

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_DATA_CHART };
#endif

	enum ELabel
	{
		ELabel_search = 0,
		ELabel_Time,
		ELabel_Condition,

		ELabel_TimeFrom,
		ELabel_TimeTo,
		ELabel_Model,
		ELabel_LotID,

		ELabel_Camera,
		ELabel_Result,
		ELabel_Stage,

		ELabel_CellNo,
		ELabel_Class,

		ELabel_Count,
	};

	enum ECombo
	{
		ECombo_ChartModel = 0,
		ECombo_LotID,
		ECombo_Reuslt_CellNo,
		ECombo_Reuslt_Class,

		ECombo_Count,
	};

	enum ECheckBox
	{
		ECheckBox_Stage1 = 0,
		ECheckBox_Stage2,
		ECheckBox_Stage3,
		ECheckBox_Stage4,

		ECheckBox_ResultOK,
		ECheckBox_ResultNG,
		ECheckBox_EachResult,

		ECheckBox_Count,
	};

	enum ERadio
	{
		ERadio_UpperCam = 0, 
		ERadio_Lowercam,
		ERadio_Count,
	};



	enum EChart
	{
		EChart_Projection = 0,
		EChart_Histogram,

		EChart_Count,
	};

	
	enum EResultCheckBox
	{
		EResultCheckBox_None = 0,
		EResultCheckBox_OK,
		EResultCheckBox_NG,
		EResultCheckBox_Both,

		EResultCheckBox_Count,
	};

	struct sDataJudgmentStd
	{
		double dblUSL = 0.f;
		double dblLSL = 0.f;
		double dblRef = 0.f;
		CString strName = _T("");
	};


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* pMMI);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);

	afx_msg void OnViewPortChanged_Pro();
	afx_msg void OnMouseMovePlotArea_Pro();

	afx_msg void OnViewPortChanged_His();
	afx_msg void OnMouseMovePlotArea_His();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnBnClickedButtonChartSearchstop();
	afx_msg void OnBnClickedButtonChartSearch();
	afx_msg void OnBnClickedCheckChartResult1();
	afx_msg void OnBnClickedCheckChartResult2();


	afx_msg void OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetBeginDrag(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
private:
	CFont m_FontTitle;
	CFont m_Font;

	std::map<int, sDataJudgmentStd> m_mapDataLimit;
	std::map<CString, int> m_mapDataIndex;

	LOGFONT m_lf;
	CCtrlLabel m_Label[ELabel_Count];
	CButton m_btnCheckBox[ECheckBox_Count];
	CButton m_btnRadioBtn[ERadio_Count];


	CComboBox m_ComboBox[ECombo_Count];


	CRect       m_crWindowSize;
	//CEdit       m_Edit[EEdit_Count];
	CRavidSheet m_Sheet;

	static const long m_lDataSize = 1000;
	//COScopeCtrl m_cChart[EChart_Count];
	CChartViewer m_ChartViewer[EChart_Count];
	DoubleArray m_dblAHistogram;


	// The number of samples per data series used in this demo
	static const int m_sampleSize = 10000;


	// Use A B C
	double m_dataSeriesA[m_sampleSize];	// The values for the data series A
	double m_dataSeriesB[m_sampleSize];	// The values for the data series B
	double m_dataSeriesC[m_sampleSize];	// The values for the data series C

	CStringA m_strNameA;
	CStringA m_strNameB;
	CStringA m_strNameC;

	//  Limit 
	double m_dlbULSLimit[m_sampleSize];
	double m_dlbLSLLimit[m_sampleSize];
	// The index of the array position to which new data values are added.
	int m_currentIndex = 0;

	std::vector<std::vector<SMeasuredData>> m_vctLoadDatas;

	void trackLineLabel(XYChart *c, int mouseX);

	// Update controls when the view port changed
	void updateControls(CChartViewer *viewer, int nIndex);

	void InitializeLabel();

//	ECameraNum m_eConditionCamType = ECameraNum_Upper;
	EResultCheckBox m_eConditionResultCheckBox = EResultCheckBox_Both;
	int m_eRadioType = ERadio_UpperCam;

public:
	void InitializeChart(int nIndex = 1);
	void InitializeDataSheet();
	void SheetDataReset();

	void drawChart_Projection(int nIndex, CChartViewer * viewer);
	void SetChartData(int nIndex);


	void drawChart_Histogram(int nIndex, CChartViewer * viewer);


	void LoadModelToComboBox();
	void LoadLotIDToComboBox();
	void LoadCellNumToComboBox();
	void LoadClassToComboBox();


	CString GetDataFormByDateTimer();
	CString GetDataToByDateTimer();


// 	ECameraNum GetConditionCameraType(){return m_eConditionCamType;}
// 	EResultCheckBox GetConditionResultCheckBoxType(){return m_eConditionResultCheckBox;}

	//afx_msg void RadioFlg(UINT ID);


	afx_msg void OnBnClickedRadioChartCamera1();
	afx_msg void OnBnClickedRadioChartCamera2();
	afx_msg void OnBnClickedButtonChartExcel();
};
