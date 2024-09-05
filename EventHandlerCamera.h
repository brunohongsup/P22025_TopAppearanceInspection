#pragma once

//////////////////////////////////////////////////////////////////////////

#include "Definition.h"
#include "EHBase.h"
#include "ImageCameraView.h"
#include "FormViewRegister.h"


#include "CommonCls/RavidAssistDskim.h"
#include "Inspection.h"
#include <unordered_map>
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// using namespace Ravid;
// using namespace Ravid::Framework;
// using namespace Ravid::Device;
// using namespace Ravid::Algorithms;
// using namespace Ravid::Mathematics;
// using namespace Ravid::Miscellaneous;
//////////////////////////////////////////////////////////////////////////
using namespace CDefinition;


class CEventHandlerCamera : public CEHBase
{
public:
	CEventHandlerCamera();
	//////////////////////////////////////////////////////////////////////////
	CEventHandlerCamera(CDefinition::EDeviceNo eDevNo);
	//////////////////////////////////////////////////////////////////////////
	virtual ~CEventHandlerCamera();

	//////////////////////////////////////////////////////////////////////////
// 	template <typename Type0>
// 	inline void InternalMakeInvalidGeometry(CRavidGeometry* pGeo);
// 	inline void MakeInvalidGeometry(CRavidGeometry* pGeo);
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	//재정의 시작
public:
	virtual void OnInspect(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
	virtual void OnTeach(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ Ravid::Framework::CTeachingObject* pTeachingObject, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
	virtual void OnAcquisition(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ Ravid::Device::CDeviceBase* pDevice = nullptr);
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

	virtual void OnTerminate() { }
	//재정의 끝
	//////////////////////////////////////////////////////////////////////////

public:
	//////////////////////////////////////////////////////////////////////////

	//사용자 정의 함수 시작
	//Camera ImageBuffer Setting
	bool SetCameraImageBuffer();

	//Camera ImageBuffer Reset
	bool ResetCameraImageBuffer();

	//Camera ImageBuffer Clear
	void ClearCameraImageBuffer();

	void CameraBufferRotateAndPasteColor(_In_ CRavidImage *pImgInfo, _In_ int nCount, _In_ bool bLastShot);
	void CameraBufferRotateAndPasteMono(_In_ CRavidImage *pImgInfo, _In_ int nCount, _In_ bool bLastShot);

	bool RotateImage(_In_ CRavidImage *pImgInfo, _In_ int nCh, _In_ int nCount);

	CRavidImage* GetGrayImage(CRavidImage *pSrc, CRavidRect<double> rrROI, eColorImageCalType eType);
	CRavidImage* GetGrayImage_SIMD(CRavidImage *pSrc, CRavidRect<double> rrROI, eColorImageType eType);

	// Line Scan Camera 

	bool GrabStart();
	bool GrabStop();
	bool TriggerStart();

	void SetGrabCount(int nCount) { m_nGrabCount = nCount; }
	int	GetGrabCount() { return m_nGrabCount; }

	void SetGrabEnd(bool bSet) { m_bGrabEnd = bSet; }
	bool IsGrabEnd() { return m_bGrabEnd; }

	void SetInspectionEnd(InspectKind eType, bool bSet) { m_bInspectionEnd[eType] = bSet; }
	bool IsInspectionEnd(InspectKind eType) { return m_bInspectionEnd[eType]; }
 
	CInspectionResult GetInspectionResult(InspectKind eType) { return m_pResult[eType]; }
	void SetInspectionResult(InspectKind eType, CInspectionResult cIn) { m_pResult[eType] = cIn; }

	void StartMeasureThread();
	void StopMeasureThread();

	void StartFindDefectThread();
	void StopFindDefectThread();

	//사용자 정의 함수 끝

	void SetMeasuredData(std::vector<SMeasuredData> vct) {m_vctMeasured = vct;}
	std::vector<SMeasuredData> GetMeasuredData() { return m_vctMeasured; }

	void SetDefectedData(std::vector<SDefectData> vct) { m_vctDefected = vct; }
	std::vector<SDefectData> GetDefectedData() { return m_vctDefected; }


	//////////////////////////////////////////////////////////////////////////

//	CDefinition::SInspectInfo* GetInspectInfo();
//	CCriticalSection* GetCriticalSection() { return &m_csInspectInfo; }
//	std::deque<CDefinition::SInspectInfo*> m_DeqInspectInfo;
//	CCriticalSection m_csInspectInfo;

	void DrawImageDefectMap(std::vector<SDefectData> vct);

	CRavidImage* GetDefectMapImageInfo(){return &m_rlDefctMapBuff;}

	void SetDefectMapClear()
	{
		if(m_rlDefctMapBuff.GetBuffer())
			m_rlDefctMapBuff.Clear();
	}

private:
	//////////////////////////////////////////////////////////////////////////
	//사용자 정의 변수 시작
	std::deque<SImageInfo*> m_deqMeasureInfo;
	CCriticalSection m_csMeasureInfo;
	volatile bool m_bMeasureThread = false;
	ThreadContext* m_pMeasureThread;

	std::deque<SImageInfo*> m_deqFindDefectInfo;
	CCriticalSection m_csFindDefectInfo;
	volatile bool m_bFindDefectThread = false;
	ThreadContext* m_pFindDefectThread;


	std::unordered_map<int, sFindEdgeLine> m_mapLineParam;
	CDefinition::EDeviceNo m_eDevNo;

	std::vector<SMeasuredData> m_vctMeasured;
	std::vector<SDefectData> m_vctDefected;

	CRavidImage m_rCameraImage;

	// Only Color Line Camera 
	CRavidImage m_rImageBufferMono;
	CRavidImage m_rImageBufferMonoTong;


	// defectmap buffer
	CRavidImage m_rlDefctMapBuff;


	volatile int m_nGrabCount = 0;
	volatile bool m_bGrabEnd = false;
	volatile bool m_bInspectionEnd[InspectKind_Count] = {false, false};
	
	CInspectionResult m_pResult[InspectKind_Count];

	CCriticalSection m_csBuffer;

	//사용자 정의 변수 끝
	//////////////////////////////////////////////////////////////////////////
};

