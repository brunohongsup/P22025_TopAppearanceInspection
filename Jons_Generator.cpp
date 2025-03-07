#include "StdAfx.h"
#include "json_Generator.h"

void CJsonStringBuffer::Append(CString& str)
{
	Append(str, str.GetLength());
}

void CJsonStringBuffer::Append(LPCTSTR lpsz)
{
	m_list.AddTail(lpsz);
	m_nLength += _tcslen(lpsz);
}

void CJsonStringBuffer::Append(LPCTSTR lpsz, int nLength)
{
	m_list.AddTail(lpsz);
	m_nLength += nLength;
}


void CJsonStringBuffer::Clear()
{
	
	m_list.RemoveAll();
}

void CJsonStringBuffer::ToString(CString& strOutput, bool bOn)
{
	int nOffset = 0;
	int nSize = m_nLength + 1;
	LPTSTR pBuffer = strOutput.GetBuffer(nSize);
	for (POSITION pos = m_list.GetHeadPosition(); pos != NULL; )
	{
		CString& str = m_list.GetNext(pos);
		_tcscpy_s(pBuffer + nOffset, nSize - nOffset, str);
		nOffset += str.GetLength();
	}
	strOutput.ReleaseBuffer(m_nLength);
}


CJsonObject::~CJsonObject()
{
//	CString strKey;
//	CJsonItem* pItem;
// 	POSITION pos = m_map.GetStartPosition();
// 	while (pos != NULL)
// 	{
// 		m_map.GetNextAssoc(pos, strKey, pItem);
// 		if (pItem) delete pItem;
// 	}
	m_map.RemoveAll();
	m_que.clear();
}

void CJsonObject::AppendStringBuffer(CJsonStringBuffer& sb, bool bOn)
{
	CString strKey;
	CString strTemp;
//	CJsonItem* pItem;
	CString strAdder;
	strAdder.Format(_T("%c"), '{');
	sb.Append(strAdder);
	POSITION pos = m_map.GetStartPosition();
	BOOL bFirst = TRUE;

	
	while (m_que.size() != 0)
	{
		if (bFirst) 
			bFirst = FALSE;
		else
		{
			sb.Append(_T(","));
		}
		sInData sData;
		sData = m_que.back();
		m_que.pop_back();
//		m_map.GetNextAssoc(pos, strKey, pItem);
		if(!bOn)
	//	if(sData.strName.Find('"') != 0)
			strTemp.Format(_T("%s:"), sData.strName);
	//	strTemp.Format(_T("%c%s%c:"), '"', sData.strName, '"');
		else
			strTemp.Format(_T("%s:"), sData.strName);

		sb.Append(strTemp);
		if(!bOn)
		//if (sData.strName.Find('"') != 0)
			strTemp.Format(_T("%s"), sData.strValue);

	//	strTemp.Format(_T("%c%s%c"), '"', sData.strValue, '"');
		else
			strTemp.Format(_T("%s"),  sData.strValue);

		sb.Append(strTemp);
		//pItem->AppendStringBuffer(sb);
	}
//	strAdder.Format(_T("%c"), '}');
	sb.Append(_T("}"));
}

void CJsonObject::ToString(CString& strOutput, bool bOn)
{
	CJsonStringBuffer sb;
		AppendStringBuffer(sb, bOn);
	sb.ToString(strOutput,bOn);
}

void CJsonObject::SetValue(LPCTSTR lpszKey, int nValue)
{
//	m_map.SetAt(lpszKey, new CJsonValue(nValue));
	sInData sIndata;
	sIndata.strName.Format(_T("%c%s%c"),'"', lpszKey,'"');
	sIndata.strValue.Format(_T("%c%d%c"), '"', nValue, '"');
	m_que.push_front(sIndata);
}

void CJsonObject::SetValue(LPCTSTR lpszKey, double fValue)
{
	//m_map.SetAt(lpszKey, new CJsonValue(fValue));
	sInData sIndata;
	sIndata.strName.Format(_T("%c%s%c"), '"', lpszKey, '"');
	sIndata.strValue.Format(_T("%c%f%c"), '"', fValue, '"');
	m_que.push_front(sIndata);
}

void CJsonObject::SetValue(LPCTSTR lpszKey, LPCTSTR strValue)
{
	m_map.SetAt(lpszKey, new CJsonValue(strValue));
	sInData sIndata;
	sIndata.strName.Format(_T("%c%s%c"), '"', lpszKey, '"');
	sIndata.strValue.Format(_T("%c%s%c"), '"', strValue, '"');
	m_que.push_front(sIndata);
}

void CJsonObject::SetValue(LPCTSTR lpszKey, CJsonItem* pValue,bool bOn)
{
	sInData sIndata;
	sIndata.strName.Format(_T("%c%s%c"), '"', lpszKey, '"');// = lpszKey;
	pValue->ToString(sIndata.strValue, bOn);
	m_que.push_front(sIndata);
	//m_map.SetAt(lpszKey, pValue);
}

CJsonArray::~CJsonArray()
{
	while (m_list.IsEmpty() == FALSE)
	{
		delete m_list.RemoveHead();
	}

}

void CJsonArray::AppendStringBuffer(CJsonStringBuffer& sb , bool bOn)
{
	sb.Append(_T("["));
	BOOL bFirst = TRUE;
	for (POSITION pos = m_list.GetHeadPosition(); pos != NULL; )
	{
		if (bFirst) bFirst = FALSE;
		else
		{
			sb.Append(_T(","));
		}
		auto p = m_list.GetNext(pos);
		p->AppendStringBuffer(sb);
	}
	sb.Append(_T("]"));
}

void CJsonArray::ToString(CString& strOutput, bool bOn)
{
	CJsonStringBuffer sb;
//	if(bOn)
	AppendStringBuffer(sb);

	sb.ToString(strOutput,bOn);
}

void CJsonArray::Push(int nValue)
{
	m_list.AddTail(new CJsonValue(nValue));
}

void CJsonArray::Push(double fValue)
{
	m_list.AddTail(new CJsonValue(fValue));
}

void CJsonArray::Push(LPCTSTR strValue)
{
	m_list.AddTail(new CJsonValue(strValue));
}

void CJsonArray::Push(CJsonItem* pValue)
{
	m_list.AddTail(pValue);
}

void CJsonValue::ToString(CString& strOutput, bool bOn)
{
	strOutput += m_strValue;
}

void CJsonValue::AppendStringBuffer(CJsonStringBuffer& sb , bool bOn)
{
	sb.Append(m_strValue);
}