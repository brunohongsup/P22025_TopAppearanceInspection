#include "stdafx.h"
#include "Definition.h"

namespace CDefinitionFunction
{
	void SetLabelColor(CCtrlLabel& clLabel, COLORREF clrText, COLORREF clrBackground, int nFontSize, bool bFontBold)
	{
		clLabel.SetTextColor(clrText);
		clLabel.SetBkColor(clrBackground);
		clLabel.SetFontBold(bFontBold);
		clLabel.SetFontSize(nFontSize);
		clLabel.Invalidate();
	}

	void SetButtonColor(CCtrlButtonST& cbButton, COLORREF clfForegroundOut, COLORREF clfForegroundIn, COLORREF clfBackgroundOut, COLORREF clfBackgroundIn, BOOL bDrawBorder, CFont* pFont, BOOL bRedraw)
	{
		cbButton.SetColor(CCtrlButtonST::BTNST_COLOR_FG_OUT, clfForegroundOut);
		cbButton.SetColor(CCtrlButtonST::BTNST_COLOR_FG_IN, clfForegroundIn);
		cbButton.SetColor(CCtrlButtonST::BTNST_COLOR_BK_OUT, clfBackgroundOut);
		cbButton.SetColor(CCtrlButtonST::BTNST_COLOR_BK_IN, clfBackgroundIn);
		cbButton.DrawBorder(bDrawBorder);
		cbButton.SetFont(pFont, bRedraw);
	}
};
