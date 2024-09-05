#pragma once

#include "RavidGeometry.h"
#include "RavidPoint.h"

/**
* "�簢�� (Quadrangle)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ������ Ÿ���� int, long long, float, double �� �����մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "�簢��"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
template <typename T>
class AFX_EXT_CLASS CRavidQuadrangle : public CRavidGeometry
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

#include "RavidQuadrangleCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidQuadrangle template class is able to use type within int, long long, float and double.");

	CRavidQuadrangle();
	virtual ~CRavidQuadrangle();

#pragma region [Assignment operator]
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
#pragma endregion

#pragma region [Comparison operator]
	bool operator==(_In_ const CRavidQuadrangle<int>& quad);
	bool operator==(_In_ const CRavidQuadrangle<long long>& quad);
	bool operator==(_In_ const CRavidQuadrangle<float>& quad);
	bool operator==(_In_ const CRavidQuadrangle<double>& quad);

	bool operator!=(_In_ const CRavidQuadrangle<int>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<long long>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<float>& quad);
	bool operator!=(_In_ const CRavidQuadrangle<double>& quad);
#pragma endregion

#pragma region [Arithmetic and assignment operator]
	void operator+=(_In_ const CRavidLine<int>& line);
	void operator+=(_In_ const CRavidLine<long long>& line);
	void operator+=(_In_ const CRavidLine<float>& line);
	void operator+=(_In_ const CRavidLine<double>& line);
	void operator+=(_In_ const CRavidQuadrangle<int>& quad);
	void operator+=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator+=(_In_ const CRavidQuadrangle<float>& quad);
	void operator+=(_In_ const CRavidQuadrangle<double>& quad);

	void operator-=(_In_ const CRavidLine<int>& line);
	void operator-=(_In_ const CRavidLine<long long>& line);
	void operator-=(_In_ const CRavidLine<float>& line);
	void operator-=(_In_ const CRavidLine<double>& line);
	void operator-=(_In_ const CRavidQuadrangle<int>& quad);
	void operator-=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator-=(_In_ const CRavidQuadrangle<float>& quad);
	void operator-=(_In_ const CRavidQuadrangle<double>& quad);

	void operator*=(_In_ const CRavidLine<int>& line);
	void operator*=(_In_ const CRavidLine<long long>& line);
	void operator*=(_In_ const CRavidLine<float>& line);
	void operator*=(_In_ const CRavidLine<double>& line);
	void operator*=(_In_ const CRavidQuadrangle<int>& quad);
	void operator*=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator*=(_In_ const CRavidQuadrangle<float>& quad);
	void operator*=(_In_ const CRavidQuadrangle<double>& quad);

	void operator/=(_In_ const CRavidLine<int>& line);
	void operator/=(_In_ const CRavidLine<long long>& line);
	void operator/=(_In_ const CRavidLine<float>& line);
	void operator/=(_In_ const CRavidLine<double>& line);
	void operator/=(_In_ const CRavidQuadrangle<int>& quad);
	void operator/=(_In_ const CRavidQuadrangle<long long>& quad);
	void operator/=(_In_ const CRavidQuadrangle<float>& quad);
	void operator/=(_In_ const CRavidQuadrangle<double>& quad);
#pragma endregion

#pragma region [Arithmetic operator]
	CRavidQuadrangle<double> operator+(_In_ const int& value);
	CRavidQuadrangle<double> operator+(_In_ const long long& value);
	CRavidQuadrangle<double> operator+(_In_ const float& value);
	CRavidQuadrangle<double> operator+(_In_ const double& value);
	CRavidQuadrangle<double> operator+(_In_ const POINT& point);
	CRavidQuadrangle<double> operator+(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator+(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator-(_In_ const int& value);
	CRavidQuadrangle<double> operator-(_In_ const long long& value);
	CRavidQuadrangle<double> operator-(_In_ const float& value);
	CRavidQuadrangle<double> operator-(_In_ const double& value);
	CRavidQuadrangle<double> operator-(_In_ const POINT& point);
	CRavidQuadrangle<double> operator-(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator-(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator*(_In_ const int& value);
	CRavidQuadrangle<double> operator*(_In_ const long long& value);
	CRavidQuadrangle<double> operator*(_In_ const float& value);
	CRavidQuadrangle<double> operator*(_In_ const double& value);
	CRavidQuadrangle<double> operator*(_In_ const POINT& point);
	CRavidQuadrangle<double> operator*(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator*(_In_ const CRavidQuadrangle<double>& quad);

	CRavidQuadrangle<double> operator/(_In_ const int& value);
	CRavidQuadrangle<double> operator/(_In_ const long long& value);
	CRavidQuadrangle<double> operator/(_In_ const float& value);
	CRavidQuadrangle<double> operator/(_In_ const double& value);
	CRavidQuadrangle<double> operator/(_In_ const POINT& point);
	CRavidQuadrangle<double> operator/(_In_ const SIZE& size);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidLine<double>& line);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<int>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<long long>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<float>& quad);
	CRavidQuadrangle<double> operator/(_In_ const CRavidQuadrangle<double>& quad);
#pragma endregion
	
#pragma region [GetRect]
	/**
	* ���� ��ü�� CRavidRect<T> ���·� ��� ��ȯ�մϴ�.
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
	* ��ü�� �̷�� 4�� �� x, y ��ǥ�� ��Ÿ����, CRavidPoint 4���� �迭�� ���ǵ˴ϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �ϰ��� ��ǥ ���⼺�� ������ �մϴ�.
	*
	* CRavidPoint<T> rpPoints[2] : CRavidPoint Ŭ������ CRavidQuadrangle Ŭ������ ���ø� Ÿ������ �����˴ϴ�.
	*/
	CRavidPoint<T> rpPoints[4];
#pragma endregion
};

