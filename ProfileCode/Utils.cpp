#include "stdafx.h"
#include "Utils.h"
#include <afxmt.h>

#if !defined(SAFE_DELETE)
#define SAFE_DELETE(x)	{if(x) delete x; x = NULL;}
#endif

#if !defined(SAFE_DELETE_ARRAY)
#define SAFE_DELETE_ARRAY(x)	{if(x) delete[] x; x = NULL;}
#endif

#if !defined(SAFE_CLOSE_HANDLE)
#define SAFE_CLOSE_HANDLE(x)	{if(x) ::CloseHandle(x); x = NULL;}
#endif

#if !defined(_tcsprintf_s)
#ifdef UNICODE
#define _tcsprintf_s swprintf_s
#else
#define _tcsprintf_s sprintf_s
#endif
#endif

namespace Utils
{
	CCriticalSection g_csExeDir;
	TCHAR g_szExeDir[MAX_PATH] = { 0L, };

	LPCTSTR GetExeDir()
	{
		TCHAR szCurrDir[MAX_PATH] = { 0L, };

		DWORD dwResult = ::GetModuleFileName(NULL, szCurrDir, _countof(szCurrDir));

		if (dwResult == _countof(szCurrDir) || dwResult == 0)
			return NULL;

		TCHAR *szDirEnd = _tcsrchr(szCurrDir, _T('\\'));
		*szDirEnd = NULL;

		if (_tcscmp(szCurrDir, g_szExeDir) != 0)
		{
			g_csExeDir.Lock();
			ZeroMemory(g_szExeDir, sizeof(g_szExeDir));
			memcpy(g_szExeDir, szCurrDir, _tcslen(szCurrDir) * sizeof(TCHAR));
			g_csExeDir.Unlock();
		}

		return (LPCTSTR)g_szExeDir;
	}

	BOOL IsPathExist(LPCTSTR szPath, BOOL bIsFile)
	{
		if (!szPath)
			return FALSE;

		BOOL bResult = FALSE;

		if (bIsFile)
		{
			HANDLE hFile = ::CreateFile(szPath
				, GENERIC_READ
				, FILE_SHARE_READ | FILE_SHARE_WRITE
				, NULL
				, OPEN_EXISTING
				, 0
				, 0
			);

			if (hFile != INVALID_HANDLE_VALUE)
			{
				SAFE_CLOSE_HANDLE(hFile);
				bResult = TRUE;
			}
		}
		else
		{
			if (szPath[_tcslen(szPath) - 1] == _T('*'))
			{
				size_t nPathLen = _tcslen(szPath);
				TCHAR szRoot[MAX_PATH] = { 0L, };
				memcpy(szRoot, szPath, sizeof(TCHAR)*nPathLen);
				for (size_t i = nPathLen - 1; i >= 0; i--)
				{
					if (szRoot[i] == _T('.'))
					{
						BOOL bFind = FALSE;
						for (size_t j = i - 1; j >= 0; j--)
						{
							if (szRoot[j] == _T('\\') || szRoot[j] == _T('/'))
							{
								szRoot[j + 1] = NULL;
								bFind = TRUE;
								break;
							}
						}

						if (bFind)
							break;
					}

					if (szRoot[i] == _T('\\') || szRoot[i] == _T('/'))
						break;
				}

				bResult = _taccess_s(szRoot, 0) == 0;
			}
			else
				bResult = _taccess_s(szPath, 0) == 0;
		}

		return !!bResult;
	}


	bool GetQPF(__int64* QPFTicksPerSec)
	{
		LARGE_INTEGER li;
		if (QueryPerformanceFrequency(&li) == false)
		{
			return false;
		}

		*QPFTicksPerSec = static_cast<__int64>(li.QuadPart);
		return true;
	}

	__int64 GetQPCTick()
	{
		LARGE_INTEGER li;
		QueryPerformanceCounter(&li);
		return static_cast<__int64>(li.QuadPart);
	}

	void DelayMS(DWORD dwMiliSecond)
	{
		//__int64 nThickPerSec = 0;
		//if (GetQPF(&nThickPerSec))
		{
			DWORD dwStartTime = ::GetTickCount(), dwElapsedTime = 0;

			while (dwElapsedTime < dwMiliSecond)
				dwElapsedTime = ::GetTickCount() - dwStartTime;
		}
		// 		else
		// 		{
		// 			__int64 nDelayTIme = (__int64)dwMiliSecond;
		// 			__int64 nStartTime = GetQPCTick();
		// 			__int64 nElapsedTime = 0;
		// 
		// 			while (nElapsedTime < nDelayTIme)
		// 				nElapsedTime = ((GetQPCTick() - nStartTime) / nThickPerSec)*1000;
		// 
		// 		}
	}

