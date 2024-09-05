#pragma once

#include "stdafx.h"
#include "UI/CtrlLabel.h"
#include "UI/CtrlButtonST.h"
#include <typeindex>

using namespace Ravid::Framework;

#define CUSTOM_DARK RGB(40, 40, 40)
#define CUSTOM_GRY RGB(250, 250, 250)

// Data 손실
#pragma warning(disable: 4244)
#pragma warning(disable: 4267)
// wcstombs
#pragma warning(disable: 4996)

#define PLC_STANDARD_X 10000
#define PLC_STANDARD_Y 10000
#define PLC_STANDARD_T 1000


#define Dev_B 23
#define Dev_W 24

#define BASE_COLOR RGB(40, 40, 40)

#define CAMERA_Accuracy 0.0545

#define TableRealSizeW 21.5
#define TableRealSizeH 1025.

#define StartCamChannel 8

#define MAX_GRAB_COUNT		32
#define  CamSizeX 15000
#define  CamSizeY 4096

const char * const DataDir = "D:\\Record\\Files";



namespace CDefinition
{
	#define AREALIGHT_BOUNDARY_BYTE(i) (__max(2, __min(255, i)))
	#define RCG_BOUNDARY_WORD(i) (__max(0, __min(65535, i)))
	#define RCG_BOUNDARY_INT(i) (__max(0, __min(INT32_MAX, i)))
	//중간 값 찾기.
	#define GEOMETRY_BOUND(minVal, Val, maxVal) (__min(maxVal, __max(minVal, Val)))

	#define ImplementThreadContext(pContext) ThreadContext* pContext = new ThreadContext; *pContext = [=](void) -> void


	enum EUIConfig
	{
		EUIConfig_Main = 0,
		EUIConfig_Register,
		EUIConfig_CameraControl,
		EUIConfig_Options,
		EUIConfig_Comm,

		EUIConfig_Count,
	};

	enum ELogType
	{
		ELogType_Initialize = 0,
		ELogType_Main,
		ELogType_Vision,
		ELogType_Sequence,

		ELogType_Device = EFrameworkLogTypes_Device,
		ELogType_Model = EFrameworkLogTypes_Model,
// 		EFrameworkLogTypes_Authority,
// 		EFrameworkLogTypes_Algorithms,
// 		EFrameworkLogTypes_Mathematics,
// 		EFrameworkLogTypes_Miscellaneous,
// 		EFrameworkLogTypes_Database,
	};

	enum EEventHandlerNo
	{
		EEventHandlerNo_CameraUpper = 0,
		EEventHandlerNo_CameraLower,
		EEventHandlerNo_Main,
		EEventHandlerNo_MVSol,

		EEventHandlerNo_Count,
	};

	enum ESequenceNo
	{
		ESequenceNo_Main = 0,
		ESequenceNo_System,

		ESequenceNo_Count,
	};

	enum EViewNo
	{
		// Image View
		EViewNo_ImageViewCameraUpper = 0,
		EViewNo_ImageViewCameraLower,
		EViewNo_ImageViewTeahcingUpper,
		EViewNo_ImageViewTeachingLower,

		// Menu
		EViewNo_FormTopMenu,
		EViewNo_FormBotMenu,


		// Form
		EViewNo_FormMain,
		EViewNo_FormRegister,
		EViewNo_FormCamera,
		EViewNo_FormComm,
		EViewNo_FormOptions,

		EViewNo_Count,
	};

	//실제 Settings에 Device 올리는 순서대로 Enummeration하게 되면 유용하게 사용 할 수 있다.
	enum EDeviceNo
	{
		EDeviceNo_Error = -1,
		EDeviceNo_ColorLineCamera = 0,
		EDeviceNo_MonoLineCamera,
		EDeviceNo_MNetG,
		//EDeviceNo_MVsol,
		EDeviceNo_LightControl,

		EDeviceNo_Count,
	};

	//실제 Settings에 Device 중 카메라의 순서대로 Enummeration하게 되면 유용하게 사용 할 수 있다. 단, 위의 DeviceNo에서 카메라를 먼저 올리는 경우에만 유효하다.
	//그 외의 경우는 카메라의 시작Nummering으로 정해줘야 한다.
	//Ex ) ECameraType_AreaCamera = 3,  //Device의 순서가 1번 RS232C, 2번 TriggerBoard, 3번 Camera의 경우 
	enum ECameraNum
	{
		ECameraNum_Error = -1,

		ECameraNum_Upper = 0,
		ECameraNum_Lower,

// 		ECameraType_AreaCamera = 0,
// 		ECameraType_LineCamera,

		ECameraNum_Count,
	};

	enum ERS232C
	{

		ERS232C_Light1 = 0,
		ERS232C_Light2,

		ERS232C_Count,
	};


	enum ELayerNo
	{
		ELayerNo_All = -1,
		ELayerNo_DefaultLayer1 = 0,
		ELayerNo_DefaultLayer2,
		ELayerNo_DefaultLayer3,
		ELayerNo_DefaultLayer4,
		ELayerNo_DefaultLayer5,
		ELayerNo_DefaultLayer6,
		ELayerNo_DefaultLayer7,
		ELayerNo_DefaultLayer8,
		ELayerNo_DefaultLayer9,
		ELayerNo_DefaultLayer10,

		ELayerNo_Count,
	};

	enum EMelsecBitIn
	{
		// Receieve IO
		EMelsecBitIn_ReadCount = 0x100,
		EMelsecBitIn_StartAddr = 0x0000,

		// Basic Signal
		EMelsecBitIn_InspEndAck = 0x70,
		EMelsecBitIn_GrabReady = 0x72/*0x10*/,
		EMelsecBitIn_GrabStart = 0x73/*0x11*/,
		EMelsecBitIn_InspectionStop = 0x75,

		EMelsecBitIn_MachineStopVisionReset = 0x77,

		EMelsecBitIn_OneCyleEnd = 0x12,

		EMelsecBitIn_Count,
	};

	enum EMelsecBitOut
	{
		// Send IO
		EMelsecBitOut_ReadCount = 0x100,
		EMelsecBitOut_StartAddr = 0x7000, //0x3000, <--LG CNS 요청으로 변경 221209 jhjo

		// Basic Signal
		EMelsecBitOut_Alive = 0x40,
		EMelsecBitOut_AutoMode = 0x41,

		EMelsecBitOut_GrabReadyEnd = 0x90/*0x10*/, // Grab Ready OK
 		EMelsecBitOut_InspectEnd = 0x91,
		EMelsecBitOut_OK = 0x92/*0x13*/,
		EMelsecBitOut_NG = 0x93/*0x14*/,
		EMelsecBitOut_MOVE = 0x94/*0x14*/,
		EMelsecBitOut_GrabEnd = 0x95,

		EMelsecBitOut_CycleOff = 0x90, // Off Start Address
		//////////////////////////////////////////////////////////////////
		//HSSHIM ADDED  MES 
		EMelsecBitOut_AppearenceNG = 0xA3, 
		//////////////////////////////////////////////////////////////////

		EMelsecBitOut_Busy = 0x12,

		EMelsecBitOut_Complete = 0x15,
	};

	enum EMelsecWordIn
	{
		EMelsecWordIn_ReadCount = 0x200,
		EMelsecWordIn_StartAddr = 0x0000,

		// Basic Data
		EMelsecWordIn_TempID1 = 0x110,
		EMelsecWordIn_TempID2 = 0x111,
		EMelsecWordIn_TempID3 = 0x112,
		EMelsecWordIn_TempID4 = 0x113,
	};

	enum EMelsecWordOut
	{
		EMelsecWordOut_ReadCount = 0x100,
		EMelsecWordOut_StartAddr = 0x7000, //0x3000, <--LG CNS 요청으로 변경 221209 jhjo

		// Basic Data
		EMelsecWordOut_Data1 = 0x10,
		EMelsecWordOut_Data2 = 0x11,
		EMelsecWordOut_Data3 = 0x12,
	};

	enum EAddressType
	{
		EAddressType_Input = 0, // 받음
		EAddressType_Output = 1, // 쓰는곳
	};

	enum EAlignStage
	{
		EAlignStage_Temp1 = 0,
		EAlignStage_Temp2,

		EAlignStage_Count,
	};

	enum EDevice
	{
		EDevice_DominoSymphony1 = 0,
		EDevice_DominoSymphony2,
		EDevice_DominoSymphony3,
		EDevice_DominoSymphony4,

		EDevice_RS232C_MVTSOL_TRG1,
		EDevice_RS232C_MVTSOL_TRG2,
		EDevice_RS232C_MVTechStrobe1,
		EDevice_RS232C_MVTechStrobe2,

