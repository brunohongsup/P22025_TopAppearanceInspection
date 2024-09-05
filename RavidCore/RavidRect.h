#pragma once

#include "RavidGeometry.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}
}

/**
* "���簢�� (Rectangle)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ������ Ÿ���� int, long long, float, double �� �����մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "���簢��"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
template <typename T>
class AFX_EXT_CLASS CRavidRect : public CRavidGeometry
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

#include "RavidRectCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidRect template class is able to use type within int, long long, float and double.");

	CRavidRect();
	virtual ~CRavidRect();

#pragma region [Assignment operator]
	void operator=(_In_ const POINT& point);
	void operator=(_In_ POINT* pPoint);
	void operator=(_In_ const SIZE& size);
	void operator=(_In_ SIZE* pSize);
	void operator=(_In_ const CRavidPoint<int>& point);
	void operator=(_In_ CRavidPoint<int>* pPoint);
	void operator=(_In_ const CRavidPoint<long long>& point);
	void operator=(_In_ CRavidPoint<long long>* pPoint);
	void operator=(_In_ const CRavidPoint<float>& point);
	void operator=(_In_ CRavidPoint<float>* pPoint);
	void operator=(_In_ const CRavidPoint<double>& point);
	void operator=(_In_ CRavidPoint<double>* pPoint);
	void operator=(_In_ const CRavidLine<int>& line);
	void operator=(_In_ CRavidLine<int>* pLine);
	void operator=(_In_ const CRavidLine<long long>& line);
	void operator=(_In_ CRavidLine<long long>* pLine);
	void operator=(_In_ const CRavidLine<float>& line);
	void operator=(_In_ CRavidLine<float>* pLine);
	void operator=(_In_ const CRavidLine<double>& line);
	void operator=(_In_ CRavidLine<double>* pLine);
	void operator=(_In_ const RECT& rect);
	void operator=(_In_ RECT* pRect);
	void operator=(_In_ const CRavidRect<int>& rect);
	void operator=(_In_ CRavidRect<int>* pRect);
	void operator=(_In_ const CRavidRect<long long>& rect);
	void operator=(_In_ CRavidRect<long long>* pRect);
	void operator=(_In_ const CRavidRect<float>& rect);
	void operator=(_In_ CRavidRect<float>* pRect);
	void operator=(_In_ const CRavidRect<double>& rect);
	void operator=(_In_ CRavidRect<double>* pRect);
	void operator=(_In_ const CRavidQuadrangle<int>& quad);
	void operator=(_In_ CRavidQuadrangle<int>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator=(_In_ CRavidQuadrangle<long long>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<float>& quad);
	void operator=(_In_ CRavidQuadrangle<float>* pQuad);
	void operator=(_In_ const CRavidQuadrangle<double>& quad);
	void operator=(_In_ CRavidQuadrangle<double>* pQuad);
	void operator=(_In_ const CRavidCircle<int>& cir);
	void operator=(_In_ CRavidCircle<int>* pCir);
	void operator=(_In_ const CRavidCircle<long long>& cir);
	void operator=(_In_ CRavidCircle<long long>* pCir);
	void operator=(_In_ const CRavidCircle<float>& cir);
	void operator=(_In_ CRavidCircle<float>* pCir);
	void operator=(_In_ const CRavidCircle<double>& cir);
	void operator=(_In_ CRavidCircle<double>* pCir);
	void operator=(_In_ const CRavidEllipse<int>& ell);
	void operator=(_In_ CRavidEllipse<int>* pEll);
	void operator=(_In_ const CRavidEllipse<long long>& ell);
	void operator=(_In_ CRavidEllipse<long long>* pEll);
	void operator=(_In_ const CRavidEllipse<float>& ell);
	void operator=(_In_ CRavidEllipse<float>* pEll);
	void operator=(_In_ const CRavidEllipse<double>& ell);
	void operator=(_In_ CRavidEllipse<double>* pEll);
	void operator=(_In_ const CRavidPolygon& rpg);
	void operator=(_In_ CRavidPolygon* pRpg);
#pragma endregion

#pragma region [Comparison operator]
	bool operator==(_In_ const CRavidLine<int>& line);
	bool operator==(_In_ const CRavidLine<long long>& line);
	bool operator==(_In_ const CRavidLine<float>& line);
	bool operator==(_In_ const CRavidLine<double>& line);
	bool operator==(_In_ const CRavidRect<int>& rect);
	bool operator==(_In_ const CRavidRect<long long>& rect);
	bool operator==(_In_ const CRavidRect<float>& rect);
	bool operator==(_In_ const CRavidRect<double>& rect);

	bool operator!=(_In_ const CRavidLine<int>& line);
	bool operator!=(_In_ const CRavidLine<long long>& line);
	bool operator!=(_In_ const CRavidLine<float>& line);
	bool operator!=(_In_ const CRavidLine<double>& line);
	bool operator!=(_In_ const CRavidRect<int>& rect);
	bool operator!=(_In_ const CRavidRect<long long>& rect);
	bool operator!=(_In_ const CRavidRect<float>& rect);
	bool operator!=(_In_ const CRavidRect<double>& rect);
#pragma endregion

#pragma region [Arithmetic and assignment operator]
	void operator+=(_In_ const RECT& rect);
	void operator+=(_In_ const CRavidLine<int>& line);
	void operator+=(_In_ const CRavidLine<long long>& line);
	void operator+=(_In_ const CRavidLine<float>& line);
	void operator+=(_In_ const CRavidLine<double>& line);
	void operator+=(_In_ const CRavidRect<int>& rect);
	void operator+=(_In_ const CRavidRect<long long>& rect);
	void operator+=(_In_ const CRavidRect<float>& rect);
	void operator+=(_In_ const CRavidRect<double>& rect);

	void operator-=(_In_ const RECT& rect);
	void operator-=(_In_ const CRavidLine<int>& line);
	void operator-=(_In_ const CRavidLine<long long>& line);
	void operator-=(_In_ const CRavidLine<float>& line);
	void operator-=(_In_ const CRavidLine<double>& line);
	void operator-=(_In_ const CRavidRect<int>& rect);
	void operator-=(_In_ const CRavidRect<long long>& rect);
	void operator-=(_In_ const CRavidRect<float>& rect);
	void operator-=(_In_ const CRavidRect<double>& rect);

	void operator*=(_In_ const RECT& rect);
	void operator*=(_In_ const CRavidLine<int>& line);
	void operator*=(_In_ const CRavidLine<long long>& line);
	void operator*=(_In_ const CRavidLine<float>& line);
	void operator*=(_In_ const CRavidLine<double>& line);
	void operator*=(_In_ const CRavidRect<int>& rect);
	void operator*=(_In_ const CRavidRect<long long>& rect);
	void operator*=(_In_ const CRavidRect<float>& rect);
	void operator*=(_In_ const CRavidRect<double>& rect);

	void operator/=(_In_ const RECT& rect);
	void operator/=(_In_ const CRavidLine<int>& line);
	void operator/=(_In_ const CRavidLine<long long>& line);
	void operator/=(_In_ const CRavidLine<float>& line);
	void operator/=(_In_ const CRavidLine<double>& line);
	void operator/=(_In_ const CRavidRect<int>& rect);
	void operator/=(_In_ const CRavidRect<long long>& rect);
	void operator/=(_In_ const CRavidRect<float>& rect);
	void operator/=(_In_ const CRavidRect<double>& rect);
#pragma endregion

#pragma region [Arithmetic operator]
	CRavidRect<double> operator+(_In_ const int& value);
	CRavidRect<double> operator+(_In_ const long long& value);
	CRavidRect<double> operator+(_In_ const float& value);
	CRavidRect<double> operator+(_In_ const double& value);
	CRavidRect<double> operator+(_In_ const POINT& point);
	CRavidRect<double> operator+(_In_ const SIZE& size);
	CRavidRect<double> operator+(_In_ const RECT& rect);
	CRavidRect<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidRect<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidRect<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidRect<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidRect<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidRect<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidRect<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidRect<double> operator+(_In_ const CRavidLine<double>& line);
	CRavidRect<double> operator+(_In_ const CRavidRect<int>& rect);
	CRavidRect<double> operator+(_In_ const CRavidRect<long long>& rect);
	CRavidRect<double> operator+(_In_ const CRavidRect<float>& rect);
	CRavidRect<double> operator+(_In_ const CRavidRect<double>& rect);

	CRavidRect<double> operator-(_In_ const int& value);
	CRavidRect<double> operator-(_In_ const long long& value);
	CRavidRect<double> operator-(_In_ const float& value);
	CRavidRect<double> operator-(_In_ const double& value);
	CRavidRect<double> operator-(_In_ const POINT& point);
	CRavidRect<double> operator-(_In_ const SIZE& size);
	CRavidRect<double> operator-(_In_ const RECT& rect);
	CRavidRect<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidRect<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidRect<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidRect<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidRect<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidRect<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidRect<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidRect<double> operator-(_In_ const CRavidLine<double>& line);
	CRavidRect<double> operator-(_In_ const CRavidRect<int>& rect);
	CRavidRect<double> operator-(_In_ const CRavidRect<long long>& rect);
	CRavidRect<double> operator-(_In_ const CRavidRect<float>& rect);
	CRavidRect<double> operator-(_In_ const CRavidRect<double>& rect);

	CRavidRect<double> operator*(_In_ const int& value);
	CRavidRect<double> operator*(_In_ const long long& value);
	CRavidRect<double> operator*(_In_ const float& value);
	CRavidRect<double> operator*(_In_ const double& value);
	CRavidRect<double> operator*(_In_ const POINT& point);
	CRavidRect<double> operator*(_In_ const SIZE& size);
	CRavidRect<double> operator*(_In_ const RECT& rect);
	CRavidRect<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidRect<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidRect<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidRect<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidRect<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidRect<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidRect<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidRect<double> operator*(_In_ const CRavidLine<double>& line);
	CRavidRect<double> operator*(_In_ const CRavidRect<int>& rect);
	CRavidRect<double> operator*(_In_ const CRavidRect<long long>& rect);
	CRavidRect<double> operator*(_In_ const CRavidRect<float>& rect);
	CRavidRect<double> operator*(_In_ const CRavidRect<double>& rect);

	CRavidRect<double> operator/(_In_ const int& value);
	CRavidRect<double> operator/(_In_ const long long& value);
	CRavidRect<double> operator/(_In_ const float& value);
	CRavidRect<double> operator/(_In_ const double& value);
	CRavidRect<double> operator/(_In_ const POINT& point);
	CRavidRect<double> operator/(_In_ const SIZE& size);
	CRavidRect<double> operator/(_In_ const RECT& rect);
	CRavidRect<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidRect<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidRect<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidRect<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidRect<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidRect<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidRect<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidRect<double> operator/(_In_ const CRavidLine<double>& line);
	CRavidRect<double> operator/(_In_ const CRavidRect<int>& rect);
	CRavidRect<double> operator/(_In_ const CRavidRect<long long>& rect);
	CRavidRect<double> operator/(_In_ const CRavidRect<float>& rect);
	CRavidRect<double> operator/(_In_ const CRavidRect<double>& rect);
#pragma endregion

#pragma region [Casting operator]
	/**
	* ���� ��ü�� RECT ����ü�� �����ͷ� ��ȯ�մϴ�.
	*
	* return value : ��ü�� RECT ����ü�� �ɽ����մϴ�.
	*/
	operator LPRECT();
