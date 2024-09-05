#pragma once

#include "VfxDefGeometry.h"

// CProjDefXXX.h �迭�� ���ϵ��� OEV ���� ����ü�� �������� ���� �� �ִ� ��Ȳ�� �� �� �ֱ� ������
// VDefinitionCls �� ����ü/ ����� ���� �Ѵ�.

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