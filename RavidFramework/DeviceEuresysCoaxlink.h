#pragma once

#include "DeviceFrameGrabber.h"

namespace Euresys
{
	class EGenTL;
}

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Device
	{
		class MyGrabber;

		class AFX_EXT_CLASS CDeviceEuresysCoaxlink : public CDeviceFrameGrabber
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceEuresysCoaxlink);

			DECLARE_DYNAMIC(CDeviceEuresysCoaxlink)

			enum eCoaxlinkModuleType
			{
				eCoaxlinkModuleType_System = 0,
				eCoaxlinkModuleType_Interface,
				eCoaxlinkModuleType_Device,
				eCoaxlinkModuleType_Stream,
				eCoaxlinkModuleType_Remote
			};

		public:
			CDeviceEuresysCoaxlink();
			virtual ~CDeviceEuresysCoaxlink();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual EDeviceGrabResult Grab() override;
			virtual EDeviceLiveResult Live() override;
			virtual EDeviceStopResult Stop() override;

			virtual EDeviceTriggerResult Trigger();

			virtual EEuresysGetFunction GetEuresysPath(_Out_ CString* pParam);
			virtual EEuresysSetFunction SetEuresysPath(_In_ CString strParam);

			virtual EEuresysGetFunction GetCamfileName(_Out_ CString* pParam);
			virtual EEuresysSetFunction SetCamfileName(_In_ CString strParam);

			Euresys::EGenTL* GetDevice();

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		protected:
			virtual bool DoesModuleExist();
			bool MakeNewBuffer(_In_ int nSizeX, _In_ int nSizeY, _In_opt_ EDeviceEGrabberPixelFormat ePixelFormat = EDeviceEGrabberPixelFormat_Mono8);

		protected:
			static UINT LiveThread(_In_ LPVOID pParam);

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			Euresys::EGenTL* m_pTL = nullptr;
			MyGrabber* m_pEGrabber = nullptr;

			CWinThread* m_pLiveThread = nullptr;

			//reference
		public:
			virtual int64_t __getInteger(eCoaxlinkModuleType eType, std::string& feature);
			virtual void __setInteger(eCoaxlinkModuleType eType, std::string& feature, int64_t value);

			virtual double __getFloat(eCoaxlinkModuleType eType, std::string& feature);
			virtual void __setFloat(eCoaxlinkModuleType eType, std::string& feature, double value);

			virtual std::string __getString(eCoaxlinkModuleType eType, std::string& feature);
			virtual void __setString(eCoaxlinkModuleType eType, std::string& feature, std::string& value);

			virtual void __execute(eCoaxlinkModuleType eType, std::string value);
		};
	}
}


