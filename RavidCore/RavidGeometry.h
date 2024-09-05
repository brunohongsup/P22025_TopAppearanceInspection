#pragma once

class CRavidGeometryArray;

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}
}

/**
* "����" �� ǥ���ϴ� ����Ŭ�����Դϴ�.
* ������ ����� ����� �ٷ� ȣ���Ͽ� ��� �����մϴ�.
*/
class AFX_EXT_CLASS CRavidGeometry : public CRavidObject
{
#include "GeometryVirtualInformation.hpp"

#include "GeometryVirtualOffset.hpp"
#include "GeometryVirtualRect.hpp"
#include "GeometryVirtualCenter.hpp"
#include "GeometryVirtualDeflate.hpp"
#include "GeometryVirtualInflate.hpp"
#include "GeometryVirtualOperator.hpp"
#include "GeometryVirtualRotate.hpp"
#include "GeometryVirtualShape.hpp"

	RavidUseDynamicCreation();

public:
	CRavidGeometry();
	virtual ~CRavidGeometry();
	
#pragma region [ExclusiveRegion]
	/**
	* ������ ���� ��ü�� ���ο� �ո� ��ü�� �����մϴ�.
	* ������ ������ ���� ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* param[in] pExclusiveRegion : ���� �� ��ü ����Ʈ (Pointer)
	*)
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray* pExclusiveRegion);
	/**
	* ������ ���� ��ü�� ���ο� �ո� ��ü�� �����մϴ�.
	* ������ ������ ���� ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* param[in] refExclusiveRegion : ���� �� ��ü ����Ʈ (Reference)
	*)
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool SetExclusiveRegion(_In_ CRavidGeometryArray& refExclusiveRegion);
	/**
	* ������ ���� ��ü�� ���ο� �ո� ��ü�� �߰��մϴ�.
	* ������ ������ ���� ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* param[in] pGeometry : �߰� �� ��ü ����Ʈ (Pointer)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry* pGeometry);
	/**
	* ������ ���� ��ü�� ���ο� �ո� ��ü�� �߰��մϴ�.
	* ������ ������ ���� ��ü�� ����� �� �����ϴ�.
	* You must have a surface to use this feature.
	*
	* param[in] refGeometry : �߰� �� ��ü ����Ʈ (Reference)
	*
	* return value : �߰��� �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool AddExclusiveRegion(_In_ CRavidGeometry& refGeometry);
	/**
	* ���� ��ü�� ������ �ո� ��ü ����Ʈ�� ��ȯ�մϴ�.
	*
	* return value : ��ü�� ���� ��� nullptr �� ��ȯ�մϴ�.
	*/
	virtual CRavidGeometryArray* GetExclusiveRegion() const;
	/**
	* ���� ��ü�� ������ �ո� ��ü ����Ʈ�� ��� �����մϴ�.
	*
	*/
	virtual void ClearExclusiveRegion();
	/**
	* ���� ��ü�� ������ �ո� ��ü�� �ִ��� Ȯ���մϴ�.
	*
	* return value : ������ false �� ��ȯ�մϴ�.
	*/
	virtual bool IsThereExclusiveRegion() const;
#pragma endregion

	/**
	* ���� ��ü�� �߽��� POINT ����ü�� ��ȯ�մϴ�.
	*
	* return value : �߽��� �� �� �� ���� ��� INF �� ��ȯ�մϴ�.
	*/
	virtual POINT GetPointStruct();

	/**
	* ���� ��ü�� ���δ� �ּ� ���� ������ RECT ����ü�� ��ȯ�մϴ�.
	*
	* return value : ���� ������ �� �� �� ���� ��� INF �� ��ȯ�մϴ�.
	*/
	virtual RECT GetRectStruct();

	/**
	* ���� ��ü�� ������ ����մϴ�.
	*
	* return value : ������ ũ�⸦ ��ȯ�մϴ�. ������ ���� ��� (0, 0) ���� ��ȯ�մϴ�.
	*/
	virtual double GetArea();
	
	/**
	* ���� ��ü�� ������ ����մϴ�.
	*
	* return value : ������ ���� ��� 0 ���� ��ȯ�մϴ�.
	*/
	virtual double GetAngle();
	
	/**
	* ���� ��ü�� ��� ��ü���� ���� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[out] pRgResultGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetIntersectionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
	
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[out] pRgResultGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetUnionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
	
	/**
	* ���� ��ü�� ��� ��ü���� �� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[out] pRgResultGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetSubtractionRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
	
	/**
	* ���� ��ü�� ��� ��ü�� ��Ÿ�� ������ ����ϰ�, �� ������ ��ȯ�մϴ�.
	* �˰��� ���� ���� ��ü�� �������� ��찡 �߻��ϱ� ������ Array ���·� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[out] pRgResultGeometryArray : ��� ��� ��ü ����Ʈ (Pointer)
	*
	* return value : ��� �� ������ �߻��ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetExclusiveOrRegion(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
		
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	*
	* return value : �浹���� ���� ��� false �� ��ȯ�մϴ�.
	*/
	virtual bool DoesIntersect(_In_ CRavidGeometry* pRgShape);
		
	/**
	* ���� ��ü�� ��� ��ü���� �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[in] pRgResultGeometryArray : ��� ��� �浹 ��ǥ (Pointer)
	*
	* return value : �浹���� ���� ��� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetIntersection(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
	
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	*
	* return value : �浹���� ���� ��� false �� ��ȯ�մϴ�.
	*/
	virtual bool DoesIgnoreInternalIntersection(_In_ CRavidGeometry* pRgShape);
		
	/**
	* ���� ��ü�� ��� ��ü���� �浹 �� ���� �浹�� ������ �浹 ���θ� �Ǵ��ϸ�, �浹 ��ǥ�� ��ȯ�մϴ�.
	*
	* param[in] pRgShape : ����� ��� ��ü (Pointer)
	* param[in] pRgResultGeometryArray : ��� ��� �浹 ��ǥ (Pointer)
	*
	* return value : �浹���� ���� ��� false �� ��ȯ�մϴ�.
	*/
	virtual bool GetIgnoreInternalIntersection(_In_ CRavidGeometry* pRgShape, _Out_ CRavidGeometry* pRgResultGeometryArray);
	
protected:
	CRavidGeometryArray* m_pExclusiveRegion = nullptr;
};
