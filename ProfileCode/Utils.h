#pragma once

namespace Utils
{
	LPCTSTR GetExeDir();
	BOOL IsPathExist(LPCTSTR szPath, BOOL bIsFile);
	void DelayMS(DWORD dwMiliSecond);

	BOOL IsValidPathName(LPCTSTR szPath, BOOL bRootOnly = FALSE);
	BOOL CreateDir(LPCTSTR szPath, BOOL bRootOnly = FALSE);
	BOOL DeleteFolder(LPCTSTR szPath);
	BOOL CopyFolder(LPCTSTR lpszSrc, LPCTSTR lpszDest);

	BOOL GetFolderFilePathArray(LPCTSTR szFolderPath, CStringArray* pFilePathArray, BOOL bIncludeSubfolders /*= TRUE*/);
	void GetAllControlsUsingRecursive(CWnd* pContainer, std::vector<CWnd*> &vtControls);
}