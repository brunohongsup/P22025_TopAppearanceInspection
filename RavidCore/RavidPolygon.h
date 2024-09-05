#pragma once

#include "RavidGeometryArray.h"

#include <vector>

/**
* "�ٰ��� (Polygon)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ���� ��ü�� �̿��ؼ� �ϳ��� ��ü�� ǥ���˴ϴ�. ��� ������ ȥ�� ���� �����մϴ�.
* CRavidGeometryArray �� ��ӹ��� Ŭ������ "�ٰ���"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
class AFX_EXT_CLASS CRavidPolygon : public CRavidGeometryArray
{
#include "GeometryCommonObject.hpp"
#include "GeometryCommonShape.hpp"

#include "GeometryVirtualInformation.hpp"
#include "GeometryVirtualOffset.hpp"
#include "GeometryVirtualRect.hpp"
#include "GeometryVirtualCenter.hpp"
#include "GeometryVirtualDeflate.hpp"
#include "GeometryVirtualInflate.hpp"
#include "GeometryVirtualOperator.hpp"
#include "GeometryVirtualRotate.hpp"
#include "GeometryVirtualShape.hpp"

#include "RavidPolygonCtor.hpp"

public:
	RavidUseDynamicCreation(this);


	CRavidPolygon();
	virtual ~CRavidPolygon();

	enum EObjectType
	{
		EObjectType_Polygon = 0,
		EObjectType_ClosedPolyline,
		EObjectType_OpenPolyline,
	};

#pragma region [Polygon Object Type]
	/**
	* ���� �������� Ÿ���� �����մϴ�.
	*
	* param[in] eType : ������ ����
	* EObjectType_Polygon : �⺻ ������ ����
	* EObjectType_ClosedPolyline : ���� �������� ����
	* EObjectType_OpenPolyline : ���� �������� ����
	*/
	void SetObjectType(_In_ EObjectType eType);
	/**
	* ���� ������ �������� Ÿ���� �����ɴϴ�.
	*
	* return value : EObjectType �� ���ǵ� ���¸� ��ȯ�մϴ�.
	* EObjectType_Polygon : �⺻ ������ ����
	* EObjectType_ClosedPolyline : ���� �������� ����
	* EObjectType_OpenPolyline : ���� �������� ����
	*/
	EObjectType GetObjectType();
#pragma endregion

#pragma region [GetCircumference]
	/**
	* ���� �������� �ѷ��� ����մϴ�.
	*
	* return value : ��ü�� ����, �ѷ�, ��ü�� �Ÿ� �� ��� ������ �����Ͽ� ����մϴ�.
	*/
	virtual double GetCircumference();
#pragma endregion

#pragma region [Assignment operator]
	CRavidPolygon& operator=(_In_ const CRavidPolygon& poly);
	CRavidPolygon& operator=(_In_ CRavidPolygon* pPoly);
#pragma endregion

#pragma region [Arithmetic operator]
	CRavidPolygon operator+(_In_ const POINT& point);
	CRavidPolygon operator+(_In_ const SIZE& size);
	CRavidPolygon operator+(_In_ const CRavidPoint<int>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<long long>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<float>& point);
	CRavidPolygon operator+(_In_ const CRavidPoint<double>& point);

	CRavidPolygon operator-(_In_ const POINT& point);
	CRavidPolygon operator-(_In_ const SIZE& size);
	CRavidPolygon operator-(_In_ const CRavidPoint<int>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<long long>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<float>& point);
	CRavidPolygon operator-(_In_ const CRavidPoint<double>& point);
#pragma endregion
	
