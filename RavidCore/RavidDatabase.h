#pragma once

#include <vector>
#include <afxmt.h>

namespace Ravid
{
	namespace Miscellaneous
	{
		class CSimpleEncryptor;
	}

	namespace Database
	{
		class CInternalRavidDatabase;
		class CRavidRecordset;
		class CRavidRecordsetFieldInformation;
		
		/**
		* ������ ���̽��� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CRavidDatabase
		{
		public:
			RavidPreventCopySelf(CRavidDatabase);

			CRavidDatabase();
			virtual ~CRavidDatabase();
			
			/**
			* �����ͺ��̽� ������ ���ϴ�.
			*
			* param[in] strFilePath : ���ϸ�
			* param[in_opt] strPassword : ��й�ȣ
			* param[in_opt] bReadOnly : �б� ���� ����
			* param[in_opt] bCreateIfNoExistence : ������ ���� �� ���� ����
			*
			* return value : �����ϸ� ERavidDatabaseResult_OK �̿��� ���� �����ϴ�.
			*/
			ERavidDatabaseResult Open(_In_ CString strFilePath, _In_opt_ CString strPassword = _T(""), _In_opt_ bool bReadOnly = false, _In_opt_ bool bCreateIfNoExistence = true);
			
			/**
			* ���� ���� �����ͺ��̽� ������ �����մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Save();
			
			/**
			* ���� ���� �����ͺ��̽� ������ �ݽ��ϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Close();
			
			/**
			* �����ͺ��̽� ������ �����մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Create();
			
			/**
			* �����ͺ��̽� ������ ���� ���¸� Ȯ���մϴ�.
			*
			* return value : bool �� ���� ���¸� ��ȯ�մϴ�.
			*/
			bool IsOpen();
			
			/**
			* �����ͺ��̽� ������ �б� ���� ���¸� Ȯ���մϴ�.
			*
			* return value : bool �� �б� ���� ���¸� ��ȯ�մϴ�.
			*/
			bool IsReadOnly();
			
			/**
			* �����ͺ��̽��� �������� �����մϴ�.
			*
			* param[in] strSQL : SQL ������
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool ExecuteSQL(_In_ CString strSQL);
			
			/**
			* �����ͺ��̽��� ��ϵ� ���̺� ���� �����ɴϴ�.
			*
			* return value : size_t �� ���̺� ���� ��ȯ�մϴ�.
			*/
			size_t GetTableCount();
						
			/**
			* �����ͺ��̽��� ��ϵ� ���̺� ����Ʈ�� �����ɴϴ�.
			*
			* param[in] pVctTableNameList : ���̺� ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetTableNameList(_Out_ std::vector<CString>* pVctTableNameList);
			
			/**
			* �����ͺ��̽��� �ش� ���̺� ������ Ȯ���մϴ�.
			*
			* param[in] strTableName : ���̺��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DoesTableExist(_In_ CString strTableName);
			
			/**
			* �����ͺ��̽��� �ش� ���̺� �ش� �ʵ� ������ Ȯ���մϴ�.
			*
			* param[in] strTableName : ���̺��
			* param[in] strFieldName : �ʵ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DoesFieldExist(_In_ CString strTableName, _In_ CString strFieldName);
			
			/**
			* �����ͺ��̽��� ��й�ȣ�� �����մϴ�.
			*
			* param[in] strCurrentPassword : ���� ��й�ȣ
			* param[in] strNewPassword : �ű� ��й�ȣ
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetPassword(_In_ CString strCurrentPassword, _In_ CString strNewPassword);
			
			/**
			* �����ͺ��̽��� ���ϸ��� �����ɴϴ�.
			*
			* return value : CString �� ���ϸ��� ��ȯ�մϴ�.
			*/
			CString GetDBFilePath();
			
			/**
			* �����ͺ��̽��� �ش� ���̺��� �����մϴ�.
			*
			* param[in] strTableName : ���̺��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			CRavidRecordset* CreateTable(_In_ CString strTableName);
			
			/**
			* �����ͺ��̽��� �ش� �ε����� ���̺��� �����մϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DropTable(_In_ long nIndex);

			/**
			* �����ͺ��̽��� �ش� ���̺��� �����մϴ�.
			*
			* param[in] strTableName : ���̺��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DropTable(_In_ CString strTableName);
			
			/**
			* �����ͺ��̽��� �ش� �ε����� ���̺� �ʵ� ������ �����ɴϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			*
			* return value : CRavidRecordset* �� ���ڵ� ������ ��ȯ�մϴ�.
			*/
			CRavidRecordset* GetTable(_In_ long nIndex);
			
