#pragma once

#include <memory>
#include <vector>

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalLeastSquares;
		
		/**
		* ���� ��ǥ�� �̿��Ͽ� ȸ�ͺм��� ���� �������� �����ϴ� Ŭ�����Դϴ�.
		* ��������� �������� ���Ӽ��� ǥ���մϴ�.
		*/
		class AFX_EXT_CLASS CLeastSquares : public CRavidObject
		{
		public:
			RavidPreventCopySelf(CLeastSquares);

			CLeastSquares();
			virtual ~CLeastSquares();
			
			/**
			* ������ ��ǥ�� �ʱ�ȭ�մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Clear();
			
			/**
			* �Էµ� ��ü�� �߽����� ���� ��ǥ����Ʈ�� �����մϴ�.
			*
			* param[in] pData : �Է� ��ü ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ CRavidGeometryArray* pData);
			
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			*
			* param[in] pData : �Է� ��ü ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ std::vector<CRavidPoint<int> >* pData);
			
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			*
			* param[in] pData : �Է� ��ü ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ std::vector<CRavidPoint<long long> >* pData);
			
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			*
			* param[in] pData : �Է� ��ü ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ std::vector<CRavidPoint<float> >* pData);
			
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			*
			* param[in] pData : �Է� ��ü ����Ʈ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ std::vector<CRavidPoint<double> >* pData);
						
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			* �Էµ� x, y �� ���� ����, count ���� ���ų� �۾ƾ� �մϴ�.
			*
			* param[in] pDblX : x ��ǥ ����Ʈ (Pointer)
			* param[in] pDblY : y ��ǥ ����Ʈ (Pointer)
			* param[in] nCount : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ double* pDblX, _In_ double* pDblY, _In_ long nCount);
						
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			* �Էµ� pData �� ���� count ���� ���ų� �۾ƾ� �մϴ�.
			*
			* param[in] pData : x, y ��ǥ ����Ʈ (Pointer)
			* param[in] nCount : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ CRavidPoint<int>* pData, _In_ long nCount);
						
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			* �Էµ� pData �� ���� count ���� ���ų� �۾ƾ� �մϴ�.
			*
			* param[in] pData : x, y ��ǥ ����Ʈ (Pointer)
			* param[in] nCount : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ CRavidPoint<long long>* pData, _In_ long nCount);
						
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			* �Էµ� pData �� ���� count ���� ���ų� �۾ƾ� �մϴ�.
			*
			* param[in] pData : x, y ��ǥ ����Ʈ (Pointer)
			* param[in] nCount : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ CRavidPoint<float>* pData, _In_ long nCount);
						
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �����մϴ�.
			* �Էµ� pData �� ���� count ���� ���ų� �۾ƾ� �մϴ�.
			*
			* param[in] pData : x, y ��ǥ ����Ʈ (Pointer)
			* param[in] nCount : ������ ��
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetData(_In_ CRavidPoint<double>* pData, _In_ long nCount);
									
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �߰��մϴ�.
			*
			* param[in] dblX : x ��ǥ
			* param[in] dblY : y ��ǥ
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddData(_In_ double dblX, _In_ double dblY);
									
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �߰��մϴ�.
			*
			* param[in] pData : x, y ��ǥ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddData(_In_ CRavidPoint<int>* pData);
									
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �߰��մϴ�.
			*
			* param[in] pData : x, y ��ǥ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddData(_In_ CRavidPoint<long long>* pData);
									
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �߰��մϴ�.
			*
			* param[in] pData : x, y ��ǥ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddData(_In_ CRavidPoint<float>* pData);
									
			/**
			* �Էµ� ��ü�� ���� ��ǥ����Ʈ�� �߰��մϴ�.
			*
			* param[in] pData : x, y ��ǥ (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool AddData(_In_ CRavidPoint<double>* pData);
			
			/**
			* ���� ��ǥ����Ʈ�� 1�� �������� ����մϴ�.
			*
			* param[out] refA : 1�� ��� (Reference)
			* param[out] refB : ����� (Reference)
			* param[out] refRSquare : ������� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetLinear(_Out_ double& refA, _Out_ double& refB, _Out_ double& refRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 1�� �������� ����մϴ�.
			*
			* param[out] pA : 1�� ��� (Pointer)
			* param[out] pB : ����� (Pointer)
			* param[out] pRSquare : ������� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetLinear(_Out_ double* pA, _Out_ double* pB, _Out_ double* pRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 2�� �������� ����մϴ�.
			*
			* param[out] refA : x 2�� ��� (Reference)
			* param[out] refB : x 1�� ��� (Reference)
			* param[out] refC : ����� (Reference)
			* param[out] refRSquare : ������� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetQuadratic(_Out_ double& refA, _Out_ double& refB, _Out_ double& refC, _Out_ double& refRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 2�� �������� ����մϴ�.
			*
			* param[out] pA : x 2�� ��� (Pointer)
			* param[out] pB : x 1�� ��� (Pointer)
			* param[out] pC : ����� (Pointer)
			* param[out] pRSquare : ������� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetQuadratic(_Out_ double* pA, _Out_ double* pB, _Out_ double* pC, _Out_ double* pRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 3�� �������� ����մϴ�.
			*
			* param[out] refA : x 3�� ��� (Reference)
			* param[out] refB : x 2�� ��� (Reference)
			* param[out] refC : x 1�� ��� (Reference)
			* param[out] refD : ����� (Reference)
			* param[out] refRSquare : ������� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetCubic(_Out_ double& refA, _Out_ double& refB, _Out_ double& refC, _Out_ double& refD, _Out_ double& refRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 3�� �������� ����մϴ�.
			*
			* param[out] pA : x 3�� ��� (Pointer)
			* param[out] pB : x 2�� ��� (Pointer)
			* param[out] pC : x 1�� ��� (Pointer)
			* param[out] pD : ����� (Pointer)
			* param[out] pRSquare : ������� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetCubic(_Out_ double* pA, _Out_ double* pB, _Out_ double* pC, _Out_ double* pD, _Out_ double* pRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 4�� �������� ����մϴ�.
			*
			* param[out] refA : x 4�� ��� (Reference)
			* param[out] refB : x 3�� ��� (Reference)
			* param[out] refC : x 2�� ��� (Reference)
			* param[out] refD : x 1�� ��� (Reference)
			* param[out] refE : ����� (Reference)
			* param[out] refRSquare : ������� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetQuartic(_Out_ double& refA, _Out_ double& refB, _Out_ double& refC, _Out_ double& refD, _Out_ double& refE, _Out_ double& refRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� 4�� �������� ����մϴ�.
			*
			* param[out] pA : x 4�� ��� (Pointer)
			* param[out] pB : x 3�� ��� (Pointer)
			* param[out] pC : x 2�� ��� (Pointer)
			* param[out] pD : x 1�� ��� (Pointer)
			* param[out] pE : ����� (Pointer)
			* param[out] pRSquare : ������� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetQuartic(_Out_ double* pA, _Out_ double* pB, _Out_ double* pC, _Out_ double* pD, _Out_ double* pE, _Out_ double* pRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� n�� �������� ����մϴ�.
			*
			* param[out] nDegree : n �� ������ ���� (Reference)
			* param[out] refVctResult : ���, ��� ����Ʈ (Reference)
			* param[out] refRSquare : ������� (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetNDegree(_In_ int nDegree, _Out_ std::vector<double>& refVctResult, _Out_ double& refRSquare);
			
			/**
			* ���� ��ǥ����Ʈ�� n�� �������� ����մϴ�.
			*
			* param[out] nDegree : n �� ������ ���� (Pointer)
			* param[out] pVctResult : ���, ��� ����Ʈ (Pointer)
			* param[out] pRSquare : ������� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool GetNDegree(_In_ int nDegree, _Out_ std::vector<double>* pVctResult, _Out_ double* pRSquare);

		private:
			std::unique_ptr<CInternalLeastSquares> m_pInternal;
		};
	}
}

