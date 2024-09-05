// #pragma once
// class CFormViewBotMenu
// {
// };

#pragma once

#include "Definition.h"
#include "UI/CtrlButtonST.h"
#include "UI/CtrlGradientButton.h"
#include "UI/CtrlLabel.h"
#include "resource.h"
#include "PictureEx.h"
#include "DlgHistoryChart.h"
#include "DlgDataChart.h"

#pragma comment(lib,"ExtCtrls.lib") 



using namespace CDefinition;

class CDlgHistoryChart;
class CFormViewBotMenu : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewBotMenu)

protected:
	CFormViewBotMenu();           // protected constructor used by dynamic creation
	virtual ~CFormViewBotMenu();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW_BOTMENU };
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


private:

	enum EButton
	{
		EButton_History = 0,
		EButton_Chart,
		EButton_Model,
		EButton_Register,
		EButton_Camera,
		EButton_Comm,
		EButton_Options,

		EButton_Count,
	};
	enum ELabel
	{
		ELabel_CPU_Title = 0,
		ELabel_RAM_Title,
		ELabel_HDD_Title, // D Drive
		ELabel_CPU_Percentage,
		ELabel_RAM_Percentage,
		ELabel_HDD_Percentage,

		ELabel_DateTime,
		ELabel_RunStatus,

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

	SdefaultModelParam * m_pModelParam;

	CFont m_FontCPU;
	CFont m_Font;
	LOGFONT m_lf;
	/*CCtrlGradientButton*/CCtrlButtonST m_Button[EButton_Count];
// 	CBitmapButton m_bmpButton[EButton_Count];
	CCtrlLabel m_Label[ELabel_Count];
	CListCtrl m_List[EList_Count];
	bool m_bSignal[ESignal_Count];

	// System Status
	bool m_bIsCPUUsageFirstRun = false;
	FILETIME m_ftPrevSysKernel;
	FILETIME m_ftPrevSysUser;
	FILETIME m_ftPrevSysIdle;

		
	CPictureEx m_picRun;
	bool bTimerFlg = false;
	CToolTipCtrl m_tip_ctrl;
	
	CDlgHistoryChart* m_pDlgHistoryChart = nullptr; 
	CDlgDataChart* m_pDlgDataChart = nullptr;

	std::map<CString, int> m_mapStringToIndex;

public:
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }

	void InitData();

	// Initialize
	void InitializeButton();
	void InitializeLabel();
	// Time
	void SetDateTime();

	// Chart
	void SetHistoryChart(std::vector<SMeasuredData> vctData, std::vector<SMeasurementKind> vctKind);
	void InitHistoryChart();
	void InitDataChart();

	// System Status
	void SetSystemStatus();
	double GetFreeSpaceOfDrive(CString strDisk);
	double GetCPUUsage();
	bool IsCPUUsageFirstRun() { return m_bIsCPUUsageFirstRun; }
	ULONGLONG	GetSubtractTimes(const FILETIME& ftSys, const FILETIME& ftPre);
	afx_msg void OnBnClickedButtonBotmenuModel();
	afx_msg void OnBnClickedButtonBotmenuRegister();
	afx_msg void OnBnClickedButtonBotmenuCamera();
	afx_msg void OnBnClickedButtonBotmenuComm();
	afx_msg void OnBnClickedButtonBotmenuOptions();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButtonBotmenuHistory();
	afx_msg void OnBnClickedButtonBotmenuChart();
};

