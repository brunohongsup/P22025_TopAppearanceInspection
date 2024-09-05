#include "stdafx.h"

#include "ImageCameraView.h"
#include "EHBase.h"



using namespace Ravid::Framework;

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CImageCameraView, CUtilPen)

CImageCameraView::CImageCameraView()
{
	m_bPopup = false;
	m_nThumnail = -1;
	m_nViewNo = -1;
}

CImageCameraView::~CImageCameraView()
{
	ClearLayerDrawingObject();
}

#ifdef _DEBUG
void CImageCameraView::AssertValid() const
{
	CView::AssertValid();
}

void CImageCameraView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}


#endif //_DEBUG

CRavidDoc* CImageCameraView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRavidDoc)));
	return (CRavidDoc*)m_pDocument;
}

BEGIN_MESSAGE_MAP(CImageCameraView, CUtilPen)
	ON_WM_SIZE()
	ON_WM_MOVE()
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()


void CImageCameraView::OnDraw(CDC* pDC)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	CRavidDoc* pDoc = (CRavidDoc*)GetDocument();

	ASSERT_VALID(pDoc);

	if(!pDoc)
		return;

	int nObjectID = this->GetObjectID();

 
	CRavidImageViewLayer* pLayer = GetLayer(9);
	pLayer->Clear();

	CRavidPoint<double> rp;
	rp = ScreenCoordToImageCoord(1, 0);
	CRavidPoint<double> rp2;
	rp2 = ScreenCoordToImageCoord(20, 5);

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(0));

	if(!pHandler)
		return;

	do 
	{
		break;

		ptrdiff_t nImgSizeX = 0;
		ptrdiff_t nImgSizeY = 0;


		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(this);

		if(!pImageView)
			break;

		if(!pImageView->GetImageInfo())
			break;


		nImgSizeX = pImageView->GetImageInfo()->GetSizeX();
		nImgSizeY = pImageView->GetImageInfo()->GetSizeY();



		if(nObjectID <=  1)
		{
		

			CDefinition::SdefaultModelParam modelParam;
			if(!pHandler->GetModelParam(modelParam))
				break;
			CUtil util;

			CRavidPoint<double> rpTarget;
			util.ConvertRectStringToPointStructure(_T(""), &rpTarget);

			CRavidPoint<double> rpTX1;
			rpTX1.SetPoint(1, rpTarget.y);
			CRavidPoint<double> rpTX2;
			rpTX2.SetPoint(nImgSizeX, rpTarget.y);

			CRavidPoint<double> rpTY1;
			rpTY1.SetPoint(rpTarget.x, 1);
			CRavidPoint<double> rpTY2;
			rpTY2.SetPoint(rpTarget.x, nImgSizeY);

			CRavidLine<double> rlTX;
			CRavidLine<double> rlTY;

			rlTX.SetLine(rpTX1, rpTX2);
			rlTY.SetLine(rpTY1, rpTY2);

// 			pLayer->DrawShape(rlTX, LIME, 1);
// 			pLayer->DrawShape(rlTY, LIME, 1);
//			pLayer->DrawShape(rlTX, YELLOW, 2, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);
//			pLayer->DrawShape(rlTY, YELLOW, 2, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);
		}
		

		CRavidPoint<double> rpX1;
		rpX1.SetPoint(1, nImgSizeY / 2);
		CRavidPoint<double> rpX2;
		rpX2.SetPoint(nImgSizeX, nImgSizeY / 2);

		CRavidPoint<double> rpY1;
		rpY1.SetPoint(nImgSizeX / 2, 1);
		CRavidPoint<double> rpY2;
		rpY2.SetPoint(nImgSizeX / 2, nImgSizeY - 1);

		CRavidLine<double> rlX;
		CRavidLine<double> rlY;


		rlX.SetLine(rpX1, rpX2);
		rlY.SetLine(rpY1, rpY2);

		pLayer->DrawShape(rlX, LIME, 1);
		pLayer->DrawShape(rlY, LIME, 1);

	} while (false);


// 	CDefinition::SName sNames;
// 
// 	pLayer->DrawText(rp2, pHandler->GetViewName(nObjectID - CDefinition::EViewID_ImageView_UVW_Left1), BLACK, WHITE, 20);

	if(CUtilPen::DoesImageExist())
	{

	}


	__super::OnDraw(pDC);

}



