#include "stdafx.h"
#include "TabCtrlCustom.h"


BEGIN_MESSAGE_MAP(CTabCtrlCustom, CTabCtrl)
	ON_WM_ERASEBKGND()
	ON_WM_PAINT()
// 	ON_WM_SIZE()
// 	ON_WM_PAINT()
// 	ON_WM_CTLCOLOR()
// 	ON_WM_TIMER()
// 	ON_WM_DESTROY()
END_MESSAGE_MAP()

BOOL CTabCtrlCustom::OnEraseBkgnd(CDC * pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다. 
	CRect rect;

	GetClientRect(&rect);

// 	CBrush myBrush(RGB(240, 50, 50)); // dialog background color <- 요기 바꾸면 됨.
	CBrush myBrush(RGB(255, 40, 40)); // dialog background color <- 요기 바꾸면 됨.


// 	COLORREF color_data = RGB(64, 128, 255);


	CBrush *pOld = pDC->SelectObject(&myBrush);

	BOOL bRes = pDC->PatBlt(0, 0, rect.Width(), rect.Height(), PATCOPY);

	pDC->SelectObject(pOld); // restore old brush 

	return bRes; 
/*	return CTabCtrl::OnEraseBkgnd(pDC);*/
}

void CTabCtrlCustom::OnPaint()
{
	CPaintDC dc(this);

	dc.SelectObject(GetFont());

	CPen pen, pen_active;
	COLORREF color_off = RGB(240, 240, 240);
	COLORREF color_active = RGB(40, 40, 40);
	CBrush brush_off, brush_active;
	brush_off.CreateSolidBrush(color_off);
	brush_active.CreateSolidBrush(color_active);
	pen.CreatePen(PS_SOLID, 1, RGB(200, 200, 200));
	pen_active.CreatePen(PS_SOLID, 1, color_active);

	CRect rcitem;
	GetItemRect(0, &rcitem);

	CRect rc;
	GetClientRect(&rc);
	rc.bottom = rcitem.bottom;
	dc.FillSolidRect(&rc, GetSysColor(COLOR_3DFACE));

	GetClientRect(&rc);
	rc.top = rcitem.bottom - 1;
	dc.SelectObject(&pen);
	dc.SelectObject(&brush_active);
	dc.Rectangle(&rc);

	for(int i = 0; i < GetItemCount(); i++)
	{
		dc.SelectObject(&pen);
		if(i == GetCurSel())
		{
			dc.SelectObject(&brush_active);
			dc.SetBkColor(color_active);
			dc.SetTextColor(color_off);
		}
		else
		{
			dc.SelectObject(&brush_off);
			dc.SetBkColor(color_off);
			dc.SetTextColor(color_active);

		}

		GetItemRect(i, &rcitem);
		rcitem.right++;
		dc.Rectangle(&rcitem);

		if(i == GetCurSel())
		{
			dc.SelectObject(pen_active);
			dc.MoveTo(rcitem.left + 1, rcitem.bottom - 1);
			dc.LineTo(rcitem.right, rcitem.bottom - 1);
		}

		TCITEM item = { 0 };
		wchar_t buf[32];
		item.pszText = buf;
		item.cchTextMax = 32;
		item.mask = TCIF_TEXT;
		GetItem(i, &item);
		dc.DrawText(buf, &rcitem, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
	}
}

void CTabCtrlCustom::DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct)
{
// 	COLORREF m_select_border_color = RGB(255, 255, 255);
// 	COLORREF m_select_text_color = RGB(10, 155, 202);
// 	COLORREF m_unselect_border_color = RGB(255, 255, 255);
// 	COLORREF m_unselect_text_color = RGB(0, 0, 0);
// 
// 	int select_index = lpDrawItemStruct->itemID;
// 	if(select_index < 0) return;
// 
// 	int nNumber = 0;
// 
// 	char tab_text[40];
// 
// 	TC_ITEM data;
// 	data.mask = TCIF_TEXT | TCIF_IMAGE;
// 	data.pszText =/* _T("Test");*/tab_text;
// 	data.cchTextMax = 39;
// 
// 	// 선택된 탭의 정보를 얻는다. 
// // 	if(!GetItem(select_index, &data)) return;
// 
// 	CDC *pDC = CDC::FromHandle(lpDrawItemStruct->hDC);
// 	CRect rect = lpDrawItemStruct->rcItem;
// 
// 	// Tab이 그려진 테두리의 두께만큼 위치를 보정한다.
// 	rect.top += ::GetSystemMetrics(SM_CYEDGE);
// 	pDC->SetBkMode(TRANSPARENT);
// 
// 	// 탭이 선택된 정보에 따라 배경색을 칠해준다.
// 	if(select_index == GetCurSel()) pDC->FillSolidRect(rect, m_select_border_color);
// 	else pDC->FillSolidRect(rect, m_unselect_border_color);
// 
// 	// 이미지를 출력한다. 
// 	CImageList *p_image_list = GetImageList();
// 	if(p_image_list != NULL && data.iImage >= 0)
// 	{
// 		rect.left += pDC->GetTextExtent(_T(" ")).cx;
// 
// 		IMAGEINFO image_info;
// 		p_image_list->GetImageInfo(data.iImage, &image_info);
// 		CRect image_rect(image_info.rcImage);
// 
// 		p_image_list->Draw(pDC, data.iImage, CPoint(rect.left, rect.top), ILD_TRANSPARENT);
// 		rect.left += image_rect.Width();
// 	}
// 
// 	CFont *p_old_font = NULL;
// 
// 	if(select_index == GetCurSel())
// 	{
// 		// 선택된 탭이라면... 
// 		pDC->SetTextColor(m_select_text_color);
// 
// 		// 텍스트의 위치를 보정하여 선택된 느낌이 강조되도록 만든다.
// 		rect.top -= ::GetSystemMetrics(SM_CYEDGE);
// 		pDC->DrawText(_T("Test"), rect, DT_SINGLELINE | DT_VCENTER | DT_CENTER);
// // 		pDC->DrawText(tab_text, rect, DT_SINGLELINE | DT_VCENTER | DT_CENTER);
// 	}
// 	else
// 	{
// 		// 선택되지 않은 탭이라면...
// 		pDC->SetTextColor(m_unselect_text_color);
// // 		pDC->DrawText(tab_text, rect, DT_SINGLELINE | DT_BOTTOM | DT_CENTER);
// 		pDC->DrawText(_T("Test"), rect, DT_SINGLELINE | DT_BOTTOM | DT_CENTER);
// 	}
// 
// 	pDC->SelectObject(p_old_font);
}
