#pragma once

#include "Definition.h"
#include "CommonCls/UtilCommFuncFile.h"
#include "CommonCls/Util.h"
#include "CommonCls/VisionSvcFileCleaner.h"
#include "EHBase.h"
#include "EHDeviceRS232C_MVSol.h"

#include "ImageCameraView.h"

#include "assert.h"
#include "EHBase.h"

#include <queue>

// Error : 외부참조 Error 발생 시 솔루션에 파일 추가 하시오.

using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Miscellaneous;
using namespace Ravid::Mathematics;


class CEventHandlerComm : public CEHBase
{
public:
	CEventHandlerComm();
	virtual ~CEventHandlerComm();
	
	void SetInstance(_In_ void* pInstance);
	void* GetInstance();

	virtual void OnInspect(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);

	virtual void OnAcquisition(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ Ravid::Device::CDeviceBase* pDevice = nullptr);
	virtual void OnReceivingPacket(_In_ CPacket* pPacket, _In_ Device::CDeviceBase* pDevice);
	virtual void OnLogMessage(_In_ SRavidLogData* pLogData);

	virtual void OnSequenceStart();
	virtual void OnSequencePause();
	virtual void OnSequenceStop();

	virtual void OnOpenModel(_In_ CModelInfo* pModelInfo);
	virtual void OnCloseModel(_In_ CModelInfo* pModelInfo);

	virtual void OnLogIn(_In_ CString strUserName, _In_ EUserType eChangedUserType);
	virtual void OnLogOut();

	virtual void OnModelParameterSaveChanged();

	virtual void OnDeviceInitialized(_In_ Device::CDeviceBase* pDevice);
	virtual void OnDeviceTerminated(_In_ Device::CDeviceBase* pDevice);

	virtual void OnStartImageInspectionTool();
	virtual void OnEndImageInspectionTool();

	virtual EEventHandlerCloseMethod OnClose() { return EEventHandlerCloseMethod_Default; }

	virtual void OnUserToolbarEventRavidMainFrame(_In_ UINT ulResourceID);
	virtual void OnToolbarEventRavidMainFrame(ERavidToolBarEventMainFrame eEvent);
	virtual void OnToolbarEventRavidChildFrameBase(_In_ CView* pView, _In_ ERavidToolBarEventChildFrameBase eEvent);
	virtual void OnToolbarEventRavidImageView(_In_ CRavidImageView* pView, _In_ ERavidToolBarEventImageView eEvent);
	virtual void OnToolbarEventRavidLogViewer(_In_ CRavidLogViewer* pView, _In_ ERavidToolBarEventLogViewer eEvent);
	virtual void OnToolbarEventImageProcessingTool(_In_ CRavidImageProcessingTool* pView, _In_ ERavidToolBarImageProcessingTool eEvent);
	virtual void OnCloseModelManager();
	virtual void OnRunUIConfiguration(_In_ long nNumber);


	//////////////////////////////////////////////////////////////////////////////////////////////////////////

	void Initialize();
	void Terminate();


	bool SetFileCleaner();
	void TerminateFileCleaner();

	void UpdateModel();

	void WhenItOpenModelInit();
	///////////////////////////////////////////////////////////////////////////////////////////////////////////



	//bool IsInIOEvent(CDefinition::EInputIO eIn);
	//bool OutIOEvent(CDefinition::EOutputIO eOut, bool bOn);


	bool WriteWordBit(_In_ LPCTSTR lAddress, _In_ bool bOn, _In_ short nPos = 0);
	bool ReadWordBit(_In_ LPCTSTR lAddress, _In_ short nPos = 0);

	bool WriteData(_In_ LPCTSTR lAddress, _In_ double dblData);
	bool WriteData(_In_ LPCTSTR lAddress, _In_ short nData);
	bool WriteData(_In_ LPCTSTR lAddress, _In_ long lData);

	short ReadData(_In_ LPCTSTR lAddress);


	bool ReadCellID(/*_In_ CDefinition::ECamera eLine*/);
	bool WriteCellID();

	bool WriteAGCData(int nMaxCount);


	/////////////
	bool SendToPLCMadeData();



	bool ConvertPLCWord(long nValue, long& nFirst, long& nSecond);

	double ReadDoubleWord(_In_ LPCTSTR lAddress);



	bool ChangeCameraROI();

	void SetHDDCapacityLimit(long lNum) { m_lHDDCapacityLimit = lNum; }
	long GetHDDCapacityLimit() { return m_lHDDCapacityLimit; }