		EDevice_Count,
	};


	enum ELayer
	{
		ELayer_Operator = 0,
		ELayer_Administrator,
		ELayer_Developer,
		ELayer_Root,
		ELayer_Common,


		ELayer_Count,
	};

	enum EPacketDir
	{
		// Direction
		EPacketDir_None = -1,

		EPacketDir_Send_Foward = 0,
		EPacketDir_Send_Foward_Ack,
		EPacketDir_Send_Backward,
		EPacketDir_Send_Backward_Ack,

	};

	enum InspectKind
	{
		InspectKind_Measurement = 0,
		InspectKind_FindDefect,
		InspectKind_Count,
	};

	//////////////////////////////////////////////////////////////////////////
	// UI
	enum EListBoxState
	{
		EListBoxState_Add = 0,
		EListBoxState_Delete,
		EListBoxState_Edit,
	};

	typedef struct sFormMachineMonitoring
	{
		CString strModel;
		CString strLotID;

		bool bResult = false;

		bool bNGTypeMeasurement = false;

		sFormMachineMonitoring()
		{
			strModel = _T("");
			strLotID = _T("");
		}
	}SFormMachineMonitoring;


	/////////////////////////////////////////////////////////////////////////
	//Inspection Info ( Measurement )

	enum eMaualTeachingBox
	{
		eMaualTeachingBox_Left = 0,
		eMaualTeachingBox_top,
		eMaualTeachingBox_Right,
		eMaualTeachingBox_Bottom,

		eMaualTeachingBox_count,
	};
	enum eTeachingBoxDir
	{
		eTeachingBoxDir_SideTop1 = 0,
		eTeachingBoxDir_SideTop2,
		eTeachingBoxDir_Top,
		eTeachingBoxDir_SideBottom1,
		eTeachingBoxDir_SideBottom2,
		eTeachingBoxDir_Bottom,



		eTeachingBoxDir_Count,
	};

	enum eFindLineDir
	{
		eFindLineDir_TopToBottom = 0,
		eFindLineDir_LeftToRight,
		eFindLineDir_BottomToTop,
		eFindLineDir_RightToLeft,

		eFindLineDir_AngleAdjustment,
	};
	enum eColorImageType
	{
		eColorImageType_R = 0,
		eColorImageType_G,
		eColorImageType_B,

		eColorImageType_Count = 3,
	};

	enum eColorImageCalType
	{
		eColorImageCalType_R = 1,
		eColorImageCalType_G = 2,
		eColorImageCalType_B = 4,
	};

	typedef struct sCellAlignData
	{
		CRavidPoint<double> rpCenter;

		double dblAngle = 0.f;

		ECameraNum ECameraType = ECameraNum_Upper;

		bool bResult = false;


		sCellAlignData()
		{

		}

	}SCellAlignData;

	typedef struct sFindEdgeLine
	{
		CLineGauge::ETransitionChoice eTransitionChoice = CLineGauge::ETransitionChoice_LargestAmplitude;
		CLineGauge::ETransitionType eTransitionType = CLineGauge::ETransitionType_WB;

		eFindLineDir eFindDir = eFindLineDir_LeftToRight;

		CRavidQuadrangle<double> rqdROI;

		long nSmoothing = 1;
		long nThreshold = 10;
		long nThicknes = 3;

		long nMinimumAmplitude = 1;
		long nSamplingStep = 2;
		int nNumOfPass = 1;

		double dblOutLiersThreshold = 1.f;


		bool bRavidLineUse = false;

		eColorImageCalType eColorType = eColorImageCalType_G;

		sCellAlignData sAlignData;

		sFindEdgeLine()
		{

		}

	}SFindEdgeLine;

	
	typedef struct sLineMeasurmentResult
	{ // 라인을 측정하고 얻은 결과
		std::vector<CRavidPoint<double>> vctMeasuredValidPoints;
		std::vector<CRavidPoint<double>> vctMeasuredInvalidPoints;

		CRavidLine<double> rlResult;

		CRavidQuadrangle<double> rqdInsArea;

		sLineMeasurmentResult()
		{

		}

	}SLineMeasurmentResult;

	typedef struct sCircleGauge
	{
		CCircleGauge::ETransitionChoice eTransitionChoice = CCircleGauge::ETransitionChoice_LargestAmplitude;
		CCircleGauge::ETransitionType eTransitionType = CCircleGauge::ETransitionType_BW;

		int nSmoothing = 0;
		int nThreshold = 15;
		int nThicknes = 10;

		double dblRadius = 0.f;

		int	nRoiOffset = 3;

		sCircleGauge()
		{

		}

	}SCircleGauge;
		
	/////////////////////////////////////////////////////////////////////////
	// Ini Save Data Info 

	enum EIniDataType
	{
		IniDataType_MeasurementROI = 0,
		IniDataType_MeasurementKind,
		IniDataType_Count,
	};

	typedef struct sMeasurementROI
	{
		CDefinition::sFindEdgeLine sLineParams;
		
		CString strName;
		CString strSerialNumber;


		sMeasurementROI()
		{
			strName = _T("");
			CTime cdTime;
			cdTime = CTime::GetCurrentTime();
			CString strDate;
			strDate.Format(_T("%s"), cdTime.Format(_T("%y%m%d")));
			CString strTime;
			strTime.Format(_T("N%02d%02d%02d"), cdTime.GetHour(), cdTime.GetMinute(), cdTime.GetSecond());
			
			strSerialNumber = strDate + strTime;
		}

	}SMeasurementROI;


	typedef struct sCellTrackerData
	{
		int nMsL = 0;
		int nDataVer = 0;
		int nCellIDCount = 0;
		CString strCellID[2];
		CString strLotID;
		sCellTrackerData()
		{
			strCellID[0] = _T("");
			strCellID[1] = _T("");
			strLotID = _T("");
		}
	}SCellTrackerData;


	enum EMeasurementKindType
	{
		EMeasurementKindType_Align,
		EMeasurementKindType_Size,
		EMeasurementKindType_Position,
		EMeasurementKindType_Area,
		EMeasurementKindType_Seap,
		EMeasurementKindType_Cell,
		EMeasurementKindType_PassLine,

		EMeasurementKindType_Count,
	};


	

	typedef struct sMeasurementKind
	{
		bool bUse = true;
		CString strName;
		sMeasurementROI sStandard;
		bool bType[EMeasurementKindType_Count] = {false, };

		double dblReference = 0.f;
		double dblUSL = 0.f;
		double dblLSL = 0.f;
		double dblOffset = 0.f;
		double dblScale = 0.f;

		std::vector<sMeasurementROI> vctOpponents;

		sMeasurementKind()
		{
			vctOpponents.clear();
			strName = _T("");
		}

	}SMeasurementKind;

	// Model E101A
	enum EMeasurementList
	{
		EMeasurementList_A1 = 0,
		EMeasurementList_A2,
		EMeasurementList_B1,
		EMeasurementList_B2,
		EMeasurementList_TWC,
		EMeasurementList_TWA,
		EMeasurementList_G1,
		EMeasurementList_G2,
		EMeasurementList_G3,
		EMeasurementList_G4,
		EMeasurementList_G5,
		EMeasurementList_J1,
		EMeasurementList_J2,
		EMeasurementList_J3,
		EMeasurementList_J4,
		EMeasurementList_J5,
		EMeasurementList_L1,
		EMeasurementList_L2,
		EMeasurementList_M1,
		EMeasurementList_M2,
		EMeasurementList_N1,
		EMeasurementList_N2,
		EMeasurementList_O1,
		EMeasurementList_O2,
		EMeasurementList_P1,
		EMeasurementList_P2,

		EMeasurementList_Count,
	};


	typedef struct sMeasuredData
	{
		CString strName = _T("");
		double dblData = 0.f;
		bool bResult = false;

		CRavidLine<double> rlData;
		double dblUsedOffset = 0.f;

	}SMeasuredData;

	enum ESPCDefectCode
	{
		ESPCDefectCode_ABIM,
		ESPCDefectCode_FADF,
		ESPCDefectCode_TADF,
		ESPCDefectCode_EADF,
		ESPCDefectCode_NODF,
		ESPCDefectCode_OK,

		ESPCDefectCode_Count,

	};
	typedef struct sDefectData
	{
		CString strName = _T("");
		int nIndex = 0;
		bool bOuntSidePos = false;
		bool bElectrode = false;
		CRavidPolygon rpg;
		CRavidQuadrangle<double> rqd;


		CRavidPoint<double> rpCriteria;
		ESPCDefectCode eDefectCode = ESPCDefectCode_OK;

		double dblRelative_R = 0.f;
		double dblRelative_Angle = 0.f;

		double dblWidth = 0.;
		double dblHeight = 0.;

	}SDefectData;