	BOOL IsValidPathName(LPCTSTR szPath, BOOL bRootOnly /*= FALSE*/)
	{
		BOOL bResult = TRUE;

		size_t nPathLen = _tcslen(szPath);

		if (nPathLen < 3)
			return FALSE;

		if (szPath[1] != _T(':') || (szPath[2] != _T('\\') && szPath[2] != _T('/')))
			return FALSE;

		if (!(szPath[0] >= _T('a') && szPath[0] <= _T('z'))
			&& !(szPath[0] >= _T('A') && szPath[0] <= _T('Z')))
			return FALSE;

		TCHAR szDrive[10] = { 0L };
		_tcsprintf_s(szDrive, _countof(szDrive), _T("%c://"), szPath[0]);

		int nDriveType = GetDriveType(szDrive);
		if (nDriveType == DRIVE_UNKNOWN || nDriveType == DRIVE_NO_ROOT_DIR)
			return FALSE;


		TCHAR szRoot[MAX_PATH] = { 0L, };
		memcpy(szRoot, szPath, sizeof(TCHAR)*nPathLen);

		//bRootOnly 가 True 이면, 마지막 경로에 . 이 들어가는지 체크.
		//마지막 경로에 . 이 포함될 경우, 이는 파일 이름인 것으로 간주하고 제거.
		if (bRootOnly)
		{
			for (size_t i = nPathLen - 1; i >= 0; i--)
			{
				if (szRoot[i] == _T('.'))
				{
					BOOL bFind = FALSE;
					for (size_t j = i - 1; j >= 0; j--)
					{
						if (szRoot[j] == _T('\\') || szRoot[j] == _T('/'))
						{
							szRoot[j + 1] = NULL;
							bFind = TRUE;
							break;
						}
					}

					if (bFind)
						break;
				}

				if (szRoot[i] == _T('\\') || szRoot[i] == _T('/'))
					break;
			}
		}

		for (size_t i = 2; i < nPathLen; i++)
		{
			if (szRoot[i] == NULL)
				break;

			bResult &= szRoot[i] != _T(':');
			bResult &= szRoot[i] != _T('?');
			bResult &= szRoot[i] != _T('<');
			bResult &= szRoot[i] != _T('>');
			bResult &= szRoot[i] != _T('|');

			if (!bResult)
				break;
		}

		return !!bResult;
	}

	BOOL CreateDir(LPCTSTR szPath, BOOL bRootOnly /*= FALSE*/)
	{
		BOOL bResult = TRUE;
		TCHAR DirName[MAX_PATH] = { 0L, };
		TCHAR szTargetPath[MAX_PATH] = { 0L, };
		size_t nPathLen = _tcslen(szPath);

		if (nPathLen < 3)
			return FALSE;

		if (!IsValidPathName(szPath, bRootOnly))
			return FALSE;

		memcpy(szTargetPath, szPath, nPathLen * sizeof(TCHAR));

		//bRootOnly 가 True 이면, 마지막 경로에 . 이 들어가는지 체크.
		//마지막 경로에 . 이 포함될 경우, 이는 파일 이름인 것으로 간주하고 제거.
		if (bRootOnly)
		{
			for (size_t i = nPathLen - 1; i >= 0; i--)
			{
				if (szTargetPath[i] == _T('.'))
				{
					BOOL bFind = FALSE;
					for (size_t j = i - 1; j >= 0; j--)
					{
						if (szTargetPath[j] == _T('\\') || szTargetPath[j] == _T('/'))
						{
							szTargetPath[j + 1] = NULL;
							bFind = TRUE;
							break;
						}
					}

					if (bFind)
						break;
				}

				if (szTargetPath[i] == _T('\\') || szTargetPath[i] == _T('/'))
					break;
			}
		}


		TCHAR* p = szTargetPath;
		TCHAR* q = DirName;
		while (*p)
		{
			if ((_T('\\') == *p) || (_T('/') == *p))
			{
				if (_T(':') != *(p - 1))
				{
					if (!IsPathExist(DirName, FALSE))
						bResult &= CreateDirectory(DirName, NULL);
				}
			}
			*q++ = *p++;
			*q = NULL;
		}
		if (!IsPathExist(DirName, FALSE))
			bResult &= CreateDirectory(DirName, NULL);

		return !!bResult;
	}

