#pragma once

#include "RavidObjectEx.h"

#include <memory>
#include <queue>
#include <map>

namespace Ravid
{
	namespace Framework
	{
		/**
		* �����ӿ�ũ �α׸� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CLogManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CLogManager);

		private:
			CLogManager();

		public:
			virtual ~CLogManager();
			
			/**
			* �����ӿ�ũ �α��� ������ �ʱ�ȭ�մϴ�.
			*/
			static bool Initialize(_In_ CString strLoggingRootFolder);
			
			/**
			* �����ӿ�ũ �α��� ������ �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* �����ӿ�ũ �α��� �ʱ�ȭ ���¸� �����ɴϴ�.
			*/
			static bool IsInitialized();
			
			/**
			* �α� ���� ������ �����մϴ�.
			*/
			static void SetRootPath(_In_ CString strLoggingRootFolder);
			
			/**
			* �α� ���� ������ �����ɴϴ�.
			*/
			static CString GetRootPath();
			
			/**
			* ������ �α� Ÿ�� �̸��� �����մϴ�.
			*/
			static bool SetLogTypeName(_In_ long nLogType, _In_ CString strLogTypeName);
			
			/**
			* ������ �α� Ÿ�� �̸��� �����ɴϴ�.
			*/
			static CString GetLogTypeName(_In_ long nLogType);
			
			/**
			* �α� Ÿ������ ����մϴ�.
			*/
			static bool Write(_In_ long nLogType, _In_ CString strFormat, ...);
			
			/**
			* �α� Ÿ�԰� �߿䵵�� ����մϴ�.
			*/
			static bool Write(_In_ long nLogType, _In_ long nImportanceType, _In_ CString strFormat, ...);
			
			/**
			* �α� ����� On / Off �մϴ�.
			*/
			static void EnableWrite(_In_ bool bEnable);

		private:
			static UINT WritingThread(_In_ LPVOID pParam);

			static CLogManager* GetInstance();

		protected:
			CWinThread* m_pWritingThread = nullptr;
			volatile bool m_bInitialized = false;
			CString m_strLoggingRootFolder;
			std::queue<SRavidLogData*> m_queLogData;
			std::map<long, CString> m_mapLogTypes;

			bool m_bEnableWrite = true;
		};
	}
}