#pragma region [Add]
	/**
	* ���� ��ü�� �Էµ� ��ü�� �߰��մϴ�.
	* �Էµ� ������ ��ü�� ���¸� ��Ÿ���ϴ�.
	*
	* param[in] refGeometry : �߰� ��ü (Reference)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Add(_In_ CRavidGeometry& refGeometry);
	/**
	* ���� ��ü�� �Էµ� ��ü�� �߰��մϴ�.
	* �Էµ� ������ ��ü�� ���¸� ��Ÿ���ϴ�.
	*
	* param[in] pGeometry : �߰� ��ü (Pointer)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Add(_In_ CRavidGeometry* pGeometry);
#pragma endregion
	
#pragma region [GetRect]
	/**
	* ���� ��ü�� CRavidRect<double> ���·� ��� ��ȯ�մϴ�.
	* ������ double�� ���·� ��ȯ�˴ϴ�.
	*
	* return value : ���� ��ü�� �ּ�, �ִ� x ,y ������ ��ȯ�մϴ�.
	*/
	CRavidRect<double> GetRect();
#pragma endregion
	
#pragma region [GetPointStruct]
	/**
	* POINT ����ü�� ����ϴ� ȯ���� ���� ���� ��ǥ�� POINT ����ü�� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ü�� �߽� ��ǥ�� POINT ����ü�� ���� ��ȯ�մϴ�.
	*/
	virtual POINT GetPointStruct() override;
#pragma endregion

#pragma region [GetRectStruct]
	/**
	* RECT ����ü�� ����ϴ� ȯ���� ���� ���� ��ǥ�� RECT ����ü�� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ü�� �ּ�, �ִ� x ,y ���� RECT ����ü�� ��ȯ�մϴ�.
	*/
	virtual RECT GetRectStruct() override;
#pragma endregion
	
#pragma region [GetCenter]
	/**
	* ���� ��ü�� �߽��� ����մϴ�.
	*
	* return value : �߽� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCenter();
#pragma endregion

#pragma region [GetCenterOfGravity]
	/**
	* ���� ��ü�� ���� �߽��� ����մϴ�.
	*
	* return value : ���� �߽� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCenterOfGravity();
#pragma endregion
	
#pragma region [GetArea]
	/**
	* ���� ��ü�� ������ ����մϴ�.
	*
	* return value : ��꿡 ������ ������ INF �� ��ȯ�մϴ�.
	*/
	virtual double GetArea() override;
#pragma endregion
	
#pragma region [GetAngle]
	/**
	* ������ ����մϴ�. ���� ��ü�� ȸ�� ���� �� �� �����ϴ�.
	*
	* return value : 0 �� ��ȯ�մϴ�.
	*/
	virtual double GetAngle() override;
#pragma endregion
	
#pragma region [GetIntersection]
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<int>& refGeometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<int>* pGometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<long long>& refGeometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<long long>* pGometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<float>& refGeometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<float>* pGometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<double>& refGeometry, _Out_ CRavidGeometryArray* pRga);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<double>* pGometry, _Out_ CRavidGeometryArray* pRga);
#pragma endregion

#pragma region [MakeFullSegmentPolygon]
	/**
	* ���� ��ü�� ��� ����� ���·� ��ȯ�ϴ� ����� �մϴ�.
	* �޸𸮸� ���� �����Ͽ��� ������ ����ڴ� �ʼ� �����ؾ� �մϴ�.
	* CRavidPolygon ���� ��ȯ�ϵǾ� ��ȯ�˴ϴ�.
	*
	* return value : ���� �Ҵܵ� �޸𸮸� ��ȯ�մϴ�.
	*/
	CRavidPolygon* MakeFullSegmentPolygon();
#pragma endregion

