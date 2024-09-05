#include "stdafx.h"
#include "SequenceMain.h"

//////////////////////////////////////////////////////////////////////////
#include "EventHandlerMain.h"
#include "EventHandlerCamera.h"
#include "CSaveData.h"
#include "CSaveImage.h"
#include "SaveNGInfo.h"
//////////////////////////////////////////////////////////////////////////


CSequenceMain::CSequenceMain()
{
	m_eHandlerNo = CDefinition::EEventHandlerNo_Main;
	SetStep(EStep_Idle);
}

CSequenceMain::CSequenceMain(CDefinition::EEventHandlerNo eHandlerNo)
{
	m_eHandlerNo = eHandlerNo;
	SetStep(EStep_Idle);
}

CSequenceMain::~CSequenceMain()
{
	m_eHandlerNo = CDefinition::EEventHandlerNo_Main;
	SetStep(EStep_Idle);
}

void CSequenceMain::OnStart()
{
	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

	CString strMsg;
	strMsg.Format(_T("[sequence] Start Sequence"));
	CLogManager::Write(ELogType_Sequence, strMsg);

/*	pHandlerMain->LightOn(true);*/
	m_bFlgRest = false;

	pHandlerMain->MelsecWriteIO(EMelsecBitOut_AutoMode, true);
	SetStep(EStep_Idle);
}

void CSequenceMain::OnPause()
{
	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

	OnStop();
}

void CSequenceMain::OnStop()
{
	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;
	CString strMsg;

	strMsg.Format(_T("[sequence] Stop Sequence"));
	CLogManager::Write(ELogType_Sequence, strMsg);
	pHandlerMain->LightOn(false);
	pHandlerMain->MelsecWriteIO(EMelsecBitOut_InspectEnd, true);
	pHandlerMain->MelsecWriteIO(EMelsecBitOut_AutoMode, false);

	Sleep(500);

	SetInitializeIO();

	SetStep(EStep_Idle);
}

