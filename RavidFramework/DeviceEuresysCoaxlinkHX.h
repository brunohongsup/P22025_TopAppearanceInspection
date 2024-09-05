#pragma once

#include "DeviceEuresysCoaxlink.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Device
	{
		class AFX_EXT_CLASS CDeviceEuresysCoaxlinkHX : public CDeviceEuresysCoaxlink
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceEuresysCoaxlinkHX);

			DECLARE_DYNAMIC(CDeviceEuresysCoaxlinkHX)

		public:
			CDeviceEuresysCoaxlinkHX();
			virtual ~CDeviceEuresysCoaxlinkHX();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()
		};
	}
}


