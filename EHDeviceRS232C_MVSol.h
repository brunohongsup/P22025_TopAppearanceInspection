#pragma once

#include "Definition.h"


#include <queue>

#include <stdio.h>
// Error : 외부참조 Error 발생 시 솔루션에 파일 추가 하시오.

using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Miscellaneous;
using namespace Ravid::Mathematics;


//////////////////////////////////////////////////////////////////////////
//Address
#define EncoderResolution			0x0000

#define TriggerSetting				0x0004

#define TriggerOutChWidth			0x0008
#define StrobeOutChWidth			0x010C

#define SetVirtualEnCoderCH0		0x000C
#define SetVirtualEnCoderCH1		0x0010

#define SetClearCurrentPos			0x00D8
#define GetCurrentPositionX			0x00E4
#define GetCurrentPositionY			0x00E8

#define SetClearCount				0x00F8
#define GetDICount					0x00F0
#define GetTriggerCount				0x00F4
#define GetStrobeCount				0x0114

#define CameraLive					0x0118
#define	CameraLiveInterval			0x011C
#define CameraLiveStrobeDelay		0x0120

#define CameraGrab					0x012C

#define StartAxisXPositionAdd		0x0800
#define StartAxisYPositionAdd		0x0900
#define StartAxisXEnableAdd			0x0A00
#define StartAxisYEnableAdd			0x0B00
#define StartAxisXOffsetAdd			0x0C00
#define StartAxisYOffsetAdd			0x0D00

#define SaveParamMVSol				0x0F04
#define InitParamMVSol				0x0F00

//////////////////////////////////////////////////////////////////////////
//Channel Sel
#define ENABLE_CH0					0x0001
#define ENABLE_CH1					0x0002
#define ENABLE_CH2					0x0004
#define ENABLE_CH3					0x0008
//////////////////////////////////////////////////////////////////////////
//Zero Position
#define EncoderPulseZero			(long)2147483648
//////////////////////////////////////////////////////////////////////////
const unsigned char STX = 0x02;
const unsigned char ETX = 0x03;
const unsigned char UNIQUECODE = 0x7D;
const unsigned char MAGICCODE = 0x20;

const unsigned char READ = 0x52;
const unsigned char WRITE = 0x57;

const unsigned char READACK = 0x72;
const unsigned char WRITEACK = 0x77;

const unsigned char STATE = 0x00;
//////////////////////////////////////////////////////////////////////////


class CEHDeviceRS232C_MVSol : public Ravid::Framework::CEventHandlerBase
{
public:
	CEHDeviceRS232C_MVSol();
	virtual ~CEHDeviceRS232C_MVSol();


	void SetInstance(_In_ void* pInstance);
	void* GetInstance();

	virtual void OnReceivingPacket(_In_ CPacket* pPacket, _In_ Device::CDeviceBase* pDevice);

	virtual void OnModelParameterSaveChanged();

	virtual void OnDeviceInitialized(_In_ Device::CDeviceBase* pDevice);
	virtual void OnDeviceTerminated(_In_ Device::CDeviceBase* pDevice);

	void Initialize();
	void Terminate();

	enum EMVSolCommand
	{
		EMVSolCommand_SetEncoderResolution = 0,

		EMVSolCommand_TriggerSetting,

		EMVSolCommand_TriggerSelOutChWidth,
		EMVSolCommand_StrobeSelOutChWidth,

		EMVSolCommand_TriggerEnable_X,
		EMVSolCommand_TriggerEnable_Y,

		EMVSolCommand_TriggerPosition_X,
		EMVSolCommand_TriggerPosition_Y,

		EMVSolCommand_TriggerInPositionOffset_X,
		EMVSolCommand_TriggerInPositionOffset_Y,

		EMVSolCommand_ClearEndcoder,
		EMVSolCommand_ClearCount,

		EMVSolCommand_SetVirtualEncodeCh0,
		EMVSolCommand_SetVirtualEncodeCh1,

		EMVSolCommand_SetLiveModeTrigger,
		EMVSolCommand_SetLiveModeTriggerInterval,
		EMVSolCommand_SetLiveModeTriggerStrobeDelay,

		EMVSolCommand_SetManualTrigger,

		EMVSolCommand_GetCurrentPositionX,
		EMVSolCommand_GetCurrentPositionY,

		EMVSolCommand_GetDICount,
		EMVSolCommand_GetTriggerCount,
		EMVSolCommand_GetStrobeCount,

		EMVSolCommand_SetSaveParam,
		EMVSolCommand_SetInitParam,
	};

	enum EMVSol_EncoderType
	{
		EMVSol_EncoderType_DIFF = 0,
		EMVSol_EncoderType_TTL,
		EMVSol_EncoderType_VIRTUAL,
	};

	enum EMVSol_EReadAndWrite
	{
		EMVSol_EReadAndWrite_Read = 0,
		EMVSol_EReadAndWrite_Write,
	};

	enum EMVSol_StartDI
	{
		EMVSol_StartDI_CH0 = 0,
		EMVSol_StartDI_CH1,
		EMVSol_StartDI_CH2,
		EMVSol_StartDI_CH3,
		EMVSol_StartDI_CH4,
		EMVSol_StartDI_CH5,
		EMVSol_StartDI_CH6,
		EMVSol_StartDI_HIGH,
		EMVSol_StartDI_LOW,
		EMVSol_StartDI_DISABLE,
	};

