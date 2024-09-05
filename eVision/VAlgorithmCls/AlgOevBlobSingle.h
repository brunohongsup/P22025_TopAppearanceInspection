#pragma once


#include "AlgOevBase.h"

namespace Euresys { namespace Open_eVision_1_2 { class EImageEncoder; } }
namespace Euresys { namespace Open_eVision_1_2 { class EObjectSelection; } }
namespace Euresys { namespace Open_eVision_1_2 { class ECodedImage2; } }

class CAlgOevBlobSingle : public CAlgOevBase
{
public:

	CAlgOevBlobSingle(void);
	virtual ~CAlgOevBlobSingle(void);


	EImageEncoder* GetBlobInstance() { return m_pImageEncoder; }


	
	void SetColorLayer(eBlobColorLayer eBlobType);

	void SetMode(EGrayscaleSingleThreshold eType);

	void SetAbsoluteThreshold(ULONG ulThreshold);
	void SetRelativeThreshold(float fThreshold);



	//////////////////////////////////////////////////////////////////////////
	// Results

	bool Encode(CImageInfo* pImgInfo, RECT* pBlobRegion = nullptr);

	bool AddFilter(EFeature eFeature, float fValue, ESingleThresholdMode eCondition);
	bool ClearFilter();

	bool Sort(EFeature eFeature, ESortDirection eSortDir);

	std::vector<RECT> GetPositionRect();
	bool GetPositionRect(std::vector<RECT>* pVctRect);

	std::vector<SOevBlobEllipse> GetEllipse();
	bool GetEllipse(std::vector<SOevBlobEllipse>* pVctBlobEllipse);

	std::vector<std::vector<DPOINT>> GetConvexHull();
	bool GetConvexHull(std::vector<std::vector<DPOINT>>* pVctPoints);

	std::vector<SOevBlobMinimumEnclosingRectangle> GetMinimumEnclosingRectangle();
	bool GetMinimumEnclosingRectangle(std::vector<SOevBlobMinimumEnclosingRectangle>* pVctBlobMinEncloseRect);

	std::vector<int> GetArea();
	bool GetArea(std::vector<int>* pVctArea);

	std::vector<float> GetAverageGV(CImageInfo* pImgInfo, RECT* pBlobRegion = nullptr);
	bool GetAverageGV(CImageInfo* pImgInfo, std::vector<float>* pVctGvs, RECT* pBlobRegion = nullptr);

	// End of results
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

	EImageEncoder* m_pImageEncoder;
	EObjectSelection* m_pObjectSelection;
	ECodedImage2* m_pCodedImage;

	DPOINT m_dptOffset;
};


