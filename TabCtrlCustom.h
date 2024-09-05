// #pragma once

#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")

using namespace Gdiplus;

class CTabCtrlCustom : public CTabCtrl
{


protected:
	DECLARE_MESSAGE_MAP()

	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();

	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);

};

