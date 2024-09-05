#pragma once

#include "Definition.h"
#include "UI/CtrlButtonST.h"
#include "UI/CtrlGradientButton.h"
#include "UI/CtrlLabel.h"

#include "TabCtrlCustom.h"

#include "resource.h"
#include "DlgViewHistory.h"
#include "DlgViewDefectMap.h"
#include "MainPageTotalSheetData.h"

#include "Definition.h"

using namespace CDefinition;
class CFormViewMain : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewMain)

protected:
	CFormViewMain();           // protected constructor used by dynamic creation
	virtual ~CFormViewMain();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_MAIN };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	virtual void OnInitialUpdate();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();


public:

	enum EButton
	{
		EButton_Reset = 0,
		EButton_Count,
	};
	enum ELabel
	{
		ELabel_Title_MachineMonitoring,
		ELabel_Title_Measurement,
		ELabel_Title_Total,

		ELabel_Count,


	};
	enum ESignal
	{
		ESignal_Temp1 = 0,
		ESignal_Count,
	};

	enum EList
	{
		EList_Temp1 = 0,
		EList_Count,
	};

	enum ELanguage
	{
		ELanguage_English = 0,
		ELanguage_Count,
	};

	enum ETabPage
	{
		ETabPage_Upper = 0,
		ETabPage_Lower,
		ETabPage_UpperNG,
		ETabPage_LowerNG,


		ETabPage_Count,
	};

	enum ESheetType
	{
		ESheetType_MachineMonitoring,
		ESheetType_Measurement,

		ESheetType_Count,
	};

private:
	CFont m_FontTitle;
	CFont m_Font;
	CFont m_FontTab;
	LOGFONT m_lf;
	CCtrlGradientButton m_Button[EButton_Count];
	CCtrlLabel m_Label[ELabel_Count];

	CListCtrl m_List[EList_Count];
	bool m_bSignal[ESignal_Count];

	CRavidSheet	m_Sheet[ESheetType_Count];
 	CTabCtrlCustom m_tccPage;
//	CTabCtrl m_tcPage;

	CDlgViewHistory* m_pDlgHistory = nullptr; // 이전 검사 결과 이력을 조회 및 재검사 용도의 Dialog
	CDlgViewDefectMap* m_pDlgDefectmap = nullptr;

	CMainPageTotalSheetData* m_pPageDataSheet[ETabPage_Count] = { nullptr, };


	long m_nTotalCount = 0;
	long m_nOKCount = 0;

	long m_nMeasurementNG = 0;
	long m_nDefectNG = 0;

	std::map<CString, int> m_mapStringToIndex;

public:
	CMainPageTotalSheetData* GetPageMarkROI(ETabPage ePage) { return m_pPageDataSheet[ePage]; }

	void InitializeLabel();
	void InitializeTabCtrl();

	void InitializeSheetMeasurement();
	void InitializeSheetMachineMonitor();

	void SettingMeasurementSheet(bool bAllReset = true);
	void SettingMeasurementSheet(std::vector<SMeasuredData> vct);

	void SettingMachineMonitorSheet(sFormMachineMonitoring sData, bool bReset = false);
	void SettingTotalSheet(ETabPage ePage,const SCellTrackerData& sCellData,const std::vector<SMeasuredData>& vct, CTime tm, bool bDfectNG = false);

	long GetProductTotalCount(){return m_nTotalCount;}
	long GetProductOKCount() { return m_nOKCount; }
	long GetProductMeasurementNGCount(){return m_nMeasurementNG;}
	long GetProductDefectNGCount() { return m_nDefectNG; }

	// Dialog
	void CreateCustomDialog();
	void CreatePageDataSheet();
	void ReleaseCustomDialog();
	void ReleasePageDataSheet();


	afx_msg void OnTcnSelchangeTabMainMonitoring(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnBnClickedButtonMain1();
	afx_msg void OnBnClickedButtonMain2();
	afx_msg void OnBnClickedButtonCellTrackerIpConfig();
};

