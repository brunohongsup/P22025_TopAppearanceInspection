#pragma once

#include "RavidGeometry.h"

/**
* "Ÿ�� or Arc (Ellipse)" �� ǥ���ϴ� Ŭ�����Դϴ�.
* ������ Ÿ���� int, long long, float, double �� �����մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "Ÿ����"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
template <typename T>
class AFX_EXT_CLASS CRavidEllipse : public CRavidGeometry
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

#include "RavidEllipseCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	static_assert(CheckIntegerAndRealNumber<T>::value, "CRavidEllipse template class is able to use type within int, long long, float and double.");

	CRavidEllipse();
	virtual ~CRavidEllipse();

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
#pragma endregion


#pragma region [Comparison operator]
	bool operator==(_In_ const CRavidCircle<int>& cir);
	bool operator==(_In_ const CRavidCircle<long long>& cir);
	bool operator==(_In_ const CRavidCircle<float>& cir);
	bool operator==(_In_ const CRavidCircle<double>& cir);
	bool operator==(_In_ const CRavidEllipse<int>& ell);
	bool operator==(_In_ const CRavidEllipse<long long>& ell);
	bool operator==(_In_ const CRavidEllipse<float>& ell);
	bool operator==(_In_ const CRavidEllipse<double>& ell);

	bool operator!=(_In_ const CRavidCircle<int>& cir);
	bool operator!=(_In_ const CRavidCircle<long long>& cir);
	bool operator!=(_In_ const CRavidCircle<float>& cir);
	bool operator!=(_In_ const CRavidCircle<double>& cir);
	bool operator!=(_In_ const CRavidEllipse<int>& ell);
	bool operator!=(_In_ const CRavidEllipse<long long>& ell);
	bool operator!=(_In_ const CRavidEllipse<float>& ell);
	bool operator!=(_In_ const CRavidEllipse<double>& ell);
#pragma endregion

#pragma region [CopyArithmetic and assignment operator]
	void operator+=(_In_ const CRavidLine<int>& line);
	void operator+=(_In_ const CRavidLine<long long>& line);
	void operator+=(_In_ const CRavidLine<float>& line);
	void operator+=(_In_ const CRavidLine<double>& line);

	void operator-=(_In_ const CRavidLine<int>& line);
	void operator-=(_In_ const CRavidLine<long long>& line);
	void operator-=(_In_ const CRavidLine<float>& line);
	void operator-=(_In_ const CRavidLine<double>& line);

	void operator*=(_In_ const CRavidLine<int>& line);
	void operator*=(_In_ const CRavidLine<long long>& line);
	void operator*=(_In_ const CRavidLine<float>& line);
	void operator*=(_In_ const CRavidLine<double>& line);

	void operator/=(_In_ const CRavidLine<int>& line);
	void operator/=(_In_ const CRavidLine<long long>& line);
	void operator/=(_In_ const CRavidLine<float>& line);
	void operator/=(_In_ const CRavidLine<double>& line);
#pragma endregion

#pragma region [Arithmetic operator]
	CRavidEllipse<double> operator+(_In_ const int& value);
	CRavidEllipse<double> operator+(_In_ const long long& value);
	CRavidEllipse<double> operator+(_In_ const float& value);
	CRavidEllipse<double> operator+(_In_ const double& value);
	CRavidEllipse<double> operator+(_In_ const POINT& point);
	CRavidEllipse<double> operator+(_In_ const SIZE& size);
	CRavidEllipse<double> operator+(_In_ const CRavidPoint<int>& point);
	CRavidEllipse<double> operator+(_In_ const CRavidPoint<long long>& point);
	CRavidEllipse<double> operator+(_In_ const CRavidPoint<float>& point);
	CRavidEllipse<double> operator+(_In_ const CRavidPoint<double>& point);
	CRavidEllipse<double> operator+(_In_ const CRavidLine<int>& line);
	CRavidEllipse<double> operator+(_In_ const CRavidLine<long long>& line);
	CRavidEllipse<double> operator+(_In_ const CRavidLine<float>& line);
	CRavidEllipse<double> operator+(_In_ const CRavidLine<double>& line);

	CRavidEllipse<double> operator-(_In_ const int& value);
	CRavidEllipse<double> operator-(_In_ const long long& value);
	CRavidEllipse<double> operator-(_In_ const float& value);
	CRavidEllipse<double> operator-(_In_ const double& value);
	CRavidEllipse<double> operator-(_In_ const POINT& point);
	CRavidEllipse<double> operator-(_In_ const SIZE& size);
	CRavidEllipse<double> operator-(_In_ const CRavidPoint<int>& point);
	CRavidEllipse<double> operator-(_In_ const CRavidPoint<long long>& point);
	CRavidEllipse<double> operator-(_In_ const CRavidPoint<float>& point);
	CRavidEllipse<double> operator-(_In_ const CRavidPoint<double>& point);
	CRavidEllipse<double> operator-(_In_ const CRavidLine<int>& line);
	CRavidEllipse<double> operator-(_In_ const CRavidLine<long long>& line);
	CRavidEllipse<double> operator-(_In_ const CRavidLine<float>& line);
	CRavidEllipse<double> operator-(_In_ const CRavidLine<double>& line);

	CRavidEllipse<double> operator*(_In_ const int& value);
	CRavidEllipse<double> operator*(_In_ const long long& value);
	CRavidEllipse<double> operator*(_In_ const float& value);
	CRavidEllipse<double> operator*(_In_ const double& value);
	CRavidEllipse<double> operator*(_In_ const POINT& point);
	CRavidEllipse<double> operator*(_In_ const SIZE& size);
	CRavidEllipse<double> operator*(_In_ const CRavidPoint<int>& point);
	CRavidEllipse<double> operator*(_In_ const CRavidPoint<long long>& point);
	CRavidEllipse<double> operator*(_In_ const CRavidPoint<float>& point);
	CRavidEllipse<double> operator*(_In_ const CRavidPoint<double>& point);
	CRavidEllipse<double> operator*(_In_ const CRavidLine<int>& line);
	CRavidEllipse<double> operator*(_In_ const CRavidLine<long long>& line);
	CRavidEllipse<double> operator*(_In_ const CRavidLine<float>& line);
	CRavidEllipse<double> operator*(_In_ const CRavidLine<double>& line);

	CRavidEllipse<double> operator/(_In_ const int& value);
	CRavidEllipse<double> operator/(_In_ const long long& value);
	CRavidEllipse<double> operator/(_In_ const float& value);
	CRavidEllipse<double> operator/(_In_ const double& value);
	CRavidEllipse<double> operator/(_In_ const POINT& point);
	CRavidEllipse<double> operator/(_In_ const SIZE& size);
	CRavidEllipse<double> operator/(_In_ const CRavidPoint<int>& point);
	CRavidEllipse<double> operator/(_In_ const CRavidPoint<long long>& point);
	CRavidEllipse<double> operator/(_In_ const CRavidPoint<float>& point);
	CRavidEllipse<double> operator/(_In_ const CRavidPoint<double>& point);
	CRavidEllipse<double> operator/(_In_ const CRavidLine<int>& line);
	CRavidEllipse<double> operator/(_In_ const CRavidLine<long long>& line);
	CRavidEllipse<double> operator/(_In_ const CRavidLine<float>& line);
	CRavidEllipse<double> operator/(_In_ const CRavidLine<double>& line);
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

#pragma region [GetMinimumEnclosingRectangle]
	/**
	* ���� ��ü�� �ּҸ��� �簢���� ����մϴ�.
	*
	* return value : 4 ��ǥ�� �簢������ ��ȯ�մϴ�.
	*/
	virtual CRavidQuadrangle<double> GetMinimumEnclosingRectangle();
