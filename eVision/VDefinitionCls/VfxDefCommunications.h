#pragma once


// Serials

typedef struct sSerialPacket
{
	int nComPortNumber;
	int nLength;
	char* pData;
}
	SSerialPacket, *LPSerialPacket;

enum eSerialResponseType
{
	eSerialResponseNone = 0,
	eSerialResponseAck,
	eSerialResponseNack,
	eSerialResponseError,
};



// Sockets

typedef struct sSocketPacket
{
	SOCKET hSocket;
	int nLength;
	char* pData;
}
	SSocketPacket, *LPSocketPacket;

enum eSocketResponseType
{
	eSocketResponseNone = 0,
	eSocketResponseAck,
	eSocketResponseNack,
	eSocketResponseError,
};



enum eMVTechPacket_SystemCode
{
	eMVTechPacket_SystemCode_UserDefinedCode = 0,

	eMVTechPacket_SystemCode_Connecting_Packet,

	eMVTechPacket_SystemCode_OpenModel,
	eMVTechPacket_SystemCode_OpenModel_Ack,
	eMVTechPacket_SystemCode_OpenModel_Nack,

	eMVTechPacket_SystemCode_CloseModel,
	eMVTechPacket_SystemCode_CloseModel_Ack,
	eMVTechPacket_SystemCode_CloseModel_Nack,

	eMVTechPacket_SystemCode_AutoStart,
	eMVTechPacket_SystemCode_AutoStart_Ack,
	eMVTechPacket_SystemCode_AutoStart_Nack,

	eMVTechPacket_SystemCode_AutoStop,
	eMVTechPacket_SystemCode_AutoStop_Ack,
	eMVTechPacket_SystemCode_AutoStop_Nack,

	eMVTechPacket_SystemCode_AutoPause,
	eMVTechPacket_SystemCode_AutoPause_Ack,
	eMVTechPacket_SystemCode_AutoPause_Nack,

	eMVTechPacket_SystemCode_LogIn,
	eMVTechPacket_SystemCode_LogIn_Ack,
	eMVTechPacket_SystemCode_LogIn_Nack,

	eMVTechPacket_SystemCode_LogOut,
	eMVTechPacket_SystemCode_LogOut_Ack,
	eMVTechPacket_SystemCode_LogOut_Nack,

	eMVTechPacket_SystemCode_ChangePassword,
	eMVTechPacket_SystemCode_ChangePassword_Ack,
	eMVTechPacket_SystemCode_ChangePassword_Nack,

	eMVTechPacket_SystemCode_TerminateFramework,
	eMVTechPacket_SystemCode_TerminateFramework_Ack,
	eMVTechPacket_SystemCode_TerminateFramework_Nack,

	eMVTechPacket_SystemCode_RemoteControlSystem,

	eMVTechPacket_SystemCode_Count,
};

#pragma pack(push, 1)
typedef struct sMVTechPacketHeader
{
	unsigned short	usSystemCode;		// 16bit
	unsigned short	usUserCode;			// 16bit
	unsigned long	ulDataSize;			// 32bit
}
SMVTechPacketHeader, *LPMVTechPacketHeader;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct sMVTechPacket
{
	SMVTechPacketHeader	sHeader;
	char*				pData;
	SOCKET				hSocket;
}
SMVTechPacket, *LPMVTechPacket;
#pragma pack(pop)


enum eOmronDataAreaType
{
	eOmronDataAreaType_CIO = 0,
	eOmronDataAreaType_DM,
	eOmronDataAreaTypeCount,
};



#pragma pack(push, 1)
typedef struct sMelsecX64DataExchange
{
	bool bIsInitialized;
	bool bRequestInitialize;
	bool bRequestTerminate;
	bool bRequestReadDeviceBlock;
	bool bRequestReadDeviceBlock2;
	bool bRequestWriteDeviceBlock;
	bool bRequestWriteDeviceBlock2;
	char pszRequestData[5120];
}
	SMelsecX64DataExchange, *LPMelsecX64DataExchange;
#pragma  pack(pop)


enum eMVTechPacket_SubCode_RemoteControlSystem
{
	eMVTechPacket_SubCode_RemoteControlSystem_RequestScreen = 0,
	eMVTechPacket_SubCode_RemoteControlSystem_ScreenData,
	eMVTechPacket_SubCode_RemoteControlSystem_StopScreen,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleLButtonDown,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleLButtonUp,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleMButtonDown,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleMButtonUp,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleRButtonDown,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleRButtonUp,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleLButtonDblClk,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleMButtonDblClk,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleRButtonDblClk,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleMouseMove,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleMouseWheel,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleKeyDown,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleKeyUp,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleSysKeyDown,
	eMVTechPacket_SubCode_RemoteControlSystem_ConsoleSysKeyUp,

	eMVTechPacket_SubCode_RemoteControlSystem_Count,
};

#pragma pack(push, 1)
typedef struct sSoftServoX64DataExchange
{
	bool bRequestAllocate;
	bool bRequestClear;
	void* pInstance;
}
SSoftServoX64DataExchange, *LPSoftServoX64DataExchange,
SSoftServoX86DataExchange, *LPSoftServoX86DataExchange;
#pragma  pack(pop)
