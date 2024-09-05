#pragma once

#include <vector>

#ifdef MVTECHCONTOUR_EXPORTS
#define MVTECHCONTOUR_API __declspec(dllexport)
#else
#define MVTECHCONTOUR_API __declspec(dllimport)
#endif

enum EContourForGlassOfHalf_InitialSearchingDirection
{
	EContourForGlassOfHalf_InitialSearchingDirection_RightTop = 0,
	EContourForGlassOfHalf_InitialSearchingDirection_LeftTop,
	EContourForGlassOfHalf_InitialSearchingDirection_LeftBottom,
	EContourForGlassOfHalf_InitialSearchingDirection_RightBottom,
};

enum EContourForGlassOfHalf_ObjectColor
{
	EContourForGlassOfHalf_ObjectColor_Black = 0,
	EContourForGlassOfHalf_ObjectColor_White,
};

MVTECHCONTOUR_API bool ContourForGlassOfHalf(_In_ BYTE* pBuffer, _In_ int nSizeX, _In_ int nSizeY, _In_ EContourForGlassOfHalf_InitialSearchingDirection eDirection, _In_ long nGV, _In_ EContourForGlassOfHalf_ObjectColor eObjColor, _Out_ std::vector<POINT>* pVctResult, _In_opt_ RECT* pRegion = nullptr);
MVTECHCONTOUR_API bool DetectBurrUsingContour(_In_ std::vector<POINT>* pVctContour, _In_ double dblThreshold, _Out_ std::vector<RECT>* pVctResult, _In_opt_ int nSamplingCount = 31);