#pragma once

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalQRCodeEncoder;
		
		/**
		* �̹����� 2���� QR�ڵ带 �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CQRCodeEncoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CQRCodeEncoder);
		public:
			CQRCodeEncoder();
			virtual ~CQRCodeEncoder();

			/**
			* QR ǥ���� �����մϴ�.
			*/
			enum EModeIndicator
			{
				EModeIndicator_ECI = 0b0111, // 7
				EModeIndicator_Numeric = 0b0001, // 1
				EModeIndicator_Alphanumeric = 0b0010, // 2
				EModeIndicator_8bitByte = 0b0100, // 4
				EModeIndicator_Kanji = 0b1000, // 8
				EModeIndicator_StructuredAppend = 0b0011, // 3
				EModeIndicator_FNC1_FirstPos = 0b0101, // 5
				EModeIndicator_FNC1_SecondPos = 0b1001, // 9
				EModeIndicator_Terminator = 0b0000, // 0
			};
			/**
			* �ڵ� ����ŷ ������ �����մϴ�.
			*/
			enum EMaskingPattern
			{
				EMaskingPattern_0 = 0,
				EMaskingPattern_1,
				EMaskingPattern_2,
				EMaskingPattern_3,
				EMaskingPattern_4,
				EMaskingPattern_5,
				EMaskingPattern_6,
				EMaskingPattern_7,
				EMaskingPattern_Count,
			};
			/**
			* �ڵ� ���� ���� ����� �����մϴ�.
			*/
			enum EECCLevel
			{
				ECCLevel_L = 0b01, // 7%
				ECCLevel_M = 0b00, // 15%
				ECCLevel_Q = 0b11, // 25%
				ECCLevel_H = 0b10, // 30%
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
				EVersion_Count = 41,
				EVersion_None = 42,
			};
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� �����ڵ� (Reference)
			* param[out] pImage : ��� �̹��� (Pointer)
			* param[in] pGeometry : ��� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage* pImage, CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� �����ڵ� (Reference)
			* param[out] refImage : ��� �̹��� (Reference)
			* param[in] pGeometry : ��� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage& refImage, CRavidGeometry* pGeometry = nullptr);
			
			/**
			* QR �ڵ� ǥ�� Ÿ���� �����մϴ�.
			*
			* param[in] em : EModeIndicator enum QR �ڵ� ǥ�� Ÿ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetModeIndicator(_In_ EModeIndicator em);
			
			/**
			* QR �ڵ� ����ŷ ������ �����մϴ�.
			*
			* param[in] ep : EMaskingPattern enum QR �ڵ� ǥ�� Ÿ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaskingPattern(_In_ EMaskingPattern ep);
			
			/**
			* QR �ڵ� ���� ���� ����� �����մϴ�.
			*
			* param[in] ee : EMaskingPattern enum QR �ڵ� ǥ�� Ÿ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetECCLevel(_In_ EECCLevel ee);
			
			/**
			* QR �ڵ� ������ �����մϴ�.
			*
			* param[in] ev : EVersion enum QR �ڵ� ǥ�� Ÿ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetVersion(_In_ EVersion ev);
			
			/**
			* QR �ڵ� �ȼ� ũ�⸦ �����մϴ�.
			*
			* param[in] nPixelSize : int ������ �ڵ� ���� �ȼ� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetPixelSize(_In_ int nPixelSize);

		private:
			std::unique_ptr<CInternalQRCodeEncoder> m_pInternal;
		};
	}
}