	typedef struct sSaveImageInfo
	{
		CRavidImage* pImgInfo = nullptr;

		CString strAddInfo = _T("");

		ECameraNum ECameraType = ECameraNum_Upper;

		bool bResult = false;


		sSaveImageInfo()
		{

		}

	}SSaveImageInfo;

	//////////////////////////////////////////////////////////////////////////
	// Json Data
	enum EJsonApperance
	{
		//기본 생성 데이터
		EJson_TXN_ID = 0,
		EJson_inDName,
		EJson_outDTName,
		EJson_actID,
		EJson_refDS,
		EJson_IN_DATA,
		EJson_CATEGORY,
		EJson_Vision_Input_Time,
		EJson_Vision_Output_Time,
		EJson_Insp_TackTime,
		EJson_Insp_Processing_Time,
		EJson_Recipe_ID,
		EJson_Ng_Out,
		EJson_EQP_ID,
		EJson_EQP_Insp_ID,
		EJson_Process_Group,
		EJson_Process_Name,
		EJson_Line_Number,
		EJson_Machine_Number,
		EJson_Lane_Number,
		EJson_Vision_Type,
		EJson_Process_Dirction,
		EJson_Lot_ID,
		EJson_Cell_ID,
		EJson_Cell_Count_No,
		EJson_Virtual_Cell_ID,
		EJson_Cell_Final_Judge,

		EJson_Iq_Camera_Location,
		EJson_Iq_Camera_Number,
		EJson_Iq_Screen_Number,
		EJson_Iq_Cell_Position,
		EJson_Iq_Screen_Image_Size_X,
		EJson_Iq_Screen_Image_Size_Y,
		EJson_Iq_Focus_Value,
		EJson_Iq_Bright_Value,
		EJson_Iq_Resol_X_Value,
		EJson_Iq_Resol_Y_Value,
		EJson_Iq_Cam_Angle_Value,
		EJson_Iq_Cam_Gain,
		EJson_Iq_Exposure_Time,
		EJson_Iq_Image_Jude,
		EJson_Iq_Image_File_Name,

		EJson_Dimesion_Judge_Result,
		EJson_Dimesion_Total_NG_Count,
		EJson_Dimesion_Reason_All,
		EJson_Dimesion_Reason_All_Real,
		EJson_Dimesion_Reason_Main,
		EJson_Dimesion_Reason_Main_Real,
		EJson_Dimesion_NG_Value,
		EJson_Dimesion_Name,
		EJson_Dimesion_Name_Real,
		EJson_Dimesion_Camera_Location,
		EJson_Dimesion_Camera_Number,
		EJson_Dimesion_Screen_Number,
		EJson_Dimesion_Value,
		EJson_Dimesion_Start_Point_X,
		EJson_Dimesion_End_Point_X,
		EJson_Dimesion_Start_Point_Y,
		EJson_Dimesion_End_Point_Y,
		EJson_Dimesion_Judge,
		EJson_Dimesion_Cell_Position,
		EJson_Dimesion_Inout,
		EJson_Dimesion_GL,
		EJson_Dimesion_Offset,

		EJson_Appearance_Judge_Result,
		EJson_Appearance_Total_NG_count,
		EJson_Appearance_Reason_All,
		EJson_Appearance_Reason_All_Real,
		EJson_Appearance_Reason_Main,
		EJson_Appearance_Reason_Main_Real,

		EJson_Defect_Index,
//		EJson_Defect_DL_Class,
//		EJson_Defect_DL_Score,
		//EJson_Defect_Type_DL_Base_Name,
		EJson_Defect_Type_Rule_Base_Name,
		//EJson_Defect_Type_DL_Base_Name_Real,
		EJson_Defect_Type_Rule_Base_Name_Real,
		EJson_Defect_Camera_Type, // LineScan, Mono Area,..etc
		EJson_Defect_Camera_Location,
		EJson_Defect_Camera_Number,
		EJson_Defect_Screen_Number,
		EJson_Defect_Insp_Position,
		EJson_Defect_Criteria_Point_X, //외관검사 기준 좌표의 X [pxl]_절대 위치 Image좌,상단(0,0)
		EJson_Defect_Criteria_Point_Y, //외관검사 기준 좌표의 Y [pxl]_절대 위치 Image좌,상단(0,0)
		EJson_Defect_Relative_Point_R_PX, //불량 발생위치와 기준좌표간 거리 R [pxl]_검사별 지정된 기준좌표로 부터
		EJson_Defect_Relative_Point_R_Angle, //불량 발생 위치와 기준좌표간 각도 [°]_검사별 지정된 기준좌표 및 기준선으로 부터
		EJson_Defect_Absolute_Img_X, //Image 기준 불량 발생 위치 X [pxl]_절대 위치 Image좌,상단(0,0)
		EJson_Defect_Absolute_Img_Y, //Image 기준 불량 발생 위치 Y [pxl]_절대 위치 Image좌,상단(0,0)
		EJson_Defect_Img_Width,
		EJson_Defect_Img_Length,
		EJson_Defect_Area_Pixels,
		EJson_Defect_Gray_Lv_Avg,
		EJson_Defect_Gray_Lv_Max,
		EJson_Defect_Gray_Lv_Min,
		EJson_Defect_Gray_Lv_Range,
		EJson_Defect_Gray_Lv_Stddev,
		EJson_Defect_Ratio_Width_Length, //불량 장축의 기울기
		EJson_Defect_Angle, //불량 각도
		EJson_Defect_Elongation, // 불량의 휨 정도
		EJson_Defect_Boundary_Pixel_Lengh, // defect 윤곽 둘레 길이

		EJson_Defect_Roi_Gray_Lv_Max, //ROI 내 평균 Gray Level 값(코팅부, 미코팅부(Tab), 절연부)
		EJson_Defect_Roi_Gray_Lv_Avg, //ROI 내 평균 Gray Level 값(코팅부, 미코팅부(Tab), 절연부)
		EJson_Defect_Roi_Gray_Lv_Min, //ROI 내 평균 Gray Level 값(코팅부, 미코팅부(Tab), 절연부)
		EJson_Defect_Roi_Gray_Lv_Median, //ROI 내 평균 Gray Level 값(코팅부, 미코팅부(Tab), 절연부)
		EJson_Defect_Roi_Gray_Lv_Stddev, //ROI 내 평균 Gray Level 값(코팅부, 미코팅부(Tab), 절연부)
		EJson_Defect_Cell_Position,
		EJson_Defect_Inout,
		EJson_Defect_Crop_Image_File_Name,

		EJsonApperance_Count,
	};


	enum ESPCTimeLogType
	{
		ESPCTimeLogType_Start = 0,    //Year ~ ms Trigger IN
		ESPCTimeLogType_End,          //Year ~ ms Result OUT
		ESPCTimeLogType_InspTackTime, // .3 ms   start ~ End
		ESPCTimeLogType_InspProcessingTime,  //.3ms  Grab + INS

		ESPCTimeLogType_Count,


	};



	typedef struct sSPCDefectCode
	{
		CString strCode[ESPCDefectCode_Count];

		sSPCDefectCode()
		{
			//strCode[ESPCDefectCode_OK] = _T("");
			strCode[ESPCDefectCode_ABIM] = _T("ABIM");
			strCode[ESPCDefectCode_FADF] = _T("FADF");
			strCode[ESPCDefectCode_TADF] = _T("TADF");
			strCode[ESPCDefectCode_EADF] = _T("EADF");
			strCode[ESPCDefectCode_NODF] = _T("NODF");
		}
	}SSPCDefectCode;

	struct sJSonGeneralData // 상위 기분 셋팅 데이터
	{
		ECameraNum eCamNum = ECameraNum_Upper;
		long lCellCount = 0;
		long lDimensionNGCount = 0;
		long ldefectNGCount = 0;

		long lLineNumber = 0;
		long lMachineNumber = 0;
		long lLaneNumber = 0;

		CString strVisionType = _T("");
		CString strProcessGroup = _T("");
		CString strProcessName = _T("");
		CString strCameraType = _T("");
		CString strInsPosition = _T("");

		CString strVirtualCellID = _T("");
		CString strCellID = _T("");
		CString strLotID = _T("");
		CString strRecipeID = _T("");
		CString strEqpID = _T("");
		CString strEqpIns = _T("");
		CString strNgOut = _T("");
		CString strProcessDirction = _T("");


		bool bCellJudge = false;
		bool bDimensionJudge = false;
		bool bDefectJudge = false;

