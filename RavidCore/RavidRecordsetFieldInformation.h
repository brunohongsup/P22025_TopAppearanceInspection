#pragma once

namespace Ravid
{
	namespace Database
	{
		/**
		* ���ڵ� �ʵ� ������ �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CRavidRecordsetFieldInformation
		{
		private:
			CRavidRecordsetFieldInformation();

		public:
			CRavidRecordsetFieldInformation(CString strFieldName, ERavidRecordsetFieldType eType);
			virtual ~CRavidRecordsetFieldInformation();
			
			/**
			* �ʵ� ���� �����մϴ�.
			*
			* param[in] strFieldName : �ʵ� ��
			*/
			void SetFieldName(_In_ CString strFieldName);
			
			/**
			* ������ �ʵ� ���� �����ɴϴ�.
			*
			* return value : CString �� �ʵ� ���� ��ȯ�մϴ�.
			*/
			CString GetFieldName();
			
			/**
			* �ʵ� ������ Ÿ���� �����մϴ�.
			*
			* param[in] eType : �ʵ� ������ Ÿ��
			*/
			void SetFieldType(_In_ ERavidRecordsetFieldType eType);
			
			/**
			* ������ ������ Ÿ���� �����ɴϴ�.
			*
			* return value : ERavidRecordsetFieldType �� �ʵ� ������ Ÿ���� ��ȯ�մϴ�.
			*/
			ERavidRecordsetFieldType GetFieldType();

		private:
			CString m_strFieldName;
			ERavidRecordsetFieldType m_eType;
		};
	}
}
