#pragma once

#include "RavidGeometry.h"

/**
* "�� (Point)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ������ Ÿ���� int, long long, float, double �� �����մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "��"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
template <typename T>
class AFX_EXT_CLASS CRavidPoint : public CRavidGeometry
{
#include "GeometryCommonObject.hpp"

#include "GeometryVirtualInformation.hpp"
#include "GeometryVirtualOffset.hpp"
#include "GeometryVirtualRect.hpp"
#include "GeometryVirtualCenter.hpp"
#include "GeometryVirtualOperator.hpp"
#include "GeometryVirtualShape.hpp"
	
#include "GeometryVirtualRotate.hpp"

#include "RavidPointCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidPoint template class is able to use type within int, long long, float and double.");

	CRavidPoint();
	virtual ~CRavidPoint();
	
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
#pragma endregion

#pragma region [Comparison operator]
	bool operator==(_In_ const POINT& point);
	bool operator==(_In_ const SIZE& size);
	bool operator==(_In_ const CRavidPoint<int>& point);
	bool operator==(_In_ const CRavidPoint<long long>& point);
	bool operator==(_In_ const CRavidPoint<float>& point);
	bool operator==(_In_ const CRavidPoint<double>& point);

	bool operator!=(_In_ const POINT& point);
	bool operator!=(_In_ const SIZE& size);
	bool operator!=(_In_ const CRavidPoint<int>& point);
	bool operator!=(_In_ const CRavidPoint<long long>& point);
	bool operator!=(_In_ const CRavidPoint<float>& point);
	bool operator!=(_In_ const CRavidPoint<double>& point);
#pragma endregion

#pragma region [Arithmetic operator]
	CRavidPoint<double> operator+(_In_ const int& value);
	CRavidPoint<double> operator+(_In_ const long long& value);
	CRavidPoint<double> operator+(_In_ const float& value);
	CRavidPoint<double> operator+(_In_ const double& value);
	CRavidPoint<double> operator+(_In_ const POINT& point);
	CRavidPoint<double> operator+(_In_ const SIZE& size);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator+(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator-(_In_ const int& value);
	CRavidPoint<double> operator-(_In_ const long long& value);
	CRavidPoint<double> operator-(_In_ const float& value);
	CRavidPoint<double> operator-(_In_ const double& value);
	CRavidPoint<double> operator-(_In_ const POINT& point);
	CRavidPoint<double> operator-(_In_ const SIZE& size);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator-(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator*(_In_ const int& value);
	CRavidPoint<double> operator*(_In_ const long long& value);
	CRavidPoint<double> operator*(_In_ const float& value);
	CRavidPoint<double> operator*(_In_ const double& value);
	CRavidPoint<double> operator*(_In_ const POINT& point);
	CRavidPoint<double> operator*(_In_ const SIZE& size);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator*(_In_ const CRavidPoint<double>& point);

	CRavidPoint<double> operator/(_In_ const int& value);
	CRavidPoint<double> operator/(_In_ const long long& value);
	CRavidPoint<double> operator/(_In_ const float& value);
	CRavidPoint<double> operator/(_In_ const double& value);
	CRavidPoint<double> operator/(_In_ const POINT& point);
	CRavidPoint<double> operator/(_In_ const SIZE& size);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidPoint<double> operator/(_In_ const CRavidPoint<double>& point);
#pragma endregion

#pragma region [GetRect]
	/**
	* ���� ��ǥ�� CRavidRect<T> ���·� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ü�� ���̹Ƿ� left == right, top == bottom �� ������ ��ȯ�մϴ�.
	*/
	virtual CRavidRect<T> GetRect();
#pragma endregion

#pragma region [GetPointStruct]
	/**
	* POINT ����ü�� ����ϴ� ȯ���� ���� ���� ��ǥ�� POINT ����ü�� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ǥ�� POINT ����ü�� ���� ��ȯ�մϴ�.
	*/
	virtual POINT GetPointStruct() override;
#pragma endregion

#pragma region [GetRectStruct]
	/**
	* RECT ����ü�� ����ϴ� ȯ���� ���� ���� ��ǥ�� RECT ����ü�� ��� ��ȯ�մϴ�.
	*
	* return value : ���� ��ü�� ���̹Ƿ� left == right, top == bottom �� ������ ��ȯ�մϴ�.
	*/
	virtual RECT GetRectStruct() override;
#pragma endregion
	
