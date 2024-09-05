//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevRectangleGauge.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevRectangleGauge::CAlgOevRectangleGauge(void)
{
	m_pRectangleGauge = new ERectangleGauge;
}

CAlgOevRectangleGauge::~CAlgOevRectangleGauge(void)
{
	if(m_pRectangleGauge)
	{
		delete m_pRectangleGauge;
		m_pRectangleGauge = nullptr;
	}
}

CVisionObject* CAlgOevRectangleGauge::CreateVisionInstance()
{
	return nullptr;
}



void CAlgOevRectangleGauge::SetTolerance(float fTolerance)
{
	m_pRectangleGauge->SetTolerance(fTolerance);
}

float CAlgOevRectangleGauge::GetTolerance()
{
	return m_pRectangleGauge->GetTolerance();
}

void CAlgOevRectangleGauge::SetHVConstraint(bool bSet)
{
	m_pRectangleGauge->SetHVConstraint(bSet);
}

bool CAlgOevRectangleGauge::GetHVConstraint()
{
	return m_pRectangleGauge->GetHVConstraint();
}

void CAlgOevRectangleGauge::SetAngle(float fAngle)
{
	m_pRectangleGauge->SetAngle(fAngle);
}

float CAlgOevRectangleGauge::GetAngle()
{
	return m_pRectangleGauge->GetAngle();
}

void CAlgOevRectangleGauge::SetCenterXY(float fX, float fY)
{
	m_pRectangleGauge->SetCenterXY(fX, fY);
}

float CAlgOevRectangleGauge::GetCenterX()
{
	return m_pRectangleGauge->GetCenterX();
}

float CAlgOevRectangleGauge::GetCenterY()
{
	return m_pRectangleGauge->GetCenterY();
}

DPOINT CAlgOevRectangleGauge::GetCenterXY()
{
	DPOINT dptReturn;

	dptReturn.x = GetCenterX();
	dptReturn.y = GetCenterY();

	return dptReturn;
}

void CAlgOevRectangleGauge::SetSizeXY(float fX, float fY)
{
	m_pRectangleGauge->SetSize(fX, fY);
}

float CAlgOevRectangleGauge::GetSizeX()
{
	return m_pRectangleGauge->GetSizeX();
}

float CAlgOevRectangleGauge::GetSizeY()
{
	return m_pRectangleGauge->GetSizeY();
}

DPOINT CAlgOevRectangleGauge::GetSizeXY()
{
	DPOINT dptReturn;

	dptReturn.x = GetSizeX();
	dptReturn.y = GetSizeY();

	return dptReturn;
}

void CAlgOevRectangleGauge::SetMinAmplitude(unsigned long ulMinAmplitude)
{
	m_pRectangleGauge->SetMinAmplitude(ulMinAmplitude);
}

unsigned long CAlgOevRectangleGauge::GetMinAmplitude()
{
	return m_pRectangleGauge->GetMinAmplitude();
}

void CAlgOevRectangleGauge::SetMinArea(unsigned long ulMinArea)
{
	m_pRectangleGauge->SetMinArea(ulMinArea);
}

unsigned long CAlgOevRectangleGauge::GetMinArea()
{
	return m_pRectangleGauge->GetMinArea();
}

void CAlgOevRectangleGauge::SetThreshold(unsigned long ulThreshold)
{
	m_pRectangleGauge->SetThreshold(ulThreshold);
}

unsigned long CAlgOevRectangleGauge::GetThreshold()
{
	return m_pRectangleGauge->GetThreshold();
}

void CAlgOevRectangleGauge::SetThickness(unsigned long ulThickness)
{
	m_pRectangleGauge->SetThickness(ulThickness);
}

unsigned long CAlgOevRectangleGauge::GetThickness()
{
	return m_pRectangleGauge->GetThickness();
}

void CAlgOevRectangleGauge::SetSmoothing(unsigned long ulSmoothing)
{
	m_pRectangleGauge->SetSmoothing(ulSmoothing);
}

unsigned long CAlgOevRectangleGauge::GetSmoothing()
{
	return m_pRectangleGauge->GetSmoothing();
}

void CAlgOevRectangleGauge::SetTransitionChoice(ETransitionChoice eTransitionChoice)
{
	m_pRectangleGauge->SetTransitionChoice(eTransitionChoice);
}

ETransitionChoice CAlgOevRectangleGauge::GetTransitionChoice()
{
	return m_pRectangleGauge->GetTransitionChoice();
}

