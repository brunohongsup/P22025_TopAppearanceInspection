#pragma once

#include <memory>

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalMatrix;
		
		/**
		* ��Ʈ������ ����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CMatrix : public CRavidObject
		{
			RavidUseDynamicCreation(this);

		public:
			CMatrix();
			virtual ~CMatrix();

			CMatrix(_In_ const CMatrix& matrix);
			CMatrix(_In_ CMatrix* pMatrix);
			CMatrix(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);
			
			/**
			* �� ����
			*/
			void operator+=(_In_ const int& nParam);
			void operator+=(_In_ const long long& llParam);
			void operator+=(_In_ const float& fParam);
			void operator+=(_In_ const double& dblParam);
			void operator+=(_In_ const CMatrix& cMat);
			
			/**
			* �� ����
			*/
			void operator-=(_In_ const int& nParam);
			void operator-=(_In_ const long long& llParam);
			void operator-=(_In_ const float& fParam);
			void operator-=(_In_ const double& dblParam);
			void operator-=(_In_ const CMatrix& cMat);
			
			/**
			* ���� ����
			*/
			void operator*=(_In_ const int& nParam);
			void operator*=(_In_ const long long& llParam);
			void operator*=(_In_ const float& fParam);
			void operator*=(_In_ const double& dblParam);
			void operator*=(_In_ const CMatrix& cMat);
			
			/**
			* ������ ����
			*/
			void operator/=(_In_ const int& nParam);
			void operator/=(_In_ const long long& llParam);
			void operator/=(_In_ const float& fParam);
			void operator/=(_In_ const double& dblParam);
			
			/**
			* �� ����
			*/
			CMatrix operator+(_In_ const int& nParam);
			CMatrix operator+(_In_ const long long& llParam);
			CMatrix operator+(_In_ const float& fParam);
			CMatrix operator+(_In_ const double& dblParam);
			CMatrix operator+(_In_ const CMatrix& cMat);
			
			/**
			* �� ����
			*/
			CMatrix operator-(_In_ const int& nParam);
			CMatrix operator-(_In_ const long long& llParam);
			CMatrix operator-(_In_ const float& fParam);
			CMatrix operator-(_In_ const double& dblParam);
			CMatrix operator-(_In_ const CMatrix& cMat);
			
			/**
			* ���� ����
			*/
			CMatrix operator*(_In_ const int& nParam);
			CMatrix operator*(_In_ const long long& llParam);
			CMatrix operator*(_In_ const float& fParam);
			CMatrix operator*(_In_ const double& dblParam);
			CMatrix operator*(_In_ const CMatrix& cMat);
			
			/**
			* ������ ����
			*/
			CMatrix operator/(_In_ const int& nParam);
			CMatrix operator/(_In_ const long long& llParam);
			CMatrix operator/(_In_ const float& fParam);
			CMatrix operator/(_In_ const double& dblParam);
			
			/**
			* ���� ����
			*/
			void operator=(_In_ const CMatrix& matrix);
			void operator=(_In_ CMatrix* pMatrix);
			
			/**
			* �� ����
			*/
			bool operator==(_In_ const CMatrix& cMat);
			bool operator!=(_In_ const CMatrix& cMat);
			
			/**
			* ��Ʈ���� ũ�⸦ �����մϴ�.
			*
			* param[in] nColumn : �� ũ��
			* param[in] nRow : �� ũ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool InitMatrix(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);
			
			/**
			* ��Ʈ���� ������ ��ȿ���� Ȯ���մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			virtual bool __fastcall IsValid() override;
			
			/**
			* �Էµ� ��Ʈ������ �����մϴ�.
			*
			* param[in] matrix : ��Ʈ���� ���� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Copy(_In_ CMatrix& matrix);
			
			/**
			* �Էµ� ��Ʈ������ �����մϴ�.
			*
			* param[in] pMatrix : ��Ʈ���� ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Copy(_In_ CMatrix* pMatrix);
			
			/**
			* ���� ���� �� �����͸� �ʱ�ȭ�մϴ�.
			*/
			void Clear();
			
			/**
			* ������ ��Ʈ���� ���� �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ��Ʈ���� ���� ��ȯ�մϴ�.
			*/
			ptrdiff_t GetColumn();
			
			/**
			* ������ ��Ʈ���� ���� �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ��Ʈ���� ���� ��ȯ�մϴ�.
			*/
			ptrdiff_t GetRow();
			
			/**
			* ������ ��Ʈ���� �࿭�� ��ü ũ�⸦ �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ��Ʈ���� �࿭�� ũ�⸦ ��ȯ�մϴ�.
			*/
			ptrdiff_t GetElementCount();
			
			/**
			* ������ ��Ʈ���� �࿭�� ������ ũ�⸦ �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ��Ʈ���� �࿭�� ������ ũ�⸦ ��ȯ�մϴ�.
			*/
			ptrdiff_t GetTotalSize();
			
			/**
			* ������ ��Ʈ���� �࿭�� ������ ĳ�ø� �����ɴϴ�.
			*
			* return value : double** �� ��Ʈ���� �࿭�� ������ ĳ�� �����͸� ��ȯ�մϴ�.
			*/
			double** GetMatrixYCache();
			
			/**
			* ������ ��Ʈ���� �࿭�� �����͸� �����ɴϴ�.
			*
			* return value : double* �� ��Ʈ���� �࿭�� ������ �����͸� ��ȯ�մϴ�.
			*/
			double* GetMatrix();
			
			/**
			* �Էµ� ������ ����Ʈ�� �����մϴ�.
			*
			* param[in] pMatrix : ������ ����Ʈ (Reference)
			* param[in] nColumn : �� ũ��
			* param[in] nRow : �� ũ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetMatrix(_In_ double* pMatrix, _In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);
			
			/**
			* �ش� ��ġ�� ��Ʈ���� �����͸� �����ɴϴ�.
			*
			* return value : double* �� ��Ʈ���� ������ �����͸� ��ȯ�մϴ�.
			*/
			double* GetValue(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);
			
			/**
			* �ش� ��ġ�� �����͸� �����մϴ�.
			*
			* param[in] nColumn : �� ũ��
			* param[in] nRow : �� ũ��
			* param[in] value : ������
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetValue(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow, _In_ double value);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] matrix : �Է� ��Ʈ���� (Reference)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Add(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] pMatrix : �Է� ��Ʈ���� (Pointer)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Add(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] matrix : �Է� ��Ʈ���� (Reference)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Subtract(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] pMatrix : �Է� ��Ʈ���� (Pointer)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Subtract(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] matrix : �Է� ��Ʈ���� (Reference)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Multiply(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �Է� ��Ʈ������ �� ������ �մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in] pMatrix : �Է� ��Ʈ���� (Pointer)
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Multiply(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* ��� ���� ��ȯ�մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Transpose(_Out_opt_ CMatrix* pResultMatrix = nullptr);

			/**
			* �࿭�� ���࿭�� ��ȯ�մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Invert(_Out_opt_ CMatrix* pResultMatrix = nullptr);

			/**
			* �࿭�� �����࿭�� ��ȯ�մϴ�.
			* ��� ��Ʈ������ ������ ���� ��Ʈ������ ����մϴ�.
			*
			* param[in_opt] pResultMatrix : ��� ��Ʈ���� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Unit(_Out_opt_ CMatrix* pResultMatrix = nullptr);
			
			/**
			* �࿭���� ����մϴ�.
			*
			* return value : double �� �࿭�� ����� ��ȯ�մϴ�.
			*/
			double GetDeterminant();

		protected:
			std::unique_ptr<CInternalMatrix> m_pInternal;
		};
	}
}

