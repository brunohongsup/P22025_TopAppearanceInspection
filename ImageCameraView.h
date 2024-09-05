#pragma once

#include "CommonCls/UtilPen.h"
#include "CommonCls/Util.h"


#include "Definition.h"

using namespace Ravid::Framework;

#define ImageSizeX 1356
#define ImageSizeY 1039

class CImageCameraView : public CUtilPen
{
	RavidUseDynamicCreation();

	typedef struct _sDrawObject
	{
		CDefinition::ELayer eLayerType = CDefinition::ELayer_Operator;
		CRavidGeometry* pRG = nullptr;
		COLORREF clrLine = 0;
		long nSize = 1;
		COLORREF clrFill = 0;
		ERavidImageViewPenStyle ePen = ERavidImageViewPenStyle_SOLID;
		float fLineAlphaRatio = 1.f;
		float fFillAlphaRatio = 1.f;

		bool bIsText = false;
		CString strText = _T("");

		_sDrawObject(_In_ CDefinition::ELayer eLayer, _In_ CRavidGeometry* pRgObject, _In_opt_ COLORREF crLineColor = 0, _In_opt_ long nLineWidth = 1, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ ERavidImageViewPenStyle ePenStyle = ERavidImageViewPenStyle_SOLID, _In_opt_ float fLineColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f)
		{
			CRavidObject* pRO = nullptr;

			do
			{
				if(!pRgObject)
					break;

				pRO = pRgObject->CreateInstance();
				if(!pRO)
					break;

				pRG = dynamic_cast<CRavidGeometry*>(pRO);
				if(!pRG)
					break;

				eLayerType = eLayer;
				clrLine = crLineColor;
				nSize = nLineWidth;
				clrFill = crFillColor;
				ePen = ePenStyle;
				fLineAlphaRatio = fLineColorAlphaRatio;
				fFillAlphaRatio = fFillColorAlphaRatio;

				bIsText = false;
			}
			while(false);

			if(!pRG && pRO)
				delete pRO;

			pRO = nullptr;
		}

		_sDrawObject(_In_ CDefinition::ELayer eLayer, _In_ CRavidGeometry* pRgObject, _In_ CString str, _In_opt_ COLORREF crTextColor = 0, _In_opt_ COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, _In_opt_ long nFontSize = 12, _In_opt_ float fTextColorAlphaRatio = 1.f, _In_opt_ float fFillColorAlphaRatio = 1.f)
		{
			CRavidObject* pRO = nullptr;

			do
			{
				if(!pRgObject)
					break;

				pRO = pRgObject->CreateInstance();
				if(!pRO)
					break;

				pRG = dynamic_cast<CRavidGeometry*>(pRO);
				if(!pRG)
					break;

				eLayerType = eLayer;

				strText = str;

				clrLine = crTextColor;
				nSize = nFontSize;
				clrFill = crFillColor;
				fLineAlphaRatio = fTextColorAlphaRatio;
				fFillAlphaRatio = fFillColorAlphaRatio;

				bIsText = true;
			}
			while(false);

			if(!pRG && pRO)
				delete pRO;

			pRO = nullptr;
		}

		~_sDrawObject()
		{
			delete pRG;
			pRG = nullptr;
		}
	}
	SDrawObject;


protected:
	CImageCameraView();

	DECLARE_DYNCREATE(CImageCameraView)
public:
	virtual ~CImageCameraView();

	CRavidDoc* GetDocument() const;

#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	
//	virtual void OnDraw(CDC* pDC);
	DECLARE_MESSAGE_MAP()

public:
	void SetViewNumber(int nViewNo)	{	m_nViewNo = nViewNo;	}


	///////////////////////////////////////////////////////////
	//
public:
	void SetImagePtr(CRavidImage* pData) { m_pRvImage = pData; }

	void SetPaintingMode(bool bOn) { m_bIsPainting = bOn; }
	void SetRoiTeachingMode(bool bOn) { m_bIsRoiTeaching = bOn; }
private:
	bool m_bIsRoiTeaching = false;
	bool m_bIsPainting = false;
	CRavidImage* m_pRvImage = nullptr;
public:
	virtual void OnInitialUpdate();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMove(int x, int y);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	virtual void OnDraw(CDC* pDC);
	virtual bool Close();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);


	////////////////////////////////////////////////////
	// Layer Draw 
	virtual bool SetImageInfo(CRavidImage* pImgInfo, bool bZoomFit = true);
	bool Clear();

	void SetROITechingArea(std::vector<CRavidQuadrangle<double>>* pvc){m_pROITechingArea = pvc;}

	void SetMaualAlignPointUse(bool bSet){m_bMaualAlignPointUse = bSet;}

	bool DrawShape(CDefinition::ELayer eLayer, CRavidGeometry* pRgObject, COLORREF crLineColor = 0, long nLineWidth = 1, COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle ePenStyle = ERavidImageViewPenStyle_SOLID, float fLineColorAlphaRatio = 1.f, float fFillColorAlphaRatio = 1.f);

	bool DrawText(CDefinition::ELayer eLayer, CRavidGeometry* pRgObject, CString strText, COLORREF crTextColor = 0, COLORREF crFillColor = ERavidImageViewLayerTransparencyColor, long nFontSize = 12, float fTextColorAlphaRatio = 1.f, float fFillColorAlphaRatio = 1.f);

	bool DrawingLayer();

	bool ClearLayerDrawingObject();

protected:

	CRavidImage m_ri;
	std::vector<SDrawObject*> m_vctDrawingObject;

	bool m_bMaualAlignPointUse = false;

	int m_nThumnail = -1;
	int m_nViewNo = 0;
	bool m_bPopup = false;

	std::vector<CRavidQuadrangle<double>>*  m_pROITechingArea = nullptr;
	////////////////////////////////////////////////////////////////////////

};