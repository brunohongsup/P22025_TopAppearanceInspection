#pragma once

#include "RavidGeometry.h"

#include <vector>

/**
* "���� ������ ����Ʈ" �� ǥ���ϴ� Ŭ�����Դϴ�.
* Point, Line, Rect, Quadrangle, Circle, Ellipse, Polygon �� ���� ��ü�� ǥ���մϴ�.
* CRavidGeometry �� ��ӹ��� Ŭ������ "������ ���� ���"�� ���õ� �˰����� �����ϰ� �ֽ��ϴ�.
*/
class AFX_EXT_CLASS CRavidGeometryArray : public CRavidGeometry
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

#include "RavidGeometryArrayCtor.hpp"

public:
	RavidUseDynamicCreation(this);

	CRavidGeometryArray();
	virtual ~CRavidGeometryArray();

	/**
	* ��ü�� �迭�� ���� �����մϴ�.
	*
	* param[in] nIndex : ����� �ε���
	* 
	* return value : �ش� �ε����� ��ü�� �����ɴϴ�.
	*/
	CRavidGeometry* operator [](_In_ size_t nIndex);
	
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

#pragma region [Copy]
	/**
	* �Էµ� ��ü�� ���� �����մϴ�.
	*
	* param[in] refGeometryArray : ���� ��ü (Reference)
	*
	* return value : ���翡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Copy(_In_ CRavidGeometryArray& refGeometryArray);
	/**
	* �Էµ� ��ü�� ���� �����մϴ�.
	*
	* param[in] pGeometryArray : ���� ��ü (Pointer)
	*
	* return value : ���翡 �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool Copy(_In_ CRavidGeometryArray* pGeometryArray);
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

#pragma region [At]
	/**
	* �ش� �ε����� ��ü�� �����մϴ�.
	*
	* param[in] nIndex : ���� �ε���
	* 
	* return value : �ش� �ε����� ��ü Pointer �� ��ȯ�մϴ�.
	*/
	virtual CRavidGeometry* GetAt(_In_ int nIndex);
	/**
	* �ش� �ε����� ��ü�� �����մϴ�.
	*
	* param[in] nIndex : ���� �ε���
	*
	* return value : ������ �����ϸ� false �� ��ȯ�մϴ�.
	*/
	virtual bool RemoveAt(_In_ int nIndex);
	/**
	* ���� ��ü�� ����� ��� ��ü�� ������ �����ɴϴ�.
	*
	* return value : ��ü�� ������ ��ȯ�˴ϴ�.
	*/
	virtual long GetCount();
	/**
	* ���� ��ü�� ����� ��� ��ü�� �����մϴ�.
	*/
	virtual void Clear();
#pragma endregion
	
#pragma region [GetArea]
	/**
	* ���� ��ü�� ������ ����մϴ�.
	*
	* return value : ��꿡 ������ ������ INF �� ��ȯ�մϴ�.
	*/
	virtual double GetArea();
#pragma endregion
	
#pragma region [GetAngle]
	/**
	* ������ ����մϴ�. ���� ��ü�� ȸ�� ���� �� �� �����ϴ�.
	*
	* return value : 0 �� ��ȯ�մϴ�.
	*/
	virtual double GetAngle();
#pragma endregion

#pragma region [Reserve]
	/**
	* �Էµ� ũ�⸸ŭ �̸� �Ҵ��մϴ�.
	*
	* param[in] szSize : �Է��� ���� ��ü�� ��
	*
	* return value : �����ϸ� false �� ��ȯ�մϴ�.
	*/
	bool Reserve(_In_ size_t szSize);
#pragma endregion

protected:
#pragma region [Data]
	/**
	* ��ü�� �̷�� ��ü���� ����Ʈ�� vector �� �����մϴ�.
	* Polygon �� ���ø� Ÿ���� �ƴϱ� ������ �Էµ� ���� �״�θ� �Է��մϴ�.
	* ���� �˰����� �����ϱ� ���ؼ��� �������ų� ������ �ʾƾ� ��Ȯ�մϴ�.
	*
	* std::vector<CRavidGeometry*> m_vctArray : �������ų� ������ ���� ������ ��ü ����Ʈ
	*/
	std::vector<CRavidGeometry*> m_vctArray;
#pragma endregion};
};
