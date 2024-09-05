#pragma once

#include "RavidObjectEx.h"

#include <memory>
#include <vector>

namespace Ravid
{
	namespace Framework
	{
		/**
		* �����ӿ�ũ ���� ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CAuthorityManager : public CRavidObjectEx
		{
		public:
			enum EPermissionDataType
			{
				EPermissionDataType_DeviceItemEdit = 0,
				EPermissionDataType_DeviceControl,
				EPermissionDataType_ModelItemEdit,
				EPermissionDataType_ModelOpen,
				EPermissionDataType_ModelClose,
				EPermissionDataType_ModelNew,
				EPermissionDataType_ModelCopy,
				EPermissionDataType_ModelDelete,
				EPermissionDataType_ModelConfigurationAccess,
				EPermissionDataType_ModelConfigurationNew,
				EPermissionDataType_ModelConfigurationModify,
				EPermissionDataType_ModelConfigurationDelete,
				EPermissionDataType_ModelConfigurationDuplicate,
				EPermissionDataType_ImageProcessingTool,
				EPermissionDataType_ConfigurationSave,
				EPermissionDataType_ConfigurationSaveas,
				EPermissionDataType_ConfigurationNew,
				EPermissionDataType_ConfigurationDelete,
				EPermissionDataType_ConfigurationRename,
				EPermissionDataType_ChildFrameSize,
				EPermissionDataType_ImageViewAccuracyEdit,
				EPermissionDataType_ImageViewLayer,
				EPermissionDataType_Count
			};

			typedef struct sLayerPermission
			{
				long nViewObjectID = 0;
				long nLayerIndex = 0;
				EUserType ePermission = EUserType_NotLoggedOn;
			}
			SLayerPermission;

		private:
			CAuthorityManager();

		public:
			virtual ~CAuthorityManager();
			
			/**
			* �����ӿ�ũ ��ü�� ���� ���� ������ �ʱ�ȭ�մϴ�.
			*/
			static bool Initialize();

			/**
			* ���� ������ �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* ���� ������ �ʱ�ȭ ���¸� Ȯ���մϴ�.
			*/
			static bool IsInitialized();
			
			/**
			* ���� ���� Ŭ���� �ν��Ͻ��� �����ɴϴ�.
			*/
			static CAuthorityManager* GetInstance();
			
			/**
			* ���� �α��ε� ������� �̸��� �����ɴϴ�.
			*/
			static CString GetCurrentUserName();
			
			/**
			* ���� �α��ε� ������� ���� Ÿ���� �����ɴϴ�.
			*/
			static EUserType GetCurrentUserType();
			
			/**
			* �α��� �մϴ�.
			*/
			static EAuthResult LogIn(_In_ CString strUserName, _In_ CString strPassword);
			
			/**
			* �α׾ƿ� �մϴ�.
			*/
			static EAuthResult LogOut();
			
			/**
			* ����� ��й�ȣ�� �����մϴ�.
			*/
			static EAuthResult ModifyPassword(_In_ CString strUserName, _In_ CString strOldPassword, _In_ CString strNewPassword);

			// It can't be changed to a level higher than currently logged on user
			/**
			* ����� ����� �����մϴ�.
			*/
			static EAuthResult ModifyUserType(_In_ CString strUserName, EUserType eUserType);

			// Functions that can be used above administrator level			
			/**
			* ����ڸ� �߰��մϴ�.
			*/
			static EAuthResult AddUser(_In_ CString strUserName, _In_ CString strPassword, _In_ EUserType eUserType);
			
			/**
			* ����ڸ� �����մϴ�.
			*/
			static EAuthResult DeleteUser(_In_ CString strUserName, _In_ CString strPassword);
			
			/**
			* ��ϵ� ����� ���� �����ɴϴ�.
			*/
			static long GetUserCount();
			
			/**
			* ����̽� �Ķ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetDeviceItemEditPermission(_In_ EUserType eUserType);
			
			/**
			* ����̽� �Ķ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetDeviceItemEditPermission();
			
			/**
			* ����̽� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetDeviceControlPermission(_In_ EUserType eUserType);
			
			/**
			* ����̽� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetDeviceControlPermission();
			
			/**
			* �� �Ķ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelItemEditPermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelItemEditPermission();
			
			/**
			* �� �Ķ���� Open ������ �����մϴ�.
			*/
			static EAuthResult SetModelOpenPermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� Open ������ �����ɴϴ�.
			*/
			static EUserType GetModelOpenPermission();
			
			/**
			* �� �Ķ���� Close ������ �����մϴ�.
			*/
			static EAuthResult SetModelClosePermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� Close ������ �����ɴϴ�.
			*/
			static EUserType GetModelClosePermission();
			
