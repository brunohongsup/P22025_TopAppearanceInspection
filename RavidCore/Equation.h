#pragma once

#include <complex>
#include <vector>
#include <type_traits>

namespace Ravid
{
	namespace Mathematics
	{
		/**
		* ȸ�� �м��ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CEquation : public CRavidObject
		{
		public:
			RavidPreventCopySelf(CEquation);

			CEquation() = delete;
			virtual ~CEquation();
			
			/**
			* 2���� �����͸� �̿��Ͽ� 1�� �������� ����մϴ�.
			*
			* param[in] cpxA : 1��° ������
			* param[in] cpxB : 2��° ������
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult LinearEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _Out_ std::complex<double>* pResult);

			/**
			* 3���� �����͸� �̿��Ͽ� 2�� �������� ����մϴ�.
			*
			* param[in] cpxA : 1��° ������
			* param[in] cpxB : 2��° ������
			* param[in] cpxC : 3��° ������
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult QuadraticEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _Out_ std::vector<std::complex<double> >* pResult);

			/**
			* 4���� �����͸� �̿��Ͽ� 3�� �������� ����մϴ�.
			*
			* param[in] cpxA : 1��° ������
			* param[in] cpxB : 2��° ������
			* param[in] cpxC : 3��° ������
			* param[in] cpxD : 4��° ������
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult CubicEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _In_ std::complex<double> cpxD, _Out_ std::vector<std::complex<double> >* pResult);

			/**
			* 5���� �����͸� �̿��Ͽ� 4�� �������� ����մϴ�.
			*
			* param[in] cpxA : 1��° ������
			* param[in] cpxB : 2��° ������
			* param[in] cpxC : 3��° ������
			* param[in] cpxD : 4��° ������
			* param[in] cpxE : 5��° ������
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult QuarticEquation(_In_ std::complex<double> cpxA, _In_ std::complex<double> cpxB, _In_ std::complex<double> cpxC, _In_ std::complex<double> cpxD, _In_ std::complex<double> cpxE, _Out_ std::vector<std::complex<double> >* pResult);

			/**
			* N���� �����͸� �̿��Ͽ� (N-1)�� �������� ����մϴ�.
			*
			* param[in] vctCoef : n ���� ������
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult NDegreeEquation(_In_ std::vector<double> vctCoef, _Out_ std::vector<double>* pResult);

			/**
			* N���� �����͸� �̿��Ͽ� (N-1)�� �������� ����մϴ�.
			*
			* param[in] vctCpx : n ���� ������ (Pointer)
			* param[out] pResult : ��� (Pointer)
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			static Ravid::Algorithms::EAlgorithmResult NDegreeEquation(_In_ std::vector<std::complex<double> > vctCpx, _Out_ std::vector<std::complex<double> >* pResult);
		};
	}
}