#pragma region [GetCenter]
	/**
	* ���� ��ǥ�� �߽��� ����մϴ�.
	*
	* return value : ���� ��ü�� ���̹Ƿ� ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCenter();
#pragma endregion

#pragma region [GetCenterOfGravity]
	/**
	* ���� ��ǥ�� ���� �߽��� ����մϴ�.
	*
	* return value : ���� ��ü�� ���̹Ƿ� ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCenterOfGravity();
#pragma endregion

#pragma region [GetPointsDirection]
	
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] x1 : 1��° x ��ǥ
	* param[in] y1 : 1��° y ��ǥ
	* param[in] x2 : 2��° x ��ǥ
	* param[in] y2 : 2��° y ��ǥ
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>& refPoint1, _In_ CRavidPoint<int>& refPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>& refPoint1, _In_ CRavidPoint<long long>& refPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>& refPoint1, _In_ CRavidPoint<float>& refPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>& refPoint1, _In_ CRavidPoint<double>& refPoint2);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2);	
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refLine : �� ��ǥ�� ���� �Ǵ� ���� (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<int>& refLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pLine : �� ��ǥ�� ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<int>* pLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refLine : �� ��ǥ�� ���� �Ǵ� ���� (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<long long>& refLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pLine : �� ��ǥ�� ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<long long>* pLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] refLine : �� ��ǥ�� ���� �Ǵ� ���� (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<float>& refLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	*
	* param[in] pLine : �� ��ǥ�� ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<float>* pLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	* 
	* param[in] refLine : �� ��ǥ�� ���� �Ǵ� ���� (Reference)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<double>& refLine);
	/**
	* 1��° ��� ��ġ�� ���� ��ġ�� �̿��Ͽ� 2��° ��� ��ǥ�� ���⼺�� ����մϴ�. (pt1 - this - pt2)
	* 
	* param[in] pLine : �� ��ǥ�� ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��� ����� ERavidPointsDirection �� ��ȯ�մϴ�.
	*                ERavidPointsDirection_Invalid : ��� ���� Ȥ�� ���� �߻�
	*                ERavidPointsDirection_CW : �ð� ����
	*                ERavidPointsDirection_CCW : �ݽð� ����
	*                ERavidPointsDirection_Straight : ������ ����	
	*/
	ERavidPointsDirection GetPointsDirection(_In_ CRavidLine<double>* pLine);
#pragma endregion

#pragma region [Rotate]
	/**
	* ��� ��ġ�� �������� ���� �� ��ŭ ���� ��ġ�� ȸ���մϴ�.
	* 
	* param[in] dblAngle : ȸ������
	* param[in] cx : �߽� x ��ǥ
	* param[in] cy : �߽� y ��ǥ	
	*
	* return value : true�� ��ȯ�մϴ�.
	*/
	bool Rotate(_In_ double dblAngle, _In_ double cx, _In_ double cy);
#pragma endregion

#pragma region [GetDistance]
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ double x, _In_ double y);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� �Ÿ��� ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� double�θ� ��ȯ�մϴ�.
	*/
	double GetDistance(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [GetOrthogonalPoint]
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<int>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<int>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<long long>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<long long>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<float>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<float>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<double>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) ��ġ�� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetOrthogonalPoint(_In_ CRavidLine<double>* pLine);
#pragma endregion

#pragma region [GetOrthogonalDistance]
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<int>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<int>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<long long>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<long long>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<float>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<float>* pLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] refLine : ���� �Ǵ� ���� (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<double>& refLine);
	/**
	* ���� ��ġ�� �������� ��� ��ü���� ���� ª�� ����(����) �Ÿ��� ����մϴ�.
	* 
	* param[in] pLine : ���� �Ǵ� ���� (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf) �� ���� ��ȯ�մϴ�.
	*/
	double GetOrthogonalDistance(_In_ CRavidLine<double>* pLine);
#pragma endregion

#pragma region [GetAngle]
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] x : x ��ǥ
	* param[in] y : y ��ǥ
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ double x, _In_ double y);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] refPoint : ���� x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ������ ����մϴ�.
	* 
	* param[in] pPoint : ���� x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetAngle(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [GetInteriorAngle]
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] x1 : ���� x ��ǥ
	* param[in] y1 : ���� y ��ǥ
	* param[in] x3 : ������ x ��ǥ
	* param[in] y3 : ������ y ��ǥ
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ double x1, _In_ double y1, _In_ double x3, _In_ double y3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] refPoint1 : ���� x, y ��ǥ (Reference)
	* param[in] refPoint3 : ������ x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<int>& refPoint1, _In_ CRavidPoint<int>& refPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] pPoint1 : ���� x, y ��ǥ (Pointer)
	* param[in] pPoint3 : ������ x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] refPoint1 : ���� x, y ��ǥ (Reference)
	* param[in] refPoint3 : ������ x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<long long>& refPoint1, _In_ CRavidPoint<long long>& refPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] pPoint1 : ���� x, y ��ǥ (Pointer)
	* param[in] pPoint3 : ������ x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] refPoint1 : ���� x, y ��ǥ (Reference)
	* param[in] refPoint3 : ������ x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<float>& refPoint1, _In_ CRavidPoint<float>& refPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] pPoint1 : ���� x, y ��ǥ (Pointer)
	* param[in] pPoint3 : ������ x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] refPoint1 : ���� x, y ��ǥ (Reference)
	* param[in] refPoint3 : ������ x, y ��ǥ (Reference)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<double>& refPoint1, _In_ CRavidPoint<double>& refPoint3);
	/**
	* 2���� ��� ��ġ�� ���� ��ġ�� ���̰��� ����մϴ�. (pt1 - this - pt3)
	* 
	* param[in] pPoint1 : ���� x, y ��ǥ (Pointer)
	* param[in] pPoint3 : ������ x, y ��ǥ (Pointer)
	*
	* return value : ��� ����� Degree �� ��ȯ�մϴ�.
	*/
	double GetInteriorAngle(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint3);
