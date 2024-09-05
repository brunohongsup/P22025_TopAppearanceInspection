#pragma once

#include <memory>

namespace Ravid
{
	namespace Database
	{
		class CRavidDatabase;
		class CRavidRecordsetFieldInformation;
		class CInternalRavidRecordset;
		
		/**
		* ������ ���̽��� �ʵ带 �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CRavidRecordset
		{
		public:
			RavidPreventCopySelf(CRavidRecordset);

			/**
			* ������ ���̽��� �ʵ� Ÿ���� �����ϴ�.
			*/
			static const TCHAR* m_arrFieldTypeString[];

			CRavidRecordset();
			CRavidRecordset(_In_ CRavidDatabase* pParentDataStorage, _In_ CString strSQL);

			virtual ~CRavidRecordset();
			
			/**
			* �Է� �����ͺ��̽��� �ش� �������� �����մϴ�.
			*
			* param[in] pParentDataStorage : �����ͺ��̽� Ŭ���� (Pointer)
			* param[in] strSQL : ������
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Open(_In_ CRavidDatabase* pParentDataStorage, _In_ CString strSQL);

			/**
			* �����ͺ��̽� ��ü�� �ݽ��ϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Close();
			
			/**
			* �����ͺ��̽� ��ü�� ���� ���¸� Ȯ���մϴ�.
			*
			* return value : bool �� ���� ���¸� ��ȯ�մϴ�.
			*/
			bool IsOpen();
			
			/**
			* ���� ��ü�� ���̺� ���� �����ɴϴ�.
			*
			* return value : CString �� ���̺� ���� ��ȯ�մϴ�.
			*/
			CString GetTableName();
			
			/**
			* ���� ��ü�� �ʵ� ���� �����ɴϴ�.
			*
			* return value : size_t �� �ʵ� ���� ��ȯ�մϴ�.
			*/
			size_t GetFieldCount();
			
			/**
			* ���� ��ü�� ���ڵ�(������) ���� �����ɴϴ�.
			*
			* return value : size_t �� �ʵ� ���� ��ȯ�մϴ�.
			*/
			size_t GetRecordCount();
			
			/**
			* �Է� �ʵ� �̸��� �ε����� �����ɴϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[out] nIndex : �ε��� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldIndex(_In_ CString strFieldName, _Out_ int& nIndex);
			
			/**
			* �Է� �ε����� �ʵ���� �����մϴ�.
			*
			* param[in] nIndex : �ε���
			* param[out] strNewFieldName : �ʵ� ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldName(_In_ int nIndex, _In_ CString strNewFieldName);
			
			/**
			* �Է� �ε����� �ʵ���� �����ɴϴ�.
			*
			* param[in] nIndex : �ε���
			* param[out] strFieldName : �ʵ� �� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldName(_In_ int nIndex, _Out_ CString& strFieldName);
			
			/**
			* �Է� �ε����� �ʵ� ������ Ÿ���� �����մϴ�.
			*
			* param[in] nIndex : �ε���
			* param[in] strNewFieldType : ������ Ÿ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldType(_In_ int nIndex, _In_ CString strNewFieldType);
			
			/**
			* �Է� �ε����� �ʵ� ������ Ÿ���� �����մϴ�.
			*
			* param[in] nIndex : �ε���
			* param[in] eType : ������ Ÿ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldType(_In_ int nIndex, _In_ ERavidRecordsetFieldType eType);
			
			/**
			* �Է� �ε����� �ʵ� ������ Ÿ���� �����ɴϴ�.
			*
			* param[in] nIndex : �ε���
			* param[out] eType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldType(_In_ int nIndex, _Out_ ERavidRecordsetFieldType& eType);
			
			/**
			* �Է� �ε����� �ʵ� ������ Ÿ���� �����ɴϴ�.
			*
			* param[in] nIndex : �ε���
			* param[out] strType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldType(_In_ int nIndex, _Out_ CString& strType);
			
			/**
			* �Է� �ʵ��� ������ Ÿ���� �����ɴϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[out] eType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldType(_In_ CString strFieldName, _Out_ ERavidRecordsetFieldType& eType);
			
			/**
			* �Է� �ʵ��� ������ Ÿ���� �����ɴϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[out] strType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldType(_In_ CString strFieldName, _Out_ CString& strType);
			
			/**
			* �Է� �ε����� �ʵ带 �߰��մϴ�.
			*
			* param[in] nIndex : �ε���
			* param[in] strFieldName : �ʵ� ��
			* param[in] eType : ������ Ÿ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool InsertField(_In_ int nIndex, _In_ CString strFieldName, _In_ ERavidRecordsetFieldType eType);
			
			/**
			* �Է� �ε����� �ʵ带 �����մϴ�.
			*
			* param[in] nIndex : �ε���
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DeleteField(_In_ int nIndex);
			
			/**
			* �ʵ� ������ Ÿ���� enum���� ���ڿ��� ��ȯ�մϴ�.
			*
			* param[in] eType : ������ Ÿ��
			* param[out] strType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool ConvertTypeEnumToTypeString(_In_ ERavidRecordsetFieldType eType, _Out_ CString& strType);
			
			/**
			* �ʵ� ������ Ÿ���� ���ڿ����� enum���� ��ȯ�մϴ�.
			*
			* param[in] strType : ������ Ÿ��
			* param[out] eType : ������ Ÿ�� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool ConvertTypeStringToTypeEnum(_In_ CString strType, _Out_ ERavidRecordsetFieldType& eType);
			
			/**
			* ���ڵ� ����Ʈ�� �������� Ȯ���մϴ�.
			*
			* return value : bool �� �ʵ� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool IsBOF();
			
			/**
			* ���ڵ� ����Ʈ�� ������ Ȯ���մϴ�.
			*
			* return value : bool �� �ʵ� �� ���θ� ��ȯ�մϴ�.
			*/
			bool IsEOF();
			