		CString strInput_Time = _T("");
		CString strOutput_Time = _T("");
		CString strTackTime = _T("");
		CString strInspProcessingTime = _T("");


	
	};

	struct sJSonKey
	{
		LPCTSTR lpszKey[EJsonApperance_Count];

		sJSonKey()
		{
			lpszKey[EJson_TXN_ID] = _T("TXN_ID");
			lpszKey[EJson_inDName] = _T("inDTName");
			lpszKey[EJson_outDTName] = _T("outDTName");
			lpszKey[EJson_actID] = _T("actID");
			lpszKey[EJson_refDS] = _T("refDS");
		
			lpszKey[EJson_IN_DATA] = _T("IN_DATA");
			lpszKey[EJson_CATEGORY] = _T("CATEGORY");
			lpszKey[EJson_Vision_Input_Time] = _T("VISION_INPUT_TIME");
			lpszKey[EJson_Vision_Output_Time] = _T("VISION_OUTPUT_TIME");
			lpszKey[EJson_Insp_TackTime] = _T("INSP_TACTTIME");
			lpszKey[EJson_Insp_Processing_Time] = _T("INSP_PROCESSING_TIME");
			lpszKey[EJson_Recipe_ID] = _T("RECIPE_ID");
			lpszKey[EJson_Ng_Out] = _T("NG_OUT");
			lpszKey[EJson_EQP_ID] = _T("EQP_ID");

			lpszKey[EJson_EQP_Insp_ID] = _T("EQP_INSP_ID");
			lpszKey[EJson_Process_Group] = _T("PROCESS_GROUP");
			lpszKey[EJson_Process_Name] = _T("PROCESS_NAME");
			lpszKey[EJson_Line_Number] = _T("LINE_NUMBER");
			lpszKey[EJson_Machine_Number] = _T("MACHINE_NUMBER");
			lpszKey[EJson_Lane_Number] = _T("LANE_NUMBER");
			lpszKey[EJson_Vision_Type] = _T("VISION_TYPE");
			lpszKey[EJson_Process_Dirction] = _T("PROCESS_DIRECTION");
		
			lpszKey[EJson_Lot_ID] = _T("LOT_ID");
			lpszKey[EJson_Cell_ID] = _T("CELL_ID");
			lpszKey[EJson_Cell_Count_No] = _T("CELL_COUNT_NO");
			lpszKey[EJson_Virtual_Cell_ID] = _T("VIRTUAL_CELL_ID");
			lpszKey[EJson_Cell_Final_Judge] = _T("CELL_FINAL_JUDGE");
		
			lpszKey[EJson_Iq_Camera_Location] = _T("IQ_CAMERA_LOCATION");
			lpszKey[EJson_Iq_Camera_Number] = _T("IQ_CAMERA_NUMBER");
			lpszKey[EJson_Iq_Screen_Number] = _T("IQ_SCREEN_NUMBER");
			lpszKey[EJson_Iq_Cell_Position] = _T("IQ_CELL_POSITION");
			lpszKey[EJson_Iq_Screen_Image_Size_X] = _T("IQ_SCREEN_IMAGE_SIZE_X");
			lpszKey[EJson_Iq_Screen_Image_Size_Y] = _T("IQ_SCREEN_IMAGE_SIZE_Y");
			lpszKey[EJson_Iq_Focus_Value] = _T("IQ_FOCUS_VALUE");
			lpszKey[EJson_Iq_Bright_Value] = _T("IQ_BRIGHT_VALUE");
			lpszKey[EJson_Iq_Resol_X_Value] = _T("IQ_RESOL_X_VALUE");
			lpszKey[EJson_Iq_Resol_Y_Value] = _T("IQ_RESOL_Y_VALUE");
			lpszKey[EJson_Iq_Cam_Angle_Value] = _T("IQ_CAM_ANGLE_VALUE");
			lpszKey[EJson_Iq_Cam_Gain] = _T("IQ_CAMERA_GAIN");
			lpszKey[EJson_Iq_Exposure_Time] = _T("IQ_EXPOSURE_TIME");
			lpszKey[EJson_Iq_Image_Jude] = _T("IMAGE_JUDGE");
			lpszKey[EJson_Iq_Image_File_Name] = _T("IMAGE_FILE_NAME");
		
			lpszKey[EJson_Dimesion_Judge_Result] = _T("DIMENSION_JUDGE_RESULT");
			lpszKey[EJson_Dimesion_Total_NG_Count] = _T("TOTAL_DIMENSION_NG_COUNT");
			lpszKey[EJson_Dimesion_Reason_All] = _T("DIMENSION_REASON_ALL");
			lpszKey[EJson_Dimesion_Reason_All_Real] = _T("DIMENSION_REASON_ALL_REAL");
			lpszKey[EJson_Dimesion_Reason_Main] = _T("DIMENSION_REASON_MAIN");
			lpszKey[EJson_Dimesion_Reason_Main_Real] = _T("DIMENSION_REASON_MAIN_REAL");
			lpszKey[EJson_Dimesion_NG_Value] = _T("DIMENSION_MAIN_NG_VALUE");
			lpszKey[EJson_Dimesion_Name] = _T("DIMENSION_NAME");
			lpszKey[EJson_Dimesion_Name_Real] = _T("DIMENSION_NAME_REAL");
			lpszKey[EJson_Dimesion_Camera_Location] = _T("DIMENSION_CAMERA_LOCATION");
			lpszKey[EJson_Dimesion_Camera_Number] = _T("DIMENSION_CAMERA_NUMBER");
			lpszKey[EJson_Dimesion_Screen_Number] = _T("DIMENSION_SCREEN_NUMBER");
			lpszKey[EJson_Dimesion_Value] = _T("DIMENSION_VALUE");
			lpszKey[EJson_Dimesion_Start_Point_X] = _T("DIMENSION_START_POINT_X");
			lpszKey[EJson_Dimesion_End_Point_X] = _T("DIMENSION_END_POINT_X");
			lpszKey[EJson_Dimesion_Start_Point_Y] = _T("DIMENSION_START_POINT_Y");
			lpszKey[EJson_Dimesion_End_Point_Y] = _T("DIMENSION_START_POINT_Y");
			lpszKey[EJson_Dimesion_Judge] = _T("DIMENSION_JUDGE");
			lpszKey[EJson_Dimesion_Cell_Position] = _T("DIMENSION_CELL_POSITION");
			lpszKey[EJson_Dimesion_Inout] = _T("DIMENSION_INOUT");
			lpszKey[EJson_Dimesion_GL] = _T("DIMENSION_GL");
			lpszKey[EJson_Dimesion_Offset] = _T("DIMENSION_OFFSET");
		
			lpszKey[EJson_Appearance_Judge_Result] = _T("APPEARANCE_JUDGE_RESULT");
			lpszKey[EJson_Appearance_Total_NG_count] = _T("TOTAL_APPEARANCE_NG_COUNT");
			lpszKey[EJson_Appearance_Reason_All] = _T("APPEARANCE_REASON_ALL");
			lpszKey[EJson_Appearance_Reason_All_Real] = _T("APPEARANCE_REASON_ALL_REAL");
			lpszKey[EJson_Appearance_Reason_Main] = _T("APPEARANCE_REASON_MAIN");
			lpszKey[EJson_Appearance_Reason_Main_Real] = _T("APPEARANCE_REASON_MAIN_REAL");
		
			lpszKey[EJson_Defect_Index] = _T("DEFECT_INDEX");
// 			lpszKey[EJson_Defect_DL_Class]                           = _T("");
// 			lpszKey[EJson_Defect_DL_Score]                           = _T("");
//			lpszKey[EJson_Defect_Type_DL_Base_Name]                  = _T("");
			lpszKey[EJson_Defect_Type_Rule_Base_Name] = _T("DEFECT_TYPE_RULE_BASE_NAME");
//			lpszKey[EJson_Defect_Type_DL_Base_Name_Real]             = _T("");
			lpszKey[EJson_Defect_Type_Rule_Base_Name_Real] = _T("DEFECT_TYPE_RULE_BASE_NAME_REAL");
			lpszKey[EJson_Defect_Camera_Type] = _T("DEFECT_CAMERA_TYPE");
			lpszKey[EJson_Defect_Camera_Location] = _T("DEFECT_CAMERA_LOCATION");
			lpszKey[EJson_Defect_Camera_Number] = _T("DEFECT_CAMERA_NUMBER");
			lpszKey[EJson_Defect_Screen_Number] = _T("DEFECT_SCREEN_NUMBER");
			lpszKey[EJson_Defect_Insp_Position] = _T("DEFECT_INSP_POSITION");
			lpszKey[EJson_Defect_Criteria_Point_X] = _T("DEFECT_CRITERIA_POINT_X");
			lpszKey[EJson_Defect_Criteria_Point_Y] = _T("DEFECT_CRITERIA_POINT_Y");
			lpszKey[EJson_Defect_Relative_Point_R_PX] = _T("DEFECT_RELATIVE_POINT_R_PX");
			lpszKey[EJson_Defect_Relative_Point_R_Angle] = _T("DEFECT_RELATIVE_POINT_ANGLE");
			lpszKey[EJson_Defect_Absolute_Img_X] = _T("DEFECT_ABSOLUTE_IMG_X");
			lpszKey[EJson_Defect_Absolute_Img_Y] = _T("DEFECT_ABSOLUTE_IMG_Y");
			lpszKey[EJson_Defect_Img_Width] = _T("DEFECT_IMG_WIDTH");
			lpszKey[EJson_Defect_Img_Length] = _T("DEFECT_IMG_LENGTH");
			lpszKey[EJson_Defect_Area_Pixels] = _T("DEFECT_AREA_PIXELS");
			lpszKey[EJson_Defect_Gray_Lv_Avg] = _T("DEFECT_GRAY_LV_AVG");
			lpszKey[EJson_Defect_Gray_Lv_Max] = _T("DEFECT_GRAY_LV_MAX");
			lpszKey[EJson_Defect_Gray_Lv_Min] = _T("DEFECT_GRAY_LV_MIN");
			lpszKey[EJson_Defect_Gray_Lv_Range] = _T("DEFECT_GRAY_LV_RANGE");
			lpszKey[EJson_Defect_Gray_Lv_Stddev] = _T("DEFECT_GRAY_LV_STDDEV");
			lpszKey[EJson_Defect_Ratio_Width_Length] = _T("DEFECT_RATIO_WIDTH_LENGTH");
			lpszKey[EJson_Defect_Angle] = _T("DEFECT_ANGLE");
			lpszKey[EJson_Defect_Elongation] = _T("DEFECT_ELONGATION");
			lpszKey[EJson_Defect_Boundary_Pixel_Lengh] = _T("DEFECT_BOUNDARY_PIXEL_LENGTH");
			lpszKey[EJson_Defect_Roi_Gray_Lv_Max] = _T("DEFECT_ROI_GRAY_LV_MAX");
			lpszKey[EJson_Defect_Roi_Gray_Lv_Avg] = _T("DEFECT_ROI_GRAY_LV_AVG");
			lpszKey[EJson_Defect_Roi_Gray_Lv_Min] = _T("DEFECT_ROI_GRAY_LV_MIN");
			lpszKey[EJson_Defect_Roi_Gray_Lv_Median] = _T("DEFECT_ROI_GRAY_LV_MEDIAN");
			lpszKey[EJson_Defect_Roi_Gray_Lv_Stddev] = _T("DEFECT_ROI_GRAY_LV_STDDEV");
			lpszKey[EJson_Defect_Cell_Position] = _T("DEFECT_INOUT");
			lpszKey[EJson_Defect_Inout] = _T("DEFECT_CELL_POSITION");
			lpszKey[EJson_Defect_Crop_Image_File_Name] = _T("DEFECT_CROP_IMAGE_FILE_NAME");
		}
	};