void CImageCameraView::OnInitialUpdate()
{
	__super::OnInitialUpdate();

	do
	{

	}
	while(false);

}


void CImageCameraView::OnSize(UINT nType, int cx, int cy)
{
	CUtilPen::OnSize(nType, cx, cy);

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


void CImageCameraView::OnMove(int x, int y)
{
	CUtilPen::OnMove(x, y);

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


void CImageCameraView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	switch(nIDEvent)
	{
	case 1:
		{

		}
		break;

	default:
		break;
	}
	CUtilPen::OnTimer(nIDEvent);
}


void CImageCameraView::OnDestroy()
{
	CUtilPen::OnDestroy();

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}



BOOL CImageCameraView::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	if(pMsg->message == WM_MOUSEMOVE)
	{

	}
	return CUtilPen::PreTranslateMessage(pMsg);
}


bool CImageCameraView::Close()
{
	bool bReturn = false;
	do
	{
		if(!__super::Close())
			break;

		if(m_pRvImage)
		{
			SetImageInfo(m_pRvImage);
			Invalidate();
		}

		bReturn = true;

	}
	while(false);

	return bReturn;
}

void CImageCameraView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CUtilPen::OnMouseMove(nFlags, point);
}


void CImageCameraView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CUtilPen::OnLButtonUp(nFlags, point);
}

void CImageCameraView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CUtilPen::OnLButtonDown(nFlags, point);

	int nObjectID = GetObjectID();



	if(m_bMaualAlignPointUse)
	{
		CRavidPoint<double> rpMouse = ScreenCoordToImageCoord(point.x, point.y);

		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(0));

		if(!pHandler)
			return;

// 		CDefinition::sAlignResult sData;
// 
// 		sData = pHandler->GetAlignMarkResult();
// 
// 		int nIndx = (nObjectID - CDefinition::EViewID_ImageView_UVW_Left1) % 4;
// 
// 		sData.bMarkResult[nIndx] = true;
// 		sData.rqdMarkCenter[nIndx] = pHandler->MakeRavidQuadrdFromPoint(rpMouse);
// 		sData.dblFindScore[nIndx] = 100.f;
// 
// 		pHandler->InspectionManual(eStage, nObjectID, sData);

	}
	else
	{
// 		CFormViewGlassInfo* pFormGlassInfo = dynamic_cast<CFormViewGlassInfo*>(CUIManager::FindView(RUNTIME_CLASS(CFormViewGlassInfo), eView));
// 
// 		if(pFormGlassInfo)
// 		{
// 			if(IsUsePen())
// 				pFormGlassInfo->SetEditBoxGV(GetPenGV());
// 		}
	}
	
}

void CImageCameraView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CUtilPen::OnRButtonDown(nFlags, point);
}

