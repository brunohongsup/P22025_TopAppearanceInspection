#pragma once
#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "UI\CtrlLabel.h"
#include "Definition.h"
#include "EHBase.h"
#include "afxdialogex.h"


// CRegisterPageImageStatistic 대화 상자
using namespace Ravid::Framework;
using namespace CDefinition;

class CRegisterPageImageStatistic : public CDialog
{
	DECLARE_DYNAMIC(CRegisterPageImageStatistic)

public:

	enum EButton
	{
		EButton_Stack,
		EButton_Align,
		EButton_Save,
		EButton_CalibrationOn,

		EButton_Count,
	};

	enum EEdit
	{
		EEdit_Left_Zero_X,
		EEdit_Left_Zero_Y,

		EEdit_Left_X_Plus_X,
		EEdit_Left_X_Plus_Y,
		EEdit_Left_X_Minus_X,
		EEdit_Left_X_Minus_Y,

		EEdit_Left_Y_Plus_X,
		EEdit_Left_Y_Plus_Y,
		EEdit_Left_Y_Minus_X,
		EEdit_Left_Y_Minus_Y,

		EEdit_Left_Th_Plus_X,
		EEdit_Left_Th_Plus_Y,
		EEdit_Left_Th_Minus_X,
		EEdit_Left_Th_Minus_Y,

		EEdit_Right_Zero_X,
		EEdit_Right_Zero_Y,

		EEdit_Right_X_Plus_X,
		EEdit_Right_X_Plus_Y,
		EEdit_Right_X_Minus_X,
		EEdit_Right_X_Minus_Y,

		EEdit_Right_Y_Plus_X,
		EEdit_Right_Y_Plus_Y,
		EEdit_Right_Y_Minus_X,
		EEdit_Right_Y_Minus_Y,

		EEdit_Right_Th_Plus_X,
		EEdit_Right_Th_Plus_Y,
		EEdit_Right_Th_Minus_X,
		EEdit_Right_Th_Minus_Y,

		EEdit_Count,
	};

	enum EStatic
	{
		EStatic_SelectItem = 0,
		EStatic_ImageStatistic,
		EStatic_Calibration_left,
		EStatic_Calibration_left_X,
		EStatic_Calibration_left_Y,

		EStatic_Calibration_Right,
		EStatic_Calibration_Right_X,
		EStatic_Calibration_Right_Y,

		EStatic_Calibration_Position,
		EStatic_Calibration_Position_Zero,
		EStatic_Calibration_Position_X_Plus,
		EStatic_Calibration_Position_X_Minus,
		EStatic_Calibration_Position_Y_Plus,
		EStatic_Calibration_Position_Y_Minus,
		EStatic_Calibration_Position_Th_Plus,
		EStatic_Calibration_Position_Th_Minus,


		EStatic_Count,
	};

	CRegisterPageImageStatistic(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CRegisterPageImageStatistic();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_REGISTER_PAGE_IMAGESTATISTIC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	void OnOpenModel();
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }
	int m_nSelect  = 0; // 0 = stack  1 = Align
private:
	SdefaultModelParam * m_pModelParam;

	CFont		m_fontStatic;
	CFont		m_fontEdit;
	LOGFONT		m_lf;

	CStatic m_static[EStatic_Count];
	CMFCButton m_btn[EButton_Count];
	CEdit	m_edit[EEdit_Count];
	CCtrlLabel m_test;
public:
	afx_msg void OnBnClickedButtonSelectStack();
	afx_msg void OnBnClickedButtonSelectAlign();
	afx_msg void OnBnClickedButtoCalibrationSave();
	afx_msg void OnBnClickedButtonCalibrationStart();
};
