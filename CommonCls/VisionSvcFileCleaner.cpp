#include "StdAfx.h"
#include "VisionSvcFileCleaner.h"
//#include <algorithm>



#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif

CVisionSvcFileCleaner::CVisionSvcFileCleaner(void)
{
	m_ulExpirationDate = 0;
	m_bRecursive = false;
	m_bRemoveFileAttribute = false;

	m_bLimitDriveVolume = false;
	m_fDriveVolumeLimitPercentage = 80.f;
	m_bIsRunning = false;
	m_pThread = nullptr;
}


CVisionSvcFileCleaner::~CVisionSvcFileCleaner(void)
{
	Terminate();
}


bool CVisionSvcFileCleaner::Initialize()
{
	bool bReturn = true;

	if(!m_pThread)
	{
		m_pThread = AfxBeginThread(CVisionSvcFileCleaner::RunFileDelete, this);

		if(!m_pThread)
			return false;

		m_bIsRunning = true;

		//CloseHandle(m_pThread);
	}

	return bReturn;
}

bool CVisionSvcFileCleaner::Terminate()
{
	bool bReturn = true;

	m_bIsRunning = false;


	if(m_pThread)
	{
 		DWORD dwReturn = WaitForSingleObject(m_pThread->m_hThread, 2000);
 
// 		if(dwReturn == WAIT_OBJECT_0)
// 		{
// 			int j = 0;
// 		}
// 		else if(dwReturn == WAIT_TIMEOUT)
// 		{
// 			int k = 0;
// 		}

		//dwReturn = 0;
		GetExitCodeThread(m_pThread->m_hThread, &dwReturn);

		TerminateThread(m_pThread->m_hThread, dwReturn);

		m_pThread = nullptr;

		m_vctPathList.clear();

	}


	return bReturn;
}

bool CVisionSvcFileCleaner::AddDeletingFolder(LPCTSTR lpszPath)
{
	bool bReturn = false;

	if(!lpszPath || !_tcslen(lpszPath))
		return bReturn;

	m_vctPathList.push_back(lpszPath);

	bReturn = true;

	return bReturn;
}

double CVisionSvcFileCleaner::GetUsedDriverPercentage(LPCTSTR lpszDriver)
{
	double dblReturn = 0.;

	do 
	{
		if(!lpszDriver)
			break;

		ULARGE_INTEGER  ulnFreeBytesAvailableToCaller, ulnTotalNumberOfBytes, ulnTotalNumberOfFreeBytes;

		double dblTotalSize, dblFreeSize, dblCurrentPercentage;

		if(!GetDiskFreeSpaceEx(lpszDriver, &ulnFreeBytesAvailableToCaller, &ulnTotalNumberOfBytes, &ulnTotalNumberOfFreeBytes))
			break;

		dblTotalSize = (double)ulnTotalNumberOfBytes.QuadPart / 1073741824.;
		dblFreeSize = (double)ulnFreeBytesAvailableToCaller.QuadPart / 1073741824.;
		dblCurrentPercentage = ((dblTotalSize - dblFreeSize) / dblTotalSize) * 100.;

		dblReturn = dblCurrentPercentage;
	}
		while(false);

	return dblReturn;
}

CString CVisionSvcFileCleaner::GetDriverName(LPCTSTR lpszFile)
{
	CString strReturn;
	strReturn.Empty();

	do 
	{
		if(!lpszFile)
			break;

		CString strFile = lpszFile;

		int nPos = strFile.Find(_T("\\"));

		if(nPos < 0)
			break;

		if(nPos + 1 >= strFile.GetLength())
			break;

		strReturn = strFile.Left(nPos + 1);
	}
		while(false);

	return strReturn;
}

UINT CVisionSvcFileCleaner::RunFileDelete(LPVOID pParam)
{
	CVisionSvcFileCleaner* pCleaner = (CVisionSvcFileCleaner*)pParam;
	if(!pCleaner)
		return 0;		
	
	while(pCleaner->IsRunning())
	{

		
		std::set<CString> setCleanDriver;

		if(pCleaner->IsLimitDriveVolume())
		{
			for(auto iter = pCleaner->GetPathList()->begin(); iter !=  pCleaner->GetPathList()->end(); ++iter)
			{
				CString strDriver = pCleaner->GetDriverName(*iter);

				if(strDriver.IsEmpty())
					continue;

				if(pCleaner->GetUsedDriverPercentage(strDriver) >= pCleaner->GetDriveVolumeLimitPercentage())
					setCleanDriver.insert(strDriver);
			}
		}		

		
		std::function<bool(CString)> rmdRecursive = [&](CString strPath) -> bool
		{
			CString strFindFile, strTemp, strBuffer;
			CFileFind ff;
			CTime currentTime;
			CTime tm;
			CTimeSpan tmSpan;
			bool bFind;

			strFindFile.Format(_T("%s\\*.*"), strPath);
			bFind = ff.FindFile(strFindFile);

			currentTime = CTime::GetCurrentTime();


			while(bFind && pCleaner->IsRunning())
			{
				bFind = ff.FindNextFile();

				if(ff.IsDots()) continue;
				if(ff.IsDirectory())
				{
					if(!pCleaner->IsRecursive())
						continue;

					CString strNextLevel;
					strNextLevel = strFindFile;
					strNextLevel.Replace(_T("\\*.*"), _T("\\"));
					strNextLevel += ff.GetFileName();
					rmdRecursive(strNextLevel);
				}

				CString strFilePath = ff.GetFilePath();
				ff.GetCreationTime(tm);

				tmSpan = currentTime - tm;

				CString strDriver = pCleaner->GetDriverName(strFilePath);

				auto iter = setCleanDriver.find(strDriver);

				bool bIsClean = iter != setCleanDriver.end();


				if((tmSpan.GetDays() >= pCleaner->GetExpirationDate()) || bIsClean)
				{
						if(pCleaner->IsRemoveFileAttribute())
						SetFileAttributes(ff.GetFilePath(), FILE_ATTRIBUTE_NORMAL);

					::DeleteFile(strFilePath);
					::RemoveDirectory(strFilePath);

					if(bIsClean)
					{
						if(pCleaner->GetUsedDriverPercentage(strDriver) < pCleaner->GetDriveVolumeLimitPercentage())
							setCleanDriver.erase(iter);
					}
				}

				Sleep(1000);
			}

			return 0;
		};


		std::for_each( pCleaner->GetPathList()->begin(),  pCleaner->GetPathList()->end(), rmdRecursive);
		

		Sleep(1);
	}
	
	
	

	return 0;
}
