#pragma once

#include "RavidObjectEx.h"
#include <deque>

namespace Ravid
{
	namespace Framework
	{
		class CMessageBase;
		
		/**
		* �����ӿ�ũ �޽����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CMessageManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CMessageManager);

		private:
			CMessageManager();

		public:
			virtual ~CMessageManager();
			
			/**
			* �޽��� ���� ������ �ʱ�ȭ�մϴ�.
			*/
			static bool Initialize();
			
			/**
			* �޽��� ���� ������ �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* �޽��� ���� ���� ���¸� �����ɴϴ�.
			*/
			static bool IsInitialized();
			
			/**
			* �����ӿ�ũ ��ü�� �޽����� SendMessage�� �߻���ŵ�ϴ�.
			*/
			static ptrdiff_t SendMessage(_In_ CMessageBase* pMessage);
			
			/**
			* �����ӿ�ũ ��ü�� �޽����� PostMessage�� �߻���ŵ�ϴ�.
			*/
			static bool PostMessage(_In_ CMessageBase* pMessage);

		private:
			static bool ClearMessage();

			static UINT PostMessageThread(_In_ LPVOID pParam);

			static CMessageManager* GetInstance();

		protected:
			volatile bool m_bInitialized = false;

			CWinThread* m_pPostMessageThread = nullptr;

			std::deque<CMessageBase*> m_deqPostMessage;

			CCriticalSection m_csPostMessage;
		};
	}
}

