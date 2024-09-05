#pragma once


#include "AlgOevBase.h"
#include <vector>

namespace Euresys { namespace Open_eVision_1_2 { class EOCR; } }
namespace Euresys { namespace Open_eVision_1_2 { class EROIBW8; } }
namespace Euresys { namespace Open_eVision_1_2 { class EImageBW8; } }

class CAlgOevOCR : public CAlgOevBase
{
public:

	CAlgOevOCR(void);
	virtual ~CAlgOevOCR(void);


	EOCR* GetOCRInstance() { return m_pOCR; }

	//////////////////////////////////////////////////////////////////////////
	// Load / Save

	bool Load(LPCTSTR lpszFilename);
	bool Save(LPCTSTR lpszFilename);

	//////////////////////////////////////////////////////////////////////////

	bool SetSegmentationMode(ESegmentationMode eSegmentationMode);
	ESegmentationMode GetSegmentationMode();

	bool SetThreshold(long nThreshold);
	long GetThreshold();

	bool SetTextColor(EOCRColor eTextColor);
	EOCRColor GetTextColor();

	bool SetMinCharWidth(long nMinCharWidth);
	long GetMinCharWidth();

	bool SetMaxCharWidth(long nMaxCharWidth);
	long GetMaxCharWidth();

	bool SetMinCharHeight(long nMinCharHeight);
	long GetMinCharHeight();

	bool SetMaxCharHeight(long nMaxCharHeight);
	long GetMaxCharHeight();

	bool SetCharSpacing(long nCharSpacing);
	long GetCharSpacing();

	bool SetNoiseArea(long nNoiseArea);
	long GetNoiseArea();

	bool SetCompareAspectRatio(bool bCompare);
	bool GetCompareAspectRatio();

	bool SetCutLargeChars(bool bCut);
	bool GetCutLargeChars();

	bool SetRelativeSpacing(float fRelativeSpacing = 0.0f);
	float GetRelativeSpacing();

	bool SetRelativeThreshold(float fRelativeThreshold);
	float GetRelativeThreshold();

	bool SetRemoveNarrowOrFlat(bool bRemove = true);
	bool GetRemoveNarrowOrFlat();

	bool SetRemoveBorder(bool bRemove = true);
	bool GetRemoveBorder();

	//////////////////////////////////////////////////////////////////////////

	bool SetMatchingMode(EMatchingMode eMode = EMatchingMode_Rms);
	EMatchingMode GetMatchingMode();

	bool SetPatternClass(long nIndex, EOCRClass eClass);
	UINT32 GetPatternClass(long nIndex);

	bool SetPatternCode(long nIndex, TCHAR szCode);
	TCHAR GetPatternCode(long nIndex);

	bool SetShiftingMode(EShiftingMode eMode);
	EShiftingMode GetShiftingMode();

	bool SetShiftXTolerance(UINT32 unShiftX = 0);
	UINT32 GetShiftXTolerance();

	bool SetShiftYTolerance(UINT32 unShiftY = 0);
	UINT32 GetShiftYTolerance();

	//////////////////////////////////////////////////////////////////////////

	bool SetImageInfo(CImageInfo* pImageInfo, RECT* pRegion = nullptr);
	bool SetROI(RECT* pRegion = nullptr);

	bool AddPatternFromImage(long nOrgX, long nOrgY, long nWidth, long nHeight, TCHAR szCode, EOCRClass eClass = EOCRClass_reserved);

	bool BuildObjects();
	bool FindAllChars();

	bool AddChar(long nStartX, long nStartY, long nEndX, long nEndY);
	bool EmptyChars();

	bool MatchChar(EOCRClass eClass, long nIndex, long nShiftX, long nShiftY);
	
	bool LearnPattern(long nIndex, TCHAR szCode, EOCRClass eOCRClass = EOCRClass_reserved, bool bAutoSegnation = true);
	bool LearnPatterns(LPCTSTR lpszCode, std::vector<UINT32>* pVctClasses = nullptr, bool bAutoSegnation = true);

	bool NewFont(UINT32 nWidth = 0, UINT32 nHeight = 0);

	//////////////////////////////////////////////////////////////////////////
	// Results
	
	long GetNumChars();

	std::vector<RECT> GetObjectRect();	


	long GetNumPatterns();

	UINT32 GetPatternHeight();

	UINT32 GetPatternWidth();

	LPCTSTR Recognize(CImageInfo* pImgInfo, RECT* pRegion, long nMaximunChars, EOCRClass eClass);
	bool Recognize(CString* lpszRead, CImageInfo* pImgInfo, RECT* pRegion = nullptr, long nMaximunChars = LONG_MAX, EOCRClass eClass = EOCRClass_AllClasses);

	LPCTSTR ReadText(long nMaximunChars, std::vector<UINT32>* pVctClasses = nullptr, bool bAutoSegmentation = true);
	bool ReadText(CString* lpszRead, long nMaximunChars = LONG_MAX, std::vector<UINT32>* pVctClasses = nullptr, bool bAutoSegmentation = true);

	float GetConfidenceRatio(long nIndex);

	TCHAR GetFirstCharCode(long nIndex);

	TCHAR GetSecondCharCode(long nIndex);

	float GetFirstCharDistance(long nIndex);

	float GetSecondCharDistance(long nIndex);

	POINT GetOrgCoord(long nIndex);

	// End of results
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:
	EOCR* m_pOCR;
	EROIBW8* m_pROI;
	EImageBW8* m_pEImage;
	DPOINT m_dptOffset;
};


