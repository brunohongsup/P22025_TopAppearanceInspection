#pragma once

typedef struct sLaserData
{
	float fPeak;
	BYTE cPeak;
	BYTE cWidth;
	BYTE cQuality;
}
	SLaserData, *LPLaserData;

typedef struct sLaserResult
{
	size_t szCount;
	SLaserData* pLaserData;
}
	SLaserResult, *LPLaserResult;	