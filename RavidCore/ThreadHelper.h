#pragma once

#include <functional>

#define CreateRavidThreadContext(pContext) Ravid::Miscellaneous::ThreadContext* pContext = new Ravid::Miscellaneous::ThreadContext; *pContext = [=](void) -> void
#define CreateRavidThreadContextCaptureRef(pContext) Ravid::Miscellaneous::ThreadContext* pContext = new Ravid::Miscellaneous::ThreadContext; *pContext = [&](void) -> void

namespace Ravid
{
	namespace Miscellaneous
	{
		typedef std::function<void(void)> ThreadContext;
		typedef ThreadContext* LPThreadContext;
		
		/**
		* ����� ���Ǽ��� ���� ������ ���� �� ������ �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CThreadHelper : public CRavidObject
		{
		public:
			/**
			* ������ �߿䵵 ��å�� �����մϴ�.
			*/
			enum EThreadPriority
			{
				EThreadPriority_Lowest = THREAD_PRIORITY_LOWEST,
				EThreadPriority_BelowNormal = THREAD_PRIORITY_BELOW_NORMAL,
				EThreadPriority_Normal = THREAD_PRIORITY_NORMAL,
				EThreadPriority_Highest = THREAD_PRIORITY_HIGHEST,
				EThreadPriority_AboveNormal = THREAD_PRIORITY_ABOVE_NORMAL,
				EThreadPriority_ErrorReturn = THREAD_PRIORITY_ERROR_RETURN,

				EThreadPriority_TimeCritical = THREAD_BASE_PRIORITY_LOWRT,
				EThreadPriority_Idle = THREAD_BASE_PRIORITY_IDLE,
			};
			
		private:
			CThreadHelper();

		public:
			virtual ~CThreadHelper();
			/**
			* Ŭ���� �ν��Ͻ��� �����ɴϴ�.
			*
			* return value : CThreadHelper* �� ���� ������ �����͸� ��ȯ�մϴ�.
			*/
			static CThreadHelper* GetInstance();
			
			/**
			* �����带 �����մϴ�.
			*
			* param[in] pContext : ������ ����
			* param[in_opt] bCreateSuspended : ������ ���� ����
			* param[in_opt] ePriority : ������ �߿䵵 ��å
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static bool Run(_In_ ThreadContext* pContext, _In_opt_ bool bCreateSuspended = false, _In_opt_ EThreadPriority ePriority = EThreadPriority_Normal);
			
			/**
			* �����带 �Ͻ� �����մϴ�.
			*
			* param[in] pContext : ������ ����
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static bool Suspend(_In_ ThreadContext* pContext);
			
			/**
			* �����带 �ٽ� �����մϴ�.
			*
			* param[in] pContext : ������ ����
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static bool Resume(_In_ ThreadContext* pContext);
			
			/**
			* �����带 �����մϴ�.
			*
			* param[in] pContext : ������ ����
			* param[in] dwWaitTimeMS : ��� �ð�
			* param[in_opt] bTerminateWhenTimeout : ��� �ð� ���� ���� ���� �Ǵ�
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static bool Wait(_In_ ThreadContext* pContext, _In_ DWORD dwWaitTimeMS, _In_opt_ bool bTerminateWhenTimeout = true);
		};
	}
}

