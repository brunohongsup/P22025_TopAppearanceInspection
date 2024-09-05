#pragma once
#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		struct SCMPoint
		{
			double x;
			double y;
		};

		struct SCMLine
		{
			SCMPoint cmPoint[2];
		};

#define CMP_COPY(_a, _b) _a.x = _b.x; _a.y = _b.y
#define CMP_PLUSCOPY(_a, _b) CMP_PLUS(_a, _a, _b)

#define CMP_PLUS(_a, _b, _c) _a.x = _b.x + _c.x; _a.y = _b.y + _c.y
#define CMP_MINUS(_a, _b, _c) _a.x = _b.x - _c.x; _a.y = _b.y - _c.y
#define CMP_MULTI(_a, _b, _c) _a.x = _b.x * _c; _a.y = _b.y * _c

		class CInternalCoordinateMapper;
		
		/**
		* �� �簢���� �����Ͽ� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CCoordinateMapper : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCoordinateMapper);

		public:
			CCoordinateMapper();
			virtual ~CCoordinateMapper();
			
			/**
			* ���� ������ ���� �ʱ�ȭ �մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Clear();
			
			/**
			* ������ �Է� ������ �����ɴϴ�.
			*
			* return value : CRavidQuadrangle �� ���·� ��ȯ�˴ϴ�.
			*/
			CRavidQuadrangle<double>* GetSourceWorld();
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<int>& refSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] pSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<int>* pSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<long long>& refSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] pSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<long long>* pSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<float>& refSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] pSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<float>* pSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<double>& refSourceWorld);
			
			/**
			* �Է� ������ �����մϴ�.
			*
			* param[in] pSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSourceWorld(_In_ CRavidQuadrangle<double>* pSourceWorld);
						
			/**
			* ������ ��ǥ ������ �����ɴϴ�.
			*
			* return value : CRavidQuadrangle �� ���·� ��ȯ�˴ϴ�.
			*/
			CRavidQuadrangle<double>* GetTargetWorld();
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<int>& refTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<int>* pTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<long long>& refTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<long long>* pTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<float>& refTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<float>* pTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<double>& refTargetWorld);
			
			/**
			* ��ǥ ������ �����մϴ�.
			*
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetTargetWorld(_In_ CRavidQuadrangle<double>* pTargetWorld);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] refPoint : CRavidPoint �� ����� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_Inout_ CRavidPoint<double>& refPoint);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] pPoint : CRavidPoint �� ����� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_Inout_ CRavidPoint<double>* pPoint);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<int>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<int>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] refPoint : CRavidPoint �� ����� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_Inout_ CRavidPoint<long long>& refSource);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] pPoint : CRavidPoint �� ����� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_Inout_ CRavidPoint<long long>* pSource);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<long long>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<long long>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<float>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<float>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<double>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(_In_ CRavidPoint<double>* pSource, _Out_ CRavidPoint<double>* pTarget);			
			
			/**
			* �Է� ��ǥ ����Ʈ�� ��ǥ ��ǥ����Ʈ�� ��ȯ�մϴ�.
			*
			* param[in] pVctSource : CRavidPoint �� ���ͷ� �Է� (Pointer)
			* param[out] pVctTarget : CRavidPoint �� ���ͷ� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(std::vector<CRavidPoint<double>>* pVctSource, std::vector<CRavidPoint<double>>* pVctTarget);
			
			/**
			* �Է� ��ǥ ����Ʈ�� ��ǥ ��ǥ����Ʈ�� ��ȯ�մϴ�.
			*
			* param[in] dblSrcX : double �� x�� �Է�
			* param[in] dblSrcY : double �� y�� �Է�
			* param[out] dblDstX : double �� x�� ��� (Pointer)
			* param[out] dblDstY : double �� y�� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convert(double dblSrcX, double dblSrcY, double *dblDstX, double *dblDstY);

		private:

			CInternalCoordinateMapper* m_pInternal = nullptr;
		};
	}
}
