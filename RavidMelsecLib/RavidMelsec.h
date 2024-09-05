#pragma once

#include <afxmt.h>

class AFX_EXT_CLASS CRavidMelsec
{
private:
	CRavidMelsec();
public:
	virtual ~CRavidMelsec();

	static CRavidMelsec* GetInstance();

	static bool Initialize();
	static bool Terminate();

	static bool IsInitialized();


	static bool Open(int nLogicalStationNumber);
	static bool Close();

	static bool SendData(LPCTSTR lpszAddr, long nCount, short* lpsData, bool bUseWriteBlock = false);
	static bool SendData(LPCTSTR lpszAddr, long nCount, long* lplData, bool bUseWriteBlock = false);

	static bool RecvData(LPCTSTR lpszAddr, long nCount, short* lpsData, bool bUseReadBlock = false);
	static bool RecvData(LPCTSTR lpszAddr, long nCount, long* lplData, bool bUseReadBlock = false);

	static UINT ProxyThread(LPVOID pParam);

private:
	
	bool m_bIsInitialized = false;
	bool m_bProxyIsRunning = false;
	HANDLE m_hProxyHandle = 0;
	CWinThread* m_pThread = nullptr;
	bool m_bIsOpen = false;

	CCriticalSection m_cs;
};

