#pragma once

namespace Ravid
{
	namespace Framework
	{
		class CInterMultipleCondition;
		
		/**
		* ELogicalCondition �� �����ϴ� Ŭ�����Դϴ�.
		* �̹��� ó�� �� �˰��� ó������ ����մϴ�.
		* ELogicalCondition enum �� �����ϴ�.
		*	ELogicalCondition_Greater : �ʰ�
		*	ELogicalCondition_GreaterEqual : �̻�
		*	ELogicalCondition_Equal : ����
		*	ELogicalCondition_NotEqual : �ٸ���
		*	ELogicalCondition_LessEqual : ����
		*	ELogicalCondition_Less : �̸�
		*/
		class AFX_EXT_CLASS CMultipleCondition : public CRavidObject
		{
		public:
			CMultipleCondition();
			virtual ~CMultipleCondition();

			CMultipleCondition(_In_ CMultipleCondition& rmvdCondition);

			CMultipleCondition(_In_ const ELogicalCondition& elcCondition);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2, const ELogicalCondition& elcCondition3);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2, const ELogicalCondition& elcCondition3, const ELogicalCondition& elcCondition4);

			void operator=(_In_ CMultipleCondition rmvdMultiConst);
			void operator=(_In_ ELogicalCondition elcCondition);
			
			/**
			* ������ �ʱ�ȭ �մϴ�. 
			*/
			virtual void Clear();
			
			/**
			* CMultipleCondition ������ ���� �����մϴ�.
			*
			* param[in] rmvdMultipleCondition : ���� ������ (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			_Out_ bool Copy(_In_ CMultipleCondition& rmvdMultipleCondition);
			
			/**
			* CMultipleCondition ������ ���� �����մϴ�.
			*
			* param[in] pRmcdMultipleCondition : ���� ������ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			_Out_ bool Copy(_In_ CMultipleCondition* pRmcdMultipleCondition);
			
			/**
			* �ش� �ε����� ELogicalCondition �� �����մϴ�.
			*
			* param[in] stIndex : �Է� �ε���
			* param[in] elcCondition : �Է� ELogicalCondition enum (Reference)
			*	ELogicalCondition_Greater : �ʰ�
			*	ELogicalCondition_GreaterEqual : �̻�
			*	ELogicalCondition_Equal : ����
			*	ELogicalCondition_NotEqual : �ٸ���
			*	ELogicalCondition_LessEqual : ����
			*	ELogicalCondition_Less : �̸�
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			_Out_ bool SetAt(_In_ size_t stIndex, _In_ const ELogicalCondition& elcCondition);
			
			/**
			* ������ �ش� �ε����� ELogicalCondition �� �����ɴϴ�.
			*
			* param[in] stIndex : �Է� �ε���
			*
			* return value : ELogicalCondition enum �� ���� ���� ��ȯ�մϴ�.
			*	ELogicalCondition_Greater : �ʰ�
			*	ELogicalCondition_GreaterEqual : �̻�
			*	ELogicalCondition_Equal : ����
			*	ELogicalCondition_NotEqual : �ٸ���
			*	ELogicalCondition_LessEqual : ����
			*	ELogicalCondition_Less : �̸�
			*/
			_Out_ ELogicalCondition GetAt(_In_ size_t stIndex);
			
			/**
			* �ش� �ε����� ELogicalCondition �� �߰��մϴ�.
			*
			* param[in] stIndex : �Է� �ε���
			* param[in] elcCondition : �Է� ELogicalCondition enum (Reference)
			*	ELogicalCondition_Greater : �ʰ�
			*	ELogicalCondition_GreaterEqual : �̻�
			*	ELogicalCondition_Equal : ����
			*	ELogicalCondition_NotEqual : �ٸ���
			*	ELogicalCondition_LessEqual : ����
			*	ELogicalCondition_Less : �̸�
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			_Out_ bool InsertAt(_In_ size_t stIndex, _In_ const ELogicalCondition& elcCondition);
			
			/**
			* �ش� �ε����� ELogicalCondition �� �����մϴ�.
			*
			* param[in] stIndex : �Է� �ε���
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			_Out_ bool DeleteAt(_In_ size_t stIndex);
			
			/**
			* ELogicalCondition �� �߰��մϴ�.
			*
			* param[in] elcCondition : �Է� ELogicalCondition enum (Reference)
			*	ELogicalCondition_Greater : �ʰ�
			*	ELogicalCondition_GreaterEqual : �̻�
			*	ELogicalCondition_Equal : ����
			*	ELogicalCondition_NotEqual : �ٸ���
			*	ELogicalCondition_LessEqual : ����
			*	ELogicalCondition_Less : �̸�
			*/
			_Out_ void AddValue(_In_ const ELogicalCondition& elcCondition);
			
			/**
			* ������ ELogicalCondition �� ������ �����ɴϴ�.
			*
			* return value : size_t �� ���� ������ ��ȯ�մϴ�.
			*/
			_Out_ size_t GetSize();

		protected:
			CInterMultipleCondition* m_pInternal = nullptr; 
			
		};
	}
}

