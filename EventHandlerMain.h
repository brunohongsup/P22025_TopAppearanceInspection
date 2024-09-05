#pragma once

#include "Definition.h"
#include "EHBase.h"
#include "CommonCls/RavidAssistDskim.h"
#include "MVSolTrigger.h"
#include "CellTrackerlSocketVer2013.h"
#include "CommonCls/VisionSvcFileCleaner.h"
#include "DeviceEuresysGrablinkFullTest.h"

class ISaveInfo;
class CJsonObject;
//////////////////////////////////////////////////////////////////////////
// using namespace Ravid;
// using namespace Ravid::Framework;
// using namespace Ravid::Device;
// using namespace Ravid::Algorithms;
// using namespace Ravid::Mathematics;
// using namespace Ravid::Miscellaneous;
// 
// using namespace CDefinition;
//////////////////////////////////////////////////////////////////////////

using namespace CDefinition;


class CEventHandlerMain : public CEHBase
{
public:
	CEventHandlerMain();
	virtual ~CEventHandlerMain();

// 	//////////////////////////////////////////////////////////////////////////
// 	template <typename Type0>
// 	inline void InternalMakeInvalidGeometry(CRavidGeometry* pGeo);
// 	inline void MakeInvalidGeometry(CRavidGeometry* pGeo);
// 	//////////////////////////////////////////////////////////////////////////

public:
	virtual void OnInspect(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
	virtual void OnTeach(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ Ravid::Framework::CTeachingObject* pTeachingObject, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
	virtual void OnAcquisition(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr);
	virtual void OnReceivingPacket(_In_ Ravid::Framework::CPacket* pPacket, _In_ Ravid::Device::CDeviceBase* pDevice);
	virtual void OnLogMessage(_In_ Ravid::Framework::SRavidLogData* pLogData);

	virtual void OnSequenceStart();
	virtual void OnSequencePause();
	virtual void OnSequenceStop();

	virtual void OnOpenModel(_In_ Ravid::Framework::CModelInfo* pModelInfo);
	virtual void OnCloseModel(_In_ Ravid::Framework::CModelInfo* pModelInfo);

	virtual void OnLogIn();
	virtual void OnLogOut();

	virtual void OnModelParameterSaveChanged();

	virtual void OnUserToolbarEventRavidMainFrame(_In_ UINT ulResourceID);
	virtual void OnToolbarEventRavidMainFrame(_In_ Ravid::Framework::ERavidToolBarEventMainFrame eEvent);
	virtual void OnToolbarEventRavidChildFrameBase(_In_ CView* pView, _In_ Ravid::Framework::ERavidToolBarEventChildFrameBase eEvent);
	virtual void OnToolbarEventRavidImageView(_In_ Ravid::Framework::CRavidImageView* pView, _In_ Ravid::Framework::ERavidToolBarEventImageView eEvent);
	virtual void OnToolbarEventRavidLogViewer(_In_ Ravid::Framework::CRavidLogViewer* pView, _In_ Ravid::Framework::ERavidToolBarEventLogViewer eEvent);
	virtual void OnToolbarEventImageProcessingTool(_In_ Ravid::Framework::CRavidImageProcessingTool* pView, _In_ Ravid::Framework::ERavidToolBarImageProcessingTool eEvent);

	virtual void OnRunUIConfiguration(_In_ long nNumber);
	virtual void OnTerminate();


private:

	CRavidAssistDskim m_AssistDskim;

	// Melsec Thread
	ThreadContext* m_pMelsecThread;
	volatile bool m_bMelsecThread;

	// Melsec I/O & Word Buffer
	short m_nBitIn[CDefinition::EMelsecBitIn_ReadCount / 16 + 1] = { 0, }; // Laser PC가 주는 Bit
	short m_nBitOut[CDefinition::EMelsecBitOut_ReadCount / 16 + 1] = { 0, };
	short m_nWordIn[CDefinition::EMelsecWordIn_ReadCount + 1] = { 0, };
	short m_nWordOut[CDefinition::EMelsecWordOut_ReadCount + 1] = { 0, };
		
	// Melsec I/O & Word Buffer For User(FormComm에서 사용하기위한 버퍼)
	int m_nSelectedAddr = 0;
	char m_cSelectedArea = 'B'; // 'B' : Bit, 'W' : Word
	short m_nBitTemp[CDefinition::EMelsecBitIn_ReadCount / 16 + 1] = { 0, };
	short m_nWordTemp[CDefinition::EMelsecWordIn_ReadCount + 1] = { 0, };
	CCriticalSection m_csMelsecTemp;

	//Model
	SdefaultModelParam m_sParameter;
	CString m_strModelName;
	CMVSolTrigger m_cMVSol;


	// Alive Thread
	ThreadContext* m_pAliveThread;
	volatile bool m_bAliveThread;

	//////////////////////////////////////////////////////////////////////////
	//HSSHIM ADDED
	ThreadContext* m_pSaveThread;
	volatile bool m_bSaveThread;
	std::queue<ISaveInfo*> m_queSaveInfo;
	CCriticalSection m_csSaveQueue;
	
public:
	enum class ECellDataReceivedStatus
	{
		NotReceived,
		Received,
	};
private:

	ECellDataReceivedStatus m_eCellDataReceived;


	ThreadContext* m_pCellTrackerThread;
	volatile bool m_bCellTrackerThread;
	volatile bool m_bIsCellTrackerFlg = false;
	CCellTrackerSocketVer2013* m_pDllSocket;
	sCellTrackerData m_sCellTrackingData;
	//////////////////////////////////////////////////////////////////////////

	CVisionSvcFileCleaner m_cFileCleaner;

public:
	//////////////////////////////////////////////////////////////////////////
	//HSSHIM ADDED

	sCellTrackerData GetCellTrackingData() const { return m_sCellTrackingData; }

	ECellDataReceivedStatus HasReceivedCellData() const { return m_eCellDataReceived; }

	void SetReceivedCellDataStatus(ECellDataReceivedStatus eCellDataStatus) { m_eCellDataReceived = eCellDataStatus; }

	void CellTrackerThreadStart();
	void CellTrackerThreadStop();
	bool IsCellTrackerFlg() { return m_bIsCellTrackerFlg; }
	void ShowCellTrackerIPConfigShow();

	void ConnectCellTracker();
	bool IsConnectCellTracker() { return m_pDllSocket->IsConnectStatus(); }


	ISaveInfo* PopSaveInfo();
	bool PushSaveInfo(ISaveInfo* pSaveInfo);
	void StartSaveThread();
	void StopSaveThread();

	//////////////////////////////////////////////////////////////////////////

	// Melsec Thread
	void MelsecThreadStart();
	void MelsecThreadStop();
	bool IsInitializedMelsec() { return m_bMelsecThread; }

	// Melsec Func
	bool MelsecInitialize();
	bool MelsecTerminate();
	bool MelsecReadIO();
	bool MelsecReadWord();
	bool MelsecWriteIO(int nAddress, bool bON, bool bBlock = false);
	bool MelsecWriteIO(int nAddress, bool bON, int nCount);
	bool MelsecWriteWord(int nAddress, long * nData);
	bool MelsecWriteWord(int nAddress, int nCount, short * nData);
	bool MelsecWriteWord(int nAddress, int nCount, long * pData);
	bool MelsecWriteWordToString(int nAddress, CString lpszData);
	void ConvertLongToWord(long lSource, WORD* pDst, WORD* pDst2);
	void ConvertShortToWord(short lSource, WORD* pDst, WORD* pDst2);
	bool MelsecGetDataIO(CDefinition::EAddressType eType, int nAddress);
	long MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress);
	void MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress, short* nData);
	void MelsecGetDataWord(CDefinition::EAddressType eType, int nAddress, long* nData);
	CString MelsecReadWordData(int nReadAddress, int nWordSize);

// 	CString MelsecReadWordDataSelf(int nReadAddress, int nWordSize);
// 	bool GetDataIOToPLC(int nAddress);
		
