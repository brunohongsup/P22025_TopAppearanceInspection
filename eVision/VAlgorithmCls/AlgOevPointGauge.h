#pragma once


#include "AlgOevBase.h"

namespace Euresys { namespace Open_eVision_1_2 { class EPointGauge; } }

class CAlgOevPointGauge : public CAlgOevBase
{
public:
	CAlgOevPointGauge(void);
	virtual ~CAlgOevPointGauge(void);


	EPointGauge* GetPointGaugeInstance() { return m_pPointGauge; }

	
	//////////////////////////////////////////////////////////////////////////
	// Positions

	void SetCenterXY(float fX, float fY);
	DPOINT GetCenterXY();
	float GetCenterX();
	float GetCenterY();

	void SetTolerance(float fTolerance);
	float GetTolerance();

	void SetAngle(float fAngle);
	float GetAngle();


	//2015.07.25 KWON
	//각도 적용시 하기 Function 사용할것.
	void SetToleranceAngle(float fTolerance, float fAngle);

	// End of positions
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// Measurement

	void SetTransitionType(ETransitionType eTransitionType);
	ETransitionType GetTransitionType();

	void SetTransitionChoice(ETransitionChoice eTransitionChoice);
	ETransitionChoice GetTransitionChoice();

	void SetTransitionIndex(unsigned long nIndex);
	unsigned long GetTransitionIndex();

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
	// Results

	bool Measure(CImageInfo* pImgInfo);
	bool Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion, eDirection eDir);

	unsigned long GetNumMeasuredPoints();
	
	bool GetMeasuredPoints(std::vector<DPOINT>* pVctPoints);

	// End of results
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:

	EPointGauge* m_pPointGauge;
};


