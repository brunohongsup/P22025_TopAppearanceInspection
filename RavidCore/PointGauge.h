#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalPointGauge;
		class CRavidImage;
		/**
		* �̹����� ������ ����� ��ü�� �����Ͽ� ������ ����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CPointGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPointGauge);

		public:
			CPointGauge();
			virtual ~CPointGauge();
			
			/**
			* Ư¡�� ã�� ���� ȭ�� ���� ��ȭ ����Դϴ�.
			*/
			enum ETransitionType
			{
				ETransitionType_BW = 0,
				ETransitionType_WB,
				ETransitionType_BWorWB,
				ETransitionType_BWB,
				ETransitionType_WBW,
			};
			/**
			* Ư¡�� ��Ÿ�� ��ġ�� �����ϴ� ����Դϴ�.
			*/
			enum ETransitionChoice
			{
				ETransitionChoice_Begin = 0,
				ETransitionChoice_End,
				ETransitionChoice_LargestAmplitude,
				ETransitionChoice_LargestArea,
				ETransitionChoice_Closest,
				ETransitionChoice_All,
			};

		/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pGeometry);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] refGeometry : �߽� ��ġ (Reference)
			* param[in] dblTolerance : Ž�� �ʺ�
			* param[in] dblAngle : Ž�� ȸ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& refGeometry, _In_ double dblTolerance, _In_ double dblAngle);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pGeometry : �߽� ��ġ (Pointer)
			* param[in] dblTolerance : Ž�� �ʺ�
			* param[in] dblAngle : Ž�� ȸ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pCenter, _In_ double dblTolerance, _In_ double dblAngle);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] refStart : Ž�� ���� ��ġ (Reference)
			* param[in] refEnd : Ž�� �� ��ġ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>&  refStart, _In_ CRavidPoint<double>& refEnd);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pStart : Ž�� ���� ��ġ (Pointer)
			* param[in] pEnd : Ž�� �� ��ġ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpStart, _In_ CRavidPoint<double>* pRpEnd);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] refMeasurementLine : Ž�� ����, �� ��ġ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>& refMeasurementLine);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pMeasurementLine : Ž�� ����, �� ��ġ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>* pRlMeasurementLine);
			
			/**
			* ������ Ž�� �߽� ��ġ�� �����ɴϴ�.
			*
			* return value : CRavidPoint Ŭ������ ��ȯ�մϴ�.
			*/
			CRavidPoint<double> GetCenter();
			
			/**
			* ������ Ž�� ���� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetTolerance();
			
			/**
			* ������ Ž�� ���� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetAngle();
			
			/**
			* ������ Ž�� ���� ������ Radian ���� �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetRadian();
					
			/**
			* ������ ȭ�Ұ� Ž�� ����� �����ɴϴ�.
			*
			* return value : enum ETransitionType Ÿ���� ��ȯ�մϴ�.
			*/
			ETransitionType GetTransitionType();
						
			/**
			* ���� �� ����մϴ�.
			* ȭ�Ұ� ��ȭ Ž�� ����� �����Դϴ�.
			*
			* param[in] eTransitionType : ȭ�Ұ� ��ȭ Ž�� ���
			*/
			void SetTransitionType(_In_ ETransitionType eTransitionType);
			
			/**
			* ������ Ž�� ���� ����� �����ɴϴ�.
			*
			* return value : enum ETransitionChoice Ÿ���� ��ȯ�մϴ�.
			*/
			ETransitionChoice GetTransitionChoice();

			/**
			* ���� �� ����մϴ�.
			* Ž�� ���� ����� �����Դϴ�.
			*
			* param[in] eTransitionChoice : ���� ���
			*/
			void SetTransitionChoice(_In_ ETransitionChoice eTransitionChoice);
			
			/**
			* ������ ��ȭ �ּҷ��� �����ɴϴ�.
			*
			* return value : long ������ ��ȯ�մϴ�.
			*/
			long GetThreshold();

			/**
			* ���� �� ����մϴ�.
			* ��ȭ �ּҷ��� �����մϴ�.
			*
			* param[in] nThreshold : ��� ��ȭ��
			*/
			void SetThreshold(_In_ long nThreshold);
			
			/**
			* ������ ��ȭ �������� �����ɴϴ�.
			*
			* return value : long ������ ��ȯ�մϴ�.
			*/
			long GetMinimumAmplitude();

			/**
			* ���� �� ����մϴ�.
			* ��ȭ �������� �����մϴ�.
			*
			* param[in] nMinimumAmplitude : ��ȭ ������
			*/
			void SetMinimumAmplitude(_In_ long nMinimumAmplitude);
			
			/**
			* ������ Ž�� ��ȿ �ֺ� ���� ������ ���� �����ɴϴ�.
			*
			* return value : int ������ ��ȯ�մϴ�.
			*/
			long GetThickness();

			/**
			* ���� �� ����մϴ�.
			* Ž�� ��ȿ �ֺ� ���� ������ ���� �����մϴ�.
			*
			* param[in] nThickness : �ֺ� ���� ������ ��
			*/
			void SetThickness(_In_ long nThickness);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredPoints(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] refVctResult : ��� ��ü ����Ʈ (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] pVctResult : ��� ��ü ����Ʈ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);

		private:

			void ClearInternalData();
			CInternalPointGauge* m_pInternal = nullptr;


		};
	}
}

