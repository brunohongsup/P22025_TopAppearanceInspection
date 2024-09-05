#pragma once

enum
{
	JSON_ITEM_OBJECT = 0,
	JSON_ITEM_ARRAY,
	JSON_ITEM_VALUE,
};

class CJsonStringBuffer
{
public:
	CJsonStringBuffer()
	{
		m_nLength = 0;
	}
	~CJsonStringBuffer()
	{
		Clear();
	}

	void Clear();
	void Append(CString& str);
	void Append(LPCTSTR lpsz);
	void Append(LPCTSTR lpsz, int nLength);

	void ToString(CString& strOutput,bool bOn);

private:
	CList<CString>	m_list;
	int				m_nLength;
};

class CJsonItem
{
public:
	CJsonItem()
	{
	}
	virtual ~CJsonItem()
	{
	}

	virtual void ToString(CString& str,bool bOn) = 0;
	virtual void AppendStringBuffer(CJsonStringBuffer& sb, bool bOn = false) = 0;
	virtual void Clear() { };


protected:
	int m_nType;
};

class CJsonObject : public CJsonItem
{
public:
	CJsonObject()
	{
//		m_map.InitHashTable(1000);
		m_nType = JSON_ITEM_OBJECT;
	}
	virtual ~CJsonObject();

	virtual void ToString(CString& str,bool bOn = false);
	virtual void AppendStringBuffer(CJsonStringBuffer& sb, bool bOn = false);

	void SetValue(LPCTSTR lpszKey, int nValue);
	void SetValue(LPCTSTR lpszKey, double fValue);
	void SetValue(LPCTSTR lpszKey, LPCTSTR strValue);
	void SetValue(LPCTSTR lpszKey, CJsonItem* pValue,bool bOn = false);

private:
	CMap<CString, LPCTSTR, CJsonItem*, CJsonItem*> m_map;

	typedef struct sInData
	{
		CString strName;
		CString strValue;
	}SInData;
	std::deque<sInData> m_que;
};

class CJsonArray : public CJsonItem
{
public:
	CJsonArray()
	{
		m_nType = JSON_ITEM_ARRAY;
	}
	virtual ~CJsonArray();

	virtual void ToString(CString& str, bool bOn = false);
	virtual void AppendStringBuffer(CJsonStringBuffer& sb, bool bOn = false);

	void Push(int nValue);
	void Push(double fValue);
	void Push(LPCTSTR strValue);
	void Push(CJsonItem* pValue);

private:
	CList<CJsonItem*> m_list;
};

class CJsonValue : public CJsonItem
{
public:
	CJsonValue(LPCTSTR lpszValue)
	{
		m_nType = JSON_ITEM_VALUE;
		m_strValue.Format(_T("%c%s%c"), '"', lpszValue, '"');
	}
	CJsonValue(int nValue)
	{
		m_nType = JSON_ITEM_VALUE;
		m_strValue.Format(_T("%c%d%c"), '"', nValue, '"');
	}
	CJsonValue(double fValue)
	{
		m_nType = JSON_ITEM_VALUE;
		m_strValue.Format(_T("%c%g%c"), '"', fValue, '"');
	}
	virtual ~CJsonValue()
	{
	}
	virtual void ToString(CString& str, bool bOn = false);
	virtual void AppendStringBuffer(CJsonStringBuffer& sb, bool bOn = false);

private:
	CString m_strValue;
};