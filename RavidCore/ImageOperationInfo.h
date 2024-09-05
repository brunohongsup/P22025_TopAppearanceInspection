#pragma once

namespace Ravid
{
	namespace Framework
	{
		class Framework::CMultipleVariable;
	}

	namespace Algorithms
	{
		class CInterImageOperationInfo;
		class CRavidImage;
		
		/**
		* �̹��� ������ ���� ������ Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CImageOperationInfo : public CRavidObject
		{
		public:
			/**
			* ���� ����� �����մϴ�.
			*/
			enum EOperationType
			{
				EOperationType_Add = 0,
				EOperationType_Subtract,
				EOperationType_Multiply,
				EOperationType_Divide,
				EOperationType_Modulo,
				EOperationType_ShiftLeft,
				EOperationType_ShiftRight,
				EOperationType_BitwiseAND,
				EOperationType_BitwiseOR,
				EOperationType_BitwiseXOR,
				EOperationType_LogicalAND,
				EOperationType_LogicalOR,
				EOperationType_LogicalXOR,
				EOperationType_Minimum,
				EOperationType_Maximum,
				EOperationType_Equal,
				EOperationType_NotEqual,
				EOperationType_GreaterOrEqual,
				EOperationType_LesserOrEqual,
				EOperationType_Greater,
				EOperationType_Lesser,
				EOperationType_MultiplyAdd,
			};
			/**
			* ���� �����͸� �����մϴ�.
			*/
			enum EDataType
			{
				EDataType_Const = 0,	// ������ ó��
				EDataType_Image,		// �̹����� ó��
			};

			CImageOperationInfo();
			virtual ~CImageOperationInfo();

			CImageOperationInfo(_In_ CImageOperationInfo& imgOper);
			CImageOperationInfo(_In_ CImageOperationInfo* pImgOper);
			CImageOperationInfo(_In_opt_ EOperationType eOperType, _In_opt_ EDataType eDataType, _In_ CRavidImage* pRI = nullptr, _In_ Framework::CMultipleVariable* pConst = nullptr);
			
			/**
			* ������ �����͸� �ʱ�ȭ �մϴ�. 
			*/
			virtual void Clear();
			
			/**
			* �Էµ� CImageOperationInfo�� ���� �����մϴ�.
			*
			* param[in] imgOper : ��Ʈ���� ���� (Reference)
			*/
			void Copy(_In_ CImageOperationInfo& imgOper);
			
			/**
			* �Էµ� CImageOperationInfo�� ���� �����մϴ�.
			*
			* param[in] pImgOper : ��Ʈ���� ���� (Pointer)
			*/
			void Copy(_In_ CImageOperationInfo* pImgOper);
			
			/**
			* �Էµ� CImageOperationInfo�� ���� �����մϴ�.
			* eDataType(���� ������ ����) �� ���� pConst �� ����մϴ�.
			*
			* param[in] eOperType : ���� ���
			* param[in] eDataType : ���� ������
			* param[in] pRI : �Է� �̹��� (Pointer)
			* param[in] pConst : CMultipleVariable ������ �� (Pointer)
			*/
			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_opt_ EDataType eDataType, _In_ CRavidImage* pRI = nullptr, _In_ Framework::CMultipleVariable* pConst = nullptr);
			
			/**
			* �Էµ� CImageOperationInfo�� ���� �����մϴ�.
			* ���� �����͸� ������ ó�� �� �� ����մϴ�.
			*
			* param[in] eOperType : ���� ���
			* param[in] pConst : CMultipleVariable ������ �� (Pointer)
			*/
			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_ Framework::CMultipleVariable* pConst);
			
			/**
			* �Էµ� CImageOperationInfo�� ���� �����մϴ�.
			* ���� �����͸� �̹����� ó�� �� �� ����մϴ�.
			*
			* param[in] eOperType : ���� ���
			* param[in] pRI : �Է� �̹��� (Pointer)
			*/
			void SetImageOperationInfo(_In_opt_ EOperationType eOperType, _In_ CRavidImage* pRI);
			
			/**
			* ������ Ÿ���� �����ɴϴ�.
			*
			* return value : EOperationType �� �����ڸ� ��ȯ�մϴ�.
			*/
			EOperationType GetOperationType();
			
			/**
			* ������ Ÿ���� �����մϴ�.
			*
			* param[in] eOperType : ���� ���
			*/
			void SetOperationType(_In_opt_ EOperationType eOperType);
			
			/**
			* ���� �����͸� �����ɴϴ�.
			*
			* return value : EDataType �� ���� �����͸� ��ȯ�մϴ�.
			*/
			EDataType GetDataType();
			
			/**
			* ���� �����͸� �����մϴ�.
			*
			* param[in] eDataType : ���� ������
			*/
			void SetDataType(_In_opt_ EDataType eDataType);
			
			/**
			* ���� �̹����� �����ɴϴ�.
			*
			* return value : CRavidImage* �� ���� �̹����� ��ȯ�մϴ�.
			*/
			CRavidImage* GetImage();

			/**
			* ���� �̹����� �����մϴ�.
			*
			* param[in] pRI : ���� �̹���
			*/
			void SetImage(_In_ CRavidImage* pRI);
			
			/**
			* ���� ������ ���� �����ɴϴ�.
			*
			* return value : CMultipleVariable* �� ���� �����͸� ��ȯ�մϴ�.
			*/
			Framework::CMultipleVariable* GetMultipleVariable();

			/**
			* ���� ������ ���� �����մϴ�.
			*
			* param[in] pConst : ���� ������ ��
			*/
			void SetMultipleVariable(_In_ Framework::CMultipleVariable* pConst);

		protected:
			CInterImageOperationInfo* m_pInternal = nullptr;
			
		};
	}
}
