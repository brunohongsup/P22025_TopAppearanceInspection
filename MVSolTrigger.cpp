#include "stdafx.h"
#include "MVSolTrigger.h"

CMVSolTrigger::CMVSolTrigger()
{
	//Handler Initialized
	m_handleMVSolTrigger = NULL;
	//Status Value
	m_unStatus = 0;

	//Trigger Setting Default
	m_sTriggerControl.CondFactor = EEncoderCondFactor_HIGH;
	m_sTriggerControl.Correction = EEncoderCorrection_Disable;
	m_sTriggerControl.EncoderCh = EEncoderCh_0;
	m_sTriggerControl.EncoderResetFactor = EEncoderResetFactor_Disable;
	m_sTriggerControl.EncoderType = EEncoderType_DIFF;
	m_sTriggerControl.Multi = EEncoderMulti_X4;
	m_sTriggerControl.PositionDirection = EEncoderCountDir_Positive;
	m_sTriggerControl.Temp = 0;
	m_sTriggerControl.TriggerBase = EEncoderUseUnit_Count;
	m_sTriggerControl.TriggerOutputOperator = EEncoderOperator_AND;

	m_sTriggerControlVirtual = m_sTriggerControl;
	m_sTriggerControlVirtual.EncoderType = EEncoderType_Virtual;
	Initialize();
}


CMVSolTrigger::~CMVSolTrigger()
{
	Terminate();
}

void CMVSolTrigger::Initialize()
{
	m_handleMVSolTrigger = MvsEncCreateHandler();
}

void CMVSolTrigger::Terminate()
{
	if(MvsEncIsOpen(m_handleMVSolTrigger))
		MvsEncClose(m_handleMVSolTrigger);

	if(IsInitialized())
	{
		MvsEncCloseHandler(m_handleMVSolTrigger);
		m_handleMVSolTrigger = NULL;
	}
	
	MvsEncRelease();
}

bool CMVSolTrigger::IsInitialized()
{
	if(m_handleMVSolTrigger != NULL)
		return true;
	else
		return false;
}

bool CMVSolTrigger::OpenSerialPort(const char* lpszPortName)
{
	bool bReturn = MvsEncOpen(m_handleMVSolTrigger, lpszPortName);

	return bReturn;
}

bool CMVSolTrigger::CloseSerialPort()
{
	MvsEncClose(m_handleMVSolTrigger);

	return !MvsEncIsOpen(m_handleMVSolTrigger);
}

bool CMVSolTrigger::IsOpened()
{
	return MvsEncIsOpen(m_handleMVSolTrigger);
}

UINT CMVSolTrigger::SetEncoder(int nTrgNo, EEncoderDir eDir, EEncoderType eType, EEncoderCh eCh, EEncoderCountDir eUsedDir, EEncoderMulti eMulti, EEncoderOperator eOperator, EEncoderUseUnit eUsedUnit, EEncoderCorrection eCorrection, EEncoderCondFactor eCondFactor, EEncoderResetFactor eResetFactor)
{
	m_unStatus = 0;

	m_sTriggerControl.CondFactor = eCondFactor;
	m_sTriggerControl.Correction = eCorrection;
	m_sTriggerControl.EncoderCh = eCh;
	m_sTriggerControl.EncoderResetFactor = eResetFactor;
	m_sTriggerControl.EncoderType = eType;
	m_sTriggerControl.Multi = eMulti;
	m_sTriggerControl.PositionDirection = eUsedDir;
	m_sTriggerControl.Temp = 0;
	m_sTriggerControl.TriggerBase = eUsedUnit;
	m_sTriggerControl.TriggerOutputOperator = eOperator;

	if(!MvsEncIsOpen(m_handleMVSolTrigger) || nTrgNo < 0 || nTrgNo > 3)
		return 0x01;


	m_unStatus += MvsEncSetTriggerControls(m_handleMVSolTrigger, nTrgNo, &m_sTriggerControl);
	m_unStatus += MvsEncSetEncoderDirection(m_handleMVSolTrigger, nTrgNo, eDir);

	return m_unStatus;
}

