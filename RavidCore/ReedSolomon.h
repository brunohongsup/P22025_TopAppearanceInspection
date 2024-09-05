#pragma once

#include "FiniteField.h"

#include <memory>
#include <vector>

/*
 Abbreviation
 - CL : Carry-Less
 - GF : Galois Field(=Finite Field)
*/

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalReedSolomon;
		
		/**
		* ���� �ַθ� ��ȣ�� ����ϴ� Ŭ�����Դϴ�.
		* �� Ŭ������ ���� �ڵ�м����� ����մϴ�.
		*/
		class AFX_EXT_CLASS CReedSolomon : public CFiniteField
		{
		public:
			explicit CReedSolomon(_In_opt_ int nPrim = EPrimitivePolynomial_QRCode, _In_opt_ int nFCR = EFirstConsecutiveRoot_QRCode, _In_opt_ int nGenerator = 2);
			virtual ~CReedSolomon();
	
			/**
			* QR, DataMatrix �ڵ� ���� ���� ���Դϴ�.
			*/
			enum EPrimitivePolynomial
			{
				EPrimitivePolynomial_QRCode = 0x11d,
				EPrimitivePolynomial_DataMatrix = 0x12d
			};
			/**
			* QR, DataMatrix �ڵ� ���� �ʱ� ���Դϴ�.
			*/
			enum EFirstConsecutiveRoot
			{
				EFirstConsecutiveRoot_QRCode = 0,
				EFirstConsecutiveRoot_DataMatrix = 1
			};
			
			/**
			* �Էµ� ��ü�� ����ü ������ �����մϴ�.
			*
			* param[in] ePP : ���� ��
			* param[in] eFCR : �ʱ� ��
			* param[in] nGenerator : ���� ����
			*/
			void SetFiniteField(EPrimitivePolynomial ePP, EFirstConsecutiveRoot eFCR, int nGenerator);
			
			/**
			* �Էµ� ��ü�� ��ȣȭ�� �����͸� ����մϴ�.
			*
			* param[in] vctMsgIn : �Է� ������ (Reference)
			* param[in] nErrCnt : �Է� ���� ī��Ʈ
			*
			* return value : std::vector<int> �� ��ȯ�� ��ȯ�մϴ�.
			*/
			std::vector<int> Encode(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt);
			
			/**
			* �Էµ� ��ü�� ��ȣȭ�� �����͸� ����մϴ�.
			*
			* param[in] vctMsgIn : �Է� ������ (Reference)
			* param[in] nErrCnt : �Է� ���� ī��Ʈ
			* param[out] vctData : ��� ������ (Reference)
			* param[out] vctErrorCorrection : ��� ���� ���� ������ (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Encode(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt, _Out_ std::vector<int>& vctData, _Out_ std::vector<int>& vctErrorCorrection);
			
			/**
			* �Էµ� ��ü�� ��ȣȭ�� �����͸� ��ȣȭ ����մϴ�.
			*
			* param[in] vctSrc : �Է� ������ (Reference)
			* param[in] nErrCnt : �Է� ���� ī��Ʈ
			* param[out] vctCorrectedMsg : ��� ���� ������ (Reference)
			* param[out] vctCorrectedEcc : ��� ���� ���� ������ (Reference)
			* param[in_opt] vctErasePos : �Է� �Ұ� ������ (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Decode(_In_ const std::vector<int>& vctSrc, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());
			
			/**
			* �Էµ� ��ü�� ��ȣȭ�� �����͸� ��ȣȭ ����մϴ�.
			*
			* param[in] vctSrc : �Է� ������ (Reference)
			* param[in] nErrCnt : �Է� ���� ī��Ʈ
			* param[out] vctCorrectedMsg : ��� ���� ������ (Reference)
			* param[out] vctCorrectedEcc : ��� ���� ���� ������ (Reference)
			* param[in_opt] vctErasePos : �Է� �Ұ� ������ (Reference)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool Decode(_In_ const std::vector<unsigned char>& vctSrc, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());
			
			/**
			* ������ ������ �ʱ�ȭ�մϴ�.
			*/
			void Clear();
			
			/**
			* ��ȣȭ�ϸ� �߻��� �Ұ� Ƚ���� ����մϴ�.
			*
			* return value : int �� �Ұ� Ƚ���� ��ȯ�մϴ�.
			*/
			int GetErrorErasureCount(void);

		private:
			std::vector<int> GeneratorPoly(_In_ int nErrCnt);

			std::vector<int> CalcSyndromes(_In_ const std::vector<int>& vctMsg, _In_ int nErrCnt);
			bool Check(_In_ const std::vector<int>& vctMsg, _In_ int nErrCnt);

			std::vector<int> FindErrataLocator(_In_ const std::vector<int>& vctErrPos);
			std::vector<int> FindErrorEvaluator(_In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctErrLoc, _In_ int nErrCnt);
			std::vector<int> CorrectErrata(_In_ const std::vector<int>& vctMsgIn, _In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctErrPos);

			bool FindErrorLocator(_In_ const std::vector<int>& vctSynd, _In_ int nErrCnt, _Out_ std::vector<int>& vctErrLoc, _In_opt_ const std::vector<int>& vctEraseLoc = std::vector<int>(), _In_opt_ int nEraseCount = 0);
			bool FindErrors(_In_ const std::vector<int>& vctErrLoc, _In_ int nMsgCnt, _Out_ std::vector<int>& vctErrPos);
			std::vector<int> ForneySyndromes(_In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctPos, _In_ int nErrCnt);

			bool CorrectMessage(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());

		private:
			std::unique_ptr<CInternalReedSolomon> m_pInternal;
		};
	}
}