#pragma endregion

#pragma region [GetCircumcenter]
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] x1 : 1��° x ��ǥ
	* param[in] y1 : 1��° y ��ǥ
	* param[in] x2 : 2��° x ��ǥ
	* param[in] y2 : 2��° y ��ǥ
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ double x1, _In_ double y1, _In_ double x2, _In_ double y2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>& refPoint1, _In_ CRavidPoint<int>& refPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<int>* pPoint1, _In_ CRavidPoint<int>* pPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>& refPoint1, _In_ CRavidPoint<long long>& refPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<long long>* pPoint1, _In_ CRavidPoint<long long>* pPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>& refPoint1, _In_ CRavidPoint<float>& refPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<float>* pPoint1, _In_ CRavidPoint<float>* pPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] refPoint1 : 1��° x, y ��ǥ (Reference)
	* param[in] refPoint2 : 2��° x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>& refPoint1, _In_ CRavidPoint<double>& refPoint2);
	/**
	* ���� ��ġ�� 2���� ��� ��ġ�� �̿��Ͽ� �������� �߽��� ����մϴ�.
	* 
	* param[in] pPoint1 : 1��° x, y ��ǥ (Pointer)
	* param[in] pPoint2 : 2��° x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� ���Ѵ� (Inf, Inf) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetCircumcenter(_In_ CRavidPoint<double>* pPoint1, _In_ CRavidPoint<double>* pPoint2);
#pragma endregion

#pragma region [GetUnitVector]
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] tx : x ��ǥ
	* param[in] ty : y ��ǥ
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ double tx, _In_ double ty);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ġ�� �������� ��� ��ġ���� ���� ���͸� ����մϴ�.
	* 
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetUnitVector(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [GetNormalVector]
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] tx : x ��ǥ
	* param[in] ty : y ��ǥ
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ double tx, _In_ double ty);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<int>& refPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<int>* pPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<long long>& refPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<long long>* pPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<float>& refPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<float>* pPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] refPoint : x, y ��ǥ (Reference)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<double>& refPoint);
	/**
	* ���� ��ġ�� ��� ��ġ�� ����(����) ���͸� ����մϴ�.
	*
	* param[in] pPoint : x, y ��ǥ (Pointer)
	*
	* return value : ��꿡 �����ϸ� (0, 0) �� ���� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> GetNormalVector(_In_ CRavidPoint<double>* pPoint);
#pragma endregion

#pragma region [MakeCrossHair]
	/**
	* ���� ��ġ�� ���ڰ� ���·� �����Ͽ� �������ϴ�.
	*
	* param[in_opt] dblLineLength : ����, ���� ����
	* param[in_opt] bDiagonal : ���ڰ��� ȸ�� ����
	*                       true : 45�� ȸ���� �밢�� / false : 0�� ����,����
	*
	* return value : CRavidGeometryArray ��ȯ ���¸� ����ϸ� ���ڰ� ������ ��ü array �� ��ȯ�մϴ�.
	*/
	CRavidGeometryArray MakeCrossHair(_In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);
	/**
	* ���� ��ġ�� ���ڰ� ���·� �����Ͽ� �������ϴ�.
	*
	* param[out] refGeometryArray : ���ڰ� ������ ��ü array (Reference)
	* param[in_opt] dblLineLength : ����, ���� ����
	* param[in_opt] bDiagonal : ���ڰ��� ȸ�� ����
	*                       true : 45�� ȸ���� �밢�� / false : 0�� ����,����
	*
	* return value : bool ��ȯ ���¸� ����ϸ� ���� ���θ� ��ȯ�մϴ�.
	*/
	bool MakeCrossHair(_Out_ CRavidGeometryArray& refGeometryArray, _In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);
	/**
	* ���� ��ġ�� ���ڰ� ���·� �����Ͽ� �������ϴ�.
	*
	* param[out] pGeometryArray : ���ڰ� ������ ��ü array (Pointer)
	* param[in_opt] dblLineLength : ����, ���� ����
	* param[in_opt] bDiagonal : ���ڰ��� ȸ�� ����
	*                       true : 45�� ȸ���� �밢�� / false : 0�� ����,����
	*
	* return value : bool ��ȯ ���¸� ����ϸ� ���� ���θ� ��ȯ�մϴ�.
	*/
	bool MakeCrossHair(_Out_ CRavidGeometryArray* pGeometryArray, _In_opt_ double dblLineLength = 1., _In_opt_ bool bDiagonal = false);
#pragma endregion

public:
#pragma region [Data]
	/**
	* ��ü�� �̷�� x ��ǥ�� ��Ÿ���ϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* 
	* T x : ȭ�� �� �̹����� �߽����� ���ι���
	*/
	T x;
	/**
	* ��ü�� �̷�� y ��ǥ�� ��Ÿ���ϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* 
	* T y : ȭ�� �� �̹����� �߽����� ���ι���
	*/
	T y;
#pragma endregion
};