#pragma once

#include "Definition.h"
#include "UI/CtrlButtonST.h"
#include "UI/CtrlGradientButton.h"
#include "UI/CtrlLabel.h"

#include "resource.h"

#include "EventHandlerMain.h"

//#include "DialogViewMelsec.h"

class CFormViewComm : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewComm)

protected:
	CFormViewComm();           // protected constructor used by dynamic creation
	virtual ~CFormViewComm();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW_COMM };
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
		EButton_PLCTypeB = 0,
		EButton_PLCTypeW,
		EButton_PLCRead,
		EButton_PLCWrite,

		//
		EButton_Word,
		EButton_String,

		EButton_BlockL,
		EButton_L,
		EButton_R,
		EButton_BlockR,

		EButton_Count,
	};

	enum ELabel
	{
		ELabel_TitlePLC = 0,
		ELabel_TitleIn,
		ELabel_TitleOut,

		// PLC
		ELabel_DataType,
		ELabel_Address,
		ELabel_SetValue,

		ELabel_Alive,

		ELabel_Count,
	};

	enum ESignal
	{
		ESignal_Alive = 0,
		ESignal_IsString,

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

	enum ESheet
	{
		ESheet_PLC = 0,
		ESheet_DI, // In
		ESheet_DO, // Out

		ESheet_Count,
	};

	enum EEdit
	{
		EEdit_Address = 0,
		EEdit_SetValue,

		EEdit_Count,
	};

	enum EMelsecDataType
	{
		EMelsecDataType_B = 0,	// 'B' Bit 영역
		EMelsecDataType_W,		// 'W' Word 영역

		EMelsecDataType_Count,
	};


	CEdit m_Edit[2];
	CFont m_FontTitle;
	CFont m_FontBasic;
	CCtrlGradientButton m_Button[EButton_Count];
	CCtrlLabel m_Label[ELabel_Count];
	CListCtrl m_List[EList_Count];
	bool m_bSignal[ESignal_Count];

	CRavidSheet m_Sheet[ESheet_Count];

	LOGFONT		m_lf;
	CFont		m_font;

	// Melsec Address Setting
	int m_nSelectedAddr = 0;
	char m_cSelectedArea = 'B';
	EMelsecDataType m_eMelsecType = EMelsecDataType_B;
	short m_nBit[CDefinition::EMelsecBitIn_ReadCount / 16 + 1] = { 0, };
	short m_nWord[CDefinition::EMelsecWordIn_ReadCount + 1] = { 0, };

//	CDialogViewMelsec* m_pMelsec = nullptr;

	int TransformHexToDec(int nHexTypeNumber); 

public:
	void InitLabel();
	void InitButton();

	// Ravid Sheet
	bool InitSheet();
	bool InitSheetPLC();
	bool InitSheetDI();
	bool InitSheetDO();

	// PLC Sheet
	void AliveCheck();
	void SetPLCSheetAddr();
	bool ResetMelsecDataSheet();
	void SetPLCAddrData(int nStartAdrr, EMelsecDataType eMelsecType);

	// IO Sheet
	bool SaveIOAddressSheet();
	bool LoadInAddressSheet();
	bool LoadOutAddressSheet();
	void UpdateDISheet();
	void UpdateDOSheet();


	afx_msg void OnBnClickedButtonCommTest();
	afx_msg void OnBnClickedButtonCommMelsecTypeB();
	afx_msg void OnBnClickedButtonCommMelsecTypeW();
	afx_msg void OnBnClickedButtonCommMelsecRead();
	afx_msg void OnBnClickedButtonCommMelsecWrite();
	afx_msg void OnBnClickedButtonCommMelsecWord();
	afx_msg void OnBnClickedButtonCommMelsecString();
	afx_msg void OnBnClickedButtonCommMelsecBlockLShift();
	afx_msg void OnBnClickedButtonCommMelsecLShift();
	afx_msg void OnBnClickedButtonCommMelsecRShift();
	afx_msg void OnBnClickedButtonCommMelsecBlockRShift();
};

