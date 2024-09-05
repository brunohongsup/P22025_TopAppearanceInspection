//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevLineGauge.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevLineGauge::CAlgOevLineGauge(void)
{
	m_pLineGauge = new ELineGauge;
}

CAlgOevLineGauge::~CAlgOevLineGauge(void)
{
	if(m_pLineGauge)
	{
		delete m_pLineGauge;
		m_pLineGauge = nullptr;
	}
}

CVisionObject* CAlgOevLineGauge::CreateVisionInstance()
{
	return nullptr;
}



void CAlgOevLineGauge::SetTolerance(float fTolerance)
{
	m_pLineGauge->SetTolerance(fTolerance);
}

float CAlgOevLineGauge::GetTolerance()
{
	return m_pLineGauge->GetTolerance();
}

void CAlgOevLineGauge::SetHVConstraint(bool bSet)
{
	m_pLineGauge->SetHVConstraint(bSet);
}

bool CAlgOevLineGauge::GetHVConstraint()
{
	return m_pLineGauge->GetHVConstraint();
}

void CAlgOevLineGauge::SetAngle(float fAngle)
{
	m_pLineGauge->SetAngle(fAngle);
}

float CAlgOevLineGauge::GetAngle()
{
	return m_pLineGauge->GetAngle();
}

void CAlgOevLineGauge::SetCenterXY(float fX, float fY)
{
	m_pLineGauge->SetCenterXY(fX, fY);
}

float CAlgOevLineGauge::GetCenterX()
{
	return m_pLineGauge->GetCenterX();
}

float CAlgOevLineGauge::GetCenterY()
{
	return m_pLineGauge->GetCenterY();
}

DPOINT CAlgOevLineGauge::GetCenterXY()
{
	DPOINT dptReturn;

	dptReturn.x = GetCenterX();
	dptReturn.y = GetCenterY();

	return dptReturn;
}

void CAlgOevLineGauge::SetLength(float fLength)
{
	m_pLineGauge->SetLength(fLength);
}

float CAlgOevLineGauge::GetLength()
{
	return m_pLineGauge->GetLength();
}



void CAlgOevLineGauge::SetMinAmplitude(unsigned long ulMinAmplitude)
{
	m_pLineGauge->SetMinAmplitude(ulMinAmplitude);
}

unsigned long CAlgOevLineGauge::GetMinAmplitude()
{
	return m_pLineGauge->GetMinAmplitude();
}

void CAlgOevLineGauge::SetMinArea(unsigned long ulMinArea)
{
	m_pLineGauge->SetMinArea(ulMinArea);
}

unsigned long CAlgOevLineGauge::GetMinArea()
{
	return m_pLineGauge->GetMinArea();
}

void CAlgOevLineGauge::SetThreshold(unsigned long ulThreshold)
{
	m_pLineGauge->SetThreshold(ulThreshold);
}

unsigned long CAlgOevLineGauge::GetThreshold()
{
	return m_pLineGauge->GetThreshold();
}

void CAlgOevLineGauge::SetThickness(unsigned long ulThickness)
{
	m_pLineGauge->SetThickness(ulThickness);
}

unsigned long CAlgOevLineGauge::GetThickness()
{
	return m_pLineGauge->GetThickness();
}

void CAlgOevLineGauge::SetSmoothing(unsigned long ulSmoothing)
{
	m_pLineGauge->SetSmoothing(ulSmoothing);
}

unsigned long CAlgOevLineGauge::GetSmoothing()
{
	return m_pLineGauge->GetSmoothing();
}

void CAlgOevLineGauge::SetTransitionChoice(ETransitionChoice eTransitionChoice)
{
	m_pLineGauge->SetTransitionChoice(eTransitionChoice);
}

ETransitionChoice CAlgOevLineGauge::GetTransitionChoice()
{
	return m_pLineGauge->GetTransitionChoice();
}

void CAlgOevLineGauge::SetTransitionType(ETransitionType eTransitionType)
{
	m_pLineGauge->SetTransitionType(eTransitionType);
}

ETransitionType CAlgOevLineGauge::GetTransitionType()
{
	return m_pLineGauge->GetTransitionType();
}

void CAlgOevLineGauge::SetTransitionIndex(unsigned long nIndex)
{
	m_pLineGauge->SetTransitionIndex(nIndex);
}

unsigned long CAlgOevLineGauge::GetTransitionIndex()
{
	return m_pLineGauge->GetTransitionIndex();
}

