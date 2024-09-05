#pragma once


#include "AlgOevBase.h"

namespace Euresys { namespace Open_eVision_1_2 { class EMatcher; } }

class CAlgOevMatch : public CAlgOevBase
{
public:
	CAlgOevMatch(void);
	virtual ~CAlgOevMatch(void);


	EMatcher* GetMatchInstance() { return m_pMatch; }

	//////////////////////////////////////////////////////////////////////////
	// Load / Save

	bool Load(LPCTSTR lpszFilename);
	bool Save(LPCTSTR lpszFilename);

	//
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Model learn

	bool SetMinReducedArea(ULONG ulValue);
	ULONG GetMinReducedArea();

	bool SetFilteringMode(EFilteringMode eMode);
	EFilteringMode GetFilteringMode();

	bool SetPixelDimensions(float fWidth, float fHeight);
	DPOINT GetPixelDimensions();

	
	// Run

	bool Learn(CImageInfo* pImgInfo, RECT* pRegion = nullptr);

	//
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Model match

	bool SetMaxOccurrences(ULONG ulCount);
	ULONG GetMaxOccurrences();

	bool SetMaxInitialOccurrences(ULONG ulCount);
	ULONG GetMaxInitialOccurrences();

	bool SetMinScore(float fScore);
	float GetMinScore();

	bool SetFinalReduction(ULONG ulReduction);
	ULONG GetFinalReduction();

	bool SetSubPixelInterpolate(bool bSet);
	bool GetSubPixelInterpolate();

	bool SetContrastMode(EMatchContrastMode eMode);
	EMatchContrastMode GetContrastMode();

	bool SetCorrelationMode(ECorrelationMode eMode);
	ECorrelationMode GetCorrelationMode();

	bool SetMinAngle(float fAngle);
	float GetMinAngle();

	bool SetMaxAngle(float fAngle);
	float GetMaxAngle();

	// Isotropic
	bool SetMinScale(float fScale);
	float GetMinScale();

	bool SetMaxScale(float fScale);
	float GetMaxScale();
	//////////////////////////////////////////////////////////////////////////

	// Anisotropic
	bool SetMinScaleX(float fScaleX);
	float GetMinScaleX();

	bool SetMaxScaleX(float fScaleX);
	float GetMaxScaleX();

	bool SetMinScaleY(float fScaleY);
	float GetMinScaleY();

	bool SetMaxScaleY(float fScaleY);
	float GetMaxScaleY();
	//////////////////////////////////////////////////////////////////////////
	// Run

	std::vector<SOevFoundMatch> Match(CImageInfo* pImgInfo, RECT* pRegion = nullptr);

	//
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

	EMatcher* m_pMatch;

	DPOINT m_dptOffset;
};


