#pragma once

//////////////////////////////////////////////////////////////////////////
using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Mathematics;
using namespace Ravid::Miscellaneous;
//////////////////////////////////////////////////////////////////////////

class CImageViewMain : public Ravid::Framework::CRavidImageView
{
	RavidUseDynamicCreation();

public:
	CImageViewMain();
	~CImageViewMain();

	DECLARE_DYNCREATE(CImageViewMain)

	CRavidDoc* GetDocument() const;

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	DECLARE_MESSAGE_MAP()

public:
	void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.

	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