			/**
			* ���ڵ� ����Ʈ�� �������� �̵��մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool MoveFirst();
			
			/**
			* ���ڵ� ����Ʈ�� ���� ��ġ�� �̵��մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool MoveNext();
			
			/**
			* ���ڵ� ����Ʈ�� ���� ��ġ�� �̵��մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool MovePrev();
			
			/**
			* ���ڵ� ����Ʈ�� ���������� �̵��մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool MoveLast();
			
			/**
			* ���ڵ��� ���� �����ɴϴ�.
			*
			* return value : size_t �� ���ڵ� ���� ��ȯ�մϴ�.
			*/
			size_t GetRecordIndex();
			
			/**
			* ���� ���ڵ忡�� �ʵ� �ε����� ������ ���� �����ɴϴ�.
			*
			* param[in] nFieldIndex : �ʵ� �ε���
			* param[out] strValue : ������ �� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldValue(_In_ int nFieldIndex, _Out_ CString& strValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� �ε����� ������ ���� �����ɴϴ�.
			* ���� �ش� ������ Ÿ������ �����ؾ� �մϴ�.
			*
			* param[in] nFieldIndex : �ʵ� �ε���
			* param[out] ppValue : ������ �� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldValue(_In_ int nFieldIndex, _Out_ void** ppValue);
						
			/**
			* ���� ���ڵ忡�� �ʵ� ���� ������ ���� �����ɴϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[out] strValue : ������ �� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldValue(_In_ CString strFieldName, _Out_ CString& strValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� ���� ������ ���� �����ɴϴ�.
			* ���� �ش� ������ Ÿ������ �����ؾ� �մϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[out] ppValue : ������ �� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetFieldValue(_In_ CString strFieldName, _Out_ void** ppValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� �ε����� ������ ���� �����մϴ�.
			*
			* param[in] nIndex : �ʵ� �ε���
			* param[in] strValue : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldValue(_In_ int nIndex, _In_ CString strValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� �ε����� ������ ���� �����մϴ�.
			* �ʵ� Ÿ�Կ� �°� �����ؾ� �մϴ�.
			*
			* param[in] nIndex : �ʵ� �ε���
			* param[in] pValue : ������ �� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldValue(_In_ int nIndex, _In_ void* pValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� ���� ������ ���� �����մϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[in] strValue : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldValue(_In_ CString strFieldName, _In_ CString strValue);
			
			/**
			* ���� ���ڵ忡�� �ʵ� ���� ������ ���� �����մϴ�.
			* �ʵ� Ÿ�Կ� �°� �����ؾ� �մϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			* param[in] pValue : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetFieldValue(_In_ CString strFieldName, _In_ void* pValue);
			
			/**
			* ���ڵ带 �߰��մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddRecord();
			
			/**
			* ���ڵ带 �����մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DeleteRecord();

		private:

			CRavidRecordset(_In_ CString strTableName, _In_ CRavidDatabase* pParentDataStorage);

			std::unique_ptr<CInternalRavidRecordset> m_pInternal;

			friend class CRavidDatabase;

			friend class CDBEditorManager;
		};
	}
}

