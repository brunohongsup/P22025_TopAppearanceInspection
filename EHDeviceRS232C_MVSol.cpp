#include "stdafx.h"
#include "EHDeviceRS232C_MVSol.h"



#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif


CEHDeviceRS232C_MVSol::CEHDeviceRS232C_MVSol()
{
}

CEHDeviceRS232C_MVSol::~CEHDeviceRS232C_MVSol()
{
}

void CEHDeviceRS232C_MVSol::OnReceivingPacket(CPacket * pPacket, Device::CDeviceBase * pDevice)
{
	do
	{
		if(!pPacket) break;
		if(!pDevice) break;

		CDeviceRS232C* pRS232c = dynamic_cast<CDeviceRS232C*>(pDevice);
		if(pRS232c)
		{
			if(!pRS232c->IsInitialized()) break;

			CString strClass = pDevice->GetClassNameStr();
			if(strClass.IsEmpty()) break;

			long nDeviceObjectID = pDevice->GetObjectID();


			if(!strClass.CompareNoCase(_T("Ravid::Device::CDeviceRS232C")) && nDeviceObjectID == 0)
			{


				size_t stLength;
				char* pPacketData = nullptr;
				pPacketData = (char*)pPacket->GetData(stLength);

				if(pPacketData)
				{
					bool bCheckMagic = false;
					for(int i = 0; i < stLength; ++i)
					{
						if(pPacketData[i] == 0x02)
						{
							m_nPacketsize = 0;
							m_bPacketStart = true;
						}

						if(m_bPacketStart)
						{
							m_cPacketSirial[m_nPacketsize] = pPacketData[i];
							m_nPacketsize++;
						}

						if(pPacketData[i] == 0x03)
						{
							if(m_nPacketsize < 11)
								break;

							WORD wAddress = 0;
							long dwData = 0;

							//Create Recieve Packet Total Code
							char* pTemp = new char[m_nPacketsize];
							memcpy(pTemp, m_cPacketSirial, (sizeof(char) * m_nPacketsize));

							int nInData = 0;
							for(int i = 0; i < m_nPacketsize; ++i)
							{
								if(pTemp[i] == 0x7D)
								{
									bCheckMagic = true;
									continue;
								}

								if(bCheckMagic)
								{
									m_cPacketSirial[nInData] = pTemp[i] ^ 0x20;
									bCheckMagic = false;
								}
								else
								{
									m_cPacketSirial[nInData] = pTemp[i];
								}
								nInData++;
							}

							//Copy Address & Data
							memcpy(&wAddress, m_cPacketSirial + 2, (sizeof(char) * 2));
							memcpy(&dwData, m_cPacketSirial + 4, (sizeof(char) * 4));

							CString strMsg, strData;

							bool bLog = false;
							if(EUserType_Root == CAuthorityManager::GetCurrentUserType())
								bLog = true;

							switch(wAddress)
							{
							case EncoderResolution:
								{
									strMsg.Format(_T("[Recieve MVSol1] EncoderResolution : Address [ 0x%04X ] Pulse/Unit [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case TriggerSetting:
								{
									strMsg.Format(_T("[Recieve MVSol1] TriggerSetting : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case TriggerOutChWidth:
								{
									strMsg.Format(_T("[Recieve MVSol1] TriggerOutChWidth : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case StrobeOutChWidth:
								{
									strMsg.Format(_T("[Recieve MVSol1] StrobeOutChWidth : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case SetClearCurrentPos:
								{
									strMsg.Format(_T("[Recieve MVSol1] SetClearCurrentPos : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case SetVirtualEnCoderCH0:
								{
									strMsg.Format(_T("[Recieve MVSol1] SetVirtualEnCoderCH0 : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case SetVirtualEnCoderCH1:
								{
									strMsg.Format(_T("[Recieve MVSol1] SetVirtualEnCoderCH1 : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case CameraLive:
								{
									strMsg.Format(_T("[Recieve MVSol1] CameraLive : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case CameraLiveInterval:
								{
									strMsg.Format(_T("[Recieve MVSol1] CameraLiveInterval : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case CameraLiveStrobeDelay:
								{
									strMsg.Format(_T("[Recieve MVSol1] CameraLiveStrobeDelay : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case CameraGrab:
								{
									strMsg.Format(_T("[Recieve MVSol1] CameraGrab : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							case GetCurrentPositionX:
								{
									dwData = dwData - EncoderPulseZero;
									bLog = false;
									SetMVSolBoard(nDeviceObjectID, EMVSolCommand_GetCurrentPositionX, 0, EMVSol_EReadAndWrite_Read);
								}
								break;
							case GetCurrentPositionY:
								{
									dwData = dwData - EncoderPulseZero;
									bLog = false;
									SetMVSolBoard(nDeviceObjectID, EMVSolCommand_GetCurrentPositionY, 0, EMVSol_EReadAndWrite_Read);
								}
								break;
							case GetDICount:
								{
									bLog = false;
									SetMVSolBoard(nDeviceObjectID, EMVSolCommand_GetDICount, 0, EMVSol_EReadAndWrite_Read);
								}
								break;
							case GetTriggerCount:
								{
									bLog = false;
									SetMVSolBoard(nDeviceObjectID, EMVSolCommand_GetTriggerCount, 0, EMVSol_EReadAndWrite_Read);
								}
								break;
							case GetStrobeCount:
								{
									bLog = false;
									SetMVSolBoard(nDeviceObjectID, EMVSolCommand_GetStrobeCount, 0, EMVSol_EReadAndWrite_Read);
								}
								break;
							case SaveParamMVSol:
								{
									strMsg.Format(_T("[Recieve MVSol1] SaveParamMVSol : Address [ 0x%04X ] Data [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							default:
								{
									dwData = dwData - EncoderPulseZero;
									strMsg.Format(_T("[Recieve MVSol1] PositionSettingData : Address [ 0x%04X ] Pulse/Unit [ %ld ]"), (int)wAddress, (long)dwData);
									//CLogManager::Write(0, strMsg);
								}
								break;
							}

							if(bLog)
								CLogManager::Write(0, strMsg);

							m_nPacketsize = 0;
							m_bPacketStart = false;

							if(pTemp)
							{
								delete[] pTemp;
								pTemp = NULL;
							}
						}
					}
				}
			}

		}
	}
	while(false);
}

void CEHDeviceRS232C_MVSol::OnModelParameterSaveChanged()
{
}

void CEHDeviceRS232C_MVSol::OnDeviceInitialized(Device::CDeviceBase * pDevice)
{
}

void CEHDeviceRS232C_MVSol::OnDeviceTerminated(Device::CDeviceBase * pDevice)
{
}

void CEHDeviceRS232C_MVSol::Initialize()
{

}

void CEHDeviceRS232C_MVSol::Terminate()
{

}

bool CEHDeviceRS232C_MVSol::SetMVSolBoard(int nDevNo, EMVSolCommand eCommand, long dwInData, EMVSol_EReadAndWrite eRW/* = EMVSol_EReadAndWrite_Write*/, int nPositionNo/* = 0*/, EMVSol_EncoderType eType/* = EMVSol_EncoderType_DIFF*/, EMVSol_StartDI eDI/* = EMVSol_StartDI_HIGH*/, EMVSol_AxisCh eAxisXCh/* = EMVSol_AxisCh0*/, EMVSol_AxisCh eAxisYCh/* = EMVSol_AxisCh0*/, EMVSol_OutTrgCh eOutTrg)
{
	bool bReturn = false;
	m_csSendLock.Lock();

	do
	{
		CPacket sSendPacket;

		CDeviceRS232C* pRs232c = dynamic_cast<CDeviceRS232C*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceRS232C), nDevNo));
		if(!pRs232c) break;
		if(!pRs232c->IsInitialized()) break;

		bool bMagicCode[9] = { false };
		int nMagicCodeCount = 0;

		WORD wAddress = 0;
		long dwData = 0;

		char sAddress[2];
		ZeroMemory(sAddress, sizeof(sAddress));
		char sData[4];
		ZeroMemory(sData, sizeof(sData));

		switch(eCommand)
		{
		case EMVSolCommand_SetEncoderResolution:
			{
				wAddress = EncoderResolution;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerSetting:
			{
				wAddress = TriggerSetting;
				dwData = eType | eAxisYCh << 4 | eAxisXCh << 8 | eDI << 12;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerSelOutChWidth:
			{
				wAddress = TriggerOutChWidth;
				dwData = dwInData;
				//dwData = (dwData << 4) | nPositionNo; 
			
				dwData = eOutTrg | dwData << 4;// jhjo 수정 20210224

				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_StrobeSelOutChWidth:
			{
				wAddress = StrobeOutChWidth;
				dwData = dwInData;
				dwData = (dwData << 4) | nPositionNo;
				
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerEnable_X:
			{
				wAddress = StartAxisXEnableAdd + (0x0004 * nPositionNo);
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerEnable_Y:
			{
				wAddress = StartAxisYEnableAdd + (0x0004 * nPositionNo);
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerPosition_X:
			{
				wAddress = StartAxisXPositionAdd + (0x0004 * nPositionNo);
				dwData = dwInData + EncoderPulseZero;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerPosition_Y:
			{
				wAddress = StartAxisYPositionAdd + (0x0004 * nPositionNo);
				dwData = dwInData + EncoderPulseZero;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerInPositionOffset_X:
			{
				wAddress = StartAxisXOffsetAdd + (0x0004 * nPositionNo);
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_TriggerInPositionOffset_Y:
			{
				wAddress = StartAxisYOffsetAdd + (0x0004 * nPositionNo);
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_ClearEndcoder:
			{
				wAddress = SetClearCurrentPos;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_ClearCount:
			{
				wAddress = SetClearCount;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetVirtualEncodeCh0:
			{
				wAddress = SetVirtualEnCoderCH0;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetVirtualEncodeCh1:
			{
				wAddress = SetVirtualEnCoderCH1;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetLiveModeTrigger:
			{
				wAddress = CameraLive;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetLiveModeTriggerInterval:
			{
				wAddress = CameraLiveInterval;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetLiveModeTriggerStrobeDelay:
			{
				wAddress = CameraLiveStrobeDelay;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetManualTrigger:
			{
				wAddress = CameraGrab;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetSaveParam:
			{
				wAddress = SaveParamMVSol;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		case EMVSolCommand_SetInitParam:
			{
				wAddress = InitParamMVSol;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;

		case EMVSolCommand_GetCurrentPositionX:
			{
				wAddress = GetCurrentPositionX;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;

		case EMVSolCommand_GetCurrentPositionY:
			{
				wAddress = GetCurrentPositionY;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;

		case EMVSolCommand_GetDICount:
			{
				wAddress = GetDICount;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;

		case EMVSolCommand_GetTriggerCount:
			{
				wAddress = GetTriggerCount;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;

		case EMVSolCommand_GetStrobeCount:
			{
				wAddress = GetStrobeCount;
				dwData = dwInData;
				memcpy(sAddress, &wAddress, sizeof(wAddress));
				memcpy(sData, &dwData, sizeof(dwData));
			}
			break;
		default:
			break;
		}

		char cCheckSum;
		ZeroMemory(&cCheckSum, sizeof(cCheckSum));
		char cRW;
		switch(eRW)
		{
		case EMVSol_EReadAndWrite_Read:
			cRW = READ;
			break;
		case EMVSol_EReadAndWrite_Write:
			cRW = WRITE;
			break;
		default:
			break;
		}

		cCheckSum = cRW + sAddress[0] + sAddress[1] + sData[0] + sData[1] + sData[2] + sData[3] + STATE;

		char sTemp[9] = { cRW, sAddress[0], sAddress[1], sData[0], sData[1], sData[2], sData[3], STATE, cCheckSum };

		for(int i = 0; i < 9; ++i)
		{
			if(sTemp[i] == 0x02 || sTemp[i] == 0x03 || sTemp[i] == 0x7D)
			{
				sTemp[i] = sTemp[i] ^ 0x20;
				bMagicCode[i] = true;
				nMagicCodeCount++;
			}
		}

		char pSendData[2048];
		size_t stLangth = 11 + nMagicCodeCount;


		pSendData[0] = STX;

		if(nMagicCodeCount > 0)
		{
			int nCheckSumIndex = 0;
			int nCount = 0;
			for(int i = 0; i < 9; ++i)
			{
				if(bMagicCode[i] == true)
				{
					pSendData[1 + i + nCount] = UNIQUECODE;
					pSendData[2 + i + nCount] = sTemp[i];
					nCount++;
				}
				else
				{
					pSendData[1 + i + nCount] = sTemp[i];
				}
			}
		}
		else
		{
			memcpy(pSendData + 1, &sTemp, sizeof(sTemp));
		}

		pSendData[11 + nMagicCodeCount - 1] = ETX;

		bReturn = sSendPacket.SetData(pSendData, stLangth);
		if(pRs232c->Send(sSendPacket) != ECommSendResult_OK)
			bReturn &= false;
	}
	while(false);

	m_csSendLock.Unlock();

	return bReturn;
}

void CEHDeviceRS232C_MVSol::SetEncoderOption(int nDeviceNumber, int nChannel, long nPulse)
{
/*	SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetEncoderResolution, nPulse, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);*/
}

void CEHDeviceRS232C_MVSol::SetEnableTrgOut(int nDeviceNumber, int nChannel)
{
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSetting, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_LOW, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
	Sleep(100);
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSetting, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_HIGH, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
}

void CEHDeviceRS232C_MVSol::SetEnableTrgOutOn(int nDeviceNumber, int nChannel)
{
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSetting, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_HIGH, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
}

void CEHDeviceRS232C_MVSol::SetEnableTrgOutOff(int nDeviceNumber, int nChannel)
{
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSetting, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_LOW, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
}

bool CEHDeviceRS232C_MVSol::SettingTrgPos(int nDeviceNumber, int nChannel, std::vector<long long> vctPostion, bool bAxisX, bool bClearAll)
{
	bool bReturn = false;

	do 
	{
		EMVSolCommand eComd1 = EMVSolCommand_TriggerPosition_X;
		EMVSolCommand eComd2 = EMVSolCommand_TriggerEnable_X;

		if(!bAxisX)
		{
			eComd1 = EMVSolCommand_TriggerPosition_Y;
			eComd2 = EMVSolCommand_TriggerEnable_Y;
		}

		if(bClearAll)
		{
			for(int i = 0; i < 10; i ++) // 전체 크기 64
			{
				bReturn &= SetMVSolBoard(nDeviceNumber, eComd1, 0, EMVSol_EReadAndWrite_Write, i, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);

				bReturn &= SetMVSolBoard(nDeviceNumber, eComd2, false, EMVSol_EReadAndWrite_Write, i, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
			}

			break;
		}

		int i = 0;
		for(long long nPos : vctPostion)
		{
			bReturn &= SetMVSolBoard(nDeviceNumber, eComd2, true, EMVSol_EReadAndWrite_Write, i, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
			i++;
			Sleep(10);
		}

		//Sleep(100);
		i = 0;
		for(long long nPos : vctPostion)
		{
			bReturn &= SetMVSolBoard(nDeviceNumber, eComd1, (long)nPos, EMVSol_EReadAndWrite_Write, i, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
			i++;
			Sleep(10);
		}

	} while (false);

	return bReturn;
}

void CEHDeviceRS232C_MVSol::SetResetCount(int nDeviceNumber, int nChannel, bool bEncoder)
{
	if(!bEncoder)
		SetMVSolBoard(nDeviceNumber, EMVSolCommand_ClearCount, 1);
	else
		SetMVSolBoard(nDeviceNumber, EMVSolCommand_ClearEndcoder, 1);
}

void CEHDeviceRS232C_MVSol::SetFactoryInit(int nDeviceNumber)
{
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetInitParam, 1);
}

void CEHDeviceRS232C_MVSol::SetVirtualTrg(int nDeviceNumber, int nChannel, bool bOn, bool bContinueRun)
{
	if(bContinueRun)
	{
		if(bOn)
			SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetLiveModeTrigger, bOn);
		else
		{
			SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetManualTrigger, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);

			
			Sleep(1);
				
			// 초기화...
			SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetInitParam, 1);
		}

	}
	else
	{
		SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetManualTrigger, 0, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel);
	}
	
}

void CEHDeviceRS232C_MVSol::SetTrgOption(int nDeviceNumber, int nChannel, EMVSol_OutTrgCh eOutTrgCh, long nTriggerInterVal, long nStrobeDelay, long nTriggerWidth, long nStrobeWidth)
{
	// Unit : us 
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetLiveModeTriggerInterval, nTriggerInterVal);
	Sleep(1);
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_SetLiveModeTriggerStrobeDelay, nStrobeDelay);
	Sleep(1);
/*	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSelOutChWidth, nTriggerWidth, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel, EMVSol_OutTrgCh(EMVSol_OutTrgCh0 | EMVSol_OutTrgCh1));*/ // Out 을 두개 이상 원할때..
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_TriggerSelOutChWidth, nTriggerWidth, EMVSol_EReadAndWrite_Write, 0, EMVSol_EncoderType_DIFF, EMVSol_StartDI_CH0, (EMVSol_AxisCh)nChannel, (EMVSol_AxisCh)nChannel, eOutTrgCh);
	Sleep(1);
	SetMVSolBoard(nDeviceNumber, EMVSolCommand_StrobeSelOutChWidth, nStrobeWidth);
}