#pragma endregion

#pragma region [GetRadius]
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ int& refRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ int* pRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ long long& refRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ long long* pRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ float& refRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ float* pRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ double& refRadius);
	/**
	* ���� ��ü�� x�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius1(_Out_ double* pRadius);
	
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ int& refRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ int* pRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ long long& refRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ long long* pRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ float& refRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ float* pRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] refRadius : ������ �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ double& refRadius);
	/**
	* ���� ��ü�� y�� �������� ��ȯ�մϴ�.
	*
	* param[out] pRadius : ������ �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetRadius2(_Out_ double* pRadius);
#pragma endregion

#pragma region [GetDiameter]
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] refRadius : �� �������� �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ int& refRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] pRadius : �� �������� �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ int* pRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] refRadius : �� �������� �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ long long& refRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] pRadius : �� �������� �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ long long* pRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] refRadius : �� �������� �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ float& refRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] pRadius : �� �������� �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ float* pRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] refRadius : �� �������� �� ��ȯ (Reference)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ double& refRadius);
	/**
	* ���� ��ü�� xy �������� ���� ��ȯ�մϴ�.
	*
	* param[out] pRadius : �� �������� �� ��ȯ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetDiameter(_Out_ double* pRadius);
#pragma endregion
	
#pragma region [GetCircumference]
	/**
	* ���� ��ü �ѷ��� ����մϴ�.
	*
	* return value : �ѷ��� ����մϴ�. ��ä�� ���¿� ���� ������ �߽��� �Ÿ��� �ִ� ������ �������� �ʽ��ϴ�.
	*/
	double GetCircumference();
