#pragma once

#include "RavidPoint.h"
#include "RavidGeometry.h"

/**
* "���� �Ǵ� ���� (Line)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ������ Ÿ���� int, long long, float, double �� �����մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "��"�� ���õ� Geometry �˰����� �����ϰ� �ֽ��ϴ�.
*/
template <typename T>
class AFX_EXT_CLASS CRavidLine : public CRavidGeometry
{
#include "GeometryCommonObject.hpp"

#include "GeometryVirtualInformation.hpp"
#include "GeometryVirtualOffset.hpp"
#include "GeometryVirtualRect.hpp"
#include "GeometryVirtualCenter.hpp"
#include "GeometryVirtualDeflate.hpp"
#include "GeometryVirtualInflate.hpp"
#include "GeometryVirtualOperator.hpp"
#include "GeometryVirtualRotate.hpp"
#include "GeometryVirtualShape.hpp"

#include "RavidLineCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidLine template class is able to use type within int, long long, float and double.");

	CRavidLine();
	virtual ~CRavidLine();
	
#pragma region [SetExclusiveRegion]
	/**
	* ������ ������ �ʴ� ���� ��ǥ ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* return value : false �� ��ȯ�մϴ�.
	*/
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);
#pragma endregion

#pragma region [AddExclusiveRegion]
	/**
	* ������ ������ �ʴ� ���� ��ǥ ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* return value : false �� ��ȯ�մϴ�.
	*/
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);
#pragma endregion

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
	CRavidLine<double> operator+(_In_ const int& value);
	CRavidLine<double> operator+(_In_ const long long& value);
	CRavidLine<double> operator+(_In_ const float& value);
	CRavidLine<double> operator+(_In_ const double& value);
	CRavidLine<double> operator+(_In_ const POINT& point);
	CRavidLine<double> operator+(_In_ const SIZE& size);
	CRavidLine<double> operator+(_In_ const RECT& rect);
	CRavidLine<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidLine<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidLine<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidLine<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidLine<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidLine<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidLine<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidLine<double> operator+(_In_ const CRavidLine<double>& line);
	CRavidLine<double> operator+(_In_ const CRavidRect<int>& rect);
	CRavidLine<double> operator+(_In_ const CRavidRect<long long>& rect);
	CRavidLine<double> operator+(_In_ const CRavidRect<float>& rect);
	CRavidLine<double> operator+(_In_ const CRavidRect<double>& rect);

	CRavidLine<double> operator-(_In_ const int& value);
	CRavidLine<double> operator-(_In_ const long long& value);
	CRavidLine<double> operator-(_In_ const float& value);
	CRavidLine<double> operator-(_In_ const double& value);
	CRavidLine<double> operator-(_In_ const POINT& point);
	CRavidLine<double> operator-(_In_ const SIZE& size);
	CRavidLine<double> operator-(_In_ const RECT& rect);
	CRavidLine<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidLine<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidLine<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidLine<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidLine<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidLine<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidLine<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidLine<double> operator-(_In_ const CRavidLine<double>& line);
	CRavidLine<double> operator-(_In_ const CRavidRect<int>& rect);
	CRavidLine<double> operator-(_In_ const CRavidRect<long long>& rect);
	CRavidLine<double> operator-(_In_ const CRavidRect<float>& rect);
	CRavidLine<double> operator-(_In_ const CRavidRect<double>& rect);

	CRavidLine<double> operator*(_In_ const int& value);
	CRavidLine<double> operator*(_In_ const long long& value);
	CRavidLine<double> operator*(_In_ const float& value);
	CRavidLine<double> operator*(_In_ const double& value);
	CRavidLine<double> operator*(_In_ const POINT& point);
	CRavidLine<double> operator*(_In_ const SIZE& size);
	CRavidLine<double> operator*(_In_ const RECT& rect);
	CRavidLine<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidLine<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidLine<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidLine<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidLine<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidLine<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidLine<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidLine<double> operator*(_In_ const CRavidLine<double>& line);
	CRavidLine<double> operator*(_In_ const CRavidRect<int>& rect);
	CRavidLine<double> operator*(_In_ const CRavidRect<long long>& rect);
	CRavidLine<double> operator*(_In_ const CRavidRect<float>& rect);
	CRavidLine<double> operator*(_In_ const CRavidRect<double>& rect);

	CRavidLine<double> operator/(_In_ const int& value);
	CRavidLine<double> operator/(_In_ const long long& value);
	CRavidLine<double> operator/(_In_ const float& value);
	CRavidLine<double> operator/(_In_ const double& value);
	CRavidLine<double> operator/(_In_ const POINT& point);
	CRavidLine<double> operator/(_In_ const SIZE& size);
	CRavidLine<double> operator/(_In_ const RECT& rect);
	CRavidLine<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidLine<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidLine<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidLine<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidLine<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidLine<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidLine<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidLine<double> operator/(_In_ const CRavidLine<double>& line);
	CRavidLine<double> operator/(_In_ const CRavidRect<int>& rect);
	CRavidLine<double> operator/(_In_ const CRavidRect<long long>& rect);
	CRavidLine<double> operator/(_In_ const CRavidRect<float>& rect);
	CRavidLine<double> operator/(_In_ const CRavidRect<double>& rect);
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
	* return value : ���� ��ü�� ������ �����Ƿ� 0�� ��ȯ�˴ϴ�.
	*/
	virtual double GetArea() override;
