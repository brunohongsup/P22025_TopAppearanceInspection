#pragma once

#include "RavidImageView.h"

#include <vector>
#include <map>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Framework
	{
		class CRavidDoc;
		class CViewObjectElement;
		class CRavidThumbnailViewLayer;
		class CRavidDlgImageView;

		class AFX_EXT_CLASS CRavidThumbnailView : public CRavidImageView
		{
			RavidUseDynamicCreation();

		protected: // serialization에서만 만들어집니다.
			CRavidThumbnailView();
			CRavidThumbnailView(const CRavidThumbnailView& riv);
			DECLARE_DYNCREATE(CRavidThumbnailView)

		// 특성입니다.
		public:
			CRavidDoc* GetDocument() const;

		// 작업입니다.
		public:

		// 재정의입니다.
		public:
			virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
			virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
		protected:
			virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
			virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
			virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

		// 구현입니다.
		public:
			virtual ~CRavidThumbnailView();
#ifdef _DEBUG
			virtual void AssertValid() const;
			virtual void Dump(CDumpContext& dc) const;
#endif

		public:
			enum EThumbnailDirection
			{
				EThumbnailDirection_LeftToRight = 0,
				EThumbnailDirection_RightToLeft,
				EThumbnailDirection_TopToBottom,
				EThumbnailDirection_BottomToTop,
			};

			enum EThumbnailDrawing
			{
				EThumbnailDrawing_Ratio = 0,
				EThumbnailDrawing_Fit,
				EThumbnailDrawing_AlignmentCenter,
				EThumbnailDrawing_AlignmentLeft,
				EThumbnailDrawing_AlignmentLeftTop,
				EThumbnailDrawing_AlignmentTop,
				EThumbnailDrawing_AlignmentRightTop,
				EThumbnailDrawing_AlignmentRight,
				EThumbnailDrawing_AlignmentRightBottom,
				EThumbnailDrawing_AlignmentBottom,
			};

			enum EThumbnailOutputViewOption
			{
				EThumbnailOutputViewOption_PopupView,
				EThumbnailOutputViewOption_ImageView,
				EThumbnailOutputViewOption_None,
			};

			bool SetThumbnailDirection(_In_ EThumbnailDirection eDirection);
			EThumbnailDirection GetThumbnailDirection();

			bool SetThumbnailDrawing(_In_ EThumbnailDrawing eDrawing);
			EThumbnailDrawing GetThumbnailDrawing();

			bool AddImage(_In_ Algorithms::CRavidImage* pImageInfo);
			bool DeleteImage(_In_ int nIndex);
			bool ClearImage();

			Algorithms::CRavidImage* GetImageInfo(_In_ int nIndex);

			int GetImageCount();

			bool ShowScrollBar(_In_ bool bShow);
			bool IsShowScrollBar();

			bool SelectIndex(_In_ int nIndex);
			int GetSelectedIndex();

			void SetImageBackground(_In_ COLORREF clr);
			COLORREF GetImageBackground();

			bool SetOutputView(_In_ EThumbnailOutputViewOption eOption, _In_ CRavidImageView* pImageView = nullptr);

			CRavidDlgImageView* GetPopupView();

			void SetHoverFrameColor(_In_ COLORREF clr);
			COLORREF GetHoverFrameColor();

			void SetSelectFrameColor(_In_ COLORREF clr);
			COLORREF GetSelectFrameColor();

			void SetNormalFrameColor(_In_ COLORREF clr);
			COLORREF GetHoverNormalColor();

		protected:
			bool IsDirectionHorizontal();

			bool UpdateScrollbar();

		public:
			bool DoesImageExist();
			bool IsOpen();

			virtual bool Open(_In_opt_ LPCTSTR lpszFileName = nullptr) override;
			virtual bool Save(_In_opt_ LPCTSTR lpszFileName = nullptr) override;
			virtual bool Close();

			virtual bool SetImageInfo(_In_ Algorithms::CRavidImage* pImgInfo, _In_opt_ bool bZoomFit = true) override;
			virtual Algorithms::CRavidImage* GetImageInfo() override;

			virtual void Zoom(_In_ POINT point, _In_opt_ double fScale = 1.0f) override;
			virtual void ZoomIn(_In_ POINT point, _In_opt_ double fRatio = 1.25f) override;
			virtual void ZoomOut(_In_ POINT point, _In_opt_ double fRatio = .8f) override;
			virtual void ZoomFit() override;

			virtual bool IsPanned() override;

			virtual bool SetScale(_In_ double dblScale) override;
			virtual double GetScale() override;

			virtual bool SetPanningOffset(_In_ double x, _In_ double y) override;
			virtual bool SetPanningOffset(_In_ CRavidPoint<double>& rpOffset) override;
			virtual bool SetPanningOffset(_In_ CRavidPoint<double>* pRpOffset) override;
			virtual CRavidPoint<double> GetPanningOffset() override;

			virtual void ShowPixelValue(_In_ bool bShow) override;
			virtual bool IsPixelValueShowing() override;

			virtual void ShowPixelSpectrum(_In_ bool bShow) override;
			virtual bool IsPixelSpectrumShowing() override;

			virtual void ShowPixelGrid(_In_ bool bShow) override;
			virtual bool IsPixelGridShowing() override;

			virtual void ShowStatus(_In_ bool bShow) override;
			virtual bool IsStatusShowing() override;

			virtual bool SetAccuracyX(double dblAccuracyX) override;
			virtual double GetAccuracyX() override;

			virtual bool SetAccuracyY(double dblAccuracyY) override;
			virtual double GetAccuracyY() override;

			CRavidThumbnailViewLayer* GetLayer(_In_ int nNumber);

			virtual bool CaptureScreen(_Out_ Algorithms::CRavidImage* pImgInfo) override;

			// Only framework use

			virtual bool OnImageOpen() override;
			virtual bool OnImageSave() override;
			virtual bool OnImageClose() override;
			virtual bool OnImageCopy() override;
			virtual bool OnImageCopyFromTheIPT() override;
			virtual bool OnImageCopyFromTheProject() override;
			virtual bool OnImageCopyToTheIPT(_In_ Algorithms::CRavidImage* pImage) override;
			virtual bool OnImageCopyToTheProject(_In_ Algorithms::CRavidImage* pImage) override;
			virtual bool OnImageTransferIPT() override;
			virtual bool OnImageTransferProject() override;
			virtual bool OnInspect(_In_ int nIndex) override;
			virtual bool OnTeaching(_In_ int nIndex) override;
			virtual bool OnEditTeaching(_In_ int nIndex) override;
			virtual bool OnMeasure(_In_ ERavidMeasurementType eType) override;
			virtual bool OnToggleLayer(_In_ int nIndex) override;
			virtual bool OnAccuracySetting() override;

			virtual int GetStatusHeight() override;

			virtual bool LoadExtraData() override;

			virtual bool SetPrevImageInfo(_In_ Algorithms::CRavidImage* pImgInfo) override;
			virtual Algorithms::CRavidImage* GetPrevImageInfo() override;

			virtual bool AddViewObject(_In_ CViewObject* pRSO, _In_opt_ bool bAutoShape = true, _Out_opt_ CViewObject** ppCreateRSO = nullptr) override;
			virtual bool DeleteViewObject(_In_ CViewObject* pRSO) override;
			virtual bool ClearViewObject(_In_opt_ bool bIgnoreImageToolObject = false) override;

			virtual bool SelectViewObjectElement(_In_ CViewObjectElement* pRSOE) override;

			virtual bool CorrelatePointOfView(_In_ CRavidImageView* pImageView) override;
			virtual bool ReleaseCorrelatedPointOfView(_In_ CRavidImageView* pImageView) override;

			virtual void SetImageClientSize(_In_ int nWidth, _In_ int nHeight) override;
			virtual CRavidPoint<int> GetImageClientSize() override;

			virtual bool CopyGeometryTotheProject(_In_ CViewObjectElement* pViewObjectElement) override;

			virtual bool IPTTransferGeometryTotheProject(_In_ CViewObjectElement* pViewObjectElement) override;
			virtual bool ProjectTransferGeometryTotheProject(_In_ CViewObjectElement* pViewObjectElement) override;

			virtual bool ProjectCopyGeometryFromtheProject() override;
			virtual bool IPTCopyGeometryFromtheProject() override;

			virtual bool ProjectBringGeometryFromtheProject() override;
			virtual bool IPTBringGeometryFromtheProject() override;

			virtual int GetProjectImageGeometry() override;
			virtual int GetProjectImageGeometryToIPT() override;

			virtual bool DeleteAt(_In_ CViewObject* pViewObject, _In_ CRavidGeometry* pGeometry, _In_ int nIndex) override;

			virtual bool ChangeViewImage(_In_ Algorithms::CRavidImage* pImage, _In_ CString strTitle) override;

			virtual bool ProjectTransferImageToTheIPT() override;
			virtual bool ProjectTransferImageToTheProject() override;
			virtual bool ProjectBringImageFromTheProject() override;
			virtual bool IPTBringImageFromTheProject() override;

			virtual CViewObjectElement* GetSelectViewObjectElement() override;

			virtual bool LoadOperation(_In_ CViewObjectElement* pViewObjectElement) override;
			virtual bool OperationViewObject(_In_ CViewObjectElement* pViewObjectElement, _In_ CRavidGeometryArray* pGeometryArray) override;

			virtual bool UpdateOperation() override;
			virtual bool UpdateHighlightOperation(_In_ CViewObjectElement* pViewObjectElement) override;

		protected:
			virtual void SetClientSize(_In_ int nWidth, _In_ int nHeight) override;

			virtual void ChangeImageCanvasSize() override;

			virtual bool InitializeDIB() override;
			virtual bool TerminateDIB() override;

			virtual bool DrawCanvas() override;
			virtual bool DrawImage() override;
			virtual bool DrawLayer() override;
			virtual bool DrawPixelValue() override;
			virtual bool DrawGrid() override;
			virtual bool DrawStatus() override;

			virtual double GetZoomFitScale() override;

			virtual bool RunPopupMenu(CPoint point) override;

			virtual bool IsCorrelatedPointOfView(_In_ CRavidImageView* pImageView) override;
			virtual CRavidImageView* GetBeginCorrelatedPointOfView() override;
			virtual CRavidImageView* GetEndCorrelatedPointOfView() override;

			virtual bool GetCorrelatedPointOfViewList(_Out_ std::vector<CRavidImageView*>* pVctCorrelatedPointOfViews) override;

			virtual bool ArrangeCorrelatedPointOfView() override;

			virtual bool Undo() override;
			virtual bool Redo() override;

			virtual bool ArrangeImageOfView();

			virtual void CalculateImageOffset();

			virtual bool RunOutputView(_In_ int nSelectedIdx);

		// 생성된 메시지 맵 함수
		protected:
			afx_msg void OnFilePrintPreview();
			afx_msg void OnRButtonUp(UINT nFlags, CPoint point);

			DECLARE_MESSAGE_MAP()
		public:
			virtual void OnInitialUpdate();
			afx_msg void OnDestroy();
			afx_msg BOOL OnEraseBkgnd(CDC* pDC);
			afx_msg void OnSize(UINT nType, int cx, int cy);
			afx_msg void OnMouseMove(UINT nFlags, CPoint point);
			afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
			afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
			afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
			afx_msg void OnMButtonUp(UINT nFlags, CPoint point);
			afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
			virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
			virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
			afx_msg void OnDrawItem(int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct);
			afx_msg void OnDropFiles(HDROP hDropInfo);
			afx_msg void OnTimer(UINT_PTR nIDEvent);
			afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
			afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
			afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
			afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
			afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

		protected:
			friend class CRavidThumbnailViewLayer;
			friend class CRavidThumbnailViewLayerElement;

		protected:
			EThumbnailDirection m_eThumbnailDirection = EThumbnailDirection_LeftToRight;
			EThumbnailDrawing m_eThumbnailDrawing = EThumbnailDrawing_Ratio;

			std::deque<Algorithms::CRavidImage*> m_vctThumbnailImageInfo;

			bool m_bIsShowScrollBar = true;

			long m_nImageOffset = 5;

			COLORREF m_clrImageBackground = RGB(255, 255, 255);

			COLORREF m_clrFrameHover = RGB(255, 0, 0);
			COLORREF m_clrFrameSelect = RGB(0, 255, 0);
			COLORREF m_clrFrameNormal = RGB(0, 0, 255);

			std::map<int, CRavidRect<int> > m_mapDrawingPosition;

			int m_nSelectedIndex = -1;

			CRavidImageViewLayer* m_pThumbnailLayer = nullptr;

			std::vector<CRavidThumbnailViewLayer*> m_vctDrawingLayers;

			std::map<Algorithms::CRavidImage*, CRavidPoint<int>> m_mapOffset;
			std::map<Algorithms::CRavidImage*, double> m_mapScale;

			std::map<Algorithms::CRavidImage*, CRavidRect<int> > m_mapImagePosition;
			std::map<Algorithms::CRavidImage*, CRavidRect<int> > m_mapFramePosition;
			std::map<Algorithms::CRavidImage*, CRavidRect<int> > m_mapCanvasPosition;

			CRavidDlgImageView* m_pDlgView = nullptr;

			EThumbnailOutputViewOption m_eOutputOption = EThumbnailOutputViewOption_PopupView;
			CRavidImageView* m_pOutputView = nullptr;
		};
	}
}

#ifndef _DEBUG  // RavidThumbnailView.cpp의 디버그 버전
inline Ravid::Framework::CRavidDoc* Ravid::Framework::CRavidThumbnailView::GetDocument() const
{
	return reinterpret_cast<Ravid::Framework::CRavidDoc*>(m_pDocument);
}
#endif

