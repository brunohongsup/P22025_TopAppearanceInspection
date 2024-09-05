#pragma once

#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "Definition.h"
#include "afxdialogex.h"


#include "EHBase.h"

// CDlgAddROINaming 대화 상자

class CRegisterPageMarkROI;


class CDlgAddROINaming : public CDialog
{
	DECLARE_DYNAMIC(CDlgAddROINaming)

public:
	CDlgAddROINaming(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDlgAddROINaming();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ROI_NAME };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

	bool m_bNameEditExistingROI = false;
	long m_nIndex = 0;
	CEdit m_edit;
public:
	void SetUseNameEditExistingROI(bool bset = false, long nIndex = 0){m_bNameEditExistingROI = bset;m_nIndex = nIndex;}


	void SetNamingToEditBox(CString strName)
	{
		m_edit.SetWindowText(strName);
		m_edit.Invalidate();
	}
	CString GetNameFromEditBox()
	{
		CString str;
		m_edit.GetWindowText(str);
		return str;
	}

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual BOOL OnInitDialog();
};
