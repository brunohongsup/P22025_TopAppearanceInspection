//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevCircleGauge.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevCircleGauge::CAlgOevCircleGauge(void)
{
	m_pCircleGauge = new ECircleGauge;
}

CAlgOevCircleGauge::~CAlgOevCircleGauge(void)
{
	if(m_pCircleGauge)
	{
		delete m_pCircleGauge;
		m_pCircleGauge = nullptr;
	}
}

CVisionObject* CAlgOevCircleGauge::CreateVisionInstance()
{
	return nullptr;
}



void CAlgOevCircleGauge::SetTolerance(float fTolerance)
{
	m_pCircleGauge->SetTolerance(fTolerance);
}

float CAlgOevCircleGauge::GetTolerance()
{
	return m_pCircleGauge->GetTolerance();
}

void CAlgOevCircleGauge::SetHVConstraint(bool bSet)
{
	m_pCircleGauge->SetHVConstraint(bSet);
}

bool CAlgOevCircleGauge::GetHVConstraint()
{
	return m_pCircleGauge->GetHVConstraint();
}

void CAlgOevCircleGauge::SetAngle(float fAngle)
{
	m_pCircleGauge->SetAngle(fAngle);
}

float CAlgOevCircleGauge::GetAngle()
{
	return m_pCircleGauge->GetAngle();
}

void CAlgOevCircleGauge::SetCenterXY(float fX, float fY)
{
	m_pCircleGauge->SetCenterXY(fX, fY);
}

float CAlgOevCircleGauge::GetCenterX()
{
	return m_pCircleGauge->GetCenterX();
}

float CAlgOevCircleGauge::GetCenterY()
{
	return m_pCircleGauge->GetCenterY();
}

DPOINT CAlgOevCircleGauge::GetCenterXY()
{
	DPOINT dptReturn;

	dptReturn.x = GetCenterX();
	dptReturn.y = GetCenterY();

	return dptReturn;
}

void CAlgOevCircleGauge::SetDiameter(float fDiameter)
{
	m_pCircleGauge->SetDiameter(fDiameter);
}

float CAlgOevCircleGauge::GetDiameter()
{
	return m_pCircleGauge->GetDiameter();
}

void CAlgOevCircleGauge::SetRadius(float fRadius)
{
	m_pCircleGauge->SetRadius(fRadius);
}

float CAlgOevCircleGauge::GetRadius()
{
	return m_pCircleGauge->GetRadius();
}

void CAlgOevCircleGauge::SetAmplitude(float fAmplitude)
{
	m_pCircleGauge->SetAmplitude(fAmplitude);
}

float CAlgOevCircleGauge::GetAmplitude()
{
	return m_pCircleGauge->GetAmplitude();
}

void CAlgOevCircleGauge::SetMinAmplitude(unsigned long ulMinAmplitude)
{
	m_pCircleGauge->SetMinAmplitude(ulMinAmplitude);
}

unsigned long CAlgOevCircleGauge::GetMinAmplitude()
{
	return m_pCircleGauge->GetMinAmplitude();
}

void CAlgOevCircleGauge::SetMinArea(unsigned long ulMinArea)
{
	m_pCircleGauge->SetMinArea(ulMinArea);
}

unsigned long CAlgOevCircleGauge::GetMinArea()
{
	return m_pCircleGauge->GetMinArea();
}

void CAlgOevCircleGauge::SetThreshold(unsigned long ulThreshold)
{
	m_pCircleGauge->SetThreshold(ulThreshold);
}

unsigned long CAlgOevCircleGauge::GetThreshold()
{
	return m_pCircleGauge->GetThreshold();
}

void CAlgOevCircleGauge::SetThickness(unsigned long ulThickness)
{
	m_pCircleGauge->SetThickness(ulThickness);
}

unsigned long CAlgOevCircleGauge::GetThickness()
{
	return m_pCircleGauge->GetThickness();
}

void CAlgOevCircleGauge::SetSmoothing(unsigned long ulSmoothing)
{
	m_pCircleGauge->SetSmoothing(ulSmoothing);
}

unsigned long CAlgOevCircleGauge::GetSmoothing()
{
	return m_pCircleGauge->GetSmoothing();
}

void CAlgOevCircleGauge::SetTransitionChoice(ETransitionChoice eTransitionChoice)
{
	m_pCircleGauge->SetTransitionChoice(eTransitionChoice);
}

