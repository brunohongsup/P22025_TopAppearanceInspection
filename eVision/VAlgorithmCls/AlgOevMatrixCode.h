#pragma once


#include "AlgOevBase.h"
#include <vector>

namespace Euresys { namespace Open_eVision_1_2 { class EMatrixCodeReader; } }
namespace Euresys { namespace Open_eVision_1_2 { class EMatrixCode; } }

class CAlgOevMatrixCode : public CAlgOevBase
{
public:

	CAlgOevMatrixCode(void);
	virtual ~CAlgOevMatrixCode(void);


	EMatrixCodeReader* GetMatrixCodeReaderInstance() { return m_pMatrixCodeReader; }

	//////////////////////////////////////////////////////////////////////////
	// Load / Save
	bool Load(LPCTSTR lpszFilename, bool bLearn = true);
	bool Save(LPCTSTR lpszFilename, bool bLearn = true);

	//////////////////////////////////////////////////////////////////////////

	long GetContrastCount();
	EMatrixCodeContrastMode GetContrast(long nIndex);
	bool AddContrast(EMatrixCodeContrastMode eMode);
	bool RemoveContrast(EMatrixCodeContrastMode eMode);
	bool ClearContrast();

	long GetFamilyCount();
	EFamily GetFamily(long nIndex);
	bool AddFamily(EFamily eFamily);
	bool RemoveFamily(EFamily eFamily);
	bool ClearFamily();

	long GetFlippingCount();
	EFlipping GetFlipping(long nIndex);
	bool AddFlipping(EFlipping eFlip);
	bool RemoveFlipping(EFlipping eFlip);
	bool ClearFlipping();

	long GetLogicalSizeCount();
	ELogicalSize GetLogicalSize(long nIndex);
	bool AddLogicalSize(ELogicalSize eSize);
	bool RemoveLogicalSize(ELogicalSize eSize);
	bool ClearLogicalSize();

	//////////////////////////////////////////////////////////////////////////
	
	bool SetComputeGrading(bool bEnable = false);
	bool GetComputeGrading();

	bool SetLearnMaskElement(ELearnParam eIndex, bool bEnable = true);
	bool GetLearnMaskElement(ELearnParam eIndex);

	bool SetMaxHeightWidthRatio(float fRatio = 3.8f);
	float GetMaxHeightWidthRatio();

	bool SetNominalPrintGrowth(float fPrintGrowth = 1.0f);
	float GetNominalPrintGrowth();

	bool SetMinimumPrintGrowth(float fPrintGrowth = 0.0f);
	float GetMinimumPrintGrowth();

	bool SetMaximumPrintGrowth(float fPrintGrowth = 2.0f);
	float GetMaximumPrintGrowth();

	bool SetTimeOut(UINT32 unTimeOutMs);
	UINT32 GetTimeOut();

	bool Learn(CImageInfo* pImageInfo, RECT* pRegion = nullptr);

	bool LearnMore(CImageInfo* pImageInfo, RECT* pRegion = nullptr);

	bool Read(CImageInfo* pImageInfo, RECT* pRegion = nullptr);

	bool Reset();
	
	//////////////////////////////////////////////////////////////////////////
	// Results

	bool SetCorner(long nIndex, DPOINT dptCorner);
	DPOINT GetCorner(long nIndex);

	DQUADRANGLE GetDquadrangle();

	float GetAngle();

	float GetAxialNonUniformity();

	long GetAxialNonUniformityGrade();

	DPOINT GetCenter();

	float GetContrast();

	long GetContrastGrade();

	EMatrixCodeContrastMode GetContrastType();
	
	BYTE GetDecodedDataElement(long nIndex);

	LPCTSTR GetDecodedString();
	bool GetDecodedString(CString* lpszRead);

	EFamily GetFamily();

	EFlipping GetFlipping();

	bool GetFound();

	long GetLocationThreshold();

	ELogicalSize GetLogicalSize();

	long GetLogicalSizeHeight();

	long GetLogicalSizeWidth();

	float GetMeasuredPrintGrowth();

	long GetNumErrors();

	long GetOverallGrade();

	float GetPrintGrowth();

	long GetPrintGrowthGrade();

	long GetReadingThreshold();

	float GetUnusedErrorCorrection();

	long GetUnusedErrorCorrectionGrade();

	float GetDataMatrixCellHeight();

	float GetDataMatrixCellWidth();	
	
	// End of results
	//////////////////////////////////////////////////////////////////////////

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

protected:
	EMatrixCodeReader* m_pMatrixCodeReader;
	EMatrixCode* m_pMatrixCode;
	DPOINT m_dptOffset;
};