#pragma endregion
	
#pragma region [Arc]
	/**
	* ���� ��ü�� ���°� ��ä��, �ݿ��� ���� Arc �� �������� ��ȯ�մϴ�.
	*
	* return value : �����Ͱ� Ÿ��(360��)�� ��쿡�� false �� ��ȯ�մϴ�.
	*/
	bool IsArc();	
	/**
	* ���� ��ü�� ��� �� ����, �߽��� ��� ������ ������ �����մϴ�.
	* Ÿ���� ��� �� ������ ����� ���·� �����˴ϴ�.
	*
	* param[in] eClosingMethod : ERavidArcClosingMethod �� ���ǵ� enum ��
	*							 ERavidArcClosingMethod_NoClose : �� ������ ������� �ʴ� ����
	*							 ERavidArcClosingMethod_EachOther : �� ������ ����� ����
	*							 ERavidArcClosingMethod_Center : �� ������ �߽��� ����� ����
	*
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool SetArcClosingMethod(_In_ ERavidArcClosingMethod eClosingMethod);
	/**
	* ������ ���� ���� ����� �����ɴϴ�.
	* Ÿ���� ��� ERavidArcClosingMethod_EachOther �� ���� ��ȯ�մϴ�.
	*
	* return value : ERavidArcClosingMethod �� ���ǵ� enum ������ ��ȯ�մϴ�.
	*				 ERavidArcClosingMethod_NoClose : �� ������ ������� �ʴ� ����
	*				 ERavidArcClosingMethod_EachOther : �� ������ ����� ����
	*				 ERavidArcClosingMethod_Center : �� ������ �߽��� ����� ����
	*/
	ERavidArcClosingMethod GetArcClosingMethod();
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
	
#pragma region [ConvertPointToDegree]
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] refGeometry : CRavidPoint ��ġ ��ǥ (Reference)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<int>& refGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] pGeometry : CRavidPoint ��ġ ��ǥ (Pointer)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<int>* pGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] refGeometry : CRavidPoint ��ġ ��ǥ (Reference)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<long long>& refGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] pGeometry : CRavidPoint ��ġ ��ǥ (Pointer)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<long long>* pGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] refGeometry : CRavidPoint ��ġ ��ǥ (Reference)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<float>& refGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] pGeometry : CRavidPoint ��ġ ��ǥ (Pointer)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<float>* pGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] refGeometry : CRavidPoint ��ġ ��ǥ (Reference)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<double>& refGeometry);
	/**
	* ���� ��ü���� �Էµ� ��ǥ�� ������ ����մϴ�.
	*
	* param[in] pGeometry : CRavidPoint ��ġ ��ǥ (Pointer)
	*
	* return value : ���� ������ ��ȯ�մϴ�.
	*/
	double ConvertPointToDegree(_In_ CRavidPoint<double>* pGeometry);
#pragma endregion
	
