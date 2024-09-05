#pragma once

#include <vector>

namespace Ravid
{
	namespace Miscellaneous
	{
		/**
		* ���� �ý����� ��Ʈ�� �ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CFileUtility : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CFileUtility);

		public:
			CFileUtility();
			virtual ~CFileUtility();

			/**
			* �Էµ� ������ Ž���մϴ�.
			* Ư�� ������ �˻��ϱ� ���ؼ� "*.txt" �� ���� ���·� �Է��ϸ� ��� txt ���� ����� ã���ϴ�.
			*
			* param[in] strFindingFileName : ���� Ž���� ���� Root ��θ� �����ϴ� ���ϸ�
			* param[out] pVctFoundFile : ã�� ���� �̸� ����Ʈ (Pointer)
			* param[in_opt] bRecursive : ����� ���� ���� Ž���� ����
			*
			* return value : bool �� ���� ����� ��ȯ�մϴ�.
			*/
			bool FindFile(_In_ CString strFindingFileName, _Out_ std::vector<CString>* pVctFoundFile, _In_opt_ bool bRecursive = true);
			
			/**
			* �ش� �������� ������ ��ġ�� �����ϴ��� Ȯ���մϴ�.
			*
			* param[in] strFolderName : ������
			*
			* return value : bool �� ���� ����� ��ȯ�մϴ�.
			*/
			bool IsFolderExist(_In_ CString strFolderName);
			
			/**
			* �Էµ� �������� ������ Ž���ϸ� ������ ��� �����մϴ�.
			* ��������� ������ �����մϴ�.
			*
			* param[in] strFolderName : ������
			*
			* return value : bool �� ���� ����� ��ȯ�մϴ�.
			*/
			bool CreateFolder(_In_ CString strFolderName);
			
			/**
			* ������ �Է��ϸ� ��������� ���� ���� �� ������ �����մϴ�.
			* ������ �Է��ϸ� �ش� ���ϸ� �����մϴ�.
			*
			* param[in] strFile : ������ �Ǵ� ���ϸ�
			*
			* return value : bool �� ���� ����� ��ȯ�մϴ�.
			*/
			bool DeleteFile(_In_ CString strFile);
			
			/**
			* ���� ������ �Է��ϰ�, ��� ������ �Է��ϸ� ��������� ���� ���� �� ������ ����(����)�մϴ�.
			* ���� ������ �Է��ϸ�, ��� ������ �Է��ϸ� ��� �������� �����Ͽ� ����(����)�մϴ�.
			*
			* param[in] strSrcFile : ���� �� ������ �Ǵ� ���ϸ�
			* param[in] strDstFile : �ٿ����� ������ �Ǵ� ���ϸ�
			*
			* return value : bool �� ���� ����� ��ȯ�մϴ�.
			*/
			bool CopyFile(_In_ CString strSrcFile, _In_ CString strDstFile);
		};
	}
}

