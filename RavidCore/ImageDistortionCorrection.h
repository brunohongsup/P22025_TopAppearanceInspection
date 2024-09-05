#pragma once

#include "RavidImage.h"
#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalImageDistortionCorrection;
		
		/**
		* �̹����� �ְ� ������ �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CImageDistortionCorrection : public CRavidObject
		{
		public:
			CImageDistortionCorrection();
			virtual ~CImageDistortionCorrection();

			RavidPreventCopySelf(CImageDistortionCorrection);
			
			/**
			* Image Distortion ������ �����մϴ�.
			*
			* param[in] strFile : ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Save(_In_ std::wstring strFile);
			
			/**
			* Image Distortion ������ �о�ɴϴ�.
			*
			* param[in] strFile : ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Load(_In_ std::wstring strFile);
			
			/**
			* �˰����� �����մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Encode();
						
			/**
			* ������ ��� ������ �ʱ�ȭ �մϴ�.
			*/
			void Clear();

			/**
			* �̹��� ��ġ, ���� ��ġ �� ������ �����մϴ�.
			* �Է� ������ ���� (���� ���� ���)
			* ������ ������ Row, Col ��� Ȧ�������� ����
			* �������� �߾Ӱ� �̹����� �߾��� ���� ����� �����Ϳ����Ѵ�.
			*
			* param[in] vctImageData : �̹����� Grid ��ġ ���� (Reference)
			* param[in] vctRealData : ���� Grid ��ġ ���� (Reference)
			* param[in] nImageSizeX : �̹��� ���� ũ��
			* param[in] nImageSizeY : �̹��� ���� ũ��
			* param[in] nImageWidthStep : �̹��� ���� ���� �� ���� ������ ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetCorrectData(_In_ std::vector<std::vector<CRavidPoint<double>>> &vctImageData, _In_ std::vector<std::vector<CRavidPoint<double>>> &vctRealData, _In_ int nImageSizeX, _In_ int nImageSizeY, _In_ int nImageWidthStep);
			
			/**
			* ������ �̹��� ��ġ, ���� ��ġ �� ������ �����ɴϴ�.
			*
			* param[out] pResImagePos : �̹����� Grid ��ġ ���� (Pointer)
			* param[out] pResRealPos : ���� Grid ��ġ ���� (Pointer)
			* param[out] pImageSizeX : �̹��� ���� ũ�� (Pointer)
			* param[out] pImageSizeY : �̹��� ���� ũ�� (Pointer)
			* param[out] pImageWidthStep : �̹��� ���� ���� �� ���� ������ �� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCorrectData(_Out_ std::vector<std::vector<CRavidPoint<double>>> *pResImagePos, _Out_ std::vector<std::vector<CRavidPoint<double>>> *pResRealPos, _Out_opt_ int *pImageSizeX = nullptr, _Out_opt_ int *pImageSizeY = nullptr, _Out_opt_ int *pImageWidthStep = nullptr);
			
			/**
			* �׸��� �ܰ� ������ ������ ������ ���� �����۾� ���� ���θ� �����մϴ�.
			* ���� �����͵��� ��ȭ ������ Ȯ���ϴµ�, �߾����κ��� �� ���� �����͵��� ��ȭ���� �������� ����(�߾Ӻκ��� �ְ��� ���� ��� ��ȭ���� �������� �ʰ� ���׹����� �Ǿ� ���� �����Ϳ� �ǿ����� ��ġ�� ��찡 �߻��� �� ����)
			* Min(0) -> ��ü Ȱ��
			* Max(DataHalfCount-1) -> �߽� �����Ϳ� �ֿܰ� �����͸� Ȱ��
			*
			* param[inopt] bOutsideCorrection : �׸��� �ܰ� ������ ������ ������ ���� �����۾� ���� ����
			* param[inopt] nUsedCenterCountRowData : ���� �����͵��� ��ȭ ������ Ȯ���Ͽ� ���� ������ Row
			* param[inopt] nUsedCenterCountColData : ���� �����͵��� ��ȭ ������ Ȯ���Ͽ� ���� ������ Col
			*/
			void SetConjectureOutsideData(_In_opt_ bool bOutsideCorrection = true, _In_opt_ int nUsedCenterCountRowData = 0, _In_opt_ int nUsedCenterCountColData = 0);
			
			/**
			* ������ �׸��� �ܰ� ������ ������ ������ ���� �����۾� ���� ���θ� �����ɴϴ�.
			*
			* param[outopt] pOutsideCorrection : �׸��� �ܰ� ������ ������ ������ ���� �����۾� ���� ����
			* param[outopt] pUsedCenterCountRowData : ���� �����͵��� ��ȭ ������ Ȯ���Ͽ� ���� ������ Row
			* param[outopt] pUsedCenterCountColData : ���� �����͵��� ��ȭ ������ Ȯ���Ͽ� ���� ������ Col
			*/
			void GetConjectureOutsideData(_Out_opt_ bool *pOutsideCorrection = nullptr, _Out_opt_ int *pUsedCenterCountRowData = nullptr, _Out_opt_ int *pUsedCenterCountColData = nullptr);
				
			/**
			* Ķ���극�̼� ���� ������ Ȯ���մϴ�.
			*
			* return value : �������� ������ false �� ��ȯ�մϴ�.
			*/
			bool IsValidCorrectData();

			/**
			* �Էµ� �̹����� �ְ� �����մϴ�.
			* �̹��� �ְ� ���� (unsigned 8,16,32,64Bit, 4Channels ����)
			*
			* param[in] pSrcImage : �Է� ���� �̹��� (Pointer)
			* param[out] pDstImage : ��� ��� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ImageCorrection(_In_ CRavidImage* pSrcImage, _Out_ CRavidImage *pDstImage);
			
			/**
			* �Էµ� �̹����� �ְ� �����մϴ�.
			* �̹��� �ְ� ���� (unsigned 8,16,32,64Bit, 4Channels ����)
			*
			* param[in] refSrcImage : �Է� ���� �̹��� (Reference)
			* param[out] refDstImage : ��� ��� �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ImageCorrection(_In_ CRavidImage &refSrcImage, _Out_ CRavidImage &refDstImage);

			/**
			* �Էµ� ��ǥ�� ������ ��ǥ�� ��ȯ
			* �ְ� ������ ����Ͽ� Image2Real or Real2Image ��ǥ�� ��ȯ
			*
			* param[in] refSrcImage : ���� ��ǥ (Reference)
			* param[out] pDstGeometry : ���� ��ǥ (Pointer)
			* param[inopt] bReal2Image : ����ǥ�� �̹�����ǥ Ȥ�� �̹��� ��ǥ�� ����ǥ�� ���� (Default = false)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult PointCorrection(_In_ CRavidPoint<double>& refSrcGeometry, _Out_ CRavidPoint<double>* pDstGeometry, _In_opt_ bool bReal2Image = false);

			/**
			* �Էµ� ��ǥ�� ������ ��ǥ�� ��ȯ
			* �ְ� ������ ����Ͽ� Image2Real or Real2Image ��ǥ�� ��ȯ
			*
			* param[in] pSrcGeometry : ���� ��ǥ (Pointer)
			* param[out] pDstGeometry : ���� ��ǥ (Pointer)
			* param[inopt] bReal2Image : ����ǥ�� �̹�����ǥ Ȥ�� �̹��� ��ǥ�� ����ǥ�� ���� (Default = false)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult PointCorrection(_In_ CRavidPoint<double>* pSrcGeometry, _Out_ CRavidPoint<double>* pDstGeometry, _In_opt_ bool bReal2Image = false);

			/**
			* �Էµ� ��ǥ�� ������ ��ǥ�� ��ȯ
			* �ְ� ������ ����Ͽ� Image2Real or Real2Image ��ǥ�� ��ȯ
			*
			* param[in] x : ���� x ��ǥ
			* param[in] y : ���� y ��ǥ
			* param[out] pDstGeometry : ���� ��ǥ (Pointer)
			* param[inopt] bReal2Image : ����ǥ�� �̹�����ǥ Ȥ�� �̹��� ��ǥ�� ����ǥ�� ���� (Default = false)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult PointCorrection(_In_ double x, _In_ double y, _Out_ CRavidPoint<double>* pDstGeometry, _In_opt_ bool bReal2Image = false);

			/**
			* �Էµ� ��ǥ�� ������ ��ǥ�� ��ȯ
			* �ְ� ������ ����Ͽ� Image2Real or Real2Image ��ǥ�� ��ȯ
			*
			* param[in] x : ���� x ��ǥ
			* param[in] y : ���� y ��ǥ
			* param[out] x : ���� x ��ǥ (Pointer)
			* param[out] y : ���� y ��ǥ (Pointer)
			* param[inopt] bReal2Image : ����ǥ�� �̹�����ǥ Ȥ�� �̹��� ��ǥ�� ����ǥ�� ���� (Default = false)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult PointCorrection(_In_ double x, _In_ double y, _Out_ double* pResX, _Out_ double* pResY, _In_opt_ bool bReal2Image = false);
						
		private:
			CInternalImageDistortionCorrection* m_pInternal = nullptr;
		};
	}
}