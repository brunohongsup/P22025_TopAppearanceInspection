#pragma once

#include "UtilCommon.h"
#include "UtilCommFuncFile.h"
#include "Util.h"

using namespace Ravid;
using namespace Ravid::Algorithms;
using namespace Ravid::Framework;
using namespace Ravid::Miscellaneous;

class CRavidAssistDskim
{
public:
	CRavidAssistDskim();
	~CRavidAssistDskim();

public:
	bool OpenLastModel();
	bool SaveLastModel();

	CModelInfo* GetOpenedModelInfo();

	//////////////////////////////////////////////////////////////////////////
	//char* lpszHeaderTitle[] = { "Index", "Test1", "Test2", "Test3", "Test4", "Test5", "Test6" };
	//double dblCellWidth[] = { 5, 20, 12, 15, 10, 20, 14 };
	//와 같은 형식으로 사용한다.
	bool InitializeSheet(CRavidSheet* pRavidSheet, int nCol, int nRow, int nFixedCol, int nFixedRow, char** lpszHeaderTitle, double* dblCellWidth, bool bUsedInitialized = FALSE, bool bEditable = FALSE, bool bUsedHorScroll = FALSE, bool bUsedVerScroll = TRUE, bool bFixedColSelect = TRUE, bool bFixedRowSelect = TRUE);

	bool TeachObject(_In_ CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView, _In_opt_ CObjectFinder* pObjectFinder, _In_ CString strTeachingName, _In_ int nHandlerNum = 0, _In_ int nLayerNum = 0);

	bool FindObject(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* prFindObject, _In_opt_ CRavidImageView* pView, _In_ CObjectFinder* pObjectFinder, _In_ CString strModelTeachingArea = nullptr, _In_ int nHandlerNum = 0, _In_ int nLayerNum = 0, _In_ bool bFindAllArea = true);

	bool FindObject(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>& rrFindObject, _In_opt_ CRavidImageView* pView, _In_ CObjectFinder* pObjectFinder, _In_ CString strModelTeachingArea = nullptr, _In_ int nHandlerNum = 0, _In_ int nLayerNum = 0, _In_ bool bFindAllArea = true);

	void CheckOvertheRange(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>& rr);
	void CheckOvertheRange(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pr);

	bool LoadTeachFileToFindObject(_In_ CObjectFinder* pObjectFinder, _In_ CString strTeachingName, _In_ int nTeachHandlerNo = 0);

protected:
	ERavidGeometryShapeType m_eTeachShapeType;
	ERavidGeometryTemplateType m_eTeachTemplateType;
	CUtilCommon m_UtilCommon;

};