			/**
			* �� �Ķ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelNewPermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelNewPermission();
			
			/**
			* �� �Ķ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelCopyPermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelCopyPermission();
			
			/**
			* �� �Ķ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelDeletePermission(_In_ EUserType eUserType);
			
			/**
			* �� �Ķ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelDeletePermission();
			
			/**
			* �̹��� �� ��� ������ �����մϴ�.
			*/
			static EAuthResult SetImageProcessingToolPermission(_In_ EUserType eUserType);
			
			/**
			* �̹��� �� ��� ������ �����ɴϴ�.
			*/
			static EUserType GetImageProcessingToolPermission();
			
			/**
			* �ڽ� ������ ũ�� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetChildFrameSizePermission(_In_ EUserType eUserType);
			
			/**
			* �ڽ� ������ ũ�� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetChildFrameSizePermission();
			
			/**
			* �̹��� �� ���ش� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetImageViewAccuracyEditPermission(_In_ EUserType eUserType);
			
			/**
			* �̹��� �� ���ش� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetImageViewAccuracyEditPermission();
			
			/**
			* �̹��� �� ���̾� ��� ������ �����մϴ�.
			*/
			static EAuthResult SetImageViewLayerPermission(_In_ long nViewObjectID, _In_ long nLayerIndex, _In_ EUserType eUserType);
			
			/**
			* �̹��� �� ���̾� ��� ������ �����ɴϴ�.
			*/
			static EUserType GetImageViewLayerPermission(_In_ long nViewObjectID, _In_ long nLayerIndex);
			
			/**
			* ����ڰ� �����ϴ��� Ȯ���մϴ�.
			*/
			static EAuthResult CheckUser(_In_ CString strUserName, _In_ CString strPassword);
			
			/**
			* ����� ����Ʈ�� �����ɴϴ�.
			*/
			static EAuthResult GetUserInfoList(std::vector<SUserInfo>& vctInfoList);
			
			/**
			* ����� ����Ʈ�� �����ɴϴ�.
			*/
			static EAuthResult GetUserInfoList(std::vector<SUserInfo>* pVctInfoList);
			
			/**
			* root ����ڰ� ��ϵǾ� �ִ��� Ȯ���մϴ�.
			*/
			static EAuthResult IsBeingRoot();
			
			/**
			* ȭ�� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetConfigurationSavePermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetConfigurationSavePermission();
			
			/**
			* ȭ�� ���� �ٸ��̸� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetConfigurationSaveasPermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� �ٸ��̸� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetConfigurationSaveasPermission();
			
			/**
			* ȭ�� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetConfigurationNewPermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetConfigurationNewPermission();
			
			/**
			* ȭ�� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetConfigurationDeletePermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetConfigurationDeletePermission();
			
			/**
			* ȭ�� ���� �̸����� ������ �����մϴ�.
			*/
			static EAuthResult SetConfigurationRenamePermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� �̸����� ������ �����ɴϴ�.
			*/
			static EUserType GetConfigurationRenamePermission();
			
			/**
			* ȭ�� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelConfigurationAccessPermission(_In_ EUserType eUserType);
			
			/**
			* ȭ�� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelConfigurationAccessPermission();
			
			/**
			* �� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelConfigurationNewPermission(_In_ EUserType eUserType);
			
			/**
			* �� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelConfigurationNewPermission();
			
			/**
			* �� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelConfigurationModifyPermission(_In_ EUserType eUserType);
			
			/**
			* �� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelConfigurationModifyPermission();
			
			/**
			* �� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelConfigurationDeletePermission(_In_ EUserType eUserType);
			
			/**
			* �� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelConfigurationDeletePermission();
			
			/**
			* �� ���� ���� ������ �����մϴ�.
			*/
			static EAuthResult SetModelConfigurationDuplicatePermission(_In_ EUserType eUserType);
			
			/**
			* �� ���� ���� ������ �����ɴϴ�.
			*/
			static EUserType GetModelConfigurationDuplicatePermission();

		private:
			static EAuthResult SetPermissionData(_In_ EPermissionDataType eType, _In_ CString strData, _In_opt_ CString strSubTitle = _T(""));
			static EAuthResult GetPermissionData(_In_ EPermissionDataType eType, _Out_ CString& strData, _In_opt_ CString strSubTitle = _T(""));

		protected:
			bool m_bInitialized = false;
			CString m_strCurrentUser = _T("");
			EUserType m_eUserType = EUserType_NotLoggedOn;
			static LPCTSTR m_lpszPermissionDataType[CAuthorityManager::EPermissionDataType_Count];
			EUserType m_ePermission[CAuthorityManager::EPermissionDataType_Count];
			std::vector<CAuthorityManager::SLayerPermission> m_vctLayerPermission;
		};
	}
}

