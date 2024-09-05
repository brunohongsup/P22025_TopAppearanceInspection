#include "StdAfx.h"
#include "Profile.h"
#include "XIni.h"
#include "Utils.h"

#define XINI		(static_cast<XIni*>(m_pIni))

#if !defined(SAFE_DELETE)
#define SAFE_DELETE(x)	{if(x) delete x; x = NULL;}
#endif

#if !defined(SAFE_DELETE_ARRAY)
#define SAFE_DELETE_ARRAY(x)	{if(x) delete[] x; x = NULL;}
#endif

#if !defined(SAFE_CLOSE_HANDLE)
#define SAFE_CLOSE_HANDLE(x)	{if(x) ::CloseHandle(x); x = NULL;}
#endif
void StringCopy(LPTSTR lpszDest, size_t BufferSizeInByte, LPCTSTR lpszSrc)
{
	ZeroMemory(lpszDest, BufferSizeInByte);

	if (!lpszSrc) return;

	size_t SrcLen = (_tcslen(lpszSrc) + 1) * sizeof(TCHAR);

	memcpy(lpszDest, lpszSrc, SrcLen > BufferSizeInByte ? BufferSizeInByte : SrcLen);

}

CProfile::CProfile()
	: m_lpszFullPath(NULL)
	, m_lpszFilePath(NULL)
	, m_lpszFileName(NULL)
	, m_lpszExtension(NULL)
	, m_pIni(NULL)
{
	m_pIni = new XIni;
}

CProfile::CProfile(LPCTSTR lpszFilePath, LPCTSTR lpszFileName, LPCTSTR lpszExtension)
	: m_lpszFullPath(NULL)
	, m_lpszFilePath(NULL)
	, m_lpszFileName(NULL)
	, m_lpszExtension(NULL)
	, m_pIni(NULL)
{
	m_pIni = new XIni;
	SetProfilePath(lpszFilePath, lpszFileName, lpszExtension);
}

CProfile::CProfile(LPCTSTR lpszFullPath)
	: m_lpszFullPath(NULL)
	, m_lpszFilePath(NULL)
	, m_lpszFileName(NULL)
	, m_lpszExtension(NULL)
	, m_pIni(NULL)
{
	m_pIni = new XIni;
	SetProfilePath(lpszFullPath);
}

CProfile::~CProfile()
{
	SAFE_DELETE_ARRAY(m_lpszFilePath);
	SAFE_DELETE_ARRAY(m_lpszExtension);
	SAFE_DELETE_ARRAY(m_lpszFullPath);
	SAFE_DELETE_ARRAY(m_lpszFileName);

	XIni* pIni = XINI;
	SAFE_DELETE(pIni);
}