	typedef struct sSPCStatus
	{
		CString strTXN_ID = _T("");
		CString strinDName = _T("");
		CString stroutDTName = _T("");
		CString	stractID = _T("");

		CString strrefDS = _T("");

		CString	strIN_Data = _T("");

		CString strCategory = _T("");
		CString strTransfer_Time = _T("");
		CString strEQP_INSP_ID = _T("");
		CString strProcess_Group = _T("");
		CString strProcess_Name = _T("");
		CString strEQP_ID = _T("");
		CString strAgent_SW_Version = _T("");
		CString strVision_Type = _T("");
		CString strInsp_Status = _T("");

	}SSPCStatus;

	typedef struct sAlignVisionData // 단일 데이터...
	{
		//기본 생성 데이터
		CString strTXN_ID = _T("");
		CString strinDName = _T("");
		CString stroutDTName = _T("");
		CString	stractID = _T("");

		CString strrefDS = _T("");

		//In Data
		CString	strIN_DATA = _T("");

		CString strCategory = _T("");
		CString strVision_Input_Time = _T("");
		CString strVision_Output_Time = _T("");
		CString strInsp_TackTime = _T("");
		CString strInsp_Processing_Time = _T("");
		CString strRecipe_ID = _T("");
		CString strNG_Out = _T("");
		CString strEQP_ID = _T("");
		CString strEQP_Insp_ID = _T("");
		CString strProcess_Group = _T("");
		CString strProcess_Name = _T("");
		CString strLine_Number = _T("");
		CString strMachine_Number = _T("");
		CString strLane_Number = _T("");
		CString strVision_Type = _T("");
		CString strProcess_Dirction = _T("");
		CString strLot_ID = _T("");
		CString strCell_ID = _T("");
		CString strCell_Count_No = _T("");
		CString strVirtual_Cell_ID = _T("");
		CString strCell_Final_Judge = _T("");

		//camera Data
		CString strIq_Camera_Location = _T("");
		CString strIq_Camera_Number = _T("");
		CString strIq_Screen_Number = _T("");
		CString strIq_Cell_Position = _T("");
		CString strIq_Screen_Image_Size_X = _T("");
		CString strIq_Screen_Image_Size_Y = _T("");
		CString strIq_Focus_Value = _T("");
		CString strIq_Bright_Value = _T("");
		CString strIq_Resol_X_Value = _T("");
		CString strIq_Resol_Y_Value = _T("");
		CString strIq_Cam_Angle_Value = _T("");
		CString strIq_Cam_Gain = _T("");
		CString strIq_Exposure_Time = _T("");
		CString strIq_Image_Jude = _T("");
		CString strIq_Image_File_Name = _T("");


		//Align Data
		CString strAlign_Judge_Result = _T("");
		CString strAlign_Reason_All = _T("");
		CString strAlign_Name = _T("");
		CString strAlign_Camera_Location = _T("");
		CString strAlign_Camera_Number = _T("");
		CString strAlign_Screen_Number = _T("");
		CString strAlign_Cell_Position = _T("");
		CString strAlign_Point_Judge = _T("");
		CString strAlign_Point_Name = _T("");
		CString strAlign_Point_X_PXL = _T("");
		CString strAlign_Point_Y_PXL = _T("");
		CString strAlign_Point_X_MM = _T("");
		CString strAlign_Point_Y_MM = _T("");
		CString strAlign_Point_T = _T("");
		CString strAlign_Offset_X = _T("");
		CString strAlign_Offset_Y = _T("");
		CString strAlign_Offset_T = _T("");




	}SAlignVisionData;

