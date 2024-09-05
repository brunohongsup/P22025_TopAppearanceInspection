#include "stdafx.h"
#include "ImageViewMain.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CImageViewMain, CRavidImageView)

CImageViewMain::CImageViewMain()
{
}


CImageViewMain::~CImageViewMain()
{
}

#ifdef _DEBUG
void CImageViewMain::AssertValid() const
{
	CView::AssertValid();
}

void CImageViewMain::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRavidDoc* CImageViewMain::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRavidDoc)));
	return (CRavidDoc*)m_pDocument;
}
#endif //_DEBUG

BEGIN_MESSAGE_MAP(CImageViewMain, CRavidImageView)
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()	
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

void CImageViewMain::OnDraw(CDC* pDC)
{
	__super::OnDraw(pDC);
}

void CImageViewMain::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	__super::OnRButtonUp(nFlags, point);
}

void CImageViewMain::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	__super::OnLButtonDown(nFlags, point);
}

void CImageViewMain::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	__super::OnMouseMove(nFlags, point);
}

void CImageViewMain::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	__super::OnLButtonUp(nFlags, point);
}