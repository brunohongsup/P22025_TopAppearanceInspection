#pragma once
#include "resource.h"
#include "Definition.h"
#include "Inspection.h"
#include "EventHandlerCamera.h"
#include "ImageCameraView.h"
//////////////////////////////////////////////////////////////////////////
using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Mathematics;
using namespace Ravid::Miscellaneous;

using namespace CDefinition;
//////////////////////////////////////////////////////////////////////////


#define MENU_ID_IMAGECONTROL_OPEN			100000
#define MENU_ID_IMAGECONTROL_SAVE			100001
#define MENU_ID_IMAGECONTROL_CLOSE			100002
#define MENU_ID_IMAGECONTROL_IMPORTIMAGE	100003

#define MENU_ID_MESURE_LINE					100004
#define MENU_ID_MESURE_CONTINUELINE			100005
#define MENU_ID_MESURE_PTOPLINE				100006
#define MENU_ID_MESURE_RECT					100007
#define MENU_ID_MESURE_CIRCLEHALF			100008
#define MENU_ID_MESURE_CIRCLE				100009
#define MENU_ID_MESURE_ARC					100010
#define MENU_ID_MESURE_DELETEALL			100011

#define MENU_ID_IMAGECONTROL2_DELETE		100012

#define MENU_ID_CONTINUELINE_END			100013		
#define MENU_ID_CONTINUELINE_DELETE			100014
#define MENU_ID_CONTINUELINE_DELETEALL		100015
#define MENU_ID_CONTINUELINE_CANCEEL		100016
#define MENU_ID_FINDCENTER					100017



class CImageViewTeaching : public Ravid::Framework::CRavidImageView
{
	RavidUseDynamicCreation();

public:
	CImageViewTeaching();
	~CImageViewTeaching();

	enum EMouseType
	{
		EMouseType_RButtonUp = 0,
		EMouseType_LButtonDown,
		EMouseType_MouseMove,
		EMouseType_LButtonUp,

		EMouseType_Total,
	};
	enum ERectType
	{
		ERectType_Top = 0,
		ERectType_Right,
		ERectType_Btm,
		ERectType_Left,
		ERectType_Pos1,
		ERectType_Pos2,
		ERectType_Pos3,
		ERectType_Pos4,
		ERectType_Rotate_1,
		ERectType_Rotate_2,
		ERectType_Rotate_3,
		ERectType_Rotate_4,
		ERectType_Rect,

		ERectType_Total,
	};

	enum ECursor
	{
		ECursor_Move,
		ECursor_Size_Ver,
		ECursor_Size_Hor,
		ECursor_Rotate,

		ECursor_None,

		ECursor_Count,


	};

	typedef struct sMeasure
	{
		//EMeasureType m_MesureType;
		bool m_bChoice;

		CString strBoxName;

		//Rect
		CRavidQuadrangle<double> m_rqrTemp;
		CRavidPoint<double> m_rpRect1;
		CRavidPoint<double> m_rpRect2;
		CRavidPoint<double> m_rpRect3;
		CRavidPoint<double> m_rpRect4;
		CRavidPoint<double> m_rpRectStr;
		bool m_bIsRectIntersect;
		double m_dblRectAngle;
		ERectType m_RectType;

		sMeasure()
		{
			//Rect
			m_bIsRectIntersect = false;
			m_RectType = ERectType::ERectType_Total;

			strBoxName = _T("Teaching Box");
		}

	}SMeasure;


	DECLARE_DYNCREATE(CImageViewTeaching)

	CRavidDoc* GetDocument() const;


#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	DECLARE_MESSAGE_MAP()

public:
	void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	void OnTimer(UINT_PTR nIDEvent);
	virtual void OnInitialUpdate();

	bool SetRect(int nIndex, CRavidPoint<double> rpImage, EMouseType eMouse, bool bVct = false);
	void MeasureDataDraw();
	void DrawLineMeasureOption(CRavidImageViewLayer* pLayerUser, CRavidQuadrangle<double> rqdBox);
	void DrawLineMeasureResult(CRavidImageViewLayer* pLayerUser);

	void SetLineMeasurementParam(SMeasurementROI sData)
	{
		m_sData = sData;

		if(sData.sLineParams.eFindDir != eFindLineDir_AngleAdjustment)
		{
			SetROIAngleAdjustment();
		}
	}
	SMeasurementROI GetLineMeasurementParam() { return m_sData; }

	void SetROIAngleAdjustment(int nIndex = 0)
	{
		if(!m_vctMeasure.size())
			return;
		CRavidPoint<double> rpRect1(m_vctMeasure[0].m_rpRect1);
		CRavidPoint<double> rpRect2(m_vctMeasure[0].m_rpRect2);
		CRavidPoint<double> rpRect3(m_vctMeasure[0].m_rpRect3);
		CRavidPoint<double> rpRect4(m_vctMeasure[0].m_rpRect4);
		CRavidQuadrangle<double> rqd(rpRect1, rpRect2, rpRect3, rpRect4);

		rqd = rqd.GetRect();

		m_vctMeasure[0].m_rpRect1 = rqd.rpPoints[0];
		m_vctMeasure[0].m_rpRect2 = rqd.rpPoints[1];
		m_vctMeasure[0].m_rpRect3 = rqd.rpPoints[2];
		m_vctMeasure[0].m_rpRect4 = rqd.rpPoints[3];

		m_vctMeasure[0].m_rqrTemp = rqd;

	}

	void SetAlignData(sCellAlignData sData) { m_sAlignData = sData; }

private:
	SMeasurementROI m_sData;
	sCellAlignData m_sAlignData;
	std::vector<SMeasure> m_vctMeasure;
	bool m_bLButtonDown = false;

	bool m_bWheelButtonDown = false;
	bool m_bCursor[ECursor_Count] = {false,false,false,false,true};

	HCURSOR m_hCursorIn[ECursor_Count];
	bool m_bChoice = false;
	int m_nMesureIndex = 0;
	//Rect

	bool m_bRect = false;
	bool m_bRectEnd = false;
	double m_dblRectAngle = 0.f;
	CPoint m_cpRectStartPos, m_cpRectEndPos;
		
	CRavidPoint<int> m_rpScreenLastPos;
	//Shift Key Event
	bool m_bShiftKey = false;

	///////////////////////////////////////
	//
	CMenu m_menuMain;

	CRavidImage m_ri;
public:

	afx_msg void OnCreateeRect();
	afx_msg void OnImagecontrol2Delete();
	afx_msg void OnImagecontrolOpen();
	afx_msg void OnImagecontrolSave();
	afx_msg void OnImagecontrolClose();
	afx_msg void OnImagecontrolImportImage();

	afx_msg void OnImageFindCenter();

	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMButtonUp(UINT nFlags, CPoint point);

	BOOL PreTranslateMessage(MSG* pMsg);
};



