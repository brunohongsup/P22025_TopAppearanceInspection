//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

#include "StdAfx.h"
#include "AlgOevOCR.h"

//////////////////////////////////////////////////////////////////////////

CAlgOevOCR::CAlgOevOCR(void)
{
	m_pOCR = new EOCR;
	m_pROI = new EROIBW8;
	m_pEImage = new EImageBW8;
	ZeroMemory(&m_dptOffset, sizeof(m_dptOffset));
}

CAlgOevOCR::~CAlgOevOCR(void)
{
	if(m_pEImage)
	{
		delete m_pEImage;
		m_pEImage = nullptr;
	}

	if(m_pROI)
	{
		delete m_pROI;
		m_pROI = nullptr;
	}

	if(m_pOCR)
	{
		delete m_pOCR;
		m_pOCR = nullptr;
	}
}

CVisionObject* CAlgOevOCR::CreateVisionInstance()
{
	return nullptr;
}

bool CAlgOevOCR::Load(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		FILE* fp = _tfopen(lpszFilename, _T("rb"));

		if(fp)
		{
			fclose(fp);

			m_pOCR->Load(T2A(lpszFilename));
			bReturn = true;
		}
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::Save(LPCTSTR lpszFilename)
{
	bool bReturn = false;

	try
	{
		USES_CONVERSION;

		m_pOCR->Save(T2A(lpszFilename));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetImageInfo(CImageInfo* pImageInfo, RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	if(!pImageInfo)
		return bReturn;

	if(!pImageInfo->GetBuffer())
		return bReturn;

	try
	{
		m_pEImage->SetImagePtr(pImageInfo->GetSizeX(), pImageInfo->GetSizeY(), pImageInfo->GetBuffer());

		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			m_pROI->Attach(m_pEImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			m_pROI->Attach(m_pEImage, 0, 0, m_pEImage->GetWidth(), m_pEImage->GetHeight());
			
			m_dptOffset.x = 0.0;
			m_dptOffset.y = 0.0;
		}

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetROI(RECT* pRegion /* = nullptr */)
{
	bool bReturn = false;

	try
	{
		if(pRegion)
		{
			CRect rcBlobRegion(*pRegion);

			m_pROI->Attach(m_pEImage, rcBlobRegion.left, rcBlobRegion.top, rcBlobRegion.Width(), rcBlobRegion.Height());

			m_dptOffset.x = rcBlobRegion.left;
			m_dptOffset.y = rcBlobRegion.top;
		}
		else
		{
			m_pROI->Attach(m_pEImage, 0, 0, m_pEImage->GetWidth(), m_pEImage->GetHeight());
			
			m_dptOffset.x = 0.0;
			m_dptOffset.y = 0.0;
		}

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetSegmentationMode(ESegmentationMode eSegmentationMode)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetSegmentationMode(eSegmentationMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

ESegmentationMode CAlgOevOCR::GetSegmentationMode()
{
	ESegmentationMode eReturn = ESegmentationMode_reserved0;

	try
	{
		eReturn = m_pOCR->GetSegmentationMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevOCR::SetThreshold(long nThreshold)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetThreshold(nThreshold);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetThreshold()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetThreshold();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetTextColor(EOCRColor eTextColor)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetTextColor(eTextColor);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EOCRColor CAlgOevOCR::GetTextColor()
{
	EOCRColor eReturn = EOCRColor_reserved0;

	try
	{
		eReturn = m_pOCR->GetTextColor();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevOCR::SetMinCharWidth(long nMinCharWidth)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetMinCharWidth(nMinCharWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetMinCharWidth()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetMinCharWidth();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetMaxCharWidth(long nMaxCharWidth)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetMaxCharWidth(nMaxCharWidth);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetMaxCharWidth()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetMaxCharWidth();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetMinCharHeight(long nMinCharHeight)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetMinCharHeight(nMinCharHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetMinCharHeight()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetMinCharHeight();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetMaxCharHeight(long nMaxCharHeight)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetMaxCharHeight(nMaxCharHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetMaxCharHeight()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetMaxCharHeight();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetCharSpacing(long nCharSpacing)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetCharSpacing(nCharSpacing);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetCharSpacing()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetCharSpacing();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::SetNoiseArea(long nNoiseArea)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetNoiseArea(nNoiseArea);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetNoiseArea()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetNoiseArea();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::BuildObjects()
{
	bool bReturn = false;

	try
	{
		m_pOCR->BuildObjects(m_pROI);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::FindAllChars()
{
	bool bReturn = false;

	try
	{
		m_pOCR->FindAllChars(m_pROI);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetNumChars()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetNumChars();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

bool CAlgOevOCR::LearnPattern(long nIndex, TCHAR szCode, EOCRClass eOCRClass /* = EOCRClass_reserved */, bool bAutoSegnation /* = true */)
{
	bool bReturn = false;

	if(!szCode)
		return bReturn;

	try
	{
		if(eOCRClass == EOCRClass_reserved)
			m_pOCR->LearnPattern(m_pROI, nIndex, szCode);
		else
			m_pOCR->LearnPattern(m_pROI, nIndex, szCode, eOCRClass, bAutoSegnation);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::LearnPatterns(LPCTSTR lpszCode, std::vector<UINT32>* pVctClasses /* = nullptr */, bool bAutoSegnation /* = true */)
{
	bool bReturn = false;
	
	if(!lpszCode)
		return bReturn;

	try
	{
		USES_CONVERSION;
		
		if(!pVctClasses || _tcslen(lpszCode) != pVctClasses->size())
			m_pOCR->LearnPatterns(m_pROI, T2A(lpszCode), EOCRClass_AllClasses, bAutoSegnation);
		
		else
			m_pOCR->LearnPatterns(m_pROI, T2A(lpszCode), *pVctClasses, bAutoSegnation);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

long CAlgOevOCR::GetNumPatterns()
{
	long nReturn = 0;

	try
	{
		nReturn = m_pOCR->GetNumPatterns();
	}
	catch(const EException&)
	{
	}

	return nReturn;
}

LPCTSTR CAlgOevOCR::Recognize(CImageInfo* pImgInfo, RECT* pRegion, long nMaximunChars, EOCRClass eClass/*std::vector<UINT32>* pVctClasses /* = nullptr */)
{
	LPCTSTR lpszReturn = nullptr;
	
	if(!pImgInfo)
		return lpszReturn;

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



		std::string strTemp;

	//	if(!pVctClasses)
	//		strTemp = m_pOCR->Recognize(m_pROI, nMaximunChars, EOCRClass_AllClasses);
	//	else
			strTemp = m_pOCR->Recognize(&eRoi, nMaximunChars, eClass);

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

bool CAlgOevOCR::Recognize(CString* lpszRead, CImageInfo* pImgInfo, RECT* pRegion /* = nullptr */, long nMaximunChars /* = LONG_MAX */, EOCRClass eClass /* = EOCRClass_AllClasses */)
{
	bool bReturn = false;

	if(!pImgInfo)
		return bReturn;

	if(!lpszRead)
		return bReturn;

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
		
		std::string strTemp;

		strTemp = m_pOCR->Recognize(&eRoi, nMaximunChars, eClass);

		USES_CONVERSION;

		lpszRead->Format(_T("%s"), A2T(strTemp.c_str()));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

std::vector<RECT> CAlgOevOCR::GetObjectRect()
{
	std::vector<RECT> vctReturn;

	try
	{
		for(long i = 0; i < GetNumChars(); ++i)
		{
			RECT rcObject;

			rcObject.left = m_pOCR->CharGetOrgX(i) + (long)m_dptOffset.x;
			rcObject.top = m_pOCR->CharGetOrgY(i) + (long)m_dptOffset.y;
			rcObject.right = m_pOCR->CharGetDstX(i) + (long)m_dptOffset.x;
			rcObject.bottom = m_pOCR->CharGetDstY(i) + (long)m_dptOffset.y;

			vctReturn.push_back(rcObject);
		}
	}
	catch(const EException&)
	{
		vctReturn.clear();
	}

	return vctReturn;
}


bool CAlgOevOCR::SetCompareAspectRatio(bool bCompare)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetCompareAspectRatio(bCompare);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::GetCompareAspectRatio()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pOCR->GetCompareAspectRatio();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetCutLargeChars(bool bCut)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetCutLargeChars(bCut);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::GetCutLargeChars()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pOCR->GetCutLargeChars();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetMatchingMode(EMatchingMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetMatchingMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EMatchingMode CAlgOevOCR::GetMatchingMode()
{
	EMatchingMode eReturn = EMatchingMode_reserved0;

	try
	{
		eReturn = m_pOCR->GetMatchingMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevOCR::SetPatternClass(long nIndex, EOCRClass eClass)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetPatternClass(nIndex, eClass);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

UINT32 CAlgOevOCR::GetPatternClass(long nIndex)
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pOCR->GetPatternClass(nIndex);
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

bool CAlgOevOCR::SetPatternCode(long nIndex, TCHAR szCode)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetPatternCode(nIndex, szCode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

TCHAR CAlgOevOCR::GetPatternCode(long nIndex)
{
	TCHAR szReturn = 0;

	try
	{
		szReturn = m_pOCR->GetPatternCode(nIndex);
	}
	catch(const EException&)
	{
	}

	return szReturn;
}

bool CAlgOevOCR::SetRelativeSpacing(float fRelativeSpacing)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetRelativeSpacing(fRelativeSpacing);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevOCR::GetRelativeSpacing()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = GetRelativeSpacing();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevOCR::SetRelativeThreshold(float fRelativeThreshold)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetRelativeThreshold(fRelativeThreshold);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevOCR::GetRelativeThreshold()
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pOCR->GetRelativeThreshold();
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

bool CAlgOevOCR::SetRemoveNarrowOrFlat(bool bRemove)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetRemoveNarrowOrFlat(bRemove);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::GetRemoveNarrowOrFlat()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pOCR->GetRemoveNarrowOrFlat();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetRemoveBorder(bool bRemove)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetRemoveBorder(bRemove);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::GetRemoveBorder()
{
	bool bReturn = false;

	try
	{
		bReturn = m_pOCR->GetRemoveBorder();
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::SetShiftingMode(EShiftingMode eMode)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetShiftingMode(eMode);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

EShiftingMode CAlgOevOCR::GetShiftingMode()
{
	EShiftingMode eReturn = EShiftingMode_reserved0;

	try
	{
		eReturn = m_pOCR->GetShiftingMode();
	}
	catch(const EException&)
	{
	}

	return eReturn;
}

bool CAlgOevOCR::SetShiftXTolerance(UINT32 unShiftX)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetShiftXTolerance(unShiftX);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

UINT32 CAlgOevOCR::GetShiftXTolerance()
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pOCR->GetShiftXTolerance();
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

bool CAlgOevOCR::SetShiftYTolerance(UINT32 unShiftY)
{
	bool bReturn = false;

	try
	{
		m_pOCR->SetShiftYTolerance(unShiftY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

UINT32 CAlgOevOCR::GetShiftYTolerance()
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pOCR->GetShiftYTolerance();
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

bool CAlgOevOCR::AddPatternFromImage(long nOrgX, long nOrgY, long nWidth, long nHeight, TCHAR szCode, EOCRClass eClass)
{
	bool bReturn = false;

	try
	{
		if(eClass == EOCRClass_reserved)
			m_pOCR->AddPatternFromImage(m_pROI, nOrgX, nOrgY, nWidth, nHeight, szCode);
		else
			m_pOCR->AddPatternFromImage(m_pROI, nOrgX, nOrgY, nWidth, nHeight, szCode, eClass);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::AddChar(long nStartX, long nStartY, long nEndX, long nEndY)
{
	bool bReturn = false;

	try
	{
		m_pOCR->AddChar(nStartX, nStartY, nEndX, nEndY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::EmptyChars()
{
	bool bReturn = false;

	try
	{
		m_pOCR->EmptyChars();

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

float CAlgOevOCR::GetConfidenceRatio(long nIndex)
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pOCR->GetConfidenceRatio(nIndex);
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

TCHAR CAlgOevOCR::GetFirstCharCode(long nIndex)
{
	TCHAR szCode = 0;

	try
	{
		szCode = m_pOCR->GetFirstCharCode(nIndex);
	}
	catch(const EException&)
	{
	}

	return szCode;
}

TCHAR CAlgOevOCR::GetSecondCharCode(long nIndex)
{
	TCHAR szReturn = 0;

	try
	{
		szReturn = m_pOCR->GetSecondCharCode(nIndex);
	}
	catch(const EException&)
	{
	}

	return szReturn;
}

float CAlgOevOCR::GetFirstCharDistance(long nIndex)
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pOCR->GetFirstCharDistance(nIndex);
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

float CAlgOevOCR::GetSecondCharDistance(long nIndex)
{
	float fReturn = 0.0f;

	try
	{
		fReturn = m_pOCR->GetSecondCharDistance(nIndex);
	}
	catch(const EException&)
	{
	}

	return fReturn;
}

UINT32 CAlgOevOCR::GetPatternHeight()
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pOCR->GetPatternHeight();
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

UINT32 CAlgOevOCR::GetPatternWidth()
{
	UINT32 unReturn = 0;

	try
	{
		unReturn = m_pOCR->GetPatternWidth();
	}
	catch(const EException&)
	{
	}

	return unReturn;
}

bool CAlgOevOCR::NewFont(UINT32 nWidth, UINT32 nHeight)
{
	bool bReturn = false;

	try
	{
		m_pOCR->NewFont(nWidth, nHeight);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

bool CAlgOevOCR::MatchChar(EOCRClass eClass, long nIndex, long nShiftX, long nShiftY)
{
	bool bReturn = false;

	try
	{
		m_pOCR->MatchChar(m_pROI, eClass, nIndex, nShiftX, nShiftY);

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

LPCTSTR CAlgOevOCR::ReadText(long nMaximunChars, std::vector<UINT32>* pVctClasses /* = nullptr */, bool bAutoSegmentation /* = true */)
{
	LPCTSTR lpszReturn = nullptr;
	
	try
	{
		std::string strTemp;

		if(!pVctClasses)
			strTemp = m_pOCR->ReadText(m_pROI, nMaximunChars, EOCRClass_AllClasses, bAutoSegmentation);
		else
			strTemp = m_pOCR->ReadText(m_pROI, nMaximunChars, *pVctClasses, bAutoSegmentation);

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

bool CAlgOevOCR::ReadText(CString* lpszRead, long nMaximunChars /* = LONG_MAX */, std::vector<UINT32>* pVctClasses /* = nullptr */, bool bAutoSegmentation /* = true */)
{
	bool bReturn = false;

	if(!lpszRead)
		return bReturn;

	try
	{
		std::string strTemp;

		if(!pVctClasses)
			strTemp = m_pOCR->ReadText(m_pROI, nMaximunChars, EOCRClass_AllClasses, bAutoSegmentation);
		else
			strTemp = m_pOCR->ReadText(m_pROI, nMaximunChars, *pVctClasses, bAutoSegmentation);

		USES_CONVERSION;

		lpszRead->Format(_T("%s"), A2T(strTemp.c_str()));

		bReturn = true;
	}
	catch(const EException&)
	{
	}

	return bReturn;
}

POINT CAlgOevOCR::GetOrgCoord(long nIndex)
{
	POINT ptReturn = {0, };

	try
	{
		ptReturn.x = m_pOCR->CharGetOrgX(nIndex);
		ptReturn.y = m_pOCR->CharGetOrgY(nIndex);
	}
	catch(const EException&)
	{
	}

	return ptReturn;
}

