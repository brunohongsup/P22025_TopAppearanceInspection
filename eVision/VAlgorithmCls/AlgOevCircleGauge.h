#pragma once


#include "AlgOevBase.h"

namespace Euresys { namespace Open_eVision_1_2 { class ECircleGauge; } }

class CAlgOevCircleGauge : public CAlgOevBase
{
public:
	CAlgOevCircleGauge(void);
	virtual ~CAlgOevCircleGauge(void);


	ECircleGauge* GetCircleGaugeInstance() { return m_pCircleGauge; }


	//////////////////////////////////////////////////////////////////////////
	// Positions

	void SetCenterXY(float fX, float fY);
	DPOINT GetCenterXY();
	float GetCenterX();
	float GetCenterY();

	void SetTolerance(float fTolerance);
	float GetTolerance();

	void SetDiameter(float fDiameter);
	float GetDiameter();

	void SetRadius(float fRadius);
	float GetRadius();

	void SetAngle(float fAngle);
	float GetAngle();

	void SetAmplitude(float fAmplitude);
	float GetAmplitude();

	// End of positions
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Measurement

	void SetTransitionType(ETransitionType eTransitionType);
	ETransitionType GetTransitionType();

	void SetTransitionChoice(ETransitionChoice eTransitionChoice);
	ETransitionChoice GetTransitionChoice();

	void SetThickness(unsigned long ulThickness);
	unsigned long GetThickness();

	void SetSmoothing(unsigned long ulSmoothing);
	unsigned long GetSmoothing();

	void SetThreshold(unsigned long ulThreshold);
	unsigned long GetThreshold();

	void SetMinAmplitude(unsigned long ulMinAmplitude);
	unsigned long GetMinAmplitude();

	void SetMinArea(unsigned long ulMinArea);
	unsigned long GetMinArea();

	void SetHVConstraint(bool bSet);
	bool GetHVConstraint();

	// End of measurement
	//////////////////////////////////////////////////////////////////////////
	

	//////////////////////////////////////////////////////////////////////////
	// Filtering

	void SetSamplingStep(float fSamplingStep);
	float GetSamplingStep();

	void SetFilteringThreshold(float fFilteringThreshold);
	float GetFilteringThreshold();

	void SetNumFilteringPasses(unsigned long ulFilteringPasses);
	unsigned long GetNumFilteringPasses();

	// End of filtering
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Results

	bool Measure(CImageInfo* pImgInfo);
	bool Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion);

	DPOINT GetMeasuredCenter();
	float GetMeasuredRadius();
	float GetMeasuredDiameter();

	unsigned long GetNumSamples();
	unsigned long GetNumValidSamples();
	float GetScore();
	
	bool GetMeasuredValidPoints(std::vector<DPOINT>* pVctPoints, bool bIncludeInvalid = false);
	
	// End of results
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

	ECircleGauge* m_pCircleGauge;
};