UINT CMVSolTrigger::AllClearEncoderCount()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncClearAll(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::AllClearTriggerCount()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncClearTriggerAll(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::AllClearDiCount()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncClearDiAll(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::AllClearPositionCount()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncClearEncoderPositionAll(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::AllClearErrorCount()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;
	
	m_unStatus += MvsEncClearErrorCountAll(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::ResetEncoderCount(int nEncNO)
{
	m_unStatus = 0;

	if(nEncNO < 0 || nEncNO > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;


	m_unStatus += MvsEncClearEncoderPosition(m_handleMVSolTrigger, nEncNO);

	return m_unStatus;
}

UINT CMVSolTrigger::ResetTriggerCount(int nTrgNo)
{
	m_unStatus = 0;

	if(nTrgNo < 0 || nTrgNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;


	m_unStatus += MvsEncClearTriggerCount(m_handleMVSolTrigger, nTrgNo);

	return m_unStatus;
}

UINT CMVSolTrigger::SetUsedEncoderChannel(int nTriggerNo, int nCh)
{
	m_unStatus = 0;

	if(nCh < 0 || nCh > 3 || nTriggerNo < 0 || nTriggerNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;	

	m_sTriggerControl.EncoderCh = nCh;

	m_unStatus += MvsEncSetTriggerControls(m_handleMVSolTrigger, nTriggerNo, &m_sTriggerControl);
	m_unStatus += MvsEncSetEncoderResetValue(m_handleMVSolTrigger, nTriggerNo, 0);

	return m_unStatus;
}

UINT CMVSolTrigger::SetStartPosition(int nTrgNo, int nCount)
{
	m_unStatus = 0;

	if(nTrgNo < 0 || nTrgNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetTriggerPosition0(m_handleMVSolTrigger, nTrgNo, nCount);

	return m_unStatus;
}

UINT CMVSolTrigger::SetEndPosition(int nTrgNo, int nCount)
{
	m_unStatus = 0;

	if(nTrgNo < 0 || nTrgNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetTriggerPosition1(m_handleMVSolTrigger, nTrgNo, nCount);

	return m_unStatus;
}

UINT CMVSolTrigger::SetCycle(int nTrgNo, unsigned int nCount)
{
	m_unStatus = 0;

	if(nTrgNo < 0 || nTrgNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetTriggerGeneratorRoll(m_handleMVSolTrigger, nTrgNo, nCount);

	return m_unStatus;
}

UINT CMVSolTrigger::SetEncoderResolution(double dblResolution)
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetEncoderResolution(m_handleMVSolTrigger, dblResolution);

	return m_unStatus;
}

UINT CMVSolTrigger::GetTriggerCount(int nTrgNo)
{
	UINT nReturnCount = 0;
	MvsEncGetTriggerCount(m_handleMVSolTrigger, nTrgNo, &nReturnCount);

	return nReturnCount;
}

int CMVSolTrigger::GetEncoderCount(int nTrgNo)
{
	int nReturnCount = 0;
	MvsEncGetEncoderPosition(m_handleMVSolTrigger, nTrgNo, &nReturnCount);

	return nReturnCount;
}

UINT CMVSolTrigger::GetEncoderDir()
{
	UINT Status = 0;
	int nResult = 0;

	Status = MvsEncGetEncoderDirection(m_handleMVSolTrigger, 0, &nResult);

	return nResult;
}

UINT CMVSolTrigger::GetStartPosition(int nTrgNo)
{
	int nStartPosition = 0;
	m_unStatus += MvsEncGetTriggerPosition0(m_handleMVSolTrigger, nTrgNo, &nStartPosition);

	return nStartPosition;
}

UINT CMVSolTrigger::SaveMVSolFlash()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSaveFlash(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::LoadMVSolFlash()
{
	m_unStatus = 0;

	if(!MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncLoadFlash(m_handleMVSolTrigger);

	return m_unStatus;
}

UINT CMVSolTrigger::StartGenerateVirtualEncoder(int nTrgNo, int nEncNo, int nFrequency)
{
	m_unStatus = 0;

	if(nEncNo < 0 || nEncNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetTriggerControls(m_handleMVSolTrigger, nTrgNo, &m_sTriggerControlVirtual);
	m_unStatus += MvsEncSetVirtualEncoderFrequency(m_handleMVSolTrigger, nEncNo, nFrequency);

	return m_unStatus;
}

UINT CMVSolTrigger::StopGenerateVirtualEncoder(int nTrgNo, int nEncNo, int nFrequency)
{
	m_unStatus = 0;

	if(nEncNo < 0 || nEncNo > 3 || !MvsEncIsOpen(m_handleMVSolTrigger))
		return 0x01;

	m_unStatus += MvsEncSetVirtualEncoderFrequency(m_handleMVSolTrigger, nEncNo, nFrequency);
	m_unStatus += MvsEncSetTriggerControls(m_handleMVSolTrigger, nTrgNo, &m_sTriggerControl);


	return m_unStatus;
}

CMVSolTrigger::SReadDataTrigger CMVSolTrigger::GetMVSolBoardInformation(int nEncNo, int nTrgNo)
{
	SReadDataTrigger sInform;

	m_unStatus = 0;

	m_unStatus += MvsEncGetEncoderPosition(m_handleMVSolTrigger, nEncNo, &sInform.nCurrentPosition);
	m_unStatus += MvsEncGetTriggerCount(m_handleMVSolTrigger, nTrgNo, &sInform.nTriggerCount);
	m_unStatus += MvsEncGetTriggerPosition0(m_handleMVSolTrigger, nTrgNo, &sInform.nSetStartPosition);
	m_unStatus += MvsEncGetTriggerPosition1(m_handleMVSolTrigger, nTrgNo, &sInform.nSetEndPosition);
	m_unStatus += MvsEncGetTriggerGeneratorRoll(m_handleMVSolTrigger, nTrgNo, &sInform.nSetCycle);
	m_unStatus += MvsEncGetEncoderResolution(m_handleMVSolTrigger, &sInform.dblSetResolution);

	return sInform;
}

void CMVSolTrigger::TestCode()
{
	

// 	Status = MvsEncSetTriggerOutputMode(handle1, 0, 0); //모드 Auto, Time
// 	Status = MvsEncGetTriggerOutputMode(handle1, 0, &inttemp2);


 //    Status = MvsEncSetTriggerPulseWidth(handle1, 0, 1234.0); //Pulsewidth
 //    Status = MvsEncGetTriggerPulseWidth(handle1, 0, &doubletemp);

 //    Status = MvsEncSetTriggerDelay(handle1, 0, 5.5);//Delay
 //    Status = MvsEncGetTriggerDelay(handle1, 0, &doubletemp);


 //    Status = MvsEncSetVirtualEncoderFrequency(handle1, 0, 100);//가상 신호 사용 시

 //    Status = MvsEncGetDiCount(handle1, 0, &Data); //di Count값을 가져옴

	//////////////////////////////////////////////////////////////////////////
}