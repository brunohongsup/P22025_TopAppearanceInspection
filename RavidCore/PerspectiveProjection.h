#pragma once

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}

	namespace Algorithms
	{
		class CRavidImage;
		class CInternalPerspectiveProjection;
		/**
		* �� �簢���� ���ٹ��� �����Ͽ� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CPerspectiveProjection : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPerspectiveProjection);

		public:
			CPerspectiveProjection();
			virtual ~CPerspectiveProjection();
			
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
			* ���� ���� �� ����մϴ�.
			* �� ��ü�� ���� ��Ʈ������ �����ɴϴ�.
			*
			* return value : CMatrix �� ���·� ���� ���ٹ� ��Ʈ������ ��ȯ�մϴ�.
			*/
			Ravid::Mathematics::CMatrix GetMatrix();
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<int>& refSourceWorld, _In_ CRavidQuadrangle<int>& refTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<int>* pSourceWorld, _In_ CRavidQuadrangle<int>* pTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<long long>& refSourceWorld, _In_ CRavidQuadrangle<long long>& refTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<long long>* pSourceWorld, _In_ CRavidQuadrangle<long long>* pTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<float>& refSourceWorld, _In_ CRavidQuadrangle<float>& refTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<float>* pSourceWorld, _In_ CRavidQuadrangle<float>* pTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<double>& refSourceWorld, _In_ CRavidQuadrangle<double>& refTargetWorld);
			
			/**
			* ���� ������ ��ǥ ������ �����մϴ�.
			*
			* param[in] refSourceWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			* param[in] refTargetWorld : CRavidQuadrangle �� ���·� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping(_In_ CRavidQuadrangle<double>* pSourceWorld, _In_ CRavidQuadrangle<double>* pTargetWorld);
			
			/**
			* ������ �� ������ �����մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mapping();
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] refPoint : CRavidPoint �� ����� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<double>& refPoint);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] pPoint : CRavidPoint �� ����� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<double>* pPoint);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<int>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<int>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] refPoint : CRavidPoint �� ����� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<long long>& refPoint);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[inout] pPoint : CRavidPoint �� ����� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_Inout_ CRavidPoint<long long>* pSource);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<long long>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<long long>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<float>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<float>* pSource, _Out_ CRavidPoint<double>* pTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] refSource : CRavidPoint �� �Է� (Reference)
			* param[out] refTarget : CRavidPoint �� ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<double>& refSource, _Out_ CRavidPoint<double>& refTarget);
			
			/**
			* �Է� ��ǥ�� ��ǥ ��ǥ�� ��ȯ�մϴ�.
			*
			* param[in] pSource : CRavidPoint �� �Է� (Pointer)
			* param[out] pTarget : CRavidPoint �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCoordinate(_In_ CRavidPoint<double>* pSource, _Out_ CRavidPoint<double>* pTarget);
						
			/**
			* �Է� �̹����� ��ǥ �̹����� ��ȯ�մϴ�.
			*
			* param[in] pImgSrc : CRavidImage �� �Է� (Pointer)
			* param[out] pImgDst : CRavidImage �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertImage(_In_ CRavidImage* pImgSrc, _Out_ CRavidImage* pImgDst);
						
			/**
			* �Է� �̹����� ��ǥ �̹����� ��ȯ�մϴ�.
			* �׽�Ʈ �����Դϴ�.
			*
			* param[in] pImgSrc : CRavidImage �� �Է� (Pointer)
			* param[out] pImgDst : CRavidImage �� ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertImage_(_In_ CRavidImage* pImgSrc, _Out_ CRavidImage* pImgDst);

		private:
			CInternalPerspectiveProjection* m_pInternal = nullptr;
		};
	}
}