bool CSequenceMain::Work()
{
	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return false;
	CEventHandlerCamera* pHandlerCamera[ECameraNum_Count] = { nullptr, };
	for(int i = 0; i < ECameraNum_Count; i++)
	{
		pHandlerCamera[i] = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + i));
		if(!pHandlerCamera[i])
			return false;
	}

	CFormViewMain* pFormMain = dynamic_cast<CFormViewMain*>(CUIManager::FindView(typeid(CFormViewMain)));
	if(!pFormMain)
		return false;

	SdefaultModelParam modelParam;
	if(!pHandlerMain->GetModelParam(modelParam))
		return false;
	
	CString strMsg;

	if (pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_MachineStopVisionReset) && !m_bFlgRest)
	{
		m_bFlgRest = true;
		strMsg.Format(_T("[sequence] Step Reset IO On"));
		CLogManager::Write(ELogType_Sequence, strMsg);
		SetStep(EStep_Idle);

	}
	else if (!pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_MachineStopVisionReset) && m_bFlgRest)
	{
		strMsg.Format(_T("[sequence] Step Reset IO Off"));
		CLogManager::Write(ELogType_Sequence, strMsg);
		m_bFlgRest = false;
	}


	switch(GetStep())
	{
	case EStep_Idle:
		{
			strMsg.Format(_T("[sequence] Step Idle"));
			CLogManager::Write(ELogType_Sequence, strMsg);

			ZeroMemory(m_bFlg, sizeof(m_bFlg));

			SetInitializeIO();
			//pHandlerMain->SetMVSolTrigger(0, EPacketDir_Send_Foward);

			SetStep(EStep_Ready);
		}
		break;
	case EStep_Ready:
		{
			strMsg.Format(_T("[sequence] Step Ready"));
			CLogManager::Write(ELogType_Sequence, strMsg);

			bool bCheckFlg = true;
			bCheckFlg &= pHandlerCamera[ECameraNum_Upper]->GrabStop();
			bCheckFlg &= pHandlerCamera[ECameraNum_Lower]->GrabStop();

			if(!bCheckFlg)
			{
				m_eErrorType = EError_GrabSetting_Camera;
				SetStep(EStep_Error);
				break;
			}

			pHandlerMain->AllClearMVSolTrigger();

// 			bCheckFlg &= pHandlerMain->SetMVSolInitialize(ERS232C_MVSol1, 0);
// 			bCheckFlg &= pHandlerMain->SetMVSolPreReady(ERS232C_MVSol1, 0);	
// 			bCheckFlg &= pHandlerMain->SetMVSolTrigger(ERS232C_MVSol1, 0);
			if(!bCheckFlg)
			{
				m_eErrorType = EError_GrabSetting_Trriger;
				SetStep(EStep_Error);
				break;
			}

			bCheckFlg &= pHandlerMain->LightControllerSetting();
			bCheckFlg &= pHandlerMain->LightOn(false);
			if(!bCheckFlg)
			{
				m_eErrorType = EError_LightControlSetting;
				SetStep(EStep_Error);
				break;
			}

			strMsg.Format(_T("[sequence] Device Setting End"));
			CLogManager::Write(ELogType_Sequence, strMsg);

			SetStep(EStep_Wait);

		}
		break;

	case EStep_Wait:
		{
			if(pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_GrabReady) && !m_bFlg[EStep_Wait])
			{
				m_pcTackTime.Start();
				strMsg.Format(_T("[sequence] Step Wait - BitIO Grab Ready ON"));
				CLogManager::Write(ELogType_Sequence, strMsg);
				m_bFlg[EStep_Wait] = true;

				for(int i = 0; i < ECameraNum_Count; i++)
				{
					CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), i));

					pImageView->ClearLayerDrawingObject();
				}

				pHandlerMain->SetSignalTime();
				pHandlerMain->SetForSPCTime(ESPCTimeLogType_Start);
				// Camera Ready 
				bool bCheckFlg = true;

				for(int i = 0; i < ECameraNum_Count; i++)
				{
					pHandlerCamera[i]->SetInspectionEnd(InspectKind_Measurement, false);
					pHandlerCamera[i]->SetInspectionEnd(InspectKind_FindDefect, false);
					pHandlerCamera[i]->SetGrabCount(0);
					pHandlerCamera[i]->SetGrabEnd(false);
					//bCheckFlg &= pHandlerCamera[i]->GrabStart();
					pHandlerMain->SetMVSolTrigger(i, EPacketDir_Send_Foward);
					pHandlerCamera[i]->ResetCameraImageBuffer();
				}