	enum EMVSol_AxisCh
	{
		EMVSol_AxisCh0 = 0,
		EMVSol_AxisCh1,
		EMVSol_AxisCh2,
		EMVSol_AxisCh3,
	};

	enum EMVSol_AxisNo
	{
		EMVSol_AxisNo_X = 0,
		EMVSol_AxisNo_Y,
	};

	enum EMVSol_OutTrgCh
	{
		EMVSol_OutTrgCh0 = 1,
		EMVSol_OutTrgCh1 = 2,
		EMVSol_OutTrgCh2 = 4,
		EMVSol_OutTrgCh3 = 8,
	};

	enum EMVSol_PositionNo
	{
		EMVSol_PositionNo_0 = 0,
		EMVSol_PositionNo_1,
		EMVSol_PositionNo_2,
		EMVSol_PositionNo_3,
		EMVSol_PositionNo_4,
		EMVSol_PositionNo_5,
		EMVSol_PositionNo_6,
		EMVSol_PositionNo_7,
		EMVSol_PositionNo_8,
		EMVSol_PositionNo_9,
		EMVSol_PositionNo_10,
		EMVSol_PositionNo_11,
		EMVSol_PositionNo_12,
		EMVSol_PositionNo_13,
		EMVSol_PositionNo_14,
		EMVSol_PositionNo_15,
		EMVSol_PositionNo_16,
		EMVSol_PositionNo_17,
		EMVSol_PositionNo_18,
		EMVSol_PositionNo_19,
		EMVSol_PositionNo_20,
		EMVSol_PositionNo_21,
		EMVSol_PositionNo_22,
		EMVSol_PositionNo_23,
		EMVSol_PositionNo_24,
		EMVSol_PositionNo_25,
		EMVSol_PositionNo_26,
		EMVSol_PositionNo_27,
		EMVSol_PositionNo_28,
		EMVSol_PositionNo_29,
		EMVSol_PositionNo_30,
		EMVSol_PositionNo_31,
		EMVSol_PositionNo_32,
		EMVSol_PositionNo_33,
		EMVSol_PositionNo_34,
		EMVSol_PositionNo_35,
		EMVSol_PositionNo_36,
		EMVSol_PositionNo_37,
		EMVSol_PositionNo_38,
		EMVSol_PositionNo_39,
		EMVSol_PositionNo_40,
		EMVSol_PositionNo_41,
		EMVSol_PositionNo_42,
		EMVSol_PositionNo_43,
		EMVSol_PositionNo_44,
		EMVSol_PositionNo_45,
		EMVSol_PositionNo_46,
		EMVSol_PositionNo_47,
		EMVSol_PositionNo_48,
		EMVSol_PositionNo_49,
		EMVSol_PositionNo_50,
		EMVSol_PositionNo_51,
		EMVSol_PositionNo_52,
		EMVSol_PositionNo_53,
		EMVSol_PositionNo_54,
		EMVSol_PositionNo_55,
		EMVSol_PositionNo_56,
		EMVSol_PositionNo_57,
		EMVSol_PositionNo_58,
		EMVSol_PositionNo_59,
		EMVSol_PositionNo_60,
		EMVSol_PositionNo_61,
		EMVSol_PositionNo_62,
		EMVSol_PositionNo_63,

		EMVSol_PositionNo_Count,
	};

	bool SetMVSolBoard(int nDevNo, EMVSolCommand eCommand, long dwInData, EMVSol_EReadAndWrite eRW = EMVSol_EReadAndWrite_Write, int nPositionNo = 0, EMVSol_EncoderType eType = EMVSol_EncoderType_DIFF, EMVSol_StartDI eDI = EMVSol_StartDI_HIGH, EMVSol_AxisCh eAxisXCh = EMVSol_AxisCh0, EMVSol_AxisCh eAxisYCh = EMVSol_AxisCh0, EMVSol_OutTrgCh eOutTrg = EMVSol_OutTrgCh0);

	void SetEncoderOption(int nDeviceNumber, int nChannel, long nPulse = 1);

	void SetEnableTrgOut(int nDeviceNumber, int nChannel);
	void SetEnableTrgOutOn(int nDeviceNumber, int nChannel);
	void SetEnableTrgOutOff(int nDeviceNumber, int nChannel);

	bool SettingTrgPos(int nDeviceNumber, int nChannel, std::vector<long long> vctPostion, bool bAxisX = true, bool bClearAll = false);
	void SetResetCount(int nDeviceNumber, int nChannel, bool bEncoder = true);
	void SetFactoryInit(int nDeviceNumber);

	void SetVirtualTrg(int nDeviceNumber, int nChannel, bool bOn, bool bContinueRun = true);
	void SetTrgOption(int nDeviceNumber, int nChannel, EMVSol_OutTrgCh eOutTrgCh, long nTriggerInterVal, long nStrobeDelay = 0, long nTriggerWidth = 1000, long nStrobeWidth = 100); // nStrobeWidth 가 0 이면 Trigger 가 한번만 발생되는 문제가 생김..

protected:
	char m_cPacketSirial[1024];
	int m_nPacketsize;
	bool m_bPacketStart;
	CCriticalSection m_csSendLock;


};

