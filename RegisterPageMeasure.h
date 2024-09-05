#pragma once

#include "afxdialogex.h"
#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "EHBase.h"
#include "DlgMeasurementParameter.h"
#include "FormViewRegister.h"


// CRegisterPageMarkROI 대화 상자
using namespace Ravid::Framework;
using namespace CDefinition;

class CDlgMeasurementParameter;

class CRegisterPageMeasure : public CDialog
{
	DECLARE_DYNAMIC(CRegisterPageMeasure)

public:
	CRegisterPageMeasure(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CRegisterPageMeasure();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_REGISTER_PAGE_MEASURE };
#endif

public:
	enum EBtn
	{
		EBtn_Add = 0,
		EBtn_Delete,
		EBtn_Edit,
		EBtn_Datum,
		EBtn_MeasureAll,
		EBtn_Measure,
		EBtn_ShowMeasure,
		EBtn_LoadFromExcel,
		EBtn_SaveToExcel,

		EBtn_Count,
	};

	enum EStatic
	{
		EStatic_Measure = 0,
		EStatic_Result,

		EStatic_Count,
	};

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
	HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	virtual BOOL OnInitDialog();

public:

	void ShowDlgParam(long nIndex, CString strName);
	void SettingParam(SMeasurementKind sData);
	void SettingROIList(std::vector<SMeasurementROI> vct);

	void UpdateListBox();

private:
	CDlgMeasurementParameter* m_pDlgMeasurement;

	CMFCButton m_btn[EBtn_Count];
	CStatic m_static[EStatic_Count];

	CListBox m_ListBox;

	CRavidSheet m_SheetResult;
	CFont		m_fontStatic;
	CFont		m_fontBtn;
	LOGFONT		m_lf;
public:
	afx_msg void OnBnClickedBtnRegisterPageAdd();
	afx_msg void OnBnClickedBtnRegisterPageDelete();
	afx_msg void OnBnClickedBtnRegisterPageEdit();
	afx_msg void OnLbnDblclkListRegisterPageMeasurement();
	afx_msg void OnLbnSelchangeListRegisterPageMeasurement();

};
