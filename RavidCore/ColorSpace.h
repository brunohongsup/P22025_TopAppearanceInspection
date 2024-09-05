#pragma once

namespace Ravid
{
	namespace Algorithms
	{
		/**
		* �÷� ������ ��ȯ�ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CColorSpace : public CRavidObject
		{
		public:
			CColorSpace();
			virtual ~CColorSpace();
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pV : Value �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pRmcHSV : Hue ����, Saturation ä��, Value �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcHSV, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pV : Value �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ COLORREF crRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV);
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pRmcHSV : Hue ����, Saturation ä��, Value �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcHSV);
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pV : Value �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSV (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pRmcHSV : Hue ����, Saturation ä��, Value �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSV(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcHSV, _In_opt_ int nRGBDepth = 8);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fV : Value ��
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fV : Value ��
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fV : Value ��
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ COLORREF* pCrRGB);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fV : Value ��
			* param[out] pRmcRGB : RGB ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] rmvHSV : Hue ����, Saturation ä��, Value �� (Reference)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] rmvHSV : Hue ����, Saturation ä��, Value �� (Reference)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] rmvHSV : Hue ����, Saturation ä��, Value �� (Reference)
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ COLORREF* pCrRGB);
			
			/**
			* HSV (����, ä��, ��)������ RGB�� ��ȯ�մϴ�.
			*
			* param[in] rmvHSV : Hue ����, Saturation ä��, Value �� (Reference)
			* param[out] pCrRGB : RGB ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pL : Lightness �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pRmcHSL : Hue ����, Saturation ä��, Lightness �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcHSL, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pL : Lightness �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ COLORREF crRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pRmcHSL : Hue ����, Saturation ä��, Lightness �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcHSL);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pH : Hue ���� (Pointer)
			* param[out] pS : Saturation ä�� (Pointer)
			* param[out] pL : Lightness �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� HSL (����, ä��, ��)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pRmcHSL : Hue ����, Saturation ä��, Lightness �� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToHSL(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcHSL, _In_opt_ int nRGBDepth = 8);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fL : Lightness ��
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fL : Lightness ��
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fL : Lightness ��
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ COLORREF* pCrRGB);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] fH : Hue ����
			* param[in] fS : Saturation ä��
			* param[in] fL : Lightness ��
			* param[out] pRmcRGB : RGB ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvHSL : Hue ����, Saturation ä��, Lightness �� (Reference)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvHSL : Hue ����, Saturation ä��, Lightness �� (Reference)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvHSL : Hue ����, Saturation ä��, Lightness �� (Reference)
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ COLORREF* pCrRGB);
						
			/**
			* HSL (����, ä��, ��)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvHSL : Hue ����, Saturation ä��, Lightness �� (Reference)
			* param[out] pRmcRGB : RGB ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pC : Cyan �þ� (Pointer)
			* param[out] pM : Magenta ����Ÿ (Pointer)
			* param[out] pY : Yellow ��� (Pointer)
			* param[out] pK : Key(Black) ���� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] wR : Red ������
			* param[in] wG : Green ������
			* param[in] wB : Blue ������
			* param[out] pRmcCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcCMYK, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pC : Cyan �þ� (Pointer)
			* param[out] pM : Magenta ����Ÿ (Pointer)
			* param[out] pY : Yellow ��� (Pointer)
			* param[out] pK : Key(Black) ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ COLORREF crRGB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] crRGB : RGB ������
			* param[out] pRmcCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcCMYK);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pC : Cyan �þ� (Pointer)
			* param[out] pM : Magenta ����Ÿ (Pointer)
			* param[out] pY : Yellow ��� (Pointer)
			* param[out] pK : Key(Black) ���� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK, _In_opt_ int nRGBDepth = 8);
			
			/**
			* RGB �����͸� CMYK (�þ�, ����Ÿ, ���, ����)�������� ��ȯ�մϴ�.
			*
			* param[in] rmvRGB : RGB ������ (Reference)
			* param[out] pRmcCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToCMYK(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcCMYK, _In_opt_ int nRGBDepth = 8);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] wC : Cyan �þ�
			* param[in] wM : Magenta ����Ÿ
			* param[in] wY : Yellow ���
			* param[in] wK : Key(Black) ����
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] wC : Cyan �þ�
			* param[in] wM : Magenta ����Ÿ
			* param[in] wY : Yellow ���
			* param[in] wK : Key(Black) ����
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] wC : Cyan �þ�
			* param[in] wM : Magenta ����Ÿ
			* param[in] wY : Yellow ���
			* param[in] wK : Key(Black) ����
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ COLORREF* pCrRGB);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] wC : Cyan �þ�
			* param[in] wM : Magenta ����Ÿ
			* param[in] wY : Yellow ���
			* param[in] wK : Key(Black) ����
			* param[out] pRmcRGB : RGB ������ (Pointer)
			* param[in_opt] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Reference)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Reference)
			* param[out] pRmcRGB : RGB ������ (Pointer)
			* param[out] pR : Red ������ (Pointer)
			* param[out] pG : Green ������ (Pointer)
			* param[out] pB : Blue ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Reference)
			* param[out] pCrRGB : RGB ������ (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ COLORREF* pCrRGB);
			
			/**
			* CMYK (�þ�, ����Ÿ, ���, ����)������ RGB �����ͷ� ��ȯ�մϴ�.
			*
			* param[in] rmvCMYK : Cyan �þ�, Magenta ����Ÿ, Yellow ���, Key(Black) ���� (Reference)
			* param[out] pCrRGB : RGB ������ (Pointer)
			* param[in] nRGBDepth : RGB Depth
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);

		};
	}
}

