#pragma once

#include "DeviceImage.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Device
	{
		/**
		* �ܵ� ī�޶� �迭�� ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDeviceCamera : public CDeviceImage
		{
		public:
			DECLARE_DYNAMIC(CDeviceCamera)

		public:
			CDeviceCamera();
			virtual ~CDeviceCamera();
			
			/**
			* ī�޶� ����ϱ� ���� �ʱ�ȭ �۾��� �����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceInitializeResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceInitializeResult Initialize() override = 0;
			
			/**
			* ī�޶��� ���ҽ��� ��ȯ�ϱ� ���� ���� �۾��� �����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceTerminateResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceTerminateResult Terminate() override = 0;
			
			/**
			* �Կ��մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceGrabResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceGrabResult Grab() override = 0;
			
			/**
			* ���� �Կ��մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceLiveResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceLiveResult Live() override = 0;
			
			/**
			* �Կ��� �����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceStopResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceStopResult Stop() override = 0;
			
			/**
			* ����Ʈ���� Ʈ���Ÿ� ����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceTriggerResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceTriggerResult Trigger() override = 0;

		protected:
			
			/**
			* UI ��Ʈ���� �߰��ϴ� ������ �մϴ�.
			*
			* return value : �����ϸ� false ���� �����ϴ�.
			*/
			virtual bool AddControls();
		};
	}
}