	// Used For FormComm (Melsec Data)
	bool MelsecReadTempBuffer();
	bool CopyMelsecTempBuffer(short* pDstData);
	bool SetMelsecTempInfo(int nAddress, char cArea);
	
	CString GetModelName(){return m_strModelName;}

	// Model 
	SdefaultModelParam GetModelParameters() { return m_sParameter; }

	//Alive Thread
	void AliveThreadStart();
	void AliveThreadStop();

	//2호기추가
	void CheckPlcStopSignal();
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MVSol Setting

	CMVSolTrigger* GetMVSol() { return &m_cMVSol; }

	void MVSolOpen(std::string strPortNumber);

	void MVSolTerminate();

	bool SetMVSolTrigger(int nTriggerCH, EPacketDir eDir);

	void AllClearMVSolTrigger();

	void ClearMVSolTriggerBeforeGrab();


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Light Control Setting

	bool LightControllerSetBrightValue(_In_ int nCh, _In_ int nValue);
	bool LightControllerEnableChannel(_In_ int nCh, _In_ bool bEnable, bool bAll = false);
	bool LightControllerSetting();
	bool LightOn(bool bOn);


    bool SetFileCleaner();
	void TerminateFileCleaner();

private:
	CModelInfo * m_pCurrentModelInfo;
	SdefaultModelParam m_sPrevParam;
	SEqpInfo m_sEqpInfo;



public:
	//////////////////////////////////////////////////////////////////////////
	//Json Data
	void SaveJsonData(); 

