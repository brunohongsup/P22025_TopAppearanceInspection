#pragma once

#include "RavidRect.h"

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalObjectFinder;
		/**
		* �̹����� ȭ�� ���� �̿��Ͽ� ��ǥ���� ã�� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CObjectFinder : public CRavidObject
		{
		public:
			CObjectFinder();
			virtual ~CObjectFinder();

			RavidPreventCopySelf(CObjectFinder);
			
			/**
			* ã�� ��� ����ü�Դϴ�.
			*/
			typedef struct sObjectFinderRt
			{
				float fScore;
				float fAngle;
				float fScale;
				CRavidRect<double> rrResultRegion;
			}
			SObjectFinderResult;
			
			/**
			* �ؼ� ������ �� ������ �ʱ�ȭ �մϴ�. 
			*/
			bool Clear();

			/**
			* �н� �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Learn(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidGeometry* pGeometry = nullptr);

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
			* �н� ������ ������ �ִ��� Ȯ���մϴ�. 
			*
			* return value : bool ���·� ��ȯ�մϴ�.
			*/
			bool IsLearned();
			
			/**
			* Ž�� �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Find(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* Ž�� �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Find(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �м��� ���� �� ����մϴ�.
			* Ž���� ��� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] refVctResults : Ž�� ��� ����Ʈ (Reference)
			*	SObjectFinderResult ����ü�� ���ͷ� ��ȯ
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetResults(_Out_ std::vector<SObjectFinderResult>& refVctResults);

			/**
			* �н� ���� ������ �о�ɴϴ�.
			* The file extension is ".rof"
			*
			* param[in] strPatternFile : �ε� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Load(_In_ std::wstring strPatternFile);

			/**
			* �н� ���� ������ �����մϴ�.
			* The file extension is ".rof"
			*
			* param[in] strPatternFile : ���� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Save(_In_ std::wstring strPatternFile);
			
			/**
			* �н� ���� �̹����� �����ɴϴ�.
			*
			* param[out] strPatternFile : ���� �̹��� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetPatternImage(_Out_ CRavidImage& refPatternImage);
			
			/**
			* �н� ���� �̹����� �����ɴϴ�.
			*
			* param[out] pPatternImage : ���� �̹��� (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetPatternImage(_Out_ CRavidImage* pPatternImage);
			
			/**
			* ã�� ������ �ִ� ������ �����մϴ�.
			*
			* param[in_opt] stMaxInstance : �ִ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxInstance(_In_opt_ size_t stMaxInstance = 1);
			
			/**
			* ã�� ������ �ִ� ������ �����ɴϴ�.
			*
			* return value : size_tŸ���� �ִ� ���� ������ ��ȯ�մϴ�.
			*/
			size_t GetMaxInstance();
			
			/**
			* ã�� ������ �ּ� ���ھ �����մϴ�.
			*
			* param[in_opt] fScore : �ּ� ���ھ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinimalDetectingScore(_In_opt_ float fScore = .5f);
			
			/**
			* ã�� ������ �ּ� ���ھ �����ɴϴ�.
			*
			* return value : float Ÿ���� �ּ� ���ھ ��ȯ�մϴ�.
			*/
			float GetMinimalDetectingScore();
			
			/**
			* ã�� ������ ���� ������ �����մϴ�.
			*
			* param[in_opt] fAngleBias : ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetAngleBias(_In_opt_ float fAngleBias = 0.f);
			
			/**
			* ã�� ������ ���� ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ���� ������ ��ȯ�մϴ�.
			*/
			float GetAngleBias();
			
			/**
			* ã�� ������ Ž�� ���� ������ �����մϴ�.
			*
			* param[in_opt] fAngleTolerance : ���� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetAngleTolerance(_In_opt_ float fAngleTolerance = 0.f);
			
			/**
			* ã�� ������ Ž�� ���� ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ���� ���� ������ ��ȯ�մϴ�.
			*/
			float GetAngleTolerance();
			
			/**
			* ã�� ������ ���� ũ�⸦ �����մϴ�.
			*
			* param[in_opt] fAngleBias : ���� ũ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetScaleBias(_In_opt_ float fScaleBias = 1.f);
			
			/**
			* ã�� ������ ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : float Ÿ���� ���� ũ�⸦ ��ȯ�մϴ�.
			*/
			float GetScaleBias();
			
			/**
			* ã�� ������ Ž�� ũ�� ������ �����մϴ�.
			*
			* param[in_opt] fAngleTolerance : ���� ũ�� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetScaleTolerance(_In_opt_ float fScaleTolerance = 0.f);
			
			/**
			* ã�� ������ Ž�� ũ�� ������ �����ɴϴ�.
			*
			* return value : float Ÿ���� ���� ũ�� ������ ��ȯ�մϴ�.
			*/
			float GetScaleTolerance();
			
			/**
			* ���� Ž�� �� �̹��� ���� ��� ���θ� �����մϴ�.
			*
			* param[in_opt] bUse : ���� ��� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetInterpolation(_In_opt_ bool bUse = true);
			
			/**
			* ���� Ž�� �� �̹��� ���� ��� ���θ� �����ɴϴ�.
			*
			* return value : bool Ÿ���� �̹��� ���� ��� ���θ� ��ȯ�մϴ�.
			*/
			bool GetInterpolation();
			
			/**
			* ���� Ž�� �� �̹��� �ٿ� ���ø� ��� ���θ� �����մϴ�.
			*
			* param[in_opt] bUse :�̹��� �ٿ� ���ø� ��� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetUseDownSampling(_In_ bool bUse);
			
			/**
			* ���� Ž�� �� �̹��� �ٿ� ���ø� ��� ���θ� �����ɴϴ�.
			*
			* return value : bool Ÿ���� �̹��� �ٿ� ���ø� ��� ���θ� ��ȯ�մϴ�.
			*/
			bool GetUseDownSampling();

		private:

			CInternalObjectFinder* m_pInternal = nullptr;
		};
	}
}

