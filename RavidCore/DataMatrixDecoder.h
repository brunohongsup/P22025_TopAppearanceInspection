#pragma once

#include "RavidQuadrangle.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalDataMatrixDecoder;
		
		/**
		* �̹������� 2���� ������ ��Ʈ���� �ڵ带 �м��ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDataMatrixDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDataMatrixDecoder);

		public:
			CDataMatrixDecoder();
			virtual ~CDataMatrixDecoder();

			/**
			* ����, ���� �˰��� ���� ����Դϴ�.
			*/
			enum EDataMatrixInspectionCount
			{
				EDataMatrixInspectionCount_Single = 0,
				EDataMatrixInspectionCount_All
			};
			/**
			* ����� �ڵ��� �� �� ����� �����մϴ�.
			*/
			enum EDataMatrixColorLayer
			{
				EDataMatrixColorLayer_Black = 0,
				EDataMatrixColorLayer_White,
				EDataMatrixColorLayer_Auto_BlackToWhite,
				EDataMatrixColorLayer_Auto_WhiteToBlack
			};
			/**
			* �ڵ带 ã������ ����ȭ �˰����Դϴ�.
			*/
			enum EDataMatrixThresholdMethodOption
			{
				EDataMatrixThresholdMethodOption_Ostu = 0x1,
				EDataMatrixThresholdMethodOption_Adaptive1 = 0x2,
				EDataMatrixThresholdMethodOption_Adaptive2 = 0x4,
				EDataMatrixThresholdMethodOption_ISODATA = 0x8,
				EDataMatrixThresholdMethodOption_MaximumEntropy = 0x10
			};
			/**
			* �ڵ��� ���� ������ �����մϴ�.
			*/
			enum EDataMatrixFlippingRegion
			{
				EDataMatrixFlippingRegion_No = 0x1,
				EDataMatrixFlippingRegion_Yes = 0x2,
				EDataMatrixFlippingRegion_Auto = 0x3
			};
			/**
			* �ڵ带 �����ϰ� ���߱� ���� �˰����Դϴ�.
			*/
			enum EDataMatrixLineFittingMethod
			{
				EDataMatrixLineFittingMethod_Cluster = 0,
				EDataMatrixLineFittingMethod_HoughTransform,
				EDataMatrixLineFittingMethod_RANSAC
			};
			/**
			* ��Ʈ���� �ڵ��� �ؼ� ��� ����ü�Դϴ�.
			*/
			struct SDataMatrixInformation
			{
				CRavidQuadrangle<double> rqRegion;

				std::vector<CRavidQuadrangle<double>> vctGrid;

				int nSizeRows;
				int nSizeCols;
				int nErrorCount;

				CString strColor;
				CString strVersion;
				CString strCode;

				bool bFlip;
				bool bSuccess;
			};
			/**
			* ��Ʈ���� �ڵ��� ũ��(������ ���� ũ��) ��� ���� ����ü�Դϴ�.
			*/
			struct SDataMatrixExplicitSize
			{
				bool bUsing;
				int nRow;
				int nCol;
			};

			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pGeometry = nullptr);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ����� �ڵ��� �� �� ����� �����մϴ�.
			*
			* param[in] ePriorityColorLayer : ���� enum
			*	EDataMatrixColorLayer_Black : �ڵ� ������ �� Ž��
			*	EDataMatrixColorLayer_White : �ڵ� ��� �� Ž��
			*	EDataMatrixColorLayer_Auto_BlackToWhite : �ڵ� ������ -> ��� ������ Ž��
			*	EDataMatrixColorLayer_Auto_WhiteToBlack : �ڵ� ��� -> ������ ������ Ž��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetColorLayer(_In_ EDataMatrixColorLayer ePriorityColorLayer);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� ����, ���� ����� �����մϴ�.
			*
			* param[in] eDataMatrixInspectionCount : ���� ��� enum
			*	EDataMatrixInspectionCount_Single : ���� �ν�
			*	EDataMatrixInspectionCount_All : ����  �ν�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetInspectionCount(_In_ EDataMatrixInspectionCount eDataMatrixInspectionCount);
			
			/**
			* ������ ����� �ڵ��� �� �� ����� �����ɴϴ�.
			*
			* return value : EDataMatrixColorLayer enum ��ȯ�մϴ�.
			*	EDataMatrixColorLayer_Black : �ڵ� ������ �� Ž��
			*	EDataMatrixColorLayer_White : �ڵ� ��� �� Ž��
			*	EDataMatrixColorLayer_Auto_BlackToWhite : �ڵ� ������ -> ��� ������ Ž��
			*	EDataMatrixColorLayer_Auto_WhiteToBlack : �ڵ� ��� -> ������ ������ Ž��
			*/
			EDataMatrixColorLayer GetColorLayer(void);
			
			/**
			* ������ ã�� ��ü�� ����, ���� ����� �����ɴϴ�.
			*
			* return value : EDataMatrixInspectionCount enum ��ȯ�մϴ�.
			*	EDataMatrixInspectionCount_Single : ���� �ν�
			*	EDataMatrixInspectionCount_All : ����  �ν�
			*/
			EDataMatrixInspectionCount GetInspectionCount(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� �ּ� ���̸� �����մϴ�.
			*
			* param[in] nMinDist : �ּ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinRegionLength(_In_ int nMinDist);
			
			/**
			* ������ ã�� ��ü�� �ּ� ���̸� �����ɴϴ�.
			*
			* return value : int ������ ��ȯ�˴ϴ�.
			*/
			_Out_ int GetMinRegionLength(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� �ִ� ȸ�� ������ �����մϴ�.
			*
			* param[in] dblMeasureAngleRatio : �ִ� ȸ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasureAngleRatio(_In_ double dblMeasureAngleRatio);
			
			/**
			* ������ ã�� ��ü�� �ִ� ȸ�� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�˴ϴ�.
			*/
			_Out_ double GetMeasureAngleRatio(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� Ž�� ȸ�� ������ �����մϴ�.
			*
			* param[in] dblMeasurAngleUnit : Ž�� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMeasureAngleUnit(_In_ double dblMeasurAngleUnit);
			
			/**
			* ������ ã�� ��ü�� Ž�� ȸ�� ������ �����ɴϴ�.
			*
			* return value : double ������ ��ȯ�˴ϴ�.
			*/
			_Out_ double GetMeasureAngleUnit(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� ���� ������ �����մϴ�.
			*
			* param[in] eFlippingRegion : ���� ��� enum
			*	EDataMatrixFlippingRegion_No : ������
			*	EDataMatrixFlippingRegion_Yes : ����
			*	EDataMatrixFlippingRegion_Auto : �ڵ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetFlippingRegion(_In_ EDataMatrixFlippingRegion eFlippingRegion);
			
			/**
			* ������ ã�� ��ü�� ���� ������ �����ɴϴ�.
			*
			* return value : EDataMatrixFlippingRegion enum ��ȯ�մϴ�.
			*	EDataMatrixFlippingRegion_No : ������
			*	EDataMatrixFlippingRegion_Yes : ����
			*	EDataMatrixFlippingRegion_Auto : �ڵ�
			*/
			_Out_ EDataMatrixFlippingRegion GetFlippingRegion(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ڵ��� ������ ��ġ ���� �˰����� �����մϴ�.
			*
			* param[in] eLFM : ���� ��� enum
			*	EDataMatrixLineFittingMethod_Cluster : Ŭ������
			*	EDataMatrixLineFittingMethod_HoughTransform : ���� Ʈ������
			*	EDataMatrixLineFittingMethod_RANSAC : ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			void SetFittingLine(_In_ EDataMatrixLineFittingMethod eLFM);
			
			/**
			* ������ �ڵ��� ������ ��ġ ���� �˰����� �����ɴϴ�.
			*
			* return value : EDataMatrixLineFittingMethod enum ��ȯ�մϴ�.
			*	EDataMatrixLineFittingMethod_Cluster : Ŭ������
			*	EDataMatrixLineFittingMethod_HoughTransform : ���� Ʈ������
			*	EDataMatrixLineFittingMethod_RANSAC : ����
			*/
			_Out_ EDataMatrixLineFittingMethod GetFittingLine(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ��ü �ؼ��� ���� ����� �����մϴ�.
			*
			* param[in] bCleanImage : ���� On/ Off
			*/
			void SetCleanImage(_In_ bool bCleanImage);
			
			/**
			* ������ ��ü �ؼ��� ���� ����� �����ɴϴ�.
			*
			* return value : bool ���·� ��ȯ�մϴ�.
			*/
			_Out_ bool IsCleanImage(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ��Ʈ���� �ڵ��� ũ��(����) �� �����մϴ�.
			*
			* param[in] sDMES : SDataMatrixExplicitSize ����ü
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetExplicitSize(_In_ SDataMatrixExplicitSize sDMES);
			
			/**
			* ������ ��Ʈ���� �ڵ��� ũ��(����) �� �����ɴϴ�.
			*
			* return value : SDataMatrixExplicitSize ����ü�� ��ȯ�մϴ�.
			*/
			_Out_ SDataMatrixExplicitSize GetExplicitSize(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ��ü �ؼ��� ����þ� ���� ��뿩�θ� �����մϴ�.
			*
			* param[in] bGaussianProcess : ���� On/ Off
			*/
			void SetGaussianProcess(_In_ bool bGaussianProcess);
			
			/**
			* ������ ��ü �ؼ��� ����þ� ���� ��뿩�θ� �����ɴϴ�.
			*
			* return value : bool ���·� ��ȯ�մϴ�.
			*/
			_Out_ bool IsGaussianProcess(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ڵ��� ��ġ�� �����ϰ� Ȱ��ȭ �մϴ�.
			*
			* param[in] rqrDirectROI : CRavidQuadrangle ��ġ ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult EnableDirectROI(_In_ CRavidQuadrangle<double>& rqrDirectROI);
			
			/**
			* �ڵ� ��ġ ���Ǹ� ��Ȱ��ȭ �մϴ�.
			*/
			void DisableDirectROI();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ڵ��� ��ġ�� ã�� ���� ����ȭ ����� �����մϴ�.
			*
			* param[in] nDMTM : ����ȭ enum �� (��Ʈ ����� ���� ������ ���� Ȱ��ȭ)
			*	EDataMatrixThresholdMethodOption_Ostu = 0x1
			*	EDataMatrixThresholdMethodOption_Adaptive1 = 0x2
			*	EDataMatrixThresholdMethodOption_Adaptive2 = 0x4
			*	EDataMatrixThresholdMethodOption_ISODATA = 0x8
			*	EDataMatrixThresholdMethodOption_MaximumEntropy = 0x10
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetThresholdMethod(_In_ int nDMTM);
			
			/**
			* ������ �ڵ��� ��ġ�� ã�� ���� ����ȭ ����� �����ɴϴ�.
			*
			* return value : int ���·� ��ȯ�մϴ�.
			*/
			_Out_ int GetThresholdMethod();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� ����ȭ ����� Ȱ��ȭ �մϴ�.
			*
			* param[in] eDMTMO : EDataMatrixThresholdMethodOption enum
			*	EDataMatrixThresholdMethodOption_Ostu = 0x1
			*	EDataMatrixThresholdMethodOption_Adaptive1 = 0x2
			*	EDataMatrixThresholdMethodOption_Adaptive2 = 0x4
			*	EDataMatrixThresholdMethodOption_ISODATA = 0x8
			*	EDataMatrixThresholdMethodOption_MaximumEntropy = 0x10
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult EnableThresholdMethod(_In_ EDataMatrixThresholdMethodOption eDMTMO);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� ����ȭ ����� ��Ȱ��ȭ �մϴ�.
			*
			* param[in] eDMTMO : EDataMatrixThresholdMethodOption enum
			*	EDataMatrixThresholdMethodOption_Ostu = 0x1
			*	EDataMatrixThresholdMethodOption_Adaptive1 = 0x2
			*	EDataMatrixThresholdMethodOption_Adaptive2 = 0x4
			*	EDataMatrixThresholdMethodOption_ISODATA = 0x8
			*	EDataMatrixThresholdMethodOption_MaximumEntropy = 0x10
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult DisableThresholdMethod(_In_ EDataMatrixThresholdMethodOption eDMTMO);
			
			/**
			* �ؼ� �����͸� �ʱ�ȭ �մϴ�. 
			*/
			void Clear(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ؼ��� �ڵ��� ������ �����ɴϴ�.
			*
			* return value : size_t �� ��ȯ�˴ϴ�.
			*/
			size_t GetCount(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ؼ��� �ڵ��� ����Ʈ�� �����ɴϴ�.
			*
			* return value : SDataMatrixInformation ����ü�� ���ͷ� ��ȯ�˴ϴ�.
			*/
			std::vector<SDataMatrixInformation>* GetDataMatrixInformation();

		private:
			std::unique_ptr<CInternalDataMatrixDecoder> m_pInternal;
		};
	}
}
