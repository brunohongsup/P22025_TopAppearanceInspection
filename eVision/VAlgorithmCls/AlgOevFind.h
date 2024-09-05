#pragma once


#include "AlgOevBase.h"

namespace Euresys { namespace Open_eVision_1_2 { class EPatternFinder; } }

class CAlgOevFind : public CAlgOevBase
{
public:
	CAlgOevFind(void);
	virtual ~CAlgOevFind(void);


	EPatternFinder* GetFindInstance() { return m_pFind; }

	//////////////////////////////////////////////////////////////////////////
	// Load / Save

	bool Load(LPCTSTR lpszFilename);
	bool Save(LPCTSTR lpszFilename);

	//
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Model learn

	bool SetPatternType(EPatternType eType);
	EPatternType GetPatternType();

	bool SetLightBalance(float fBalance);
	float GetLightBalance();

	bool SetTransitionThickness(ULONG ulThickness);
	ULONG GetTransitionThickness();

	bool SetAutoTransitionThickness(bool bAuto);
	bool GetAutoTransitionThickness();

	
	// Advenced learning parameter

	bool SetMinFeaturePoints(ULONG ulPoints);
	ULONG GetMinFeaturePoints();

	bool SetMaxFeaturePoints(ULONG ulPoints);
	ULONG GetMaxFeaturePoints();

	bool SetReductionMode(EReductionMode eMode);
	EReductionMode GetReductionMode();

	bool SetReductionStrength(float fStrength);
	float GetReductionStrength();


	// Run

	bool Learn(CImageInfo* pImgInfo, RECT* pRegion = nullptr);

	bool LearnAddException(CImageInfo* pImgInfo, CImageInfo* pImgInfoException, RECT* pRegion = nullptr);

	//
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Model find

	bool SetMaxInstance(ULONG ulCount);
	ULONG GetMaxInstance();

	bool SetMinScore(float fMinScore);
	float GetMinScore();

	bool SetContrastMode(EFindContrastMode eContrastMode);
	EFindContrastMode GetContrastMode();


	// Allowances

	bool SetAngleBias(float fAngle);
	float GetAngleBias();

	bool SetAngleTolerance(float fAngle);
	float GetAngleTolerance();

	bool SetScaleBias(float fScale);
	float GetScaleBias();

	bool SetScaleTolerance(float fScale);
	float GetScaleTolerance();


	// Advenced finding parameter

	bool SetLocalSearchMode(ELocalSearchMode eMode);
	ELocalSearchMode GetLocalSearchMode();

		// For custom local search mode
	bool SetAngleSearchExtent(long nAngle);
	long GetAngleSearchExtent();

	bool SetScaleSearchExtent(long nScale);
	long GetScaleSearchExtent();

	bool SetXSearchExtent(long nX);
	long GetXSearchExtent();

	bool SetYSearchExtent(long nY);
	long GetYSearchExtent();


	// Run

	std::vector<SOevFoundPattern> Find(CImageInfo* pImgInfo, RECT* pRegion = nullptr);

	//
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

	EPatternFinder* m_pFind;

	DPOINT m_dptOffset;
};