			/**
			* �����ͺ��̽��� �ش� ���̺��� ������ �����ɴϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			*
			* return value : CRavidRecordset* �� ���ڵ� ������ ��ȯ�մϴ�.
			*/
			CRavidRecordset* GetTable(_In_ CString strTableName);
			
			/**
			* �����ͺ��̽��� �ش� �ε����� ���̺� �ʵ带 �����մϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			* param[in] pRecordset : ���̺� �ʵ� ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetTable(_In_ long nIndex, _In_ CRavidRecordset* pRecordset);
			
			/**
			* �����ͺ��̽��� �ش� ���̺� �ʵ带 �����մϴ�.
			*
			* param[in] strTableName : ���̺��
			* param[in] pRecordset : ���̺� �ʵ� ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetTable(_In_ CString strTableName, _In_ CRavidRecordset* pRecordset);
			
			/**
			* �����ͺ��̽��� �ش� �ε����� ���̺���� �����ɴϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			*
			* return value : CString �� ���̺���� ��ȯ�մϴ�.
			*/
			CString GetTableNameOfIndex(_In_ long nIndex);
			
			/**
			* �����ͺ��̽��� �ش� ���̺���� �ε����� �����ɴϴ�.
			*
			* param[in] strTableName : ���̺��
			*
			* return value : long �� ���̺� �ε����� ��ȯ�մϴ�.
			*/
			long GetIndexOfTableName(_In_ CString strTableName);
			
			/**
			* �����ͺ��̽��� �ش� �ε����� ���̺� ���� �����մϴ�.
			*
			* param[in] nIndex : ���̺� �ε���
			* param[in] strNewTableName : �ű� ���̺� ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool ChangeTableName(_In_ long nIndex, _In_ CString strNewTableName);
			
			/**
			* �����ͺ��̽��� �ش� ���̺� ���� �����մϴ�.
			*
			* param[in] strTableName : ���� ���̺� ��
			* param[in] strNewTableName : �ű� ���̺� ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool ChangeTableName(_In_ CString strTableName, _In_ CString strNewTableName);

		private:
			bool ConvertDataTypeStringToEnum(_In_ CString strDataType, _Out_ ERavidRecordsetFieldType& eDataType);
			bool ConvertStringOperatorToEnum(_In_ CString strOperator, _Out_ ERavidDBWhereClauseOperator& eOperator);

			bool ParseWhereClause(_In_ CString strWhere, _In_ std::vector<CRavidRecordsetFieldInformation*>& vctFields, _Out_ std::vector<SRavidDBWhereClauseCondition>& vctWhereCondition);

			bool ExtractString(_In_ CString& strSource, _In_ TCHAR chDelimiter, _Out_ CString& strResult);
			bool ExtractString(_In_ CString& strSource, _In_ std::vector<TCHAR>& vctDelimiter, _Out_ CString& strResult);

			bool DoesTableExist_Internal(_In_ CString& strTableName);
			bool Close_Internal();

			bool LockDBFile();
			bool UnlockDBFile();

			ERavidDatabaseResult ReadDBFile();
			bool WriteDBFile();

			bool ReadFile(_Out_ void* pDstBuffer, _In_ size_t szElementSize, _In_ FILE* pFilePointer, _In_opt_ bool bDecrypt = true);
			bool WriteFile(_In_ const void* pSrcBuffer, _In_ size_t szElementSize, _In_ FILE* pFilePointer, _In_opt_ bool bEncrypt = true);

			bool AssignBuffer(_Inout_ char** pBuffer, size_t szSize);
			bool DeleteBuffer(_Inout_ char** pBuffer);

			bool IsPasswordEmpty();

			void SetDBFilePath(_In_ CString strDBFilePath);
			/*CString GetDBFilePath();*/

			bool ExtractValue(_In_ CString& strSource, _In_ std::vector<CString>& vctDelimiter, _In_ std::vector<CString>& vctEnd, _Out_ CString& strResult, _Out_ bool& bEnd);

			bool EncryptData(_In_ CString strData, _Out_ std::vector<char>& vctData);
			bool DecryptData(_In_ std::vector<char>& vctData, _Out_ CString& strData);

			CInternalRavidDatabase* m_pInternal = nullptr;
			
			static const char m_arrDBFileHeader[];
			static const ptrdiff_t m_nDBFileHeaderLength;

			friend class CRavidRecordset;

			friend class CDBEditorManager;
		};
	}
}