	void SetForJson_IQInfo(sJSonGeneralData sData)
	{
	
		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), sData.eCamNum));
		if(!pImageView)
			return;

//		CDeviceEuresysGrablinkFullTest* pCamera = dynamic_cast<CDeviceEuresysGrablinkFullTest*>(CDeviceManager::GetDeviceByIndex(typeid(CDeviceEuresysGrablinkFullTest), ECameraNum_Upper + sData.eCamNum));
// 
// 		if(!pCamera)
// 			return;
// 
// 		if(!pCamera->IsInitialized())
// 			return;

		sApperanceIQ sIq;

		CString strCameraLocation;
		strCameraLocation = sData.eCamNum == ECameraNum_Upper ? _T("TOP") : _T("BTM");

		sIq.strIq[EJson_Iq_Camera_Location] = strCameraLocation;

	
		CString str;
		str = _T("1");
		sIq.strIq[EJson_Iq_Camera_Number] = str;
		sIq.strIq[EJson_Iq_Screen_Number] = str;
		sIq.strIq[EJson_Iq_Cell_Position] = str;

		str.Format(_T("%d"), pImageView->GetImageInfo()->GetSizeX());
		sIq.strIq[EJson_Iq_Screen_Image_Size_X] = str;
		str.Format(_T("%d"), pImageView->GetImageInfo()->GetSizeY());
		sIq.strIq[EJson_Iq_Screen_Image_Size_Y] = str;

		str = _T("1"); // Temp 1
		sIq.strIq[EJson_Iq_Focus_Value] = str;

		str = _T("0"); // Temp 1
		sIq.strIq[EJson_Iq_Bright_Value] = str;

		str.Format(_T("%.3f"), pImageView->GetAccuracyX());
		sIq.strIq[EJson_Iq_Resol_X_Value] = str;
		str.Format(_T("%.3f"), pImageView->GetAccuracyY());
		sIq.strIq[EJson_Iq_Resol_Y_Value] = str;

		str = _T("0"); // 라인스캔 카메라 직진도 없음.
		sIq.strIq[EJson_Iq_Cam_Angle_Value] = str;

		int nParam = 0;	
		str.Format(_T("%.3f"), nParam); // Gain 어디 ?
		sIq.strIq[EJson_Iq_Cam_Gain] = str;

