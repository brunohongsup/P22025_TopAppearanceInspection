// Label.cpp : implementation file
//

#include "stdafx.h"
#include "CtrlLabel.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCtrlLabel

// #define			BLACK				RGB( 000, 000, 000 )
// #define			WHITE				RGB(255,255,255)
// #define			BLUE				RGB( 000, 000, 128 )
// #define			LIGHTBLUE			RGB( 000, 000, 255 )
// #define			DARKBLUE			RGB( 000, 000, 064 )
// #define			DEEPBLUE			RGB(  92,  2,  251 )
// #define			GREEN				RGB( 000, 128, 000 )
// #define			LIGHTGREEN			RGB( 000, 255, 000 )
// #define			DARKGREEN			RGB( 000, 064, 000 )
// #define			CYAN				RGB( 000, 128, 128 )
// #define			LIGHTCYAN			RGB( 000, 255, 255 )
// #define			DARKCYAN			RGB( 000, 064, 064 )
// #define			RED					RGB(128,  0,  0)
// #define			LIGHTRED			RGB(255,  0,  0)
// #define			DEEPRED				RGB(225,  0, 87)
// #define			DARKRED				RGB( 064, 000, 000 )
// #define			MAGENTA				RGB(128,  0,128)
// #define			LIGHTMAGENTA		RGB(255,  0,255)
// #define			DARKMAGENTA			RGB( 128, 000, 128 )
// #define			BROWN				RGB( 150, 000, 000 )
// #define			LIGHTBROWN			RGB( 200,  50,  50 )
// #define			YELLOW				RGB(255,255,  0)
// #define			LIGHTYELLOW			RGB( 255, 255, 100 )
// #define			VIOLET				RGB( 128, 000, 255 )
// #define			LIGHTVIOLET			RGB( 196, 128, 255 )
// #define			ORANGE				RGB(250,150,  0)
// #define			GRAY				RGB( 128, 128, 128 )
// #define			LIGHTGRAY			RGB( 192, 192, 192 )
// #define			DARKGRAY			RGB(  50,  50,  50 )


CCtrlLabel::CCtrlLabel()
{
	m_crText = RGB(255, 255, 255); // GetSysColor(COLOR_WINDOWTEXT);//시스템 텍스트의 색깔
	m_hBrush = ::CreateSolidBrush(GetSysColor(COLOR_3DFACE));

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT),sizeof(m_lf),&m_lf);
    
	
	//KWON	Default Font //////////////////////////////////////
// 	wcscpy_s(m_lf.lfFaceName, _T("Tahoma"));
// 	m_lf.lfHeight=-12;
// 	m_lf.lfWidth=0;
// 	m_lf.lfEscapement = 0;
// 	m_lf.lfOrientation = 0;
// 	m_lf.lfItalic = 0;
// 	m_lf.lfUnderline = 0;
// 	m_lf.lfStrikeOut = 0;
// 	m_lf.lfWeight = 400;
// 	m_lf.lfCharSet = HANGEUL_CHARSET;/*ARABIC_CHARSET;*/
// 	m_lf.lfOutPrecision = OUT_STROKE_PRECIS;
// 	m_lf.lfClipPrecision=2;
// 	m_lf.lfQuality=1;
// 	m_lf.lfPitchAndFamily=2;
	///////////////////////////////////////////////////////////
	
//	m_font.CreateFontIndirect(&m_lf);//정의된 font로 설정 
	m_bTimer	= FALSE;
	m_bState	= FALSE;
	m_bLink		= TRUE;
	m_hCursor	= NULL;
	m_Type		= None;
	m_hwndBrush = ::CreateSolidBrush(GetSysColor(COLOR_3DFACE));
	
	SetBkColor(BLACK);	
}

CCtrlLabel::~CCtrlLabel()
{
	if(m_font.GetSafeHandle())
		m_font.DeleteObject();

	if(m_hBrush)
		::DeleteObject(m_hBrush);

	if(m_hwndBrush)
		::DeleteObject(m_hwndBrush);
}

CCtrlLabel& CCtrlLabel::SetText(const CString& strText)
{
	SetWindowText(strText);
	return *this;
}

CCtrlLabel& CCtrlLabel::SetTextColor(COLORREF crText)
{
	m_crText = crText;
	RedrawWindow();
	return *this;
}

CCtrlLabel& CCtrlLabel::SetFontBold(BOOL bBold)
{	
	m_lf.lfWeight = bBold ? FW_BOLD : FW_NORMAL;//폰트의 굵기 

	ReconstructFont();// 폰트를 다시 만듬 
	RedrawWindow();
	return *this;
}

CCtrlLabel& CCtrlLabel::SetFontUnderline(BOOL bSet)
{	
	m_lf.lfUnderline = bSet;
	ReconstructFont();
	RedrawWindow();
	return *this;
}

CCtrlLabel& CCtrlLabel::SetFontItalic(BOOL bSet)
{
	m_lf.lfItalic = bSet;
	ReconstructFont();
	RedrawWindow();
	return *this;	
}