ETransitionChoice CAlgOevCircleGauge::GetTransitionChoice()
{
	return m_pCircleGauge->GetTransitionChoice();
}

void CAlgOevCircleGauge::SetTransitionType(ETransitionType eTransitionType)
{
	m_pCircleGauge->SetTransitionType(eTransitionType);
}

ETransitionType CAlgOevCircleGauge::GetTransitionType()
{
	return m_pCircleGauge->GetTransitionType();
}

void CAlgOevCircleGauge::SetNumFilteringPasses(unsigned long ulFilteringPasses)
{
	m_pCircleGauge->SetNumFilteringPasses(ulFilteringPasses);
}

unsigned long CAlgOevCircleGauge::GetNumFilteringPasses()
{
	return m_pCircleGauge->GetNumFilteringPasses();
}

void CAlgOevCircleGauge::SetFilteringThreshold(float fFilteringThreshold)
{
	m_pCircleGauge->SetFilteringThreshold(fFilteringThreshold);
}

float CAlgOevCircleGauge::GetFilteringThreshold()
{
	return m_pCircleGauge->GetFilteringThreshold();
}

void CAlgOevCircleGauge::SetSamplingStep(float fSamplingStep)
{
	m_pCircleGauge->SetSamplingStep(fSamplingStep);
}

float CAlgOevCircleGauge::GetSamplingStep()
{
	return m_pCircleGauge->GetSamplingStep();
}

bool CAlgOevCircleGauge::Measure(CImageInfo* pImgInfo)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		m_pCircleGauge->Measure(&eImage);

		if(GetNumValidSamples() > 0)
			bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevCircleGauge::Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion/* = nullptr*/)
{
	if(pGaugeRegion)
	{
		SetCenterXY(float(pGaugeRegion->left + pGaugeRegion->right) / 2.f, float(pGaugeRegion->top + pGaugeRegion->bottom) / 2.f);
		SetDiameter(fabs(float(pGaugeRegion->right - pGaugeRegion->left)));
	}

	return Measure(pImgInfo);
}

DPOINT CAlgOevCircleGauge::GetMeasuredCenter()
{
	DPOINT dptMeasuredCenter;

	dptMeasuredCenter.x = m_pCircleGauge->GetMeasuredCircle().GetCenterX();
	dptMeasuredCenter.y = m_pCircleGauge->GetMeasuredCircle().GetCenterY();

	return dptMeasuredCenter;
}

float CAlgOevCircleGauge::GetMeasuredRadius()
{
	return m_pCircleGauge->GetMeasuredCircle().GetRadius();
}

float CAlgOevCircleGauge::GetMeasuredDiameter()
{
	return m_pCircleGauge->GetMeasuredCircle().GetDiameter();
}

unsigned long CAlgOevCircleGauge::GetNumSamples()
{
	return m_pCircleGauge->GetNumSamples();
}
unsigned long CAlgOevCircleGauge::GetNumValidSamples()
{
	return m_pCircleGauge->GetNumValidSamples();
}

float CAlgOevCircleGauge::GetScore()
{
	float fScore = 0.f;

	if(GetNumSamples() > 0)
		fScore = (float(GetNumValidSamples()) / float(GetNumSamples())) * 100.;

	return fScore;
}

bool CAlgOevCircleGauge::GetMeasuredValidPoints(std::vector<DPOINT>* pVctPoints, bool bIncludeInvalid/* = false*/)
{
	bool bReturn = false;

	do
	{
		if(!pVctPoints)
			break;

		pVctPoints->clear();

		if(!GetNumValidSamples())
			break;

		int nSampleCnt = GetNumSamples();

		for(int i = 0; i < nSampleCnt; i++) 
		{
			EPoint pt;

			DPOINT dptPoint;

			if(m_pCircleGauge->GetSample(pt, i))
			{
				dptPoint.x = pt.GetX();
				dptPoint.y = pt.GetY();

				pVctPoints->push_back(dptPoint);
			}
			else if(bIncludeInvalid)
			{
				dptPoint.x = 0.;
				dptPoint.y = 0.;

				pVctPoints->push_back(dptPoint);
			}
		}

		bReturn = true;	
	}
		while(false);

	return bReturn;
}

