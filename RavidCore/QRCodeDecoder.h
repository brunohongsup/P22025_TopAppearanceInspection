#pragma once

#include "RavidQuadrangle.h"
#include "Matrix.h"

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalQRCodeDecoder;
		
		/**
		* �̹����� 2���� QR�ڵ带 �ؼ��ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CQRCodeDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CQRCodeDecoder);
		public:
			CQRCodeDecoder();
			virtual ~CQRCodeDecoder();

			/**
			* ����� �ڵ��� �� �� ����� �����մϴ�.
			*/
			enum ECodeColor
			{
				ECodeColor_Black = 0,
				ECodeColor_White,
				ECodeColor_Auto_BlackToWhite,
				ECodeColor_Auto_WhiteToBlack,
			};
			/**
			* �ڵ��� ���� ������ �����մϴ�.
			*/
			enum EUseFlip
			{
				EUseFlip_No = 0,
				EUseFlip_Yes,
				EUseFlip_Auto,
			};
			/**
			* �ڵ带 ã������ ����ȭ �˰����Դϴ�.
			*/
			enum EThresholdMethod
			{
				EThresholdMethod_Otsu = 0x01,
				EThresholdMethod_ISOData = 0x02,
				EThresholdMethod_MaximumEntropy = 0x04,
				EThresholdMethod_BlockLocalOtsuWithTuning = 0x08,
				EThresholdMethod_None = 0b01 << 4,
			};
			/**
			* �ڵ� ���� ���� ����� �����մϴ�.
			*/
			enum EErrorCorrectingLevel
			{
				EErrorCorrectingLevel_None = -1,
				EErrorCorrectingLevel_L = 1,
				EErrorCorrectingLevel_M = 0,
				EErrorCorrectingLevel_Q = 3,
				EErrorCorrectingLevel_H = 2,
			};
			/**
			* �ڵ� ���� �����մϴ�.
			*/
			enum EModel
			{
				EModel_None = 0,
				EModel_1 = 1,
				EModel_2 = 2,
			};
			/**
			* �ڵ� ������ �����մϴ�.
			*/
			enum EVersion
			{
				EVersion_Auto = 0,
				EVersion_01 = 1,
				EVersion_02 = 2,
				EVersion_03 = 3,
				EVersion_04 = 4,
				EVersion_05 = 5,
				EVersion_06 = 6,
				EVersion_07 = 7,
				EVersion_08 = 8,
				EVersion_09 = 9,
				EVersion_10 = 10,
				EVersion_11 = 11,
				EVersion_12 = 12,
				EVersion_13 = 13,
				EVersion_14 = 14,
				EVersion_15 = 15,
				EVersion_16 = 16,
				EVersion_17 = 17,
				EVersion_18 = 18,
				EVersion_19 = 19,
				EVersion_20 = 20,
				EVersion_21 = 21,
				EVersion_22 = 22,
				EVersion_23 = 23,
				EVersion_24 = 24,
				EVersion_25 = 25,
				EVersion_26 = 26,
				EVersion_27 = 27,
				EVersion_28 = 28,
				EVersion_29 = 29,
				EVersion_30 = 30,
				EVersion_31 = 31,
				EVersion_32 = 32,
				EVersion_33 = 33,
				EVersion_34 = 34,
				EVersion_35 = 35,
				EVersion_36 = 36,
				EVersion_37 = 37,
				EVersion_38 = 38,
				EVersion_39 = 39,
				EVersion_40 = 40,
				EVersion_None = 41,
			};
			/**
			* QR �ڵ��� �ؼ� ��� ����ü�Դϴ�.
			*/
			typedef struct AFX_EXT_CLASS sQRCodeResult
			{
				CRavidQuadrangle<double> rqRegion;
				std::vector<CRavidQuadrangle<double>> vctRegionGridType;
				CRavidQuadrangle<double> rqrFindPattern[3];
				Ravid::Mathematics::CMatrix rmMatrix;

				EErrorCorrectingLevel eeclEcLevel;
				EModel emModel;
				EVersion evVersion;
				CString strText;

				sQRCodeResult() { Clear(); }
				virtual ~sQRCodeResult() { Clear(); }

				void Clear();
			}
			SQRCodeResult;
			
			/**
			* �ؼ� �����͸� �ʱ�ȭ �մϴ�. 
			*/
			void Clear();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo);

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
			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pGeometry);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pGeometry);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ����� �ڵ��� �� �� ����� �����մϴ�.
			*
			* param[in] eCodeColor : ���� enum
			*	ECodeColor_Black : �ڵ� ������ �� Ž��
			*	ECodeColor_White : �ڵ� ��� �� Ž��
			*	ECodeColor_Auto_BlackToWhite : �ڵ� ������ -> ��� ������ Ž��
			*	ECodeColor_Auto_WhiteToBlack : �ڵ� ��� -> ������ ������ Ž��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetCodeColor(_In_ ECodeColor eCodeColor);
			
			/**
			* ������ ����� �ڵ��� �� �� ����� �����ɴϴ�.
			*
			* return value : ECodeColor enum ��ȯ�մϴ�.
			*	ECodeColor_Black : �ڵ� ������ �� Ž��
			*	ECodeColor_White : �ڵ� ��� �� Ž��
			*	ECodeColor_Auto_BlackToWhite : �ڵ� ������ -> ��� ������ Ž��
			*	ECodeColor_Auto_WhiteToBlack : �ڵ� ��� -> ������ ������ Ž��
			*/
			_Out_ ECodeColor GetCodeColor();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ã�� ��ü�� ���� ������ �����մϴ�.
			*
			* param[in] eFlippingRegion : ���� ��� enum
			*	EUseFlip_No : ������
			*	EUseFlip_Yes : ����
			*	EUseFlip_Auto : �ڵ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetUseFlip(_In_ EUseFlip eFlip);
			
			/**
			* ������ ã�� ��ü�� ���� ������ �����ɴϴ�.
			*
			* return value : EUseFlip enum ��ȯ�մϴ�.
			*	EUseFlip_No : ������
			*	EUseFlip_Yes : ����
			*	EUseFlip_Auto : �ڵ�
			*/
			_Out_ EUseFlip GetUseFlip();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� ����ȭ ��� ��� ���θ� �����մϴ�.
			*
			* param[in] eDMTMO : EThresholdMethod enum
			*	EThresholdMethod_Ostu = 0x1
			*	EThresholdMethod_Adaptive1 = 0x2
			*	EThresholdMethod_Adaptive2 = 0x4
			*	EThresholdMethod_ISODATA = 0x8
			*	EThresholdMethod_MaximumEntropy = 0x10
			* param[in] bUse : �ش� �˰��� ��� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetThresholdMethod(_In_ CQRCodeDecoder::EThresholdMethod eMethod, _In_ bool bUse);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� ����ȭ ��� ��� ���θ� Ȯ���մϴ�.
			*
			* param[in] eDMTMO : EThresholdMethod enum
			*	EThresholdMethod_Ostu = 0x1
			*	EThresholdMethod_Adaptive1 = 0x2
			*	EThresholdMethod_Adaptive2 = 0x4
			*	EThresholdMethod_ISODATA = 0x8
			*	EThresholdMethod_MaximumEntropy = 0x10
			* param[out] bUseOut : �ش� �˰��� ��� ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetThresholdMethod(_In_ CQRCodeDecoder::EThresholdMethod eMethod, _Out_ bool& bUseOut);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ��ü �ؼ��� ����þ� ���� ��뿩�θ� �����մϴ�.
			*
			* param[in] bUse : ���� On/ Off
			*/
			void SetUseGaussianBlur(_In_ bool bUse);
			
			/**
			* ������ ��ü �ؼ��� ����þ� ���� ��뿩�θ� �����ɴϴ�.
			*
			* return value : bool ���·� ��ȯ�մϴ�.
			*/
			_Out_ bool GetUseGaussianBlur();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* ��ü �ؼ��� �ڵ� ������ �����մϴ�.
			*
			* param[in] eVersion : �ڵ� �Է� ����
			*/
			EAlgorithmResult SetStickVersion(_In_ CQRCodeDecoder::EVersion eVersion);
			
			/**
			* ��ü �ؼ��� �ڵ� ������ �����ɴϴ�.
			*
			* return value : EVersion ���·� �ڵ� �Է� ������ ��ȯ�մϴ�.
			*/
			_Out_ EVersion GetStickVersion();

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
			_Out_ bool GetCleanImage(void);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �ؼ��� �ڵ��� ������ �����ɴϴ�.
			*
			* return value : size_t �� ��ȯ�˴ϴ�.
			*/
			size_t GetReadResultCount();
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �νĵ� ��ġ�� �����ɴϴ�.
			*
			* param[out] refResult : �νĵ� ��ġ (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadOutLine(_Out_ CRavidQuadrangle<double>& refResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �νĵ� ��ġ�� �����ɴϴ�.
			*
			* param[out] refResult : �νĵ� ��ġ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadOutLine(_Out_ CRavidQuadrangle<double>* pResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ������ ����� �����ɴϴ�.
			*
			* param[out] refVctResult : ������ ��� ��ġ (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetGridTypeOfReadRegion(_Out_ std::vector<CRavidQuadrangle<double>>& refVctResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ������ ����� �����ɴϴ�.
			*
			* param[out] pVctResult : ������ ��� ��ġ (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetGridTypeOfReadRegion(_Out_ std::vector<CRavidQuadrangle<double>>* pVctResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ���� ����� �����ɴϴ�.
			*
			* param[out] rm : �ڵ� ���� �ν� �� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadMatrix(_Out_ Ravid::Mathematics::CMatrix& rm, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ���� ����� �����ɴϴ�.
			*
			* param[out] pRm : �ڵ� ���� �ν� �� (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadMatrix(_Out_ Ravid::Mathematics::CMatrix* pRm, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ������ �����ɴϴ�.
			*
			* param[out] evResult : �ڵ� ���� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadVersion(_Out_ EVersion& evResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ������ �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �ڵ� ������ ��ȯ�մϴ�.
			*/
			_Out_ EVersion GetReadVersion(_In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ���� �����ɴϴ�.
			*
			* param[out] evResult : �ڵ� �� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadModel(_Out_ EModel& emResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ڵ� ���� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �ڵ� ���� ��ȯ�մϴ�.
			*/
			_Out_ EModel GetReadModel(_In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ���� ������ �����ɴϴ�.
			*
			* param[out] evResult : ���� ���� ���� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadEcLevel(_Out_ EErrorCorrectingLevel& eclResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� ���� ���� ������ �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : ���� ���� ������ ��ȯ�մϴ�.
			*/
			_Out_ EErrorCorrectingLevel GetReadEcLevel(_In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ؼ��� ���ڿ��� �����ɴϴ�.
			*
			* param[out] strResult : �ؼ� ���ڿ� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadString(_Out_ CString& strResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ؼ��� ���ڿ��� �����ɴϴ�.
			*
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �ؼ� ���ڿ��� ��ȯ�մϴ�.
			*/
			_Out_ CString GetReadString(_In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ؼ��� ����� �����ɴϴ�.
			*
			* param[out] sqrcResult : SQRCodeResult ��� (Reference)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadResultAt(_Out_ SQRCodeResult& sqrcResult, _In_ int nIndex = 0);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* �Էµ� �ε����� �ؼ��� ����� �����ɴϴ�.
			*
			* param[out] pSqrcResult : SQRCodeResult ��� (Pointer)
			* param[in_opt] nIndex : ��� �ε��� (Default : 0)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadResultAt(_Out_ SQRCodeResult* pSqrcResult, _In_ int nIndex = 0);
						
			/**
			* �м��� ���� �� ����մϴ�.
			* �ؼ��� ��� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] vctResult : SQRCodeResult ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadAllResult(_Out_ std::vector<SQRCodeResult>& vctResult);
						
			/**
			* �м��� ���� �� ����մϴ�.
			* �ؼ��� ��� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] pVctResult : SQRCodeResult ��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetReadAllResult(_Out_ std::vector<SQRCodeResult>* pVctResult);

		private:
			std::unique_ptr<CInternalQRCodeDecoder> m_pInternal;

		};
	}
}