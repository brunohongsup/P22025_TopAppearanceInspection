#pragma once

#include <vector>
#include <string>
#include <memory>
#include "RavidQuadrangle.h"
#include "RavidRect.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalOCR;
		class CRavidImage;

		struct SOCRCandidate
		{
			CRavidRect<int>		 rrBoundary;
	
			wchar_t	cCharacter;
			float	fScore;
			float	fAngle;

			int		nWordID;
		};

		struct SOCRModel
		{
			wchar_t cCharacter;
			double dblPriorProb;
		};
		/**
		* �̹����� ���ڸ� �н�, �ǵ��Ͽ� ����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS COpticalCharacterRecognizer : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(COpticalCharacterRecognizer);

		public:
			COpticalCharacterRecognizer();
			virtual ~COpticalCharacterRecognizer();
	
			/**
			* ���ڿ� ����� ���� �����մϴ�.
			*/
			enum ECharColor
			{
				WhiteOnBlack = 0,
				BlackOnWhite
			};
			
			/**
			* ���׸�Ʈ �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] refVctSegmentedCandidates : �̹������� ���ڸ� ���׸�Ʈȭ ���� (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Segment(_In_ CRavidImage* pImgInfo, _Out_ std::vector<SOCRCandidate>& refVctSegmentedCandidates, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �н� �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in] refVctSegmentedCandidates : �̹������� ������ ���׸�Ʈȭ ���� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Train(_In_ CRavidImage* pImgInfo, _In_ const std::vector<SOCRCandidate>& refVctSegmentedCandidates);
			
			/**
			* �˻� �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] refVctResultWords : �̹������� �ؼ��� ���ڿ� ���� (Reference)
			* param[out] refVctResultCandidates : �̹������� �ؼ��� ���� ���� (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Decode(_In_ CRavidImage* pImgInfo, _Out_ std::vector<std::wstring>& refVctResultWords, _Out_ std::vector<SOCRCandidate>& refVctResultCandidates, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �н� ���� ������ �о�ɴϴ�.
			*
			* param[in] refStrPathFile : �ε� ���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Load(_In_ const std::wstring& refStrPathFile);
			
			/**
			* �н� ���� ������ �����մϴ�.
			*
			* param[in] refStrPathFile : �Է� �̹���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Save(_In_ const std::wstring& refStrPathFile);

			/**
			* �н��� ���� ���� ����Ʈ�� �����ɴϴ�.
			*
			* param[out] refVctModels : ���� ���� ����Ʈ
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCharacterModelList(std::vector<SOCRModel>& refVctModels) const;
			
			/**
			* �Էµ� ���ڸ� �н��� ���� ����Ʈ���� �����մϴ�.
			*
			* param[in] cCharacter : ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult DeleteCharacterModel(_In_ wchar_t cCharacter);
			
			/**
			* �Էµ� ���ڸ� �н��� ���� ����Ʈ���� �̹����� �����ɴϴ�.
			*
			* param[in] cCharacter : ���� ����
			* param[out] pImgInfo : �н��� �̹���
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCharacterModelImage(_In_ wchar_t cCharacter, _Out_ CRavidImage* pImgInfo);
			
			/**
			* ���ڿ� ����� �����ϴ� ���� �����մϴ�.
			*
			* param[in] nThreshold : ���ڿ� ����� ���ذ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			
			/**
			* ������ ���ڿ� ����� �����ϴ� ���� �����ɴϴ�.
			*
			* return value : int Ÿ������ ����, ����� �з� ���ذ��� ��ȯ�մϴ�.
			*/
			int				 GetThreshold() const;
			
			/**
			* ���ڷ� �ν��ϱ� ���� �ּ� ���ھ �����մϴ�.
			*
			* param[in] dblMinScore : �ּ� ���ھ� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinScore(_In_ double dblMinScore);
			
			/**
			* ������ ���ڷ� �ν��ϱ� ���� �ּ� ���ھ �����ɴϴ�.
			*
			* return value : double Ÿ������ ���ڷ� �ν��ϱ� ���� �ּ� ���ھ ��ȯ�մϴ�.
			*/
			double			 GetMinScore() const;
			
			/**
			* ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� �����մϴ�.
			*
			* param[in]nMinWidth : �ּ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinWidth(_In_ int nMinWidth);
			
			/**
			* ������ ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� �����ɴϴ�.
			*
			* return value : int Ÿ������ ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� ��ȯ�մϴ�.
			*/
			int				 GetMinWidth() const;
			
			/**
			* ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� �����մϴ�.
			*
			* param[in]nMaxWidth : �ִ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxWidth(_In_ int nMaxWidth);
			
			/**
			* ������ ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� �����ɴϴ�.
			*
			* return value : int Ÿ������ ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� ��ȯ�մϴ�.
			*/
			int				 GetMaxWidth() const;
			
			/**
			* ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� �����մϴ�.
			*
			* param[in]nMinHeight : �ּ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMinHeight(_In_ int nMinHeight);
			
			/**
			* ������ ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� �����ɴϴ�.
			*
			* return value : int Ÿ������ ���ڷ� �ν��ϱ� ���� �ּ� ���� ���̸� ��ȯ�մϴ�.
			*/
			int				 GetMinHeight() const;
			
			/**
			* ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� �����մϴ�.
			*
			* param[in]nMaxWidth : �ִ� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxHeight(_In_ int nMaxHeight);
			
			/**
			* ������ ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� �����ɴϴ�.
			*
			* return value : int Ÿ������ ���ڷ� �ν��ϱ� ���� �ִ� ���� ���̸� ��ȯ�մϴ�.
			*/
			int				 GetMaxHeight() const;
			
			/**
			* ������ ���� �����մϴ�.
			*
			* param[in]eColor : enum ECharColor ���� ���� ����
			*	WhiteOnBlack : ���� ��� �� ����
			*	BlackOnWhite : �� ��� ���� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetCharacterColor(_In_ ECharColor eColor);
			
			/**
			* ������ ������ ���� �����ɴϴ�.
			*
			* return value : enum ECharColor Ÿ������ ������ ���� ��ȯ�մϴ�.
			*	WhiteOnBlack : ���� ��� �� ����
			*	BlackOnWhite : �� ��� ���� ����
			*/
			ECharColor		 GetCharacterColor() const;
			
			/**
			* Ž���� ���ڸ� ���⿡ ���� �ϳ��� ���ڿ��� ó�� ���θ� �����մϴ�.
			*
			* param[in_opt] bUse : ���� �� �Ÿ��� ���ڿ��� ���� ���
			*	true : ���ӵ� ���ڿ��� ó��
			*	false : Ž���� ������� ó��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetUseWordSegmentation(_In_ bool bUse);
			
			/**
			* Ž���� ���ڸ� ���⿡ ���� �ϳ��� ���ڿ��� ó�� ���θ� �����ɴϴ�.
			*
			* return value : bool Ÿ���� ���� �� �Ÿ��� ���ڿ��� ���� ��� ���θ� ��ȯ�մϴ�.
			*/
			bool			 GetUseWordSegmentation() const;
			
			/**
			* ���ӵ� ���ڿ��� ����� ���ڰ� ������ �����մϴ�.
			*
			* param[in] dblGap : ���ڰ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetWordSegmentationGap(_In_ double dblGap);
			
			/**
			* ���ӵ� ���ڿ��� ����� ���ڰ� ������ �����ɴϴ�.
			*
			* return value : double Ÿ���� ���ڰ� ������ ��ȯ�մϴ�.
			*/
			double			 GetWordSegmentationGap() const;

		private:
			std::unique_ptr<CInternalOCR> m_pInternal;
		};

	}
}

