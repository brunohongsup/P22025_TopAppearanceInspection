#pragma once
#include "Definition.h"
#include "ISaveInfo.h"

using namespace CDefinition;
class CSaveNGInfo : public ISaveInfo
{

public:	
	enum class EDefectStatus
	{
		Default = 0x00,
		UpperNG = 0x01,
		LowerNG = 0x02
	};

	CSaveNGInfo() = delete;
	CSaveNGInfo(const CSaveNGInfo& saveNGInfo) = delete;
	CSaveNGInfo(const CTime& tmSignalTime,const SCellTrackerData& sCellTrackingData,const std::vector<SMeasuredData>& vctMeasuredDataUpper, const std::vector<SMeasuredData>& vctMeasuredDataLower, EDefectStatus eDefectStatus);

	virtual bool DoSave();
	virtual ~CSaveNGInfo();
	


private:
	CTime m_tmSignalTime;
	EDefectStatus m_eDefectStatus;
	std::vector<CString> m_vctMeasuredNG;

};