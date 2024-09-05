#pragma once

#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "Definition.h"
#include "afxdialogex.h"
#include "RegisterPageMarkROI.h"
#include "EHBase.h"

// CDlgEditROI 대화 상자

using namespace CDefinition;
class CDlgEditROI : public CDialog
{
	DECLARE_DYNAMIC(CDlgEditROI)

public:
	CDlgEditROI(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgEditROI();

	enum EBtn
	{
		EBtn_Edge1Line = 0,
		EBtn_Edge2Line,
		EBtn_Edge3Line,
		EBtn_Mark,
		EBtn_GrayArea,
		EBtn_EdgeCorner,
		EBtn_Save,
		EBtn_Cancel,
		EBtn_Left,
		EBtn_Top,
		EBtn_Right,
		EBtn_Bottom,

		EBtn_Count,
	};

	enum EStatic
	{
		EStatic_Name = 0,
		EStatic_Type,
		EStatic_Threshold,
		EStatic_Polarity,
		EStatic_Direction,
		EStatic_PositionXY,
		EStatic_SizeXY,

		EStatic_Count,
	};

	enum EEdit
	{
		EEdit_Name = 0,
		EEdit_Threshold,
		EEdit_SideThreshold,
		EEdit_PositionX,
		EEdit_PositionY,
		EEdit_SizeX,
		EEdit_SizeY,

		EEdit_Count,
	};

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_TOPENG_EDITROI };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);

	void OnOpenDialog(int nNum);

	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }
	void SettingDirectionButton(int nNum);

	int GetSelectCamera() { return m_nSelectCamera; }
	void SetSelectCamera(int nCameraNum) { m_nSelectCamera = nCameraNum; }

	bool m_bAnodeMode = false;
	void SetAnodeMode(bool bAnode) { m_bAnodeMode = bAnode; }
	bool GetAnodeMode() { return m_bAnodeMode; }
private:
	int m_nSelectModelNum;
	int m_nSelectCamera;
	int m_nPolarity;
	int m_nSidePolarity; //  High or Low 
	bool m_bSide = false;

	SdefaultModelParam* m_pModelParam;

;

	CEdit m_edit[EEdit_Count];
	CMFCButton m_btn[EBtn_Count];
	CStatic m_static[EStatic_Count];

	CBitmapButton m_bitmapBtn;
	CBitmapButton m_bitmapBtnSecond;


	CFont		m_fontStatic;
	CFont		m_fontBtn;
	LOGFONT		m_lf;
	
public:
	void SetSideMode(bool bOn);
	bool m_bSideMode = false;
	afx_msg void OnBnClickedDlgEditroiBtnPolarity();
	afx_msg void OnBnClickedDlgEditroiBtnLeft();
	afx_msg void OnBnClickedDlgEditroiBtnTop();
	afx_msg void OnBnClickedDlgEditroiBtnRight();
	afx_msg void OnBnClickedDlgEditroiBtnBottom();
	afx_msg void OnBnClickedDlgEditroiBtnSave();
	afx_msg void OnBnClickedDlgEditroiBtnCancel();
	afx_msg void OnBnClickedDlgEditroiBtnPolarity2();
};
