#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		template <typename T>
		class CInternalNumberFormat;
		
		/**
		* �Էµ� ���� ���ڿ��� ��ȯ�ϴ� Ŭ�����Դϴ�.
		*/
		template <typename T>
		class AFX_EXT_CLASS CNumberFormat : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CNumberFormat);

		public:
			CNumberFormat();
			virtual ~CNumberFormat();
			
			/**
			* �Էµ� ���� �����ɴϴ�.
			*
			* return value : Template type �� �����͸� ��ȯ�մϴ�.
			*/
			T GetNumber();
			
			/**
			* Int �� �����͸� �����մϴ�.
			*
			* param[in] nValue : �Է� ��
			*/
			void SetNumber(_In_ int nValue);
			
			/**
			* long long �� �����͸� �����մϴ�.
			*
			* param[in] llValue : �Է� ��
			*/
			void SetNumber(_In_ long long llValue);
			
			/**
			* float �� �����͸� �����մϴ�.
			*
			* param[in] fValue : �Է� ��
			*/
			void SetNumber(_In_ float fValue);
			
			/**
			* double �� �����͸� �����մϴ�.
			*
			* param[in] dblValue : �Է� ��
			*/
			void SetNumber(_In_ double dblValue);
			
			/**
			* ������ �Ҽ��� ���� ��� �ڸ����� �����ɴϴ�.
			*
			* return value : long �� ��� �ڸ����� ��ȯ�մϴ�.
			*/
			long GetDecimalPlace();
			
			/**
			* �Ҽ��� ���� ��� �ڸ����� �����մϴ�.
			*
			* param[in] nValue : �ڸ���
			*/
			void SetDecimalPlace(_In_ long nValue);
			
			/**
			* ������ �޸��� ���� ���θ� �����ɴϴ�.
			*
			* return value : bool �� �޸��� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetIncludingComma();
			
			/**
			* �Ҽ��� ��� �޸��� ���� ���θ� �����մϴ�.
			*
			* param[in] bSet : �޸� ���� ����
			*/
			void SetIncludingComma(_In_ bool bSet);
			
			/**
			* ������ �����͸� ���ڿ��� ����մϴ�.
			*
			* return value : CString �� ��ȯ�� ���ڿ��� ��ȯ�մϴ�.
			*/
			CString GetResult();

		protected:
			CInternalNumberFormat<T>* m_pInternal = nullptr;
		
		};
	}
}

