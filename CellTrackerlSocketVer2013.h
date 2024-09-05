#pragma once
#include "./VTECSLoad/LoadVTECSDll.h"
#include "DefineStruct.h"
#include "./DefineProtocol/PLCProtocol_Type_1.h"
#include "./DefineProtocol/PLCProtocol_Type_2.h"
#include "Definition.h"
#ifndef USER_DEFINE_MESSAGE
#define USER_DEFINE_MESSAGE

#define ID_LENGTH 10

#endif // !USER_DEFINE_MESSAGE

#pragma pack(1)
struct typeTest
{
	char	strID[10]; //문자열 128
	INT32	intCount;    //숫자형
	BYTE	byteData[70]; //바이트형 배열
	UINT32	uintCount[4];  //유니트형 배열
};
#pragma pack()

using namespace CDefinition;
using namespace LOADVTECSDll_GROUP;

class CCellTrackerSocketVer2013
{
// 생성입니다.
public:
	CCellTrackerSocketVer2013(void);

	~CCellTrackerSocketVer2013(void);

	enum eDataProtocol
	{
		eDataProtocol_MgL = 0,
		eDataProtocol_DataVer = 6,
		eDataProtocol_CellIdCount = 8,
		eDataProtocol_LotID = 12,
		eDataProtocol_CellID1 = eDataProtocol_LotID + ID_LENGTH,
		eDataProtocol_CellID2 = eDataProtocol_CellID1 + ID_LENGTH,

		eDataProtocol_End,
	};


private:

	CString				m_strSocketEvent;

	LoadVTECSDll		m_LoadVTECSDll;

	CCriticalSection	m_CriticalDLL;

	stDllStatus			m_CurrentDllStatus, m_OldDllStatus;

	bool				m_bIPConfigShow = false;

	bool				m_blastOldConnectStatus = false;

	typeTest			m_stBinaryTest;

	std::deque<sCellTrackerData*> m_deqData;

private:

	//dll 종료 함수
	//인자1	:	프로그램 종료전 마지막에 호출할 때 true
	//반환	:	정상적이면 TRUE
	bool ExitDll(void)
	{
		return m_LoadVTECSDll.DllSocket_Unitialize();
	}

	//dll 상태값에 따라 화면 표시 업데이트
	//인자1	;	없음
	//반환	:	정상적이면 TRUE
	//void SubDisplayUpdate(void);

	/// <summary>
	/// 통신 연결 변경되면 호출되는 함수
	/// </summary>
	/// <param name="strIPAddress4">통신 이벤트 발생 내역</param>
	/// <param name="nPortNumber">포트 번호</param>
	/// <param name="nStatus">연결 상태를 int로 표현</param>
	/// <param name="nErrorCode">오류 코드 번호</param>
	/// <returns>0</returns>
	static UINT WINAPI DllSocket_ConnectStatus(char* strEventContents, int nStatus, int nErrorCode);


	/// <summary>
	/// 통신 수신이 되면 호출되는 함수
	/// </summary>
	/// <param name="pReceiveBuffer">수신받은 버퍼 접근 주소</param>
	/// <param name="nReceiveLengthWithByte">수신받은 버퍼 개수</param>
	/// <returns>0</returns>
	static UINT WINAPI DllSocket_ReceiveDataBuffer(unsigned char* pReceiveBuffer, int nReceiveLengthWithByte);


	/// <summary>
	/// 통신 연결 상태 gui 표시처리용 함수
	/// </summary>
	/// <param name="strEventContents"></param>
	/// <param name="nStatus"></param>
	/// <param name="nErrorCode"></param>
	void PostConnectStatus(char* strEventContents, int nStatus, int nErrorCode);


	/// <summary>
	/// 통신 수신이 되면 호출되는 하부 처리 함수
	/// </summary>
	/// <param name="pReceiveBuffer">수신받은 버퍼 접근 주소</param>
	/// <param name="nReceiveLengthWithByte">수신받은 버퍼 개수</param>
	void SubReceiveCallBackProcess(unsigned char* pReceiveBuffer, int nReceiveLengthWithByte);

	///////////////////////////////////////////

