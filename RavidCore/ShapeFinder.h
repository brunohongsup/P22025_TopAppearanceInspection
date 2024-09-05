#pragma once

#include "RavidRect.h"

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalShapeFinder;
		/**
		* �̹����� Ư¡���� �̿��Ͽ� ��ǥ���� ã�� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CShapeFinder : public CRavidObject
		{
		public:
			CShapeFinder();
			virtual ~CShapeFinder();

			RavidPreventCopySelf(CShapeFinder);
			
			/**
			* ã�� ��� ����ü�Դϴ�.
			*/
			typedef struct _sShapeFinderResult
			{
				float fScore;
				float fAngle;
				float fScale;
				CRavidRect<double> rrRegion;

			} SShapeFinderResult;
			
			/**
			* �н� �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Learn(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* Ž�� �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] refVctResults : Ž�� ��� ����Ʈ (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Find(_In_ CRavidImage* pImgInfo, _Out_ std::vector<SShapeFinderResult>& refVctResults, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �Էµ� ������ Ư¡���� ����մϴ�.
			*
			* param[in] fAngleDegree : ȸ�� ����
			* param[in] fScale : ������
			* param[out] vctFeaturePoints : Ư¡�� ��ǥ ����Ʈ ��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetModelFeaturePoints(_In_ float fAngleDegree, _In_ float fScale, _Out_ std::vector<CRavidPoint<float>>& vctFeaturePoints);
			
			/**
			* �н� �� �˻翡 ���� �̹��� ���� ���� ��ȯ�մϴ�.
			*
			* return value : int Ÿ���� �̹��� ���� ���� ��ȯ�մϴ�.
			*/
			int			     GetModelLevelNumber() const;
			
			/**
			* �н� �Ϸ� ���θ� �Ǵ��մϴ�.
			*
			* return value : bool Ÿ���� �н� �Ϸ� ���θ� ��ȯ�մϴ�.
			*/
			bool			 GetLearningDone() const;		

			/**
			* �н� ���� ������ �����մϴ�.
			*
			* param[in] strModelFile : ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Save(_In_ std::wstring strModelFile);
			
			/**
			* �н� ���� ������ �о�ɴϴ�.
			*
			* param[in] strModelFile : �ε� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Load(_In_ std::wstring strModelFile);
			
			/**
			* ã�� ��ǥ ��ü ���� �����մϴ�.
			*
			* param[in] nInstanceNumber : ��ü�� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetInstanceNumber(_In_ int nInstanceNumber);
			
			/**
			* ������ ã�� ��ǥ ��ü ���� �����ɴϴ�.
			*
			* return value : int Ÿ���� ã�� ��ǥ ��ü ���� ��ȯ�մϴ�.
			*/
			int				 GetInstanceNumber() const;
			
			/**
			* ã�� ��ü�� ���� ������ �����մϴ�.
			*
			* param[in] fAngleDegreeStart : ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetAngleStart(_In_ float fAngleDegreeStart);
			
			/**
			* ������ ã�� ��ü�� ���� ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� ���� ������ ��ȯ�մϴ�.
			*/
			float			 GetAngleStart() const;
			
			/**
			* ã�� ��ü�� �� ������ �����մϴ�.
			*
			* param[in] fAngleDegreeEnd : �� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetAngleEnd(_In_ float fAngleDegreeEnd);
			
			/**
			* ������ ã�� ��ü�� �� ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� �� ������ ��ȯ�մϴ�.
			*/
			float			 GetAngleEnd() const;
			
			/**
			* ã�� ��ü�� �ּ� ũ�⸦ �����մϴ�.
			*
			* param[in] fScaleMin : �ּ� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetScaleMin(_In_ float fScaleMin);
			
			/**
			* ������ ã�� ��ü�� �ּ� ũ�⸦ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� �ּ� ũ�⸦ ��ȯ�մϴ�.
			*/
			float			 GetScaleMin() const;
			
			/**
			* ã�� ��ü�� �ִ� ũ�⸦ �����մϴ�.
			*
			* param[in] fScaleMax : �ִ� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetScaleMax(_In_ float fScaleMax);
			
			/**
			* ������ ã�� ��ü�� �ִ� ũ�⸦ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� �ִ� ũ�⸦ ��ȯ�մϴ�.
			*/
			float			 GetScaleMax() const;
			
			/**
			* ã�� ��ü�� �ּ� ���ھ �����մϴ�.
			*
			* param[in] fScaleMax : �ּ� ���ھ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinScore(_In_ float fMinScore);
			
			/**
			* ������ ã�� ��ü�� �ּ� ���ھ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� �ּ� ���ھ ��ȯ�մϴ�.
			*/
			float			 GetMinScore() const;
			
			/**
			* ã�� ��ü�� ��� ������ �����մϴ�.
			*
			* param[in] bInvertedContrast : ��� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetContrast(_In_ bool bInvertedContrast);
			
			/**
			* ������ ã�� ��ü�� ��� ������ �����ɴϴ�.
			*
			* return value : bool Ÿ���� ã�� ��ü�� ��� ������ ��ȯ�մϴ�.
			*/
			bool			 GetContrast() const;
			
			/**
			* ã�� ��ü�� Ȯ�� ���� ũ�⸦ �����մϴ�.
			*
			* param[in] fExtendedArea : Ȯ�� ���� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetExtendedArea(_In_ float fExtendedArea);
			
			/**
			* ������ ã�� ��ü�� Ȯ�� ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� Ȯ�� ���� ũ�⸦ ��ȯ�մϴ�.
			*/
			float			 GetExtendedArea() const;
			
			/**
			* ã�� ��ü�� Ư¡�� ���� �ִ� ���̸� �����մϴ�.
			*
			* param[in] nMaxLevel : Ư¡�� ���� �ִ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxLevel(_In_ int nMaxLevel);
			
			/**
			* ������ ã�� ��ü�� Ư¡�� ���� �ִ� ���̸� �����ɴϴ�.
			*
			* return value : int Ÿ���� ã�� ��ü�� Ư¡�� ���� �ִ� ���̸� ��ȯ�մϴ�.
			*/
			int				 GetMaxLevel() const;
			
			/**
			* ã�� ��ü�� Ư¡�� �ּ� ������ �����մϴ�.
			*
			* param[in] nMaxLevel : Ư¡�� �ּ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinFeaturePoints(_In_ int nMinFeaturePoints);
			
			/**
			* ������ ã�� ��ü�� Ư¡�� �ּ� ������ �����ɴϴ�.
			*
			* return value : int Ÿ���� ã�� ��ü�� Ư¡�� �ּ� ������ ��ȯ�մϴ�.
			*/
			int				 GetMinFeaturePoints() const;
			
			/**
			* ã�� ��ü�� Ư¡�� �ִ� ������ �����մϴ�.
			*
			* param[in] nMaxLevel : Ư¡�� �ִ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxFeaturePoints(_In_ int nMaxFeaturePoints);
			
			/**
			* ������ ã�� ��ü�� Ư¡�� �ִ� ������ �����ɴϴ�.
			*
			* return value : int Ÿ���� ã�� ��ü�� Ư¡�� �ִ� ������ ��ȯ�մϴ�.
			*/
			int				 GetMaxFeaturePoints() const;
			
			/**
			* ã�� ��ü�� Ư¡ ������ �����մϴ�.
			*
			* param[in] fStrength : Ư¡ ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetStrength(_In_ float fStrength);

			/**
			* ������ ã�� ��ü�� Ư¡ ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ã�� ��ü�� Ư¡ ������ ��ȯ�մϴ�.
			*/
			float			 GetStrength() const;
			
			/**
			* ã�� ��ü�� �ڵ� Ư¡ ���� ����� �����մϴ�.
			*
			* param[in] bStrengthModeAuto : �ڵ� Ư¡ ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetStrengthModeAuto(_In_ bool bStrengthModeAuto);

			/**
			* ������ ã�� ��ü�� �ڵ� Ư¡ ���� ����� �����ɴϴ�.
			*
			* return value : bool Ÿ���� ã�� ��ü�� �ڵ� Ư¡ ���� ����� ��ȯ�մϴ�.
			*/
			bool			 GetStrengthModeAuto() const;

			/// MASKING ////
			/**
			* MASKING ����� ���� �߰��� �Լ��Դϴ�.
			* �н� �� �̹����� �����ɴϴ�.
			*
			* param[in] pRiSrc : �н� �̹���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetModelImage(_In_ CRavidImage* pRiSrc) const;
			
			/**
			* MASKING ����� ���� �߰��� �Լ��Դϴ�.
			* �Էµ� ���� ������ Ư¡���� �����մϴ�.
			*
			* param[in] pRegion : Ư¡�� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CleanFeaturePoint(_In_ CRavidGeometryArray* pRegion);
			
			/**
			* MASKING ����� ���� �߰��� �Լ��Դϴ�.
			* ������ Ư¡�� ���·� �����մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult UndoCleanFeaturePoint();

			/**
			* MASKING ����� ���� �߰��� �Լ��Դϴ�.
			* ���� Ư¡�� ���¸� �н� �𵨿� �����մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CommitCleanFeaturePoint();

			/**
			* MASKING ����� ���� �߰��� �Լ��Դϴ�.
			* �ʱ��� Ư¡�� ���·� �����մϴ�.
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult ResetCleanFeaturePoint();

		private:
			CInternalShapeFinder* m_pInternal;
		};

	}
}

