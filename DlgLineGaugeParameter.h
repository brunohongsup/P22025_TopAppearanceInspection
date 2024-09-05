#pragma once

#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "Definition.h"
#include "afxdialogex.h"
#include "RegisterPageMarkROI.h"
#include "ImageViewTeaching.h"

#include "UI/CtrlLabel.h"

#include "EHBase.h"

// CDlgLineGaugeParameter 대화 상자

using namespace CDefinition;
class CDlgLineGaugeParameter : public CDialog
{
	DECLARE_DYNAMIC(CDlgLineGaugeParameter)

public:
	CDlgLineGaugeParameter(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgLineGaugeParameter();

	enum ESheetContent
	{
		ESheetContent_TransitionChoice = 1,
		ESheetContent_TransitionType,
		ESheetContent_FindLineDir,
		ESheetContent_Smoothing,
		ESheetContent_Threshold,
		ESheetContent_Thicknes,
		ESheetContent_MinimumAmplitude,
		ESheetContent_SamplingStep,
		ESheetContent_NumOfPass,
		ESheetContent_OutLiersThreshold,

		ESheetContent_Count,
	};



// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_LINEGAUGE_PARAMETER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetRClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetBeginDrag(NMHDR *pNotifyStruct, LRESULT* pResult);

public:
	virtual BOOL OnInitDialog();
	HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	void OnOpenDialog(int nNum);

	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }
	void SettingDirectionButton(int nNum);
// 
// 	int GetSelectCamera() { return m_nSelectCamera; }
// 	void SetSelectCamera(int nCameraNum) { m_nSelectCamera = nCameraNum; }

	bool m_bAnodeMode = false;
	void SetAnodeMode(bool bAnode) { m_bAnodeMode = bAnode; }
	bool GetAnodeMode() { return m_bAnodeMode; }
private:
	
// 	int m_nSelectModelNum;
// 	int m_nSelectCamera;
	int m_nPolarity;
	int m_nSidePolarity; //  High or Low 
	bool m_bSide = false;
	CRavidSheet m_Sheet;

	SdefaultModelParam* m_pModelParam;

	CCtrlLabel m_sSTATIC;

	CEdit m_EditName;
	CButton m_CheckUseRavid;

	CButton m_CheckBox[eColorImageType_Count];
	CFont		m_fontStatic;
	CFont		m_fontSheet;
	LOGFONT		m_lf;
	
	long m_nSelectROIIndex = 0;
	bool m_bCheckRavidUse = false;

	bool m_bCheckBox[eColorImageType_Count] = {false, false, false};


	sCellAlignData m_sAlignData;

public:

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnTimer(UINT_PTR nIDEvent);

	bool InitSheet();

	void SetAlignData(sCellAlignData sData) {m_sAlignData = sData;}

	void DisplayDataToSheet(SMeasurementROI sData);
	sFindEdgeLine GetDisplayedDataOnSheet();

	void DisplayROINameToEditBox(long nIndex, CString strName);
	void ApplyAdjustedData();


	afx_msg void OnBnClickedButtonLgpSave();
	afx_msg void OnBnClickedButtonLgpClose();
	afx_msg void OnClose();
	afx_msg void OnBnClickedCheckLinegaugeType();
	afx_msg void OnBnClickedCheckLinegaugeColor1();
	afx_msg void OnBnClickedCheckLinegaugeColor2();
	afx_msg void OnBnClickedCheckLinegaugeColor3();
};
