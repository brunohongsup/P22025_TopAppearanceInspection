#pragma once

// 비전 탐색기에서 다이얼로그를 열었을때 발생되는 이벤트
// 파라메터에 세팅된 PROJECT 클래스에 콜백이 들어온다.
enum FRMMSG_DIALOG_CONSTANT
{
	FRMMSG_DIALOG_CONSTANT_START = 0x7ffc0000,
	FRMMSG_DIALOG_INITALIZE,
	FRMMSG_DIALOG_SHOW,
	FRMMSG_DIALOG_HIDE,
	FRMMSG_DIALOG_DESTROY,
	FRMMSG_DIALOG_CONSTANT_END,
};

// 모델 창에서 OK , CANCEL , APPLY 버튼 클릭시 발생되는 이벤트 모든 PROJECT 클래스에 콜백이 BROADCASTING 된다.
enum FRMMSG_MODEL_CONSTANT
{
	FRMMSG_MODEL_CONSTANT_START = 0x7ffd0000,
	FRMMSG_MODEL_ON_OK,
	FRMMSG_MODEL_ON_CANCEL,
	FRMMSG_MODEL_ON_APPLY,
	FRMMSG_MODEL_ON_WINDOW_CREATE,
	FRMMSG_MODEL_ON_WINDOW_DESTROY,
	FRMMSG_MODEL_CONSTANT_END,
};


// 뷰에서 발생되는 이벤트
// 파라메터에 세팅된 PROJECT 클래스에 콜백이 들어온다.
enum FRMMSG_VIEW_CONSTANT
{
	FRMMSG_VIEW_CONSTANT_START = 0x7ffe0000,
	FRMMSG_VIEW_MEASUREMENT_DATA,	// View에서 Measure기능 수행후 나온 결과값 콜백 SViewMeasurementData 구조체 포인터 날라옴..

	FRMMSG_VIEW_EVENT_START,
	FRMMSG_VIEW_EVENT_LBUTTON_DOWN,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_LBUTTON_UP,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_MBUTTON_DOWN,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_MBUTTON_UP,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_RBUTTON_DOWN,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_RBUTTON_UP,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_LBUTTON_DBLCLK,	// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_MBUTTON_DBLCLK,	// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_RBUTTON_DBLCLK,	// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_MOUSE_MOVE,		// SViewEvent_MouseMove
	FRMMSG_VIEW_EVENT_MOUSE_WHEEL,		// SViewEvent_MouseWheel
	FRMMSG_VIEW_EVENT_KEY_DOWN,			// SViewEvent_Key
	FRMMSG_VIEW_EVENT_KEY_UP,			// SViewEvent_Key
	FRMMSG_VIEW_EVENT_SYSKEY_DOWN,		// SViewEvent_Key
	FRMMSG_VIEW_EVENT_SYSKEY_UP,		// SViewEvent_Key
	FRMMSG_VIEW_EVENT_END,

	FRMMSG_VIEW_CONSTANT_END,
};

class CViewImageBase;

typedef struct sViewEvent_Base
{
	CViewImageBase* pView;
}
	SViewEvent_Base, *LPViewEvent_Base;

typedef struct sViewEvent_MouseMove : public sViewEvent_Base
{
	DPOINT dptImageCoord;
}
	SViewEvent_MouseMove, *LPViewEvent_MouseMove;

typedef struct sViewEvent_MouseWheel : public sViewEvent_MouseMove
{
	short zDelta;
}
	SViewEvent_MouseWheel, *LPViewEvent_MouseWheel;

typedef struct sViewEvent_Key : public sViewEvent_Base
{
	UINT nChar;
}
	SViewEvent_Key, *LPViewEvent_Key;


enum eViewMeasurementDataType
{
	eViewMeasurementDataType_None = 0,
	eViewMeasurementDataType_Char,
	eViewMeasurementDataType_Short,
	eViewMeasurementDataType_Long,
	eViewMeasurementDataType_LongLong,
	eViewMeasurementDataType_Float,
	eViewMeasurementDataType_Double,
};

enum eViewMeasurementType
{
	eViewMeasurementType_Distance = 0,
	eViewMeasurementType_Rectangular,
	eViewMeasurementType_DistanceCircle,
	eViewMeasurementType_Circumcenter,
	eViewMeasurementType_Angle,
	eViewMeasurementType_Azimuth,
	eViewMeasurementType_Gradient,
	eViewMeasurementType_PolygonArea,
	eViewMeasurementType_ParallelDistance,
};

