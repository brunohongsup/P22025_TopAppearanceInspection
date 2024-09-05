#include "stdafx.h"
#include "CtrlGradientButton.h"

////////////////////////////////////////////////////////////
// Message maps

BEGIN_MESSAGE_MAP(CCtrlGradientButton, CButton)
	ON_WM_MOUSEMOVE()
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

////////////////////////////////////////////////////////////////////////////////////////////
// CColorControl

CColorControl::CColorControl()
{
	m_pBrush	= NULL;
	m_pHotBrush = NULL;
	m_pDisabledBrush = NULL;

	SetDisabledColors(GRAY, COLOR_3DFACE);

	SetColors(	WHITE,
				COLOR_3DFACE,
				BLACK,
				COLOR_3DFACE);

	m_bOverControl = FALSE;
	m_nTimerID     = 1;
	m_iRolloverDelay = 10;
	m_bEnableHot	= false;

	m_crFg = 0;
	m_crBg = 0;
	m_crDisabledFg = 0;
	m_crDisabledBg = 0;
	m_crHotFg = 0;
	m_crHotBg = 0;
}

CColorControl::~CColorControl()
{
	delete m_pBrush;
	delete m_pHotBrush;
	delete m_pDisabledBrush;
}

void CColorControl::SetDisabledColors(	COLORREF DisabledFGColor /* = RGB_GRAYTEXT */,
										COLORREF DisabledBGColor /* = RGB_BTNFACE */)
{
	m_crDisabledFg = DisabledFGColor;
	m_crDisabledBg = DisabledBGColor;
	if(m_pDisabledBrush)
		delete m_pDisabledBrush;

	m_pDisabledBrush = new CBrush(DisabledBGColor);
}

void CColorControl::SetColors(const COLORREF FGColor, const COLORREF BGColor, const COLORREF HotFGColor, const COLORREF HotBGColor)
{
	m_crFg = FGColor;
	m_crBg = BGColor;
	m_crHotFg = HotFGColor;
	m_crHotBg = HotBGColor;

	if(m_pBrush)
		delete m_pBrush;
	if(m_pHotBrush)
		delete m_pHotBrush;

	m_pBrush	= new CBrush(BGColor);
	m_pHotBrush = new CBrush(HotBGColor);
}

void CColorControl::SetColorBg(COLORREF clr)
{
	SetColors(m_crFg, clr, m_crHotFg, m_crHotBg);
}
void CColorControl::SetColorFg(COLORREF clr)
{
	SetColors(clr, m_crBg, m_crHotFg, m_crHotBg);
}
void CColorControl::SetColorBgHot(COLORREF clr)
{
	SetColors(m_crFg, m_crBg, m_crHotFg, clr);
}
void CColorControl::SetColorFgHot(COLORREF clr)
{
	SetColors(m_crFg, m_crBg, clr, m_crHotBg);
}
void CColorControl::SetColorBgDisabled(COLORREF clr)
{
	SetDisabledColors(m_crDisabledFg, clr);
}
void CColorControl::SetColorFgDisabled(COLORREF clr)
{
	SetDisabledColors(clr, m_crDisabledBg);
}

CCtrlGradientButton::CCtrlGradientButton()
{
	// Initialize GDI+.
	GdiplusStartupInput gdiplusStartupInput;
	GdiplusStartup(&m_gdiplusToken, &gdiplusStartupInput, NULL);

	m_bSetText = false;
	m_ColorText = 0;
	m_ColorMainColor = 0;


	SetGradientColors(	80, BLUE,	// default upper color
						255, BLUE,		// default lower color
						150, BLUE);	// default lower HOT color

	m_ColorText = BLACK;
	m_bSetText = false;
}

CCtrlGradientButton::~CCtrlGradientButton()
{
	GdiplusShutdown(m_gdiplusToken);
}

void CCtrlGradientButton::SetNormalGradient(COLORREF rgbColor)
{
	SetGradientColors(80, rgbColor, 255, rgbColor, 150, rgbColor);
}
void CCtrlGradientButton::SetColorText(COLORREF rgbColor)
{
	m_ColorText = rgbColor;
}

void CCtrlGradientButton::SetTextInsert(CString strData)
{
	m_bSetText = true;
	m_strText = strData;
}

void CCtrlGradientButton::SetGradientColors(BYTE alphaUpper,	COLORREF rgbUpper,
									 BYTE alphaLower,	COLORREF rgbLower,
									 BYTE alphaLowerHot,COLORREF rgbLowerHot)
									 
{

	m_clrUpper = Color::MakeARGB(alphaUpper,GetRValue(rgbUpper),GetGValue(rgbUpper),GetBValue(rgbUpper));

	m_clrLower		= Color::MakeARGB(alphaLower,GetRValue(rgbLower),GetGValue(rgbLower),GetBValue(rgbLower));

	m_clrLowerHot	= Color::MakeARGB(alphaLowerHot,GetRValue(rgbLowerHot),	GetGValue(rgbLowerHot),GetBValue(rgbLowerHot));

	m_ColorMainColor = rgbLower;
}

