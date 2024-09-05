//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevImage.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevImage::CAlgOevImage(void)
{
}

CAlgOevImage::~CAlgOevImage(void)
{
}

CVisionObject* CAlgOevImage::CreateVisionInstance()
{
	return nullptr;
}



bool CAlgOevImage::SaveImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, EImageFileType eImageType/* = EImageFileType_Auto*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		eImage.Save(T2A(lpszFileName), eImageType);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevImage::SaveImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, RECT rcRegion, EImageFileType eImageType /* = EImageFileType_Auto */)
{
	bool bReturn = false;

	USES_CONVERSION;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		EROIBW8 eRoi;
		
		CRect rcBlobRegion(rcRegion);

		eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		
		eRoi.Save(T2A(lpszFileName), eImageType);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevImage::SaveColorImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, EImageFileType eImageType/* = EImageFileType_Auto*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	try
	{
		EImageC24 eImage;
//		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer(), 32);
		

		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());
		eImage.Save(T2A(lpszFileName), eImageType);

		bReturn = true;
	}
 	catch(const EException&)
	{

	}

	return bReturn;
}

bool CAlgOevImage::GetMin(CImageInfo* pImgInfo, long* pRetMinGV, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetMinGV)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw8;

			EasyImage::PixelMin(&eRoi, ebw8);

			*pRetMinGV = ebw8.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetMax(CImageInfo* pImgInfo, long* pRetMaxGV, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetMaxGV)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw8;

			EasyImage::PixelMax(&eRoi, ebw8);

			*pRetMaxGV = ebw8.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetAverage(CImageInfo* pImgInfo, float* pRetAverage, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetAverage)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::PixelAverage(&eRoi, *pRetAverage);

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetStandardDeviation(CImageInfo* pImgInfo, float* pRetStdev, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetStdev)
	{
		try
		{
			float fAverage;

			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::PixelStdDev(&eRoi, *pRetStdev, fAverage);

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetVariance(CImageInfo* pImgInfo, float* pRetVariance, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetVariance)
	{
		try
		{
			float fAverage;

			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::PixelVariance(&eRoi, *pRetVariance, fAverage);

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetThresholdValue_MaxEntropy(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetThreshold)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw;
			ebw = EasyImage::AutoThreshold(&eRoi, EThresholdMode_MaxEntropy, 0.f);

			*pRetThreshold = ebw.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}
	

bool CAlgOevImage::GetThresholdValue_MinResidue(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetThreshold)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw;
			ebw = EasyImage::AutoThreshold(&eRoi, EThresholdMode_MinResidue, 0.f);

			*pRetThreshold = ebw.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}


bool CAlgOevImage::GetThresholdValue_Relative(CImageInfo* pImgInfo, float fRelative, int* pRetThreshold, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetThreshold)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw;
			ebw = EasyImage::AutoThreshold(&eRoi, EThresholdMode_Relative, fRelative);

			*pRetThreshold = ebw.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::GetThresholdValue_Isodata(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	USES_CONVERSION;

	if(pRetThreshold)
	{
		try
		{
			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoi;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EBW8 ebw;
			ebw = EasyImage::AutoThreshold(&eRoi, EThresholdMode_Isodata, 0.f);

			*pRetThreshold = ebw.GetUINT32Value();

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}

	return bReturn;
}

bool CAlgOevImage::ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fScaleX, float fScaleY)
{

	EImageBW8 eSrc, eDst;

	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

	DPOINT dptSrcCnt, dptDstCnt;
	dptSrcCnt.x = pSrc->GetSizeX()/2;
	dptSrcCnt.y = pSrc->GetSizeY()/2;
	dptDstCnt.x = pDst->GetSizeX()/2;
	dptDstCnt.y = pDst->GetSizeY()/2;

	EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
		dptDstCnt.x, dptDstCnt.y, fScaleX, fScaleY, 0, &eDst, 8);

	return true;
	
}


bool CAlgOevImage::ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fScaleX, float fScaleY, float fAngle)
{

	bool bReturn = false;

	do 
	{
		if(!pSrc || !pSrc->GetBuffer())
			break;

		if(!pDst || !pDst->GetBuffer())
			break;

		bool bIsSrcColor = pSrc->IsColor();
		bool bIsDstColor = pDst->IsColor();

		if(bIsSrcColor != bIsDstColor)
			break;

		if(!bIsSrcColor)
		{
			EImageBW8 eSrc, eDst;

			eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
			eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
			eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
			eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

			DPOINT dptSrcCnt, dptDstCnt;
			dptSrcCnt.x = pSrc->GetSizeX() / 2;
			dptSrcCnt.y = pSrc->GetSizeY() / 2;

			dptDstCnt.x = pDst->GetSizeX() / 2;
			dptDstCnt.y = pDst->GetSizeY() / 2;

			EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
				dptDstCnt.x, dptDstCnt.y, fScaleX, fScaleY, fAngle, &eDst, 8);
		}
		else
		{
			EImageC24 eSrc, eDst;

			eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
			eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
			eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
			eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

			DPOINT dptSrcCnt, dptDstCnt;
			dptSrcCnt.x = pSrc->GetSizeX() / 2;
			dptSrcCnt.y = pSrc->GetSizeY() / 2;

			dptDstCnt.x = pDst->GetSizeX() / 2;
			dptDstCnt.y = pDst->GetSizeY() / 2;

			EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
				dptDstCnt.x, dptDstCnt.y, fScaleX, fScaleY, fAngle, &eDst, 8);
		}

		bReturn = true;
	} while (false);

	return bReturn;
}

// 센터점 지정을 위해 함수를 새로 오버라이딩 한다 20141218 jhsong
bool CAlgOevImage::ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, DPOINT dptRotateCenter, float fAngle)
{

	EImageBW8 eSrc, eDst;

	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

	DPOINT dptSrcCnt, dptDstCnt;
	dptSrcCnt = dptRotateCenter;
	dptDstCnt = dptRotateCenter;

	EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
		dptDstCnt.x, dptDstCnt.y, 1.f, 1.f, fAngle, &eDst, 8);

	return true;
}

bool CAlgOevImage::ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fAngle)
{
	bool bReturn = false;

	do
	{
		if(!pSrc || !pSrc->GetBuffer())
			break;

		if(!pDst || !pDst->GetBuffer())
			break;

		bool bIsSrcColor = pSrc->IsColor();
		bool bIsDstColor = pDst->IsColor();

		if(bIsSrcColor != bIsDstColor)
			break;

		if(!bIsSrcColor)
		{
			EImageBW8 eSrc, eDst;

			eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
			eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
			eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
			eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

			DPOINT dptSrcCnt, dptDstCnt;
			dptSrcCnt.x = pSrc->GetSizeX() / 2;
			dptSrcCnt.y = pSrc->GetSizeY() / 2;

			dptDstCnt.x = pDst->GetSizeX() / 2;
			dptDstCnt.y = pDst->GetSizeY() / 2;

			EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
				dptDstCnt.x, dptDstCnt.y, 1.f, 1.f, fAngle, &eDst, 8);
		}
		else
		{
			EImageC24 eSrc, eDst;

			eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
			eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
			eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
			eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

			DPOINT dptSrcCnt, dptDstCnt;
			dptSrcCnt.x = pSrc->GetSizeX() / 2;
			dptSrcCnt.y = pSrc->GetSizeY() / 2;

			dptDstCnt.x = pDst->GetSizeX() / 2;
			dptDstCnt.y = pDst->GetSizeY() / 2;

			EasyImage::ScaleRotate(&eSrc, dptSrcCnt.x, dptSrcCnt.y,
				dptDstCnt.x, dptDstCnt.y, 1.f, 1.f, fAngle, &eDst, 8);
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

bool CAlgOevImage::ColorConvertGray(CImageInfo *pSrc, CImageInfo *pDst)
{
	EImageC24 eSrc;
	EImageBW8 eDst;

	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

	EasyImage::Convert(&eSrc,&eDst);

	return true;
}

bool CAlgOevImage::ImageGain(CImageInfo *pSrc, CImageInfo *pDst, float dbThrs)
{
	// 임시 흑백만 가능합니다. ysryu
	EImageBW8 eSrc;
	EImageBW8 eDst;

	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

// 	EROIBW8 eSrcROI;
// 	EROIBW8 eDstROI;

	EasyImage::GainOffset(&eSrc,&eDst,dbThrs);

	return true;
}
bool CAlgOevImage::ImageGain(CImageInfo *pSrc, CImageInfo *pDst, float fGain, float fOffset)
{
	// 임시 흑백만 가능합니다. ysryu
	EImageBW8 eSrc;
	EImageBW8 eDst;

	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);	
	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

	// 	EROIBW8 eSrcROI;
	// 	EROIBW8 eDstROI;

	EasyImage::GainOffset(&eSrc,&eDst,fGain,fOffset);

	return true;
}


bool CAlgOevImage::GetColorComponent(CImageInfo *pSrc, CImageInfo *pDst, int nColor)
{
// 	if(!pSrc->IsColor())			
// 		return false;
// 	if(pDst->IsColor())				
// 		return false;

	if(nColor < 0 || nColor > 2)	
		return false;

	bool bReturn = false;

	try
	{
		EImageC24	eSrc;
		EImageBW8	eDst;
		eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
		eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);

		eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
		eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

		EasyColor::GetComponent(&eSrc, &eDst, nColor);


		bReturn = true;
	}
	catch(const EException&)
	{
	}
	

	



	return bReturn;

}

bool CAlgOevImage::ColorImageGetPixelAverage(CImageInfo *pSrc, RECT rInspect, float* fRedAvg, float* fGreenAvg, float* fBlueAvg)
{
	if(!pSrc->IsColor())		return false;
	
	EImageC24	eSrc;
	eSrc.SetSize(pSrc->GetSizeX(), pSrc->GetSizeY());
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer(), 0);


	CRect rcRegion(rInspect);
	EROIC24		eRoi;
	eRoi.Attach(&eSrc, rcRegion.left, rcRegion.top, rcRegion.Width(), rcRegion.Height() );

	EasyImage::PixelAverage(&eRoi, *fRedAvg, *fGreenAvg, *fBlueAvg);
	

	return true;
}
bool CAlgOevImage::ImagePixelCount(CImageInfo *pSrc, RECT rInspect, int nMinGV, int nMaxGV, int &rtnBelow, int &rtnBetween, int &rtnAbove)
{
//	ESetTraceMode(E_TRACE_SILENT);
	EImageBW8 eSrc;
	eSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer());

	CRect crInspect(&rInspect);
	EROIBW8 eRoi;
	eRoi.Attach(&eSrc, crInspect.left, crInspect.top, crInspect.Width(), crInspect.Height());

	EasyImage::PixelCount(&eRoi, nMinGV, nMaxGV, rtnBelow, rtnBetween, rtnAbove);

	return true;
}

bool CAlgOevImage::Threshold(CImageInfo* pSrc, int nGV, CImageInfo* pDst/* = nullptr*/)
{
	CImageInfo* pResult = nullptr;
	CImageInfo* pSource = nullptr;

	if(!pDst)
	{
		pResult = pSrc;
		pSource = new CImageInfo(pSrc);
	}
	else
	{
		pResult = pDst;
		pSource = pSrc;
	}

	EImageBW8 eimageSrc;
	eimageSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer());
	EImageBW8 eimageDst;
	eimageDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer());

	EasyImage::Threshold(&eimageSrc, &eimageDst, nGV);

	if(!pDst)
	{
		delete pSource;
		pSource = nullptr;
	}

	return true;
}