#pragma region [GetIntersectionAboutRegion]
	/**
	* ���� ��ü�� ��� ��ü�� ���� ������ ���� ��ǥ�� ��ȯ�մϴ�.
	* �ӵ� ���� �׽�Ʈ �����Դϴ�. ���� ���������� ����� ���� �����ּ���.
	*
	* param[in] refGeometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersectionAboutRegion(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometrayArray);
#pragma endregion

#pragma region [CurveCorrect]
	/**
	* ���� ��ü�� ���� ���¸� Ǯ���ִ� �Լ��Դϴ�.
	* �׽�Ʈ �����Դϴ�. ���� ���������� ����� ���� �����ּ���.
	* �޸𸮸� ���� �����Ͽ��� ������ ����ڴ� �ʼ� �����ؾ� �մϴ�.
	*
	* return value : ���� �Ҵ�� Ǯ�� ������ �޸𸮸� ��ȯ�մϴ�.
	*/
	CRavidPolygon* CurveCorrect();
#pragma endregion

#pragma region [GetDirection]
	/**
	* ���� ��ü�� ȸ�� ������ ����մϴ�.
	*
	* return value : true : cw / false : ccw �� ��ȯ�մϴ�.
	*/
	bool GetDirection();
#pragma endregion

#pragma region [GetConvexHull]
	/**
	* ���� ��ü���� ���������� ����մϴ�.
	*
	* param[in] pvctPoints : CRavidPoint<double> �� vector ����Ʈ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetConvexHull(_Out_ std::vector<CRavidPoint<double>>* pvctPoints);
	/**
	* ���� ��ü���� ���������� ����մϴ�.
	*
	* param[in] pGeometrayArray : CRavidPoint<double> �� CRavidGeometryArray Ŭ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetConvexHull(_Out_ CRavidGeometryArray* pGeometrayArray);
#pragma endregion

#pragma region [GetMinimumEnclosingRectangle]
	/**
	* ���� ��ü���� �ּҸ��� ���簢���� ����մϴ�.
	*
	* param[in] pGeometry : CRavidRect<double> �� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetMinimumEnclosingRectangle(_Out_ CRavidRect<double>* pGeometry);
	/**
	* ���� ��ü���� �ּҸ��� ���簢���� ����մϴ�.
	*
	* param[in] pGeometry : CRavidQuadrangle<double> �� ��ǥ ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetMinimumEnclosingRectangle(_Out_ CRavidQuadrangle<double>* pGeometry);
#pragma endregion

private:

#pragma region [private]
	/**
	* Ŭ���� ���� ��� ���� �Լ� ����Դϴ�.
	* ����ڿ��Դ� ���� �˰����� ����� Ȯ�� �����մϴ�.
	*/
	struct RegionPoint
	{
		double x;
		double y;

		RegionPoint(_In_opt_ double x = 0, _In_opt_ double y = 0);
		RegionPoint(_In_ const CRavidPoint<double>& rp);

		bool operator==(_In_ const RegionPoint& ip) const;
		bool operator!=(_In_ const RegionPoint& ip) const;
	};

	// Main Region Function
	bool GetIntersectionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctIP, _Out_ std::vector<std::vector<RegionPoint>>& vctIntersectionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctIntersectionAboutRpg2);
	bool GetUnionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctSurfaceIntersection, _Out_ std::vector<RegionPoint>& vctInternalIntersection, _Out_ std::vector<std::vector<RegionPoint>>& vctUnionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctUnionAboutRpg2);
	bool GetSubtractionPointAboutRegion(_In_ CRavidPolygon* pRpg, _Out_ std::vector<RegionPoint>& vctSurfaceIntersection, _Out_ std::vector<RegionPoint>& vctInternalIntersection, _Out_ std::vector<std::vector<RegionPoint>>& vctSubtractionAboutRpg1, _Out_ std::vector<std::vector<RegionPoint>>& vctSubtractionAboutRpg2);

	EObjectType m_eObjectType = EObjectType_Polygon;

	bool GetIntersectionForRasterRegion(_In_ CRavidLine<double>* pLine, _Out_ CRavidGeometryArray* pRga);
	
	bool InternalComp(std::vector<RegionPoint>& vctPoints, RegionPoint &A, RegionPoint &B);
	void InternalSortByAngle(std::vector<RegionPoint>& vctPoints, int first, int last);
#pragma endregion
};