#pragma endregion
	
#pragma region [GetScalar]
	/**
	* ���� ��ü�� ������ ����մϴ�.
	*
	* return value : ���� ��ü�� ���̸� ��ȯ�˴ϴ�.
	*/
	double GetScalar();
#pragma endregion
	
#pragma region [GetUnitVector]
	/**
	* ���� ��ü�� ���� ���͸� ����մϴ�.
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector();
#pragma endregion
	
#pragma region [GetUnitVector]
	/**
	* ���� ��ü�� ����(����) ���͸� ����մϴ�.
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/	
	CRavidPoint<double> GetNormalVector();
#pragma endregion

#pragma region [Reduce]
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ ����մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� flase �� ��ȯ�մϴ�.
	*/	
	virtual bool Reduce(_In_ int halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ ����մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� flase �� ��ȯ�մϴ�.
	*/	
	virtual bool Reduce(_In_ long long halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ ����մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� flase �� ��ȯ�մϴ�.
	*/	
	virtual bool Reduce(_In_ float halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ ����մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� flase �� ��ȯ�մϴ�.
	*/	
	virtual bool Reduce(_In_ double halfSize);
#pragma endregion
	
#pragma region [Reduce]
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ Ȯ���մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/	
	virtual bool Extend(_In_ int halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ Ȯ���մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/	
	virtual bool Extend(_In_ long long halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ Ȯ���մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/	
	virtual bool Extend(_In_ float halfSize);
	/**
	* ���� ��ü�� ���̸� �Էµ� ������ 2�� ��ŭ Ȯ���մϴ�.
	*
	* param[in] halfSize : ����
	* 
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/	
	virtual bool Extend(_In_ double halfSize);
#pragma endregion

#pragma region [GetPointsDirection]
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ double x, _In_ double y);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>& refPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>* pPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>& refPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>* pPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>& refPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>* pPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>& refPoint);
	/**
	* 1��° ���� ��ǥ�� ��� ��ǥ�� �̿��Ͽ� 2��° ���� ��ǥ�� ���⼺�� ����մϴ�. (this.pt1 - (x, y) - this.pt2)
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>* pPoint);
#pragma endregion
	
#pragma region [InfiniteLine]
	/**
	* ���� ��ü�� ������ �������� Ȯ���մϴ�.
	*
	* return value : ������ ������ ture, ������ false �� ��ȯ�մϴ�.
	*/
	bool IsInfiniteLine();
	/**
	* ���� ��ü�� ������ �������� ����մϴ�.
	*
	* return value : Ravid ���� �����ϴ� ������ ������ ��ȯ�մϴ�.
	*/
	CRavidLine<double> GetInfiniteLine();
#pragma endregion
	
#pragma region [Equation]
	/**
	* ������ ������ �Ϲ��� A, B, C �� ����մϴ�.
	*
	* param[in] refA : x ��� (Reference)
	* param[in] refB : y ��� (Reference)
	* param[in] refC : x, y ��� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquation(_Out_ double& refA, _Out_ double& refB, _Out_ double& refC);
	/**
	* ������ ������ �Ϲ��� A, B, C �� ����մϴ�.
	*
	* param[in] pA : x ��� (Pointer)
	* param[in] pB : y ��� (Pointer)
	* param[in] pC : x, y ��� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquation(_Out_ double* pA, _Out_ double* pB, _Out_ double* pC);
	/**
	* ������ ������ �Ϲ��� A, B, C �� ����Ͽ� ���� ��ü�� �������� ����ϴ�.
	*
	* param[in] dblA : x ���
	* param[in] dblB : y ���
	* param[in] dblC : x, y ���
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetEquation(_In_ double dblA, _In_ double dblB, _In_ double dblC = 0.0);
	/**
	* x �� ���� ������ ������ ǥ������ ����մϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] refYCoefficient : y ��� (Reference)
	* param[in] refConstant : ����� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquationForX(_Out_ double& refYCoefficient, _Out_ double& refConstant);
	/**
	* x �� ���� ������ ������ ǥ������ ����մϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] pYCoefficient : y ��� (Pointer)
	* param[in] pConstant : ����� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquationForX(_Out_ double* pYCoefficient, _Out_ double* pConstant);
	/**
	* y �� ���� ������ ������ ǥ������ ����մϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] refXCoefficient : x ��� (Reference)
	* param[in] refConstant : ����� (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquationForY(_Out_ double& refXCoefficient, _Out_ double& refConstant);
	/**
	* y �� ���� ������ ������ ǥ������ ����մϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] pXCoefficient : x ��� (Pointer)
	* param[in] pConstant : ����� (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetEquationForY(_Out_ double* pXCoefficient, _Out_ double* pConstant);
	/**
	* x �� ���� ������ ������ ǥ������ ����Ͽ� ���� ��ü�� �������� ����ϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] dblYCoefficient : y ���
	* param[in] dblConstant : �����
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetEquationForX(_In_ double dblYCoefficient, _In_ double dblConstant);
	/**
	* y �� ���� ������ ������ ǥ������ ����Ͽ� ���� ��ü�� �������� ����ϴ�.
	* ������ ������ �߻��մϴ�.
	*
	* param[in] dblXCoefficient : x ���
	* param[in] dblConstant : �����
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetEquationForY(_In_ double dblXCoefficient, _In_ double dblConstant);
#pragma endregion
	
#pragma region [GetIntersection]
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refLine : x, y ��ǥ (Reference)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<int>& refLine);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pLine : x, y ��ǥ (Pointer)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<int>* pLine);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refLine : x, y ��ǥ (Reference)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<long long>& refLine);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pLine : x, y ��ǥ (Pointer)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<long long>* pLine);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refLine : x, y ��ǥ (Reference)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<float>& refLine);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pLine : x, y ��ǥ (Pointer)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<float>* pLine);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] refLine : x, y ��ǥ (Reference)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<double>& refLine);
	/**
	* ���� ��ü�� ��� �������� ������ ����մϴ�.
	* ������ ��쿡�� ���� ���� ����մϴ�.
	*
	* param[in] pLine : x, y ��ǥ (Pointer)
	*
	* return value : ������ ������ INF �� ������ ������ ��ǥ�� ��ȯ�˴ϴ�.
	*/
	CRavidPoint<double> GetIntersection(_In_ CRavidLine<double>* pLine);
#pragma endregion

#pragma region [GetIntersection]
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<int>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<long long>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<float>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<double>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidRect<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<int>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<long long>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<float>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<double>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidQuadrangle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<int>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<long long>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<float>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<double>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidCircle<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<int>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<int>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<long long>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<long long>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<float>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<float>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<double>& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidEllipse<double>* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] refGeometry : ��� ��ü (Reference)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidPolygon& refGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
	/**
	* ���� ��ü�� ��� ��ü���� ������ ����Ͽ� ���ڰ����� ��ȯ�մϴ�.
	*
	* param[in] pGeometry : ��� ��ü (Pointer)
	* param[out] pGeometryArray : ���� ��ü ����Ʈ (Pointer)
	*
	* return value : ������ ���ų� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetIntersection(_In_ CRavidPolygon* pGeometry, _Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetOrthogonalDistance]
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ����մϴ�.
	* ����, ���� ������� �ִ� �Ÿ��� ����մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [GetOrthogonalPoint]
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] refPoint : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ü�� ��� ��ǥ���� �ִܰŸ�(����)�� ��ǥ�� ����մϴ�.
	* ������ ��쿡�� �������� ��ġ�ؾ߸� �մϴ�.
	*
	* param[in] pPoint : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [GetAngle]
	/**
	* ���� ��ü�� ������ ����մϴ�.
	* �ε��� 0 ��ǥ�� �߽����� �ε��� 1 ��ǥ�� ������ ����մϴ�.
	*
	* return value : ��꿡 �����ϸ� INF �� ���� ��ȯ�մϴ�.
	*/
	virtual double GetAngle() override;
#pragma endregion

#pragma region [GetInteriorAngle]
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<double>* pPoint);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refLine : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<int>& refLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pLine : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<int>* pLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refLine : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<long long>& refLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pLine : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<long long>* pLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refLine : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<float>& refLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pLine : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<float>* pLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] refLine : ��� ��ü (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<double>& refLine);
	/**
	* ���� ��ü�� 2���� ��� ��ü�� 2 ��ǥ�� �̿��� ���̰��� ����մϴ�.
	* 
	* param[in] pLine : ��� ��ü (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidLine<double>* pLine);
#pragma endregion

#pragma region [GetCircumcenter]
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint : ��� ��ü ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ü�� 2���� ��밴ü 1 ��ǥ�� �̿��� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint : ��� ��ü ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� INF �� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

public:
#pragma region [Data]
	/**
	* ��ü�� �̷�� �� �� x, y ��ǥ�� ��Ÿ����, 2���� �迭�� ���ǵ˴ϴ�.
	* ���� ��꿡�� ����� �� �ε��� 0 �� ��ǥ�� �������� �ε��� 1�� ��ǥ�� ����մϴ�.
	* 
	* CRavidPoint<T> rpPoints[2] : CRavidPoint Ŭ������ CRavidLine Ŭ������ ���ø� Ÿ������ �����˴ϴ�.
	*/
	CRavidPoint<T> rpPoints[2];
#pragma endregion
};