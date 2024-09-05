#pragma once
class CUtil
{
public:
	CUtil();
	~CUtil();

public:
	CString		ConvertRectStructureToString(CRavidRect<double> crData);
	CString		ConvertPointStructureToString(CRavidPoint<double> cpData);

	bool		ConvertRectStringToRectStructure(CString strData, CRavidRect<double>* pResult);
	bool		ConvertRectStringToPointStructure(CString strData, CRavidPoint<double>* pResult);


	CString		GetStringOfCurrentTime(bool bSeprator = true);
	bool		SetOSTime(CString strTime);

	int			SetSplit(CString strSource, CString strSeparator);
	CString		GetSplit(int nIndex) { return m_aryString.GetAt(nIndex); }

	int			GetCPUCount();
	


private:
	CStringArray	m_aryString;
};

