#include "stdafx.h"
#include "RavidAssistDskim.h"

CRavidAssistDskim::CRavidAssistDskim()
{
}


CRavidAssistDskim::~CRavidAssistDskim()
{
}

bool CRavidAssistDskim::OpenLastModel()
{
	bool bReturn = false;
	do
	{
		CUtilCommFuncFile cff;

		CString strFilePath = CModelManager::GetModelRootPath();
		strFilePath.Format(_T("%s\\LastModel.ini"), strFilePath);

		int nModelNumber = 0;

		if(!cff.IsFileExist((LPCTSTR)strFilePath))
		{
			CLogManager::Write(0, _T("[Error] Failed to find Last Model File"));
			SaveLastModel();
			nModelNumber = 1;
		}

		CString strApp;
		CString strKey;

		TCHAR	lpszBuf[256];

		strApp = _T("LAST MODEL");
		strKey = _T("Model Number");

		ZeroMemory(lpszBuf, sizeof(lpszBuf));
		if(!cff.ReadInIString(strApp, strKey, strFilePath, lpszBuf, sizeof(lpszBuf)))
			break;

		cff.INI_GetInfoOfString(lpszBuf, &nModelNumber);

		strKey = _T("Model Name");

		ZeroMemory(lpszBuf, sizeof(lpszBuf));
		if(!cff.ReadInIString(strApp, strKey, strFilePath, lpszBuf, sizeof(lpszBuf)))
			break;

		CString strMsg;
		strMsg.Format(_T("[Last Model] %d - %s"), nModelNumber, lpszBuf);
		CLogManager::Write(0, strMsg);


		if(!CModelManager::OpenModelInfo(nModelNumber))
			break;


		bReturn = true;
	}
	while(false);

	return bReturn;
}

CModelInfo* CRavidAssistDskim::GetOpenedModelInfo()
{
	CModelInfo* pReturn = nullptr;


	for(int i = 0; i < (int)CModelManager::GetModelInfoCount(); ++i)
	{
		CModelInfo* pModelInfo = CModelManager::GetModelInfo(i);
		if(pModelInfo)
		{
			if(pModelInfo->IsOpen())
			{
				pReturn = pModelInfo;
				goto gtLoopOut;
			}
		}
	}
gtLoopOut:

	return pReturn;
}

