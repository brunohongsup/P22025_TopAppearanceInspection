#include "stdafx.h"
#include "EHBase.h"
#include "FormViewRegister.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CEHBase::CEHBase()
{
	int nObjectID = GetObjectID();
}


CEHBase::~CEHBase()
{



}

void CEHBase::OnTeach(Algorithms::CRavidImage * pImgInfo, CTeachingObject * pTeachingObject, CRavidImageView * pView, int nChannel)
{
	

}

void CEHBase::OnAcquisition(Ravid::Algorithms::CRavidImage * pImgInfo, int nChannel, Ravid::Framework::CRavidImageView * pView, Ravid::Device::CDeviceBase * pDevice)
{

}

bool CEHBase::LoadSystemParameter()
{

	CUtilCommFuncFile commfuncfile;
	CString strApp, strKey, strIni, strIniFile;
	strIniFile.Format(_T("%s\\SystemParameter.ini"), CModelManager::GetModelRootPath());

	if(!commfuncfile.IsFileExist(strIniFile))
		return false;
	
	TCHAR lpszData[128];
	memset(lpszData, 0x00, sizeof(lpszData));

	strApp.Format(_T("ID"));

	strKey.Format(_T("%d"), 0);
	commfuncfile.ReadInIString(strApp, strKey, strIniFile, lpszData, sizeof(lpszData));

	CString strValue = (CString)lpszData;


	bool bCheck = true;



	return bCheck;
}

bool CEHBase::CaptureCurrentScreen(LPCTSTR lpszFilePath)
{
	if(!lpszFilePath)
		return false;

	if(!_tcslen(lpszFilePath))
		return false;

	CDC memDC;
	CBitmap bitmap;

	int cx, cy;

	cx = GetSystemMetrics(SM_CXSCREEN);
	cy = GetSystemMetrics(SM_CYSCREEN);

	CClientDC screenDC(CWnd::GetDesktopWindow());

	int nDisplayBitPerPixel = ::GetDeviceCaps(screenDC, BITSPIXEL);
	int nDisplayBytePerPixel = nDisplayBitPerPixel / 8;

	int nCalcBitmapX = ((cx + 3) / sizeof(ULONG)) * sizeof(ULONG);

	int nOrigBitmapSize = cx * cy * nDisplayBytePerPixel;
	int nCalcBitmapSize = nCalcBitmapX * cy * 3;

	memDC.CreateCompatibleDC(&screenDC);
	bitmap.CreateCompatibleBitmap(&screenDC, cx, cy);
	CBitmap* pOldBitmap = memDC.SelectObject(&bitmap);
	memDC.BitBlt(0, 0, cx, cy, &screenDC, 0, 0, SRCCOPY);

	Framework::CMultipleVariable rmv;

	rmv.AddValue(0);
	rmv.AddValue(0);
	rmv.AddValue(0);

	CRavidImage ri;
	ri.CreateImageBuffer(nCalcBitmapX, cy, 255, CRavidImage::EValueFormat_3C_U8, 0, 8);
// 	CImageInfo imgInfo;
// 	imgInfo.CreateImageBuffer(nCalcBitmapX, cy, 24, 255, true, false);

	BYTE* pScreenBuffer = new BYTE[nOrigBitmapSize];
	BYTE* pCalcBufferManForCopy = ri.GetBuffer();/*imgInfo.GetBuffer();*/

	bitmap.GetBitmapBits(nOrigBitmapSize, pScreenBuffer);

	for(int y = 0; y < cy; ++y)
	{
		for(int x = 0; x < nCalcBitmapX; ++x)
		{
			if(x < cx)
			{
				*(pCalcBufferManForCopy++) = *(pScreenBuffer + ((cx * y) + x) * nDisplayBytePerPixel);
				*(pCalcBufferManForCopy++) = *(pScreenBuffer + ((cx * y) + x) * nDisplayBytePerPixel + 1);
				*(pCalcBufferManForCopy++) = *(pScreenBuffer + ((cx * y) + x) * nDisplayBytePerPixel + 2);
			}
			else
			{
				for(int i = 0; i < 3; ++i)
					*(pCalcBufferManForCopy++) = 0xff;
			}
		}
	}

	memDC.SelectObject(pOldBitmap);
	bitmap.DeleteObject();
	memDC.DeleteDC();

	ri.Save(lpszFilePath);

// 	CAlgCvImage cvImage;
// 	cvImage.SaveImage(&imgInfo, lpszFilePath);

//////////////////////////////////////////////////////////////////////////버퍼 삭제 
	if(pScreenBuffer)
	{
		delete pScreenBuffer;
		pScreenBuffer = nullptr;
	}
//////////////////////////////////////////////////////////////////////////
	return true;
}