// 				bCheckFlg &= pHandlerMain->LightOn(true);
// 				if(!bCheckFlg)
// 				{
// 					m_eErrorType = EError_LightControlSetting;
// 					SetStep(EStep_Error);
// 					break;
// 				}

				pHandlerMain->MelsecWriteIO(EMelsecBitOut_GrabReadyEnd, true);
				SetStep(EStep_GrabStartWait);

			}
			else if(!pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_GrabReady) && m_bFlg[EStep_Wait])
			{
				strMsg.Format(_T("[sequence] Step Wait - BitIO Grab Ready OFF"));
				CLogManager::Write(ELogType_Sequence, strMsg);
				m_bFlg[EStep_Wait] = false;
			}
		}
		break;
	case EStep_GrabStartWait:
		{
			if(pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_GrabStart) && !m_bFlg[EStep_GrabStartWait])
			{
				strMsg.Format(_T("[sequence] Step Wait - BitIO Grab Start ON"));
				CLogManager::Write(ELogType_Sequence, strMsg);
				m_bFlg[EStep_GrabStartWait] = true;

				// Trigger Ready 
				bool bCheckFlg = true;

				//jhnam
				//GrabStart신호가 안들어오면 조명 계속 켜져있어, Start 신호 이후에 조명 킴
				bCheckFlg &= pHandlerMain->LightOn(true);
				if (!bCheckFlg)
				{
					m_eErrorType = EError_LightControlSetting;
					SetStep(EStep_Error);
					break;
				}

				pHandlerMain->AllClearMVSolTrigger();

				for(int i = 0; i < ECameraNum_Count; i++)
					bCheckFlg &= pHandlerCamera[i]->GrabStart();

				if(!bCheckFlg)
				{
					m_eErrorType = EError_GrabSetting_Camera;
					SetStep(EStep_Error);
					break;
				}

				pHandlerMain->MelsecWriteIO(EMelsecBitOut_MOVE, true);
				m_pcTimeOut.Start();

				SetStep(EStep_GrabEnd);

			}
			else if(!pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_GrabStart) && m_bFlg[EStep_GrabStartWait])
			{
				strMsg.Format(_T("[sequence] Step Wait - BitIO Grab Start OFF"));
				CLogManager::Write(ELogType_Sequence, strMsg);
				m_bFlg[EStep_GrabStartWait] = false;
			}
		}
		break;
	case EStep_GrabEnd:
		{
			bool bEndCheckFlg = true;
			for(int i = 0; i < ECameraNum_Count; i++)
				bEndCheckFlg &= pHandlerCamera[i]->IsGrabEnd();

			if(bEndCheckFlg)
			{

				strMsg.Format(_T("[sequence] Step Grab End"));
				CLogManager::Write(ELogType_Sequence, strMsg);

				m_pcTimeOut.Start();
 				pHandlerMain->MelsecWriteIO(EMelsecBitOut_GrabEnd, true); // Grab End 신호 없음.

				bool bCheckFlg = true;
				//bCheckFlg &= pHandlerMain->TriggerEnableOff(ERS232C_MVSol1, 0);
				bCheckFlg &= pHandlerCamera[ECameraNum_Upper]->GrabStop();
				bCheckFlg &= pHandlerCamera[ECameraNum_Lower]->GrabStop();
				//2호기 추가


				if(!bCheckFlg)
				{
					m_eErrorType = EError_GrabSetting_Camera;
					SetStep(EStep_Error);
					break;
				}

				bCheckFlg &= pHandlerMain->LightOn(false);

				if (!bCheckFlg)
				{
					m_eErrorType = EError_LightControlSetting;
					SetStep(EStep_Error);
					break;
				}


				SetStep(EStep_InspectEnd);
			}

			if(ETimeOut_GrabEnd < m_pcTimeOut.GetElapsedTime())
			{
				m_eErrorType = EError_GrabEndTimeOut;
				SetStep(EStep_Error);
			}
		}
		break;
	case EStep_InspectEnd:
		{
			bool bEndCheckFlg = true;
			for(int i = 0; i < ECameraNum_Count; i++)
			{
				bEndCheckFlg &= pHandlerCamera[i]->IsInspectionEnd(InspectKind_Measurement);
				bEndCheckFlg &= pHandlerCamera[i]->IsInspectionEnd(InspectKind_FindDefect);
			}

			if(bEndCheckFlg)
			{
				CEventHandlerMain::ECellDataReceivedStatus eCellDataStatus = pHandlerMain->HasReceivedCellData();
				if(eCellDataStatus == CEventHandlerMain::ECellDataReceivedStatus::NotReceived)
				{

					if(m_pcStepTime.GetElapsedTime() <= 500)
					{
						break;
					}
					else
					{
						strMsg.Format(_T("[sequence] Step Inspection End - Has NOT Received Cell Data - MOVING ON TO THE NEXT STEP"));
						CLogManager::Write(ELogType_Sequence, strMsg);
					}
				}
				else
				{
					pHandlerMain->SetReceivedCellDataStatus(CEventHandlerMain::ECellDataReceivedStatus::NotReceived);
					strMsg.Format(_T("[sequence] Step Inspection End - Has Received Cell Data "));
					CLogManager::Write(ELogType_Sequence, strMsg);
				}


				float fProcessTime = m_pcTackTime.GetElapsedTime();
				strMsg.Format(_T("[sequence] Step Inspection End (%.3lfms)"), fProcessTime);
				CLogManager::Write(ELogType_Sequence, strMsg);

				strMsg.Format(_T("%.3lf"), fProcessTime);
				pHandlerMain->SetForSPCTime(ESPCTimeLogType_InspProcessingTime, strMsg);

				m_pcTimeOut.Start();

				// 검사 종료
				SetStep(EStep_SendResult);
			}

			if(ETimeOut_InspectionEnd < m_pcTimeOut.GetElapsedTime())
			{
				bool bResultM[2] = { false, false };
				bool bResultD[2] = { false, false };

				for(int i = 0; i < ECameraNum_Count; i++)
				{
					bResultM[i] = pHandlerCamera[i]->IsInspectionEnd(InspectKind_Measurement);
					bResultD[i] = pHandlerCamera[i]->IsInspectionEnd(InspectKind_FindDefect);
				}

				strMsg.Format(_T("[sequence] EError_InspectionTimeOut Um[%d]Lm[%d]Ud[%d]Ld[%d]"), bResultM[0], bResultM[1], bResultD[0], bResultD[1]);

				CLogManager::Write(ELogType_Sequence, strMsg);

				m_eErrorType = EError_InspectionTimeOut;
				SetStep(EStep_Error);
			}
		}
		break;
	case EStep_SendResult:
		{
			strMsg.Format(_T("[sequence] Step Send Result (%.3lfms)"), m_pcTackTime.GetElapsedTime());
			CLogManager::Write(ELogType_Sequence, strMsg);

			bool bResult[ECameraNum_Count] = { true, true };

			bool bNGTypeMeasurement = false;
			//////////////////////////////////////////////////////////////////////////
			//HSSHIM ADDED
			bool bShouldSendAppearanceNG = false;
			bool bMeasurementNG[ECameraNum_Count]{false};
			bool bDefectNG[ECameraNum_Count]{false};
			SCellTrackerData sCellTrackingData = pHandlerMain->GetCellTrackingData();
			//////////////////////////////////////////////////////////////////////////

			// Temp 231117 jhjo it has to delete when comes cell tracking machine
// 			CString strTempData = pHandlerMain->MelsecReadWordData(CDefinition::EMelsecWordIn_TempID1, 4);
// 			strMsg.Format(_T("[sequence] Temp ID - %s"), strTempData);
// 			CLogManager::Write(ELogType_Sequence, strMsg);
// 			sCellTrackingData.strCellID[0] = strTempData;

			////////// -----------/////////////////////

			for(int i = 0; i < ECameraNum_Count; i++)
			{			
				bool bNGTypeDefect = false;
				CInspectionResult cInM;
				CInspectionResult cInD;
				cInM = pHandlerCamera[i]->GetInspectionResult(InspectKind_Measurement);
				cInD = pHandlerCamera[i]->GetInspectionResult(InspectKind_FindDefect);

				CFormViewMain::ETabPage ePage = CFormViewMain::ETabPage(CFormViewMain::ETabPage_Upper + i);
				std::vector<SMeasuredData> vctResult = pHandlerCamera[i]->GetMeasuredData();
				CTime cSignalTime = pHandlerMain->GetSignalTime();

				if(CInspectionResult::EResultType_OK != cInD.GetResultType())
				{
					bNGTypeDefect = true;
					bDefectNG[i] = true;
				}

				if(CInspectionResult::EResultType_OK != cInM.GetResultType())
				{
					bNGTypeMeasurement = true;
					bMeasurementNG[i] = true;
				}

				if(bNGTypeDefect || bNGTypeMeasurement)
				{
					int nNGNumOffset = 2;
					pFormMain->SettingTotalSheet(CFormViewMain::ETabPage(ePage + nNGNumOffset), sCellTrackingData,vctResult, cSignalTime, bNGTypeDefect);
					bResult[i] = false;
				}
				else
				{
					pFormMain->SettingTotalSheet(ePage, sCellTrackingData, vctResult, cSignalTime, bNGTypeDefect);
				}
				//////////////////////////////////////////////////////////////////////////
				//HSSHIM ADDED
				if(bNGTypeDefect)
				{
					bShouldSendAppearanceNG = true;
				}

				//////////////////////////////////////////////////////////////////////////
			}
			//////////////////////////////////////////////////////////////////////////
			//HSSHIM ADDED
			int nDefectStatus = (int)CSaveNGInfo::EDefectStatus::Default;
			if(bDefectNG[ECameraNum_Upper])
			{
				nDefectStatus |= (int)CSaveNGInfo::EDefectStatus::UpperNG;
			}
			if(bDefectNG[ECameraNum_Lower])
			{
				nDefectStatus |= (int)CSaveNGInfo::EDefectStatus::LowerNG;
			}
			if(nDefectStatus != 0 || bNGTypeMeasurement)
			{
				ISaveInfo* pNGInfo = new CSaveNGInfo(pHandlerMain->GetSignalTime(), sCellTrackingData, pHandlerCamera[ECameraNum_Upper]->GetMeasuredData(), pHandlerCamera[ECameraNum_Lower]->GetMeasuredData(), (CSaveNGInfo::EDefectStatus)(nDefectStatus));
				pHandlerMain->PushSaveInfo(pNGInfo);
			}
			//////////////////////////////////////////////////////////////////////////

			//////////////////////////////////////////////////////////////////////////
			if(bResult[ECameraNum_Upper] && bResult[ECameraNum_Lower])
			{
				//All Stakced Cells are passed
				pHandlerMain->MelsecWriteIO(EMelsecBitOut_OK, true);
				CLogManager::Write(0, _T("Send Data : OK"));
			}
			else
			{
				pHandlerMain->MelsecWriteIO(EMelsecBitOut_NG, true);
				CLogManager::Write(0, _T("Send Data : ng"));
				if(bShouldSendAppearanceNG)
				{
					pHandlerMain->MelsecWriteIO(EMelsecBitOut_AppearenceNG, true);
					
				}
			}
			//////////////////////////////////////////////////////////////////////////
			pHandlerMain->MelsecWriteIO(EMelsecBitOut_InspectEnd, true);

			CString strResult = bResult[ECameraNum_Upper] && bResult[ECameraNum_Lower] ? _T("OK") : _T("NG");
			// 결과 외 정보 .

			pHandlerMain->MelsecWriteIO(EMelsecBitOut_Complete, true);


			// data display and save.
			sFormMachineMonitoring sFormData;

			sFormData.bResult = bResult[ECameraNum_Upper] && bResult[ECameraNum_Lower];
			sFormData.strModel = pHandlerMain->GetModelName();
			sFormData.strLotID = _T("-");
			sFormData.bNGTypeMeasurement = bNGTypeMeasurement;

			pFormMain->SettingMachineMonitorSheet(sFormData);
			pFormMain->SettingMeasurementSheet(pHandlerCamera[ECameraNum_Upper]->GetMeasuredData());

			for(int i = 0; i < ECameraNum_Count; i++)
			{
				ISaveInfo* pSaveData = new CSaveData(pHandlerMain->GetSignalTime(), sCellTrackingData,pHandlerCamera[i]->GetObjectID(), pHandlerCamera[i]->GetMeasuredData());
				pHandlerMain->PushSaveInfo(pSaveData);
				pHandlerMain->SaveSQLiteDataFile(i, pHandlerCamera[i]->GetMeasuredData());

				CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), i));

				if(pImageView)
				{
					CRavidImage* pImgInfo = pImageView->GetImageInfo();
					if(pImgInfo)
					{
						ISaveInfo* pSaveImg = new CSaveImage(pHandlerMain->GetObjectID(), pHandlerMain->GetSignalTime(),sCellTrackingData, (ECameraNum)i, bResult[i], pImgInfo, pImageView);
						pHandlerMain->PushSaveInfo(pSaveImg);
					}
				}
			}


			pHandlerMain->SetForSPCTime(ESPCTimeLogType_End);
			float fTackTime = m_pcTackTime.GetElapsedTime();
			strMsg.Format(_T("%.3lf"), fTackTime);
			pHandlerMain->SetForSPCTime(ESPCTimeLogType_InspTackTime, strMsg);
			
			CLogManager::Write(ELogType_Sequence, _T("[sequence] Data Send End to PLC : %0.3lf ms"), fTackTime);

			// SCP + 
			if(true)
			{
				sJSonGeneralData sGenData;
				sGenData.lCellCount = pFormMain->GetProductTotalCount();
				sGenData.lDimensionNGCount = pFormMain->GetProductMeasurementNGCount();
				sGenData.ldefectNGCount = pFormMain->GetProductDefectNGCount();
				sGenData.lLineNumber = 1;
				sGenData.lMachineNumber = 1;
				sGenData.lLaneNumber = 1;

				sGenData.strVisionType = _T("TOP-BACK-APPEARANCE");
				sGenData.strProcessGroup = _T("ASSEMBLY");
				sGenData.strProcessName = _T("STK");
				sGenData.strCameraType = _T("LINE");
				sGenData.strInsPosition = _T("ELETRODE");

				sGenData.strNgOut = _T("Y");
				sGenData.strProcessDirction = _T("RIGHT");

				sGenData.strVirtualCellID = _T("VirtualID8811");//sCellTrackingData.strCellID[0];
				sGenData.strCellID = _T("CellID8811");//sCellTrackingData.strCellID[0];
				sGenData.strLotID = _T("LotID8811");//sCellTrackingData.strLotID;
				sGenData.strRecipeID = pHandlerMain->GetModel()->GetModelName();
				sGenData.strEqpID = _T("STK_88"); // Eq ID
				sGenData.strEqpIns = _T("STK_11"); //Eq Ins ID
			
				sGenData.strInput_Time = pHandlerMain->GetForSPCTime(ESPCTimeLogType_Start);
				sGenData.strOutput_Time = pHandlerMain->GetForSPCTime(ESPCTimeLogType_End);
				sGenData.strTackTime = pHandlerMain->GetForSPCTime(ESPCTimeLogType_InspTackTime);
				sGenData.strInspProcessingTime = pHandlerMain->GetForSPCTime(ESPCTimeLogType_InspProcessingTime);

				sGenData.bCellJudge = bResult[ECameraNum_Upper] && bResult[ECameraNum_Lower];
				
				pHandlerMain->SetJsonDimensionDataClear();
				pHandlerMain->SetJsonDefectDataClear();
				pHandlerMain->SetJsonIQDataClear();
				pHandlerMain->SetJsonGeneralDataClear();

				for(int i = 0; i < ECameraNum_Count; i++)
				{
					sGenData.eCamNum = (ECameraNum)i;

					sGenData.bDimensionJudge = bMeasurementNG[i];
					sGenData.bDefectJudge = bDefectNG[i];

					pHandlerMain->SetForJson_IQInfo(sGenData);

					pHandlerMain->SetForJsonInspectiontData(sGenData, pHandlerCamera[i]->GetMeasuredData(), pHandlerCamera[i]->GetDefectedData());
				}
			
				pHandlerMain->SaveJsonData();
			}
	
			strMsg.Format(_T("[sequence] Step Cycle End Wait (%s)"), strResult);
			CLogManager::Write(ELogType_Sequence, strMsg);
			SetStep(EStep_CycleEndWait);
			//2호기 TimeOut추가
			m_pcTimeOut.Start();
		}
		break;
	case EStep_CycleEndWait:
		{

			if(pHandlerMain->MelsecGetDataIO(EAddressType_Input, EMelsecBitIn_InspEndAck) && !m_bFlg[EStep_CycleEndWait])
			{
				m_bFlg[EStep_CycleEndWait] = true;

				strMsg.Format(_T("[sequence] Step CycleEndWait - BitIO Cycle End ON"));
				CLogManager::Write(ELogType_Sequence, strMsg);
				m_bFlg[EMelsecBitIn_OneCyleEnd] = true;

				//pHandlerMain->MelsecWriteIO(EMelsecBitOut_InspectEnd, false, 3); // 3개 OFF

				CLogManager::Write(ELogType_Sequence, _T("[sequence] Cycle End Ack On"));

				SetStep(EStep_End);
			}
		}
		break;
	case EStep_End:
		{
			strMsg.Format(_T("[sequence] Step End (Cycle End)"));
			CLogManager::Write(ELogType_Sequence, strMsg);
			m_bFlg[EStep_CycleEndWait] = false;

			bool bCheckFlg = true;
			bCheckFlg &= pHandlerMain->LightOn(false);

			//2호기 조명 테스트
			if (bCheckFlg)
				CLogManager::Write(0, _T("Light Off Signal"));

			if(!bCheckFlg)
			{
				m_eErrorType = EError_LightControlSetting;
				SetStep(EStep_Error);
				break;
			}


			SetInitializeIO();

			SetStep(EStep_Wait);
		}
		break;
	case EStep_Error:
		{
			switch(m_eErrorType)
			{
			case EError_LightControlSetting:
				strMsg.Format(_T("[sequence] Step Error Light Control Setting"));
				break;
			case EError_GrabSetting_Trriger:
				strMsg.Format(_T("[sequence] Step Error Grab Trigger Setting"));
				break;
			case EError_GrabSetting_Camera:
				strMsg.Format(_T("[sequence] Step Error Grab Camera Setting"));
				break;
			case EError_GrabEndTimeOut:
				strMsg.Format(_T("[sequence] Step Error Grab Time Out"));
				break;
			case EError_InspectionTimeOut:
				strMsg.Format(_T("[sequence] Step Error Inspection Time Out"));
				break;
			case EError_DataSendError:
				strMsg.Format(_T("[sequence] Step Error Data Send"));
				break;
				//2호기 추가
			case EError_CycleEndWaitTimeOut:
				strMsg.Format(_T("[sequence] Step Error Cycle End Wait Time Out"));
				break;
			case EError_unknown:
				strMsg.Format(_T("[sequence] Step Error Unknown"));
				break;
			default:
				break;
			}

			CLogManager::Write(ELogType_Sequence, strMsg);

			SetStep(EStep_Idle);

			//Stop();
		}
		break;
	default:
		break;
	}

	return true;
}

void CSequenceMain::SetInitializeIO()
{
	CEventHandlerMain* pHandlerMain = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandlerMain)
		return;

//	pHandlerMain->MelsecWriteIO(EMelsecBitOut_GrabReadyEnd, false);
	pHandlerMain->MelsecWriteIO(EMelsecBitOut_Complete, false);
	

	pHandlerMain->MelsecWriteIO(EMelsecBitOut_CycleOff, false, 6);
	pHandlerMain->MelsecWriteIO(EMelsecBitOut_AppearenceNG, false);
// 	pHandlerMain->MelsecWriteIO(EMelsecBitOut_MOVE, false);
// 	pHandlerMain->MelsecWriteIO(EMelsecBitOut_OK, false);
// 	pHandlerMain->MelsecWriteIO(EMelsecBitOut_NG, false);
}
