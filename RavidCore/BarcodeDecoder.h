#pragma once

#include "RavidQuadrangle.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalRavidImage;

		class CInternalBarcodeDecoder;

		class CRavidImage;

		/**
		* �̹������� 1���� ���ڵ带 �м��ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CBarcodeDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CBarcodeDecoder);

		public:
			/**
			* ���ڵ��� �ؼ� ����Դϴ�.
			*/
			enum E1DBarcodeDecoderType
			{
				E1DBarcodeDecoderType_Unknown = -1,	// �˷����� ����
				E1DBarcodeDecoderType_EAN8,
				E1DBarcodeDecoderType_EAN13,
				E1DBarcodeDecoderType_EAN128,
				E1DBarcodeDecoderType_CODE11,
				E1DBarcodeDecoderType_CODE39,
				E1DBarcodeDecoderType_CODE128,
				E1DBarcodeDecoderType_MSI,
				E1DBarcodeDecoderType_UPCA,
				E1DBarcodeDecoderType_UPCE,
				E1DBarcodeDecoderType_Interleaved2Of5,
				E1DBarcodeDecoderType_Codabar
			};
			/**
			* ���ڵ��� �ؼ� ��� ����ü�Դϴ�.
			*/
			struct BarcodeInformation
			{
				bool bSuccess;
				CRavidQuadrangle<double> rqr;
				CString strSymbologyType;
				CString strResult;
			};

			CBarcodeDecoder();
			virtual ~CBarcodeDecoder();
			
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
			* ���ڵ� �ؼ��ϴ� ����� �����մϴ�.
			*
			* param[in] eBarcodeType : ���ڵ� �ؼ� ���
			* E1DBarcodeDecoderType_Unknown �� ��� �ؼ� ����� ������ ���ϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetType(_In_ E1DBarcodeDecoderType eBarcodeType);
			
			/**
			* ���ڵ� Ž���� �̹��� �ȼ� ���� �ּ� �β��� �����մϴ�.
			*
			* param[in] dblMinWidth : 30 �̻��� ���� �����ϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinWidth(_In_ double dblMinWidth);
			
			/**
			* ���� ������ ���ڵ� �ؼ��ϴ� ����� �����ɴϴ�.
			*
			* return value : enum E1DBarcodeDecoderType �� Ÿ���� ��ȯ�մϴ�.
			*/
			E1DBarcodeDecoderType GetType(void);
			
			/**
			* ���� ������ ���ڵ� Ž���� �̹��� �ȼ� ���� �ּ� �β��� �����ɴϴ�.
			*
			* return value : �⺻�� 30���� ������ ���� ��ȯ�մϴ�.
			*/
			double GetMinWidth(void);
			
			/**
			* ���� Ž�� �� �ؼ��� ����� �����ɴϴ�.
			* �̹����� ���ڵ尡 1���� ��� Ȥ�� ���� ��ü�� ������ ������ ��ȯ�˴ϴ�.
			*
			* return value : struct BarcodeInformation ����ü�� ����� ��ȯ�մϴ�.
			*/
			BarcodeInformation GetBarcodeInfomation(void);
			
			/**
			* ���� Ž�� �� �ؼ��� ����� �����ɴϴ�.
			* �̹������� ���� ��� ���ڵ��� ������ �����ɴϴ�.
			*
			* return value : struct BarcodeInformation ����ü ����Ʈ�� ����� ��ȯ�մϴ�.
			*/
			std::vector<std::pair<bool, CString>>* GetBarcodeResult(void);

		private:
			std::unique_ptr<CInternalBarcodeDecoder> m_pInternal;

		};
	}
}