	bool AssignString(TCHAR** lpszDst, const TCHAR* lpszSrc);
	bool AssignString(const TCHAR** lpszDst, const TCHAR* lpszSrc);
	bool DeleteStringFromHeap(TCHAR** lpszString);
	bool DeleteStringFromHeap(const TCHAR** lpszString);

	//////////////////////////////////////////////////////////////////////////
	/// Light Controller
	bool LightSetting(CDefinition::EEventHandlerNo eHType, bool bCompulsion = false, bool bLaserAGCMode = false);
	bool SetBrightValue(int nDevice, int nCh, int nBrightness);
	bool SetOnTime(int nDevice, int nCh, int nOnTime);
	bool SetLimit(int nDevice, int nCh, int nLimit);
	bool SetLightOn(int nDevice, int nCh);
	bool SetLightOff(int nDevice, int nCh);
	bool SetPageData(int nDevice, int nPageNumber, int nOnTime1, int nBrightValue1, int nOnTime2, int nBrightValue2, int nOnTime3, int nBrightValue3, int nOnTime4, int nBrightValue4);
	bool SetActivePageNumber(int nDevice, int nPageNumber);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Thread
	void StartReadPLCDataThread();
	void StopReadPLCDataThread();

	void StartMultiWorkThread();
	void StopMultiWorkThread();

	void StartAliveThread();
	void StopAliveThread();
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	void StartCameraLive(int nPortNumber, int nCameraCh, bool bLive, bool bOn);

	void ManualTrigger(int nPortNumber,int nCameraCh);

	bool CameraGrabReady(int nCameraCh, bool bOn);

	bool SoftTrigger(int nCameraCh, bool bOn);

	bool SetCamraExpose(int nCameraCh, int nVal = 10);


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MVSol Setting

	bool SetMVSolEncoder(int nPortNumber,int nENCLineCh);
	bool SetMVSolTrigger(int nPortNumber,int nENCLineCh);
//	bool SetTriggerPos(int nPortNumber,CDefinition::EEventHandler eHandler, CDefinition::EStage eStage, bool bClearAll = false, bool bReverse = false);

	bool TriggerEnable(int nPortNumber,int nENCLineCh); // Off On 한번에 100 ms 
	bool TriggerEnableOff(int nPortNumber, int nENCLineCh);
	bool TriggerEnableOn(int nPortNumber, int nENCLineCh);


	bool TriggerCountClear(int nPortNumber,int nENCLineCh);
	bool EncoderCountClear(int nPortNumber,int nENCLineCh);

	bool SetMVSolFactoryInit(int nPortNumber);

	bool SetMVSolInitialize(int nPortNumber,int nENCLineCh);

	//////////////////////////////////////////////
	// MVSol laser Only Test

	// 모션 출발 전 Setting.
//	bool SetMVSolPreReady(int nPortNumber,int nENCLineCh, CDefinition::EStage eStage, bool bClearAll = false, bool bReverse = false);

	// 모션 출발 직전 활성화.
	bool SetMVSolStartReady(int nPortNumber,int nENCLineCh);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// AGC
	void SetAGCDataReset()
	{

		ZeroMemory(m_lAGCDatas, sizeof(m_lAGCDatas));

	}


	void SetInspectionException(bool bSet){m_bInspectEeception = bSet;}
	bool GetInspectionException(){return m_bInspectEeception;}

	void CopyModelFolder();
private:

	bool m_bMultiWorkThreadSignalFlg = false;
	bool m_bInspectEeception = false;

	volatile bool m_bReadPLCDataThread = false;
	volatile bool m_bMultiWorkThread = false;
	volatile bool m_bAliveThread = false;

	unsigned char m_nFolderAutoDelete = 0;
	BYTE m_cLightLimit[8] = { 0, };
	BYTE m_cLightBrightness[8] = { 0, };
	long m_nLightOnTime[8] = { 0, };
	long m_nReadDatas[2] = { 0, };
	long m_nStoragePeriod = 0;
	long m_lHDDCapacityLimit = 0;

	// Max Data...30000
	long m_lAGCDatas[15][2000] = { 0, };

	float m_fStorageCapacity = 0.f;
	double m_dblPosDataBackUPdblData[2] = { 0, };


	ThreadContext* m_pReadPLCDataThread;
	ThreadContext* m_pMultiWorkThread;
	ThreadContext* m_pAliveThread;
	CVisionSvcFileCleaner m_cFileCleaner;

	CCriticalSection m_csSendPacket;
	CCriticalSection m_csReadPLC;
	CCriticalSection m_csSendPLC;
};

