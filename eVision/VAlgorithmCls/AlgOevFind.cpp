//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevFind.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevFind::CAlgOevFind(void)
{
	m_pFind = new EPatternFinder;
	ZeroMemory(&m_dptOffset, sizeof(m_dptOffset));
}

CAlgOevFind::~CAlgOevFind(void)
{
	if(m_pFind)
	{
		delete m_pFind;
		m_pFind = nullptr;
	}
}

CVisionObject* CAlgOevFind::CreateVisionInstance()
{
	return nullptr;
}

bool CAlgOevFind::Load(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		FILE* fp = _tfopen(lpszFilename, _T("rb"));

		if(fp)
		{
			fclose(fp);

			m_pFind->Load(T2A(lpszFilename));
			bReturn = true;
		}
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFind::Save(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		m_pFind->Save(T2A(lpszFilename));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFind::Learn(CImageInfo* pImgInfo, RECT* pRegion/* = nullptr*/)
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

		m_pFind->Learn(&eRoi);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}


bool CAlgOevFind::LearnAddException(CImageInfo* pImgInfo, CImageInfo* pImgInfoException, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	do 
	{
		try
		{
			if(!pImgInfo || !pImgInfo->GetBuffer())
				break;

			if(!pImgInfoException || !pImgInfoException->GetBuffer())
				break;

			if(pImgInfo->GetSizeX() != pImgInfoException->GetSizeX() || pImgInfo->GetSizeY() != pImgInfoException->GetSizeY())
				break;

			EImageBW8 eImage;
			eImage.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfo->GetBuffer());

			EImageBW8 eImageException;
			eImageException.SetImagePtr(pImgInfo->GetSizeX(), pImgInfo->GetSizeY(), pImgInfoException->GetBuffer());

			EROIBW8 eRoi;
			EROIBW8 eRoiException;

			if(pRegion)
			{
				CRect rcBlobRegion(*pRegion);

				eRoi.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

				eRoiException.Attach(&eImageException, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			}
			else
			{
				eRoi.Attach(&eImage, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());

				eRoiException.Attach(&eImageException, 0, 0, pImgInfo->GetSizeX(), pImgInfo->GetSizeY());
			}

			m_pFind->Learn(&eRoi, &eRoiException);

			bReturn = true;
		}
		catch(const EException&)
		{
		}
	}
	while(false);

	return bReturn;
}


std::vector<SOevFoundPattern> CAlgOevFind::Find(CImageInfo* pImgInfo, RECT* pRegion/* = nullptr*/)
{
	std::vector<SOevFoundPattern> vctPattern;

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

		std::vector<EFoundPattern> vctCurrent = m_pFind->Find(&eRoi);

		for(auto iter = vctCurrent.begin(); iter != vctCurrent.end(); ++iter)
		{
			SOevFoundPattern sFP;
			
			sFP.fAngle = iter->GetAngle();
			sFP.fScale = iter->GetScale();
			sFP.fScore = iter->GetScore();

			sFP.dptCenter.x = iter->GetCenter().GetX() + m_dptOffset.x;
			sFP.dptCenter.y = iter->GetCenter().GetY() + m_dptOffset.y;

			for(int i = 0; i < 4; ++i)
			{
				sFP.dqdrBoundingBox.ptKnot[i].x = iter->GetQuadrangle().GetPoint(i).GetX() + m_dptOffset.x;
				sFP.dqdrBoundingBox.ptKnot[i].y = iter->GetQuadrangle().GetPoint(i).GetY() + m_dptOffset.y;
			}

			sFP.drcBoundingBox.left = __min(__min(__min(sFP.dqdrBoundingBox.ptKnot[0].x, sFP.dqdrBoundingBox.ptKnot[1].x), sFP.dqdrBoundingBox.ptKnot[2].x), sFP.dqdrBoundingBox.ptKnot[3].x);
			sFP.drcBoundingBox.top = __min(__min(__min(sFP.dqdrBoundingBox.ptKnot[0].y, sFP.dqdrBoundingBox.ptKnot[1].y), sFP.dqdrBoundingBox.ptKnot[2].y), sFP.dqdrBoundingBox.ptKnot[3].y);
			sFP.drcBoundingBox.right = __max(__max(__max(sFP.dqdrBoundingBox.ptKnot[0].x, sFP.dqdrBoundingBox.ptKnot[1].x), sFP.dqdrBoundingBox.ptKnot[2].x), sFP.dqdrBoundingBox.ptKnot[3].x);
			sFP.drcBoundingBox.bottom = __max(__max(__max(sFP.dqdrBoundingBox.ptKnot[0].y, sFP.dqdrBoundingBox.ptKnot[1].y), sFP.dqdrBoundingBox.ptKnot[2].y), sFP.dqdrBoundingBox.ptKnot[3].y);

			vctPattern.push_back(sFP);
		}
	}
	catch(const EException&)
	{
	}

	return vctPattern;
}

