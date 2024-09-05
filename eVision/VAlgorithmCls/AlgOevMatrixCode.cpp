//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevMatrixCode.h"


//////////////////////////////////////////////////////////////////////////

CAlgOevMatrixCode::CAlgOevMatrixCode(void)
{
	m_pMatrixCodeReader = new EMatrixCodeReader;
	m_pMatrixCode = new EMatrixCode;
	ZeroMemory(&m_dptOffset, sizeof(m_dptOffset));
}

CAlgOevMatrixCode::~CAlgOevMatrixCode(void)
{
	if(m_pMatrixCodeReader)
	{
		delete m_pMatrixCodeReader;
		m_pMatrixCodeReader = nullptr;
	}

	if(m_pMatrixCode)
	{
		delete m_pMatrixCode;
		m_pMatrixCode = nullptr;
	}
}

CVisionObject* CAlgOevMatrixCode::CreateVisionInstance()
{
	return nullptr;
}

bool CAlgOevMatrixCode::SetComputeGrading(bool bEnable/* = false*/)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetComputeGrading(bEnable);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::GetComputeGrading()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pMatrixCodeReader->GetComputeGrading();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::SetLearnMaskElement(ELearnParam eIndex, bool bEnable/* = true*/)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetLearnMaskElement(eIndex, bEnable);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::GetLearnMaskElement(ELearnParam eIndex)
{
	bool bReturn = false;

	try
	{
		bReturn = m_pMatrixCodeReader->GetLearnMaskElement(eIndex);
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::SetMaxHeightWidthRatio(float fRatio/* = 3.8f*/)
{
	bool bReturn = false;

	try
	{
		fRatio = __max(0.0f, __min(5.0f, fRatio));

		m_pMatrixCodeReader->SetMaxHeightWidthRatio(fRatio);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatrixCode::GetMaxHeightWidthRatio()
{
	bool fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCodeReader->GetMaxHeightWidthRatio();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatrixCode::SetNominalPrintGrowth(float fPrintGrowth/* = 1.0f*/)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetNominalPrintGrowth(fPrintGrowth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatrixCode::GetNominalPrintGrowth()
{
	float fReturn = 0.0f;

	try
	{
		m_pMatrixCodeReader->GetNominalPrintGrowth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatrixCode::SetMinimumPrintGrowth(float fPrintGrowth/* = 0.0f*/)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetMinimumPrintGrowth(fPrintGrowth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatrixCode::GetMinimumPrintGrowth()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCodeReader->GetMinimumPrintGrowth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatrixCode::SetMaximumPrintGrowth(float fPrintGrowth/* = 2.0f*/)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetMaximumPrintGrowth(fPrintGrowth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevMatrixCode::GetMaximumPrintGrowth()
{
	float fReturn;

	try
	{
		fReturn = m_pMatrixCodeReader->GetMaximumPrintGrowth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevMatrixCode::SetTimeOut(UINT32 unTimeOutMs)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->SetTimeOut(unTimeOutMs);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

UINT32 CAlgOevMatrixCode::GetTimeOut()
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pMatrixCodeReader->GetTimeOut();
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

bool CAlgOevMatrixCode::Learn(CImageInfo* pImageInfo, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	if(!pImageInfo)
		return bReturn;

	if(!pImageInfo->GetBuffer())
		return bReturn;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImageInfo->GetSizeX(), pImageInfo->GetSizeY(), pImageInfo->GetBuffer());

		EROIBW8 eROI;
		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			eROI.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			eROI.Attach(&eImage, 0, 0, pImageInfo->GetSizeX(), pImageInfo->GetSizeY());

			m_dptOffset.x = 0.0;
			m_dptOffset.y = 0.0;
		}

		m_pMatrixCodeReader->Learn(eROI);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::LearnMore(CImageInfo* pImageInfo, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	if(!pImageInfo)
		return bReturn;

	if(!pImageInfo->GetBuffer())
		return bReturn;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImageInfo->GetSizeX(), pImageInfo->GetSizeY(), pImageInfo->GetBuffer());

		EROIBW8 eROI;
		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			eROI.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			eROI.Attach(&eImage, 0, 0, pImageInfo->GetSizeX(), pImageInfo->GetSizeY());

			m_dptOffset.x = 0.0;
			m_dptOffset.y = 0.0;
		}

		m_pMatrixCodeReader->LearnMore(eROI);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::Read(CImageInfo* pImageInfo, RECT* pRegion/* = nullptr*/)
{
	bool bReturn = false;

	if(!pImageInfo)
		return bReturn;

	if(!pImageInfo->GetBuffer())
		return bReturn;

	try
	{
		EImageBW8 eImage;
		eImage.SetImagePtr(pImageInfo->GetSizeX(), pImageInfo->GetSizeY(), pImageInfo->GetBuffer());

		EROIBW8 eROI;
		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			eROI.Attach(&eImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());
			
			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			eROI.Attach(&eImage, 0, 0, pImageInfo->GetSizeX(), pImageInfo->GetSizeY());

			m_dptOffset.x = 0.0;
			m_dptOffset.y = 0.0;
		}

		(*m_pMatrixCode) = m_pMatrixCodeReader->Read(eROI);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::Reset()
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->Reset();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::Load(LPCTSTR lpszFilename, bool bLearn /* = true */)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		FILE* fp = _tfopen(lpszFilename, _T("rb"));

		if(fp)
		{
			fclose(fp);

			if(bLearn)
				m_pMatrixCodeReader->Load(T2A(lpszFilename));
			else
				m_pMatrixCode->Load(T2A(lpszFilename));

			bReturn = true;
		}
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::Save(LPCTSTR lpszFilename, bool bLearn /* = true */)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;
		
		if(bLearn)
			m_pMatrixCodeReader->Save(T2A(lpszFilename));
		else
			m_pMatrixCode->Save(T2A(lpszFilename));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::SetCorner(long nIndex, DPOINT dptCorner)
{
	bool bReturn = false;

	try
	{
		EPoint ePoint;
		ePoint.SetCenterXY((float)(dptCorner.x - m_dptOffset.x), (float)(dptCorner.y - m_dptOffset.y));

		m_pMatrixCode->SetCorner(nIndex, ePoint);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

DPOINT CAlgOevMatrixCode::GetCorner(long nIndex)
{
	DPOINT dptReturn;
	ZeroMemory(&dptReturn, sizeof(dptReturn));

	try
	{
		EPoint ePoint = m_pMatrixCode->GetCorner(nIndex);
		dptReturn.x = ePoint.GetX() + m_dptOffset.x;
		dptReturn.y = ePoint.GetY() + m_dptOffset.y;
	}
	catch(const EException&)
	{
	}

	return dptReturn;
}

DQUADRANGLE CAlgOevMatrixCode::GetDquadrangle()
{
	DQUADRANGLE dqdrReturn;
	ZeroMemory(&dqdrReturn, sizeof(dqdrReturn));

	try
	{
		DPOINT dptCenter = GetCenter();

		long nWidth = GetLogicalSizeWidth();
		long nHeight = GetLogicalSizeHeight();

		for(long i = 0; i < 4; ++i)
		{
			dqdrReturn.ptKnot[i] = GetCorner(i);
			dqdrReturn.ptKnot[i].x += (dqdrReturn.ptKnot[i].x - dptCenter.x) / (float)(nWidth - 1);
			dqdrReturn.ptKnot[i].y += (dqdrReturn.ptKnot[i].y - dptCenter.y) / (float)(nHeight - 1);
		}
	}
	catch(const EException&)
	{
		ZeroMemory(&dqdrReturn, sizeof(dqdrReturn));
	}

	return dqdrReturn;
}

float CAlgOevMatrixCode::GetAngle()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetAngle();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

float CAlgOevMatrixCode::GetAxialNonUniformity()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetAxialNonUniformity();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetAxialNonUniformityGrade()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetAxialNonUniformityGrade();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

DPOINT CAlgOevMatrixCode::GetCenter()
{
	DPOINT dptReturn;
	ZeroMemory(&dptReturn, sizeof(dptReturn));

	try
	{
		EPoint ePoint = m_pMatrixCode->GetCenter();
		dptReturn.x = ePoint.GetX() + m_dptOffset.x;
		dptReturn.y = ePoint.GetY() + m_dptOffset.y;
	}
	catch(const EException&)
	{
	}

	return dptReturn;
}

float CAlgOevMatrixCode::GetContrast()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetContrast();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetContrastGrade()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetContrastGrade();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

EMatrixCodeContrastMode CAlgOevMatrixCode::GetContrastType()
{
	EMatrixCodeContrastMode modeReturn = EMatrixCodeContrastMode_reserved0;

	try
	{
		modeReturn = m_pMatrixCode->GetContrastType();
	}
	catch(const EException&)
	{
	}
	
	return modeReturn;
}

BYTE CAlgOevMatrixCode::GetDecodedDataElement(long nIndex)
{
	BYTE cReturn = 0;

	try
	{
		cReturn = m_pMatrixCode->GetDecodedDataElement(nIndex);
	}
	catch(const EException&)
	{
	}

	return cReturn;
}

LPCTSTR CAlgOevMatrixCode::GetDecodedString()
{
	LPCTSTR lpszReturn = nullptr;

	try
	{
		std::string strTemp;

		strTemp = m_pMatrixCode->GetDecodedString();

		if(strTemp.size())
		{
			USES_CONVERSION;

			lpszReturn = new TCHAR[strTemp.size() + 1];
			_tcscpy((LPTSTR)lpszReturn, A2T(strTemp.c_str()));
		}
	}
	catch(const EException&)
	{
	}

	return lpszReturn;
}

bool CAlgOevMatrixCode::GetDecodedString(CString* lpszRead)
{
	bool bReturn = false;

	try
	{
		std::string strTemp;

		strTemp = m_pMatrixCode->GetDecodedString();

		
		USES_CONVERSION;

		lpszRead->Format(_T("%s"), A2T(strTemp.c_str()));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EFamily CAlgOevMatrixCode::GetFamily()
{
	EFamily famReturn = EFamily_Unknown;

	try
	{
		famReturn = m_pMatrixCode->GetFamily();
	}
	catch(const EException&)
	{
	}

	return famReturn;
}

EFlipping CAlgOevMatrixCode::GetFlipping()
{
	EFlipping flipReturn = EFlipping_Unknown;

	try
	{
		flipReturn = m_pMatrixCode->GetFlipping();
	}
	catch(const EException&)
	{
	}

	return flipReturn;
}

bool CAlgOevMatrixCode::GetFound()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pMatrixCode->GetFound();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevMatrixCode::GetLocationThreshold()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetLocationThreshold();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

ELogicalSize CAlgOevMatrixCode::GetLogicalSize()
{
	ELogicalSize sizeReturn = ELogicalSize_Unknown;

	try
	{
		sizeReturn = m_pMatrixCode->GetLogicalSize();
	}
	catch(const EException&)
	{
	}

	return sizeReturn;
}

long CAlgOevMatrixCode::GetLogicalSizeHeight()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetLogicalSizeHeight();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

long CAlgOevMatrixCode::GetLogicalSizeWidth()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetLogicalSizeWidth();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

float CAlgOevMatrixCode::GetMeasuredPrintGrowth()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetMeasuredPrintGrowth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetNumErrors()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetNumErrors();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

long CAlgOevMatrixCode::GetOverallGrade()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetOverallGrade();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

float CAlgOevMatrixCode::GetPrintGrowth()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetPrintGrowth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetPrintGrowthGrade()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetPrintGrowthGrade();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

long CAlgOevMatrixCode::GetReadingThreshold()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCode->GetReadingThreshold();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

float CAlgOevMatrixCode::GetUnusedErrorCorrection()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetUnusedErrorCorrection();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetUnusedErrorCorrectionGrade()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetUnusedErrorCorrectionGrade();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

float CAlgOevMatrixCode::GetDataMatrixCellHeight()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetDataMatrixCellHeight();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

float CAlgOevMatrixCode::GetDataMatrixCellWidth()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pMatrixCode->GetDataMatrixCellWidth();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

long CAlgOevMatrixCode::GetContrastCount()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCodeReader->GetSearchParams().GetContrastCount();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

EMatrixCodeContrastMode CAlgOevMatrixCode::GetContrast(long nIndex)
{
	EMatrixCodeContrastMode eReturn = EMatrixCodeContrastMode_reserved0;

	try
	{
		eReturn = m_pMatrixCodeReader->GetSearchParams().GetContrast(nIndex);
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevMatrixCode::AddContrast(EMatrixCodeContrastMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().AddContrast(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::RemoveContrast(EMatrixCodeContrastMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().RemoveContrast(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::ClearContrast()
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().ClearContrast();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevMatrixCode::GetFamilyCount()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCodeReader->GetSearchParams().GetFamilyCount();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}
EFamily CAlgOevMatrixCode::GetFamily(long nIndex)
{
	EFamily eReturn = EFamily_Unknown;

	try
	{
		eReturn = m_pMatrixCodeReader->GetSearchParams().GetFamily(nIndex);
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevMatrixCode::AddFamily(EFamily eFamily)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().AddFamily(eFamily);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}
bool CAlgOevMatrixCode::RemoveFamily(EFamily eFamily)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().RemoveFamily(eFamily);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::ClearFamily()
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().ClearFamily();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevMatrixCode::GetFlippingCount()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCodeReader->GetSearchParams().GetFlippingCount();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

EFlipping CAlgOevMatrixCode::GetFlipping(long nIndex)
{
	EFlipping eReturn = EFlipping_Unknown;

	try
	{
		eReturn = m_pMatrixCodeReader->GetSearchParams().GetFlipping(nIndex);
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevMatrixCode::AddFlipping(EFlipping eFlip)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().AddFlipping(eFlip);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::RemoveFlipping(EFlipping eFlip)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().RemoveFlipping(eFlip);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::ClearFlipping()
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().ClearFlipping();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevMatrixCode::GetLogicalSizeCount()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pMatrixCodeReader->GetSearchParams().GetLogicalSizeCount();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

ELogicalSize CAlgOevMatrixCode::GetLogicalSize(long nIndex)
{
	ELogicalSize eReturn = ELogicalSize_Unknown;

	try
	{
		eReturn = m_pMatrixCodeReader->GetSearchParams().GetLogicalSize(nIndex);
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevMatrixCode::AddLogicalSize(ELogicalSize eSize)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().AddLogicalSize(eSize);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::RemoveLogicalSize(ELogicalSize eSize)
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().RemoveLogicalSize(eSize);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevMatrixCode::ClearLogicalSize()
{
	bool bReturn = false;

	try
	{
		m_pMatrixCodeReader->GetSearchParams().ClearLogicalSize();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