enum eViewMeasurementDataName
{
	eViewMeasurementDataName_DistancePixel = 0,
	eViewMeasurementDataName_DistanceXPixel,
	eViewMeasurementDataName_DistanceYPixel,
	eViewMeasurementDataName_DistanceMilliMeter,
	eViewMeasurementDataName_DistanceXMilliMeter,
	eViewMeasurementDataName_DistanceYMilliMeter,
	eViewMeasurementDataName_CoordX,
	eViewMeasurementDataName_CoordY,
	eViewMeasurementDataName_DimensionPixel,
	eViewMeasurementDataName_DimensionMilliMeter,
	eViewMeasurementDataName_Angle360,
	eViewMeasurementDataName_Angle180,
};

union uViewMeasurementData
{
	char charData;
	short shortData;
	long longData;
	long long longlongData;
	float floatData;
	double doubleData;
};

typedef struct sViewMeasurementData
{
	eViewMeasurementType eType;
	int nDataCount;
	
	eViewMeasurementDataName eDataName[10];
	eViewMeasurementDataType eDataType[10];
	uViewMeasurementData uData[10];
}
	SViewMeasurementData, *LPViewMeasurementData;

class CViewImageBase;

typedef struct sViewTeachingData
{
	CViewImageBase* pImageView;
	int nTeachingType;
	int nCh;
}
	SViewTeachingData, *LPViewTeachingData;



// SEQUENCE 가 시작되거나 종료되거나 일시정지 되었을 때 발생하는 메세지 모든 Project 클래스에 broadcasting 된다.
enum FRMMSG_SEQUENCE_CONSTANT
{
	FRMMSG_SEQUENCE_CONSTANT_START = 0x7fff0000,
	FRMMSG_SEQUENCE_PRESS_START_BUTTON,
	FRMMSG_SEQUENCE_START,
	FRMMSG_SEQUENCE_PRESS_PAUSE_BUTTON,
	FRMMSG_SEQUENCE_PAUSE,
	FRMMSG_SEQUENCE_PRESS_STOP_BUTTON,
	FRMMSG_SEQUENCE_STOP,
	FRMMSG_SEQUENCE_CONSTANT_END,
	FRMMSG_SEQUENCE_PRE_PRESS_STOP_BUTTON,
};

enum FRMMSG_VISIONVIEWIMAGE_TEACHING_CONSTANT
{
	FRMMSG_VISIONVIEWIMAGE_TEACHING_CONSTANT_START = 0x80000000,
	FRMMSG_VISIONVIEWIMAGE_TEACHING_START_BUTTON,		
	FRMMSG_VISIONVIEWIMAGE_TEACHING_START,		
	FRMMSG_VISIONVIEWIMAGE_TEACHING_END_OK_BUTTON,		
	FRMMSG_VISIONVIEWIMAGE_TEACHING_END_CANCEL_BUTTON,	
	FRMMSG_VISIONVIEWIMAGE_TEACHING_END_BUTTON,			
	FRMMSG_VISIONVIEWIMAGE_TEACHING_CONSTANT_END,
};

enum DLGMSG_KEYPAD_CONSTANT
{
	DLGMSG_KEYPAD_CONSTANT_START = 0x80010000,
	DLGMSG_KEYPAD_ON_ENTER,
	DLGMSG_KEYPAD_CONSTANT_END,
};

enum FRMMSG_ALARM_CONSTANT
{
	FRMMSG_ALARM_CONSTANT_START = 0x80020000,
	FRMMSG_ALARM_OCCURS,
	FRMMSG_ALARM_RESET,
};

enum FRMMSG_VISIONVIEWIMAGE_CONSTANT
{
	FRMMSG_VISIONVIEWIMAGE_CONSTANT_START = 0x80030000, 
	FRMMSG_VISIONVIEWIMAGE_DRAGGED_REGION,
	FRMMSG_VISIONVIEWIMAGE_CONSTANT_END,
};

enum FRMMSG_MAINMENU_CONSTANT
{
	FRMMSG_MAINMENU_CONSTANT_START = 0x80040000, 
	FRMMSG_MAINMENU_PRESS_EXIT_BUTTON,
	FRMMSG_MAINMENU_EXIT,
};

enum FRMMSG_MAINFRAME_CONSTANT
{
	FRMMSG_MAINFRAME_CONSTANT_SIZE = 0x80050000,
	FRMMSG_MAINFRAME_CONSTANT_EXECUTE,
};

enum
{
	FRMMSG_LANGUAGE_CHANGED = 0x80060000,
};

enum FRAMMSG_MAINFRAME_USER_LOGIN
{
	FRMMSG_MAIN_LOG_IN = 0x80070000,
	FRMMSG_MAIN_LOG_OUT,
};