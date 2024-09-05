
#include "stdafx.h"
#include "CellTrackerlSocketVer2013.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CCellTrackerSocketVer2013* pTempLoad = NULL;
CCellTrackerSocketVer2013::CCellTrackerSocketVer2013(void)
{
	m_blastOldConnectStatus = false;
	pTempLoad = this;
}

CCellTrackerSocketVer2013::~CCellTrackerSocketVer2013(void)
{

}

UINT WINAPI CCellTrackerSocketVer2013::DllSocket_ConnectStatus(char* strEventContents, int nStatus, int nErrorCode)
{
	if(NULL != pTempLoad)
	{
		pTempLoad->PostConnectStatus(strEventContents, nStatus, nErrorCode);
	}

	return 0;
}

UINT WINAPI CCellTrackerSocketVer2013::DllSocket_ReceiveDataBuffer(unsigned char* pReceiveBuffer, int nReceiveLengthByByte)
{
	if(NULL != pReceiveBuffer && nReceiveLengthByByte > 0 && pTempLoad)
	{
		pTempLoad->Receive_Parsing(pReceiveBuffer, nReceiveLengthByByte);
		pTempLoad->SubReceiveCallBackProcess(pReceiveBuffer, nReceiveLengthByByte);
		//TRACE(_T("%s:%ld\r\n"), pReceiveBuffer, nReceiveLengthByByte);
	}

	return 0;
}

void CCellTrackerSocketVer2013::PostConnectStatus(char* strEventContents, int nStatus, int nErrorCode)
{
	const bool bConnected = enConnectEvent::OnConnected == nStatus;
	if(NULL != strEventContents && m_blastOldConnectStatus != bConnected)
	{
		m_strSocketEvent = strEventContents;
		m_blastOldConnectStatus = bConnected;

		//if(::IsWindow(GetSafeHwnd()))
//		{
//			PostMessage(WM_CONNECT_STATUS_CHANGED, m_blastOldConnectStatus, (LPARAM)&m_strSocketEvent);
//		}
	}
}

void CCellTrackerSocketVer2013::SubReceiveCallBackProcess(unsigned char* pReceiveBuffer, int nReceiveLengthWithByte)
{
	if(m_LoadVTECSDll.DllSocket_IsASCIITypeDll())
	{
#ifdef _UNICODE
		CStringA strA = (char*)pReceiveBuffer;
		CStringW strOut;
		strOut = strA;
#else
		CString strOut = (char*)pReceiveBuffer;
#endif // _UNICODE
		TRACE(_T("%s:%ld\r\n"), strOut, nReceiveLengthWithByte);
	}
	else
	{
		CString strOut = _T(""), strTemp;

		for(int i = 0; i < nReceiveLengthWithByte; i++)
		{
			strTemp.Format(_T("%02x"), pReceiveBuffer[i]);
			strOut += strTemp;
		}

		TRACE(_T("%s:%ld\r\n"), strOut, nReceiveLengthWithByte);

	}
}