BOOL CProfile::SetProfilePath(LPCTSTR lpszFilePath, LPCTSTR lpszFileName, LPCTSTR lpszExtension)
{
	SAFE_DELETE_ARRAY(m_lpszFilePath);
	SAFE_DELETE_ARRAY(m_lpszFileName);
	SAFE_DELETE_ARRAY(m_lpszExtension);
	SAFE_DELETE_ARRAY(m_lpszFullPath);

	if (!Utils::IsValidPathName(lpszFilePath))
		return FALSE;

	if (!Utils::CreateDir(lpszFilePath, TRUE))
		return FALSE;

	int nLenFilePath, nLenExt, nLenFileName, nLenFull;

	nLenFilePath = (int)_tcslen(lpszFilePath);
	nLenExt = (int)_tcslen(lpszExtension);
	nLenFileName = (int)_tcslen(lpszFileName);
	nLenFull = nLenFilePath + nLenFileName + nLenExt + 1; //because seperator dot'.'

	m_lpszFilePath = new TCHAR[nLenFilePath + 1];
	m_lpszFileName = new TCHAR[nLenFileName + 1];
	m_lpszExtension = new TCHAR[nLenExt + 1];
	m_lpszFullPath = new TCHAR[nLenFull + 1];

	StringCopy(m_lpszFilePath, (nLenFilePath + 1)*sizeof(TCHAR), lpszFilePath);
	StringCopy(m_lpszFileName, (nLenFileName + 1)*sizeof(TCHAR), lpszFileName);
	StringCopy(m_lpszExtension, (nLenExt + 1)*sizeof(TCHAR), lpszExtension);

	ZeroMemory(m_lpszFullPath, (nLenFull + 1) * sizeof(TCHAR));

	memcpy(m_lpszFullPath, lpszFilePath, nLenFilePath*sizeof(TCHAR));
	memcpy(m_lpszFullPath + nLenFilePath, lpszFileName, nLenFileName*sizeof(TCHAR));

	m_lpszFullPath[nLenFilePath + nLenFileName] = _T('.');

	memcpy(m_lpszFullPath + (nLenFilePath + nLenFileName + 1), lpszExtension, nLenExt*sizeof(TCHAR));
	
	CFile file;
	CFileException exFile;

	try
	{
 		if (!file.Open(m_lpszFullPath, CFile::modeCreate | CFile::modeNoTruncate | CFile::modeRead, &exFile))
 			throw &exFile;
 		else
 			file.Close();

		if (!Load()) throw (DWORD)0;
	}
	//catch (CFileException* e)
	catch (DWORD e)
	{
		e;
		SAFE_DELETE_ARRAY(m_lpszFilePath);
		SAFE_DELETE_ARRAY(m_lpszFileName);
		SAFE_DELETE_ARRAY(m_lpszExtension);
		SAFE_DELETE_ARRAY(m_lpszFullPath);
		return FALSE;
	}

	return TRUE;
}

BOOL CProfile::SetProfilePath(LPCTSTR lpszFullPath)
{
	SAFE_DELETE_ARRAY(m_lpszFilePath);
	SAFE_DELETE_ARRAY(m_lpszFileName);
	SAFE_DELETE_ARRAY(m_lpszExtension);
	SAFE_DELETE_ARRAY(m_lpszFullPath);

	if (!Utils::IsValidPathName(lpszFullPath))
		return FALSE;

	if (!Utils::CreateDir(lpszFullPath, TRUE))
		return FALSE;

	int nFullLen = (int)_tcslen(lpszFullPath);
	int nExtLen = -1; //NULL
	int nNameLen = -1, nPathLen = 0;

	LPTSTR ptFileExt = (LPTSTR)(lpszFullPath + nFullLen);
	for (ptFileExt; ptFileExt >= lpszFullPath; ptFileExt--)
	{
		if (*ptFileExt == _T('.'))
		{
			ptFileExt++;
			break;
		}
		nExtLen++;
	}

	if (ptFileExt == lpszFullPath)
		return FALSE;
	

	LPTSTR ptFileName = (LPTSTR)(ptFileExt - 1);
	for (ptFileName; ptFileName >= lpszFullPath; ptFileName--)
	{
		if (*ptFileName == _T('\\') || *ptFileName == _T('/'))
		{
			ptFileName++;
			break;
		}
		nNameLen++;
	}

	if (ptFileName == lpszFullPath)
		return FALSE;

	nPathLen = nFullLen - nExtLen - nNameLen - 1;

	LPTSTR lpszFilePath = new TCHAR[nPathLen + 1];
	LPTSTR lpszFileName = new TCHAR[nNameLen + 1];
	LPTSTR lpszExtension = new TCHAR[nExtLen + 1];

	ZeroMemory(lpszFilePath, (nPathLen + 1)*sizeof(TCHAR));
	StringCopy(lpszFilePath, (nPathLen)*sizeof(TCHAR), lpszFullPath);

	ZeroMemory(lpszFileName, (nNameLen + 1)*sizeof(TCHAR));
	StringCopy(lpszFileName, (nNameLen)*sizeof(TCHAR), ptFileName);
	
	StringCopy(lpszExtension, (nExtLen + 1)*sizeof(TCHAR), ptFileExt);

	BOOL bResult = SetProfilePath(lpszFilePath, lpszFileName, lpszExtension);
	SAFE_DELETE_ARRAY(lpszFilePath);
	SAFE_DELETE_ARRAY(lpszFileName);
	SAFE_DELETE_ARRAY(lpszExtension);
	return bResult;
}