#pragma endregion
	
#pragma region [GetRect]
	/**
	* ���� ��ǥ�� CRavidRect<T> ���·� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ü�� �ּ�, �ִ� x ,y ������ ��ȯ�մϴ�.
	*/
	virtual CRavidRect<T> GetRect();
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

#pragma region [GetWidth]
	/**
	* ���� ��ü�� ���� ���̸� ��ȯ�մϴ�.
	*
	* return value : ������ ���� ���� - ���� �߻��� �� �ֽ��ϴ�.
	*/
	T GetWidth();
#pragma endregion

#pragma region [GetHeight]
	/**
	* ���� ��ü�� ���� ���̸� ��ȯ�մϴ�.
	*
	* return value : ������ ���� ���� - ���� �߻��� �� �ֽ��ϴ�.
	*/
	T GetHeight();
#pragma endregion
	
#pragma region [GetAngle]
	/**
	* ���� ��ü�� ������ ����մϴ�.
	* CRavidRect �� angle �� ������ �ֱ� ������ angle ���� ��ȯ�մϴ�.
	*
	* return value : ������ angle ���� �����ɴϴ�.
	*/
	virtual double GetAngle() override;
#pragma endregion

#pragma region [Normalize]
	/**
	* ���� ��ü�� ������ ���� Ȯ���Ͽ� �Ҿ����� ���� �� ��ġ�մϴ�.
	* Rect�� ���� ������ ���� ��Ģ�� �����ϴ�.
	* left : x ���� �ּҰ�, right : x ���� �ִ밪
	* top : y ���� �ּҰ�, bottom : y ���� �ִ밪
	*/
	void Normalize();
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
	bool GetIntersection(_In_ CRavidLine<int>& refGeometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<int>* pGometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<long long>& refGeometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<long long>* pGometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<float>& refGeometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<float>* pGometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<double>& refGeometry, _Out_ CRavidGeometryArray* pGeometrayArray);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pGometry : ��� ��ü (Pointer)
	* param[out] pGeometrayArray : ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ������ ������ false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidLine<double>* pGometry, _Out_ CRavidGeometryArray* pGeometrayArray);
