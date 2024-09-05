#pragma once

// CtrlLabel.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCtrlLabel window

class CCtrlLabel : public CStatic
{
public:
	enum FlashType
	{
		None,
		Text,
		Background
	};

	CCtrlLabel();
	CCtrlLabel& SetBkColor(COLORREF crBkgnd);
	CCtrlLabel& SetTextColor(COLORREF crText);
	CCtrlLabel& SetText(const CString& strText);
	CCtrlLabel& SetFontBold(BOOL bBold);
	CCtrlLabel& SetFontName(const CString& strFont);
	CCtrlLabel& SetFontUnderline(BOOL bSet);
	CCtrlLabel& SetFontItalic(BOOL bSet);
	CCtrlLabel& SetFontSize(int nSize);
	CCtrlLabel& SetSunken(BOOL bSet);
	CCtrlLabel& SetBorder(BOOL bSet);
	CCtrlLabel& FlashText(BOOL bActivate);
	CCtrlLabel& FlashBackground(BOOL bActivate);
	CCtrlLabel& SetLink(BOOL bLink);
	CCtrlLabel& SetLinkCursor(HCURSOR hCursor);

	COLORREF GetBkColor() { return m_crBackground; }

	// Attributes
public:
protected:
	COLORREF	m_crBackground;
	void ReconstructFont();
	COLORREF	m_crText;
	HBRUSH		m_hBrush;
	HBRUSH		m_hwndBrush;
	LOGFONT		m_lf;
	CString		m_strText;
	BOOL		m_bState;
	BOOL		m_bTimer;
	BOOL		m_bLink;
	FlashType	m_Type;
	HCURSOR		m_hCursor;
	// Operations
public:
	CFont		m_font;
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCtrlLabel)
	//}}AFX_VIRTUAL

	// Implementation
public:
	CCtrlLabel& SetText(float f);
	CCtrlLabel& SetText(int n);
	virtual ~CCtrlLabel();

	// Generated message map functions
protected:
	//{{AFX_MSG(CCtrlLabel)
	afx_msg HBRUSH CtlColor(CDC* pDC, UINT nCtlColor);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
private:
};