void CAlgOevRectangleGauge::SetTransitionType(ETransitionType eTransitionType)
{
	m_pRectangleGauge->SetTransitionType(eTransitionType);
}

ETransitionType CAlgOevRectangleGauge::GetTransitionType()
{
	return m_pRectangleGauge->GetTransitionType();
}

void CAlgOevRectangleGauge::SetNumFilteringPasses(unsigned long ulFilteringPasses)
{
	m_pRectangleGauge->SetNumFilteringPasses(ulFilteringPasses);
}

unsigned long CAlgOevRectangleGauge::GetNumFilteringPasses()
{
	return m_pRectangleGauge->GetNumFilteringPasses();
}

void CAlgOevRectangleGauge::SetFilteringThreshold(float fFilteringThreshold)
{
	m_pRectangleGauge->SetFilteringThreshold(fFilteringThreshold);
}

float CAlgOevRectangleGauge::GetFilteringThreshold()
{
	return m_pRectangleGauge->GetFilteringThreshold();
}

void CAlgOevRectangleGauge::SetSamplingStep(float fSamplingStep)
{
	m_pRectangleGauge->SetSamplingStep(fSamplingStep);
}

float CAlgOevRectangleGauge::GetSamplingStep()
{
	return m_pRectangleGauge->GetSamplingStep();
}

bool CAlgOevRectangleGauge::Measure(CImageInfo* pImgInfo)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		m_pRectangleGauge->Measure(&eImage);

		if(GetNumValidSamples() > 0)
			bReturn = true;
	}
	catch(const EException&)
	{
	}


	return bReturn;
}

bool CAlgOevRectangleGauge::Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion/* = nullptr*/)
{
	if(pGaugeRegion)
	{
		SetCenterXY(float(pGaugeRegion->left + pGaugeRegion->right) / 2.f, float(pGaugeRegion->top + pGaugeRegion->bottom) / 2.f);
		SetSizeXY(fabs(float(pGaugeRegion->right - pGaugeRegion->left)), fabs(float(pGaugeRegion->bottom - pGaugeRegion->top)));
	}

	return Measure(pImgInfo);
}

DPOINT CAlgOevRectangleGauge::GetMeasuredCenter()
{
	DPOINT dptMeasuredCenter;

	dptMeasuredCenter.x = m_pRectangleGauge->GetMeasuredRectangle().GetCenterX();
	dptMeasuredCenter.y = m_pRectangleGauge->GetMeasuredRectangle().GetCenterY();

	return dptMeasuredCenter;
}

std::vector<DPOINT> CAlgOevRectangleGauge::GetMeasuredCorner()
{
	std::vector<DPOINT> vctDptReturn;

	EPoint ePoints[4];

	m_pRectangleGauge->GetMeasuredRectangle().GetCorners(ePoints[0], ePoints[1], ePoints[2], ePoints[3]);

	for(int i = 0; i < 4; ++i)
	{
		DPOINT dptCorner;
		
		dptCorner.x = ePoints[i].GetX();
		dptCorner.y = ePoints[i].GetY();

		vctDptReturn.push_back(dptCorner);
	}

	return vctDptReturn;
}

unsigned long CAlgOevRectangleGauge::GetNumSamples()
{
	return m_pRectangleGauge->GetNumSamples();
}
unsigned long CAlgOevRectangleGauge::GetNumValidSamples()
{
	return m_pRectangleGauge->GetNumValidSamples();
}

float CAlgOevRectangleGauge::GetScore()
{
	float fScore = 0.f;

	if(GetNumSamples() > 0)
		fScore = (float(GetNumValidSamples()) / float(GetNumSamples())) * 100.;

	return fScore;
}

bool CAlgOevRectangleGauge::GetMeasuredValidPoints(std::vector<DPOINT>* pVctPoints, bool bIncludeInvalid/* = false*/)
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

			if(m_pRectangleGauge->GetSample(pt, i))
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

void CAlgOevRectangleGauge::SetKnownAngle(bool bKnownAngle)
{
	m_pRectangleGauge->SetKnownAngle(bKnownAngle);
}

bool CAlgOevRectangleGauge::GetKnownAngle()
{
	return m_pRectangleGauge->GetKnownAngle();
}


double CAlgOevRectangleGauge::GetMeasuredAngle()
{
	double dMeasuredAngle;

	dMeasuredAngle = m_pRectangleGauge->GetMeasuredRectangle().GetAngle();

	return dMeasuredAngle;
}



