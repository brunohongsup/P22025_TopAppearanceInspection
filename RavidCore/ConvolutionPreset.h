#pragma once

namespace Ravid
{
	namespace Mathematics
	{
		class CMatrix;
	}

	namespace Algorithms
	{
		/**
		* ������ǿ��� ����ϱ� ���� ���μ��̵� ����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CConvolutionPreset : public CRavidObject
		{
		public:
			/**
			* Ŀ�� �����Դϴ�.
			*/
			enum EKernelType
			{
				EKernelType_Uniform3x3 = 0,	//3 by 3 ����
				EKernelType_Uniform5x5,		//5 by 5 ����
				EKernelType_Uniform7x7,		//7 by 7 ����
				EKernelType_UniformNxN,		//N by N ����
				
				EKernelType_Gaussian3x3,	//3 by 3 ����
				EKernelType_Gaussian5x5,	//5 by 5 ����
				EKernelType_Gaussian7x7,	//7 by 7 ����
				EKernelType_GaussianNxN,	//N by N ����

				EKernelType_Sharpen,		//3 by 3 ����

				EKernelType_LowPass1,		//3 by 3 ����
				EKernelType_LowPass2,		//3 by 3 ����
				EKernelType_LowPass3,		//3 by 3 ����

				EKernelType_HighPass1,		//3 by 3 ����
				EKernelType_HighPass2,		//3 by 3 ����

				EKernelType_GradientX,		//3 by 3 ����
				EKernelType_GradientY,		//3 by 3 ����

				EKernelType_SobelX,			//3 by 3 ����
				EKernelType_SobelY,			//3 by 3 ����

				EKernelType_PrewittX,		//3 by 3 ����
				EKernelType_PrewittY,		//3 by 3 ����

				EKernelType_LaplacianX,		//3 by 3 ����
				EKernelType_LaplacianY,		//3 by 3 ����

				EKernelType_Laplacian4,		//3 by 3 ����
				EKernelType_Laplacian8,		//3 by 3 ����

				EKernelType_CompassN,		//3 by 3 ����
				EKernelType_CompassNW,		//3 by 3 ����
				EKernelType_CompassW,		//3 by 3 ����
				EKernelType_CompassSW,		//3 by 3 ����
				EKernelType_CompassS,		//3 by 3 ����
				EKernelType_CompassSE,		//3 by 3 ����
				EKernelType_CompassE,		//3 by 3 ����
				EKernelType_CompassNE,		//3 by 3 ����
			};

			CConvolutionPreset();
			virtual ~CConvolutionPreset();
			
			/**
			* �Էµ� Ŀ�� ������ ����Ͽ� ��Ʈ������ ����մϴ�.
			*
			* param[in] eKT : EKernelType enum ���� ���� ��� �� �� ���� ����� �����մϴ�. Ŀ�� ������ �����ϼ���.
			* param[out] m : CMatrix �� ���·� �Է� Ŀ�ο� ���� ��Ʈ���� ���� �����ɴϴ�. (Pointer)
			* param[in_opt] nRow : Ŀ���� �� �� (����)
			* param[in_opt] nCol : Ŀ���� �� �� (����)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetKernel(_In_ EKernelType eKT, _Out_ Ravid::Mathematics::CMatrix& m, _In_opt_ int nRow = 3, _In_opt_ int nCol = 3);
		};
	}
}