std::vector<ULONG> CAlgOevImage::Projection(CImageInfo* pSrc, RECT rcROI, eOevProjection eDirection)
{
	std::vector<ULONG> vctResult;

	do 
	{
		if(!pSrc)
			break;

		if(!pSrc->GetBuffer())
			break;

		if(pSrc->GetBpp() != 8)
			break;

		if(pSrc->IsColor())
			break;
		
		EImageBW8 eimageSrc;
		eimageSrc.SetImagePtr(pSrc->GetSizeX(), pSrc->GetSizeY(), pSrc->GetBuffer());

		CRect rcRegion(rcROI);

		EROIBW8 eRoi;
		eRoi.Attach(&eimageSrc, rcRegion.left, rcRegion.top, rcRegion.Width(), rcRegion.Height());

		EBW8Vector vctProjection;

		switch(eDirection)
		{
		case eOevProjection_OnARow:
			{
				EasyImage::ProjectOnARow(&eRoi, &vctProjection);
				
			}
			break;
		case eOevProjection_OnAColumn:
			{
				EasyImage::ProjectOnAColumn(&eRoi, &vctProjection);
			}
			break;
		}

		for(ULONG i = 0; i < vctProjection.GetNumElements(); ++i)
			vctResult.push_back(vctProjection.GetElement(i).Value);
	}
		while(false);

	return vctResult;
}