	// 추가 가변 데이터 작성 필요
	typedef struct sSepaVisionData
	{
		//기본 생성 데이터
		CString strTXN_ID = _T("");
		CString strinDName = _T("");
		CString stroutDTName = _T("");
		CString	stractID = _T("");

		CString strrefDS = _T("");

		//In Data
		CString	strIN_DATA = _T("");

		CString strCATEGORY = _T("");
		CString strVision_Input_Time = _T("");
		CString strVision_Output_Time = _T("");
		CString strInsp_TackTime = _T("");
		CString strInsp_Processing_Time = _T("");
		CString strRecipe_ID = _T("");
		CString strNg_Out = _T("");
		CString strEQP_Insp_ID = _T("");
		CString strProcess_Group = _T("");
		CString strProcess_Name = _T("");
		CString strLine_Number = _T("");
		CString strMachine_Number = _T("");
		CString strLane_Number = _T("");
		CString strVision_Type = _T("");
		CString strProcess_Dirction = _T("");
		CString strLot_ID = _T("");
		CString strCell_ID = _T("");
		CString strCell_Count_No = _T("");
		CString strVirtual_Cell_ID = _T("");
		CString strCell_Final_Judge = _T("");

		//camera Data
		CString strIq_Camera_Location = _T("");
		CString strIq_Camera_Number = _T("");
		CString strIq_Screen_Number = _T("");
		CString strIq_Cell_Position = _T("");
		CString strIq_Screen_Image_Size_X = _T("");
		CString strIq_Screen_Image_Size_Y = _T("");
		CString strIq_Focus_Value = _T("");
		CString strIq_Bright_Value = _T("");
		CString strIq_Resol_X_Value = _T("");
		CString strIq_Resol_Y_Value = _T("");
		CString strIq_Cam_Angle_Value = _T("");
		CString strIq_Cam_Gain = _T("");
		CString strIq_Exposure_Time = _T("");
		CString strIq_Image_Jude = _T("");
		CString strIq_Image_File_Name = _T("");

		// 		//Dimension // 외관검사..결과 
		// 		CString strDemension_
		CString strAppearance_Judge_Result = _T("");
		CString strAppearance_Total_NG_count = _T("");
		CString strAppearance_Reason_All = _T("");
		CString strAppearance_Reason_All_Real = _T("");
		CString strAppearance_Reason_Main = _T("");
		CString strAppearance_Reason_Main_Real = _T("");


		//Defect // 불량판정수 만큼
		CString strDefect_Index = _T("");
		CString strDefect_DL_Class = _T("");
		CString strDefect_DL_Score = _T("");
		CString strDefect_Type_DL_Base_Name = _T("");
		CString strDefect_Type_Rule_Base_Name = _T("");
		CString strDefect_Type_DL_Base_Name_Real = _T("");
		CString strDefect_Type_Rule_Base_Name_Real = _T("");

		CString strDefect_Camera_Type = _T(""); // LineScan, Mono Area,..etc
		CString strDefect_Camera_Location = _T("");
		CString strDefect_Camera_Number = _T("");
		CString strDefect_Screen_Number = _T("");
		CString strDefect_Insp_Position = _T("");
		CString strDefect_Criteria_Point_X = _T(""); //외관검사 기준 좌표의 X [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Criteria_Point_Y = _T(""); //외관검사 기준 좌표의 Y [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Relative_Point_R_PX = _T(""); //불량 발생위치와 기준좌표간 거리 R [pxl]_검사별 지정된 기준좌표로 부터
		CString strDefect_Relative_Point_R_Angle = _T(""); //불량 발생 위치와 기준좌표간 각도 [°]_검사별 지정된 기준좌표 및 기준선으로 부터
		CString strDefect_Absolute_Img_X = _T(""); //Image 기준 불량 발생 위치 X [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Absolute_Img_Y = _T(""); //Image 기준 불량 발생 위치 Y [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Img_Width = _T("");
		CString strDefect_Img_Length = _T("");
		CString strDefect_Area_Pixels = _T("");
		CString strDefect_Gray_Lv_Avg = _T("");
		CString strDefect_Gray_Lv_Max = _T("");
		CString strDefect_Gray_Lv_Min = _T("");
		CString strDefect_Gray_Lv_Range = _T("");
		CString strDefect_Gray_Lv_Stddev = _T("");
		CString strDefect_Ratio_Width_Length = _T(""); //불량 장축의 기울기
		CString strDefect_Angle = _T(""); //불량 각도
		CString strDefect_Elongation = _T(""); // 불량의 휨 정도
		CString strDefect_Boundary_Pixel_Lengh = _T(""); // defect 윤곽 둘레 길이
		CString strDefect_Roi_Gray_Lv_Max = _T("");
		CString strDefect_Roi_Gray_Lv_Avg = _T("");
		CString strDefect_Roi_Gray_Lv_Min = _T("");
		CString strDefect_Roi_Gray_Lv_Median = _T("");
		CString strDefect_Roi_Gray_Lv_Stddev = _T("");
		CString strDefect_Cell_Position = _T("");
		CString strDefect_Inout = _T("");
		CString strDefect_Crop_Image_File_Name = _T("");

	}SSepaVisionData;


	typedef struct sApperanceVisionData // 
	{
		//기본 생성 데이터
		CString strTXN_ID = _T("");
		CString strinDName = _T("");
		CString stroutDTName = _T("");
		CString	stractID = _T("");

		CString strrefDS = _T("");

		//In Data
		CString	strIN_DATA = _T("");

		CString strCATEGORY = _T("");
		CString strVision_Input_Time = _T("");
		CString strVision_Output_Time = _T("");
		CString strInsp_TackTime = _T("");
		CString strInsp_Processing_Time = _T("");
		CString strRecipe_ID = _T("");
		CString strNg_Out = _T("");
		CString strEQP_Insp_ID = _T("");
		CString strProcess_Group = _T("");
		CString strProcess_Name = _T("");
		CString strLine_Number = _T("");
		CString strMachine_Number = _T("");
		CString strLane_Number = _T("");
		CString strVision_Type = _T("");
		CString strProcess_Dirction = _T("");
		CString strLot_ID = _T("");
		CString strCell_ID = _T("");
		CString strCell_Count_No = _T("");
		CString strVirtual_Cell_ID = _T("");
		CString strCell_Final_Judge = _T("");

		//camera Data
		CString strIq_Camera_Location = _T("");
		CString strIq_Camera_Number = _T("");
		CString strIq_Screen_Number = _T("");
		CString strIq_Cell_Position = _T("");
		CString strIq_Screen_Image_Size_X = _T("");
		CString strIq_Screen_Image_Size_Y = _T("");
		CString strIq_Focus_Value = _T("");
		CString strIq_Bright_Value = _T("");
		CString strIq_Resol_X_Value = _T("");
		CString strIq_Resol_Y_Value = _T("");
		CString strIq_Cam_Angle_Value = _T("");
		CString strIq_Cam_Gain = _T("");
		CString strIq_Exposure_Time = _T("");
		CString strIq_Image_Jude = _T("");
		CString strIq_Image_File_Name = _T("");

		//치수 불량
		CString strDimesion_Judge_Result = _T("");
		CString strDimesion_Total_NG_Count = _T("");
		CString strDimesion_Reason_All = _T("");
		CString strDimesion_Reason_All_Real = _T("");
		CString strDimesion_Reason_Main = _T("");
		CString strDimesion_Reason_Main_Real = _T("");
		CString strDimesion_NG_Value = _T("");
		CString strDimesion_Name = _T("");
		CString strDimesion_Name_Real = _T("");
		CString strDimesion_Camera_Location = _T("");
		CString strDimesion_Camera_Number = _T("");
		CString strDimesion_Screen_Number = _T("");
		CString strDimesion_Value = _T("");
		CString strDimesion_Start_Point_X = _T("");
		CString strDimesion_End_Point_X = _T("");
		CString strDimesion_Start_Point_Y = _T("");
		CString strDimesion_End_Point_Y = _T("");
		CString strDimesion_Judge = _T("");
		CString strDimesion_Cell_Position = _T("");
		CString strDimesion_Inout = _T("");
		CString strDimesion_GL = _T("");
		CString strDimesion_Offset = _T("");

		// 		//Dimension
// 		CString strDemension_
		CString strAppearance_Judge_Result = _T("");
		CString strAppearance_Total_NG_count = _T("");
		CString strAppearance_Reason_All = _T("");
		CString strAppearance_Reason_All_Real = _T("");
		CString strAppearance_Reason_Main = _T("");
		CString strAppearance_Reason_Main_Real = _T("");



		//Defect // 
		CString strDefect_Index = _T("");
		CString strDefect_DL_Class = _T("");
		CString strDefect_DL_Score = _T("");
		CString strDefect_Type_DL_Base_Name = _T("");
		CString strDefect_Type_Rule_Base_Name = _T("");
		CString strDefect_Type_DL_Base_Name_Real = _T("");
		CString strDefect_Type_Rule_Base_Name_Real = _T("");

		CString strDefect_Camera_Type = _T(""); // LineScan, Mono Area,..etc
		CString strDefect_Camera_Location = _T("");
		CString strDefect_Camera_Number = _T("");
		CString strDefect_Screen_Number = _T("");
		CString strDefect_Insp_Position = _T("");
		CString strDefect_Criteria_Point_X = _T(""); //외관검사 기준 좌표의 X [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Criteria_Point_Y = _T(""); //외관검사 기준 좌표의 Y [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Relative_Point_R_PX = _T(""); //불량 발생위치와 기준좌표간 거리 R [pxl]_검사별 지정된 기준좌표로 부터
		CString strDefect_Relative_Point_R_Angle = _T(""); //불량 발생 위치와 기준좌표간 각도 [°]_검사별 지정된 기준좌표 및 기준선으로 부터
		CString strDefect_Absolute_Img_X = _T(""); //Image 기준 불량 발생 위치 X [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Absolute_Img_Y = _T(""); //Image 기준 불량 발생 위치 Y [pxl]_절대 위치 Image좌,상단(0,0)
		CString strDefect_Img_Width = _T("");
		CString strDefect_Img_Length = _T("");
		CString strDefect_Area_Pixels = _T("");
		CString strDefect_Gray_Lv_Avg = _T("");
		CString strDefect_Gray_Lv_Max = _T("");
		CString strDefect_Gray_Lv_Min = _T("");
		CString strDefect_Gray_Lv_Range = _T("");
		CString strDefect_Gray_Lv_Stddev = _T("");
		CString strDefect_Ratio_Width_Length = _T(""); //불량 장축의 기울기
		CString strDefect_Angle = _T(""); //불량 각도
		CString strDefect_Elongation = _T(""); // 불량의 휨 정도
		CString strDefect_Boundary_Pixel_Lengh = _T(""); // defect 윤곽 둘레 길이
		CString strDefect_Roi_Gray_Lv_Max = _T("");
		CString strDefect_Roi_Gray_Lv_Avg = _T("");
		CString strDefect_Roi_Gray_Lv_Min = _T("");
		CString strDefect_Roi_Gray_Lv_Median = _T("");
		CString strDefect_Roi_Gray_Lv_Stddev = _T("");
		CString strDefect_Cell_Position = _T("");
		CString strDefect_Inout = _T("");
		CString strDefect_Crop_Image_File_Name = _T("");


	}SApperanceVisionData;


