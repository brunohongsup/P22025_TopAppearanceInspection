#pragma once

#include <vector>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalHoughTransformLine;
		class CRavidImage;
		/**
		* �̹����� ȭ�ҿ��� ������ ����, �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CHoughTransformLine : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHoughTransformLine);

		public:

			CHoughTransformLine();
			virtual ~CHoughTransformLine();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refVctRp : CRavidPoint ���� ������ Ư¡�� ��ǥ ����Ʈ (Reference)
			* param[in] pGeometry : �˻� ROI (Pointer)
			* param[out] refVctLines : CRavidLine ���� ������ ���� ����Ʈ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double> >& refVctRp, _In_ CRavidGeometry* pGeometry, _Out_ std::vector<CRavidLine<double> >& refVctLines);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pVctRp : CRavidPoint ���� ������ Ư¡�� ��ǥ ����Ʈ (Pointer)
			* param[in] pGeometry : �˻� ROI (Pointer)
			* param[out] refVctLines : CRavidLine ���� ������ ���� ����Ʈ (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double> >* pVctRp, _In_ CRavidGeometry* pGeometry, _Out_ std::vector<CRavidLine<double> >& refVctLines);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] vctLines : CRavidLine ���� ������ ���� ����Ʈ (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidLine<int>>& vctLines, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[out] pVctLines : CRavidLine ���� ������ ���� ����Ʈ (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidLine<int>>* pVctLines, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Pointer)
			* param[out] vctLines : CRavidLine ���� ������ ���� ����Ʈ (Reference)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidLine<int>>& vctLines, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] refImgInfo : �Է� �̹��� (Pointer)
			* param[out] pVctLines : CRavidLine ���� ������ ���� ����Ʈ (Pointer)
			* param[in_opt] pGeometry : �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidLine<int>>* pVctLines, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* Ư¡ ������ �Ǵ� �ȼ� ���� �����մϴ�.
			*
			* param[in] nThreshold : Ư¡ ���� �ȼ� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			
			/**
			* ������ Ư¡ ������ �Ǵ� �ȼ� ���� �����ɴϴ�.
			*
			* return value : int �� Ư¡ ���� �ȼ� �� �� ��ȯ�մϴ�.
			*/
			int GetThreshold(void) const;
			
			/**
			* ������ ������ �ִ� ������ �����մϴ�.
			*
			* param[in] nMaxLineCnt : ������ �ִ� ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetMaxLineCount(_In_ int nMaxLineCnt);
			
			/**
			* ������ ������ ������ �ִ� ������ �����ɴϴ�.
			*
			* return value : int �� ������ ������ �ִ� ������ ��ȯ�մϴ�.
			*/
			int GetMaxLineCount(void) const;
			
			/**
			* ������ ������ ���� ������ �����մϴ�.
			*
			* param[in] nRegionalRange : ���� ���� ���� ��
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetRegionRange(_In_ int nRegionalRange);
			
			/**
			* ������ ������ ������ ���� ������ �����ɴϴ�.
			*
			* return value : int �� ���� ���� ���� ���� ��ȯ�մϴ�.
			*/
			int GetRegionRange(void) const;

		private:
			CInternalHoughTransformLine* m_pInternal = nullptr;

		};
	}
}