#pragma endregion

public:
#pragma region [Data]
	/**
	* ��ü�� �̷�� �ּ� x �� ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� �������� ��Ģ�� ���Ѿ��մϴ�.
	* 
	* T left : x �� �ּҰ����� right ���� �۰ų� ���ƾ� �մϴ�.
	*/
	T left = 0;
	/**
	* ��ü�� �̷�� �ּ� y �� ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� �������� ��Ģ�� ���Ѿ��մϴ�.
	* 
	* T top : y �� �ּҰ����� bottom ���� �۰ų� ���ƾ� �մϴ�.
	*/
	T top = 0;
	/**
	* ��ü�� �̷�� �ִ� x �� ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� �������� ��Ģ�� ���Ѿ��մϴ�.
	* 
	* T right : x �� �ִ밪���� left ���� ũ�� ���ƾ� �մϴ�.
	*/
	T right = 0;
	/**
	* ��ü�� �̷�� �ִ� y �� ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� �������� ��Ģ�� ���Ѿ��մϴ�.
	* 
	* T bottom : y �� �ִ밪���� top ���� ũ�� ���ƾ� �մϴ�.
	*/
	T bottom = 0;
	/**
	* ��ü�� ȸ�� ���¸� ��Ÿ���� ���Դϴ�.
	* ���ø� Ÿ�԰� �����ϰ� �׻� double �� �����˴ϴ�.
	* 
	* double angle : �⺻ 0 ���� �����Ǹ�, -360 ������ 360 ���� ǥ�������� �� �̻� �����մϴ�.
	*/
	double angle = 0.;
#pragma endregion
};