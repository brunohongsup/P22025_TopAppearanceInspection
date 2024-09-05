#pragma once

#include "RavidLine.h"
#include "RavidQuadrangle.h"
#include "RavidCircle.h"
#include "RavidEllipse.h"
#include "RavidPolygon.h"

namespace Ravid
{
	namespace Miscellaneous
	{
		class CInternalDxfReader;
		
		/**
		* DXF ���� ������ �б� ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CDxfReader : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDxfReader);

		public:
			CDxfReader(void);
			virtual ~CDxfReader(void);
			
			/**
			* DXF ������ �ε� �ϷḦ �����ɴϴ�.
			*
			* return value : bool �� ���¸� ��ȯ�մϴ�.
			*/
			bool IsLoaded();
			
			/**
			* DXF ������ �о�ɴϴ�.
			*
			* param[in] lpszFileName : �ε� ���� �̸�
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			virtual bool Load(_In_ LPCTSTR lpszFileName);
			
			/**
			* ���� �����͸� �ʱ�ȭ�մϴ�.
			*
			* return value : bool �� ���� ���θ� ��ȯ�մϴ�.
			*/
			virtual bool Clear();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� ���ö��� ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : ���ö��� �ε���
			*
			* return value : std::tuple<CString, CRavidPolygon> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidPolygon> GetSpline(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* ���ö��� ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� ���ö��� ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetSplineCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Polyline ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Polyline �ε���
			*
			* return value : std::tuple<CString, CRavidPolygon> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidPolygon> GetPolyline(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Polyline ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Polyline ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetPolylineCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Arc ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Arc �ε���
			*
			* return value : std::tuple<CString, CRavidEllipse<double>> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidEllipse<double> > GetArc(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Arc ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Arc ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetArcCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Circle ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Circle �ε���
			*
			* return value : std::tuple<CString, CRavidEllipse<double>> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidEllipse<double> > GetCircle(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Circle ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Circle ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetCircleCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Line ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Line �ε���
			*
			* return value : std::tuple<CString, CRavidLine<double>> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidLine<double> > GetLine(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Line ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Line ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetLineCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Hatch ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Hatch �ε���
			*
			* return value : std::tuple<CString, CRavidPolygon> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidPolygon> GetHatch(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Hatch ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Hatch ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetHatchCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Solid ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Solid �ε���
			*
			* return value : std::tuple<CString, CRavidQuadrangle<double>> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidQuadrangle<double> > GetSolid(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Solid ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Solid ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetSolidCount();
			
			/**
			* Load ���� �� ����մϴ�.
			* �ش� �ε����� Ellipse ��ü ������ �����ɴϴ�.
			*
			* param[in] nIndex : Ellipse �ε���
			*
			* return value : std::tuple<CString, CRavidEllipse<double>> �� ���� �����͸� ��ȯ�մϴ�.
			*	CString ���� ��ü�� ������ �̸��Դϴ�.
			*/
			std::tuple<CString, CRavidEllipse<double> > GetEllipse(_In_ int nIndex);
			
			/**
			* Load ���� �� ����մϴ�.
			* Ellipse ��ü ��ü ������ �����ɴϴ�.
			*
			* return value : size_t �� Ellipse ��ü ������ ��ȯ�մϴ�.
			*/
			size_t GetEllipseCount();

		private:
			CInternalDxfReader* m_pInternal = nullptr;
		};
	}
}