bool CAlgOevImage::ImageOperation(CImageInfo* pSrc1, CImageInfo* pSrc2, CImageInfo* pDst, int nFilter)
{
	EImageBW8 eSrc1;
	EImageBW8 eSrc2;
	EImageBW8 eDst;

	eSrc1.SetSize(pSrc1->GetSizeX(), pSrc1->GetSizeY());
	eSrc1.SetImagePtr(pSrc1->GetSizeX(), pSrc1->GetSizeY(), pSrc1->GetBuffer(), 0);	

	eSrc2.SetSize(pSrc2->GetSizeX(), pSrc2->GetSizeY());
	eSrc2.SetImagePtr(pSrc2->GetSizeX(), pSrc2->GetSizeY(), pSrc2->GetBuffer(), 0);	

	eDst.SetSize(pDst->GetSizeX(), pDst->GetSizeY());
	eDst.SetImagePtr(pDst->GetSizeX(), pDst->GetSizeY(), pDst->GetBuffer(), 0);

	if(nFilter == 0)
	{
		EasyImage::Oper(EArithmeticLogicOperation_Compare, &eSrc1, &eSrc2, &eDst);
	}
	if(nFilter == 1)
	{
		EasyImage::Oper(EArithmeticLogicOperation_Subtract, &eSrc1, &eSrc2, &eDst);
	}
	if(nFilter == 2)
	{
		EasyImage::Oper(EArithmeticLogicOperation_Add, &eSrc1, &eSrc2, &eDst);
	}

	return true;
}


