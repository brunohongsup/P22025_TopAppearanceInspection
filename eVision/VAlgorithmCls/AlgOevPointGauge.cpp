//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevPointGauge.h"

//////////////////////////////////////////////////////////////////////////

CAlgOevPointGauge::CAlgOevPointGauge(void)
{
	m_pPointGauge = new EPointGauge;
}

CAlgOevPointGauge::~CAlgOevPointGauge(void)
{
	if(m_pPointGauge)
	{
		delete m_pPointGauge;
		m_pPointGauge = nullptr;
	}
}

CVisionObject* CAlgOevPointGauge::CreateVisionInstance()
{
	return nullptr;
}



void CAlgOevPointGauge::SetTolerance(float fTolerance)
{
	m_pPointGauge->SetTolerance(fTolerance);
}

float CAlgOevPointGauge::GetTolerance()
{
	return m_pPointGauge->GetTolerance();
}


void CAlgOevPointGauge::SetToleranceAngle(float fTolerance, float fAngle)
{
	m_pPointGauge->SetTolerances(fTolerance, fAngle);
}

void CAlgOevPointGauge::SetHVConstraint(bool bSet)
{
	m_pPointGauge->SetHVConstraint(bSet);
}

bool CAlgOevPointGauge::GetHVConstraint()
{
	return m_pPointGauge->GetHVConstraint();
}

void CAlgOevPointGauge::SetAngle(float fAngle)
{
	m_pPointGauge->SetAngle(fAngle);
}

float CAlgOevPointGauge::GetAngle()
{
	return m_pPointGauge->GetAngle();
}

void CAlgOevPointGauge::SetCenterXY(float fX, float fY)
{
	m_pPointGauge->SetCenterXY(fX, fY);
}

float CAlgOevPointGauge::GetCenterX()
{
	return m_pPointGauge->GetCenterX();
}

float CAlgOevPointGauge::GetCenterY()
{
	return m_pPointGauge->GetCenterY();
}

DPOINT CAlgOevPointGauge::GetCenterXY()
{
	DPOINT dptReturn;

	dptReturn.x = GetCenterX();
	dptReturn.y = GetCenterY();

	return dptReturn;
}



void CAlgOevPointGauge::SetMinAmplitude(unsigned long ulMinAmplitude)
{
	m_pPointGauge->SetMinAmplitude(ulMinAmplitude);
}

unsigned long CAlgOevPointGauge::GetMinAmplitude()
{
	return m_pPointGauge->GetMinAmplitude();
}

void CAlgOevPointGauge::SetMinArea(unsigned long ulMinArea)
{
	m_pPointGauge->SetMinArea(ulMinArea);
}

unsigned long CAlgOevPointGauge::GetMinArea()
{
	return m_pPointGauge->GetMinArea();
}

void CAlgOevPointGauge::SetThreshold(unsigned long ulThreshold)
{
	m_pPointGauge->SetThreshold(ulThreshold);
}

unsigned long CAlgOevPointGauge::GetThreshold()
{
	return m_pPointGauge->GetThreshold();
}

void CAlgOevPointGauge::SetThickness(unsigned long ulThickness)
{
	m_pPointGauge->SetThickness(ulThickness);
}

unsigned long CAlgOevPointGauge::GetThickness()
{
	return m_pPointGauge->GetThickness();
}

void CAlgOevPointGauge::SetSmoothing(unsigned long ulSmoothing)
{
	m_pPointGauge->SetSmoothing(ulSmoothing);
}

unsigned long CAlgOevPointGauge::GetSmoothing()
{
	return m_pPointGauge->GetSmoothing();
}

void CAlgOevPointGauge::SetTransitionChoice(ETransitionChoice eTransitionChoice)
{
	m_pPointGauge->SetTransitionChoice(eTransitionChoice);
}

ETransitionChoice CAlgOevPointGauge::GetTransitionChoice()
{
	return m_pPointGauge->GetTransitionChoice();
}

void CAlgOevPointGauge::SetTransitionType(ETransitionType eTransitionType)
{
	m_pPointGauge->SetTransitionType(eTransitionType);
}

ETransitionType CAlgOevPointGauge::GetTransitionType()
{
	return m_pPointGauge->GetTransitionType();
}

void CAlgOevPointGauge::SetTransitionIndex(unsigned long nIndex)
{
	m_pPointGauge->SetTransitionIndex(nIndex);
}

unsigned long CAlgOevPointGauge::GetTransitionIndex()
{
	return m_pPointGauge->GetTransitionIndex();
}

bool CAlgOevPointGauge::Measure(CImageInfo* pImgInfo)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		m_pPointGauge->Measure(&eImage);

		if(GetNumMeasuredPoints() > 0)
			bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevPointGauge::Measure(CImageInfo* pImgInfo, RECT* pGaugeRegion, eDirection eDir)
{
	bool bReturn = false;

	if(pGaugeRegion)
		SetCenterXY(float(pGaugeRegion->left + pGaugeRegion->right) / 2.f, float(pGaugeRegion->top + pGaugeRegion->bottom) / 2.f);

	if(eDir == eDirection_TtoB || eDir == eDirection_BtoT)
	{
		SetTolerance(fabs(float(pGaugeRegion->right - pGaugeRegion->left)));
		SetAngle((eDir == eDirection_TtoB) ? 0.f: 180.f);
	}
	else if(eDir == eDirection_LtoR || eDir == eDirection_RtoL)
	{
		SetTolerance(fabs(float(pGaugeRegion->bottom - pGaugeRegion->top)));
		SetAngle((eDir == eDirection_LtoR) ? -90.f: 90.f);
	}

	return Measure(pImgInfo);
}

unsigned long CAlgOevPointGauge::GetNumMeasuredPoints()
{
	return m_pPointGauge->GetNumMeasuredPoints();
}


bool CAlgOevPointGauge::GetMeasuredPoints(std::vector<DPOINT>* pVctPoints)
{
	bool bReturn = false;

	do
	{
		if(!pVctPoints)
			break;

		pVctPoints->clear();

		if(!GetNumMeasuredPoints())
			break;

		int nSampleCnt = GetNumMeasuredPoints();

		for(int i = 0; i < nSampleCnt; i++) 
		{
			EPoint pt;

			pt = m_pPointGauge->GetMeasuredPoint(i);

			DPOINT dptPoint;

			dptPoint.x = pt.GetX();
			dptPoint.y = pt.GetY();

			pVctPoints->push_back(dptPoint);
		}

		bReturn = true;	
	}
		while(false);

	return bReturn;
}

