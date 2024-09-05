#ifndef _COLORCONTROL_H_
#define _COLORCONTROL_H_

#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")

using namespace Gdiplus;

class CColorControl
{

public:
	CColorControl();
	virtual ~CColorControl();

	void SetColors(const COLORREF FGColor, const COLORREF BGColor, const COLORREF HotFGColor, const COLORREF HotBGColor);
	void SetDisabledColors( const COLORREF DisabledFGColor = GRAY,
							const COLORREF DisabledBGColor = COLOR_3DFACE);

	void SetColorBg(COLORREF clr);
	void SetColorFg(COLORREF clr);
	void SetColorBgHot(COLORREF clr);
	void SetColorFgHot(COLORREF clr);
	void SetColorBgDisabled(COLORREF clr);
	void SetColorFgDisabled(COLORREF clr);

	void SetRolloverDelay( UINT mSeconds ) { m_iRolloverDelay = mSeconds; };
	void EnableHot(bool bEnable = true){m_bEnableHot = bEnable;};

protected:
		
	COLORREF	m_crFg, m_crBg, m_crDisabledFg, m_crDisabledBg, m_crHotFg, m_crHotBg;
	UINT		m_nTimerID, m_iRolloverDelay;
	BOOL		m_bOverControl;
	CBrush*		m_pBrush;
	CBrush*		m_pHotBrush;
	CBrush*		m_pDisabledBrush;
	bool		m_bEnableHot;
};

class CCtrlGradientButton : public CButton, public CColorControl
{
public:
	CCtrlGradientButton();
	virtual ~CCtrlGradientButton();
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDIS);

	void SetGradientColors(	BYTE alphaUpper,	COLORREF rgbUpper,
							BYTE alphaLower,	COLORREF rgbLower,
							BYTE alphaLowerHot,	COLORREF rgbLowerHot);

	void SetNormalGradient(COLORREF rgbColor);
	void SetColorText(COLORREF rgbColor);
	void SetTextInsert(CString strData);

	COLORREF GetMainColor() { return m_ColorMainColor; }
	
private:
	bool    m_bSetText;
	CString m_strText;

protected:

	ULONG_PTR	m_gdiplusToken;
	Color		m_clrUpper, m_clrLower, m_clrLowerHot;

	COLORREF	m_ColorText;
	COLORREF	m_ColorMainColor;
	
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	virtual void PreSubclassWindow();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	DECLARE_MESSAGE_MAP()
};

#endif
