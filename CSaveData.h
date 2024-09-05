#pragma once
#include "Definition.h"
#include "ISaveInfo.h"

using namespace CDefinition;

class CSaveData : public ISaveInfo
{
public:
	CSaveData(const CSaveData& saveData) = delete;
	CSaveData() = delete;
	CSaveData(CTime tmSignalTime, const SCellTrackerData& sCellTrackingData,const int nIdx,const std::vector<CDefinition::SMeasuredData>& vctMeasuredData);

	virtual ~CSaveData();


	virtual bool DoSave();


private:

	int m_nInspIdx;
	CTime m_signalTime;
	std::vector<SMeasuredData> m_vctMeasuredData;
	bool m_bNG;

};