void CAlgOevLineGauge::SetNumFilteringPasses(unsigned long ulFilteringPasses)
{
	m_pLineGauge->SetNumFilteringPasses(ulFilteringPasses);
}

unsigned long CAlgOevLineGauge::GetNumFilteringPasses()
{
	return m_pLineGauge->GetNumFilteringPasses();
}

void CAlgOevLineGauge::SetFilteringThreshold(float fFilteringThreshold)
{
	m_pLineGauge->SetFilteringThreshold(fFilteringThreshold);
}

float CAlgOevLineGauge::GetFilteringThreshold()
{
	return m_pLineGauge->GetFilteringThreshold();
}

void CAlgOevLineGauge::SetSamplingStep(float fSamplingStep)
{
	m_pLineGauge->SetSamplingStep(fSamplingStep);
}

float CAlgOevLineGauge::GetSamplingStep()
{
	return m_pLineGauge->GetSamplingStep();
}

void CAlgOevLineGauge::SetKnownAngle(bool bKnownAngle)
{
	m_pLineGauge->SetKnownAngle(bKnownAngle);
}

bool CAlgOevLineGauge::GetKnownAngle()
{
	return m_pLineGauge->GetKnownAngle();
}

bool CAlgOevLineGauge::Measure(CImageInfo* pImgInfo)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		m_pLineGauge->Measure(&eImage);

		if(GetNumValidSamples() > 0)
			bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevLineGauge::Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion, eDirection eDir)
{
	bool bReturn = false;

	if(pGaugeRegion)
		SetCenterXY(float(pGaugeRegion->left + pGaugeRegion->right) / 2.f, float(pGaugeRegion->top + pGaugeRegion->bottom) / 2.f);

	if(eDir == eDirection_TtoB || eDir == eDirection_BtoT)
	{
		SetLength(fabs(float(pGaugeRegion->right - pGaugeRegion->left)));
		SetTolerance(fabs(float(pGaugeRegion->bottom - pGaugeRegion->top) / 2.f));
		SetAngle((eDir == eDirection_TtoB) ? 0.f: 180.f);
	}
	else if(eDir == eDirection_LtoR || eDir == eDirection_RtoL)
	{
		SetLength(fabs(float(pGaugeRegion->bottom - pGaugeRegion->top)));
		SetTolerance(fabs(float(pGaugeRegion->right - pGaugeRegion->left) / 2.f));
		SetAngle((eDir == eDirection_LtoR) ? -90.f: 90.f);
	}

	return Measure(pImgInfo);
}

DPOINT CAlgOevLineGauge::GetMeasuredCenter()
{
	DPOINT dptMeasuredCenter;

	dptMeasuredCenter.x = m_pLineGauge->GetMeasuredLine().GetCenterX();
	dptMeasuredCenter.y = m_pLineGauge->GetMeasuredLine().GetCenterY();

	return dptMeasuredCenter;
}

unsigned long CAlgOevLineGauge::GetNumSamples()
{
	return m_pLineGauge->GetNumSamples();
}
unsigned long CAlgOevLineGauge::GetNumValidSamples()
{
	return m_pLineGauge->GetNumValidSamples();
}

float CAlgOevLineGauge::GetScore()
{
	float fScore = 0.f;

	if(GetNumSamples() > 0)
		fScore = (float(GetNumValidSamples()) / float(GetNumSamples())) * 100.;

	return fScore;
}

bool CAlgOevLineGauge::GetMeasuredValidPoints(std::vector<DPOINT>* pVctPoints, bool bIncludeInvalid/* = false*/)
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

			if(m_pLineGauge->GetSample(pt, i))
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

float CAlgOevLineGauge::GetMeasuredAngle()
{
	float fResult = 0.f;

	fResult = m_pLineGauge->GetMeasuredLine().GetAngle();

	return fResult;
}

SLine CAlgOevLineGauge::GetMeasuredLine()
{
	SLine sReturn;
	ZeroMemory(&sReturn, sizeof(sReturn));

	sReturn.dptStart.x = m_pLineGauge->GetMeasuredLine().GetOrg().GetX();
	sReturn.dptStart.y = m_pLineGauge->GetMeasuredLine().GetOrg().GetY();

	sReturn.dptEnd.x = m_pLineGauge->GetMeasuredLine().GetEnd().GetX();
	sReturn.dptEnd.y = m_pLineGauge->GetMeasuredLine().GetEnd().GetY();

	return sReturn;
}