#pragma region [ConvertDegreeToPoint]
	/**
	* ���� ��ü���� �Էµ� ������ ��ǥ�� ����մϴ�.
	*
	* param[in] deg : ���� ��
	*
	* return value : ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> ConvertDegreeToPoint(_In_ int deg);
	/**
	* ���� ��ü���� �Էµ� ������ ��ǥ�� ����մϴ�.
	*
	* param[in] deg : ���� ��
	*
	* return value : ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> ConvertDegreeToPoint(_In_ long long deg);
	/**
	* ���� ��ü���� �Էµ� ������ ��ǥ�� ����մϴ�.
	*
	* param[in] deg : ���� ��
	*
	* return value : ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> ConvertDegreeToPoint(_In_ float deg);
	/**
	* ���� ��ü���� �Էµ� ������ ��ǥ�� ����մϴ�.
	*
	* param[in] deg : ���� ��
	*
	* return value : ���� ��ǥ�� ��ȯ�մϴ�.
	*/
	CRavidPoint<double> ConvertDegreeToPoint(_In_ double deg);
#pragma endregion
	
#pragma region [ConvertDegreeToPoint]
	/**
	* ���� ��ü�� 4���� ����ǥ�� ����մϴ�.
	*
	* param[out] pGeometrayArray : 4 ���� ��ǥ ����Ʈ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetOuterMostPoints(_Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

#pragma region [GetFocus]
	/**
	* ���� ��ü�� ���� 2���� ����մϴ�.
	*
	* param[out] pGeometrayArray : 2 ���� ����Ʈ (Pointer)
	*
	* return value : ��꿡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool GetFocus(_Out_ CRavidGeometryArray* pGeometryArray);
#pragma endregion

public:
#pragma region [Data]	
	/**
	* ��ü�� �̷�� �߽� �� x, y ��ǥ�� �����մϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	*
	* CRavidPoint<T> rpCenter : CRavidPoint Ŭ������ CRavidEllipse Ŭ������ ���ø� Ÿ������ �����˴ϴ�.
	*/
	CRavidPoint<T> rpCenter;
	/**
	* ��ü�� �̷�� x �� ������ ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� ��Ģ�� ���Ѿ��մϴ�.
	*
	* T radius1 : 0 ���� ū ����Դϴ�.
	*/
	T radius1;
	/**
	* ��ü�� �̷�� y �� ������ ���Դϴ�.
	* ���ø� Ÿ�Կ� ���� Ÿ���� �����˴ϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �Ʒ� ��Ģ�� ���Ѿ��մϴ�.
	*
	* T radius2 : 0 ���� ū ����Դϴ�.
	*/
	T radius2;
	/**
	* ��ü�� �̷�� ȸ�� ���Դϴ�.
	* Ÿ���� double �� �����˴ϴ�.
	*
	* double angle : ȸ�� ����
	*/
	double angle;
	/**
	* ��ü�� ���� ��ġ ���� ���Դϴ�.
	* Ÿ���� double �� �����˴ϴ�. 
	*
	* double startDeg : ��ü�� ���� ����
	*/
	double startDeg;
	/**
	* ��ü�� ���� ��ġ�κ��� ǥ���Ǵ� ���� ���Դϴ�. 360�� �Ѿ�� ������ �Ǵ��մϴ�.
	* Ÿ���� double �� �����˴ϴ�. 
	*
	* double deltaDeg : ��ü�� ǥ�� ����
	*/
	double deltaDeg;

protected:
	/**
	* ��ü�� ����, �߽��� ó�� ���� �Դϴ�.
	* ���� ��� ERavidArcClosingMethod_EachOther �� ���� ��ȯ�մϴ�.
	*
	* ERavidArcClosingMethod eArcClosingMethod : ��ü�� ó�� ����
	* 						 ERavidArcClosingMethod_NoClose : �� ������ ������� �ʴ� ����
	* 						 ERavidArcClosingMethod_EachOther : �� ������ ����� ����
	* 						 ERavidArcClosingMethod_Center : �� ������ �߽��� ����� ����
	*/
	ERavidArcClosingMethod eArcClosingMethod;
#pragma endregion
};