	BOOL DeleteFolder(LPCTSTR szPath)
	{
		BOOL bResult = TRUE;

		if (!IsValidPathName(szPath))
			return FALSE;

		TCHAR fileFound[MAX_PATH];
		WIN32_FIND_DATA info;
		HANDLE hp;
		_tcsprintf_s(fileFound, _countof(fileFound), _T("%s\\*.*"), szPath);

		hp = ::FindFirstFile(fileFound, &info);

		if (hp == INVALID_HANDLE_VALUE)
			return FALSE;

		do
		{
			if (!((_tcscmp(info.cFileName, _T(".")) == 0) ||
				(_tcscmp(info.cFileName, _T("..")) == 0)))
			{
				if ((info.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ==
					FILE_ATTRIBUTE_DIRECTORY)
				{
					CString subFolder = szPath;
					subFolder += _T("\\");
					subFolder += info.cFileName;
					bResult &= DeleteFolder(subFolder);
					bResult &= ::RemoveDirectory(subFolder);
				}
				else
				{
					_tcsprintf_s(fileFound, _countof(fileFound), _T("%s\\%s"), szPath, info.cFileName);
					bResult &= ::DeleteFile(fileFound);
				}
			}

		} while (::FindNextFile(hp, &info));
		bResult &= ::FindClose(hp);

		bResult &= ::RemoveDirectory(szPath);

		return !!bResult;
	}

	BOOL CopyFolder(LPCTSTR lpszSrc, LPCTSTR lpszDest)
	{
		BOOL bResult = TRUE;

		if (!IsPathExist(lpszSrc, FALSE) || !IsValidPathName(lpszDest))
			return FALSE;

		//** 1. Target Folder Make*********************************/
		if (!CreateDir(lpszDest))
			return FALSE;
		//*********************************************************/

		CFileFind Finder;
		BOOL bContinue;

		//**2. Valid Check Src Directory********************/
		bContinue = Finder.FindFile(lpszSrc);

		if (!bContinue)
			return FALSE;
		//***************************************************/

		while (bContinue)
		{
			bContinue = Finder.FindNextFile();

			if (Finder.IsDots())
				continue;

			if (Finder.IsDirectory())
			{
				CString strNextFindDir;
				CString strNextDstDir;

				strNextFindDir.Format(_T("%s\\*.*"), Finder.GetFilePath());

				CString strTemp;
				strTemp.Format(_T("%s"), lpszSrc);
				strTemp = strTemp.Right(3);

				if (strTemp.CompareNoCase(_T("*.*")) != 0)
					strNextDstDir.Format(_T("%s"), lpszDest);
				else
					strNextDstDir.Format(_T("%s\\%s"), lpszDest, Finder.GetFileName());

				bResult &= CopyFolder(strNextFindDir, strNextDstDir);
			}
			else
			{
				CString strDestFile;
				strDestFile.Format(_T("%s\\%s"), lpszDest, Finder.GetFileName());

				bResult = ::CopyFileEx(Finder.GetFilePath(), strDestFile, NULL, NULL, NULL, 0);
			}
		}


		return bResult;
	}

	void GetFilePath(LPCTSTR szFolderPath, CStringArray* pArray, BOOL bIncludeSubfolders /*= TRUE*/)
	{
		CFileFind finder;

		CString strFolderPath;
		strFolderPath.Format(_T("%s\\*"), szFolderPath);
		BOOL bContinue = finder.FindFile(strFolderPath);

		while (bContinue)
		{
			bContinue = finder.FindNextFile();

			if (finder.IsDirectory())
			{
				if (bIncludeSubfolders && !finder.IsDots())
				{
					GetFilePath(finder.GetFilePath(), pArray, bIncludeSubfolders);
				}
			}
			else //file
			{
				CString strFilePath;
				strFilePath.Format(_T("%s"), finder.GetFilePath());
				pArray->Add(strFilePath);
			}
		}
	}

	BOOL GetFolderFilePathArray(LPCTSTR szFolderPath, CStringArray* pFilePathArray, BOOL bIncludeSubfolders /*= TRUE*/)
	{
		BOOL bResult = TRUE;
		pFilePathArray->RemoveAll();

		if (!IsPathExist(szFolderPath, FALSE))
			return FALSE;

		GetFilePath(szFolderPath, pFilePathArray, bIncludeSubfolders);

		return bResult;
	}


	BOOL CALLBACK EnumChildProc(HWND hWnd, LPARAM lParam)
	{
		std::vector<CWnd*>* pvtArr = (std::vector<CWnd*>*)lParam;

		pvtArr->push_back(CWnd::FromHandle(hWnd));

		return TRUE;
	}
	void GetAllControlsUsingRecursive(CWnd* pContainer, std::vector<CWnd*> &vtControls)
	{
		if (!pContainer)
			return;

		EnumChildWindows(pContainer->GetSafeHwnd(), EnumChildProc, (LPARAM)&vtControls);
	}
}


