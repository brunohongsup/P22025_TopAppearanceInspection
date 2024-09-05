#pragma once


#include "AlgOevBase.h"

class CAlgOevImage : public CAlgOevBase
{
public:

	CAlgOevImage(void);
	virtual ~CAlgOevImage(void);

	bool SaveImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, RECT rcRegion, EImageFileType eImageType = EImageFileType_Auto);
	bool SaveImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, EImageFileType eImageType = EImageFileType_Auto);
	bool SaveColorImage(CImageInfo* pImgInfo, LPCTSTR lpszFileName, EImageFileType eImageType = EImageFileType_Auto);
	
	bool GetMin(CImageInfo* pImgInfo, long* pRetMinGV, RECT* pRegion = nullptr);
	bool GetMax(CImageInfo* pImgInfo, long* pRetMaxGV, RECT* pRegion = nullptr);
	bool GetAverage(CImageInfo* pImgInfo, float* pRetAverage, RECT* pRegion = nullptr);
	bool GetStandardDeviation(CImageInfo* pImgInfo, float* pRetStdev, RECT* pRegion = nullptr);
	bool GetVariance(CImageInfo* pImgInfo, float* pRetVariance, RECT* pRegion = nullptr);

	bool GetThresholdValue_MaxEntropy(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion = nullptr);
	bool GetThresholdValue_MinResidue(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion = nullptr);
	bool GetThresholdValue_Relative(CImageInfo* pImgInfo, float fRelative, int* pRetThreshold, RECT* pRegion = nullptr);
	bool GetThresholdValue_Isodata(CImageInfo* pImgInfo, int* pRetThreshold, RECT* pRegion = nullptr);

	bool ImageGain(CImageInfo *pSrc, CImageInfo *pDst, float dbThre); // ysryu 임시 추가
	bool ImageGain(CImageInfo *pSrc, CImageInfo *pDst, float fGain, float fOffset);

	bool ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fScaleX, float fScaleY);
	bool ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fScaleX, float fScaleY, float fAngle);
	bool ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, DPOINT dptRotateCenter, float fAngle);
	bool ScaleRotate(CImageInfo *pSrc, CImageInfo *pDst, float fAngle);

	bool ColorConvertGray(CImageInfo *pSrc, CImageInfo *pDst);

	bool ImagePixelCount(CImageInfo *pSrc, RECT rInspect, int nMinGV, int nMaxGV, int &rtnBelow, int &rtnBetween, int &rtnAbove); // jabeak 임시 추가

	bool ColorImageGetPixelAverage(CImageInfo *pSrc, RECT rInspect, float* fRedAvg, float* fGreenAvg, float* fBlueAvg);


	bool GetColorComponent(CImageInfo *pSrc, CImageInfo *pDst, int nColor);

	bool Threshold(CImageInfo* pSrc, int nGV, CImageInfo* pDst = nullptr);

	bool ImageOperation(CImageInfo* pSrc1, CImageInfo* pSrc2, CImageInfo* pDst, int nFilter);

	std::vector<ULONG> Projection(CImageInfo* pSrc, RECT rcROI, eOevProjection eDirection);


	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

};