bool CEHBase::ParsingStringToDouble(CString str, int nIndex, double & dblResult)
{
	bool bReturn = false;

	do
	{
		CString strTemp;
		AfxExtractSubString(strTemp, str, nIndex, ',');

		double dblTemp = _tcstod(strTemp, NULL);

		if(!strTemp.Compare(_T("")))
			break;

		dblResult = _tcstod(strTemp, NULL);

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::ParsingStringToVector(CString str, std::vector<double>& vctResult)
{
	bool bReturn = false;

	do
	{
		vctResult.clear();

		for(int i = 0; i < str.GetLength(); ++i)
		{
			CString strTemp;
			AfxExtractSubString(strTemp, str, i, ',');

			double dblTemp = _tcstod(strTemp, NULL);

			if(!strTemp.Compare(_T("")))
				break;

			vctResult.push_back(dblTemp);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::ParsingStringToVector(CString str, std::vector<std::vector<long long>>& vctResult)
{
	bool bReturn = false;

	do
	{
		vctResult.clear();

		if(str.IsEmpty())
			break;

		str.Replace(_T(" "), _T(""));

		while(true)
		{
			if(str.IsEmpty())
				break;

			std::vector<long long> vctGroup;

			if(str.GetAt(0) == _T('('))
			{
				CString strGroup;
				AfxExtractSubString(strGroup, str, 0, _T(')'));

				if(!strGroup.IsEmpty())
				{
					str = str.Right(str.GetLength() - strGroup.GetLength() - 1);

					if(strGroup.GetAt(0) == _T('('))
						strGroup.Delete(0, 1);

					while(true)
					{
						if(strGroup.IsEmpty())
							break;

						CString strValue;
						AfxExtractSubString(strValue, strGroup, 0, _T(','));

						strGroup = strGroup.Right(strGroup.GetLength() - strValue.GetLength() - 1);

						if(!strValue.IsEmpty())
							vctGroup.push_back(_tcstoll(strValue, nullptr, 10));
					}
				}
			}
			else
			{
				CString strValue;
				AfxExtractSubString(strValue, str, 0, _T(','));

				str = str.Right(str.GetLength() - strValue.GetLength() - 1);

				if(!strValue.IsEmpty())
					vctGroup.push_back(_tcstoll(strValue, nullptr, 10));
			}

			if(vctGroup.size())
				vctResult.push_back(vctGroup);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::ParsingStringToVector(CString str, std::vector<long long>& vctResult)
{
	bool bReturn = false;

	do
	{
		vctResult.clear();

		for(int i = 0; i < str.GetLength(); ++i)
		{
			CString strTemp;
			AfxExtractSubString(strTemp, str, i, ',');

			long long nlTemp = _tcstoll(strTemp, NULL, 10);

			if(!strTemp.Compare(_T("")))
				break;

			vctResult.push_back(nlTemp);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::ParsingStringToVector(CString str, std::vector<std::vector<double>>& vctResult)
{
	bool bReturn = false;

	do
	{
		vctResult.clear();

		if(str.IsEmpty())
			break;

		str.Replace(_T(" "), _T(""));

		while(true)
		{
			if(str.IsEmpty())
				break;

			std::vector<double> vctGroup;

			if(str.GetAt(0) == _T('('))
			{
				CString strGroup;
				AfxExtractSubString(strGroup, str, 0, _T(')'));

				if(!strGroup.IsEmpty())
				{
					str = str.Right(str.GetLength() - strGroup.GetLength() - 1);

					if(strGroup.GetAt(0) == _T('('))
						strGroup.Delete(0, 1);

					while(true)
					{
						if(strGroup.IsEmpty())
							break;

						CString strValue;
						AfxExtractSubString(strValue, strGroup, 0, _T(','));

						strGroup = strGroup.Right(strGroup.GetLength() - strValue.GetLength() - 1);

						if(!strValue.IsEmpty())
							vctGroup.push_back(_tcstod(strValue, nullptr));
					}
				}
			}
			else
			{
				CString strValue;
				AfxExtractSubString(strValue, str, 0, _T(','));

				str = str.Right(str.GetLength() - strValue.GetLength() - 1);

				if(!strValue.IsEmpty())
					vctGroup.push_back(_tcstod(strValue, nullptr));
			}

			if(vctGroup.size())
				vctResult.push_back(vctGroup);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::ParsingStringToVector(CString str, std::vector<CString>& vctResult)
{
	bool bReturn = false;

	do
	{
		vctResult.clear();

		for(int i = 0; i < str.GetLength(); ++i)
		{
			CString strTemp;
			AfxExtractSubString(strTemp, str, i, ',');


			if(!strTemp.Compare(_T("")))
				break;

			vctResult.push_back(strTemp);
		}

		bReturn = true;
	}
	while(false);

	return bReturn;
}

void CEHBase::SetModelInfo()
{
	m_vctModelInfo.clear();

	size_t nCount = CModelManager::GetModelInfoCount();

	for(int i = 0; i < nCount; i++)
	{
		CModelInfo* pModelInfo = CModelManager::GetModelInfo(i);

		if(!pModelInfo)
			return;

		CString str = pModelInfo->GetModelName();
		long lNum = pModelInfo->GetModelNumber();

		CDefinition::sModel sInfo;

		sInfo.lpName = str;
		sInfo.lNum = lNum;

		m_vctModelInfo.push_back(sInfo);
	}
}

CModelInfo * CEHBase::GetModel()
{
	CModelInfo* pModelInfo = nullptr;
	do 
	{
		pModelInfo = m_Assist.GetOpenedModelInfo();

		if(!pModelInfo)
			pModelInfo = CModelManager::FindModelInfo(1);
		
	} while (false);

	return pModelInfo;
}

bool CEHBase::GetModelParam(CDefinition::SdefaultModelParam& sParam)
{
	bool bReturn = false;

	do
	{

		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		if(!pModelInfo->GetData(&sParam, sizeof(sParam)))
			break;


		bReturn = true;

	}
	while(false);

	return bReturn;
}

bool CEHBase::SetModelParamSave(CDefinition::SdefaultModelParam sParam)
{
	
	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;


		if(!pModelInfo->SaveData(&sParam, sizeof(sParam)))
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

CString CEHBase::GetSavePath()
{
	CString strReturn = _T("");

	do
	{

		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		CString strBasePath = (CString)DataDir;/*_T("D:\\Record\\Files");*/

		//CString strBasePath = _T("D:\\Record\\Files");

		CString strFilePath = _T("");

// 		strFilePath = modelParam.strSavePath;
// 
// 		if(modelParam.strSavePath == _T(""))
		strFilePath.AppendFormat(_T("%s"), strBasePath);


		std::vector<CString> vctFolders;
		int nFolderNameStartPos = strFilePath.Find(_T("\\"));
		int nFolderNameEndPos = 0;

		CString strSaveDisk = strFilePath.Left(nFolderNameStartPos);

		while(true)
		{
			CString strFindFolder = strFilePath.Right((strFilePath.GetLength() - nFolderNameStartPos) - 1);

			nFolderNameEndPos = strFindFolder.Find(_T("\\"));

			bool bEnd = false;
			if(nFolderNameEndPos == -1)
			{
				nFolderNameEndPos = strFindFolder.GetLength();
				bEnd = true;
			}

			CString strFolderName;
			strFolderName = strFilePath.Mid(nFolderNameStartPos + 1, nFolderNameEndPos);

			if(strFolderName != _T(""))
			{
				vctFolders.push_back(strFolderName);
			}

			nFolderNameStartPos += (nFolderNameEndPos + 1);


			if(bEnd)
				break;

		}

		strFilePath = strSaveDisk;
		strFilePath.AppendFormat(_T("\\"));

		CUtilCommFuncFile commfuncfile;
		bool bCheckFolder = true;
		for(CString strFolder : vctFolders)
		{
			strFilePath.AppendFormat(strFolder);

			if(!commfuncfile.IsFolderExist(strFilePath))
			{
				if(!commfuncfile.MakeFolder(strFilePath))
					bCheckFolder &= false;
			}
			strFilePath.AppendFormat(_T("\\"));
		}

		if(!bCheckFolder)
		{
			strFilePath.AppendFormat(_T("%s"), strBasePath);

			if(!commfuncfile.IsFolderExist(strFilePath))
				commfuncfile.MakeFolder(strFilePath);
		}


		CTime tm = GetSignalTime();

		strFilePath.AppendFormat(_T("%04d"), tm.GetYear());
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		strFilePath.AppendFormat(_T("\\%02d"), tm.GetMonth());
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		strFilePath.AppendFormat(_T("\\%02d"), tm.GetDay());
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		strReturn = strFilePath;

	}
	while(false);

	return strReturn;

}


bool CEHBase::SaveCSVDataFile(int nIndex, const std::vector<SMeasuredData>& vct)
{
	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;


		CUtilCommFuncFile commfuncfile;


		CString strFilePath = _T("");

		strFilePath = GetSavePath();

		if(strFilePath.IsEmpty())
			break;


		strFilePath.AppendFormat(_T("\\Data"));
		if(commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		int nPos = 0;

		while(1)
		{
			nPos = strFilePath.Find(_T("\\"), nPos);

			if(nPos < 0)
			{
				CreateDirectory(strFilePath, 0);
				break;
			}

			CreateDirectory(strFilePath.Left(nPos), 0);
			++nPos;
		}

	
		strFilePath.Format(_T("%s\\MeasuredData_%d.csv"), strFilePath, nIndex);

		//////////////////////////////////////////////////////////////////////////

		CString strResult[2];

		CString strTop;
		strTop = _T("Time");
		for(int i = 0; i < vct.size(); i++)
		{
			//strTop.AppendFormat(_T(",%s,Result"), vct[i].strName);
			strTop.AppendFormat(_T(",%s"), vct[i].strName);

		}
		strTop.AppendFormat(_T("\n"));

		if(!commfuncfile.IsFileExist(strFilePath))
		{
			errno_t err = _wfopen_s(&m_fp, strFilePath, _T("at"));
			if(!err)
			{
				if(m_fp)
				{
					fputws(strTop, m_fp);
					fclose(m_fp);
				}
			}

		}

		CString strTime = _T("");
		CTime tm = GetSignalTime();

		strTime.Format(_T("%02d_%02d_%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		CString strData;
		strData.Format(_T("%s,"), strTime);
		for(int i = 0; i < vct.size(); i++)
		{
			CString strResult = vct[i].bResult ? _T("OK") : _T("NG");
			//strData.AppendFormat(_T("%.3f,%s,"),vct[i].dblData, strResult);
			strData.AppendFormat(_T("%.3f,"), vct[i].dblData);

		}

		strData.AppendFormat(_T("\n"));

		errno_t err = _wfopen_s(&m_fp, strFilePath, _T("at"));

		if(!err)
		{
			if(m_fp)
			{
				fputws(strData, m_fp);
				fclose(m_fp);
			}
		}
	}
	while(false);

	return bReturn;
}

bool CEHBase::SaveSQLiteDataFile(int nIndex, const std::vector<SMeasuredData>& vct)
{
	bool bReturn = false;
	m_csLock.Lock();

	do 
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		CString strFilePath = _T("");

		strFilePath = _T("D:\\Record");

		strFilePath.AppendFormat(_T("\\Data"));

		if(Utils::IsPathExist(strFilePath, FALSE) == FALSE)
			Utils::CreateDir(strFilePath);

		strFilePath.Format(_T("%s\\MeasuredData_%d.db"), strFilePath, nIndex);


 		sqlite3* db = NULL;
 		sqlite3_stmt* res = NULL;
 
 		//1. DB Open
 		int rc = sqlite3_open((LPCSTR)CW2A(strFilePath), &db);

		if(rc != SQLITE_OK)
		{
			CString strErr = CA2W(sqlite3_errmsg(db));
			sqlite3_close(db);
			db = NULL;
			//tb.GetLogger()->AddLog(_T("[WriteAlarmLog] %s"), strErr);
			break;
		}

		CTime tm = GetSignalTime();

		//2. Make Table
		CStringA strTableName;
		strTableName.Format("HISTORY_%04d%02d%02d", tm.GetYear(), tm.GetMonth(), tm.GetDay());

		CStringA strCmd;
		strCmd.Format("CREATE TABLE IF NOT EXISTS %s(Time TEXT, ", strTableName);

		for(int i = 0; i < vct.size(); i++)
		{
			if(i)	strCmd.AppendFormat(", ");

			strCmd.AppendFormat("%s TEXT, %sResult TEXT", CStringA(vct[i].strName), CStringA(vct[i].strName));

		}
		strCmd.AppendFormat(");");

//		strCmd.Format("CREATE TABLE IF NOT EXISTS %s(Id TEXT, Code INT, AlarmType INT, Description TEXT, OccuredTime TEXT, ClearTime TEXT);"
//					  , strTableName);

		char *err_msg = 0;
		rc = sqlite3_exec(db, strCmd, 0, 0, &err_msg);

		if(rc != SQLITE_OK)
		{
			CString strErr = CA2W(err_msg);
			sqlite3_free(err_msg);
			//tb.GetLogger()->AddLog(_T("[WriteAlarmLog] %s"), strErr);

			sqlite3_finalize(res);
			sqlite3_close(db);
			break;
		}


		//3. Add Item
		CStringA strTime = "";	
		strTime.Format("%02d%02d%02d", tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		strCmd.Format("INSERT INTO %s VALUES(%s, ", strTableName, strTime);
		for(int i = 0; i < vct.size(); i++)
		{
			if(i)	strCmd.AppendFormat(", ");

			CStringA strData;
			strData.Format("\'%.3f\', \'%s\'",vct[i].dblData, vct[i].bResult ? "OK" : "NG");

			strCmd.AppendFormat("%s", strData);

		}
	
		strCmd.AppendFormat(");");


//		strCmd.Format("INSERT INTO %s VALUES(\'%s\',%s,%s,\'%s\',\'%s\',\'\');"
//					  , strTableName, strID, strCode, strAlarmType, strDesc, strOccuredTime);


		rc = sqlite3_exec(db, strCmd, 0, 0, &err_msg);

		if(rc != SQLITE_OK)
		{
			CString strErr = CA2W(err_msg);
			sqlite3_free(err_msg);
			//tb.GetLogger()->AddLog(_T("[WriteAlarmLog] %s"), strErr);

			sqlite3_finalize(res);
			sqlite3_close(db);
			break;
		}

		sqlite3_finalize(res);
		sqlite3_close(db);

		
	} while (false);


	m_csLock.Unlock();
	return bReturn;
}

bool CEHBase::SearchDataHistory(int nIndex, CTime tmSearchStart, CTime tmSearchEnd, std::vector<std::vector<SMeasuredData>>* pResult)
{
	m_csLock.Lock();

	bool bRet = false;
	//CToolBox& tb = CToolBox::GetInstance();
	try
	{
		pResult->clear();

		if(tmSearchEnd < tmSearchStart)
		{
			//tb.GetLogger()->AddLog(_T("[SearchAlarmHistory] 검색 종료일이 시작일보다 빠름"));
			throw 0;
		}

		CString strFilePath = _T("");

		strFilePath = _T("D:\\Record");

		strFilePath.AppendFormat(_T("\\Data"));

		strFilePath.Format(_T("%s\\MeasuredData_%d.db"), strFilePath, nIndex);

		CTimeSpan tsIncrease(1, 0, 0, 0);


		if(Utils::IsPathExist(strFilePath, FALSE) == FALSE)
			Utils::CreateDir(strFilePath);

		sqlite3* db = NULL;
		sqlite3_stmt* res = NULL;

		//1. DB Open
		int rc = sqlite3_open((LPCSTR)CW2A(strFilePath), &db);

		if(rc != SQLITE_OK)
		{
			CString strErr = CA2W(sqlite3_errmsg(db));
			sqlite3_close(db);
			db = NULL;
			//tb.GetLogger()->AddLog(_T("[SearchAlarmHistory] %s"), strErr);
			throw 0;
		}

		do
		{
			//2. Make Table
			CStringA strTableName;
			strTableName.Format("HISTORY_%04d%02d%02d", tmSearchStart.GetYear(), tmSearchStart.GetMonth(), tmSearchStart.GetDay());

			CStringA strCmd;
			strCmd.Format("SELECT * FROM %s", strTableName);

			char *err_msg = 0;
			rc = sqlite3_exec(db, 
							  strCmd,
							  [](void *pUser,
							  int argc,
							  char **argv,
							  char **azColName)->int
			{
				std::vector<std::vector<SMeasuredData>>* p = (std::vector<std::vector<SMeasuredData>>*)pUser;

				//컬럼 순서	
				//(Id TEXT, Code INT, AlarmType INT, Description TEXT, OccuredTime TEXT, ClearTime TEXT)
				//시간 포멧
				//"%04d/%02d/%02d %02d:%02d:%02d.%03d"

				std::vector<SMeasuredData> vctItem;
			
				try
				{
// 					item.uCode = (UINT)strtol(argv[1], NULL, 10);
// 					item.eType = (eAlarmType)strtol(argv[2], NULL, 10);
// 					item.strDescription = CA2W(argv[3], CP_UTF8);
// 					item.tmStamp = ConvertTime(argv[4]);
// 					item.tmClearTime = ConvertTime(argv[5]);
					bool bIsOKLine = true;

					for(int i = 1; i < argc;)
					{
						SMeasuredData s;
						CStringA str;
	
						s.strName = CString(CA2W(azColName[i], CP_UTF8));
		
						str = CA2W(argv[i++], CP_UTF8); 
						s.dblData = _wtof(CString(str));
						str = CA2W(argv[i++], CP_UTF8);
						s.bResult = str == "OK" ? true : false;

						bIsOKLine &= s.bResult;

						vctItem.push_back(s);
					}

					p->push_back(vctItem);

				}
				catch(...)
				{

				}

				return 0;
			}, pResult, &err_msg);


			if(rc != SQLITE_OK)
			{
				CString strErr = CA2W(err_msg);
				sqlite3_free(err_msg);
				//tb.GetLogger()->AddLog(_T("[SearchAlarmHistory] %s"), strErr);
			}


			tmSearchStart = tmSearchStart + tsIncrease;

			if(tmSearchStart > tmSearchEnd)
				break;

		}
		while(true);

		sqlite3_finalize(res);
		sqlite3_close(db);

		bRet = true;
	}
	catch(...)
	{
		bRet = false;
	}

	m_csLock.Unlock();

	return bRet;
}


bool CEHBase::SaveImage(SSaveImageInfo SInfo, CRavidImageView* pView)
{
	bool bReturn = false;
	int nObjectID = GetObjectID();


	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!GetModelParam(modelParam))
			break;

		if(!pView)
			break;

		CUtilCommFuncFile commfuncfile;


		CString strFilePath = _T("");

		strFilePath = GetSavePath();

		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		if(strFilePath.IsEmpty())
			break;

		strFilePath.AppendFormat(_T("\\Image"));
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		//////////////////////////////////////////////////////////////////////////
		//
		CString strViewName = SInfo.ECameraType == ECameraNum_Upper ? _T("Upper") : _T("Lower");
		strFilePath.AppendFormat(_T("\\%s"), strViewName);
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);

		strFilePath.AppendFormat(_T("\\%s"), SInfo.bResult ? _T("Pass") : _T("Fail"));
		if(!commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		CString strTime = _T("");
		CTime tm = GetSignalTime();

		strTime.Format(_T("%02d_%02d_%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		CString strImagePath = strFilePath;

		CString strImageName;

		strImageName.Format(_T("Time_%s"), strTime);


		CString strImageType = modelParam.nSaveImageType ? _T(".jpg") : _T(".bmp");
		CString strImageFile;
		strImageFile.Format(_T("%s\\%s%s"), strImagePath, strImageName, strImageType);

		/////////////////////////////////////////////////////////////////////////

		CString strImageFileSC;
		strImageFileSC.Format(_T("%s\\%s_SC.jpg"), strImagePath, strImageName);


		SInfo.pImgInfo->Save(strImageFile);

		CRavidImage ri;
		pView->CaptureScreen(&ri);

		ri.Save(strImageFileSC);
		bReturn = true;
	}
	while(false);

	return bReturn;
}


////////////////////////////////////////////////////////////////////////////
//
bool CEHBase::SaveIniDataFile(EIniDataType eType, CString strPath)
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		if(strPath.IsEmpty())
			break;

		CProfile pro(strPath);

		CString strSection;
		strSection.Format(_T("COMMON"));
		CString strKey;
		strKey.Format(_T("COUNT"));

		if(eType == IniDataType_MeasurementROI)
		{
			pro.SetInt(strSection, strKey, (int)m_vecROIData.size());
			for(int i = 0; i < m_vecROIData.size(); i++)
			{
				CString strVal;

				strSection.Format(_T("Line Parameter_%d"), i);

				SMeasurementROI ss = m_vecROIData[i];
				m_mapROIIndex[ss.strSerialNumber] = i + 1;

				pro.SetString(strSection, _T("Name"), ss.strName);
				pro.SetString(strSection, _T("SerialNumber"), ss.strSerialNumber);
				pro.SetInt(strSection, _T("RavidUse"), (int)ss.sLineParams.bRavidLineUse);
				pro.SetInt(strSection, _T("ColorType"), (int)ss.sLineParams.eColorType);

				pro.SetDouble(strSection, _T("roi_X0"), ss.sLineParams.rqdROI.rpPoints[0].x);
				pro.SetDouble(strSection, _T("roi_Y0"), ss.sLineParams.rqdROI.rpPoints[0].y);
				pro.SetDouble(strSection, _T("roi_X1"), ss.sLineParams.rqdROI.rpPoints[1].x);
				pro.SetDouble(strSection, _T("roi_Y1"), ss.sLineParams.rqdROI.rpPoints[1].y);
				pro.SetDouble(strSection, _T("roi_X2"), ss.sLineParams.rqdROI.rpPoints[2].x);
				pro.SetDouble(strSection, _T("roi_Y2"), ss.sLineParams.rqdROI.rpPoints[2].y);
				pro.SetDouble(strSection, _T("roi_X3"), ss.sLineParams.rqdROI.rpPoints[3].x);
				pro.SetDouble(strSection, _T("roi_Y3"), ss.sLineParams.rqdROI.rpPoints[3].y);

				pro.SetInt(strSection, _T("TransitionChoice"), (int)ss.sLineParams.eTransitionChoice);
				pro.SetInt(strSection, _T("TransitionType"), (int)ss.sLineParams.eTransitionType);
				pro.SetInt(strSection, _T("FindDir"), (int)ss.sLineParams.eFindDir);
				pro.SetInt(strSection, _T("Smoothing"), (int)ss.sLineParams.nSmoothing);
				pro.SetInt(strSection, _T("Threshold"), (int)ss.sLineParams.nThreshold);
				pro.SetInt(strSection, _T("Thicknes"), (int)ss.sLineParams.nThicknes);
				pro.SetInt(strSection, _T("MinimumAmplitude"), (int)ss.sLineParams.nMinimumAmplitude);
				pro.SetInt(strSection, _T("SamplingStep"), (int)ss.sLineParams.nSamplingStep);
				pro.SetInt(strSection, _T("NumOfPass"), (int)ss.sLineParams.nNumOfPass);
				pro.SetDouble(strSection, _T("OutLiersThreshold"), ss.sLineParams.dblOutLiersThreshold);

				pro.SetDouble(strSection, _T("AlignX"), ss.sLineParams.sAlignData.rpCenter.x);
				pro.SetDouble(strSection, _T("AlignY"), ss.sLineParams.sAlignData.rpCenter.y);
				pro.SetDouble(strSection, _T("AlignAngle"), ss.sLineParams.sAlignData.dblAngle);
				pro.SetInt(strSection, _T("AlignResult"), ss.sLineParams.sAlignData.bResult);


			}
		}
		else if(eType == IniDataType_MeasurementKind)
		{
			pro.SetInt(strSection, strKey, (int)m_vecMeasurementKindData.size());

			for(int i = 0; i < m_vecMeasurementKindData.size(); i++)
			{
				CString strVal;

				strSection.Format(_T("Measurement_%d"), i);

				SMeasurementKind ss = m_vecMeasurementKindData[i];
	
				pro.SetInt(strSection, _T("Use"), ss.bUse);

				pro.SetString(strSection, _T("Name"), ss.strName);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Align"), ss.bType[EMeasurementKindType_Align]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Size"), ss.bType[EMeasurementKindType_Size]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Position"), ss.bType[EMeasurementKindType_Position]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Area"), ss.bType[EMeasurementKindType_Area]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Seap"), ss.bType[EMeasurementKindType_Seap]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_Cell"), ss.bType[EMeasurementKindType_Cell]);
				pro.SetInt(strSection, _T("MeasurementTypeOption_PassLine"), ss.bType[EMeasurementKindType_PassLine]);
		
				pro.SetDouble(strSection, _T("Judgment Value Reference"), ss.dblReference);
				pro.SetDouble(strSection, _T("Judgment Value USL"), ss.dblUSL);
				pro.SetDouble(strSection, _T("Judgment Value LSL"), ss.dblLSL);
				pro.SetDouble(strSection, _T("Judgment Value Offest"), ss.dblOffset);
				pro.SetDouble(strSection, _T("Judgment Value Scale"), ss.dblScale);
	
				pro.SetString(strSection, _T("Standard ROI SerialNumber"), ss.sStandard.strSerialNumber);
				size_t nOpponentsSize = ss.vctOpponents.size();
				pro.SetInt(strSection, _T("Opponents ROI Count"), nOpponentsSize);

				for(int i = 0; i < nOpponentsSize; i++)
				{
					CString strKeys;
					strKeys.Format(_T("Opponents SerialNumber %d"), i);
					pro.SetString(strSection, strKeys, ss.vctOpponents[i].strSerialNumber);
				}
			}
		}

		if(!pro. Save())
			break;

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::LoadIniDataFile(EIniDataType eType, CString strPath)
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CProfile profile(strPath);

		if(!profile.Load())
			break;
	
		int nCount = profile.GetInt(_T("COMMON"), _T("COUNT"), 0);

		if(eType == IniDataType_MeasurementROI)
		{
			SetMesurementROIDataDeleteAll();

			for(int i = 0; i < nCount; i++)
			{
				SMeasurementROI ss;
				CString strSection;
				strSection.Format(_T("Line Parameter_%d"), i);

				ss.strName = profile.GetString(strSection, _T("Name"), 0);
				ss.strSerialNumber = profile.GetString(strSection, _T("SerialNumber"), 0);

				ss.sLineParams.bRavidLineUse = profile.GetInt(strSection, _T("RavidUse"), 0);
				ss.sLineParams.eColorType = (eColorImageCalType)profile.GetInt(strSection, _T("ColorType"), 0);

		
				ss.sLineParams.rqdROI.rpPoints[0].x = profile.GetDouble(strSection, _T("roi_X0"), 0);
				ss.sLineParams.rqdROI.rpPoints[0].y = profile.GetDouble(strSection, _T("roi_Y0"), 0);
				ss.sLineParams.rqdROI.rpPoints[1].x = profile.GetDouble(strSection, _T("roi_X1"), 0);
				ss.sLineParams.rqdROI.rpPoints[1].y = profile.GetDouble(strSection, _T("roi_Y1"), 0);
				ss.sLineParams.rqdROI.rpPoints[2].x = profile.GetDouble(strSection, _T("roi_X2"), 0);
				ss.sLineParams.rqdROI.rpPoints[2].y = profile.GetDouble(strSection, _T("roi_Y2"), 0);
				ss.sLineParams.rqdROI.rpPoints[3].x = profile.GetDouble(strSection, _T("roi_X3"), 0);
				ss.sLineParams.rqdROI.rpPoints[3].y = profile.GetDouble(strSection, _T("roi_Y3"), 0);

				ss.sLineParams.eTransitionChoice = (CLineGauge::ETransitionChoice)profile.GetInt(strSection, _T("TransitionChoice"), 0);
				ss.sLineParams.eTransitionType = (CLineGauge::ETransitionType)profile.GetInt(strSection, _T("TransitionType"), 0);
				ss.sLineParams.eFindDir = (eFindLineDir)profile.GetInt(strSection, _T("FindDir"), 0);

				ss.sLineParams.nSmoothing = profile.GetInt(strSection, _T("Smoothing"), 0);
				ss.sLineParams.nThreshold = profile.GetInt(strSection, _T("Threshold"), 0);
				ss.sLineParams.nThicknes = profile.GetInt(strSection, _T("Thicknes"), 0);
				ss.sLineParams.nMinimumAmplitude = profile.GetInt(strSection, _T("MinimumAmplitude"), 0);
				ss.sLineParams.nSamplingStep = profile.GetInt(strSection, _T("SamplingStep"), 0);
				ss.sLineParams.nNumOfPass = profile.GetInt(strSection, _T("NumOfPass"), 0);
				ss.sLineParams.dblOutLiersThreshold = profile.GetDouble(strSection, _T("OutLiersThreshold"), 0);

				ss.sLineParams.sAlignData.rpCenter.x = profile.GetDouble(strSection, _T("AlignX"), 0);
				ss.sLineParams.sAlignData.rpCenter.y = profile.GetDouble(strSection, _T("AlignY"), 0);
				ss.sLineParams.sAlignData.dblAngle = profile.GetDouble(strSection, _T("AlignAngle"), 0);
				ss.sLineParams.sAlignData.bResult = profile.GetInt(strSection, _T("AlignResult"), 0);

				m_vecROIData.push_back(ss);
				m_mapROIIndex[ss.strSerialNumber] = i + 1;

			}
		}
		else if(eType == IniDataType_MeasurementKind)
		{
			SetMesurementKindDataDeleteAll();

			for(int i = 0; i < nCount; i++)
			{
				SMeasurementKind ss;
				CString strSection;
				strSection.Format(_T("Measurement_%d"), i);

				ss.bUse = profile.GetInt(strSection, _T("Use"), 0);

				ss.strName = profile.GetString(strSection, _T("Name"), 0);
		
				ss.bType[EMeasurementKindType_Align] = profile.GetInt(strSection, _T("MeasurementTypeOption_Align"), 0);
				ss.bType[EMeasurementKindType_Size] = profile.GetInt(strSection, _T("MeasurementTypeOption_Size"), 0);
				ss.bType[EMeasurementKindType_Position] = profile.GetInt(strSection, _T("MeasurementTypeOption_Position"), 0);
				ss.bType[EMeasurementKindType_Area] = profile.GetInt(strSection, _T("MeasurementTypeOption_Area"), 0);
				ss.bType[EMeasurementKindType_Seap] = profile.GetInt(strSection, _T("MeasurementTypeOption_Seap"), 0);
				ss.bType[EMeasurementKindType_Cell] = profile.GetInt(strSection, _T("MeasurementTypeOption_Cell"), 0);
				ss.bType[EMeasurementKindType_PassLine] = profile.GetInt(strSection, _T("MeasurementTypeOption_PassLine"), 0);

				ss.dblReference = profile.GetDouble(strSection, _T("Judgment Value Reference"), 0);
				ss.dblUSL = profile.GetDouble(strSection, _T("Judgment Value USL"), 0);
				ss.dblLSL= profile.GetDouble(strSection, _T("Judgment Value LSL"), 0);
				ss.dblOffset = profile.GetDouble(strSection, _T("Judgment Value Offest"), 0);
				ss.dblScale = profile.GetDouble(strSection, _T("Judgment Value Scale"), 0);
		
				CString str;
				str = profile.GetString(strSection, _T("Standard ROI SerialNumber"), 0);
		
				ss.sStandard = GetDataROIFromSerialNumber(str);

				if(ss.sStandard.strName == _T(""))
				{
					continue;
				}
				
				int nVecCount = profile.GetInt(strSection, _T("Opponents ROI Count"), 0);
				
				for(int i = 0; i < nVecCount; i++)
				{
					CString strKeys;
					strKeys.Format(_T("Opponents SerialNumber %d"), i);
					str = profile.GetString(strSection, strKeys, 0);
					SMeasurementROI sData = GetDataROIFromSerialNumber(str);

					if(sData.strName == _T(""))
					{
						continue;
					}

					ss.vctOpponents.push_back(sData);
				}

				m_vecMeasurementKindData.push_back(ss);
			}
		}
		
		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CEHBase::SaveMeasurementROIFormIni()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do 
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		CString strPath = pModelInfo->GetModelFileFullPath();

		strPath = strPath.Left(strPath.ReverseFind(_T('\\')));

		CString strName;
		strName.Format(_T("\\MeasurementROI_%d.ini"), nObjectID);
		strPath += strName;

		bReturn = SaveIniDataFile(IniDataType_MeasurementROI, strPath);


	} while (false);

	return bReturn;
}

bool CEHBase::LoadMeasurementROIFormIni()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		CString strPath = pModelInfo->GetModelFileFullPath();

		strPath = strPath.Left(strPath.ReverseFind(_T('\\')));

		CString strName;
		strName.Format(_T("\\MeasurementROI_%d.ini"), nObjectID);
		strPath += strName;
	
		bReturn = LoadIniDataFile(IniDataType_MeasurementROI, strPath);
	}
	while(false);

	return bReturn;
}

bool CEHBase::SaveMeasurementKindFormIni()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		CString strPath = pModelInfo->GetModelFileFullPath();

		strPath = strPath.Left(strPath.ReverseFind(_T('\\')));

		CString strName;
		strName.Format(_T("\\MeasurementKind_%d.ini"), nObjectID);
		strPath += strName;

		bReturn = SaveIniDataFile(IniDataType_MeasurementKind, strPath);
	}
	while(false);

	return bReturn;
}

bool CEHBase::LoadMeasurementKindFormIni()
{
	int nObjectID = GetObjectID();

	bool bReturn = false;

	do
	{
		CModelInfo* pModelInfo = GetModel();
		if(!pModelInfo)
			break;

		CString strPath = pModelInfo->GetModelFileFullPath();

		strPath = strPath.Left(strPath.ReverseFind(_T('\\')));

		CString strName;
		strName.Format(_T("\\MeasurementKind_%d.ini"), nObjectID);
		strPath += strName;

		bReturn = LoadIniDataFile(IniDataType_MeasurementKind, strPath);
	}
	while(false);

	return bReturn;
}




