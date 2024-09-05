#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Database
	{
		class CRavidDatabase;
	}

	namespace Framework
	{
		/**
		* �����ӿ�ũ ��ü�� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CFrameworkManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CFrameworkManager);

			enum EFrameworkSettingDataType
			{
				EFrameworkSettingDataType_Security = 0,
				EFrameworkSettingDataType_Count,
			};

			enum EFrameworkSettingLoginData
			{
				EFrameworkSettingLoginData_TryMaxCount = 5,
				EFrameworkSettingLoginData_LockTimes = 300,
			};

		private:
			CFrameworkManager();

		public:
		virtual ~CFrameworkManager();
				
			/**
			* �����ӿ�ũ ���� �� ��ü ������ �����մϴ�.
			* ��� �޴����� �ʱ�ȭ�մϴ�.
			*/
			static bool Begin(_In_opt_ LPCTSTR lpszSettingFile = nullptr, _In_opt_ bool bSettingMode = false, _In_opt_ UINT uiToolBarResourceEnableID = 0, _In_opt_ UINT uiToolBarResourceDisableID = 0);
			
			/**
			* �����ӿ�ũ�� �����մϴ�.
			*/
			static bool End();
			
			/**
			* ���� �����ӿ�ũ ���� ��尡 ���ø������ Ȯ���մϴ�.
			*/
			static bool IsSettingMode();
			
			/**
			* �����ӿ�ũ ������ ������ �����ͺ��̽��� �����ɴϴ�.
			*/
			static Database::CRavidDatabase* GetFrameworkDatabase();
			
			/**
			* �� ������ ������ �����ͺ��̽��� �����ɴϴ�.
			*/
			static Database::CRavidDatabase* GetModelDatabase();
			
			/**
			* ����̽� ������ ������ �����ͺ��̽��� �����ɴϴ�.
			*/
			static Database::CRavidDatabase* GetDeviceDatabase();
			
			/**
			* ����Ű�� �����մϴ�.
			*/
			static bool SetSecurityKey(_In_ CString strSecurityKey);
			
			/**
			* ����Ű�� �����մϴ�.
			*/
			static bool ChangeSecurityKey(_In_ CString strCurrentSecurityKey, _In_ CString strNewSecurityKey);
			
			/**
			* ����Ű�� ���� ���θ� Ȯ���մϴ�.
			*/
			static bool IsSetSecurityKey();
						
			/**
			* ���� ���·� �����մϴ�.
			*/
			static bool LockSecurity();
						
			/**
			* ���� ���¸� �����մϴ�.
			*/
			static bool UnlockSecurity(_In_ CString strSecurityKey);
			
			/**
			* ���� ���¸� Ȯ���մϴ�.
			*/
			static bool IsUnlockedSecurity();
			
			/**
			* ���� ���� �ð��� Ȯ���մϴ�.
			*/
			static bool IsRestrictSecurity(_Out_ CString& strTime);
			
			/**
			* ���� ���� �ð�, Ƚ���� Ȯ���մϴ�.
			*/
			static bool GetRestrictSecurityTrialInfo(_Out_ int& nCount, _Out_ CString& strTime);
			
			/**
			* ���� ���� �ð�, Ƚ���� �����մϴ�.
			*/
			static bool SetRestrictSecurityTrialInfo(_In_ int nCount, _In_ CTime tTime);
			
			/**
			* �ð��� �Է��ϸ� CTime Ŭ������ ��ȯ�մϴ�.
			*/
			static bool ConvertStringToTime(_In_ CString strTime, _Out_ CTime& tTime);
			
			/**
			* ���� ���� �ð��� CTime Ŭ������ ��ȯ�մϴ�.
			*/
			static CTime GetRestrictSecurityTime(_In_ CTime& tInTimem);
			
			/**
			* �� ���� ������ �̸��� �����մϴ�.
			*/
			static void SetModelSettingFileTitle(LPCTSTR lpszSettingFile);
			
			/**
			* ����̽� ���� ������ �̸��� �����մϴ�.
			*/
			static void SetDeviceSettingFileTitle(LPCTSTR lpszSettingFile);
			
			/**
			* �����ӿ�ũ ���� ���θ� �����ɴϴ�.
			*/
			static bool GetFrameworkRun();

		private:
			static CFrameworkManager* GetInstance();

			static bool SetFrameworkSettingData(_In_ EFrameworkSettingDataType eType, _In_ CString strData);
			static bool GetFrameworkSettingData(_In_ EFrameworkSettingDataType eType, _Out_ CString& strData);

			static bool ArrangeDeviceSettingData();
			static bool ArrangeModelSettingData();

			static LPCTSTR m_lpszFrameworkSettingDataType[EFrameworkSettingDataType_Count];

		protected:
			Database::CRavidDatabase* m_pDatabase = nullptr;
			Database::CRavidDatabase* m_pModelDatabase = nullptr;
			Database::CRavidDatabase* m_pDeviceDatabase = nullptr;

			bool m_bIsSettingMode = false;
			bool m_bIsSecurity = true;
			bool m_bIsFrameworkRun = false;


			CString m_strModelSettingFile = _T("ModelSettings");
			CString m_strDeviceSettingFile = _T("DeviceSettings");
		};
	}
}