bool CRavidAssistDskim::SaveLastModel()
{
	bool bReturn = false;
	do
	{
		int nModelNo = 0;
		CString strModelName;
		CModelInfo* pModelInfo = GetOpenedModelInfo();
		if(!pModelInfo)
		{
			nModelNo = 1;
			strModelName.Format(_T("Default Model"));
		}
		else
		{
			nModelNo = pModelInfo->GetModelNumber();
			strModelName = pModelInfo->GetModelName();
		}

		CFileUtility fu;

		CString strFilePath = CModelManager::GetModelRootPath();
		strFilePath.Format(_T("%s\\LastModel.ini"), strFilePath);

		CUtilCommFuncFile cff;
		if(cff.IsFileExist((LPCTSTR)strFilePath))
			cff.FileDelete((LPCTSTR)strFilePath);

		CString strApp;
		CString strKey;
		CString strIni;

		strApp = _T("LAST MODEL");
		strKey = _T("Model Number");

		strIni.Format(_T("%d"), nModelNo);

		if(!cff.WriteInIString(strApp, strKey, strIni, strFilePath))
			break;

		strKey = _T("Model Name");
		strIni.Format(_T("%s"), strModelName);
		if(!cff.WriteInIString(strApp, strKey, strIni, strFilePath))
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CRavidAssistDskim::InitializeSheet(CRavidSheet* pRavidSheet, int nCol, int nRow, int nFixedCol, int nFixedRow, char** lpszHeaderTitle, double* dblCellWidth, bool bUsedInitialized /* = FALSE */, bool bEditable/* = FALSE */, bool bUsedHorScroll/* = FALSE */, bool bUsedVerScroll/* = TRUE */, bool bFixedColSelect/* = TRUE */, bool bFixedRowSelect/* = TRUE */)
{
	USES_CONVERSION;

	bool bReturn = false;

	do
	{
		pRavidSheet->UpdateData();

		//pRavidSheet->EnableDragAndDrop(TRUE);
		pRavidSheet->GetDefaultCell(FALSE, FALSE)->SetBackClr(RGB(0xFF, 0xFF, 0xFF));

		//고정 열, 행 ( 엑셀에서 행고정 열고정과 같이 항상 보이는 시트 )
		const int nFixedCols = nFixedCol;
		const int nFixedRows = nFixedRow;

		//전체 행 열.
		const int nCols = nCol;
		const int nRows = nRow + nFixedRows;

//		pRavidSheet->SetAutoSizeStyle();

		pRavidSheet->SetRowResize(FALSE);
		pRavidSheet->SetColumnResize(FALSE);
		pRavidSheet->SetEditable(bEditable);
		pRavidSheet->SetFixedColumnSelection(bFixedColSelect);
		pRavidSheet->SetFixedRowSelection(bFixedRowSelect);

		pRavidSheet->UsingScrollBars(SB_HORZ, bUsedHorScroll);
		pRavidSheet->UsingScrollBars(SB_VERT, bUsedVerScroll);

		pRavidSheet->SetRowCount(nRows);
		pRavidSheet->SetColumnCount(nCols);
		pRavidSheet->SetFixedRowCount(nFixedRows);
		pRavidSheet->SetFixedColumnCount(nFixedCols);

		RECT rc;
		pRavidSheet->GetClientRect(&rc);

		double dblVerScrollWidth = 10;
		double dblMaxWidth = 0;
		if(!bUsedInitialized)
			dblMaxWidth = rc.right;
		else
			dblMaxWidth = (rc.right - (rc.right / 10) - dblVerScrollWidth);

		double dblTotalWidth = 0;

		for(int i = 0; i < nCols; ++i)
			dblTotalWidth += dblCellWidth[i];

		double dblDefault = dblMaxWidth / dblTotalWidth;

		int nTemp = 0;

		for(int i = 0; i < nCols; ++i)
		{
			if(i == (nCols - 1))
			{
				int nTest = rc.right - nTemp;
				if(!bUsedInitialized)
					pRavidSheet->SetColumnWidth(i, nTest);
				else
					pRavidSheet->SetColumnWidth(i, (int)(dblDefault * dblCellWidth[i]));
			}
			else
			{
				nTemp += (int)(dblDefault * dblCellWidth[i]);
				pRavidSheet->SetColumnWidth(i, (int)(dblDefault * dblCellWidth[i]));
			}
		}

		// fill rows/cols with text
		for(int row = 0; row < pRavidSheet->GetRowCount(); row++)
		{
			for(int col = 0; col < pRavidSheet->GetColumnCount(); col++)
			{
				CString str;

				SRavidSheetCellInfo sCellInfo;

				sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
				sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
				sCellInfo.nRow = row;
				sCellInfo.nCol = col;

				COLORREF crBackGround = WHITE;
				COLORREF crFont = BLACK;

				if(row < nFixedRows)
				{
					str.Format(_T("%s"), A2T(LPCSTR(lpszHeaderTitle[col])));
					crBackGround = RGB(220, 220, 220);
				}
				else if(col < nFixedCols)
				{
					str.Format(_T("%d"), row);
					crBackGround = RGB(220, 220, 220);
				}
				else
					str.Empty();

				sCellInfo.strText = str;

				pRavidSheet->SetItem(&sCellInfo);

				pRavidSheet->SetItemBkColour(row, col, crBackGround);
				pRavidSheet->SetItemFgColour(row, col, crFont);

				pRavidSheet->SetItemFormat(row, col, sCellInfo.dwFormat);
			}
		}

		pRavidSheet->SetScrollPos32(SB_BOTH, 1);

		pRavidSheet->UpdateData(FALSE);

		pRavidSheet->Invalidate();

		bReturn = true;
	}
	while(false);

	return bReturn;
}

//////////////////////////////////////////////////////////////////////////
//Teaching Object Finder
bool CRavidAssistDskim::TeachObject(_In_ CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView, _In_opt_ CObjectFinder* pObjectFinder, _In_opt_ CString strTeachingName, _In_ int nHandlerNum /*= 0*/, _In_ int nLayerNum /*= 0*/)
{
	bool bReturn = false;

	do
	{
		CString strMsg;
		long nSelect = pTeachingObject->GetObjectID();
		bool bCurrentType = true;

		for(size_t i = 0; i < pTeachingObject->GetCount(); ++i)
		{
			m_eTeachShapeType = pTeachingObject->GetAt(i)->GetShapeType();
			m_eTeachTemplateType = pTeachingObject->GetAt(i)->GetTemplateType();
		}

		CRavidImageViewLayer* pLayerAdministrator = pView->GetLayer(nLayerNum);

		CModelInfo* pModelInfo = GetOpenedModelInfo();
		if(!pModelInfo)
			break;

		CRavidRect<double>* prrTeach = dynamic_cast<CRavidRect<double>*> (pTeachingObject->GetAt(0));
		if(!prrTeach)
			break;

		CUtilCommFuncFile cuff;

		CString strFullPath;
		CString strModelPath;
		strModelPath.AppendFormat(_T("%s\\%d.%s"), CModelManager::GetModelRootPath(), pModelInfo->GetModelNumber(), pModelInfo->GetModelName());


		Ravid::Algorithms::EAlgorithmResult eReturn = EAlgorithmResult_UnknownError;

		eReturn = pObjectFinder->Learn(pImgInfo, prrTeach);

		CRavidPoint<int> rp;
		rp.x = (int)prrTeach->left;
		rp.y = (int)prrTeach->top;

		if(eReturn == EAlgorithmResult_OK)
		{
			
			pLayerAdministrator->DrawShape(prrTeach, LIME);
			pLayerAdministrator->DrawText(&rp, _T("Teach OK"), LIME, ERavidImageViewLayerTransparencyColor, 20);
			bReturn = true;
		}
		else
		{
			pLayerAdministrator->DrawShape(prrTeach, LIGHTRED);
			pLayerAdministrator->DrawText(&rp, _T("Teach Fail"), LIGHTRED, ERavidImageViewLayerTransparencyColor, 20);
			break;
		}

		pView->Invalidate();

		strFullPath.AppendFormat(_T("%s\\Teach"), strModelPath);
		if(!cuff.IsFolderExist(strFullPath))
			cuff.MakeFolder(strFullPath);

		strFullPath.AppendFormat(_T("\\%s%d.rof"), strTeachingName, nHandlerNum);

		pObjectFinder->Save((std::wstring)strFullPath);
	}
	while(false);

	return bReturn;
}

bool CRavidAssistDskim::FindObject(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>& rrFindObject, _In_opt_ CRavidImageView* pView, _In_opt_ CObjectFinder* pObjectFinder, _In_ CString strModelTeachingArea /*= nullptr*/, _In_ int nLayerNum /*= 0*/, _In_ int nHandlerNum /*= 0*/, _In_ bool bFindAllArea /*= true*/)
{
	bool bReturn = false;
	do
	{
		CRavidImageViewLayer* pLayerOperator = pView->GetLayer(nLayerNum);
		if(!pLayerOperator)
			break;

		CModelInfo* pModelInfo = GetOpenedModelInfo();
		if(!pModelInfo)
			break;

		CString strMsg;
		CPerformanceCounter pFc;
		pFc.Start();

		bool bFindAlign = true;

		do
		{
			CUtilCommon util;

			int nSizeOffsetWidth = 100;
			int nSizeOffsetHeight = 100;

			CRavidRect<double> rrFindArea(10, 10, pImgInfo->GetSizeX() - 10, pImgInfo->GetSizeY() - 10);
			std::vector<CObjectFinder::SObjectFinderResult> vctResult;
			vctResult.clear();

			CRavidGeometry* pGeo = nullptr;
			//Teaching Area Search
			if(!bFindAllArea)
			{
				CRavidGeometry* pGeo;
				pGeo = util.ConvertStringToRavidGeometry(strModelTeachingArea);
				pGeo->Inflate(nSizeOffsetWidth, nSizeOffsetHeight, nSizeOffsetWidth, nSizeOffsetHeight);
				//CheckOvertheRange(pImgInfo, pGeo);
			}
			else
			{
				//Image Area Search
				CheckOvertheRange(pImgInfo, rrFindArea);
			}

			pLayerOperator->DrawShape(rrFindArea, GRAY);

			pObjectFinder->SetMaxInstance(1);
			pObjectFinder->SetMinimalDetectingScore((float)0.700);
			pObjectFinder->SetAngleBias(0.000);
			pObjectFinder->SetAngleTolerance(5.000);
			pObjectFinder->SetScaleBias(1.000);
			pObjectFinder->SetScaleTolerance(0.000);

			if(pObjectFinder->Find(pImgInfo, pGeo) != EAlgorithmResult_OK)
			{
				bFindAlign &= false;
				pLayerOperator->DrawShape(rrFindArea, LIGHTRED, 2);
				break;;
			}

			pObjectFinder->GetResults(vctResult);

			if(!vctResult.size())
			{
				bFindAlign &= false;
				pLayerOperator->DrawShape(rrFindArea, LIGHTRED, 2);
				break;
			}

			pLayerOperator->DrawShape(vctResult.at(0).rrResultRegion.GetCenter(), RED);
			pLayerOperator->DrawShape(vctResult.at(0).rrResultRegion, LIME, 2);

			rrFindObject = vctResult.at(0).rrResultRegion;

			//vctResult.at(0).rrResultRegion.GetCenter(m_rPAlign);
		}
		while(false);

		pView->Invalidate();

		if(bFindAlign)
			bReturn = true;

		strMsg.Format(_T("Find AlignMark Time : [%.3f]ms"), pFc.GetElapsedTime());
		CLogManager::Write(0, strMsg);
	}
	while(false);

	return bReturn;
}

bool CRavidAssistDskim::FindObject(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* prFindObject, CRavidImageView* pView, _In_opt_ CObjectFinder* pObjectFinder, _In_ CString strModelTeachingArea /*= nullptr*/, _In_ int nLayerNum /*= 0*/, _In_ int nHandlerNum /*= 0*/, _In_ bool bFindAllArea /*= true*/)
{
	bool bReturn = false;
	do
	{
		CRavidImageViewLayer* pLayerOperator = pView->GetLayer(nLayerNum);
		if(!pLayerOperator)
			break;

		CModelInfo* pModelInfo = GetOpenedModelInfo();
		if(!pModelInfo)
			break;

		CString strMsg;
		CPerformanceCounter pFc;
		pFc.Start();

		bool bFindAlign = true;

		do
		{
			CUtil util;

			int nSizeOffsetWidth = 100;
			int nSizeOffsetHeight = 100;

			CRavidRect<double> rrFindArea(10, 10, pImgInfo->GetSizeX() - 10, pImgInfo->GetSizeY() - 10);
			std::vector<CObjectFinder::SObjectFinderResult> vctResult;
			vctResult.clear();

			//Teaching Area Search
			if(!bFindAllArea)
			{
				util.ConvertRectStringToRectStructure(strModelTeachingArea, &rrFindArea);
				rrFindArea.Inflate(nSizeOffsetWidth, nSizeOffsetHeight, nSizeOffsetWidth, nSizeOffsetHeight);
				CheckOvertheRange(pImgInfo, rrFindArea);
			}
			else
			{
				//Image Area Search
				CheckOvertheRange(pImgInfo, rrFindArea);
			}

			pLayerOperator->DrawShape(rrFindArea, GRAY);

			pObjectFinder->SetMaxInstance(1);
			pObjectFinder->SetMinimalDetectingScore((float)0.700);
			pObjectFinder->SetAngleBias(0.000);
			pObjectFinder->SetAngleTolerance(5.000);
			pObjectFinder->SetScaleBias(1.000);
			pObjectFinder->SetScaleTolerance(0.000);

			if(pObjectFinder->Find(pImgInfo, &rrFindArea) != EAlgorithmResult_OK)
			{
				bFindAlign &= false;
				pLayerOperator->DrawShape(rrFindArea, LIGHTRED, 2);
				break;;
			}

			pObjectFinder->GetResults(vctResult);

			if(!vctResult.size())
			{
				bFindAlign &= false;
				pLayerOperator->DrawShape(rrFindArea, LIGHTRED, 2);
				break;
			}

			pLayerOperator->DrawShape(vctResult.at(0).rrResultRegion.GetCenter(), RED);
			pLayerOperator->DrawShape(vctResult.at(0).rrResultRegion, LIME, 2);

			*prFindObject = vctResult.at(0).rrResultRegion;

			//vctResult.at(0).rrResultRegion.GetCenter(m_rPAlign);
		}
		while(false);

		pView->Invalidate();

		if(bFindAlign)
			bReturn = true;

		strMsg.Format(_T("Find Object Time : [%.3f]ms"), pFc.GetElapsedTime());
		CLogManager::Write(0, strMsg);
	}
	while(false);

	return bReturn;
}

void CRavidAssistDskim::CheckOvertheRange(CRavidImage* pImgInfo, CRavidRect<double>& rr)
{
	if(rr.left < 0)
		rr.left = 0;
	if(rr.top < 0)
		rr.top = 0;
	if(rr.right > pImgInfo->GetSizeX())
		rr.right = (double)pImgInfo->GetSizeX();
	if(rr.bottom > pImgInfo->GetSizeY())
		rr.bottom = (double)pImgInfo->GetSizeY();
}

void CRavidAssistDskim::CheckOvertheRange(CRavidImage* pImgInfo, CRavidRect<double>* pr)
{
	if(pr->left < 0)
		pr->left = 0;
	if(pr->top < 0)
		pr->top = 0;
	if(pr->right > pImgInfo->GetSizeX())
		pr->right = (double)pImgInfo->GetSizeX();
	if(pr->bottom > pImgInfo->GetSizeY())
		pr->bottom = (double)pImgInfo->GetSizeY();
}

bool CRavidAssistDskim::LoadTeachFileToFindObject(_In_ CObjectFinder* pObjectFinder, _In_ CString strTeachingName, _In_ int nTeachHandlerNo /*= 0*/)
{
	bool bReturn = false;

	do
	{
		bool bTeachLoad = false;

		CModelInfo* pModelInfo = GetOpenedModelInfo();
		if(!pModelInfo)
			return false;

		CModelManager* pModelManager;

		CString strModelPath;

		std::wstring str;

		strModelPath.Format(_T("%s\\%d.%s\\Teach"), pModelManager->GetModelRootPath(), pModelInfo->GetModelNumber(), pModelInfo->GetModelName());

		Ravid::Algorithms::EAlgorithmResult eReturn = EAlgorithmResult_UnknownError;

		CString strModel;

		strModel.Format(_T("%s\\%s%d.rof"), strModelPath, strTeachingName, nTeachHandlerNo);

		eReturn = pObjectFinder->Load((std::wstring)strModel);

		if(eReturn == EAlgorithmResult_OK)
			bTeachLoad = true;
		else
			bTeachLoad = false;;

		if(bTeachLoad)
			bReturn = true;
	}
	while(false);

	return bReturn;
}
//////////////////////////////////////////////////////////////////////////