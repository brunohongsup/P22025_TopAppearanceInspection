#pragma once

#include "VfxDefGeometry.h"

// CProjDefXXX.h 계열의 파일들이 OEV 관련 구조체를 정의하지 못할 수 있는 상황이 올 수 있기 때문에
// VDefinitionCls 에 구조체/ 상수를 정의 한다.

enum eBlobColorLayer
{
	eBlobColorLayer_Black = 0,
	eBlobColorLayer_White,
};

typedef struct sOevFoundPattern
{
	float fAngle;
	float fScale;
	float fScore;

	DPOINT dptCenter;
	DRECT drcBoundingBox;
	DQUADRANGLE dqdrBoundingBox;
}
	SOevFoundPattern, *LPOevFoundPattern;


typedef struct sOevFoundMatch
{
	float fAngle;
	float fAreaRatio;
	float fScore;
	float fScale;
	float fScaleX;
	float fScaleY;

	bool bInterpolated;

	DPOINT dptCenter;
}
	SOevFoundMatch, *LPOevFoundMatch;


typedef struct sOevBlobEllipse
{
	float fWidth;
	float fHeight;
	float fAngle;
}
	SOevBlobEllipse, *LPOevBlobEllipse;


enum eOevProjection
{
	eOevProjection_OnARow = 0,
	eOevProjection_OnAColumn,
};

typedef struct sOevBlobMinimumEnclosingRectangle
{
	DPOINT dptCenter;
	float fAngle;
	float fWidth;
	float fHeight;
	DQUADRANGLE dqdrRegion;
//	double dblArea;
}
	SOevBlobMinimumEnclosingRectangle, *LPOevBlobMinimumEnclosingRectangle;