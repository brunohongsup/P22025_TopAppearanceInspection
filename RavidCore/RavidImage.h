#pragma once

#include "MultipleVariable.h"
#include "MultipleCondition.h"

#include <vector>
#include <complex>

class CRavidGeometry;

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}
	
	namespace Algorithms
	{
		class CImageOperationInfo;

		class CInternalRavidImage;

		class AFX_EXT_CLASS CRavidImage : public CRavidObject
		{
			RavidUseDynamicCreation();

		public:
			/**
			* �̹��� ���� ó�� ����� �����մϴ�.
			*/
			enum EInterpolationMethod
			{
				EInterpolationMethod_NearestNeighbor = 0,	// ��ó��
				EInterpolationMethod_Bilinear,				// 2���� ����
				EInterpolationMethod_Bicubic,				// 3�� ���ö��� ����
			};
			/**
			* �츮���ڳ� ����� �����մϴ�.
			*/
			enum EHarrisCornerDetectorThresholdType
			{
				EHarrisCornerDetectorThresholdType_Absolute = 0,	// ���밪
				EHarrisCornerDetectorThresholdType_Relative,		// ������
			};
			/**
			* �ɴ� ���� ����� �����մϴ�.
			*/
			enum ECannyEdgeDetectorThresholdType
			{
				ECannyEdgeDetectorThresholdType_Absolute = 0,	// ���밪
				ECannyEdgeDetectorThresholdType_Relative,		// ������
			};
			/**
			* �������� ó�� ����� �����մϴ�.
			*/
			enum EProjectionDirectionType
			{
				EProjectionDirectionType_Row = 0,	// ��
				EProjectionDirectionType_Column,	// ��
				EProjectionDirectionType_Angle		// ����
			};
			/**
			* FFT ó�� ����� �����մϴ�.
			*/
			enum EFFTMethod
			{
				EFFTMethod_ForwardFloatNone = 0,	// Float 32 �Ϲ�
				EFFTMethod_ForwardFloatShift,		// Float 32 ����Ʈ
				EFFTMethod_ForwardDoubleNone,		// Float 64 �Ϲ�
				EFFTMethod_ForwardDoubleShift,		// Float 64 ����Ʈ
				EFFTMethod_Backward,				// ����
			};
			/**
			* �������� ���� ����� �����մϴ�.
			*/
			enum EMorphologyMethod
			{
				EMorphologyMethod_Erode = 0,		// ħ��
				EMorphologyMethod_Dilate,			// Ȯ��
				EMorphologyMethod_Open,				// ����
				EMorphologyMethod_Close,			// �ݱ�
				EMorphologyMethod_Gradient,			// ���
				EMorphologyMethod_WhiteTopHat,		// ���� ���� ��� ��ο� ���� ����
				EMorphologyMethod_BlackTopHat,		// ��ο� ���� ��� ���� ���� ����
				EMorphologyMethod_Median3x3,		// �߾Ӱ� 3 by 3
				EMorphologyMethod_Median5x5,		// �߾Ӱ� 5 by 5
				EMorphologyMethod_Median7x7,		// �߾Ӱ� 7 by 7
				EMorphologyMethod_MedianMxN,		// �߾Ӱ� N by N
			};
			/**
			* ������ ����ȭ ó�� �� ������ �����մϴ�.
			*/
			enum EAdaptiveThresholdType
			{
				EAdaptiveThresholdType_Binary = 0,	// ����
				EAdaptiveThresholdType_Binary_Inv,	// ����
			};
			/**
			* ������ ����ȭ ó�� �� ���͸� �����մϴ�.
			*/
			enum EAdaptiveThresholdMethod
			{
				EAdaptiveThresholdMethod_Mean = 0,	//���
				EAdaptiveThresholdMethod_Gaussian,	//����þ�
			};
			/**
			* ����ȭ ó�� �� ���� ä���� ������ ó�� ����� �����մϴ�.
			*/
			enum EThresholdLogicalOperator
			{
				EThresholdLogicalOperator_None = 0,	// ���� ó��
				EThresholdLogicalOperator_And,		// ��� ������ ��� ����
				EThresholdLogicalOperator_Or,		// �ϳ��� ������ ��� ����

			};
			/**
			* �̹��� �ȼ� ǥ�� ũ�� �� ǥ�� ��� ������ �����մϴ�.
			*/
			enum EConvertDepth
			{
				EConvertDepth_ToU8 = 0x00008,		// ��ȣ�� ���� UNSIGNED 8 BIT �� ����
				EConvertDepth_ToU10 = 0x0000A,		// ��ȣ�� ���� UNSIGNED 10 BIT �� ����
				EConvertDepth_ToU12 = 0x0000C,		// ��ȣ�� ���� UNSIGNED 12 BIT �� ����
				EConvertDepth_ToU13 = 0x0000D,		// ��ȣ�� ���� UNSIGNED 13 BIT �� ����
				EConvertDepth_ToU14 = 0x0000E,		// ��ȣ�� ���� UNSIGNED 14 BIT �� ����
				EConvertDepth_ToU16 = 0x00010,		// ��ȣ�� ���� UNSIGNED 16 BIT �� ����
				EConvertDepth_ToU32 = 0x00020,		// ��ȣ�� ���� UNSIGNED 32 BIT �� ����
				EConvertDepth_ToU64 = 0x00040,		// ��ȣ�� ���� UNSIGNED 64 BIT �� ����

				EConvertDepth_ToS8 = 0x00108,		// ��ȣ�� �ִ� SIGNED 8 BIT �� ����
				EConvertDepth_ToS10 = 0x0010A,		// ��ȣ�� �ִ� SIGNED 10 BIT �� ����
				EConvertDepth_ToS12 = 0x0010C,		// ��ȣ�� �ִ� SIGNED 12 BIT �� ����
				EConvertDepth_ToS13 = 0x0010D,		// ��ȣ�� �ִ� SIGNED 13 BIT �� ����
				EConvertDepth_ToS14 = 0x0010E,		// ��ȣ�� �ִ� SIGNED 14 BIT �� ����
				EConvertDepth_ToS16 = 0x00110,		// ��ȣ�� �ִ� SIGNED 16 BIT �� ����
				EConvertDepth_ToS32 = 0x00120,		// ��ȣ�� �ִ� SIGNED 32 BIT �� ����
				EConvertDepth_ToS64 = 0x00140,		// ��ȣ�� �ִ� SIGNED 64 BIT �� ����

				EConvertDepth_ToF32 = 0x00220,		// ��ȣ�� �ִ� FLOATING 32 BIT �� ����
				EConvertDepth_ToF64 = 0x00240,		// ��ȣ�� �ִ� FLOATING 64 BIT �� ����
			};
			/**
			* �̹��� �ȼ� ũ�� ���� �� ���� ũ�⿡ �°� ���� ���� Ȥ�� ���� �ϵ��� �����մϴ�.
			*/
			enum EConvertDepthValueMode
			{
				EConvertDepthValueMode_ChangeValue = 0,	// ��ǥ �ȼ� ũ�⿡ �°� ����
				EConvertDepthValueMode_KeepValue,		// ���� ���� ����
			};
			/**
			* �̹����� ������ ������ �����մϴ�.
			*/
			enum EFlipType
			{
				EFlipType_X = 0,	// ���� ���� ����
				EFlipType_Y,		// ���� ���� ����
				EFlipType_XY,		// ����, ���� ���� ����
			};
			/**
			* �̹��� ������� �� �̸� ���ǵ� �������� ����մϴ�.
			*/
			enum EConvolutionPreset
			{
				EConvolutionPreset_Uniform3x3 = 0,	// ������ ���� 3 by 3
				EConvolutionPreset_Gaussian3x3,		// ����þ� ���� 3 by 3
				EConvolutionPreset_LowPass1,		// ������ ��� ����1 3 by 3
				EConvolutionPreset_LowPass2,		// ������ ��� ����2 3 by 3
				EConvolutionPreset_LowPass3,		// ������ ��� ����3 3 by 3

				EConvolutionPreset_Uniform5x5,		// ������ ���� 5 by 5
				EConvolutionPreset_Gaussian5x5,		// ����þ� ���� 5 by 5

				EConvolutionPreset_Uniform7x7,		// ������ ���� 7 by 7
				EConvolutionPreset_Gaussian7x7,		// ����þ� ���� 7 by 7

				EConvolutionPreset_Sharpen,			// ���� ���� 3 by 3
				EConvolutionPreset_HighPass1,		// ������ ��� ����1 3 by 3
				EConvolutionPreset_HighPass2,		// ������ ��� ����2 3 by 3

				EConvolutionPreset_GradientX,		// ���� x ���� ���� 3 by 3
				EConvolutionPreset_GradientY,		// ���� y ���� ���� 3 by 3
				EConvolutionPreset_Gradient,		// ���� xy ���� ���� 3 by 3

				EConvolutionPreset_SobelX,			// ���� x ���� ���� 3 by 3
				EConvolutionPreset_SobelY,			// ���� y ���� ���� 3 by 3
				EConvolutionPreset_Sobel,			// ���� xy ���� ���� 3 by 3

				EConvolutionPreset_PrewittX,		// ���� x ���� ���� 3 by 3
				EConvolutionPreset_PrewittY,		// ���� y ���� ���� 3 by 3
				EConvolutionPreset_Prewitt,			// ���� xy ���� ���� 3 by 3

				EConvolutionPreset_LaplacianX,		// ���� x ���� ���� ���� 3 by 3
				EConvolutionPreset_LaplacianY,		// ���� Y ���� ���� ���� 3 by 3
				EConvolutionPreset_Laplacian4,		// ���� xy 4 ���� ���� ���� 3 by 3
				EConvolutionPreset_Laplacian8,		// ���� xy 8 ���� ���� ���� 3 by 3

				EConvolutionPreset_CompassN,		// ���� �Ʒ�->�� ���� ���� 3 by 3
				EConvolutionPreset_CompassNW,		// ���� �Ʒ�->��, ������->���� ���� ���� 3 by 3
				EConvolutionPreset_CompassW,		// ���� ������->���� ���� ���� 3 by 3
				EConvolutionPreset_CompassSW,		// ���� ��->�Ʒ�, ������->���� ���� ���� 3 by 3
				EConvolutionPreset_CompassS,		// ���� ��->�Ʒ� ���� ���� 3 by 3
				EConvolutionPreset_CompassSE,		// ���� ��->�Ʒ�, ����->������ ���� ���� 3 by 3
				EConvolutionPreset_CompassE,		// ���� ����->������ ���� ���� 3 by 3
				EConvolutionPreset_CompassNE,		// ���� �Ʒ�->��, ����->������ ���� ���� 3 by 3
			};
			/**
			* �̹��� �������� Ÿ���� ����մϴ�.
			*/
			enum EValueType
			{
				EValueType_Unsigned = 0,	// ��ȣ ������ 
				EValueType_Signed,			// ��ȣ ����
				EValueType_FloatingPoint	// �Ҽ���
			};
			/**
			* �̹��� �������� ä�� �� Ÿ��, ��Ʈ�� ǥ���մϴ�.
			*/
			enum EValueFormat
			{
				EValueFormat_1C_U8 = 0x00008,	// ä�� 1 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_1C_U10 = 0x0000A,	// ä�� 1 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_1C_U12 = 0x0000C,	// ä�� 1 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_1C_U13 = 0x0000D,	// ä�� 1 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_1C_U14 = 0x0000E,	// ä�� 1 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_1C_U16 = 0x00010,	// ä�� 1 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_1C_U32 = 0x00020,	// ä�� 1 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_1C_U64 = 0x00040,	// ä�� 1 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_1C_S8 = 0x00108,	// ä�� 1 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_1C_S10 = 0x0010A,	// ä�� 1 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_1C_S12 = 0x0010C,	// ä�� 1 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_1C_S13 = 0x0010D,	// ä�� 1 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_1C_S14 = 0x0010E,	// ä�� 1 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_1C_S16 = 0x00110,	// ä�� 1 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_1C_S32 = 0x00120,	// ä�� 1 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_1C_S64 = 0x00140,	// ä�� 1 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_1C_F32 = 0x00220,	// ä�� 1 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_1C_F64 = 0x00240,	// ä�� 1 : �Ҽ��� : 64 ��Ʈ
				
				EValueFormat_2C_U8 = 0x01008,	// ä�� 2 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_2C_U10 = 0x0100A,	// ä�� 2 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_2C_U12 = 0x0100C,	// ä�� 2 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_2C_U13 = 0x0100D,	// ä�� 2 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_2C_U14 = 0x0100E,	// ä�� 2 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_2C_U16 = 0x01010,	// ä�� 2 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_2C_U32 = 0x01020,	// ä�� 2 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_2C_U64 = 0x01040,	// ä�� 2 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_2C_S8 = 0x01108,	// ä�� 2 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_2C_S10 = 0x0110A,	// ä�� 2 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_2C_S12 = 0x0110C,	// ä�� 2 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_2C_S13 = 0x0110D,	// ä�� 2 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_2C_S14 = 0x0110E,	// ä�� 2 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_2C_S16 = 0x01110,	// ä�� 2 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_2C_S32 = 0x01120,	// ä�� 2 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_2C_S64 = 0x01140,	// ä�� 2 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_2C_F32 = 0x01220,	// ä�� 2 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_2C_F64 = 0x01240,	// ä�� 2 : �Ҽ��� : 64 ��Ʈ
				
				EValueFormat_3C_U8 = 0x02008,	// ä�� 3 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_3C_U10 = 0x0200A,	// ä�� 3 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_3C_U12 = 0x0200C,	// ä�� 3 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_3C_U13 = 0x0200D,	// ä�� 3 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_3C_U14 = 0x0200E,	// ä�� 3 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_3C_U16 = 0x02010,	// ä�� 3 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_3C_U32 = 0x02020,	// ä�� 3 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_3C_U64 = 0x02040,	// ä�� 3 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_3C_S8 = 0x02108,	// ä�� 3 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_3C_S10 = 0x0210A,	// ä�� 3 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_3C_S12 = 0x0210C,	// ä�� 3 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_3C_S13 = 0x0210D,	// ä�� 3 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_3C_S14 = 0x0210E,	// ä�� 3 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_3C_S16 = 0x02110,	// ä�� 3 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_3C_S32 = 0x02120,	// ä�� 3 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_3C_S64 = 0x02140,	// ä�� 3 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_3C_F32 = 0x02220,	// ä�� 3 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_3C_F64 = 0x02240,	// ä�� 3 : �Ҽ��� : 64 ��Ʈ
				
				EValueFormat_4C_U8 = 0x03008,	// ä�� 4 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_4C_U10 = 0x0300A, 	// ä�� 4 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_4C_U12 = 0x0300C, 	// ä�� 4 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_4C_U13 = 0x0300D, 	// ä�� 4 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_4C_U14 = 0x0300E, 	// ä�� 4 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_4C_U16 = 0x03010, 	// ä�� 4 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_4C_U32 = 0x03020, 	// ä�� 4 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_4C_U64 = 0x03040, 	// ä�� 4 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_4C_S8 = 0x03108,  	// ä�� 4 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_4C_S10 = 0x0310A, 	// ä�� 4 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_4C_S12 = 0x0310C, 	// ä�� 4 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_4C_S13 = 0x0310D, 	// ä�� 4 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_4C_S14 = 0x0310E, 	// ä�� 4 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_4C_S16 = 0x03110, 	// ä�� 4 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_4C_S32 = 0x03120, 	// ä�� 4 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_4C_S64 = 0x03140, 	// ä�� 4 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_4C_F32 = 0x03220,	// ä�� 4 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_4C_F64 = 0x03240,	// ä�� 4 : �Ҽ��� : 64 ��Ʈ
				
				EValueFormat_5C_U8 = 0x04008,  	// ä�� 5 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_5C_U10 = 0x0400A, 	// ä�� 5 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_5C_U12 = 0x0400C, 	// ä�� 5 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_5C_U13 = 0x0400D, 	// ä�� 5 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_5C_U14 = 0x0400E, 	// ä�� 5 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_5C_U16 = 0x04010, 	// ä�� 5 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_5C_U32 = 0x04020, 	// ä�� 5 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_5C_U64 = 0x04040, 	// ä�� 5 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_5C_S8 = 0x04108,  	// ä�� 5 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_5C_S10 = 0x0410A, 	// ä�� 5 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_5C_S12 = 0x0410C, 	// ä�� 5 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_5C_S13 = 0x0410D, 	// ä�� 5 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_5C_S14 = 0x0410E, 	// ä�� 5 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_5C_S16 = 0x04110, 	// ä�� 5 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_5C_S32 = 0x04120, 	// ä�� 5 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_5C_S64 = 0x04140, 	// ä�� 5 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_5C_F32 = 0x04220,	// ä�� 5 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_5C_F64 = 0x04240,	// ä�� 5 : �Ҽ��� : 64 ��Ʈ
					
				EValueFormat_6C_U8 = 0x05008,  	// ä�� 6 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_6C_U10 = 0x0500A, 	// ä�� 6 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_6C_U12 = 0x0500C, 	// ä�� 6 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_6C_U13 = 0x0500D, 	// ä�� 6 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_6C_U14 = 0x0500E, 	// ä�� 6 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_6C_U16 = 0x05010, 	// ä�� 6 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_6C_U32 = 0x05020, 	// ä�� 6 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_6C_U64 = 0x05040, 	// ä�� 6 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_6C_S8 = 0x05108, 	// ä�� 6 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_6C_S10 = 0x0510A,	// ä�� 6 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_6C_S12 = 0x0510C,	// ä�� 6 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_6C_S13 = 0x0510D,	// ä�� 6 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_6C_S14 = 0x0510E,	// ä�� 6 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_6C_S16 = 0x05110,	// ä�� 6 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_6C_S32 = 0x05120,	// ä�� 6 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_6C_S64 = 0x05140,	// ä�� 6 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_6C_F32 = 0x05220,	// ä�� 6 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_6C_F64 = 0x05240,	// ä�� 6 : �Ҽ��� : 64 ��Ʈ
					
				EValueFormat_7C_U8 = 0x06008, 	// ä�� 7 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_7C_U10 = 0x0600A,	// ä�� 7 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_7C_U12 = 0x0600C,	// ä�� 7 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_7C_U13 = 0x0600D,	// ä�� 7 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_7C_U14 = 0x0600E,	// ä�� 7 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_7C_U16 = 0x06010,	// ä�� 7 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_7C_U32 = 0x06020,	// ä�� 7 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_7C_U64 = 0x06040,	// ä�� 7 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_7C_S8 = 0x06108,  	// ä�� 7 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_7C_S10 = 0x0610A, 	// ä�� 7 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_7C_S12 = 0x0610C, 	// ä�� 7 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_7C_S13 = 0x0610D, 	// ä�� 7 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_7C_S14 = 0x0610E, 	// ä�� 7 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_7C_S16 = 0x06110, 	// ä�� 7 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_7C_S32 = 0x06120, 	// ä�� 7 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_7C_S64 = 0x06140, 	// ä�� 7 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_7C_F32 = 0x06220, 	// ä�� 7 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_7C_F64 = 0x06240, 	// ä�� 7 : �Ҽ��� : 64 ��Ʈ
					
				EValueFormat_8C_U8 = 0x07008, 	// ä�� 8 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_8C_U10 = 0x0700A,	// ä�� 8 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_8C_U12 = 0x0700C,	// ä�� 8 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_8C_U13 = 0x0700D,	// ä�� 8 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_8C_U14 = 0x0700E,	// ä�� 8 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_8C_U16 = 0x07010,	// ä�� 8 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_8C_U32 = 0x07020,	// ä�� 8 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_8C_U64 = 0x07040,	// ä�� 8 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_8C_S8 = 0x07108,  	// ä�� 8 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_8C_S10 = 0x0710A, 	// ä�� 8 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_8C_S12 = 0x0710C, 	// ä�� 8 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_8C_S13 = 0x0710D, 	// ä�� 8 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_8C_S14 = 0x0710E, 	// ä�� 8 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_8C_S16 = 0x07110, 	// ä�� 8 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_8C_S32 = 0x07120, 	// ä�� 8 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_8C_S64 = 0x07140, 	// ä�� 8 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_8C_F32 = 0x07220,	// ä�� 8 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_8C_F64 = 0x07240,	// ä�� 8 : �Ҽ��� : 64 ��Ʈ
					
				EValueFormat_9C_U8 = 0x08008,  	// ä�� 9 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_9C_U10 = 0x0800A, 	// ä�� 9 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_9C_U12 = 0x0800C, 	// ä�� 9 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_9C_U13 = 0x0800D, 	// ä�� 9 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_9C_U14 = 0x0800E, 	// ä�� 9 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_9C_U16 = 0x08010, 	// ä�� 9 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_9C_U32 = 0x08020, 	// ä�� 9 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_9C_U64 = 0x08040, 	// ä�� 9 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_9C_S8 = 0x08108, 	// ä�� 9 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_9C_S10 = 0x0810A,	// ä�� 9 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_9C_S12 = 0x0810C,	// ä�� 9 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_9C_S13 = 0x0810D,	// ä�� 9 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_9C_S14 = 0x0810E,	// ä�� 9 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_9C_S16 = 0x08110,	// ä�� 9 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_9C_S32 = 0x08120,	// ä�� 9 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_9C_S64 = 0x08140,	// ä�� 9 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_9C_F32 = 0x08220,	// ä�� 9 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_9C_F64 = 0x08240,	// ä�� 9 : �Ҽ��� : 64 ��Ʈ
					
				EValueFormat_10C_U8 = 0x09008, 	// ä�� 10 : ��ȣ ������ : 8 ��Ʈ
				EValueFormat_10C_U10 = 0x0900A,	// ä�� 10 : ��ȣ ������ : 10 ��Ʈ
				EValueFormat_10C_U12 = 0x0900C,	// ä�� 10 : ��ȣ ������ : 12 ��Ʈ
				EValueFormat_10C_U13 = 0x0900D,	// ä�� 10 : ��ȣ ������ : 13 ��Ʈ
				EValueFormat_10C_U14 = 0x0900E,	// ä�� 10 : ��ȣ ������ : 14 ��Ʈ
				EValueFormat_10C_U16 = 0x09010,	// ä�� 10 : ��ȣ ������ : 16 ��Ʈ
				EValueFormat_10C_U32 = 0x09020,	// ä�� 10 : ��ȣ ������ : 32 ��Ʈ
				EValueFormat_10C_U64 = 0x09040,	// ä�� 10 : ��ȣ ������ : 64 ��Ʈ

				EValueFormat_10C_S8 = 0x09108, 	// ä�� 10 : ��ȣ ���� : 8 ��Ʈ
				EValueFormat_10C_S10 = 0x0910A,	// ä�� 10 : ��ȣ ���� : 10 ��Ʈ
				EValueFormat_10C_S12 = 0x0910C,	// ä�� 10 : ��ȣ ���� : 12 ��Ʈ
				EValueFormat_10C_S13 = 0x0910D,	// ä�� 10 : ��ȣ ���� : 13 ��Ʈ
				EValueFormat_10C_S14 = 0x0910E,	// ä�� 10 : ��ȣ ���� : 14 ��Ʈ
				EValueFormat_10C_S16 = 0x09110,	// ä�� 10 : ��ȣ ���� : 16 ��Ʈ
				EValueFormat_10C_S32 = 0x09120,	// ä�� 10 : ��ȣ ���� : 32 ��Ʈ
				EValueFormat_10C_S64 = 0x09140,	// ä�� 10 : ��ȣ ���� : 64 ��Ʈ

				EValueFormat_10C_F32 = 0x09220,	// ä�� 10 : �Ҽ��� : 32 ��Ʈ
				EValueFormat_10C_F64 = 0x09240,	// ä�� 10 : �Ҽ��� : 64 ��Ʈ
			};
			/**
			* FFT ������ ǥ���մϴ�.
			*/
			typedef struct sFFTInfo
			{
				ptrdiff_t nOrgSizeX;
				ptrdiff_t nOrgSizeY;
				long nOrgWidthStep;
				bool bOrgColor;
				long nOrgDepth;
				long nOrgChannels;
				double dblFFTMaxValue;
				bool bFloating = false;

				EFFTMethod eMethod;
			}sFFTInfo;
			
			CRavidImage();
			CRavidImage(_In_ CRavidImage& imgInfo);
			CRavidImage(_In_ CRavidImage* pImgInfo);
			CRavidImage(_In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ Framework::CMultipleVariable rmvFillValue = {}, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4);  

			CRavidImage& operator=(_In_ CRavidImage& riInfo);
			virtual ~CRavidImage();
			
			/**
			* �̹��� �����͸� ������ �ִ��� Ȯ���մϴ�.
			*
			* return value : bool �� ������ ������ ��ȯ�մϴ�.
			*/
			bool IsLoaded();
			
			/**
			* �̹��� ������ �о�ɴϴ�.
			*
			* param[in] lpszFileName : ���ϸ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Load(_In_ LPCTSTR lpszFileName);
			
			/**
			* �̹��� ���Ϸ� �����մϴ�.
			*
			* param[in] lpszFileName : ���ϸ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Save(_In_ LPCTSTR lpszFileName);
			
			/**
			* �̹��� ����(jpg)�� ���� �����մϴ�.
			*
			* param[in] lpszFileName : ���ϸ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CompressionSave(_In_ LPCTSTR lpszFileName, _In_ int nCompressionQuality = 95);
			
			/**
			* �̹��� ���� ũ�⸦ �����ɴϴ�.
			*
			* param[in] nSizeX : �̹��� ���� ũ��
			*/
			void SetSizeX(_In_ ptrdiff_t nSizeX);
			
			/**
			* �̹��� ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ���� ũ�⸦ ��ȯ�մϴ�.
			*/
			ptrdiff_t GetSizeX();
			
			/**
			* �̹��� ���� ũ�⸦ �����ɴϴ�.
			*
			* param[in] nSizeX : �̹��� ���� ũ��
			*/
			void SetSizeY(_In_ ptrdiff_t nSizeY);
			
			/**
			* �̹��� ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ���� ũ�⸦ ��ȯ�մϴ�.
			*/
			ptrdiff_t GetSizeY();
			
			/**
			* �̹��� ��ü ������ ũ��(BYTE)�� �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ��ü ������ ũ��(BYTE)�� ��ȯ�մϴ�.
			*/
			ptrdiff_t GetImageSizeByte();
			
			/**
			* �÷� �̹������� Ȯ���մϴ�.
			*
			* return value : bool �� �÷� �̹��� ���θ� ��ȯ�մϴ�.
			*/
			bool IsColor();
			
			/**
			* ���� �̹��� ������ �Ҽ��� ������ �����մϴ�.
			*
			* param[in] bFloatingPoint : �Ҽ��� ��� ����
			*
			* return value : bool �� ���� ������ ��ȯ�մϴ�.
			*/
			bool SetFloatingPoint(_In_opt_ bool bFloatingPoint = false);
			
			/**
			* ���� �̹����� �Ҽ������� ǥ���ϴ��� Ȯ���մϴ�
			*
			* return value : bool �� �Ҽ��� ��� ������ ��ȯ�մϴ�.
			*/
			bool IsFloatingPoint();
			
			/**
			* �̹��� ���� ������ ũ��(BYTE)�� �����ɴϴ�.
			*
			* param[in] nWidthStep : �̹��� ���� ũ��
			*/
			void SetWidthStep(_In_ ptrdiff_t nWidthStep);
			
			/**
			* �̹��� ���� ������ ũ��(BYTE)�� �����ɴϴ�.
			*
			* return value : ptrdiff_t �� ���� ������ ũ��(BYTE)�� ��ȯ�մϴ�.
			*/
			ptrdiff_t GetWidthStep();
			
			/**
			* �̹��� �ȼ� ��Ʈ ���� �����ɴϴ�.
			*
			* return value : long �� �ȼ� ǥ�� ��Ʈ ���� ��ȯ�մϴ�.
			*/
			long GetDepth();
			
			/**
			* �̹��� �ȼ� ǥ�� ä�� ���� �����ɴϴ�.
			*
			* return value : long �� �ȼ� ǥ�� ä�� ���� ��ȯ�մϴ�.
			*/
			long GetChannels();
			
			/**
			* �̹��� ������ �����ɴϴ�.
			*
			* return value : EValueFormat �� �̹��� ������ ��ȯ�մϴ�.
			*/
			EValueFormat GetValueFormat();
			
			/**
			* �Էµ� ������ �̹��� ������ ����մϴ�.
			*
			* param[in_opt] nChannel : �̹��� �ȼ� ��Ʈ ��
			* param[in_opt] nBpp : �̹��� �ȼ� ��Ʈ
			* param[in_opt] eType : �̹��� ������ Ÿ��
			*
			* return value : EValueFormat �� �̹��� ������ ��ȯ�մϴ�.
			*/
			static EValueFormat MakeValueFormat(_In_opt_ long nChannel = 1, _In_opt_ long nBpp = 8, _In_opt_ EValueType eType = EValueType_Unsigned);
			
			/**
			* �̹��� ���� ����� ������ �����մϴ�.
			*
			* param[in] nAlignBytes : �̹��� ����� ����
			*/
			void SetAlignBytes(_In_ long nAlignBytes);
			
			/**
			* �̹��� ���� ����� ������ �����ɴϴ�.
			*
			* return value : long �� �̹��� ���� ����� ������ ��ȯ�մϴ�.
			*/
			long GetAlignBytes();
			
			/**
			* �̹��� �ȼ��� ǥ���ϴ� ũ��(BYTE)�� �����ɴϴ�.
			*
			* return value : long �� �ȼ��� ǥ���ϴ� ũ��(BYTE)�� ��ȯ�մϴ�.
			*/
			long GetPixelSizeByte();
			
			/**
			* �̹��� ������ ���� �����͸� �����ɴϴ�.
			*
			* return value : BYTE* �� ������ ���� �����͸� ��ȯ�մϴ�.
			*/
			BYTE* GetBuffer();
			
			/**
			* �̹��� ���ι��� �ȼ� ������ ��ġ�� ������ ����Ʈ�� �����ɴϴ�.
			* 1 ä�� 8��Ʈ�� 1 �� ������ ���� ����
			* 3 ä�� 8��Ʈ�� 3�� ������ ���� ����
			* 4 ä�� 8��Ʈ�� 4�� ������ ���� ����
			*
			* return value : size_t* �� ������ ��ġ�� ������ ����Ʈ�� ��ȯ�մϴ�.
			*/
			size_t* GetXOffsetTable();
			
			/**
			* �̹��� ���ι��� ��ġ�� �ȼ� ������ ���� ������ ����Ʈ�� �����ɴϴ�.
			*
			* return value : BYTE** �� ���ι��� ��ġ�� ������ ���� ������ ����Ʈ�� ��ȯ�մϴ�.
			*/
			BYTE** GetYOffsetTable();
			
			/**
			* ���� Ŭ����� ���� ���� ���θ� �����մϴ�.
			*
			* param[in] bManualDestroyBuffer : ���� Ŭ����� ���� ���� ����
			*/
			void SetManualDestroyBuffer(_In_ bool bManualDestroyBuffer);
			
			/**
			* ���� Ŭ����� ���� ���� ���θ� �����ɴϴ�.
			*
			* return value : bool �� ������ ���¸� ��ȯ�մϴ�.
			*/
			bool IsManualDestroyBuffer();
			
			/**
			* ���� �̹��� ���θ� �����մϴ�.
			*
			* param[in] bIntegral : ���� �̹��� �Ǵ�
			*/
			void SetIntegral(_In_ bool bIntegral);
			
			/**
			* ���� �̹��� ���θ� �����ɴϴ�.
			*
			* return value : bool �� ������ ���¸� ��ȯ�մϴ�.
			*/
			bool IsIntegral();
			
			/**
			* ���� �̸��� �����մϴ�.
			*
			* param[in] strFileName : ���� �̸�
			*/
			void SetFileName(_In_ CString strFileName);
			
			/**
			* ���� �̸��� �����ɴϴ�.
			*
			* return value : CString �� ���� �̸��� ��ȯ�մϴ�.
			*/
			CString GetFileName();
			
			/**
			* ���� ��θ� �����մϴ�.
			*
			* param[in] strFilePathName : ���� ���
			*/
			void SetFilePathName(_In_ CString strFilePathName);
			
			/**
			* ���� ��θ� �����ɴϴ�.
			*
			* return value : CString �� ���� ��θ� ��ȯ�մϴ�.
			*/
			CString GetFilePathName();
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refGeometry : ��� ���� (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<int>& refGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pGeometry : ��� ���� (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<int>* pGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refGeometry : ��� ���� (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<long long>& refGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pGeometry : ��� ���� (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<long long>* pGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refGeometry : ��� ���� (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<float>& refGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pGeometry : ��� ���� (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<float>* pGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refGeometry : ��� ���� (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<double>& refGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pGeometry : ��� ���� (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidRect<double>* pGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refGeometry : ��� ���� (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ RECT& refGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pGeometry : ��� ���� (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ RECT* pGeometry, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refPoint1 : ���� ��ġ (Reference)
			* param[in] refPoint2 : �� ��ġ (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<int>& refPoint1, _In_ CRavidPoint<int>& refPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refPoint1 : ���� ��ġ (Reference)
			* param[in] refPoint2 : �� ��ġ (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<float>& refPoint1, _In_ CRavidPoint<float>& refPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refPoint1 : ���� ��ġ (Reference)
			* param[in] refPoint2 : �� ��ġ (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<long long>& refPoint1, _In_ CRavidPoint<long long>& refPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] refPoint1 : ���� ��ġ (Reference)
			* param[in] refPoint2 : �� ��ġ (Reference)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<double>& refPoint1, _In_ CRavidPoint<double>& refPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pPoint1 : ���� ��ġ (Pointer)
			* param[in] pPoint2 : �� ��ġ (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pPoint1 : ���� ��ġ (Pointer)
			* param[in] pPoint2 : �� ��ġ (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pPoint1 : ���� ��ġ (Pointer)
			* param[in] pPoint2 : �� ��ġ (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] pPoint1 : ���� ��ġ (Pointer)
			* param[in] pPoint2 : �� ��ġ (Pointer)
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2, _Out_ Framework::CMultipleVariable* rmvSumValue);
						
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] left : x �� ����
			* param[in] top : y �� ����
			* param[in] right : x �� ��
			* param[in] bottom : y �� ��
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ int left, _In_ int top, _In_ int right, _In_ int bottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
						
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] left : x �� ����
			* param[in] top : y �� ����
			* param[in] right : x �� ��
			* param[in] bottom : y �� ��
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ float left, _In_ float top, _In_ float right, _In_ float bottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
						
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] left : x �� ����
			* param[in] top : y �� ����
			* param[in] right : x �� ��
			* param[in] bottom : y �� ��
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ long long left, _In_ long long top, _In_ long long right, _In_ long long bottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* ���� �̹������� �Է� ������ ũ�⸦ ����մϴ�.
			*
			* param[in] left : x �� ����
			* param[in] top : y �� ����
			* param[in] right : x �� ��
			* param[in] bottom : y �� ��
			* param[out] rmvSumValue : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetIntegralValue(_In_ double left, _In_ double top, _In_ double right, _In_ double bottom, _Out_ Framework::CMultipleVariable* rmvSumValue);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3, _Out_ BYTE* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3, _Out_ WORD* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3, _Out_ DWORD* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3, _Out_ float* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3, _Out_ double* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3, _Out_ long long* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*/
			void GetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3, _Out_ unsigned long long* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ BYTE* pValue1, _Out_ BYTE* pValue2, _Out_ BYTE* pValue3, _Out_ BYTE* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ WORD* pValue1, _Out_ WORD* pValue2, _Out_ WORD* pValue3, _Out_ WORD* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ DWORD* pValue1, _Out_ DWORD* pValue2, _Out_ DWORD* pValue3, _Out_ DWORD* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ float* pValue1, _Out_ float* pValue2, _Out_ float* pValue3, _Out_ float* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ double* pValue1, _Out_ double* pValue2, _Out_ double* pValue3, _Out_ double* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ long long* pValue1, _Out_ long long* pValue2, _Out_ long long* pValue3, _Out_ long long* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� unsigned long long�� ������ �����ɴϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ GetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����ɴϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[out] pValue1 : ������ �� (Pointer)
			* param[out] pValue2 : pValue1 ���� ������ �� (Pointer)
			* param[out] pValue3 : pValue2 ���� ������ �� (Pointer)
			* param[out] pValue4 : pValue3 ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _Out_ unsigned long long* pValue1, _Out_ unsigned long long* pValue2, _Out_ unsigned long long* pValue3, _Out_ unsigned long long* pValue4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2, _In_ BYTE value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2, _In_ BYTE value3, _In_ BYTE value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2, _In_ WORD value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2, _In_ WORD value3, _In_ WORD value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2, _In_ DWORD value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2, _In_ DWORD value3, _In_ DWORD value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2, _In_ float value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2, _In_ float value3, _In_ float value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2, _In_ double value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*/
			void SetValue(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2, _In_ double value3, _In_ double value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2, _In_ BYTE value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� BYTE�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ BYTE value1, _In_ BYTE value2, _In_ BYTE value3, _In_ BYTE value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2, _In_ WORD value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� WORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ WORD value1, _In_ WORD value2, _In_ WORD value3, _In_ WORD value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2, _In_ DWORD value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� DWORD�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ DWORD value1, _In_ DWORD value2, _In_ DWORD value3, _In_ DWORD value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2, _In_ float value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� float�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ float value1, _In_ float value2, _In_ float value3, _In_ float value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 2���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 3���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2, _In_ double value3);

			/**
			* �̹������� �Էµ� ��ġ�� �����͸� double�� ������ �����մϴ�.
			* x, y �� ������ Ȯ���ϱ� ������ SetValue ���� �����ϴ�.
			* ���ӵ� 4���� ���� �����մϴ�.
			*
			* param[in] x : x �� ����
			* param[in] y : y �� ����
			* param[in] value1 : ������ ��
			* param[in] value2 : value1 ���� ������ ��
			* param[in] value3 : value2 ���� ������ ��
			* param[in] value4 : value3 ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetValueSafe(_In_ ptrdiff_t x, _In_ ptrdiff_t y, _In_ double value1, _In_ double value2, _In_ double value3, _In_ double value4);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ��ǥ
			* param[in] y : y �� ��ǥ
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBilinear(_In_ float x, _In_ float y);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBilinear(_In_ CRavidPoint<float>* pPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBilinear(_In_ CRavidPoint<float>& refPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBilinear(_In_ CRavidPoint<double>* pPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBilinear(_In_ CRavidPoint<double>& refPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ��ǥ
			* param[in] y : y �� ��ǥ
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBilinear(_In_ float x, _In_ float y, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<float>* pPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<float>& refPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<double>* pPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� ���� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBilinear(_In_ CRavidPoint<double>& refPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ��ǥ
			* param[in] y : y �� ��ǥ
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBicubic(_In_ float x, _In_ float y);
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBicubic(_In_ CRavidPoint<float>* pPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBicubic(_In_ CRavidPoint<float>& refPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBicubic(_In_ CRavidPoint<double>* pPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			*
			* return value : float �� ���� �����͸� ��ȯ�մϴ�.
			*/
			float GetGVBicubic(_In_ CRavidPoint<double>& refPoint);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] x : x �� ��ǥ
			* param[in] y : y �� ��ǥ
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBicubic(_In_ float x, _In_ float y, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<float>* pPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<float>& refPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] pPoint : x, y �� ��ǥ (Pointer)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<double>* pPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* �̹������� �Էµ� ��ġ�� �����͸� 3�� �����Ͽ� float�� ������ �����ɴϴ�.
			*
			* param[in] refPoint : x, y �� ��ǥ (Reference)
			* param[out] pR : ���� ������ �� (Pointer)
			* param[out] pG : ���� ������ �� (Pointer)
			* param[out] pB : ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetRGBBicubic(_In_ CRavidPoint<double>& refPoint, _Out_ float* pR, _Out_ float* pG, _Out_ float* pB);
			
			/**
			* ���� Ŭ������ �ʱ�ȭ�մϴ�.
			*/
			void Clear();
			
			/**
			* �Էµ� �̹����� ���� �̹����� �����մϴ�.
			*
			* param[in] refSrcImage : �Է� �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Copy(_In_ CRavidImage& refSrcImage);
			
			/**
			* �Էµ� �̹����� ���� �̹����� �����մϴ�.
			*
			* param[in] pSrcImage : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Copy(_In_ CRavidImage* pSrcImage);
			
			/**
			* ���� �̹����� �Էµ� �̹����� �ٿ��ֱ� �մϴ�.
			*
			* param[out] refDstImage : ��� �̹��� (Reference)
			* param[in_opt] pSrcRegion : ���� ���� (Pointer)
			* param[in_opt] pDstRegion : �ٿ��ֱ� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Paste(_Out_ CRavidImage& refDstImage, _In_opt_ CRavidGeometry* pSrcRegion = nullptr, _In_opt_ CRavidGeometry* pDstRegion = nullptr);
			
			/**
			* ���� �̹����� �Էµ� �̹����� �ٿ��ֱ� �մϴ�.
			*
			* param[out] pDstImage : ��� �̹��� (Pointer)
			* param[in_opt] pSrcRegion : ���� ���� (Pointer)
			* param[in_opt] pDstRegion : �ٿ��ֱ� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Paste(_Out_ CRavidImage* pDstImage, _In_opt_ CRavidGeometry* pSrcRegion = nullptr, _In_opt_ CRavidGeometry* pDstRegion = nullptr);
			
			/**
			* �Էµ� �̹����� ���� �̹����� ��ü�մϴ�.
			*
			* param[in_out] refDstImage : ��ü �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Swap(_Inout_ CRavidImage& refDstImage);
			
			/**
			* �Էµ� �̹����� ���� �̹����� ��ü�մϴ�.
			*
			* param[in_out] pDstImage : ��ü �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Swap(_Inout_ CRavidImage* pDstImage);
			
			/**
			* �Էµ� 3ä�� �̹����� ���� �̹����� 1ä�� ��� �̹����� �����մϴ�.
			*
			* param[in] pSrcImageRGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyRGBToGray(_In_ CRavidImage* pSrcImageRGB);
			
			/**
			* �Էµ� 4ä�� �̹����� ���� �̹����� 1ä�� ��� �̹����� �����մϴ�.
			*
			* param[in] pSrcImageARGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyARGBToGray(_In_ CRavidImage* pSrcImageARGB);
			
			/**
			* �Էµ� 1ä�� �̹����� ���� �̹����� 3ä�� RGB�̹����� �����մϴ�.
			*
			* param[in] pSrcImageGray : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyGrayToRGB(_In_ CRavidImage* pSrcImageGray);
			
			/**
			* �Էµ� 1ä�� �̹����� ���� �̹����� 4ä�� ARGB�̹����� �����մϴ�.
			*
			* param[in] pSrcImageGray : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyGrayToARGB(_In_ CRavidImage* pSrcImageGray);
			
			/**
			* �Էµ� 3ä�� �̹����� ���� �̹����� 1ä�� Gray �̹����� �����մϴ�.
			*
			* param[in] pSrcImageRGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyRGBToYComponent(_In_ CRavidImage* pSrcImageRGB);
			
			/**
			* �Էµ� 4ä�� �̹����� ���� �̹����� 1ä�� Gray �̹����� �����մϴ�.
			*
			* param[in] pSrcImageARGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyARGBToYComponent(_In_ CRavidImage* pSrcImageARGB);
			
			/**
			* �Էµ� 3ä�� �̹����� ���� �̹����� 4ä�� ARGB�̹����� �����մϴ�.
			*
			* param[in] pSrcImageRGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyRGBToARGB(_In_ CRavidImage* pSrcImageRGB);
			
			/**
			* �Էµ� 4ä�� �̹����� ���� �̹����� 3ä�� RGB�̹����� �����մϴ�.
			*
			* param[in] pSrcImageRGB : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyARGBToRGB(_In_ CRavidImage* pSrcImageARGB);
			
			/**
			* �Էµ� ������ �̹����� �����մϴ�.
			*
			* param[in] nSizeX : �̹��� ���� ũ��
			* param[in] nSizeY : �̹��� ���� ũ��
			* param[in_opt] rmvFillValue : �ȼ� ���� �ʱⰪ
			* param[in_opt] eValueFormat : ä�� �� ǥ��, �ȼ� ��Ʈ
			* param[in_opt] nWidthStep : �̹��� ���� ������ ũ��
			* param[in_opt] nAlignBytes : �̹��� ���� ����� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CreateImageBuffer(_In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ Framework::CMultipleVariable rmvFillValue = {}, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4);
			
			/**
			* �Էµ� ������ �̹����� ���� �����մϴ�.
			*
			* param[in] pData : �̹��� ������ ����Ʈ (Pointer)
			* param[in] nSizeX : �̹��� ���� ũ��
			* param[in] nSizeY : �̹��� ���� ũ��
			* param[in_opt] eValueFormat : ä�� �� ǥ��, �ȼ� ��Ʈ
			* param[in_opt] nWidthStep : �̹��� ���� ������ ũ��
			* param[in_opt] nAlignBytes : �̹��� ���� ����� ����
			* param[in_opt] bManualDestroy : �̹��� ���� ����
			* param[in_opt] bClear : ������ �ʱ�ȭ ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetImagePtr(_In_ BYTE* pData, _In_ ptrdiff_t nSizeX, _In_ ptrdiff_t nSizeY, _In_opt_ EValueFormat eValueFormat = EValueFormat_1C_U8, _In_opt_ long nWidthStep = 0, _In_opt_ long nAlignBytes = 4, _In_opt_ bool bManualDestroy = true, _In_opt_ bool bClear = true);
			
			/**
			* 3ä�� ���� �̹����� 1ä�� ��� �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToGray();
			
			/**
			* 4ä�� ���� �̹����� 1ä�� ��� �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertARGBToGray();
			
			/**
			* 1ä�� ���� �̹����� 3ä�� RGB �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertGrayToRGB();
			
			/**
			* 1ä�� ���� �̹����� 3ä�� ARGB �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertGrayToARGB();
			
			/**
			* 3ä�� ���� �̹����� 1ä�� Gray �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToYComponent();
			
			/**
			* 4ä�� ���� �̹����� 1ä�� Gray �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertARGBToYComponent();
			
			/**
			* 3ä�� ���� �̹����� 4ä�� ARGB �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertRGBToARGB();
			
			/**
			* 4ä�� ���� �̹����� 3ä�� RGB �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertARGBToRGB();
			
			/**
			* �Էµ� ������ �̹����� ȸ���մϴ�.
			*
			* param[in] dblAngle : ȸ�� ����
			* param[in_opt] pPivot : ȸ�� �߽� ��ġ (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] bResizing : ȸ�� �� �̹��� ũ�� �� ����
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Rotate(_In_ double dblAngle, _In_opt_ CRavidPoint<double>* pPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ bool bResizing = false, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ �̹����� ũ�⸦ �����մϴ�.
			*
			* param[in] refRatio : ���� xy ���� (Reference)
			* param[in_opt] bResizing : ���� �� �̹��� ũ�� �� ����
			* param[in_opt] pPivot : ũ�� ��ȯ �߽� ��ġ (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Scale(_In_ CRavidPoint<double>& refRatio, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ �̹����� ũ�⸦ �����մϴ�.
			*
			* param[in] pRatio : ���� xy ���� (Pointer)
			* param[in_opt] bResizing : ���� �� �̹��� ũ�� �� ����
			* param[in_opt] pPivot : ũ�� ��ȯ �߽� ��ġ (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Scale(_In_ CRavidPoint<double>* pRatio, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ �̹����� ũ�⸦ �����մϴ�.
			*
			* param[in] ratioX : ���� x ����
			* param[in] ratioY : ���� y ����
			* param[in_opt] bResizing : ���� �� �̹��� ũ�� �� ����
			* param[in_opt] pPivot : ũ�� ��ȯ �߽� ��ġ (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Scale(_In_ double ratioX, _In_ double ratioY, _In_opt_ bool bResizing = true, _In_opt_ CRavidPoint<double>* pPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ ���� �̹����� �̵��մϴ�.
			*
			* param[in] deltaX : �̵� x �Ÿ�
			* param[in] deltaY : �̵� y �Ÿ�
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MovePosition(_In_ double deltaX, _In_ double deltaY, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ ���� �̹����� �̵��մϴ�.
			*
			* param[in] refDelta : �̵� xy �Ÿ� (Reference)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MovePosition(_In_ CRavidPoint<double>& refDelta, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ ���� �̹����� �̵��մϴ�.
			*
			* param[in] pDelta : �̵� xy �Ÿ� (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä��� ��
			* param[in_opt] eMethod : ȸ�� �� ������ ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MovePosition(_In_ CRavidPoint<double>* pDelta, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ EInterpolationMethod eMethod = EInterpolationMethod_Bilinear, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ ������ ���� �������� ���� ������ŭ ���� �� �Է� ���� ���մϴ�.
			*
			* param[in] rmvGainVal : ��� ��ȯ ����
			* param[in] pGeometry : ���� ���� (Pointer)
			* param[in] rmvOffsetVal : ��� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Gain(_In_ Framework::CMultipleVariable rmvGainVal, _In_ CRavidGeometry* pGeometry, _In_ Framework::CMultipleVariable rmvOffsetVal);
			
			/**
			* �Էµ� ������ ������ ���� �������� ���� ������ŭ ���� �� �Է� ���� ���մϴ�.
			*
			* param[in] rmvGainVal : ��� ��ȯ ����
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] pmvOffsetVal : ��� �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Gain(_In_ Framework::CMultipleVariable rmvGainVal, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Framework::CMultipleVariable* pmvOffsetVal = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ���մϴ�.
			*
			* param[in] rmvOffsetVal : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Offset(_In_ Framework::CMultipleVariable rmvOffsetVal, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ��������� �մϴ�.
			*
			* param[in] rmKernel : ���� ��Ʈ���� (Reference)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] bAbsolute : ���밪 ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convolution(_In_ Ravid::Mathematics::CMatrix& rmKernel, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ bool bAbsolute = false);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ��������� �մϴ�.
			*
			* param[in] pRmKernel : ���� ��Ʈ���� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] bAbsolute : ���밪 ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convolution(_In_ Ravid::Mathematics::CMatrix* pRmKernel, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ bool bAbsolute = false);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ��������� �մϴ�.
			*
			* param[in] ePreset : ���� ������
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Convolution(_In_ EConvolutionPreset ePreset, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ������ ������ �մϴ�.
			*
			* param[in] refOperation : ���� ���� (Reference)
			* param[in_opt] pRgSrcRegion : ���� ���� (Pointer)
			* param[in_opt] pRgOperRegion : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Operation(_In_ CImageOperationInfo& refOperation, _In_opt_ CRavidGeometry* pRgSrcRegion = nullptr, _In_opt_ CRavidGeometry* pRgOperRegion = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� �����Ϳ� ������ ������ �մϴ�.
			*
			* param[in] pOperation : ���� ���� (Pointer)
			* param[in_opt] pRgSrcRegion : ���� ���� (Pointer)
			* param[in_opt] pRgOperRegion : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Operation(_In_ CImageOperationInfo* pOperation, _In_opt_ CRavidGeometry* pRgSrcRegion = nullptr, _In_opt_ CRavidGeometry* pRgOperRegion = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� �����͸� ���� �մϴ�.
			*
			* param[in] rmvFill : ������ ��
			* param[in] refGeometry : ���� ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mask(_In_ Framework::CMultipleVariable rmvFill, _In_ CRavidGeometry& refGeometry);
			
			/**
			* �Է� ������ ���� �̹����� ���� �մϴ�.
			*
			* param[in] rmvFill : ������ ��
			* param[in] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Mask(_In_ Framework::CMultipleVariable rmvFill, _In_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� �����մϴ�.
			*
			* param[in] eFlipType : ���� ���
			* param[in_opt] pPivot : ���� �߽� ��ǥ (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä�� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Flip(_In_ EFlipType eFlipType, _In_opt_ CRavidPoint<double>* pPivot = nullptr, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹��� ������ �߶���ϴ�.
			*
			* param[in] refGeometry : ���� ���� (Reference)
			* param[in_opt] rmvFillValue : �� ���� ä�� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Crop(_In_ CRavidGeometry& refGeometry, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0);
			
			/**
			* �Է� ������ ���� �̹��� ������ �߶���ϴ�.
			*
			* param[in] pGeometry : ���� ���� (Pointer)
			* param[in_opt] rmvFillValue : �� ���� ä�� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Crop(_In_ CRavidGeometry* pGeometry, _In_opt_ Framework::CMultipleVariable rmvFillValue = 0);
			
			/**
			* �Է� ������ ���� �̹����� �츮���ڳ� �˰����� �մϴ�.
			*
			* param[in] ehcdtType : �츮���ڳ� ����ȭ ��� ����
			* param[in] fThreshHold : ����ȭ ��
			* param[out] pGeometryArray : Ư¡ ��ǥ (Pointer)
			* param[in_opt] fCornerCoefficient : Ư¡ ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult HarrisCornerDetector(_In_ EHarrisCornerDetectorThresholdType ehcdtType, _In_ float fThreshHold, _Out_ CRavidGeometryArray *pGeometryArray, _In_opt_ float fCornerCoefficient = 0.04f, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� �ɴ� ���� �˰����� �մϴ�.
			*
			* param[in] fLowThreshold : �ּ� ����ȭ ��
			* param[in] fHighThreshold : �ִ� ����ȭ ��
			* param[in_opt] ecedtType : �ɴ� ���� ��� ����
			* param[in_opt] nGaussianBlurSize : ����þ� ũ�� ����
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CannyEdgeDetector(_In_ float fLowThreshold, _In_ float fHighThreshold, _In_opt_ ECannyEdgeDetectorThresholdType ecedtType = ECannyEdgeDetectorThresholdType_Absolute, _In_opt_ int nGaussianBlurSize = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �������� �˰����� �մϴ�.
			*
			* param[in] eprjDir : �������� ���� ����
			* param[out] pVctResult : �м� ���
			* param[in_opt] dblAngle : ���� ����
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Projection(_In_ EProjectionDirectionType eprjDir, _Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _In_opt_ double dblAngle = 0.0, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ������׷� �˰����� �մϴ�.
			*
			* param[out] pVctResult : �м� ���
			* param[out_opt] ullPixelTotalCnt : �� ������ ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Histogram(_Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _Out_opt_ unsigned long long* ullPixelTotalCnt = nullptr, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ������׷� ����ȭ �˰����� �մϴ�.
			*
			* param[out] pVctResult : ����ȭ�� �м� ��� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult HistogramNormalize(_Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ������׷� ��Ȱȭ �˰����� �մϴ�.
			*
			* param[out] pVctResult : ��Ȱȭ�� �м� ��� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult HistogramEqualize(_Out_ std::vector<Framework::CMultipleVariable>* pVctResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� 0���� 255 ������ ������ ��ȯ �˰����� �մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Stretch(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� 0���� 255 ������ ������ ��ȯ �˰����� �մϴ�.
			* ä���� 1���� ��쿡 �����մϴ�.
			*
			* param[in_opt] rmvMinMax1 : �ּ�, �ִ� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� 0���� 255 ������ ������ ��ȯ �˰����� �մϴ�.
			* ä���� 2���� ��쿡 �����մϴ�.
			*
			* param[in_opt] rmvMinMax1 : ä��1 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax2 : ä��2 �ּ�, �ִ� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� 0���� 255 ������ ������ ��ȯ �˰����� �մϴ�.
			* ä���� 3���� ��쿡 �����մϴ�.
			*
			* param[in_opt] rmvMinMax1 : ä��1 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax2 : ä��2 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax3 : ä��3 �ּ�, �ִ� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ Framework::CMultipleVariable rmvMinMax3, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� 0���� 255 ������ ������ ��ȯ �˰����� �մϴ�.
			* ä���� 4���� ��쿡 �����մϴ�.
			*
			* param[in_opt] rmvMinMax1 : ä��1 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax2 : ä��2 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax3 : ä��3 �ּ�, �ִ� ��
			* param[in_opt] rmvMinMax4 : ä��4 �ּ�, �ִ� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Stretch(_In_opt_ Framework::CMultipleVariable rmvMinMax1, _In_opt_ Framework::CMultipleVariable rmvMinMax2, _In_opt_ Framework::CMultipleVariable rmvMinMax3, _In_opt_ Framework::CMultipleVariable rmvMinMax4, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� ����ȭ �˰����� �����մϴ�.
			*
			* param[in] rmvtThreshold : ����ȭ ��
			* param[in_opt] rmvnCondition : ����ȭ ���� ���
			* param[in_opt] rmvtRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvtOutOfRangeFillValue : ���� �� ���� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] eLogicalOperator : ���� ä���� ������ ó�� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SingleThreshold(_In_ Framework::CMultipleVariable rmvtThreshold, _In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ CRavidImage::EThresholdLogicalOperator eLogicalOperator = EThresholdLogicalOperator_None);
			
			/**
			* �Է� ������ ���� �̹����� ���� ���� ����ȭ �˰����� �����մϴ�.
			*
			* param[in] rmvtLowThreshold : ����ȭ ���� ��
			* param[in] rmvtHighThreshold : ����ȭ ���� ��
			* param[in_opt] rmvtRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvtLesserThanLowFillValue : ���� ���� �� ���� ��
			* param[in_opt] rmvtGreaterThanHighFillValue : ���� ���� �� ���� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult DoubleThreshold(_In_ Framework::CMultipleVariable rmvtLowThreshold, _In_ Framework::CMultipleVariable rmvtHighThreshold, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtLesserThanLowFillValue = EImageDepthRange_Min, _In_opt_ Framework::CMultipleVariable rmvtGreaterThanHighFillValue = EImageDepthRange_Min, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� Otsu �˰����� ����ȭ ���� ����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : CMultipleVariable �� ��� ���� ��ȯ�մϴ�.
			*/
			_Out_ Framework::CMultipleVariable GetOtsuThreshold(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� Otsu �˰����� �����մϴ�.
			*
			* param[in_opt] rmvnCondition : ����ȭ ���� ���
			* param[in_opt] rmvtRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvtOutOfRangeFillValue : ���� �� ���� ��
			* param[out_opt] pOutThreshold : Otsu �˰����� ����ȭ ��� �� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult OtsuThreshold(_In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� ������ ����ȭ �˰����� �����մϴ�.
			*
			* param[in_opt] eATT : ����ȭ ó�� �� ���� ����
			* param[in_opt] eATM : ����ȭ ó�� �� ����
			* param[in_opt] rmvMaxValue : ���� �� ���� ��
			* param[in_opt] nBlockSize : ó�� �� ũ��
			* param[in_opt] rmvConstant : ����ȭ ���� ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult AdaptiveThreshold(_In_opt_ EAdaptiveThresholdType eATT = EAdaptiveThresholdType::EAdaptiveThresholdType_Binary, _In_opt_ EAdaptiveThresholdMethod eATM = EAdaptiveThresholdMethod::EAdaptiveThresholdMethod_Mean, _In_opt_ Framework::CMultipleVariable rmvMaxValue = 255, _In_opt_ int nBlockSize = 3, _In_opt_ Framework::CMultipleVariable rmvConstant = 10.0, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� Isodata ����ȭ �˰����� ���� ����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : CMultipleVariable �� ��� ���� ��ȯ�մϴ�.
			*/
			_Out_ Framework::CMultipleVariable GetIsodataThreshold(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� Isodata ����ȭ �˰����� �����մϴ�.
			*
			* param[in_opt] rmcCondition : ����ȭ ���� ���
			* param[in_opt] rmvRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvOutOfRangeFillValue : ���� �� ���� ��
			* param[out_opt] pOutThreshold : �˰����� ����ȭ ��� �� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult IsodataThreshold(_In_opt_ Framework::CMultipleCondition rmcCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry *pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� MaximumEntropy ����ȭ �˰����� ���� ����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : CMultipleVariable �� ��� ���� ��ȯ�մϴ�.
			*/
			_Out_ Framework::CMultipleVariable GetMaximumEntropyThreshold(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� MaximumEntropy ����ȭ �˰����� �����մϴ�.
			*
			* param[in_opt] rmcCondition : ����ȭ ���� ���
			* param[in_opt] rmvRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvOutOfRangeFillValue : ���� �� ���� ��
			* param[out_opt] pOutThreshold : �˰����� ����ȭ ��� �� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MaximumEntropyThreshold(_In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* FFT ��ȯ �� ������ �����ɴϴ�.
			*
			* return value : sFFTInfo* �� FFT ��ȯ �� ������ ��ȯ�մϴ�.
			*/
			sFFTInfo* GetFFTInfo();
			
			/**
			* �Է� ������ ���� �̹����� FFT �˰����� �����մϴ�.
			*
			* param[in_opt] eFFTMethod : FFT ó�� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult FFT(_In_opt_ EFFTMethod eFFTMethod = EFFTMethod_ForwardFloatShift, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� Morphology �˰����� �����մϴ�.
			*
			* param[in] nHalfWidth : ��� ���� ���� (���� ũ��)
			* param[in] nHalfHeight : ��� ���� ���� (���� ũ��)
			* param[in_opt] eMorphologyMethod : �������� ���� ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Morphology(_In_ int nHalfWidth, _In_ int nHalfHeight, _In_opt_ EMorphologyMethod eMorphologyMethod = EMorphologyMethod_Erode, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ּҰ��� ã���ϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMin(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ּҰ��� ã���ϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMin(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ִ밪�� ã���ϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMax(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ִ밪�� ã���ϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMax(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ּ�, �ִ밪�� ã���ϴ�.
			*
			* param[out] RmvMinResult : �ּ� ��� ��
			* param[out] RmvMaxResult : �ִ� ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinMax(_Out_ Framework::CMultipleVariable& RmvMinResult, _Out_ Framework::CMultipleVariable& RmvMaxResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �ּ�, �ִ밪�� ã���ϴ�.
			*
			* param[out] pRmvMinResult : �ּ� ��� ��
			* param[out] pRmvMaxResult : �ִ� ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinMax(_Out_ Framework::CMultipleVariable* pRmvMinResult, _Out_ Framework::CMultipleVariable* pRmvMaxResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ��հ��� ã���ϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMean(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ��հ��� ã���ϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMean(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetSum(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetSum(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �߾Ӱ��� ã���ϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMedian(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �߾Ӱ��� ã���ϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMedian(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �л��� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetVariance(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �л��� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetVariance(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ǥ�������� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetStandardDeviation(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ǥ�������� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetStandardDeviation(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���л��� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCovariance(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���л��� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCovariance(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �������� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCorrelationCoefficient(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �������� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCorrelationCoefficient(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �������� ����մϴ�.
			*
			* param[out] rmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetSumSqr(_Out_ Framework::CMultipleVariable& rmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �������� ����մϴ�.
			*
			* param[out] pRmvResult : ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetSumSqr(_Out_ Framework::CMultipleVariable* pRmvResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, �л��� ����մϴ�.
			*
			* param[out] rmvMeanResult : ��� ��� ��
			* param[out] pRmvVarianceResult : �л� ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanVar(_Out_ Framework::CMultipleVariable& rmvMeanResult, _Out_ Framework::CMultipleVariable& pRmvVarianceResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, �л��� ����մϴ�.
			*
			* param[out] pRmvMeanResult : ��� ��� ��
			* param[out] pRmvVarianceResult : �л� ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanVar(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* pRmvVarianceResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, ǥ�������� ����մϴ�.
			*
			* param[out] RmvMeanResult : ��� ��� ��
			* param[out] RmvStandardDeviationResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanStDev(_Out_ Framework::CMultipleVariable& RmvMeanResult, _Out_ Framework::CMultipleVariable& RmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, ǥ�������� ����մϴ�.
			*
			* param[out] pRmvMeanResult : ��� ��� ��
			* param[out] pRmvVarianceResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanStDev(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, �л�, ǥ�������� ����մϴ�.
			*
			* param[out] rmvMeanResult : ��� ��� ��
			* param[out] rmvVarianceResult : �л� ��� ��
			* param[out] pRmvStandardDeviationResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanVarStDev(_Out_ Framework::CMultipleVariable& rmvMeanResult, _Out_ Framework::CMultipleVariable& rmvVarianceResult, _Out_ Framework::CMultipleVariable& pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� ���, �л�, ǥ�������� ����մϴ�.
			*
			* param[out] pRmvMeanResult : ��� ��� ��
			* param[out] rmvVarianceResult : �л� ��� ��
			* param[out] pRmvStandardDeviationResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMeanVarStDev(_Out_ Framework::CMultipleVariable* pRmvMeanResult, _Out_ Framework::CMultipleVariable* rmvVarianceResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �л�, ǥ�������� ����մϴ�.
			*
			* param[out] RmvVarianceResult : �л� ��� ��
			* param[out] RmvStandardDeviationResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetVarStDev(_Out_ Framework::CMultipleVariable& RmvVarianceResult, _Out_ Framework::CMultipleVariable& RmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� �л�, ǥ�������� ����մϴ�.
			*
			* param[out] pRmvVarianceResult : �л� ��� ��
			* param[out] pRmvStandardDeviationResult : ǥ������ ��� ��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetVarStDev(_Out_ Framework::CMultipleVariable* pRmvVarianceResult, _Out_ Framework::CMultipleVariable* pRmvStandardDeviationResult, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� 32 bit ���� ���� �̹����� �����մϴ�.
			* ������ ���ڰ� nullptr �̸� ���� �̹����� �����մϴ�.
			*
			* param[in_opt] dblQuadricCoefficient : 2�� ���
			* param[in_opt] dblLinear : 1�� ���
			* param[in_opt] dblConstant : ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] pTargetImgInfo : ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MakeIntegralTypeInt32(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� 64 bit ���� ���� �̹����� �����մϴ�.
			* ������ ���ڰ� nullptr �̸� ���� �̹����� �����մϴ�.
			*
			* param[in_opt] dblQuadricCoefficient : 2�� ���
			* param[in_opt] dblLinear : 1�� ���
			* param[in_opt] dblConstant : ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] pTargetImgInfo : ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MakeIntegralTypeInt64(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� 32 bit �Ҽ� ���� �̹����� �����մϴ�.
			* ������ ���ڰ� nullptr �̸� ���� �̹����� �����մϴ�.
			*
			* param[in_opt] dblQuadricCoefficient : 2�� ���
			* param[in_opt] dblLinear : 1�� ���
			* param[in_opt] dblConstant : ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] pTargetImgInfo : ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MakeIntegralTypeFloat(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);
			
			/**
			* �Է� ������ ���� �̹������� 64 bit �Ҽ� ���� �̹����� �����մϴ�.
			* ������ ���ڰ� nullptr �̸� ���� �̹����� �����մϴ�.
			*
			* param[in_opt] dblQuadricCoefficient : 2�� ���
			* param[in_opt] dblLinear : 1�� ���
			* param[in_opt] dblConstant : ���
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] pTargetImgInfo : ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MakeIntegralTypeDouble(_In_opt_ double dblQuadricCoefficient = 0, _In_opt_ double dblLinear = 1, _In_opt_ double dblConstant = 0, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Ravid::Algorithms::CRavidImage* pTargetImgInfo = nullptr);
			
			/**
			* ���� �̹����� ����ȭ �˰����� �����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Normalize(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹����� ��Ȱȭ �˰����� �����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Equalize(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹����� ������ ��Ȱȭ �˰����� �����մϴ�.
			* 8 bit 1ch �� �����մϴ�.
			*
			* param[in_opt] ui32DirectionX : ���� ���� ���� ��
			* param[in_opt] ui32DirectionY : ���� ���� ���� ��
			* param[in_opt] i32Min : �ּ� ������ ��
			* param[in_opt] i32Max : �ִ� ������ ��
			* param[in_opt] f32ClipLimit : ������׷� ������ ũ�� ����
			* param[in_opt] ui32Bin : ������׷� ���� (1 ~ 256)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult AdaptiveEqualize(_In_opt_ uint32_t ui32DirectionX = 4, _In_opt_ uint32_t ui32DirectionY = 4, _In_opt_ int32_t i32Min = 0, _In_opt_ int32_t i32Max = 255, _In_opt_ float f32ClipLimit = 0.4, _In_opt_ uint32_t ui32Bin = 256, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹����� ��Ȱȭ �˰����� �����մϴ�.
			*
			* param[in_opt] eDepth : ��ȯ �� �ȼ� ���� ����
			* param[in_opt] eValueMode : ��ȯ �� ������ ��ȯ ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertDepth(_In_ EConvertDepth eDepth, _In_opt_ EConvertDepthValueMode eValueMode = EConvertDepthValueMode_ChangeValue);
			
			/**
			* ���� �̹����� ������ ������ ���� �����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult InvertValue(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹������� ���Ʈ�� ����մϴ�.
			*
			* param[in] p : ���� ����
			* param[in] q : ���� ����
			* param[out] r : ��� �� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetGeometricMoments(_In_ unsigned int p, _In_ unsigned int q, _Out_ double* r, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹������� ���Ʈ �Һ����� ����մϴ�.
			*
			* param[out] vctMoments : ��� �� ����Ʈ (Reference)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetInvariantMoments(_Out_ std::vector<double>& vctMoments, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� �����ͷ� ���Ʈ �Һ����� ����մϴ�.
			* ���� ���� ���ذ� ���� ��� ����մϴ�.
			*
			* param[in] M00 : �̹��� ��ü �� �Է�
			* param[in] M01 : �̹��� ���� 1�� �ؼ�
			* param[in] M02 : �̹��� ���� 2�� �ؼ�
			* param[in] M03 : �̹��� ���� 3�� �ؼ�
			* param[in] M10 : �̹��� ���� 1�� �ؼ�
			* param[in] M11 : �̹��� ���� 1�� ���� 1�� �ؼ�
			* param[in] M12 : �̹��� ���� 2�� ���� 1�� �ؼ�
			* param[in] M20 : �̹��� ���� 2�� �ؼ�
			* param[in] M21 : �̹��� ���� 1�� ���� 2�� �ؼ�
			* param[in] M30 : �̹��� ���� 3�� �ؼ�
			* param[out] vctMoments : ��� �� ����Ʈ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetInvariantMoments(_In_ double M00, _In_ double M01, _In_ double M02, _In_ double M03,_In_ double M10, _In_ double M11, _In_ double M12, _In_ double M20, _In_ double M21, _In_ double M30, _Out_ std::vector<double>& vctMoments);
			
			/**
			* ���� �̹������� Zernike ���Ʈ �Һ����� ����մϴ�.
			*
			* param[in] nOrder : ���Ʈ ���� �� �Է�
			* param[out] vctMoments : ��� �� ����Ʈ (Reference)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetZernikeMoment( _In_ int nOrder, _Out_ std::vector<std::complex<double>>& vctMoments, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹������� PseudoZernike ���Ʈ �Һ����� ����մϴ�.
			*
			* param[in] nOrder : ���Ʈ ���� �� �Է�
			* param[out] vctMoments : ��� �� ����Ʈ (Reference)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetPseudoZernikeMoment(_In_ int nOrder, _Out_ std::vector<std::complex<double>>& vctMoments, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹����� ����ȭ �̹������� Ȯ���մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : bool �� ����ȭ ���θ� ��ȯ�մϴ�.
			*/
			bool IsMonoImage(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �̹����� ��ȣ�� ������ �����ͷ� ��ȯ�մϴ�.
			*
			* param[in_opt] bSigned : ��ȣ ����
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			bool SetSigned(_In_opt_ bool bSigned = false);
			
			/**
			* ���� �̹����� ��ȣ�� ������ ���������� Ȯ���մϴ�.
			*
			* return value : bool �� ��ȣ�� ������ ������ ���θ� ��ȯ�մϴ�.
			*/
			bool IsSigned();
			
			/**
			* YUV422 ���� �̹����� 3ä�� RGB �̹����� ��ȯ�մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ConvertYUV422ToRGB();
			
			/**
			* YUV422 ���� �̹����� 3ä�� RGB �̹����� ��ȯ�մϴ�.
			*
			* param[in_opt] pImgInfoSrcYUV422 : �Է� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CopyYUV422ToRGB(_In_ CRavidImage* pImgInfoSrcYUV422);
			
			/**
			* ���� �̹������� Ư�� ä�θ� �����Ͽ� �����մϴ�.
			*
			* param[in_opt] nChannelNumber : ������ ä��
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			* param[in_opt] mvFillValue : �� ������ ä�� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ExtractChannelComponent(_In_ int nChannelNumber, _In_opt_ CRavidGeometry* pGeometry = nullptr, _In_opt_ Framework::CMultipleVariable mvFillValue = 0);
	
			/**
			* �Է� ������ ���� �̹����� MinimumEntropy ����ȭ �˰����� ���� ����մϴ�.
			*
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : CMultipleVariable �� ��� ���� ��ȯ�մϴ�.
			*/
			_Out_ Framework::CMultipleVariable GetMinimumEntropyThreshold(_In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Է� ������ ���� �̹����� MinimumEntropy ����ȭ �˰����� �����մϴ�.
			*
			* param[in_opt] rmcCondition : ����ȭ ���� ���
			* param[in_opt] rmvRangeFillValue : ���� �� ���� ��
			* param[in_opt] rmvOutOfRangeFillValue : ���� �� ���� ��
			* param[out_opt] pOutThreshold : �˰����� ����ȭ ��� �� (Pointer)
			* param[in_opt] pGeometry : ���� ���� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult MinimumEntropyThreshold(_In_opt_ Framework::CMultipleCondition rmvnCondition = ELogicalCondition_GreaterEqual, _In_opt_ Framework::CMultipleVariable rmvtRangeFillValue = EImageDepthRange_Max, _In_opt_ Framework::CMultipleVariable rmvtOutOfRangeFillValue = EImageDepthRange_Min, _Out_opt_ Framework::CMultipleVariable* pOutThreshold = nullptr, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
		private:

			void Init();
			void Clean();

			bool SetFFTInfo(_In_ sFFTInfo* pFFTOrginInfo);

			int CalculatePixelSizeByte(_In_opt_ int nChannels = 0, _In_opt_ int nDepth = 0);
			int CalculateWidthStep(_In_ ptrdiff_t nSizeX, _In_ int nPixelSizeByte, _In_ int nAlignBytes);

			bool CreateOffsetTable();
			bool ConfigurateIplImage();

			CInternalRavidImage* m_pInternal = nullptr;
		};
	}
}