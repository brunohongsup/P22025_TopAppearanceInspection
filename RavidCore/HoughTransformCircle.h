#pragma once

#include <vector>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalHoughTransformCircle;
		class CRavidImage;

		/**
		* �̹����� ȭ�ҿ��� ���� ����, �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CHoughTransformCircle : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHoughTransformCircle);

		public:
			CHoughTransformCircle();
			virtual ~CHoughTransformCircle();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refVctRp : CRavidPoint ���� ������ Ư¡�� ��ǥ ����Ʈ (Reference)
			* param[in] pGeometry : �˻� ROI (Pointer)
			* param[out] refVctCircles : CRavidCircle ���� ������ �� ����Ʈ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform( _In_ const std::vector<CRavidPoint<double>>& refVctRp, _In_ CRavidGeometry* pGeometry, _Out_ std::vector<CRavidCircle<double>>& refVctCircles);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pVctRp : CRavidPoint ���� ������ Ư¡�� ��ǥ ����Ʈ (Pointer)
			* param[in] pGeometry : �˻� ROI (Pointer)
			* param[out] refVctCircles : CRavidCircle ���� ������ �� ����Ʈ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double>>* pVctRp, _In_ CRavidGeometry* pGeometry, _Out_ std::vector<CRavidCircle<double>>& refVctCircles);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] refVctCircles : CRavidCircle ���� ������ �� ����Ʈ (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidCircle<int>>& vctCircles, _In_opt_ CRavidGeometry* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] pVctCircles : CRavidCircle ���� ������ �� ����Ʈ (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidCircle<int>>* pVctCircles, _In_opt_ CRavidGeometry* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Pointer)
			* param[out] vctCircles : CRavidCircle ���� ������ �� ����Ʈ (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidCircle<int>>& vctCircles, _In_opt_ CRavidGeometry* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Pointer)
			* param[out] pVctCircles : CRavidCircle ���� ������ �� ����Ʈ (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidCircle<int>>* pVctCircles, _In_opt_ CRavidGeometry* pGeometry);
			
			/**
			* Ư¡ ������ �Ǵ� �ȼ� ���� �����մϴ�.
			*
			* param[in] nThreshold : Ư¡ ���� �ȼ� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			
			/**
			* ������ ���� �ִ� ������ �����մϴ�.
			*
			* param[in] nMaxCircleCnt : ���� �ִ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxCircleCount(_In_ int nMaxCircleCnt);
			
			/**
			* ������ ���� ���� ������ �����մϴ�.
			* ���� ���ϴ� �ȼ��� ������ �ִ� ���� �Ÿ��� ǥ���մϴ�.
			*
			* param[in] nRegionalRange : ���� ���� ���� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetRegionRange(_In_ int nRegionalRange);
			
			/**
			* ������ ���� ũ�� ������ �����մϴ�.
			*
			* param[in] nMinRadius : �ּ� ������ ��
			* param[in] nMaxRadius : �ִ� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetRadius(_In_ int nMinRadius, _In_ int nMaxRadius);
			
			/**
			* ������ Ư¡ ������ �Ǵ� �ȼ� ���� �����ɴϴ�.
			*
			* return value : int �� Ư¡ ���� �ȼ� �� �� ��ȯ�մϴ�.
			*/
			int GetThreshold() const;
			
			/**
			* ������ ������ ���� �ִ� ������ �����ɴϴ�.
			*
			* return value : int �� ������ ���� �ִ� ������ ��ȯ�մϴ�.
			*/
			int GetMaxCircleCount() const;
			
			/**
			* ������ ������ ���� ���� ������ �����ɴϴ�.
			*
			* return value : int �� ���� ���� ���� ���� ��ȯ�մϴ�.
			*/
			int GetRegionRange() const;
			
			/**
			* ������ ������ ���� ũ�� ������ �����ɴϴ�.
			*
			* param[out] refMinRadius : �ּ� ������ �� (Reference)
			* param[out] refMaxRadius : �ִ� ������ �� (Reference)
			*/
			void GetRadius(_Out_ int& refMinRadius, _Out_ int& refMaxRadius) const;
		
		private:
			CInternalHoughTransformCircle* m_pInternal = nullptr;

		};
	}
}

