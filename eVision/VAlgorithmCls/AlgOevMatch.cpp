//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevMatch.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevMatch::CAlgOevMatch(void)
{
	m_pMatch = new EMatcher;
	ZeroMemory(&m_dptOffset, sizeof(m_dptOffset));
}

CAlgOevMatch::~CAlgOevMatch(void)
{
	if(m_pMatch)
	{
		delete m_pMatch;
		m_pMatch = nullptr;
	}
}

CVisionObject* CAlgOevMatch::CreateVisionInstance()
{
	return nullptr;
}

bool CAlgOevMatch::Load(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		FILE* fp = _tfopen(lpszFilename, _T("rb"));

		if(fp)
		{
			fclose(fp);

			m_pMatch->Load(T2A(lpszFilename));
			bReturn = true;
		}
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatch::Save(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		m_pMatch->Save(T2A(lpszFilename));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatch::Learn(CImageInfo* pImgInfo, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		EROIBW8 eRoi;

		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
		}

		m_pMatch->LearnPattern(&eRoi);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

std::vector<SOevFoundMatch> CAlgOevMatch::Match(CImageInfo* pImgInfo, RECT* pRegion/* = nullptr*/)
{
	std::vector<SOevFoundMatch> vctReturn;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

		EROIBW8 eRoi;

		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());

			m_dptOffset.x = 0;
			m_dptOffset.y = 0;
		}

		m_pMatch->Match(&eRoi);

		for(ULONG i = 0; i < m_pMatch->GetNumPositions(); ++i)
		{
			SOevFoundMatch sFoundMatch;
			EMatchPosition eCurPos = m_pMatch->GetPosition(i);

			sFoundMatch.fAngle = eCurPos.Angle;
			sFoundMatch.fAreaRatio = eCurPos.AreaRatio;
			sFoundMatch.fScale = eCurPos.Scale;
			sFoundMatch.fScaleX = eCurPos.ScaleX;
			sFoundMatch.fScaleY = eCurPos.ScaleY;
			sFoundMatch.bInterpolated = eCurPos.Interpolated;
			sFoundMatch.fScore = eCurPos.Score;
			sFoundMatch.dptCenter.x = eCurPos.CenterX + m_dptOffset.x;
			sFoundMatch.dptCenter.y = eCurPos.CenterY + m_dptOffset.y;

			vctReturn.push_back(sFoundMatch);
		}
	}
	catch(const EException&)
	{
	}

	return vctReturn;
}

bool CAlgOevMatch::SetMinReducedArea(ULONG ulValue)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinReducedArea(ulValue);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevMatch::GetMinReducedArea()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pMatch->GetMinReducedArea();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevMatch::SetFilteringMode(EFilteringMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetFilteringMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EFilteringMode CAlgOevMatch::GetFilteringMode()
{
	EFilteringMode eReturn = EFilteringMode_reserved0;

	try
	{
		eReturn = m_pMatch->GetFilteringMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevMatch::SetPixelDimensions(float fWidth, float fHeight)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetPixelDimensions(fWidth, fHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

DPOINT CAlgOevMatch::GetPixelDimensions()
{
	DPOINT dptReturn;
	ZeroMemory(&dptReturn, sizeof(dptReturn));

	try
	{
		float fWidth = 0.f, fHeight = 0.f;
		m_pMatch->GetPixelDimensions(fWidth, fHeight);

		dptReturn.x = fWidth;
		dptReturn.y = fHeight;
	}
	catch(const EException&)
	{
	}

	return dptReturn;
}


bool CAlgOevMatch::SetMaxOccurrences(ULONG ulCount)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxPositions(ulCount);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevMatch::GetMaxOccurrences()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pMatch->GetMaxPositions();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevMatch::SetMaxInitialOccurrences(ULONG ulCount)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxInitialPositions(ulCount);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevMatch::GetMaxInitialOccurrences()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pMatch->GetMaxInitialPositions();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevMatch::SetMinScore(float fScore)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinScore(fScore);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMinScore()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pMatch->GetMinScore();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatch::SetFinalReduction(ULONG ulReduction)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetFinalReduction(ulReduction);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevMatch::GetFinalReduction()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pMatch->GetFinalReduction();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevMatch::SetSubPixelInterpolate(bool bSet)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetInterpolate(bSet);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
	
}

bool CAlgOevMatch::GetSubPixelInterpolate()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pMatch->GetInterpolate();
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

bool CAlgOevMatch::SetContrastMode(EMatchContrastMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetContrastMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

EMatchContrastMode CAlgOevMatch::GetContrastMode()
{
	EMatchContrastMode eReturn = EMatchContrastMode_reserved0;

	try
	{
		eReturn = m_pMatch->GetContrastMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;

}

bool CAlgOevMatch::SetCorrelationMode(ECorrelationMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetCorrelationMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

ECorrelationMode CAlgOevMatch::GetCorrelationMode()
{
	ECorrelationMode eReturn = ECorrelationMode_reserved0;

	try
	{
		eReturn = m_pMatch->GetCorrelationMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;

}

bool CAlgOevMatch::SetMinAngle(float fAngle)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinAngle(fAngle);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMinAngle()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMinAngle();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatch::SetMaxAngle(float fAngle)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxAngle(fAngle);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMaxAngle()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMaxAngle();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}


bool CAlgOevMatch::SetMinScale(float fScale)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinScale(fScale);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMinScale()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMinScale();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatch::SetMaxScale(float fScale)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxScale(fScale);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMaxScale()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMaxScale();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}


bool CAlgOevMatch::SetMinScaleX(float fScaleX)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinScaleX(fScaleX);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMinScaleX()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMinScaleX();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatch::SetMaxScaleX(float fScaleX)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxScaleX(fScaleX);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMaxScaleX()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMaxScaleX();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}


bool CAlgOevMatch::SetMinScaleY(float fScaleY)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMinScaleY(fScaleY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMinScaleY()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMinScaleY();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatch::SetMaxScaleY(float fScaleY)
{
	bool bReturn = false;

	try
	{
		m_pMatch->SetMaxScaleY(fScaleY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatch::GetMaxScaleY()
{
	float fReturn = 0;

	try
	{
		fReturn = m_pMatch->GetMaxScaleY();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}