	void Receive_Parsing(unsigned char * pReceiveBuffer, int nReceiveLengthWithByte)
	{
		do
		{
			sCellTrackerData* sData = new sCellTrackerData();
			for(int i = 0; i < nReceiveLengthWithByte;)
			{
				bool bEnd = false;
				switch(eDataProtocol(i))
				{
				case CCellTrackerSocketVer2013::eDataProtocol_MgL:
					{
						sData->nMsL = pReceiveBuffer[i];
						i = eDataProtocol_DataVer;
					}
					break;
				case CCellTrackerSocketVer2013::eDataProtocol_DataVer:
					{
						sData->nDataVer = pReceiveBuffer[i];
						i = eDataProtocol_CellIdCount;
					}
					break;
				case CCellTrackerSocketVer2013::eDataProtocol_CellIdCount:
					{
						sData->nCellIDCount = pReceiveBuffer[i];
						i = eDataProtocol_LotID;

					}
					break;
				case CCellTrackerSocketVer2013::eDataProtocol_LotID:
				case CCellTrackerSocketVer2013::eDataProtocol_CellID1:
				case CCellTrackerSocketVer2013::eDataProtocol_CellID2:
					{
						CString strOut = _T(""), strTemp;

						for(int j = i; j < nReceiveLengthWithByte; j++)
						{
							strTemp.Format(_T("%c"), pReceiveBuffer[j]);
							strOut += strTemp;

							if(j == eDataProtocol_LotID + ID_LENGTH - 1)
							{
								sData->strLotID = strOut;
								strOut = _T("");
							}
							else if(j == eDataProtocol_CellID1 + ID_LENGTH - 1)
							{
								sData->strCellID[0] = strOut;
								strOut = _T("");

								if(sData->nCellIDCount == 1)
									break;
							}
							else if(j == eDataProtocol_CellID2 + ID_LENGTH - 1)
							{
								sData->strCellID[1] = strOut;
								break;
							}
						}


						i = eDataProtocol_End;
					}
					break;
				case CCellTrackerSocketVer2013::eDataProtocol_End:
					bEnd = true;
					break;
				default:
					break;
				}

				if(bEnd)
					break;

			}

			AddDataInfo(sData);
		}
		while(false);
	}

	void AddDataInfo(sCellTrackerData* pInfo)
	{
		m_CriticalDLL.Lock();
		m_deqData.push_back(pInfo);
		m_CriticalDLL.Unlock();

	}


public:
	bool IsConnectStatus(){return m_blastOldConnectStatus;}

	BOOL Lock(){ return m_CriticalDLL.Lock(); }
	BOOL Unlock() { return m_CriticalDLL.Unlock(); }

	void Intitialize()
	{
		ClearDataInfo();
	}

	void Terminate()
	{
		m_CriticalDLL.Lock();
		ClearDataInfo();

	 	ExitDll();
		m_CriticalDLL.Unlock();
	}

	void ToggleShowHide()
	{
		m_CriticalDLL.Lock();
		m_LoadVTECSDll.DllSocket_IPConfigToggleShow(false, true);
		m_CriticalDLL.Unlock();
	}

	void ClearDataInfo()
	{
		while(m_deqData.size())
		{
			sCellTrackerData* pInfo = m_deqData.front();
			m_deqData.pop_front();
			delete pInfo;
		}
	}

	std::deque<sCellTrackerData*>* GetDataQueue()
	{
		return&m_deqData;
	}

	void EnableQueueBuffer(CString strDllPathName)
	{
		m_CriticalDLL.Lock();

		if(m_LoadVTECSDll.DllSocket_Initialize(strDllPathName, DllSocket_ConnectStatus, DllSocket_ReceiveDataBuffer, false))
		{
			m_CurrentDllStatus.bInitialzed = true;
		}
		//ConnectionStatusCallFuntion : 통신 연결 상태 변경시 호출되는 call back 함수
		//ReceiveFromEthernet : 수신이 되면 호출되는 call back 함수

		m_CriticalDLL.Unlock();
	}

	void Send(sCellTrackerData sData)
	{
		// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
		m_CriticalDLL.Lock();
		PLC_PROTOCOL_DEFINE::TYPE_2::stProtocol_Type_2	testSend;
		const int nSize = (int)sizeof(testSend);
		testSend._nCellIDNumber = sData.nCellIDCount;

		testSend._stLotID.SetLotID((CStringA)sData.strLotID);
		testSend._stCellID[0].SetCellID((CStringA)sData.strCellID[0]);
		testSend._stCellID[1].SetCellID((CStringA)sData.strCellID[1]);

		m_LoadVTECSDll.DllSocket_Send((byte*)&testSend, nSize);
		m_CriticalDLL.Unlock();
	}
};
extern CCellTrackerSocketVer2013* pTempLoad;