BOOL CProfile::Save()
{
	if (!IsCreate())
		return FALSE;

	BOOL bResult = TRUE;
	bResult &= XINI->SaveAs(GetFullFilePath());

	return bResult;
}

BOOL CProfile::Load()
{
	if (!IsCreate())
		return FALSE;

	BOOL bResult = TRUE;
	bResult &= XINI->Open(GetFullFilePath());

	return bResult;
}

LPCTSTR CProfile::GetFilePath()
{
	return (LPCTSTR) m_lpszFilePath;
}
LPCTSTR CProfile::GetExetension()
{
	return (LPCTSTR) m_lpszExtension;
}
LPCTSTR CProfile::GetFullFilePath()
{
	return (LPCTSTR) m_lpszFullPath;
}
PCTSTR CProfile::GetFileName()
{
	return (LPCTSTR) m_lpszFileName;
}
BOOL CProfile::UpdateInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int* nValue, BOOL bGetFromDisk, int nDefault /*= 0*/)
{
	BOOL bResult = TRUE;

	if (bGetFromDisk)
	{
		*nValue = GetInt(lpszSection, lpszKeyName, nDefault);
	}
	else
	{
		bResult &= SetInt(lpszSection, lpszKeyName, *nValue);
	}

	return bResult;
}

int CProfile::GetInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int nDefault /*= 0*/)
{
	//return (int) ::GetPrivateProfileInt(lpszSection, lpszKeyName, nDefault, m_lpszFullPath);

	if (!IsCreate() || !XINI->IsOpened())
		return 0;

	return XINI->GetInt(lpszSection, lpszKeyName, nDefault);
}
BOOL CProfile::SetInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int nValue)
{
	BOOL bResult = TRUE;
	TCHAR lpszBuf[MAX_PATH] = {0L};

	if (!IsCreate() || !XINI->IsOpened())
		return FALSE;

	m_cs.Lock();
// #ifndef UNICODE
// 	sprintf_s(lpszBuf, MAX_PATH, _T("%d"), nValue);
// 	bResult &= ::WritePrivateProfileString(lpszSection, lpszKeyName, lpszBuf, m_lpszFullPath);
// #else
// 	swprintf_s(lpszBuf, _T("%d"), nValue);
// 	bResult &= ::WritePrivateProfileStringW(lpszSection, lpszKeyName, lpszBuf, m_lpszFullPath);
// #endif

	bResult &= XINI->SetInt(lpszSection, lpszKeyName, nValue);
	m_cs.Unlock();

	return bResult;
}

BOOL CProfile::UpdateDouble(LPCTSTR lpszSection, LPCTSTR lpszKeyName, double* dValue, BOOL bGetFromDisk, double dDefault /*= 0*/)
{
	BOOL bResult = TRUE;
	
	if (bGetFromDisk)
	{
		*dValue = GetDouble(lpszSection, lpszKeyName, dDefault);
	}
	else
	{
		bResult &= SetDouble(lpszSection, lpszKeyName, *dValue);
	}
	
	return bResult;
}

