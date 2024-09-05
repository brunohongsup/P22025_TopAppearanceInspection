//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevBlobSingle.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevBlobSingle::CAlgOevBlobSingle(void)
{
	m_pImageEncoder = new EImageEncoder;
	m_pObjectSelection = new EObjectSelection;
	m_pCodedImage = new ECodedImage2;
	ZeroMemory(&m_dptOffset, sizeof(m_dptOffset));
}

CAlgOevBlobSingle::~CAlgOevBlobSingle(void)
{
	if(m_pObjectSelection)
	{
		delete m_pObjectSelection;
		m_pObjectSelection = nullptr;
	}

	if(m_pCodedImage)
	{
		delete m_pCodedImage;
		m_pCodedImage = nullptr;
	}

	if(m_pImageEncoder)
	{
		delete m_pImageEncoder;
		m_pImageEncoder = nullptr;
	}
}


void CAlgOevBlobSingle::SetColorLayer(eBlobColorLayer eBlobType)
{
	switch(eBlobType)
	{
	case eBlobColorLayer_Black:
		{
			m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetBlackLayerEncoded(true);
			m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetWhiteLayerEncoded(false);
		}
		break;
	case eBlobColorLayer_White:
		{
			m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetBlackLayerEncoded(false);
			m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetWhiteLayerEncoded(true);
		}
		break;
	default:
		{
			VERIFY(false);
		}
		break;
	}
}

void CAlgOevBlobSingle::SetMode(EGrayscaleSingleThreshold eType)
{
	m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetMode(eType);
}

void CAlgOevBlobSingle::SetAbsoluteThreshold(ULONG ulThreshold)
{
	m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetAbsoluteThreshold(ulThreshold);
}

void CAlgOevBlobSingle::SetRelativeThreshold(float fThreshold)
{
	m_pImageEncoder->GetGrayscaleSingleThresholdSegmenter().SetRelativeThreshold(fThreshold);
}

