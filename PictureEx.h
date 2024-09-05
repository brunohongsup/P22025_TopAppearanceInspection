#if !defined(PICTURE_EX)
#define PICTURE_EX

#if _MSC_VER > 1000
#pragma once
#endif 

#include "ExtCtrlsDef.h"
#include <vector>
#include <list>
#include <gdiplus.h>

using namespace std;
using namespace Gdiplus;

//#define GIF_TRACING  // uncomment it if you want detailed TRACEs

class EXT_API CPictureEx : public CStatic
{
public:
	CPictureEx();
	virtual ~CPictureEx();

	void Stop();   // stops animation
	BOOL Draw();
	BOOL DrawSingleFrame(int nFrameNo);

	BOOL IsPlaying();
	BOOL IsAnimated();

	UINT GetFrameCount();

	COLORREF GetBkColor() const;
	void SetBkColor(COLORREF clr);
	void SetTransparentBK(BOOL enable);

	void SetAnimateSpeedMul(double mul);
	double GetAnimateSpeedMul();

	void SetBorderColor(BOOL bUse, COLORREF cr);
	void SetImageMargin(int nLeft, int nTop, int nRight, int nBottom);


	BOOL Load(LPCTSTR szFileName);
	BOOL Load(LPCTSTR szResourceName,LPCTSTR szResourceType);

protected:
	LPTSTR m_szLastLoadedRes;
	CString m_strLastLoadedFilePath;
	CString m_strLastLoadedResType;
	CBitmap* m_pbmBK;
	BOOL	m_bUseTransparent;
	CCriticalSection m_csDrawing;
	COLORREF m_clrBackground;

	UINT m_nCurrFrameIdx;
	UINT m_nMaxFrameCount;

	HANDLE m_hThread;
	BOOL m_bExitThread;

	CDC m_memDC;
	CBitmap m_memBm;
	CBitmap* m_pMemOldBm;

	BOOL m_bUseDrawBorder;
	COLORREF m_crBorderColor;

	int m_nLeftMargin;
	int m_nTopMargin;
	int m_nRightMargin;
	int m_nBottomMargin;

	Gdiplus::Bitmap* m_pbmImage;
	CCriticalSection m_csImage;
	Gdiplus::PropertyItem* m_pProperty;

	double m_dAnimateSpeedMul;
	static UINT __stdcall ThreadAnimation(LPVOID pParam);
	void UpdateAnimate();

	// Generated message map functions
	//{{AFX_MSG(CPictureEx)
	afx_msg void OnDestroy();
	afx_msg void OnPaint();
	//}}AFX_MSG
	
	DECLARE_MESSAGE_MAP()
	virtual void PreSubclassWindow();
public:
	virtual BOOL Create(LPCTSTR lpszText, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID = 0xffff);
};

#endif // !defined(AFX_PICTUREEX_H__0EFE5DE0_7B68_4DB7_8B34_5DC634948438__INCLUDED_)