void CCtrlGradientButton::DrawItem(LPDRAWITEMSTRUCT lpDIS)
{
    UINT				state(lpDIS->itemState);
    CString				btnText;
	Graphics			graphics(lpDIS->hDC);
	RECT				rctBgContent;
	Rect				clientRect;
	CRect				txtRect(0,0,0,0);
	LinearGradientBrush *plinGrBrush = NULL;

	UINT partID;
	UINT stateID;

	int nGetColorRed;
	int nGetColorGreen;
	int nGetColorBlue;

	nGetColorRed = GetRValue(m_ColorMainColor)/2;
	nGetColorGreen = GetGValue(m_ColorMainColor)/2;
	nGetColorBlue = GetBValue(m_ColorMainColor)/2;


	Color	clrDisabled = Color::MakeARGB(80,nGetColorRed,nGetColorGreen,nGetColorBlue);
	Color	*pclrLower = NULL;

	partID	= DFC_BUTTON;
	stateID	= (state & ODS_SELECTED) ? DFCS_BUTTONPUSH|DFCS_FLAT|DFCS_PUSHED: DFCS_BUTTONPUSH|DFCS_FLAT;

	if(state & ODS_DISABLED)
		stateID = DFCS_BUTTONPUSH|DFCS_FLAT|DFCS_INACTIVE;
	
	DrawFrameControl(lpDIS->hDC, &lpDIS->rcItem, partID,stateID);
	memcpy(&rctBgContent, &lpDIS->rcItem, sizeof(RECT));
	
	InflateRect(&rctBgContent, -GetSystemMetrics(SM_CXEDGE), -GetSystemMetrics(SM_CYEDGE));

	clientRect.X = rctBgContent.left;
	clientRect.Y = rctBgContent.top;
	clientRect.Width = rctBgContent.right - rctBgContent.left;
	clientRect.Height = rctBgContent.bottom - rctBgContent.top;
	
	if (state & ODS_SELECTED)
	{
		pclrLower = (m_bOverControl && m_bEnableHot) ? &m_clrLowerHot : &m_clrLower;
		plinGrBrush = new LinearGradientBrush(clientRect, *pclrLower, m_clrUpper, 90);
	}
	else if( state & ODS_DISABLED )
	{
		pclrLower	= &clrDisabled;
		plinGrBrush = new LinearGradientBrush(clientRect, m_clrUpper, *pclrLower, 90);
	}
	else
	{
		pclrLower = (m_bOverControl && m_bEnableHot) ? &m_clrLowerHot : &m_clrLower;
		plinGrBrush = new LinearGradientBrush(clientRect, m_clrUpper, *pclrLower, 90);
	}

	graphics.FillRectangle(plinGrBrush, clientRect );

	// Draw the text
	if(!m_bSetText)
		GetWindowText(btnText);
	else
		btnText = m_strText;

    if(!btnText.IsEmpty())
    {
		COLORREF	clrOrg;
		int			bkModeOld;

		DrawText(	lpDIS->hDC, btnText, btnText.GetLength(), &txtRect,
					DT_CALCRECT|DT_CENTER);

		int txtWidth = txtRect.Width();
		int txtHight = txtRect.Height();

		txtRect.left	= clientRect.X + (clientRect.Width - txtWidth)/2;
		txtRect.right	= txtRect.left + txtWidth;
		txtRect.top		= clientRect.Y + (clientRect.Height - txtHight)/2;
		txtRect.bottom	= txtRect.top + txtHight;

		// discard parts not in clientRect
		txtRect.IntersectRect(&rctBgContent, &txtRect);

   		// txt color
		if(state & ODS_DISABLED)
		{
			COLORREF colorDisable;
			colorDisable = RGB(127,127,127);
			clrOrg = SetTextColor(lpDIS->hDC, colorDisable);
		}
		else
			clrOrg = SetTextColor(lpDIS->hDC, m_ColorText);

		// transparent bg
		bkModeOld = SetBkMode(lpDIS->hDC, TRANSPARENT);
		
		// Draw text
		DrawText(	lpDIS->hDC, btnText, btnText.GetLength(), &txtRect,
					DT_CENTER);

		SetBkMode(lpDIS->hDC, bkModeOld);

		SetTextColor(lpDIS->hDC, clrOrg);
		
    }

	delete plinGrBrush;
}

void CCtrlGradientButton::PreSubclassWindow() 
{
    ModifyStyle(0, BS_OWNERDRAW);
	CButton::PreSubclassWindow();   
}

void CCtrlGradientButton::OnMouseMove(UINT nFlags, CPoint point) 
{
   	if(m_bEnableHot)
	{
		CPoint p(GetMessagePos());
		ScreenToClient(&p);
		CRect rect;
		GetClientRect(rect);
		if (m_bOverControl != rect.PtInRect(p)) {
			m_bOverControl = !m_bOverControl;
			Invalidate();
			SetTimer(m_nTimerID, m_iRolloverDelay, NULL);
		}
	}
	CButton::OnMouseMove(nFlags, point);
}

void CCtrlGradientButton::OnTimer(UINT_PTR nIDEvent) 
{
	if(m_bEnableHot)
	{
		CPoint p(GetMessagePos());
		ScreenToClient(&p);
		CRect rect;
		GetClientRect(rect);
		if (m_bOverControl != rect.PtInRect(p)) {
			m_bOverControl = !m_bOverControl;
			KillTimer(m_nTimerID);
			Invalidate();
		}
	}
    CButton::OnTimer(nIDEvent);
}
void CCtrlGradientButton::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// ownerdrawn buttons responds to doubleclicks rather than fast
	// singleclicks as the standard buttoms does, fix:
	PostMessage(WM_LBUTTONDOWN,0, MAKELPARAM(point.x, point.y));
}
