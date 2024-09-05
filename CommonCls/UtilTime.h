#pragma once
class CUtilTime
{
public:
	CUtilTime();
	~CUtilTime();

public:


	CString		GetStringOfCurrentDay(LPCTSTR lpszDelimiter = nullptr);

	CString		GetStringOfCurrentTime(LPCTSTR lpszDelimiter = nullptr);

	CString		GetStringOfCurrentDayTime(LPCTSTR lpszDayDelimiter = nullptr, LPCTSTR lpszTimeDelimiter = nullptr);

	CString		GetStringOfCurrentTimeWithMillisecond();

	SYSTEMTIME	ConvertStringToSystemTime(CString strTime);

	long			ConvertCurrentTimeToTimeStamp();
	CString		ConvertTimeStampToCurrentTimeString(long nTimeStamp);

	ULONGLONG	GetTimeDifferenceWithSystemTime(SYSTEMTIME tSrc);

	bool		SetOSTime(CString strTime);

};