void CImageCameraView::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	do
	{
		CString strMsg;
// 
// 		CEventHandler* pHandler = dynamic_cast<CEventHandler*>(CEventHandlerManager::GetEventHandler(0));
// 		if(!pHandler)
// 			break;

		if(m_bIsRoiTeaching)
		{
			int nObject = GetObjectID();
			int nNumber = 0;
// 			switch(GetObjectID())
// 			{
// 			case EViewTypeTopInspectorTeachingImage1:
// 				nNumber = 0;
// 				break;
// 			case EViewTypeTopInspectorTeachingImage2:
// 				nNumber = 1;
// 				break;
// 			case EViewTypeTopInspectorTeachingImage3:
// 				nNumber = 2;
// 				break;
// 			default:
// 				break;
// 			}
			std::vector<CRavidQuadrangle<double>>* pVctTeachingInfo = m_pROITechingArea;

			if(!pVctTeachingInfo)
			{
				CUtilPen::OnRButtonUp(nFlags, point);
				break;
			}

			size_t nCount = pVctTeachingInfo->size();

			if(!nCount)
			{
				CUtilPen::OnRButtonUp(nFlags, point);
				break;
			}
			CRavidPoint<double> rpImg;
			rpImg = ScreenCoordToImageCoord((CRavidPoint<int>)point);
			CRavidQuadrangle<double>* pData = &pVctTeachingInfo->at(0);
			CPoint pointscreen(point);
			ClientToScreen(&pointscreen);
			CRavidQuadrangle<double> rqTeaching;
			CMenu menu;
			UINT nMenuItem = 0;

			menu.CreatePopupMenu();

			menu.AppendMenu(MF_STRING, 1, _T("수정"));
			menu.AppendMenu(MF_STRING, 2, _T("복사"));
			menu.AppendMenu(MF_STRING, 3, _T("삭제"));


			int nDataNumber = 0;
			bool bCheck = false;
			CViewObjectElement* pVoe = GetSelectViewObjectElement();
			if(pVoe)
			{
				if(pVoe->GetRect().DoesIntersect(rpImg))
				{
					CUtilPen::OnRButtonUp(nFlags, point);
					break;

				}
			}
			for(int i = 0; i < nCount; ++i)
			{
				if(pData[i].DoesIntersect(rpImg))
				{
					nMenuItem = menu.TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON | TPM_RETURNCMD, pointscreen.x, pointscreen.y, this);
					nDataNumber = i;
					rqTeaching = pData[i];
					bCheck = true;
					break;
				}
			}
			if(!bCheck)
				CUtilPen::OnRButtonUp(nFlags, point);
			CString strTitle;
			CRavidRect<double> rRectTeaching;
			Ravid::Framework::CTeachingObject rMasterTeaching;
			rMasterTeaching.SetAutoShape(false);
			strMsg.Format(_T("[%d]"), nDataNumber);

			switch(nMenuItem)
			{
			case 1:
				{
					rMasterTeaching.SetTitle(strMsg);
					rMasterTeaching.SetObjectID(31);
					rMasterTeaching.Add(rqTeaching);
					AddViewObject(&rMasterTeaching, false);
				}
				break;
			case 2:
				{
					rMasterTeaching.SetTitle(_T("[Add]"));
					rMasterTeaching.SetObjectID(31);
					rqTeaching.Offset(CRavidPoint<int>(5, 0));
					rMasterTeaching.Add(rqTeaching);
					AddViewObject(&rMasterTeaching, false);
				}
				break;
			case 3:
				{
					pVctTeachingInfo->erase(pVctTeachingInfo->begin() + nDataNumber);
					//pHandler->ReDrawTeachingBlob(nNumber);
				}
				break;
			default:
				break;
			}

			Invalidate();
		}
		else
		{
			CUtilPen::OnRButtonUp(nFlags, point);
		
		}


	}
	while(false);
}

BOOL CImageCameraView::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	return CUtilPen::OnMouseWheel(nFlags, zDelta, pt);

}

bool CImageCameraView::SetImageInfo(Algorithms::CRavidImage * pImgInfo, bool bZoomFit)
{
	bool bReturn = false;

	do
	{
		if(!pImgInfo)
		{
			bReturn = __super::SetImageInfo(pImgInfo, bZoomFit);
			break;
		}

		m_ri.Lock();
		m_ri.Copy(pImgInfo);
		m_ri.Unlock();

		bReturn = __super::SetImageInfo(&m_ri, bZoomFit);

		DrawingLayer();
	}
	while(false);

	return bReturn;
}

