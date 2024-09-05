#pragma once

#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "afxdialogex.h"
#include "EHBase.h"
#include "FormViewRegister.h"
#include "RegisterPageMeasure.h"

// CDlgEditROI 대화 상자

using namespace CDefinition;
class CDlgMeasurementParameter : public CDialog
{
	DECLARE_DYNAMIC(CDlgMeasurementParameter)

public:
	CDlgMeasurementParameter(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgMeasurementParameter();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_MEASUREMENT_PARAMETER };
#endif

	enum eSheetType
	{
		eSheetType_TypeInfo,
		eSheetType_ParamInfo,
		eSheetType_Count,
	};

	enum eListBoxType
	{
		eListBoxType_SelectedROI1,
		eListBoxType_SelectedROI2,
		eListBoxType_SelectedROI3,
		eListBoxType_AllROI,

		eListBoxType_Count,
	};

	enum eSheetParamContect
	{
		eSheetParamContect_Reference = 0,
		eSheetParamContect_USL,
		eSheetParamContect_LSL,
		eSheetParamContect_Offset,
		eSheetParamContect_Scale,

		eSheetParamContect_Count,
	};
	

private:
	CRavidSheet m_Sheet[eSheetType_Count];
	CFont		m_fontStatic;
	CFont		m_fontSheet;
	LOGFONT		m_lf;

	CButton m_CheckMeasurement;
	CButton m_CheckByPass;

	CListBox m_ListBox[eListBoxType_Count];
	std::vector<SMeasurementROI> m_vctListBox[eListBoxType_Count];

	CEdit m_EditName;
	bool m_bMeasurementType[EMeasurementKindType_Count] = {false,};

	long m_nSelectIndex = 0;
	
	SMeasurementKind m_sData;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	afx_msg void OnSheetDblClick_Type(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick_Type(NMHDR *pNotifyStruct, LRESULT* pResult);

	afx_msg void OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetRClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetBeginDrag(NMHDR *pNotifyStruct, LRESULT* pResult);
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	virtual BOOL DestroyWindow();
	afx_msg void OnTimer(UINT_PTR nIDEvent);


	long GetCurrentDlgSelectIndex(){ return m_nSelectIndex; }
	
	bool InitSheetTypeInfo();
	bool InitSheetParamInfo();

	void DisplayDataToSheetAndListBox(SMeasurementKind sData);
	void DisplayROIAllDataToListBox(std::vector<SMeasurementROI> vctData);

	void DisplayMeasurementKindToEditBox(long nIndex, CString strName);

	void AddListBoxString(eListBoxType eType, SMeasurementROI sData);
	void DeleteListBoxString(eListBoxType eType, int nIndex);

	void ApplyAdjustedData();

	void ShowMeasurement();

	afx_msg void OnBnClickedButtonMeasurementAdd1();
	afx_msg void OnBnClickedButtonMeasurementMinus1();
	afx_msg void OnBnClickedButtonMeasurementAdd2();
	afx_msg void OnBnClickedButtonMeasurementMinus2();
	afx_msg void OnBnClickedButtonLgpSave();
	afx_msg void OnBnClickedButtonLgpClose();
	afx_msg void OnBnClickedCheckMeasuement1();
	afx_msg void OnBnClickedCheckMeasuement2();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