bool CAlgOevFind::SetPatternType(EPatternType eType)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetPatternType(eType);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EPatternType CAlgOevFind::GetPatternType()
{
	EPatternType eReturn = EPatternType_Unknown;

	try
	{
		eReturn = m_pFind->GetPatternType();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevFind::SetLightBalance(float fBalance)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetLightBalance(fBalance);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetLightBalance()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetLightBalance();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetTransitionThickness(ULONG ulThickness)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetTransitionThickness(ulThickness);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevFind::GetTransitionThickness()
{
	ULONG ulReturn = false;

	try
	{
		ulReturn = m_pFind->GetTransitionThickness();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevFind::SetAutoTransitionThickness(bool bAuto)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetAutoTransitionThickness(bAuto);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFind::GetAutoTransitionThickness()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pFind->GetAutoTransitionThickness();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevFind::SetMinFeaturePoints(ULONG ulPoints)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetMinFeaturePoints(ulPoints);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevFind::GetMinFeaturePoints()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pFind->GetMinFeaturePoints();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevFind::SetMaxFeaturePoints(ULONG ulPoints)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetMaxFeaturePoints(ulPoints);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevFind::GetMaxFeaturePoints()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pFind->GetMaxFeaturePoints();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevFind::SetReductionMode(EReductionMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetReductionMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EReductionMode CAlgOevFind::GetReductionMode()
{
	EReductionMode eReturn = EReductionMode_Unknown;

	try
	{
		eReturn = m_pFind->GetReductionMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevFind::SetReductionStrength(float fStrength)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetReductionStrength(fStrength);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetReductionStrength()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetReductionStrength();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetMaxInstance(ULONG ulCount)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetMaxInstances(ulCount);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ULONG CAlgOevFind::GetMaxInstance()
{
	ULONG ulReturn = 0;

	try
	{
		ulReturn = m_pFind->GetMaxInstances();
	}
	catch(const EException&)
	{
	}

	return ulReturn;
}

bool CAlgOevFind::SetMinScore(float fMinScore)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetMinScore(fMinScore);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetMinScore()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetMinScore();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetContrastMode(EFindContrastMode eContrastMode)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetContrastMode(eContrastMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EFindContrastMode CAlgOevFind::GetContrastMode()
{
	EFindContrastMode eReturn = EFindContrastMode_Unknown;

	try
	{
		eReturn = m_pFind->GetContrastMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevFind::SetLocalSearchMode(ELocalSearchMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetLocalSearchMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ELocalSearchMode CAlgOevFind::GetLocalSearchMode()
{
	ELocalSearchMode eReturn = ELocalSearchMode_Reserved;

	try
	{
		eReturn = m_pFind->GetLocalSearchMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevFind::SetAngleSearchExtent(long nAngle)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetAngleSearchExtent(nAngle);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
	
}

long CAlgOevFind::GetAngleSearchExtent()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pFind->GetAngleSearchExtent();
	}
	catch(const EException&)
	{
	}

	return nReturn;

}

bool CAlgOevFind::SetScaleSearchExtent(long nScale)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetScaleSearchExtent(nScale);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

long CAlgOevFind::GetScaleSearchExtent()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pFind->GetScaleSearchExtent();
	}
	catch(const EException&)
	{
	}

	return nReturn;

}

bool CAlgOevFind::SetXSearchExtent(long nX)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetXSearchExtent(nX);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

long CAlgOevFind::GetXSearchExtent()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pFind->GetXSearchExtent();
	}
	catch(const EException&)
	{
	}

	return nReturn;

}

bool CAlgOevFind::SetYSearchExtent(long nY)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetYSearchExtent(nY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;

}

long CAlgOevFind::GetYSearchExtent()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pFind->GetYSearchExtent();
	}
	catch(const EException&)
	{
	}

	return nReturn;

}


bool CAlgOevFind::SetAngleBias(float fAngle)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetAngleBias(fAngle);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetAngleBias()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetAngleBias();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetAngleTolerance(float fAngle)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetAngleTolerance(fAngle);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetAngleTolerance()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetAngleTolerance();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetScaleBias(float fScale)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetScaleBias(fScale);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetScaleBias()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetScaleBias();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevFind::SetScaleTolerance(float fScale)
{
	bool bReturn = false;

	try
	{
		m_pFind->SetScaleTolerance(fScale);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevFind::GetScaleTolerance()
{
	float fReturn = 0.f;

	try
	{
		fReturn = m_pFind->GetScaleTolerance();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}


