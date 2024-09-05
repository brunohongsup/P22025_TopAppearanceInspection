#pragma once

#include "DeviceBase.h"

namespace Ravid
{
	namespace Framework
	{
		class CPacket;
	}

	namespace Miscellaneous
	{
		class CPerformanceCounter;
	}

	namespace Device
	{
		/**
		* ��� ����̽� �迭�� ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDeviceComm : public CDeviceBase
		{
		public:
			CDeviceComm();
			virtual ~CDeviceComm();
			
			/**
			* ����� �ϱ� ���� �ʱ�ȭ �۾��� �����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceInitializeResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceInitializeResult Initialize() override = 0;
			
			/**
			* ����� ���ҽ��� ��ȯ�ϱ� ���� ���� �۾��� �����մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* return value : �����ϸ� EDeviceTerminateResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual EDeviceTerminateResult Terminate() override = 0;
			
			/**
			* �۽� �մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* param[in] refPacket : �����ϱ� ���� ��Ŷ ���� ������ (Reference)
			*
			* return value : �����ϸ� ECommSendResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual ECommSendResult Send(_In_ Framework::CPacket& refPacket) = 0;
			
			/**
			* �۽� �մϴ�.
			* ���� �����Լ��� �� �����ؾ� �մϴ�.
			*
			* param[in] pPacket : �����ϱ� ���� ��Ŷ ���� ������ (Pointer)
			*
			* return value : �����ϸ� ECommSendResult_OK �̿��� ���� �����ϴ�.
			*/
			virtual ECommSendResult Send(_In_ Framework::CPacket* pPacket) = 0;
			
			virtual bool IsSending();
			virtual bool IsReceiving();

			virtual unsigned long long GetTotalReceivedBytes();
			virtual unsigned long long GetTotalSentBytes();

		protected:
			unsigned long long m_ullSentBytes;
			unsigned long long m_ullReceivedBytes;

			Miscellaneous::CPerformanceCounter* m_pPcSending = nullptr;
			Miscellaneous::CPerformanceCounter* m_pPcReceiving = nullptr;
		};
	}
}

