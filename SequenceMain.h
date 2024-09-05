#pragma once

//////////////////////////////////////////////////////////////////////////
#include "Definition.h"
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Mathematics;
using namespace Ravid::Miscellaneous;
//////////////////////////////////////////////////////////////////////////

using namespace CDefinition;
class CSequenceMain : public Ravid::Framework::CSequenceInfo
{
public:
	CSequenceMain();
	CSequenceMain(CDefinition::EEventHandlerNo eHandlerNo);
	~CSequenceMain();

	enum EStep
	{
		EStep_Idle = 0,
		EStep_Ready,
		EStep_Wait,
		EStep_GrabStartWait,
		EStep_GrabEnd,
		EStep_InspectEnd,
		EStep_SendResult,

		EStep_CycleEndWait,
		EStep_End,

		EStep_Error,

		EStep_Count,
	};

	enum EError
	{
		EError_LightControlSetting = 0,
		EError_GrabSetting_Trriger,
		EError_GrabSetting_Camera,
		EError_GrabEndTimeOut,
		EError_InspectionTimeOut,
		EError_DataSendError,
		//2호기 추가
		EError_CycleEndWaitTimeOut,

		EError_unknown,

		EError_Count,
	};

	enum ETimeOut
	{
		/*ETimeOut_GrabEnd = 5000*/
		ETimeOut_GrabEnd = 50000,
		ETimeOut_InspectionEnd = 20000,
		ETimeOut_CycleEndWait = 20000,
	};


	virtual void OnStart();
	virtual void OnPause();
	virtual void OnStop();

	virtual bool Work();

	void SetInitializeIO();

private:
	bool m_bFlg[EStep_Count];
	EError m_eErrorType;

	bool m_bFlgRest = false;

	Ravid::Miscellaneous::CPerformanceCounter m_pcTimeOut;
	Ravid::Miscellaneous::CPerformanceCounter m_pcTackTime;
	Ravid::Miscellaneous::CPerformanceCounter m_pcStepTime;
	CDefinition::EEventHandlerNo m_eHandlerNo;
};

