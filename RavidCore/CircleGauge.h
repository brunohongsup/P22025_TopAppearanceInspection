#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalCircleGauge;
		class CRavidImage;
		
		/**
		* �̹������� ���� ��ü�� �����Ͽ� ������ ����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CCircleGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCircleGauge);

		public:
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
			};

			CCircleGauge();
			virtual ~CCircleGauge();
			
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
			* param[in] dblDiameter : ��ü ����
			* param[in] dblTolerance : Ž�� ����
			* param[in_opt] dblStartDeg : Ž�� ���� ����
			* param[in_opt] dblDeltaDeg : Ž�� ���� ����
			* param[in_opt] dblAngle : Ž�� ȸ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& refGeometry, _In_ double dblDiameter, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pGeometry : �߽� ��ġ (Pointer)
			* param[in] dblDiameter : ��ü ����
			* param[in] dblTolerance : Ž�� ����
			* param[in_opt] dblStartDeg : Ž�� ���� ����
			* param[in_opt] dblDeltaDeg : Ž�� ���� ����
			* param[in_opt] dblAngle : Ž�� ȸ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pGeometry, _In_ double dblDiameter, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] refGeometry : Ž�� ���� (Reference)
			* param[in] dblTolerance : Ž�� ����
			* param[in_opt] dblStartDeg : Ž�� ���� ����
			* param[in_opt] dblDeltaDeg : Ž�� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>& refGeometry, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pGeometry : Ž�� ���� (Pointer)
			* param[in] dblTolerance : Ž�� ����
			* param[in_opt] dblStartDeg : Ž�� ���� ����
			* param[in_opt] dblDeltaDeg : Ž�� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>* pGeometry, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] refGeometry : �߽� ��ġ, ������, Ž�� ����, ����, ȸ�� ����(Reference)
			* param[in] dblTolerance : Ž�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>& refGeometry, _In_ double dblTolerance);
			
			/**
			* ���� �� ����մϴ�.
			* �����ϱ� ���� ��ġ, ���¸� �����մϴ�.
			*
			* param[in] pGeometry : �߽� ��ġ, ������, Ž�� ����, ����, ȸ�� ����(Pointer)
			* param[in] dblTolerance : Ž�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>* pGeometry, _In_ double dblTolerance);
			
			/**
			* ������ Ž�� �߽� ��ġ�� �����ɴϴ�.
			*
			* return value : CRavidPoint Ŭ������ ��ȯ�մϴ�.
			*/
			CRavidPoint<double> GetCenter();
			
			/**
			* ������ Ž�� ���� �������� �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetRadius();
			
			/**
			* ������ Ž�� ���� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetDiameter();
			
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
			* ���� ������ Ž�� ���� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetSamplingStep();

			/**
			* ���� �� ����մϴ�.
			* Ž�� ���� ������ �����մϴ�.
			*
			* param[in] dblSamplingStep : ����
			*/
			void SetSamplingStep(_In_ double dblSamplingStep);
			
			/**
			* ������ ��ü ���� ��ȿ �Ÿ��� �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�մϴ�.
			*/
			double GetOutLiersThreshold();

			/**
			* ���� �� ����մϴ�.
			* ��ü ���� ��ȿ �Ÿ��� �����մϴ�.
			*
			* param[in] dblOutLiersThreshold : ���� ��ȿ �Ÿ�
			*/
			void SetOutLiersThreshold(_In_ double dblOutLiersThreshold);
			
			/**
			* ������ ��ü ���� �ݺ� Ƚ���� �����ɴϴ�.
			*
			* return value : int ������ ��ȯ�մϴ�.
			*/
			int GetNumOfPass();

			/**
			* ���� �� ����մϴ�.
			* ��ü ���� �ݺ� Ƚ���� �����մϴ�.
			*
			* param[in] nNumOfPass : ���� ��ȿ �Ÿ�
			*/
			void SetNumOfPass(_In_ int nNumOfPass);			
			
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
			* �Էµ� �ε����� ���� ��ü�� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : CRavidCircle Ŭ���� ���·� ��ȯ�մϴ�.
			*/
			CRavidCircle<double> GetMeasuredObject(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü�� �����ɴϴ�.
			*
			* param[out] refGeometry : ��� ��ü (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidCircle<double>& refGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü�� �����ɴϴ�.
			*
			* param[out] pGeometry : ��� ��ü (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidCircle<double>* pGeometry, _In_opt_ int nIndex = 0);
						
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü �߽��� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : CRavidPoint Ŭ���� ���·� ��ȯ�մϴ�.
			*/
			CRavidPoint<double> GetMeasuredCenter(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü �߽��� �����ɴϴ�.
			*
			* param[out] refGeometry : ��� ��ü (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>& refGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü �߽��� �����ɴϴ�.
			*
			* param[out] pGeometry : ��� ��ü (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>* pGeometry, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü �������� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : double ���·� ��ȯ�մϴ�.
			*/
			double GetMeasuredRadius(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ��ü ������ �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : double ���·� ��ȯ�մϴ�.
			*/
			double GetMeasuredDiameter(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredValidPoints(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] refVctResult : ��� ��ü ����Ʈ (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] pVctResult : ��� ��ü ����Ʈ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : std::vector<CRavidPoint<double> > ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<double> > GetMeasuredInvalidPoints(_In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] refVctResult : ��� ��ü ����Ʈ (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >& refVctResult, _In_opt_ int nIndex = 0);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��ȿ ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] pVctResult : ��� ��ü ����Ʈ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);
			
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
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ��� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] pVctResult : ��� ��ü ����Ʈ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<Ravid::TPoint<float> >* pVctResult, _In_opt_ int nIndex = 0);

		private:

			void ClearInternalData();

			EAlgorithmResult FitCircle(_In_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ CRavidCircle<double>& rcCircleResult);
			EAlgorithmResult PassCircle(_Inout_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ std::vector<Ravid::TPoint<float> >& vctInvalidPoint, _Inout_ CRavidCircle<double>& rcCircleResult);

			CInternalCircleGauge* m_pInternal;
		};
	}
}

