#pragma once

#include <vector>
#include <memory>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalConnectedComponent;

		class CRavidImage;
		
		/**
		* �̹����� �м��Ͽ� ����� ȭ���� ���̺� ����� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CConnectedComponent : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CConnectedComponent);

		public:
			/**
			* ȭ�� ������ ����ȭ ó�� ����Դϴ�.
			*/
			enum EThresholdType
			{
				EThresholdType_Single = 0,
				EThresholdType_Double,
			};
			/**
			* �÷� ä�ΰ� ���� ����Դϴ�.
			*/
			enum EMultipleChannelCondition
			{
				EMultipleChannelCondition_1 = 0,
				EMultipleChannelCondition_1or2,
				EMultipleChannelCondition_1and2,
				EMultipleChannelCondition_1or2or3,
				EMultipleChannelCondition_1and2and3,
				EMultipleChannelCondition_1or2or3or4,
				EMultipleChannelCondition_1and2and3and4,
			};
			/**
			* ���� ó�� ����Դϴ�.
			*/
			enum EFilterItem
			{
				EFilterItem_Area = 0,
				EFilterItem_Angle,
				EFilterItem_BoundingBoxCenterX,
				EFilterItem_BoundingBoxCenterY,
				EFilterItem_BoundingBoxWidth,
				EFilterItem_BoundingBoxHeight,
				EFilterItem_GravityCenterX,
				EFilterItem_GravityCenterY,
				EFilterItem_MinimumEnclosingRectangleCenterX,
				EFilterItem_MinimumEnclosingRectangleCenterY,
				EFilterItem_MinimumEnclosingRectangleHeight,
				EFilterItem_MinimumEnclosingRectangleWidth,
				EFilterItem_MinimumEnclosingRectangleCircularity,
			};
			/**
			* ��� ���� �����Դϴ�.
			*/
			enum ESortItem
			{
				ESortItem_Area = 0,
				ESortItem_Angle,
				ESortItem_BoundingBoxCenterX,
				ESortItem_BoundingBoxCenterY,
				ESortItem_BoundingBoxWidth,
				ESortItem_BoundingBoxHeight,
				ESortItem_GravityCenterX,
				ESortItem_GravityCenterY,
				ESortItem_MinimumEnclosingRectangleCenterX,
				ESortItem_MinimumEnclosingRectangleCenterY,
				ESortItem_MinimumEnclosingRectangleHeight,
				ESortItem_MinimumEnclosingRectangleWidth,
				ESortItem_MinimumEnclosingRectangleCircularity,
			};
			/**
			* ��� ���� ����Դϴ�.
			*/
			enum ESortMethod
			{
				ESortMethod_AscendingOrder = 0,
				ESortMethod_DescendingOrder
			};

			CConnectedComponent();
			virtual ~CConnectedComponent();
			
			/**
			* �˰����� �����մϴ�.
			*
			* param[in] pImgInfo : �Է� �̹��� (Pointer)
			* param[in_opt] pGeometry : CRavidRect �˻� ROI (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Encode(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pGeometry = nullptr);
			
			/**
			* ���� �� ����մϴ�.
			* ��ǥ ȭ�Ҹ� �����ϱ� ���� ���ذ��� �����մϴ�.
			*
			* param[in] rmv : ȭ�Ҹ� ������ ���� ���ذ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetSingleThreshold(_In_ Framework::CMultipleVariable rmv);

			/**
			* ������ ��ǥ ȭ�Ҹ� �����ϱ� ���� ���ذ��� �����ɴϴ�.
			*
			* param[out] rmv : ȭ�Ҹ� ������ ���� ���ذ� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetSingleThreshold(_Out_ Framework::CMultipleVariable &rmv);

			/**
			* ���� �� ����մϴ�.
			* ��ǥ ȭ�Ҹ� �����ϱ� ���� ���ذ� ������ �����մϴ�.
			*
			* param[in] rmvMin : ȭ�Ҹ� ������ ���� �ּ� ���ذ�
			* param[in] rmvMax : ȭ�Ҹ� ������ ���� �ִ� ���ذ�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult SetDoubleThreshold(_In_ Framework::CMultipleVariable rmvMin, _In_ Framework::CMultipleVariable rmvMax);

			/**
			* ������ ��ǥ ȭ�Ҹ� ������ ���� ���ذ� ������ �����ɴϴ�.
			*
			* param[out] rmvMin : ȭ�Ҹ� ������ ���� �ּ� ���ذ� (Reference)
			* param[out] rmvMax : ȭ�Ҹ� ������ ���� �ִ� ���ذ� (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetDoubleThreshold(_Out_ Framework::CMultipleVariable &rmvMin, _Out_ Framework::CMultipleVariable &rmvMax);

			/**
			* ���� �� ����մϴ�.
			* ��ǥ ȭ�Ҹ� ������ �� ���ذ� �������� ������ ����� �����մϴ�.
			*
			* param[in] lc : ������ enum
			* ELogicalCondition_Greater			: �ʰ�
			* ELogicalCondition_GreaterEqual	: �̻�
			* ELogicalCondition_Equal			: ����
			* ELogicalCondition_NotEqual		: �ٸ���
			* ELogicalCondition_LessEqual		: ����
			* ELogicalCondition_Less			: �̸�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CConnectedComponent::SetLogicalCondition(_In_ ELogicalCondition lc);
			
			/**
			* ������ ��ǥ ȭ�Ҹ� ������ �� ���ذ� �������� ������ ����� �����ɴϴ�.
			*
			* param[out] lc : ������ enum (Reference)
			* ELogicalCondition_Greater			: �ʰ�
			* ELogicalCondition_GreaterEqual	: �̻�
			* ELogicalCondition_Equal			: ����
			* ELogicalCondition_NotEqual		: �ٸ���
			* ELogicalCondition_LessEqual		: ����
			* ELogicalCondition_Less			: �̸�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CConnectedComponent::GetLogicalCondition(_Out_ ELogicalCondition& lc);
			
			/**
			* ���� �� ����մϴ�.
			* ��ǥ ȭ�Ҹ� ������ �� �÷� ä�� �� ������ ����� �����մϴ�.
			*
			* param[in] mcc : ������ enum ������ �x�� ��� ä���� �����ϰų� �Ѱ��̶� �����ϸ� ��ǥ ȭ�ҷ� ������
			*	EMultipleChannelCondition_1 : 1ä�� ���
			*	EMultipleChannelCondition_1or2 : 1, 2 ä�� OR ����
			*	EMultipleChannelCondition_1and2 : 1, 2 ä�� AND ����
			*	EMultipleChannelCondition_1or2or3 : 1, 2, 3 ä�� OR ����
			*	EMultipleChannelCondition_1and2and3 : 1, 2, 3 ä�� AND ����
			*	EMultipleChannelCondition_1or2or3or4 : 1, 2, 3, 4 ä�� OR ����
			*	EMultipleChannelCondition_1and2and3and4 : 1, 2, 3, 4 ä�� AND ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CConnectedComponent::SetMultipleChannelCondition(_In_ EMultipleChannelCondition mcc);
			
			/**
			* ������ ��ǥ ȭ�Ҹ� ������ �� �÷� ä�� �� ������ ����� �����ɴϴ�.
			*
			* param[out] mcc : ������ enum ������ �x�� ��� ä���� �����ϰų� �Ѱ��̶� �����ϸ� ��ǥ ȭ�ҷ� ������ (Reference)
			*	EMultipleChannelCondition_1 : 1ä�� ���
			*	EMultipleChannelCondition_1or2 : 1, 2 ä�� OR ����
			*	EMultipleChannelCondition_1and2 : 1, 2 ä�� AND ����
			*	EMultipleChannelCondition_1or2or3 : 1, 2, 3 ä�� OR ����
			*	EMultipleChannelCondition_1and2and3 : 1, 2, 3 ä�� AND ����
			*	EMultipleChannelCondition_1or2or3or4 : 1, 2, 3, 4 ä�� OR ����
			*	EMultipleChannelCondition_1and2and3and4 : 1, 2, 3, 4 ä�� AND ����
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult CConnectedComponent::GetMultipleChannelCondition(_Out_ EMultipleChannelCondition& mcc);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* param[out] vctBoundarySize : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundarySize(_Out_ std::vector<CRavidPoint<int> >& vctBoundarySize);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* param[out] refGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundarySize(_Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundarySize(_Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<int> > GetBoundarySize();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* param[out] vctBoundary : CRavidRect �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundary(_Out_ std::vector<CRavidRect<int> >& vctBoundary);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* param[out] refGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundary(_Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetBoundary(_Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* return value : CRavidRect �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<CRavidRect<int> > GetBoundary();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* param[out] vctBoundary : size_t �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetArea(_Out_ std::vector<size_t>& vctArea);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ ������ �����ɴϴ�.
			*
			* return value : size_t �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<size_t> GetArea();
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] vctConvex : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConvexHull(_Out_ std::vector<std::vector<CRavidPoint<int>> >& vctConvex);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] refGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConvexHull(_Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConvexHull(_Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* return value : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>> > GetConvexHull();
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �Էµ� �Ÿ���ŭ �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[in] dblAlpha : ��ǥ �� �ִ� �Ÿ���
			* param[out] vctConvex : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConcaveHull(_In_ double dblAlpha, _Out_ std::vector<std::vector<CRavidPoint<int>> >& vctConcave);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �Էµ� �Ÿ���ŭ �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[in] dblAlpha : ��ǥ �� �ִ� �Ÿ���
			* param[out] refGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConcaveHull(_In_ double dblAlpha, _Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �Էµ� �Ÿ���ŭ �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[in] dblAlpha : ��ǥ �� �ִ� �Ÿ���
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetConcaveHull(_In_ double dblAlpha, _Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��ǥ�� �Էµ� �Ÿ���ŭ �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* param[in] dblAlpha : ��ǥ �� �ִ� �Ÿ���
			*
			* return value : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>> > GetConcaveHull(_In_ double dblAlpha);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��� ��ǥ�� �����ɴϴ�.
			*
			* param[out] vctConvex : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetContour(_Out_ std::vector<std::vector<CRavidPoint<int>> >& vctContour);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��� ��ǥ�� �����ɴϴ�.
			*
			* param[out] refGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetContour(_Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��� ��ǥ�� �����ɴϴ�.
			*
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� ������ ��ǥ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetContour(_Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ �̷�� ��� ��ǥ�� �����ɴϴ�.
			*
			* return value : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ������ ��ǥ�� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>> > GetContour();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ���簢�� ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] vctMER : CRavidQuadrangle �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ std::vector<CRavidQuadrangle<double> >& vctMER);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ���簢�� ������ �����ɴϴ�.(ȸ�� ���� ����)
			*
			* param[out] vctMER : CRavidRect �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ std::vector<CRavidRect<double> >& vctMER);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ���簢�� ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] vctMER : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ CRavidGeometryArray& refGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ���簢�� ������ ��ǥ�� �����ɴϴ�.
			*
			* param[out] pGeometryArray : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ CRavidGeometryArray* pGeometryArray);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ���簢�� ������ ��ǥ�� �����ɴϴ�.
			*
			* return value : CRavidQuadrangle �� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<CRavidQuadrangle<double> > GetMinimumEnclosingRectangle();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �߽��� �������� �ȼ� ���� ������ �����ɴϴ�.
			*
			* param[out] vctAngles : float �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetAngles(_Out_ std::vector<float>& vctAngles);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �߽��� �������� �ȼ� ���� ������ �����ɴϴ�.
			*
			* return value : float �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<float> GetAngles();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �����߽��� �����ɴϴ�.
			*
			* param[out] vctGravityPoints : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetGravityPoint(_Out_ std::vector<CRavidPoint<double> >& vctGravityPoints);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �����߽��� �����ɴϴ�.
			*
			* return value : CRavidPoint �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<double> > GetGravityPoint();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ��,������ �����ɴϴ�.
			*
			* param[out] vctFeretMax : CRavidLine �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			* param[out] vctFeretMin : CRavidLine �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetFeret(_Out_ std::vector<CRavidLine<double> >& vctFeretMax, _Out_ std::vector<CRavidLine<double> >& vctFeretMin);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ��,������ �����ɴϴ�.
			*
			* param[out] refGeometryArrayMax : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			* param[out] refGeometryArrayMin : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetFeret(_Out_ CRavidGeometryArray& refGeometryArrayMax, _Out_ CRavidGeometryArray& refGeometryArrayMin);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �ּҸ��� ��,������ �����ɴϴ�.
			*
			* param[out] pGeometryArrayMax : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			* param[out] pGeometryArrayMin : CRavidGeometryArray �� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetFeret(_Out_ CRavidGeometryArray* pGeometryArrayMax, _Out_ CRavidGeometryArray* pGeometryArrayMin);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �������� �����ɴϴ�.
			*
			* param[out] vctCircularity : float �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Reference)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCircularity(_Out_ std::vector<float>& vctCircularity);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ������ �������� �����ɴϴ�.
			*
			* param[out] pVctCircularity : float �� ���� ���·� ��ü ����Ʈ�� �����ɴϴ�. (Pointer)
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult GetCircularity(_Out_ std::vector<float>* pVctCircularity);

			/**
			* ���� �� ����մϴ�.
			* ������ ������ �������� �����ɴϴ�.
			*
			* return value : float �� ���� ���·� ��ü ����Ʈ�� ��ȯ�մϴ�.
			*/
			std::vector<float> GetCircularity();
			
			/**
			* ���� �� ����մϴ�.
			* Ž���� ����� ���͸� �����մϴ�. ���͸� �����ϴ� ����� �����մϴ�.
			*
			* param[in] eItem : ���� ���� enum 
			*	EFilterItem_Area : ����
			*	EFilterItem_Angle : ����
			*	EFilterItem_BoundingBoxCenterX : �ܰ� �߽� X
			*	EFilterItem_BoundingBoxCenterY : �ܰ� �߽� Y
			*	EFilterItem_BoundingBoxWidth : �ܰ� ����
			*	EFilterItem_BoundingBoxHeight : �ܰ� ����
			*	EFilterItem_GravityCenterX : ���� �߽� X
			*	EFilterItem_GravityCenterY : ���� �߽� Y
			*	EFilterItem_MinimumEnclosingRectangleCenterX : �ּҸ��� �߽� X
			*	EFilterItem_MinimumEnclosingRectangleCenterY : �ּҸ��� �߽� Y
			*	EFilterItem_MinimumEnclosingRectangleHeight : �ּҸ��� ����
			*	EFilterItem_MinimumEnclosingRectangleWidth : �ּҸ��� ����
			*	EFilterItem_MinimumEnclosingRectangleCircularity : �ּҸ��� ������
			* param[in] dblValue : ���� ��
			* param[in] eCondition : ������ enum
			*	ELogicalCondition_Greater		: �ʰ�
			*	ELogicalCondition_GreaterEqual	: �̻�
			*	ELogicalCondition_Equal			: ����
			*	ELogicalCondition_NotEqual		: �ٸ���
			*	ELogicalCondition_LessEqual		: ����
			*	ELogicalCondition_Less			: �̸�
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Filter(_In_ EFilterItem eItem, _In_ double dblValue, _In_ ELogicalCondition eCondition);
			
			/**
			* ���� �� ����մϴ�.
			* Ž���� ����� �Էµ� ���� ������� �����մϴ�.
			*
			* param[in] eItem : ���� ���� ������ enum 
			*	ESortItem_Area : ����
			*	ESortItem_Angle : ����
			*	ESortItem_BoundingBoxCenterX : �ܰ� �߽� X
			*	ESortItem_BoundingBoxCenterY : �ܰ� �߽� Y
			*	ESortItem_BoundingBoxWidth : �ܰ� ����
			*	ESortItem_BoundingBoxHeight : �ܰ� ����
			*	ESortItem_GravityCenterX : ���� �߽� X
			*	ESortItem_GravityCenterY : ���� �߽� Y
			*	ESortItem_MinimumEnclosingRectangleCenterX : �ּҸ��� �߽� X
			*	ESortItem_MinimumEnclosingRectangleCenterY : �ּҸ��� �߽� Y
			*	ESortItem_MinimumEnclosingRectangleHeight : �ּҸ��� ����
			*	ESortItem_MinimumEnclosingRectangleWidth : �ּҸ��� ����
			*	ESortItem_MinimumEnclosingRectangleCircularity : �ּҸ��� ������
			* param[in] eMethod : ���� ��� enum
			*	ESortMethod_AscendingOrder : ��������
			*	ESortMethod_DescendingOrder : ��������
			*
			* return value : �����ϸ� EAlgorithmResult_OK �̿��� ���� �����ϴ�.
			*/
			EAlgorithmResult Sort(_In_ ESortItem eItem, _In_ ESortMethod eMethod);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : CRavidPoint ���·� ��ȯ�մϴ�.
			*/
			CRavidPoint<int> GetBoundarySizeByIndex(int nIndex);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ����, ���� ũ�⸦ �����ɴϴ�.
			*
			* return value : CRavidRect ���·� ��ȯ�մϴ�.
			*/
			CRavidRect<int> GetBoundaryByIndex(int nIndex);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ������ �̷�� ��� ��ǥ�� �����ɴϴ�.
			*
			* return value : CRavidPoint ���� ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<int>> GetContourByIndex(int nIndex);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� ������ �̷�� ��ǥ���� �����ϴ� ������ ������ ��ǥ�� �����ɴϴ�.
			*
			* return value : CRavidPoint ���� ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<int>> GetConvexHullByIndex(int nIndex);
			
			/**
			* ���� �� ����մϴ�.
			* �Էµ� �ε����� �ּҸ��� ���簢�� ������ �����ɴϴ�.
			*
			* return value : CRavidRect ���·� ��ȯ�մϴ�.
			*/
			CRavidRect<double> GetMinimumEnclosingRectangleByIndex(int nIndex);
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� ������ ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<RECT>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<RECT>* GetBoundaryPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� ������ ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<size_t>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<size_t>* GetAreaPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� ������ ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<float>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<float>* GetAnglesPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �����߽��� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<CRavidPoint<double>>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidPoint<double>>* GetGravityPointPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� ��ǥ����Ʈ�� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : std::vector<std::vector<CRavidPoint<int>>>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>>>* GetContourPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� ������ ������ ��ǥ�� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : std::vector<std::vector<CRavidPoint<int>>>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>>>* GetConvexHullPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �ּҸ��� ���簢���� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<CRavidPoint<double>>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidQuadrangle<double>>* GetMinimumEnclosingRectanglePtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �������� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<float>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<float>* GetCircularityPtr();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �ּҸ��� �������� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<float>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidLine<double>>* GetFeretMax();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �ּҸ��� �������� ���� �޸𸮸� �����ɴϴ�.
			*
			* return value : vector<float>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<CRavidLine<double>>* GetFeretMin();
			
			/**
			* ���� �� ����մϴ�.
			* ������ ���� �Ÿ���ŭ �����ϴ� ������ ������ ��ǥ�� ���� �޸𸮸� �����ɴϴ�.
			*
			* param[in] dblAlpha : ��ǥ �� �ִ� �Ÿ���
			*
			* return value : std::vector<std::vector<CRavidPoint<int>>>* ���·� ��ȯ�մϴ�.
			*/
			std::vector<std::vector<CRavidPoint<int>> >* GetConcaveHullPtr(double dblAlpha);
			
		private:
			std::unique_ptr<CInternalConnectedComponent> m_pInternal;

		};
	}
}