CCtrlLabel& CCtrlLabel::SetSunken(BOOL bSet)
{
	if (!bSet)
		ModifyStyleEx(WS_EX_STATICEDGE,0,SWP_DRAWFRAME);//style
	//변경,윈도우 프레임에 선을 그림 
	else
		ModifyStyleEx(0,WS_EX_STATICEDGE,SWP_DRAWFRAME);
		
	return *this;	
}

CCtrlLabel& CCtrlLabel::SetBorder(BOOL bSet)
{
	if (!bSet)
		ModifyStyle(WS_BORDER,0,SWP_DRAWFRAME);
	else
		ModifyStyle(0,WS_BORDER,SWP_DRAWFRAME);
		
	return *this;	
}

CCtrlLabel& CCtrlLabel::SetFontSize(int nSize)
{
	nSize*=-1;
	m_lf.lfHeight = nSize;
	ReconstructFont();
	RedrawWindow();
	return *this;
}


CCtrlLabel& CCtrlLabel::SetBkColor(COLORREF crBkgnd)
{
	if (m_hBrush)
		::DeleteObject(m_hBrush);
	
	m_hBrush = ::CreateSolidBrush(crBkgnd);
	m_crBackground = crBkgnd;
	return *this;
}

CCtrlLabel& CCtrlLabel::SetFontName(const CString& strFont)
{	
	wcscpy_s(m_lf.lfFaceName,strFont);
	ReconstructFont();
	RedrawWindow();
	return *this;
}


BEGIN_MESSAGE_MAP(CCtrlLabel, CStatic)
	//{{AFX_MSG_MAP(CCtrlLabel)
	ON_WM_CTLCOLOR_REFLECT()
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_SETCURSOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCtrlLabel message handlers

HBRUSH CCtrlLabel::CtlColor(CDC* pDC, UINT nCtlColor) 
{
	// TODO: Change any attributes of the DC here
	
	// TODO: Return a non-NULL brush if the parent's handler should not be called

	if (CTLCOLOR_STATIC == nCtlColor)
	{
		pDC->SelectObject(&m_font);
		pDC->SetTextColor(m_crText);
		pDC->SetBkMode(TRANSPARENT);
	}


	if (m_Type == Background)
	{
		if (!m_bState)
			return m_hwndBrush;
	}

	return m_hBrush;
}

void CCtrlLabel::ReconstructFont()
{

	if(m_font.GetSafeHandle())
	{
		m_font.DeleteObject();
	}

	m_font.CreateFontIndirect(&m_lf);

	/*
	BOOL bfont=m_font.DeleteObject();
	ASSERT(bfont ==TRUE);
	BOOL bCreated = m_font.CreateFontIndirect(&m_lf);

	ASSERT(bCreated);
	*/
}


CCtrlLabel& CCtrlLabel::FlashText(BOOL bActivate)
{
	if (m_bTimer)
	{
		SetWindowText(m_strText);
		KillTimer(1);
	}

	if (bActivate)
	{
		GetWindowText(m_strText);
		m_bState = FALSE;
		
		m_bTimer = TRUE;
		SetTimer(1,500,NULL);
		m_Type = Text;
	}

	return *this;
}

CCtrlLabel& CCtrlLabel::FlashBackground(BOOL bActivate)
{

	if (m_bTimer)
		KillTimer(1);

	if (bActivate)
	{
		m_bState = FALSE;

		m_bTimer = TRUE;
		SetTimer(1,500,NULL);

		m_Type = Background;
	}

	return *this;
}


void CCtrlLabel::OnTimer(UINT_PTR nIDEvent) 
{
	m_bState = !m_bState;

	switch (m_Type)
	{
		case Text:
			if (m_bState)
				SetWindowText(_T(""));
			else
				SetWindowText(m_strText);
		break;

		case Background:
			InvalidateRect(NULL,FALSE);
			UpdateWindow();
		break;
	}
	
	CStatic::OnTimer(nIDEvent);
}

CCtrlLabel& CCtrlLabel::SetLink(BOOL bLink)
{
	m_bLink = bLink;

	if (bLink)
		ModifyStyle(0,SS_NOTIFY);
	else
		ModifyStyle(SS_NOTIFY,0);

	return *this;
}

void CCtrlLabel::OnLButtonDown(UINT nFlags, CPoint point) 
{

	/*
	CString strLink;

	GetWindowText(strLink);
	ShellExecute(NULL,_T("open"),strLink,NULL,NULL,SW_SHOWNORMAL);
	
	
	CStatic::OnLButtonDown(nFlags, point);*/
	CStatic::OnLButtonDown(nFlags, point);
}

BOOL CCtrlLabel::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message) 
{
	if (m_hCursor)
	{
		::SetCursor(m_hCursor);
		return TRUE;
	}

	return CStatic::OnSetCursor(pWnd, nHitTest, message);
}

CCtrlLabel& CCtrlLabel::SetLinkCursor(HCURSOR hCursor)
{
	m_hCursor = hCursor;
	return *this;
}

CCtrlLabel& CCtrlLabel::SetText(int n)
{
    
	CString str;
	str.Format(_T("%d"),n);
	SetWindowText(str);
	return *this;    

}

CCtrlLabel& CCtrlLabel::SetText(float f)
{
	
	CString str;
	str.Format(_T("%.2f"),f);
	//str+=_T("%");
    SetWindowText(str);
    return *this;    
}



