#pragma once

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalBarcodeEncoder;
		
		/**
		* �̹����� 1���� ���ڵ带 �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CBarcodeEncoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CBarcodeEncoder);

		public:
			/**
			* ���ڵ��� ���� ����Դϴ�.
			*/
			enum E1DBarcodeEncoderType
			{
				E1DBarcodeEncoderType_EAN8,
				E1DBarcodeEncoderType_EAN13,
				E1DBarcodeEncoderType_EAN128,
				E1DBarcodeEncoderType_CODE11,
				E1DBarcodeEncoderType_CODE39,
				E1DBarcodeEncoderType_CODE128,
				E1DBarcodeEncoderType_MSI,
				E1DBarcodeEncoderType_UPCA,
				E1DBarcodeEncoderType_UPCE,
				E1DBarcodeEncoderType_Interleaved2Of5,
				E1DBarcodeEncoderType_Codabar
			};
			/**
			* ���ڵ��� ���� �����Դϴ�.
			*/
			enum E1DBarcodeEncoderPattern
			{
				E1DBarcodeEncoderType_LLLLLLRRRRRR,
				E1DBarcodeEncoderType_LLGLGGRRRRRR,
				E1DBarcodeEncoderType_LLGGLGRRRRRR,
				E1DBarcodeEncoderType_LLGGGLRRRRRR,
				E1DBarcodeEncoderType_LGLLGGRRRRRR,
				E1DBarcodeEncoderType_LGGLLGRRRRRR,
				E1DBarcodeEncoderType_LGGGLLRRRRRR,
				E1DBarcodeEncoderType_LGLGLGRRRRRR,
				E1DBarcodeEncoderType_LGLGGLRRRRRR,
				E1DBarcodeEncoderType_LGGLGLRRRRRR,
			};


			CBarcodeEncoder();
			virtual ~CBarcodeEncoder();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� ���ڿ� (Reference)
			* param[out] pImage : ��ȯ �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage* pImage);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� ���ڿ� (Reference)
			* param[out] refImage : ��ȯ �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage& refImage);
			
			/**
			* ���ڵ� ���� ����� �����մϴ�.
			*
			* param[in] eBET : ���� ��� enum E1DBarcodeEncoderType
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetType(_In_ E1DBarcodeEncoderType eBET);
			
			/**
			* ���ڵ� ���� ������ �����մϴ�.
			*
			* param[in] eBEP : ���� ���� enum E1DBarcodeEncoderPattern
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetPattern(_In_ E1DBarcodeEncoderPattern eBEP);
			
			/**
			* ���ڵ� ������ �̹��� �ȼ� ũ�⸦ �����մϴ�.
			*
			* param[in] nPixelSize : 2 �̻��� ���� �����ϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetPixelSize(_In_ int nPixelSize);
			
			/**
			* ���� ������ ���ڵ� ���� ����� �����ɴϴ�.
			*
			* return value : enum E1DBarcodeEncoderType �� Ÿ���� ��ȯ�մϴ�.
			*/
			E1DBarcodeEncoderType GetType(void);
			
			/**
			* ���� ������ ���ڵ� ���� ������ �����ɴϴ�.
			*
			* return value : enum E1DBarcodeEncoderPattern �� Ÿ���� ��ȯ�մϴ�.
			*/
			E1DBarcodeEncoderPattern GetPattern(void);
			
			/**
			* ���� ������ ���ڵ� ������ �̹��� �ȼ� ũ�⸦ �����ɴϴ�.
			*
			* return value : �⺻���� 2�� ������ ���� ��ȯ�մϴ�.
			*/
			int GetPixelSize(void);

		private:
			std::unique_ptr<CInternalBarcodeEncoder> m_pInternal;
		};
	}
}