	typedef struct sApperanceIQ
	{

		CString strIq[EJsonApperance_Count];

		sApperanceIQ()
		{
			for(int i = 0; i < EJsonApperance_Count; i++)
				strIq[i] = _T("");
		}


	}SApperanceIQ;

	typedef struct sApperanceDimension
	{
		CString strDimension[EJsonApperance_Count];

		sApperanceDimension()
		{
			for(int i = 0; i < EJsonApperance_Count; i++)
				strDimension[i] = _T("");
		}
	}SApperanceDimension;

	typedef struct sApperanceDefect
	{

		CString strDefect[EJsonApperance_Count];

		sApperanceDefect()
		{
			for(int i = 0; i < EJsonApperance_Count; i++)
				strDefect[i] = _T("");
		}


	}SApperanceDefect;

	typedef struct sEqpInfo
	{
		CString strMachineID = _T("EQPIDBLABLA");
		CString strMachineNoID = _T("EQPIDBLABLA-1");
		CString strVer = _T("1.0.0.0");
	}SEqpInfo;




	enum EModifyReason
	{
		EModifyReason_OnOff = 0,
		EModifyReason_ModifyAlgorithm,
		EModifyReason_ModifySpec,
	};
	enum EInspectType
	{
		EInspectType_Dimension = 0,
		EInspectType_Defect,
		EInspectType_Align,
	};

	//////////////////////////////////////////////////////////////////////////

	/////////////////////////////////////////////////////////////////////////
	typedef struct sModel
	{
		LPCTSTR	lpName;
		long lNum;

		sModel()
		{
			lpName = _T("");
			lNum = 0;
		}

	}SModel;

	static LPCTSTR* GetMessageTemplate()
	{
		static LPCTSTR lpszMessageTemplate[] =
		{
			_T("01.Message1"),
			_T("02.Message2"),
			_T("03.Message3"),
			_T("04.Message4"),
			_T("05.Message5"),
			_T("06.Message6"),
		};

		return lpszMessageTemplate;
	}

	static LPCTSTR GetMessageTemplate2(int nNo)
	{
		static LPCTSTR lpszMessageTemplate[] =
		{
			_T("01.Message1"),
			_T("02.Message2"),
			_T("03.Message3"),
			_T("04.Message4"),
			_T("05.Message5"),
			_T("06.Message6"),
		};

		return lpszMessageTemplate[nNo];
	}

	class CInspectionResult
	{
	public:
		CInspectionResult()
		{
			Reset();
		}
		~CInspectionResult() { }

		enum EResultType
		{
			EResultType_OK = -1,
			EResultType_Empty = 0,
			EResultType_Defect,
			EResultType_Electrode,
			EResultType_Crack,

			EResultType_Align,
			EResultType_Measurement,

			EResultType_UnknownError,

			EResultType_Count,
		};

		enum EStatus
		{
			EStatus_OK = 0,
			EStatus_NG = 1,
		};

		CRavidPoint<int> rpWaferPos;

	private:
		EStatus m_eResult[EResultType_Count];

	public:
		void Reset()
		{
			for(int i = 0; i < EResultType_Count; i++)
				m_eResult[i] = EStatus_OK;
		}

		void SetStatus(EResultType eType, EStatus eStatus)
		{
			if(eType != EResultType_OK)
				m_eResult[eType] = eStatus;

	// 		if(eType != EResultType_UnknownError && eStatus == EStatus_NG)
	// 			m_eResult[EResultType_UnknownError] = EStatus_OK;
		}

		EStatus GetStatus(EResultType eType)
		{
			EStatus eReturn = EStatus_OK;

			if(eType != EResultType_OK)
				eReturn = m_eResult[eType];

			return eReturn;
		}

		EStatus GetStatus()
		{
			EStatus eReturn = EStatus_OK;

			do
			{
				for(int i = 0; i < EResultType_Count; ++i)
				{
					if(m_eResult[i] == EStatus_NG)
					{
						eReturn = (EStatus)i;
						break;
					}
				}
			}
			while(false);

			return eReturn;
		}

		EResultType GetResultType()
		{
			EResultType eReturn = EResultType_OK;

			do
			{
				for(int i = 0; i < EResultType_Count; ++i)
				{
					if(m_eResult[i] == EStatus_NG)
					{
						eReturn = (EResultType)i;
						break;
					}
				}
			}
			while(false);

			return eReturn;
		}

		COLORREF GetColor(EResultType eResult)
		{
			COLORREF clrReturn = RGB(0, 0, 0);

			switch(eResult)
			{
			case CInspectionResult::EResultType_OK:
				clrReturn = LIGHTGREEN;
				break;
			case CInspectionResult::EResultType_UnknownError:
				clrReturn = DARKGRAY;
				break;
			case CInspectionResult::EResultType_Empty:
				clrReturn = LIGHTGRAY;
				break;
			case CInspectionResult::EResultType_Defect:
				clrReturn = RGB(255, 90, 90);		//연붉은색
				break;
			case CInspectionResult::EResultType_Electrode:
				clrReturn = RGB(255, 215, 90);		//오렌지색
				break;
			case CInspectionResult::EResultType_Crack:
				clrReturn = CYAN;
				break;
			case CInspectionResult::EResultType_Align:
				clrReturn = DEEPPINK;
				break;

			default:
				break;
			}

			return clrReturn;
		}

		CString GetName(EResultType eResult)
		{
			CString strReturn = _T("");

			switch(eResult)
			{
			case CInspectionResult::EResultType_OK:
				strReturn = _T("OK");
				break;
			case CInspectionResult::EResultType_UnknownError:
				strReturn = _T("Error");
				break;
			case CInspectionResult::EResultType_Empty:
				strReturn = _T("Empty");
				break;
			case CInspectionResult::EResultType_Defect:
				strReturn = _T("Defect");
				break;
			case CInspectionResult::EResultType_Electrode:
				strReturn = _T("Electrode");
				break;
			case CInspectionResult::EResultType_Crack:
				strReturn = _T("Crack");
				break;
			case CInspectionResult::EResultType_Align:
				strReturn = _T("Align");
				break;
			case CInspectionResult::EResultType_Measurement:
				strReturn = _T("Measurement");
				break;
			default:
				break;
			}

			return strReturn;
		}

		EResultType GetResultType(CString strResult)
		{
			EResultType eType = CInspectionResult::EResultType_UnknownError;


			if((strResult == _T("Error")))
			{
				eType = CInspectionResult::EResultType_UnknownError;

			}
			else if((strResult == _T("Empty")))
			{
				eType = CInspectionResult::EResultType_Empty;

			}
			else if((strResult == _T("Defect")))
			{
				eType = CInspectionResult::EResultType_Defect;

			}
			else if((strResult == _T("Electrode exposure")))
			{
				eType = CInspectionResult::EResultType_Electrode;

			}
			else if((strResult == _T("Crack")))
			{
				eType = CInspectionResult::EResultType_Crack;

			}
			else if((strResult == _T("Align")))
			{
				eType = CInspectionResult::EResultType_Align;

			}
			return eType;
		}


		COLORREF GetResultColor()
		{
			return GetColor(GetResultType());
		}

		CString GetResultName()
		{
			return GetName(GetResultType());
		}

		inline CInspectionResult& CInspectionResult::operator=(const CInspectionResult& cResult)
		{
			for(int nIdx = 0; nIdx < EResultType_Count; nIdx++) m_eResult[nIdx] = cResult.m_eResult[nIdx];
			return *this;
		}
	};

