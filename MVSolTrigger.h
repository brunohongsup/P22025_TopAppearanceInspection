#pragma once

#include "MVSol/Include/Mvsenc.h"
#include "MVSol/Include/Mvsencenum.h"

#ifndef _WIN64
	#pragma comment(lib, "MVSol/x86/mvsenc_x32.lib")
#else
	#pragma comment(lib, "MVSol/x64/mvsenc_x64.lib")
#endif

class CMVSolTrigger
{
public:
	CMVSolTrigger();
	~CMVSolTrigger();

	enum EEncoderDir
	{
		EEncoderDir_Normal = 0,
		EEncoderDir_Reverse,
	};

	enum EEncoderCountDir
	{
		EEncoderCountDir_Disable = 0,
		EEncoderCountDir_Positive,
		EEncoderCountDir_Negative,
		EEncoderCountDir_Both,
	};

	enum EEncoderUseUnit
	{
		EEncoderUseUnit_Count = 0,
		EEncoderUseUnit_Distance,
	};

	enum EEncoderCorrection
	{
		EEncoderCorrection_Disable = 0,
		EEncoderCorrection_Enable,
	};

	enum EEncoderType
	{
		EEncoderType_DIFF = 0,
		EEncoderType_TTL,
		EEncoderType_Virtual,
	};

	enum EEncoderCh
	{
		EEncoderCh_0 = 0,
		EEncoderCh_1,
		EEncoderCh_2,
		EEncoderCh_3,
	};

	enum EEncoderMulti
	{
		EEncoderMulti_X1 = 1,
		EEncoderMulti_X2 = 2,
		EEncoderMulti_X4 = 4,
	};
	
	enum EEncoderCondFactor
	{
		EEncoderCondFactor_DI0 = 0,
		EEncoderCondFactor_DI1,
		EEncoderCondFactor_DI2,
		EEncoderCondFactor_DI3,
		EEncoderCondFactor_DI4,
		EEncoderCondFactor_DI5,
		EEncoderCondFactor_DI6,
		EEncoderCondFactor_HIGH,
		EEncoderCondFactor_LOW,
	};

	enum EEncoderResetFactor
	{
		EEncoderResetFactor_Disable = 0,
		EEncoderResetFactor_DI0,
		EEncoderResetFactor_DI1,
		EEncoderResetFactor_DI2,
		EEncoderResetFactor_DI3,
//		EEncoderResetFactor_DI4,
// 		EEncoderResetFactor_DI5,
// 		EEncoderResetFactor_DI6,
// 		EEncoderResetFactor_CW,
// 		EEncoderResetFactor_CCW,
	};

	enum EEncoderOperator
	{
		EEncoderOperator_AND = 0,
		EEncoderOperator_OR,
		EEncoderOperator_XOR,
		EEncoderOperator_NAND,
	};

	enum ETriggerOutPutMode
	{
		ETriggerOutPutMode_Auto = 0,
		ETriggerOutPutMode_Time,
	};

	typedef struct SReadDataTrigger
	{
		int nCurrentPosition;
		UINT nTriggerCount;
		int nSetCycle;
		int nSetStartPosition;
		int nSetEndPosition;

		double dblSetResolution;
	}sReadDataTrigger, *LPReadDataTrigger;

protected:
	HANDLE m_handleMVSolTrigger;
	UINT m_unStatus;
	MVS_ENC_HT_TRGCONTROL m_sTriggerControl;
	MVS_ENC_HT_TRGCONTROL m_sTriggerControlVirtual;

public:
	virtual void Initialize();									//MVSol Module Handler Initialize
	virtual void Terminate();									//MVSol Module Handler Terminate
	virtual bool IsInitialized();

	virtual bool OpenSerialPort(const char* lpszPortName);		//Serial Port Setting & Open(Ex : "COM11")
	virtual bool CloseSerialPort();

	virtual bool IsOpened();

	//사용 함수
	virtual UINT SetEncoder(int nTrgNo = 0, EEncoderDir eDir = EEncoderDir_Normal, EEncoderType eType = EEncoderType_DIFF, EEncoderCh eCh = EEncoderCh_0, EEncoderCountDir eUsedDir = EEncoderCountDir_Positive, EEncoderMulti eMulti = EEncoderMulti_X4, EEncoderOperator eOperator = EEncoderOperator_AND, EEncoderUseUnit eUsedUnit = EEncoderUseUnit_Count, EEncoderCorrection eCorrection = EEncoderCorrection_Disable, EEncoderCondFactor eCondFactor = EEncoderCondFactor_HIGH, EEncoderResetFactor eResetFactor = EEncoderResetFactor_Disable);
	
	//자주 사용할 함수
	virtual UINT AllClearEncoderCount();
	virtual UINT AllClearTriggerCount();
	virtual UINT AllClearDiCount();
	virtual UINT AllClearPositionCount();
	virtual UINT AllClearErrorCount();
	virtual UINT ResetEncoderCount(int nEncNO);
	virtual UINT ResetTriggerCount(int nTrgNo);

	virtual UINT SetUsedEncoderChannel(int nTrgNo, int nEncCh);	//출력 트리거, 입력 엔코더 Setting (nTrgNo : 0~3, nEndCh : 0~3 )
	virtual UINT SetStartPosition(int nTrgNo, int nCount);
	virtual UINT SetEndPosition(int nTrgNo, int nCount);
	virtual UINT SetCycle(int nTrgNo, unsigned int nCount);
	virtual UINT SetEncoderResolution(double dblResolution);
	//////////////////////////////////////////////////////////////////////////
	//Get 함수
	virtual UINT GetTriggerCount(int nTrgNo);
	virtual int GetEncoderCount(int nTrgNo);
	virtual UINT GetEncoderDir();
	virtual UINT GetStartPosition(int nTrgNo);

	virtual UINT SaveMVSolFlash();
	virtual UINT LoadMVSolFlash();
	//Test용 가상 엔코더 발생
	virtual UINT StartGenerateVirtualEncoder(int nTrgNo, int nEncNo, int nFrequency);
	virtual UINT StopGenerateVirtualEncoder(int nTrgNo, int nEncNo, int nFrequency = 0);


	virtual SReadDataTrigger GetMVSolBoardInformation(int nEncNo, int nTrgNo);
	//Test Code
	void TestCode();
	//////////////////////////////////////////////////////////////////////////

};

