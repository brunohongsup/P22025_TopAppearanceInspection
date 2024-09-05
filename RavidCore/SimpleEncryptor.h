#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		class CInternalSimpleEncryptor;

		/**
		* �Էµ� �����͸� �ܼ� ��ȣȭ, ��ȣȭ�ϴ� Ŭ�����Դϴ�.
		*/
		class CSimpleEncryptor
		{
		public:
			CSimpleEncryptor();
			virtual ~CSimpleEncryptor();

			void ResetTransaction();
			
			/**
			* �Էµ� �����͸� ��ȣȭ�մϴ�.
			*
			* param[in_out] pData : ����� ������
			* param[in] nSize : ��ȣȭ �� ����
			* �������κ��� nSize ��ŭ ��ȣȭ �մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool EncryptData(_Inout_ char* pData, _In_ int nSize);
			
			/**
			* �Էµ� �����͸� ��ȣȭ�մϴ�.
			*
			* param[in_out] pData : ����� ������
			* param[in] nSize : ��ȣȭ �� ����
			* �������κ��� nSize ��ŭ ��ȣȭ �մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool DecryptData(_Inout_ char* pData, _In_ int nSize);

		private:
			BYTE BitRL(_In_ char cIn, _In_ int nCount);
			BYTE BitRR(_In_ char cIn, _In_ int nCount);
			CInternalSimpleEncryptor* m_pInternal = nullptr;
			
		};
	}
}