	typedef struct _sImageInfo
	{
		_sImageInfo(CRavidImage* pRI)
		{
			if(pRI)
			{
				pImage = new CRavidImage(pRI);
			}
		}

		_sImageInfo(CRavidImage* pRI, int nIndex )
		{
			if(pRI)
			{
				pImage = new CRavidImage(pRI);
				nIdx = nIndex;
			}
		}

		_sImageInfo(_sImageInfo* pImageInfo)
		{
			if(pImageInfo)
			{
				if(pImageInfo->pImage)
					pImage = new CRavidImage(pImageInfo->pImage);

				nIdx = pImageInfo->nIdx;
			}
		}

		~_sImageInfo()
		{
			if(pImage)
			{
				delete pImage;
				pImage = nullptr;
			}
		}

		int nIdx = 0;
		CRavidImage* pImage = nullptr;

	}
	SImageInfo;

	typedef struct _sInspectionInfo
	{
		int	nIndex = 0;
		float fMaxDefectSize = 0.f;

		bool bAlignMode = false;
		bool bException = false;
		CRavidPoint<int> rpWaferPos;
		CRavidQuadrangle<double> rqdCellArea;

		CRavidPoint<double> rqAlignDistance;
		double dblAlignAngle = 0.f;

		CInspectionResult cResult;
		std::vector<SMeasuredData> vctMeasureResult;
		std::vector<SDefectData> vctDefectResult;

		std::vector<SImageInfo*> vctImg;


		void Release()
		{
			ImageClear();

			cResult.Reset();

			rqAlignDistance.SetPoint(0.f, 0.f);
			rqdCellArea.SetQuadrangle(0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f);
			fMaxDefectSize = 0.f;
			nIndex = 0;

			bAlignMode = false;
			vctMeasureResult.clear();

		}

		~_sInspectionInfo()
		{
			Release();
		}

		void ImageClear()
		{
			for(auto iter = vctImg.begin(); iter != vctImg.end(); ++iter)
			{
				if(!*iter)
					continue;

				delete *iter;
				*iter = nullptr;
			}

			vctImg.clear();

		}

		void Copy(_sInspectionInfo* pII)
		{
			do
			{
				if(!pII)
					break;

				Release();


				for(auto& iter : pII->vctImg)
				{
					if(!iter)
						continue;

					SImageInfo* pNewImage = new SImageInfo(iter);
					if(!pNewImage)
						continue;

					vctImg.push_back(pNewImage);
				}

				nIndex = pII->nIndex;
				fMaxDefectSize = pII->fMaxDefectSize;
				cResult = pII->cResult;
			}
			while(false);
		}
	}
	SInspectionInfo;



#define R2P(r, a) (r) / (a)
#define P2R(p, a) (p) * (a)

#pragma pack(push, 1)
	struct SdefaultModelParam
	{
		// 1. Model info
		ModelParam(double, dblCellSizeX);
		ModelParam(double, dblCellSizeY);
		ModelParam(long, nSortingCriteria);
		// 2. Light
		//    2.1. Bar Light
		ModelParamArray(unsigned char, cLightBrightness, 5);
		// 3. Align
		//    3.1. Cell
		ModelParamArray(unsigned char, cCellGV, 2);
		//       3.1.1 Teaching Box
		ModelParamArray(CString, strCellFindAreaBox1, 4);
		ModelParamArray(CString, strCellFindAreaBox2, 4);
		//       3.1.2 Line
		ModelParamArray(long, nCellLineTransitionType, 2);
		ModelParamArray(long, nCellLineTransitionChoice, 2);
		ModelParamArray(double, dblCellLineTolerance, 2);
		ModelParamArray(double, dblCellLineThreshold, 2);
		ModelParamArray(double, dblCellLineMinimumAmplitude, 2);
		ModelParamArray(double, dblCellLineThickness, 2);
		ModelParamArray(double, dblCellLineSamplingStep, 2);
		ModelParamArray(double, dblCellLineOutLiersThreshold, 2);
		ModelParamArray(double, dblCellLineSetNumOfPass, 2);
		// 4. Inspect
		//    4.1. Upper Cell
		//       4.1.1. Threshold
		ModelParamArray(long, nLeftUse, 2);
		ModelParamArray(CString, strLeftRegionOffset, 2);
		ModelParamArray(unsigned char, cLeftAbsGV, 2);
		ModelParamArray(long, nLeftBlockSize, 2);
		ModelParamArray(long, nLeftConstant, 2);
		//       4.1.2. Cluster
		ModelParam(long, nLeftClusterUse);
		ModelParam(double, dblLeftClusterCandidateSize);
		ModelParam(double, dblLeftClusterInflateOffset);
		//       4.1.3. Defect Judgment
		//          4.1.3.1. Condition 1
		ModelParam(long, nLeftDefectCondition1Operation);
		ModelParam(double, dblLeftDefectCondition1Size);
		//          4.1.3.2. Condition 2
		ModelParam(long, nLeftDefectCondition2Operation);
		ModelParam(double, dblLeftDefectCondition2Size);
		ModelParam(long, nLeftDefectCondition2Count);
		//          4.1.3.3. Condition 3
		ModelParam(long, nLeftDefectCondition3Operation);
		ModelParam(double, dblLeftDefectCondition3Size);
		ModelParam(long, nLeftDefectCondition3Count);
		ModelParam(double, dblLeftDefectCondition3Distance);
		//       4.1.4 Electrode
		ModelParamArray(unsigned char, dblLeftElectrodeGV, 3);
		ModelParam(double, dblLeftElectrodeSize);
		//       4.1.5 Filtering Defect
		ModelParam(long, nUppSuburbAreaLimit);
		ModelParam(unsigned char, nUppSuburbAreaGV);
		ModelParam(long, nUppCreaseAreaLimit);
		ModelParam(double, dblUppCreaseRatio);
		ModelParam(CString, strUppFDOptionGV);
		//    4.2. Lower Cell
		//       4.2.1. Threshold
		ModelParamArray(long, nRightUse, 2);
		ModelParamArray(CString, strRightRegionOffset, 2);
		ModelParamArray(unsigned char, cRightAbsGV, 2);
		ModelParamArray(long, nRightBlockSize, 2);
		ModelParamArray(long, nRightConstant, 2);
		//       4.2.2. Cluster
		ModelParam(long, nRightClusterUse);
		ModelParam(double, dblRightClusterCandidateSize);
		ModelParam(double, dblRightClusterInflateOffset);
		//       4.2.3. Defect Judgment
		//          4.2.3.1. Condition 1
		ModelParam(long, nRightDefectCondition1Operation);
		ModelParam(double, dblRightDefectCondition1Size);
		//          4.2.3.2. Condition 2
		ModelParam(long, nRightDefectCondition2Operation);
		ModelParam(double, dblRightDefectCondition2Size);
		ModelParam(long, nRightDefectCondition2Count);
		//          4.2.3.3. Condition 3
		ModelParam(long, nRightDefectCondition3Operation);
		ModelParam(double, dblRightDefectCondition3Size);
		ModelParam(long, nRightDefectCondition3Count);
		ModelParam(double, dblRightDefectCondition3Distance);
		//       4.2.4 Electrode
		ModelParam(unsigned char, dblRightElectrodeGV);
		ModelParam(double, dblRighElectrodeSize);
		//       4.2.5 Filtering Defect
		ModelParam(long, nLowSuburbAreaLimit);
		ModelParam(unsigned char, nLowSuburbAreaGV);
		ModelParam(long, nLowCreaseAreaLimit);
		ModelParam(double, dblLowCreaseRatio);
		ModelParam(CString, strLowFDOptionGV);
		//    4.3. Sort
		ModelParam(long, nSortUse);
		ModelParam(double, dblSortAcceptSizeRatio);
		//    4.4. Masking
		ModelParam(unsigned long, nMaskingShape);
		ModelParam(unsigned long, nMaskingSizeX);
		ModelParam(unsigned long, nMaskingSizeY);
		// 5. Option
		ModelParam(CString, strMachineID);
		ModelParam(long, nPassOtion);
		ModelParam(long, nPassOtion_measurement);
		ModelParam(long, nPassOtion_Defect);
		ModelParam(long, nSaveOkImage);
		ModelParam(long, nSaveNGImage);
		ModelParam(long, nSaveDuration);
		ModelParam(long, nSaveImageDuration);
		ModelParam(long, nLanguageType);
		ModelParam(long, nSaveImageType);
		ModelParam(long, nJPGCompression);
	};
#pragma pack(pop)


	
}


namespace CDefinitionFunction
{
	void SetLabelColor(CCtrlLabel& clLabel, COLORREF clrText, COLORREF clrBackground, int nFontSize, bool bFontBold);
	void SetButtonColor(CCtrlButtonST& cbButton, COLORREF clfForegroundOut, COLORREF clfForegroundIn, COLORREF clfBackgroundOut, COLORREF clfBackgroundIn, BOOL bDrawBorder, CFont* pFont, BOOL bRedraw);
};