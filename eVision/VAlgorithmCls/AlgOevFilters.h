#pragma once


#include "AlgOevBase.h"

class CAlgOevFilters : public CAlgOevBase
{
public:
	CAlgOevFilters(void);
	virtual ~CAlgOevFilters(void);

	enum eLowPassType
	{
		eLowPassType1 = 0,
		eLowPassType2,
		eLowPassType3,
	};

	enum eHighPassType
	{
		eHighPassType1 = 0,
		eHighPassType2,
	};

	enum eGradientType
	{
		eGradientTypeNomal = 0,
		eGradientTypeX,
		eGradientTypeY,
	};

	enum ePrewittType
	{
		ePrewittTypeNomal = 0,
		ePrewittTypeX,
		ePrewittTypeY,
	};

	enum eLaplacianType
	{
		eLaplacianTypeX = 0,
		eLaplacianTypeY,
		eLaplacianType4,
		eLaplacianType8
	};

	bool Sobel(CImageInfo* pImgInfo, RECT* pBlobRegion = nullptr);
	bool SobelX(CImageInfo* pImgInfo, RECT* pBlobRegion = nullptr);
	bool SobelY(CImageInfo* pImgInfo, RECT* pBlobRegion = nullptr);

	bool Uniform(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth = 1, ULONG ulHalfOfKernelHeight = 1, RECT* pRegion = nullptr);

	bool Gaussian(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth = 1, ULONG ulHalfOfKernelHeight = 1, RECT* pRegion = nullptr);

	bool LowPass(CImageInfo* pImgInfo, eLowPassType eType = eLowPassType1, RECT* pRegion = nullptr);

	bool HighPass(CImageInfo* pImgInfo, eHighPassType eType = eHighPassType1, RECT* pRegion = nullptr);

	bool Gradient(CImageInfo* pImgInfo, eGradientType eType = eGradientTypeNomal, RECT* pRegion = nullptr);

	bool Prewitt(CImageInfo* pImgInfo, ePrewittType eType = ePrewittTypeNomal, RECT* pRegion = nullptr);

	bool Roberts(CImageInfo* pImgInfo, RECT* pRegion = nullptr);

	bool Laplacian(CImageInfo* pImgInfo, eLaplacianType eType = eLaplacianTypeX, RECT* pRegion = nullptr);



	bool Dilate(CImageInfo* pImgInfo, ULONG ulWidth = 1, RECT* pBlobRegion = nullptr);
	bool Erode(CImageInfo* pImgInfo, ULONG ulWidth = 1, RECT* pBlobRegion = nullptr);

	bool MorphologyGradient(CImageInfo* pImgInfo, ULONG ulWidth = 1, RECT* pBlobRegion = nullptr);
	bool MorphologyOpen(CImageInfo* pImgInfo, ULONG ulWidth = 1, RECT* pBlobRegion = nullptr);
	bool MorphologyClose(CImageInfo* pImgInfo, ULONG ulWidth = 1, RECT* pBlobRegion = nullptr);

	bool MorphologyWhiteTopHat(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth = 1, ULONG ulHalfOfKernelHeight = 1, RECT* pRegion = nullptr);

	bool MorphologyBlackTopHat(CImageInfo* pImgInfo, ULONG ulHalfOfKernelWidth = 1, ULONG ulHalfOfKernelHeight = 1, RECT* pRegion = nullptr);
	
	//¼öÁ¤
	bool Dilate(CImageInfo* pImgInfo, ULONG ulWidth = 1, ULONG ulHeight = 1, RECT* pBlobRegion = nullptr);
	bool Erode(CImageInfo* pImgInfo, ULONG ulWidth = 1, ULONG ulHeight = 1, RECT* pBlobRegion = nullptr);

	bool MorphologyGradient(CImageInfo* pImgInfo, ULONG ulWidth = 1, ULONG ulHeight = 1, RECT* pBlobRegion = nullptr);
	bool MorphologyOpen(CImageInfo* pImgInfo, ULONG ulWidth = 1, ULONG ulHeight = 1, RECT* pBlobRegion = nullptr);
	bool MorphologyClose(CImageInfo* pImgInfo, ULONG ulWidth = 1, ULONG ulHeight = 1, RECT* pBlobRegion = nullptr);

	bool Convolution(CImageInfo* pImgInfo, std::vector<std::vector<float>>* pVctUserMatrix, BYTE cOffsetGV = 0x00, float fGain = 1.f, BYTE cOutsideGV = 0x00, EKernelRectifier eRectifier = EKernelRectifier_KeepPositive, RECT* pRegion = nullptr);

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

};

