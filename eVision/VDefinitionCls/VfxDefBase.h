#pragma once

#include "VfxDefGeometry.h"
#include "VfxDefBaseEnum.h"

#include <vector>

class CVision;

typedef struct sTreeElement
{
	// DB Raw Data..
	int nWindowType;							// have to set 0xFFFFFFFF or 0xFFFFFFFE
	int nSequence;								// eColDialogTable_Sequence
	LPCTSTR lpszClassName;						// eColDialogTable_ClassName
	LPCTSTR lpszViewName;						// eColDialogTable_DialogName
	LPCTSTR lpszReferenceProjectCls;			// eColDialogTable_ReferenceProject
	int nReferenceProjectClsNumber;				// eColDialogTable_ReferenceProjectNumber
	LPCTSTR lpszTreePosition;					// eColDialogTable_TreeName
	DRECT drcWindowPosition;					// eColDialogTable_Position_X , eColDialogTable_Position_Y , 0 , 0
	long nWindowPositionUnit;
	bool bAutoCreation;							// eColDialogTable_AutoCreation
	int nCameraChannel;
	LPCTSTR lpszTeachingMenuTable;
	LPCTSTR lpszInspectionMenuTable;
	bool bShowActionDlg;

	LPCTSTR lpszTeachingMenuEncodedData;
	LPCTSTR lpszInspectionMenuEncodedData;

	bool bCenterPosition;						// eColDialogTable_CenterPosition
	bool bModalDialog;							// eColDialogTable_ModalDialog

	// Other data
	CVision* pVision;
	bool bVisible;
}
	STreeElement, *LPTreeElement;


typedef struct sTeachingMenu
{
	LPCTSTR lpszTeachingObjectClass;
	int nQuantity;
}
	STeachingMenu, *LPTeachingMenu;


typedef struct sMeasurement
{
	int nType;
	bool bCompleted;
	std::vector<DPOINT> vctPoints;

	sMeasurement()
	{
		nType = 0;
		bCompleted = false;
		vctPoints.clear();
	}

	~sMeasurement()
	{
		vctPoints.clear();
	}
}
	SMeasurement, *LPMeasurement;

enum eVisionDrawing
{
	eVisionDrawingLine		= 0x01,
	eVisionDrawingRectangle	= 0x02,
	eVisionDrawingEllipse	= 0x04,
	eVisionDrawingText		= 0x08,
	eVisionDrawingArrow		= 0x10,
	eVisionDrawingArc		= 0x20,
};

enum eArrowPositionType
{
	eArrowPositionType_None = 0x00,
	eArrowPositionType_Start = 0x01,
	eArrowPositionType_End = 0x02,
	eArrowPositionType_Both = 0x03,
};

enum eDrawPenStyle
{
	eDrawPenStyle_Solid = PS_SOLID,
	eDrawPenStyle_Dash = PS_DASH,
	eDrawPenStyle_Dot = PS_DOT,
	eDrawPenStyle_DashDot = PS_DASHDOT,
	eDrawPenStyle_DashDotDot = PS_DASHDOTDOT,
	eDrawPenStyle_Null = PS_NULL,
	eDrawPenStyle_Insideframe = PS_INSIDEFRAME,
};

typedef struct sDrawingStructEvision
{
	eVisionDrawing nType;
	DPOINT dptStart;
	DPOINT dptEnd;
	int nPenStyle;
	int nWidth;
	COLORREF crPenColor;
	COLORREF crBrushColor;
	LPCTSTR lpszText;
	int nFontSize;
	bool bNeedDynamicSize;
	eArrowPositionType eArrowPosition;
	int nArrowLength;
	LPCTSTR lpszFontName;
	bool bFontPixelSizeChecked;

	// For arc
	DPOINT dptArcStart;
	DPOINT dptArcEnd;

	// Description
	LPCTSTR lpszDescription;
}
	SDrawingStructEvision, *LPSDrawingStructEvision;


enum eViewActionBtn
{
	eViewActionBtnFileOpen = 0,
	eViewActionBtnFileSave,
	eViewActionBtnFileClose,
	eViewActionBtnArrow,
	eViewActionBtnZoomIn,
	eViewActionBtnZoomOut,
	eViewActionBtnZoomAll,
	eViewActionBtnPalm,
	eViewActionBtnMeasure,
	eViewActionBtnSize,
	eViewActionBtnClose,
	eViewActionBtnCount,
};