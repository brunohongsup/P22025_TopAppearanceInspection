#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Device
	{
		class CDeviceBase;
		
		/**
		* �����ӿ�ũ ����̽� ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDeviceManager : public Framework::CRavidObjectEx
		{
		private:
			CDeviceManager();

		public:
			virtual ~CDeviceManager();
			
			/**
			* �����ӿ�ũ ��ü ��� ������ ����̽��� ���� �ʱ�ȭ�մϴ�.
			* ��ϵ� ����̽��� ����Ʈ�� �մϴ�.
			*/
			static bool Initialize();
			
			/**
			* �����ӿ�ũ ��ü ��� ������ ����̽��� ���� �����մϴ�.
			* ��ϵ� ����̽��� ���� �� �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* ����̽� ���� Ŭ������ �ʱ�ȭ ���¸� Ȯ���մϴ�.
			*/
			static bool IsInitialized();
			
			/**
			* ��ϵ� ����̽��� ���� �����ɴϴ�.
			*/
			static size_t GetDeviceCount();
			
			/**
			* �ش� �ε����� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByIndex(_In_ size_t stIndex);
			
			/**
			* �ش� Ŭ���� & �ε����� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByIndex(_In_ CRuntimeClass* pRuntimeClass, _In_opt_ size_t stIndex = 0);
			
			/**
			* �ش� Ŭ���� Ÿ�� & �ε����� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByIndex(_In_ const type_info& typeInfo, _In_opt_ size_t stIndex = 0);
						
			/**
			* �ش� Ŭ���� �̸� & �ε����� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByIndex(_In_ CString strClassNameIncludingNameSpace, _In_opt_ size_t stIndex = 0);
			
			/**
			* �ش� ID�� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByObjectID(_In_ long nObjectID);
			
			/**
			* �ش� Ŭ���� & ID�� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByObjectID(_In_ CRuntimeClass* pRuntimeClass, _In_opt_ long nObjectID = -1);
			
			/**
			* �ش� Ŭ���� Ÿ�� & ID�� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByObjectID(_In_ const type_info& typeInfo, _In_opt_ long nObjectID = -1);
			
			/**
			* �ش� Ŭ���� �̸� & ID�� ����̽��� �����ɴϴ�.
			*/
			static CDeviceBase* GetDeviceByObjectID(_In_ CString strClassNameIncludingNameSpace, _In_opt_ long nObjectID = -1);
			
			/**
			* �ش� Ŭ���� �ε����� ����̽��� �Ӽ�â�� Ȱ��ȭ�մϴ�.
			*/
			static bool ShowDevicePropertyPage(_In_opt_ size_t stIndex = 0, _In_opt_ CDeviceBase* pCurrentDevice = nullptr);
			
			/**
			* �����ӿ�ũ���� �����ϴ� ����̽� ����Ʈ�� �����ɴϴ�.
			*/
			static std::vector<CDeviceBase*>* GetAvailableDevices();
			
			/**
			* ��ϵ� ����̽� ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetRegisterDeviceInfos(_Out_ std::vector<SRegisterDeviceInfo>& vctInfos);
			
			/**
			* ��ϵ� ����̽� ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetRegisterDeviceInfos(_Out_ std::vector<SRegisterDeviceInfo>* pVctInfos);
			
			/**
			* ����̽� ����Ʈ�� ����մϴ�.
			*/
			static bool UpdateRegisterDeviceInfosTable(_In_ std::vector<SRegisterDeviceInfo>& vctInfos);
			
			/**
			* ����̽� ����Ʈ�� ����մϴ�.
			*/
			static bool UpdateRegisterDeviceInfosTable(_In_ std::vector<SRegisterDeviceInfo>* pVctInfos);
			
			/**
			* ��밡���� ����̽� ��Ͽ� ����մϴ�.
			*/
			static bool RegisterDeviceInfos(_In_ CDeviceBase* pDevice);
			
			/**
			* ��밡���� ����̽� ��Ͽ� �ش� Ŭ���� �̸��� �ִ��� Ȯ���մϴ�.
			*/
			static CDeviceBase* IsRegisterDeviceInfos(_In_ CString strDeviceName);

		private:
			static CDeviceManager* GetInstance();

			static bool IsAvailableRegisterDeviceInfos();
			static bool CreateRegisterDeviceInfosTable(_In_opt_ bool bSave = true);
			static bool DropRegisterDeviceInfosTable(_In_opt_ bool bSave = true);

			static bool RegisterDevice(_In_ CDeviceBase* pDevice, _In_opt_ bool bAutoDestroy = true);

			static bool UnregisterDevice(_In_ size_t stIndex);
			static bool UnregisterDevice(_In_ CDeviceBase* pDevice);

			static CDeviceBase* FindAvailableDevice(_In_ CString strClassName);

		protected:
			bool m_bInitialized = false;
			std::vector<std::pair<CDeviceBase*, bool> > m_vctDevices;
			std::vector<CDeviceBase*> m_vctVisibleDevices;
			std::vector<CDeviceBase*> m_vctAvailableDevices;

		};
	}
}
