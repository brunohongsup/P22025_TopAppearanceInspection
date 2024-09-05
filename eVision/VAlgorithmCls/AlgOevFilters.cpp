//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevFilters.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevFilters::CAlgOevFilters(void)
{
}

CAlgOevFilters::~CAlgOevFilters(void)
{
}

CVisionObject* CAlgOevFilters::CreateVisionInstance()
{
	return nullptr;
}



bool CAlgOevFilters::Sobel(CImageInfo* pImgInfo, RECT* pBlobRegion/* = nullptr*/)
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
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::ConvolSobel(&eRoi);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::SobelX(CImageInfo* pImgInfo, RECT* pBlobRegion/* = nullptr*/)
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
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::ConvolSobelX(&eRoi);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::SobelY(CImageInfo* pImgInfo, RECT* pBlobRegion/* = nullptr*/)
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
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::ConvolSobelY(&eRoi);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevFilters::Erode(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::ErodeBox(&eRoiDst, &eRoiSrc, ulWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::Erode(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, ULONG ulHeight/* =1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::ErodeBox(&eRoiDst, &eRoiSrc, ulWidth, ulHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevFilters::Dilate(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::DilateBox(&eRoiDst, &eRoiSrc, ulWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::Dilate(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, ULONG ulHeight/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::DilateBox(&eRoiDst, &eRoiSrc, ulWidth, ulHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}



bool CAlgOevFilters::MorphologyGradient(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::MorphoGradientBox(&eRoiDst, &eRoiSrc, ulWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::MorphologyGradient(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, ULONG ulHeight/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::MorphoGradientBox(&eRoiDst, &eRoiSrc, ulWidth, ulHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevFilters::MorphologyOpen(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::OpenBox(&eRoiDst, &eRoiSrc, ulWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::MorphologyOpen(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, ULONG ulHeight/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::OpenBox(&eRoiDst, &eRoiSrc, ulWidth, ulHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::MorphologyClose(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::CloseBox(&eRoiDst, &eRoiSrc, ulWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFilters::MorphologyClose(CImageInfo* pImgInfo, ULONG ulWidth/* = 1*/, ULONG ulHeight/* = 1*/, RECT* pBlobRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eSrc;
		eSrc.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		CImageInfo imgCopy(pImgInfo);
		EImageBW8 eDst;

		eDst.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

		EROIBW8 eRoiSrc, eRoiDst;

		if(pBlobRegion)
		{
			CRect rcBlobRegion(*pBlobRegion);

			eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		EasyImage::CloseBox(&eRoiDst, &eRoiSrc, ulWidth, ulHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevFilters::Convolution(CImageInfo* pImgInfo, std::vector<std::vector<float>>* pVctUserMatrix, BYTE cOffsetGV /* = 0x00 */, float fGain /* = 1.f */, BYTE cOutsideGV /* = 0x00 */, EKernelRectifier eRectifier /* = EKernelRectifier_KeepPositive */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		if(!pVctUserMatrix || pVctUserMatrix->empty())
			break;

		size_t szMatrixX = 0, szMatrixY = 0;

		szMatrixY = pVctUserMatrix->size();

		if(!szMatrixY || !(szMatrixY % 2))
			break;

		szMatrixX = pVctUserMatrix->begin()->size();

		if(!szMatrixX || !(szMatrixX % 2) || szMatrixY != szMatrixX)
			break;

		bool bSameSizeX = true;

		for(auto iter = pVctUserMatrix->begin(); iter != pVctUserMatrix->end(); ++iter)
		{
			if(szMatrixX != iter->size())
			{
				bSameSizeX = false;
				break;
			}
		}

		if(!bSameSizeX)
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			CImageInfo imgCopy(pImgInfo);
			
			EImageBW8 eSrc;
			eSrc.SetImagePtr(imgCopy.GetSizeX(), imgCopy.GetSizeY(), imgCopy.GetBuffer());

			EROIBW8 eRoiSrc, eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EKernel eKernel;

			eKernel.SetSize(szMatrixX, szMatrixY);

			for(size_t y = 0; y < szMatrixY; ++y)
			{
				auto iter = pVctUserMatrix->begin() + y;
				for(size_t x = 0; x < szMatrixX; ++x)
					eKernel.SetKernelData(x, y, iter->at(x));
			}

			eKernel.SetOffset(cOffsetGV);
			eKernel.SetGain(fGain);
			eKernel.SetOutsideValue(cOutsideGV);
			eKernel.SetRectifier(eRectifier);

			EasyImage::ConvolKernel(&eRoiSrc, &eRoiDst, &eKernel);

			bReturn = true;
		}

		catch(const EException&)
		{
			bReturn = false;
			break;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Uniform(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth /* = 1 */, ULONG ulHalfOfKernelHeight /* = 1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			CImageInfo imgInfoSrc(pImgInfo);

			EImageBW8 eSrc;
			eSrc.SetImagePtr(imgInfoSrc.GetSizeX(), imgInfoSrc.GetSizeY(), imgInfoSrc.GetBuffer());

			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiSrc, eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::ConvolUniform(&eRoiSrc, &eRoiDst, ulHalfOfKernelWidth, ulHalfOfKernelHeight);

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Gaussian(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth /* = 1 */, ULONG ulHalfOfKernelHeight /* = 1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			CImageInfo imgInfoSrc(pImgInfo);

			EImageBW8 eSrc;
			eSrc.SetImagePtr(imgInfoSrc.GetSizeX(), imgInfoSrc.GetSizeY(), imgInfoSrc.GetBuffer());

			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiSrc, eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::ConvolGaussian(&eRoiSrc, &eRoiDst, ulHalfOfKernelWidth, ulHalfOfKernelHeight);

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::LowPass(CImageInfo* pImgInfo, eLowPassType eType /* = eLowPassType1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			switch(eType)
			{
			case eLowPassType1:
				EasyImage::ConvolLowpass1(&eRoiDst);
				break;

			case eLowPassType2:
				EasyImage::ConvolLowpass2(&eRoiDst);
				break;

			default:
				EasyImage::ConvolLowpass3(&eRoiDst);
				break;
			}

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::HighPass(CImageInfo* pImgInfo, eHighPassType eType /* = eHighPassType1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			switch(eType)
			{
			case eHighPassType1:
				EasyImage::ConvolHighpass1(&eRoiDst);
				break;

			default:
				EasyImage::ConvolHighpass2(&eRoiDst);
				break;
			}

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Gradient(CImageInfo* pImgInfo, eGradientType eType /* = eGradientTypeNomal */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			switch(eType)
			{
			case eGradientTypeNomal:
				EasyImage::ConvolGradient(&eRoiDst);
				break;

			case eGradientTypeX:
				EasyImage::ConvolGradientX(&eRoiDst);
				break;
				
			default:
				EasyImage::ConvolGradientY(&eRoiDst);
				break;
			}

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Prewitt(CImageInfo* pImgInfo, ePrewittType eType /* = ePrewittTypeNomal */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			switch(eType)
			{
			case ePrewittTypeNomal:
				EasyImage::ConvolPrewitt(&eRoiDst);
				break;

			case ePrewittTypeX:
				EasyImage::ConvolPrewittX(&eRoiDst);
				break;

			default:
				EasyImage::ConvolPrewittY(&eRoiDst);
				break;
			}

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Roberts(CImageInfo* pImgInfo, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::ConvolRoberts(&eRoiDst);

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::Laplacian(CImageInfo* pImgInfo, eLaplacianType eType /* = eLaplacianTypeX */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			switch(eType)
			{
			case eLaplacianType4:
				EasyImage::ConvolLaplacian4(&eRoiDst);
				break;

			case eLaplacianType8:
				EasyImage::ConvolLaplacian8(&eRoiDst);
				break;

			case eLaplacianTypeX:
				EasyImage::ConvolLaplacianX(&eRoiDst);
				break;

			default:
				EasyImage::ConvolLaplacianY(&eRoiDst);
				break;
			}


			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::MorphologyWhiteTopHat(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth /* = 1 */, ULONG ulHalfOfKernelHeight /* = 1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			CImageInfo imgInfoSrc(pImgInfo);

			EImageBW8 eSrc;
			eSrc.SetImagePtr(imgInfoSrc.GetSizeX(), imgInfoSrc.GetSizeY(), imgInfoSrc.GetBuffer());

			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiSrc, eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::WhiteTopHat(&eRoiSrc, &eRoiDst, ulHalfOfKernelWidth, ulHalfOfKernelHeight);

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}


bool CAlgOevFilters::MorphologyBlackTopHat(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth /* = 1 */, ULONG ulHalfOfKernelHeight /* = 1 */, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		if(!pImgInfo || !pImgInfo->GetBuffer())
			break;

		try
		{
			CImageInfo imgInfoSrc(pImgInfo);

			EImageBW8 eSrc;
			eSrc.SetImagePtr(imgInfoSrc.GetSizeX(), imgInfoSrc.GetSizeY(), imgInfoSrc.GetBuffer());

			EImageBW8 eDst;
			eDst.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EROIBW8 eRoiSrc, eRoiDst;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoiSrc.Attach(&eSrc, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
				eRoiDst.Attach(&eDst, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoiSrc.Attach(&eSrc, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
				eRoiDst.Attach(&eDst, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			EasyImage::BlackTopHat(&eRoiSrc, &eRoiDst, ulHalfOfKernelWidth, ulHalfOfKernelHeight);

			bReturn = true;
		}
		catch(const EException&)
		{
			bReturn = false;
		}
	}
		while(false);

	return bReturn;
}