bool CAlgOevBlobSingle::Encode(CImageInfo* pImgInfo, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		EROIBW8 eRoi;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());

			m_dptOffset.x = 0;
			m_dptOffset.y = 0;
		}

		m_pImageEncoder->Encode(eRoi, *m_pCodedImage);

		m_pObjectSelection->Clear();
		m_pObjectSelection->AddObjects(*m_pCodedImage);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevBlobSingle::ClearFilter()
{
	bool bReturn = false;

	try
	{
		m_pObjectSelection->Clear();
		m_pObjectSelection->AddObjects(*m_pCodedImage);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevBlobSingle::AddFilter(EFeature eFeature, float fValue, ESingleThresholdMode eCondition)
{
	bool bReturn = false;

	try
	{
		switch(eCondition)
		{
		case ESingleThresholdMode_Equal:
			eCondition = ESingleThresholdMode_Different;
			break;
		case ESingleThresholdMode_Different:
			eCondition = ESingleThresholdMode_Equal;
			break;
		case ESingleThresholdMode_Greater:
			eCondition = ESingleThresholdMode_LessEqual;
			break;
		case ESingleThresholdMode_GreaterEqual:
			eCondition = ESingleThresholdMode_Less;
			break;
		case ESingleThresholdMode_Less:
			eCondition = ESingleThresholdMode_GreaterEqual;
			break;
		case ESingleThresholdMode_LessEqual:
			eCondition = ESingleThresholdMode_Greater;
			break;
		default:
			ASSERT(false);
			eCondition = ESingleThresholdMode_reserved;
			break;
		}

		m_pObjectSelection->RemoveUsingFloatFeature(eFeature, fValue, eCondition);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevBlobSingle::Sort(EFeature eFeature, ESortDirection eSortDir)
{
	bool bReturn = false;

	try
	{
		m_pObjectSelection->Sort(eFeature, eSortDir);

		bReturn = true;
	}
	catch(const EException&)
	{

	}

	return bReturn;
}

std::vector<RECT> CAlgOevBlobSingle::GetPositionRect()
{
	std::vector<RECT> vctResult;

	int nCount = m_pObjectSelection->GetElementCount();

	for(int i = 0; i < nCount; ++i)
	{
		ERotatedBoundingBox boundingBox = m_pObjectSelection->GetElement(i).GetBoundingBox();

		CRect rcObject;

		rcObject.left = rcObject.right = boundingBox.GetCenter().GetX() + m_dptOffset.x;
		rcObject.top = rcObject.bottom = boundingBox.GetCenter().GetY() + m_dptOffset.y;
		
		rcObject.left -= boundingBox.GetWidth() / 2.f;
		rcObject.right += (boundingBox.GetWidth() / 2.f) + 1;
		rcObject.top -= boundingBox.GetHeight() / 2.f;
		rcObject.bottom += (boundingBox.GetHeight() / 2.f) + 1;

		vctResult.push_back(rcObject);
	}

	return vctResult;
}

bool CAlgOevBlobSingle::GetPositionRect(std::vector<RECT>* pVctRect)
{
	bool bReturn = false;

	do 
	{
		if(!pVctRect)
			break;

		pVctRect->clear();

		int nCount = m_pObjectSelection->GetElementCount();

		for(int i = 0; i < nCount; ++i)
		{
			ERotatedBoundingBox boundingBox = m_pObjectSelection->GetElement(i).GetBoundingBox();

			CRect rcObject;

			rcObject.left = rcObject.right = boundingBox.GetCenter().GetX() + m_dptOffset.x;
			rcObject.top = rcObject.bottom = boundingBox.GetCenter().GetY() + m_dptOffset.y;

			rcObject.left -= boundingBox.GetWidth() / 2.f;
			rcObject.right += (boundingBox.GetWidth() / 2.f) + 1;
			rcObject.top -= boundingBox.GetHeight() / 2.f;
			rcObject.bottom += (boundingBox.GetHeight() / 2.f) + 1;

			pVctRect->push_back(rcObject);
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

std::vector<std::vector<DPOINT>> CAlgOevBlobSingle::GetConvexHull()
{
	std::vector<std::vector<DPOINT>> vctResult;

	int nCount = m_pObjectSelection->GetElementCount();

	for(int i = 0; i < nCount; ++i)
	{
		std::vector<DPOINT> vctPoints;

		EPathVector pathVector;
		m_pObjectSelection->GetElement(i).ComputeConvexHull(pathVector);

		int nPathCount = pathVector.GetNumElements();
		
		for(int j = 0; j < nPathCount; ++j)
		{
			EPath path = pathVector.GetElement(j);

			DPOINT dptPoint;

			dptPoint.x = path.X + m_dptOffset.x;
			dptPoint.y = path.Y + m_dptOffset.y;

			vctPoints.push_back(dptPoint);
		}

		vctResult.push_back(vctPoints);
	}

	return vctResult;
}


bool CAlgOevBlobSingle::GetConvexHull(std::vector<std::vector<DPOINT>>* pVctPoints)
{
	bool bReturn = false;

	do 
	{
		if(!pVctPoints)
			break;

		for(auto iter = pVctPoints->begin(); iter != pVctPoints->end(); ++iter)
			iter->clear();
		pVctPoints->clear();

		int nCount = m_pObjectSelection->GetElementCount();

		for(int i = 0; i < nCount; ++i)
		{
			std::vector<DPOINT> vctPoints;

			EPathVector pathVector;
			m_pObjectSelection->GetElement(i).ComputeConvexHull(pathVector);

			int nPathCount = pathVector.GetNumElements();

			for(int j = 0; j < nPathCount; ++j)
			{
				EPath path = pathVector.GetElement(j);

				DPOINT dptPoint;

				dptPoint.x = path.X + m_dptOffset.x;
				dptPoint.y = path.Y + m_dptOffset.y;

				vctPoints.push_back(dptPoint);
			}

			pVctPoints->push_back(vctPoints);
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}


std::vector<SOevBlobEllipse> CAlgOevBlobSingle::GetEllipse()
{
	std::vector<SOevBlobEllipse> vctResult;

	int nCount = m_pObjectSelection->GetElementCount();

	for(int i = 0; i < nCount; ++i)
	{
		SOevBlobEllipse ellipseResult;

		ellipseResult.fWidth = m_pObjectSelection->GetElement(i).GetEllipseWidth();
		ellipseResult.fHeight = m_pObjectSelection->GetElement(i).GetEllipseHeight();
		ellipseResult.fAngle = m_pObjectSelection->GetElement(i).GetEllipseAngle();

		vctResult.push_back(ellipseResult);
	}

	return vctResult;
}

bool CAlgOevBlobSingle::GetEllipse(std::vector<SOevBlobEllipse>* pVctBlobEllipse)
{
	bool bReturn = false;

	do 
	{
		if(!pVctBlobEllipse)
			break;

		pVctBlobEllipse->clear();

		int nCount = m_pObjectSelection->GetElementCount();

		for(int i = 0; i < nCount; ++i)
		{
			SOevBlobEllipse ellipseResult;

			ellipseResult.fWidth = m_pObjectSelection->GetElement(i).GetEllipseWidth();
			ellipseResult.fHeight = m_pObjectSelection->GetElement(i).GetEllipseHeight();
			ellipseResult.fAngle = m_pObjectSelection->GetElement(i).GetEllipseAngle();

			pVctBlobEllipse->push_back(ellipseResult);
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

std::vector<int> CAlgOevBlobSingle::GetArea()
{
	std::vector<int> vctResult;

	int nCount = m_pObjectSelection->GetElementCount();

	for(int i = 0; i < nCount; ++i)
		vctResult.push_back(m_pObjectSelection->GetElement(i).GetArea());

	return vctResult;
}


bool CAlgOevBlobSingle::GetArea(std::vector<int>* pVctArea)
{
	bool bReturn = false;

	do 
	{
		if(!pVctArea)
			break;

		pVctArea->clear();

		int nCount = m_pObjectSelection->GetElementCount();

		for(int i = 0; i < nCount; ++i)
			pVctArea->push_back(m_pObjectSelection->GetElement(i).GetArea());

		bReturn = true;
	}
		while(false);

	return bReturn;
}

std::vector<float> CAlgOevBlobSingle::GetAverageGV(CImageInfo* pImgInfo, RECT* pBlobRegion /* = nullptr */)
{
	std::vector<float> vctReturn;

	if(!GetAverageGV(pImgInfo, &vctReturn, pBlobRegion))
		vctReturn.clear();

	return vctReturn;
}

bool CAlgOevBlobSingle::GetAverageGV(CImageInfo* pImgInfo, std::vector<float>* pVctGVs, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	do 
	{
		try
		{
			if(!pImgInfo || !pImgInfo->GetBuffer())
				break;

			if(!pVctGVs)
				break;

			if(!m_pObjectSelection)
				break;

			pVctGVs->clear();

			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pBlobRegion)
			{
				CRect rcBlobRegion(*pBlobRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			int nCount = m_pObjectSelection->GetElementCount();

			for(int i = 0; i < nCount; ++i)
			{
				float fGV = m_pObjectSelection->GetElement(i).ComputePixelGrayAverage(eRoi);

				pVctGVs->push_back(fGV);
			}

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}
	while(false);

	return bReturn;
}

std::vector<SOevBlobMinimumEnclosingRectangle> CAlgOevBlobSingle::GetMinimumEnclosingRectangle()
{
	std::vector<SOevBlobMinimumEnclosingRectangle> vctResult;

	int nCount = m_pObjectSelection->GetElementCount();

	for(int i = 0; i < nCount; ++i)
	{
		SOevBlobMinimumEnclosingRectangle minEncloseRect;

		minEncloseRect.dptCenter.x = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleCenterX();
		minEncloseRect.dptCenter.y = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleCenterY();
		minEncloseRect.fWidth = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleWidth();
		minEncloseRect.fHeight = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleHeight();
		minEncloseRect.fAngle = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleAngle();
		
		for(int j = 0; j < 4; ++j)
		{
			minEncloseRect.dqdrRegion.ptKnot[j].x = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangle().GetQuadrangle().GetPoint(j).GetX();
			minEncloseRect.dqdrRegion.ptKnot[j].y = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangle().GetQuadrangle().GetPoint(j).GetY();
		}

		vctResult.push_back(minEncloseRect);
	}

	return vctResult;
}

bool CAlgOevBlobSingle::GetMinimumEnclosingRectangle(std::vector<SOevBlobMinimumEnclosingRectangle>* pVctBlobMinEncloseRect)
{
	bool bReturn = false;

	do 
	{
		if(!pVctBlobMinEncloseRect)
			break;

		pVctBlobMinEncloseRect->clear();

		int nCount = m_pObjectSelection->GetElementCount();

		for(int i = 0; i < nCount; ++i)
		{
			SOevBlobMinimumEnclosingRectangle minEncloseRect;

			minEncloseRect.dptCenter.x = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleCenterX();
			minEncloseRect.dptCenter.y = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleCenterY();
			minEncloseRect.fWidth = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleWidth();
			minEncloseRect.fHeight = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleHeight();
			minEncloseRect.fAngle = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangleAngle();

			for(int j = 0; j < 4; ++j)
			{
				minEncloseRect.dqdrRegion.ptKnot[j].x = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangle().GetQuadrangle().GetPoint(j).GetX();
				minEncloseRect.dqdrRegion.ptKnot[j].y = m_pObjectSelection->GetElement(i).GetMinimumEnclosingRectangle().GetQuadrangle().GetPoint(j).GetY();
			}

			pVctBlobMinEncloseRect->push_back(minEncloseRect);
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

CVisionObject* CAlgOevBlobSingle::CreateVisionInstance()
{
	return nullptr;
}



