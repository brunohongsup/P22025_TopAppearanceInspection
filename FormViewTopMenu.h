#pragma once

#include "Definition.h"
#include "UI/CtrlButtonST.h"
#include "UI/CtrlGradientButton.h"
#include "UI/CtrlLabel.h"
#include "PictureEx.h"
#include "resource.h"

#pragma comment(lib,"ExtCtrls.lib") 



// #include "DialogViewImage.h"
//#include "DialogViewHistory.h"

class CFormViewTopMenu : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewTopMenu)

protected:
	CFormViewTopMenu();           // protected constructor used by dynamic creation
	virtual ~CFormViewTopMenu();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORMVIEW_TOPMENU };
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
		EButton_Temp1 = 0,

		EButton_Count,
	};
	enum ELabel
	{
		ELabel_Title = 0,

		ELabel_Cam1,
		ELabel_Cam2,
		ELabel_Melsec,

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

	enum EDeviceCtrl
	{
		EDeviceCtrl_Cam1 = 0,
		EDeviceCtrl_Cam2,
		EDeviceCtrl_Melsec,

		EDeviceCtrl_Count,
	};

	CFont m_FontTitle;
	CFont m_Font;
	LOGFONT m_lf;

	CCtrlGradientButton m_Button[EButton_Count];
	CCtrlLabel m_Label[ELabel_Count];
	CListCtrl m_List[EList_Count];
	bool m_bSignal[ESignal_Count];

	CPictureEx m_picLogo;

	// Device Staus 표현 컨트롤
	CPictureEx m_picDeviceStatus[EDeviceCtrl_Count];
	
	//CBitmap* m_pBmpDeviceStatus[EDeviceCtrl_Count];
	//CPictureEx m_picDeviceStatus[EDeviceCtrl_Count];

	// Dialog
// 	CDialogViewImage* m_pDlgImage = nullptr;
// 	CRavidDlgImageViewTest* m_pDlgImage = nullptr;

public:


	bool CreateIncludedDialog();
	bool ReleaseIncludedDialog();

	void InitializeLabel();
};