bool CImageCameraView::Clear()
{
	bool bReturn = false;

	int nObjectID = GetObjectID()/* - CDefinition::EViewID_ImageView_UVW_Left1*/;

	do
	{
		ClearLayerDrawingObject();

		for(int i = 0; i < EMaxLayerCount; ++i)
		{
			CRavidImageViewLayer* pLayer = GetLayer(i);
			if(!pLayer)
				continue;

			pLayer->Clear();
		}

		m_ri.Lock();

		CDeviceEuresysDominoSymphony* pCamera = dynamic_cast<CDeviceEuresysDominoSymphony*>(CDeviceManager::GetDeviceByIndex((size_t)0));
		if(!pCamera)
			break;

		ptrdiff_t nImageSizeX = ImageSizeX;
		ptrdiff_t nImageSizeY = ImageSizeY;

		if(pCamera->IsInitialized())
		{
			nImageSizeX = pCamera->GetImageInfo()->GetSizeX();
			nImageSizeY = pCamera->GetImageInfo()->GetSizeY();
		}


		if(m_ri.GetSizeX() != nImageSizeX || m_ri.GetSizeY() != nImageSizeY)
			m_ri.CreateImageBuffer(nImageSizeX, nImageSizeY, 255);
		else
			m_ri.Mask(255);

		m_ri.Unlock();

		__super::SetImageInfo(&m_ri, false);
//		ZoomFit();

		Invalidate(false);

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CImageCameraView::DrawShape(CDefinition::ELayer eLayer, CRavidGeometry * pRgObject, COLORREF crLineColor, long nLineWidth, COLORREF crFillColor, ERavidImageViewPenStyle ePenStyle, float fLineColorAlphaRatio, float fFillColorAlphaRatio)
{
	bool bReturn = false;

	Lock();

	do
	{
		if(!pRgObject)
			break;

		CRavidImageViewLayer* pLayer = GetLayer(eLayer);
		if(!pLayer)
			break;

		pLayer->DrawShape(pRgObject, crLineColor, nLineWidth, crFillColor, ePenStyle, fLineColorAlphaRatio, fFillColorAlphaRatio);

		SDrawObject* pDO = new SDrawObject(eLayer, pRgObject, crLineColor, nLineWidth, crFillColor, ePenStyle, fLineColorAlphaRatio, fFillColorAlphaRatio);
		if(!pDO)
			break;

		m_vctDrawingObject.push_back(pDO);

		bReturn = true;
	}
	while(false);

	Unlock();

	return bReturn;
}

bool CImageCameraView::DrawText(CDefinition::ELayer eLayer, CRavidGeometry* pRgObject, CString strText, COLORREF crTextColor, COLORREF crFillColor, long nFontSize, float fTextColorAlphaRatio, float fFillColorAlphaRatio)
{
	bool bReturn = false;

	Lock();

	do
	{
		if(!pRgObject)
			break;

		CRavidImageViewLayer* pLayer = GetLayer(eLayer);
		if(!pLayer)
			break;

		pLayer->DrawText(pRgObject, strText, crTextColor, crFillColor, nFontSize, false, 0, 0, nullptr, fTextColorAlphaRatio, fFillColorAlphaRatio);


		SDrawObject* pDO = new SDrawObject(eLayer, pRgObject, strText, crTextColor, crFillColor, nFontSize, fTextColorAlphaRatio, fFillColorAlphaRatio);
		if(!pDO)
			break;

		m_vctDrawingObject.push_back(pDO);

		bReturn = true;
	}
	while(false);

	Unlock();

	return bReturn;
}

bool CImageCameraView::DrawingLayer()
{
	bool bReturn = false;

	Lock();

	do
	{
		CRavidImageViewLayer* pLayer[CDefinition::ELayer_Count] = { nullptr, };

		bool bError = false;

		for(int i = 0; i < CDefinition::ELayer_Count; ++i)
		{
			pLayer[i] = GetLayer(i);
			if(!pLayer[i])
			{
				bError = true;
				break;
			}
		}

		if(bError)
			break;

		for(int i = 0; i < CDefinition::ELayer_Count; ++i)
			pLayer[i]->Clear();

		for(auto& iter : m_vctDrawingObject)
		{
			if(!iter)
				continue;

			if(!iter->bIsText)
			{
				pLayer[iter->eLayerType]->DrawShape(iter->pRG, iter->clrLine, iter->nSize, iter->clrFill, iter->ePen, iter->fLineAlphaRatio, iter->fFillAlphaRatio);
			}
			else
			{
				pLayer[iter->eLayerType]->DrawText(iter->pRG, iter->strText, iter->clrLine, iter->clrFill, iter->nSize, false, 0., 0, nullptr, iter->fLineAlphaRatio, iter->fFillAlphaRatio);
			}
		}

		Invalidate(false);

		bReturn = true;
	}
	while(false);

	Unlock();

	return bReturn;
}

bool CImageCameraView::ClearLayerDrawingObject()
{
	Lock();

	for(auto& iter : m_vctDrawingObject)
	{
		if(!iter)
			continue;

		delete iter;
		iter = nullptr;
	}

	m_vctDrawingObject.clear();

	Unlock();

	return true;
}