double CProfile::GetDouble(LPCTSTR lpszSection, LPCTSTR lpszKeyName, double dDefault /*= 0*/)
{
	//TCHAR lpszBuf[MAX_PATH] = { 0L };
	TCHAR lpszDef[MAX_PATH] = { 0L };
	double dRet = 0.;

	if (!IsCreate() || !XINI->IsOpened())
		return 0.0;

// #ifndef UNICODE
// 	sprintf_s(lpszDef, MAX_PATH, _T("%f"), dDefault);
// 	::GetPrivateProfileString(lpszSection, lpszKeyName, lpszDef, lpszBuf, sizeof(lpszBuf), m_lpszFullPath);
// #else
// 	swprintf_s(lpszDef, _T("%f"), dDefault);
// 	::GetPrivateProfileStringW(lpszSection, lpszKeyName, lpszDef, lpszBuf, sizeof(lpszBuf), m_lpszFullPath);
// #endif

#ifndef UNICODE
	sprintf_s(lpszDef, MAX_PATH, _T("%f"), dDefault);
#else
	swprintf_s(lpszDef, _T("%f"), dDefault);
#endif

	CString strBuf;
	strBuf = XINI->GetStr(lpszSection, lpszKeyName, lpszDef);

	//dRet = _tcstod(lpszBuf, NULL);
	dRet = _tcstod(strBuf, NULL);

	return dRet;

}
BOOL CProfile::SetDouble(LPCTSTR lpszSection, LPCTSTR lpszKeyName, double dValue)
{
	BOOL bResult = TRUE;
	TCHAR lpszBuf[MAX_PATH] = {0L};

	if (!IsCreate() || !XINI->IsOpened())
		return FALSE;

	m_cs.Lock();
// #ifndef UNICODE
// 	sprintf_s(lpszBuf, MAX_PATH, _T("%f"), dValue);
// 	bResult &= ::WritePrivateProfileString(lpszSection, lpszKeyName, lpszBuf, m_lpszFullPath);
// #else
// 	swprintf_s(lpszBuf, MAX_PATH, _T("%f"), dValue);
// 	bResult &= ::WritePrivateProfileStringW(lpszSection, lpszKeyName, lpszBuf, m_lpszFullPath);
// #endif

#ifndef UNICODE
	sprintf_s(lpszBuf, MAX_PATH, _T("%f"), dValue);
#else
	swprintf_s(lpszBuf, MAX_PATH, _T("%f"), dValue);
#endif

	bResult &= XINI->SetStr(lpszSection, lpszKeyName, lpszBuf);
	m_cs.Unlock();

	return bResult;
}

BOOL CProfile::UpdateString(LPCTSTR lpszSection, LPCTSTR lpszKeyName, CString* strValue, BOOL bGetFromDisk, LPCTSTR lpszDefault /*= NULL*/)
{
	BOOL bResult = TRUE;

	if (bGetFromDisk)
	{
		strValue->Format(_T("%s"), GetString(lpszSection, lpszKeyName, lpszDefault));
	}
	else
	{
		bResult &= SetString(lpszSection, lpszKeyName, strValue->GetString());
	}

	return bResult;
}

BOOL CProfile::SetString(LPCTSTR lpszSection, LPCTSTR lpszKeyName, LPCTSTR lpszValue)
{
	BOOL bResult = TRUE;

	if (!IsCreate() || !XINI->IsOpened())
		return FALSE;

	m_cs.Lock();
// #ifndef UNICODE
// 	bResult &= ::WritePrivateProfileString(lpszSection, lpszKeyName, lpszValue, m_lpszFullPath);
// #else
// 	bResult &= ::WritePrivateProfileStringW(lpszSection, lpszKeyName, lpszValue, m_lpszFullPath);
// #endif
	bResult &= XINI->SetStr(lpszSection, lpszKeyName, lpszValue);
	m_cs.Unlock();

	return TRUE;
}


CString CProfile::GetString(LPCTSTR lpszSection, LPCTSTR lpszKeyName, LPCTSTR lpszDefault /*= NULL*/)
{
	CString strRet;
	strRet.Empty();
	//TCHAR lpszBuf[MAX_PATH] = {0L};

	if (!IsCreate() || !XINI->IsOpened())
		return strRet;

// #ifndef UNICODE
// 	::GetPrivateProfileString(lpszSection, lpszKeyName, lpszDefault ? lpszDefault : _T(""), lpszBuf, sizeof(lpszBuf), m_lpszFullPath);
// #else
// 	::GetPrivateProfileStringW(lpszSection, lpszKeyName, lpszDefault ? lpszDefault : _T(""), lpszBuf, sizeof(lpszBuf), m_lpszFullPath);
// #endif
//	strRet.Format(_T("%s"), lpszBuf);

	strRet = XINI->GetStr(lpszSection, lpszKeyName, lpszDefault);

	return strRet;
}

BOOL CProfile::IsCreate()
{
	BOOL bResult = TRUE;

	bResult &= m_lpszFilePath ? TRUE : FALSE;
	bResult &= m_lpszFileName ? TRUE : FALSE;
	bResult &= m_lpszExtension ? TRUE : FALSE;
	bResult &= m_lpszFullPath ? TRUE : FALSE;
	
	return bResult;
}