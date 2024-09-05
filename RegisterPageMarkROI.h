#pragma once


#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "Definition.h"

#include "EHBase.h"
#include "EventHandlerMain.h"
#include "FormViewRegister.h"
#include "DlgLineGaugeParameter.h"
//#include "DlgAddROINaming.h"
#include "DlgEditROI.h"

// CRegisterPageMarkROI 대화 상자
using namespace Ravid::Framework;
using namespace CDefinition;

class CDlgEditROI;
class CDlgLineGaugeParameter;
class CDlgAddROINaming;

class CRegisterPageMarkROI : public CDialog
{
	DECLARE_DYNAMIC(CRegisterPageMarkROI)

public:
	CRegisterPageMarkROI(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CRegisterPageMarkROI();

	enum EBtn
	{
		EBtn_Add = 0,
		EBtn_Delete,
		EBtn_Edit,
		EBtn_FindTest,
		EBtn_Up,
		EBtn_Down,
		EBtn_Left,
		EBtn_Right,
		EBtn_Area,
		EBtn_Select,
		EBtn_Reg,
		EBtn_ModifyArea,
		EBtn_Move,
		EBtn_Size,
		EBtn_LightSave,
		EBtn_LightSave2,


		EBtn_Count,
	};

	enum EStatic
	{
		EStatic_MarkArea = 0,
		EStatic_Register,
		EStatic_Light,
		EStatic_Side1,
		EStatic_Side2,

		EStatic_Count,
	};

	enum ECombo
	{
		ECombo_Side1 = 0,
		ECombo_Side2,

		ECombo_Count,
	};

	enum ESlider
	{
		ESlider_Side1 = 0,
		ESlider_Side2,

		ESlider_Count,
	};

	enum EEdit
	{
		EEdit_Side1 = 0,
		EEdit_Side2,

		EEdit_Count
	};

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_REGISTER_PAGE_MARKROI };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

	void UpdateListBox();
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }
	void OnOpenModel();



	void ShowDlgParam(long nIndex, CString strName);
	void SettingParam(SMeasurementROI sData);

	void LoadLightValueData(int nCh);

private:

	SdefaultModelParam* m_pModelParam;
	CDlgEditROI* m_pDlgEdit;
	CDlgLineGaugeParameter* m_pDlgLineGaugeParam;
	//CDlgAddROINaming* m_pDlgROINaming;
	bool m_bMove = false; // true = Move , False = Size
	bool m_bFront = false; //

	CFont		m_fontStatic;
	CFont		m_fontBtn;
	LOGFONT		m_lf;

	CStatic m_static[EStatic_Count];
	CMFCButton m_btn[EBtn_Count];
	CComboBox m_Combo[ECombo_Count];
	CSliderCtrl m_Slider[ESlider_Count];

	CListBox m_ListBox;
	CEdit m_edit[EEdit_Count];
	
public:
	afx_msg void OnBnClickedBtnRegisterPageAdd();
	afx_msg void OnBnClickedBtnRegisterPageDelete();
	afx_msg void OnBnClickedBtnRegisterPageEdit();
	afx_msg void OnBnClickedBtnRegisterPageMove();
	afx_msg void OnBnClickedBtnRegisterPageSize();
	afx_msg void OnBnClickedBtnRegisterPageLeft();
	afx_msg void OnBnClickedBtnRegisterPageUp();
	afx_msg void OnBnClickedBtnRegisterPageRight();
	afx_msg void OnBnClickedBtnRegisterPageDown();

	afx_msg void OnLbnDblclkListRegisterPageMarkArea();//
	afx_msg void OnLbnSelchangeListRegisterPageMarkArea();

	afx_msg void OnBnClickedBtnRegisterPageArea();
	afx_msg void OnBnClickedBtnRegisterPageFindtest();
	afx_msg void OnBnClickedBtnRegisterPageSelect();
	afx_msg void OnBnClickedBtnRegisterPageReg();
	afx_msg void OnNMCustomdrawSliderRegisterPageSide1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMCustomdrawSliderRegisterPageSide2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedBtnRegisterPageModifyarea();
	afx_msg void OnBnClickedBtnRegisterPageLightSave();
	afx_msg void OnBnClickedBtnRegisterPageLightSave2();

	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnCbnSelchangeComboRegisterPageSide1();

};
