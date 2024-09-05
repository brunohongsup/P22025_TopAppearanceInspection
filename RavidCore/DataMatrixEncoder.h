#pragma once

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalDataMatrixEncoder;
		
		/**
		* �̹����� 2���� ������ ��Ʈ���� �ڵ带 �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDataMatrixEncoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDataMatrixEncoder);

		public:
			/**
			* ������ ��Ʈ���� �ڵ� Ÿ���Դϴ�.
			*/
			enum EDataMatrixECCMode
			{
				EDataMatrixECCMode_200ASCII_AND_DIGIT = 0,
				EDataMatrixECCMode_200C40,
				EDataMatrixECCMode_200TEXT,
				EDataMatrixECCMode_200X12,
				EDataMatrixECCMode_200EDIFACT,
				EDataMatrixECCMode_200BASE256,
			};

			CDataMatrixEncoder();
			virtual ~CDataMatrixEncoder();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� �����ڵ� (Reference)
			* param[out] pImage : ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage* pImage);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refStrCode : �Է� �����ڵ� (Reference)
			* param[out] refImage : ��� �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Write(_In_ const CString& refStrCode, _Out_ CRavidImage& refImage);
			
			/**
			* ��Ʈ���� �ڵ� Ÿ���� �����մϴ�.
			*
			* param[in] eDME : EDataMatrixECCMode enum ��Ʈ���� �ڵ� Ÿ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMode(_In_ EDataMatrixECCMode eDME);
			
			/**
			* ��Ʈ���� �ڵ��� �ȼ� ũ�⸦ �����մϴ�.
			*
			* param[in] nPixelSize : int ������ �ڵ� ���� �ȼ� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetPixelSize(_In_ int nPixelSize);
						
			/**
			* ������ ��Ʈ���� �ڵ� Ÿ���� �����ɴϴ�.
			*
			* return value : EDataMatrixECCMode enum ��Ʈ���� �ڵ� Ÿ���� ��ȯ�մϴ�.
			*/
			EDataMatrixECCMode GetMode(void);
						
			/**
			* ������ ��Ʈ���� �ڵ��� �ȼ� ũ�⸦ �����ɴϴ�.
			*
			* return value : int ������ �ڵ� ���� �ȼ� ũ�⸦ ��ȯ�մϴ�.
			*/
			int GetPixelSize(void);

		private:
			std::unique_ptr<CInternalDataMatrixEncoder> m_pInternal;

		};
	}
}


