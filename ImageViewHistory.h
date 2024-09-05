#pragma once
#include "ImageCameraView.h"
namespace Ravid
{
	namespace Framework
	{
		class CRavidDocDialogView;

		class CImageViewHistory : public CImageCameraView
		{
		public:
			CImageViewHistory();
			DECLARE_DYNCREATE(CImageViewHistory)

			virtual ~CImageViewHistory();

		public:
			CRavidDocDialogView* GetDoc();

			virtual void OnDraw(CDC* /*pDC*/);

			DECLARE_MESSAGE_MAP()
		public:
			afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);

		protected:
			virtual bool RunPopupMenu(CPoint point);
		};
	}
}