// 		pCamera->GetExpose_us(&nParam);
// 		str.Format(_T("%.3f"), nParam / 1000.f);
		sIq.strIq[EJson_Iq_Exposure_Time] = str;


		CString strImageResult = sData.bDimensionJudge && sData.bDefectJudge ? _T("OK") : _T("NG");
		sIq.strIq[EJson_Iq_Image_Jude] = strImageResult;

		CString strTotalResult =  sData.bCellJudge ? _T("OK") : _T("NG");
		str.Format(_T("%s_%s_%s_%s_%s_%s_%d_%d_%s_%s.jpg"), 
				   sData.strVisionType, GetForSPCTime(ESPCTimeLogType_End), sData.strEqpID, sData.strLotID, 
				   sData.strCellID, strCameraLocation, 1, 1, strImageResult, strTotalResult);

		sIq.strIq[EJson_Iq_Image_File_Name] = str;


		m_vctStringIQ.push_back(sIq);
	};

	void SetForJsonInspectiontData(sJSonGeneralData sData, std::vector<SMeasuredData> vctJsonMeasure, std::vector<SDefectData> vctJasonDefect)
	{

		CString strTotalResult = sData.bCellJudge ? _T("OK") : _T("NG");
		CString strCameraLocation = sData.eCamNum == ECameraNum_Upper ? _T("TOP") : _T("BTM");
		CString strImageResult = sData.bDimensionJudge && sData.bDefectJudge ? _T("OK") : _T("NG");
		
		SetJasonGeneralData(EJson_Iq_Image_Jude, strImageResult);

		if(sData.eCamNum == ECameraNum_Upper) // 초기 한번만 set
		{
			SetJasonGeneralData(EJson_Vision_Input_Time, sData.strInput_Time);
			SetJasonGeneralData(EJson_Vision_Output_Time, sData.strOutput_Time);
			SetJasonGeneralData(EJson_Insp_TackTime, sData.strTackTime);
			SetJasonGeneralData(EJson_Insp_Processing_Time, sData.strInspProcessingTime);

			SetJasonGeneralData(EJson_Vision_Type, sData.strVisionType);
			SetJasonGeneralData(EJson_Ng_Out, sData.strNgOut);

			SetJasonGeneralData(EJson_Process_Dirction, sData.strProcessDirction);

			SetJasonGeneralData(EJson_Lot_ID, sData.strLotID);
			SetJasonGeneralData(EJson_Cell_ID, sData.strCellID);
			SetJasonGeneralData(EJson_Recipe_ID, sData.strRecipeID);
			SetJasonGeneralData(EJson_EQP_ID, sData.strEqpID);
			SetJasonGeneralData(EJson_EQP_Insp_ID, sData.strEqpIns);
			SetJasonGeneralData(EJson_Virtual_Cell_ID, sData.strVirtualCellID);
			SetJasonGeneralData(EJson_Process_Group, sData.strProcessGroup);
			SetJasonGeneralData(EJson_Process_Name, sData.strProcessName);

			CString str;
			str.Format(_T("%d"), sData.lCellCount);
			SetJasonGeneralData(EJson_Cell_Count_No, str);

			str.Format(_T("%d"), sData.lLineNumber);
			SetJasonGeneralData(EJson_Line_Number, str);

			str.Format(_T("%d"), sData.lMachineNumber);
			SetJasonGeneralData(EJson_Machine_Number, str);

			str.Format(_T("%d"), sData.lLaneNumber);
			SetJasonGeneralData(EJson_Lane_Number, str);

			SetJasonGeneralData(EJson_Cell_Final_Judge, strTotalResult);
		}



		bool bFrist = true;
		int nDimesionNGCount = 0;
		for (SMeasuredData sO : vctJsonMeasure)
		{
			sApperanceDimension sI;

			sI.strDimension[EJson_Dimesion_NG_Value].Format(_T("%.3f"), sO.bResult ? 0.f : sO.dblData);
			sI.strDimension[EJson_Dimesion_Name].Format(_T("%s"), sO.strName);
			sI.strDimension[EJson_Dimesion_Name_Real].Format(_T("%s"), sO.strName);

			sI.strDimension[EJson_Dimesion_Camera_Location] = strCameraLocation;
			sI.strDimension[EJson_Dimesion_Camera_Number].Format(_T("%d"), (int)sData.eCamNum);
			sI.strDimension[EJson_Dimesion_Screen_Number].Format(_T("%d"), (int)sData.eCamNum);

			sI.strDimension[EJson_Dimesion_Value].Format(_T("%.3f"), sO.dblData);
			sI.strDimension[EJson_Dimesion_Start_Point_X].Format(_T("%.3f"), sO.rlData.rpPoints[0].x);
			sI.strDimension[EJson_Dimesion_End_Point_X].Format(_T("%.3f"), sO.rlData.rpPoints[1].x);
			sI.strDimension[EJson_Dimesion_Start_Point_Y].Format(_T("%.3f"), sO.rlData.rpPoints[0].y);
			sI.strDimension[EJson_Dimesion_End_Point_Y].Format(_T("%.3f"), sO.rlData.rpPoints[1].y);

			sI.strDimension[EJson_Dimesion_Judge] =  sO.bResult ? _T("OK") : _T("NG");

			sI.strDimension[EJson_Dimesion_Offset].Format(_T("%.3f"), sO.dblUsedOffset);

			sI.strDimension[EJson_Dimesion_GL].Format(_T("%.3f"), 0.f);

			if(bFrist && !sO.bResult)
			{
				// Main NG one
				SetJasonGeneralData(EJson_Dimesion_Reason_Main, sI.strDimension[EJson_Dimesion_Name]);
				SetJasonGeneralData(EJson_Dimesion_Reason_Main_Real, sI.strDimension[EJson_Dimesion_Name_Real]);
				SetJasonGeneralData(EJson_Dimesion_NG_Value, sI.strDimension[EJson_Dimesion_Value]);

				bFrist = false;
			}

			if(!sO.bResult)
				m_nTotalNGConut_Measurement++;

			m_vctStringDimensionData.push_back(sI);
		}

		SetJasonGeneralData(EJson_Dimesion_Judge_Result, sData.bDimensionJudge ? _T("OK") : _T("NG"));
		CString strGen;
		strGen.Format(_T("%d"), m_nTotalNGConut_Measurement);
		SetJasonGeneralData(EJson_Dimesion_Total_NG_Count, strGen);



		///////////////////////////////////////////////////////////////
		//

		SetJasonGeneralData(EJson_Appearance_Judge_Result, sData.bDefectJudge ? _T("OK") : _T("NG"));

		m_nTotalNGConut_Defect +=  vctJasonDefect.size();
		strGen.Format(_T("%d"), m_nTotalNGConut_Defect);
		SetJasonGeneralData(EJson_Appearance_Total_NG_count, strGen);

		CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), sData.eCamNum));
		if(!pImageView)
			return;

		SSPCDefectCode sCode;
		int nSaveCount = 0;
		bFrist = true;
		for(SDefectData sO : vctJasonDefect)
		{
			sApperanceDefect sI;

			CString str;
			sI.strDefect[EJson_Defect_Index].Format(_T("%d"), sO.nIndex);
			sI.strDefect[EJson_Defect_Type_Rule_Base_Name] =  sCode.strCode[sO.eDefectCode];
			sI.strDefect[EJson_Defect_Type_Rule_Base_Name_Real] = sO.strName;
			sI.strDefect[EJson_Defect_Camera_Type] = sData.strCameraType;
			sI.strDefect[EJson_Defect_Camera_Location] = strCameraLocation;
			sI.strDefect[EJson_Defect_Camera_Number].Format(_T("%d"), (int)sData.eCamNum);
			sI.strDefect[EJson_Defect_Screen_Number].Format(_T("%d"), (int)sData.eCamNum);

			sI.strDefect[EJson_Defect_Insp_Position] = sData.strInsPosition;

			sI.strDefect[EJson_Defect_Criteria_Point_X].Format(_T("%.3f"), sO.rpCriteria.x);
			sI.strDefect[EJson_Defect_Criteria_Point_Y].Format(_T("%.3f"), sO.rpCriteria.y);
			sI.strDefect[EJson_Defect_Relative_Point_R_PX].Format(_T("%.3f"), sO.dblRelative_R);
			sI.strDefect[EJson_Defect_Relative_Point_R_Angle].Format(_T("%.3f"), sO.dblRelative_Angle);
			sI.strDefect[EJson_Defect_Absolute_Img_X].Format(_T("%.3f"), sO.rpg.GetCenter().x);
			sI.strDefect[EJson_Defect_Absolute_Img_Y].Format(_T("%.3f"), sO.rpg.GetCenter().y);

			sI.strDefect[EJson_Defect_Img_Width].Format(_T("%.3f"), sO.dblWidth);
			sI.strDefect[EJson_Defect_Img_Length].Format(_T("%.3f"), sO.dblHeight);
			sI.strDefect[EJson_Defect_Area_Pixels].Format(_T("%.3f"), sO.rpg.GetArea());
			str.Format(_T("0"));
			sI.strDefect[EJson_Defect_Gray_Lv_Avg] = str;
			sI.strDefect[EJson_Defect_Gray_Lv_Max] = str;
			sI.strDefect[EJson_Defect_Gray_Lv_Min] = str;
			sI.strDefect[EJson_Defect_Gray_Lv_Range] = str;
			sI.strDefect[EJson_Defect_Gray_Lv_Stddev] = str;
			sI.strDefect[EJson_Defect_Ratio_Width_Length] = str;
			sI.strDefect[EJson_Defect_Angle].Format(_T("%.3f"), sO.rqd.GetAngle());
			str.Format(_T("0"));
			sI.strDefect[EJson_Defect_Elongation] = str;
			sI.strDefect[EJson_Defect_Boundary_Pixel_Lengh] = _T("");
			sI.strDefect[EJson_Defect_Roi_Gray_Lv_Max] = str;
			sI.strDefect[EJson_Defect_Roi_Gray_Lv_Avg] = str;
			sI.strDefect[EJson_Defect_Roi_Gray_Lv_Min] = str;
			sI.strDefect[EJson_Defect_Roi_Gray_Lv_Median] = str;
			sI.strDefect[EJson_Defect_Roi_Gray_Lv_Stddev] = str;
			sI.strDefect[EJson_Defect_Cell_Position] = _T("");

			sI.strDefect[EJson_Defect_Inout] = str;

			if(nSaveCount < 3)
			{
			
				CRavidImage imgCrop(pImageView->GetImageInfo());
				CRavidRect<int> rpCropROI = sO.rqd;
				rpCropROI.Inflate(25);
				CString strPath;
				strPath.Format(_T("%s_%s_%s_%s_%s_%s_%d_%d_%s_%s.jpg"),
							   sData.strVisionType, GetForSPCTime(ESPCTimeLogType_End), sData.strEqpID, sData.strLotID,
							   sData.strCellID, strCameraLocation, 1, 1, sData.strInsPosition, strTotalResult/*,불량명*//*,좌표X*//*,좌표Y*/);

				sI.strDefect[EJson_Defect_Crop_Image_File_Name] = strPath;
// 231116 jhjo 데이터 저장위치 확인 필요 
// 				imgCrop.Crop(rpCropROI);
// 				imgCrop.Save(strPath);
				nSaveCount++;
			}	

			if(bFrist)
			{
				// Main NG one
				SetJasonGeneralData(EJson_Appearance_Reason_Main, sI.strDefect[EJson_Defect_Type_Rule_Base_Name]);
				SetJasonGeneralData(EJson_Appearance_Reason_Main_Real, sI.strDefect[EJson_Defect_Type_Rule_Base_Name_Real]);

				bFrist = false;
			}


			m_vctStringDefectData.push_back(sI);
		}
	};

	void SetJsonDimensionDataClear(){m_vctStringDimensionData.clear();}
	void SetJsonDefectDataClear(){m_vctStringDefectData.clear();}
	void SetJsonIQDataClear() { m_vctStringIQ.clear(); }
	void SetJsonGeneralDataClear()
	{
		for(int i = 0; i < EJsonApperance_Count; i++)
			m_strJsonGeneralData[i] = _T("");

		m_nTotalNGConut_Measurement = 0;
		m_nTotalNGConut_Defect = 0;
	}

	//////// Json Param ///////////////////////////////////////////////////////////////////////
	bool SaveJsonParam(Ravid::Framework::CModelInfo * pModelInfo, EModifyReason eModifyReason);
	CString GetStringOfCurrentTimeWithMillisecond();
	bool MakeJsonRavidParamData(CModelInfo* pModel, CJsonObject* pJsParam);

private: 
	CString GetJsonGeneralData(EJsonApperance eNum) { return m_strJsonGeneralData[eNum]; }
	void SetJasonGeneralData(EJsonApperance eNum, CString strData) { m_strJsonGeneralData[eNum] = strData; }
	CString m_strJsonGeneralData[EJsonApperance_Count];

	std::vector<sApperanceDimension> m_vctStringDimensionData;
	std::vector<sApperanceDefect> m_vctStringDefectData;
	std::vector<sApperanceIQ> m_vctStringIQ;

	long m_nTotalNGConut_Measurement = 0;
	long m_nTotalNGConut_Defect = 0;
	
};

