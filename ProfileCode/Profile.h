#if !defined(PROFILE_H)
#define PROFILE_H

#if _MSC_VER > 1000
#pragma once
#endif 

//, typename UnsginedIntegerData, typename RealNumberData>	

class CProfile
{
public :
	template<typename IntegerData>
	BOOL		UpdateIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData* tValue, BOOL bGetFromDisk, IntegerData tDefault = 0);
	template<typename IntegerData>
	BOOL		SetIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData tValue);
	template<typename IntegerData>
	IntegerData GetIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData tDefault = 0);

	BOOL	UpdateInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int* nValue, BOOL bGetFromDisk, int nDefault = 0);
	BOOL	SetInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int nValue);
	int		GetInt(LPCTSTR lpszSection, LPCTSTR lpszKeyName, int nDefault = 0);

	BOOL	UpdateDouble(LPCTSTR lpszSection, LPCTSTR lpszKeyName, double* dValue, BOOL bGetFromDisk, double dDefault = 0);
	BOOL	SetDouble(LPCTSTR lpszSection, LPCTSTR lpszKeyName, double dValue);
	double	GetDouble(LPCTSTR lpszSection, LPCTSTR lpszKeName, double dDefault = 0);

	BOOL	UpdateString(LPCTSTR lpszSection, LPCTSTR lpszKeyName, CString* strValue, BOOL bGetFromDisk, LPCTSTR lpszDefault = NULL);
	BOOL	SetString(LPCTSTR lpszSection, LPCTSTR lpszKeyName, LPCTSTR lpszValue);
	CString GetString(LPCTSTR lpszSction, LPCTSTR lpszKeyName, LPCTSTR lpszDefault = NULL);

	BOOL SetProfilePath(LPCTSTR lpszFilePath, LPCTSTR lpszFileName, LPCTSTR lpszExtension);
	BOOL SetProfilePath(LPCTSTR lpszFullPath);

	BOOL Load();
	BOOL Save();

	LPCTSTR GetFilePath();
	LPCTSTR GetFileName();
	LPCTSTR GetExetension();
	LPCTSTR GetFullFilePath();

	BOOL IsCreate();

private:
	LPTSTR m_lpszFilePath;
	LPTSTR m_lpszFileName;
	LPTSTR m_lpszExtension;
	LPTSTR m_lpszFullPath;
	CCriticalSection m_cs;
	void* m_pIni;

public:
	CProfile(LPCTSTR lpszFilePath, LPCTSTR lpszFileName, LPCTSTR lpszExtension);
	CProfile(LPCTSTR lpszFullPath);
	CProfile();
	virtual ~CProfile();
};


template<typename IntegerData>
BOOL CProfile::UpdateIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData* tValue, BOOL bGetFromDisk, IntegerData tDefault)
{
	BOOL bResult = TRUE;

	if (bGetFromDisk)
		*tValue = GetIntegerData(lpszSection, lpszKeyName, tDefault);
	else
		bResult &= SetIntegerData(lpszSection, lpszKeyName, *tValue);

	return bResult;
}
template<typename IntegerData>
BOOL CProfile::SetIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData tValue)
{
	BOOL bResult = TRUE;
	CString strBuf;
	strBuf.Format(_T("%ld"), tValue);

	m_cs.Lock();
	bResult &= SetString(lpszSection, lpszKeyName, strBuf);
	m_cs.Unlock();

	return bResult;
}

template<typename IntegerData>
IntegerData CProfile::GetIntegerData(LPCTSTR lpszSection, LPCTSTR lpszKeyName, IntegerData tDefault)
{
	IntegerData tValue = (IntegerData)0;
	//TCHAR lpszBuf[MAX_PATH] = { 0L, };
	TCHAR lpszDef[MAX_PATH] = { 0L, };
	CString strBuf;

#ifdef UNICODE
	swprintf_s(lpszDef, _T("%ld"), tDefault);
#else
	sprintf_s(lpszDef, _T("%ld"), tDefault);
#endif
	

	strBuf = GetString(lpszSection, lpszKeyName, lpszDef);
	tValue = (IntegerData)_tcstol(strBuf, NULL, 10);

	return tValue;
}
#endif