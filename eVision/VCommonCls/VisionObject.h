#pragma once

#include <typeinfo>

#include <afxmt.h>

#define IsInstanceKindOf(pSrcInstance, pCheckingInstance) dynamic_cast<decltype(pSrcInstance)>(pCheckingInstance) ? true : false

class AFX_EXT_CLASS CVisionObject
{
private:
	CString m_strClassName;
	CString m_strClassRawName;
	const type_info* m_pTypeInfo;
	int m_nClassSize;

	CCriticalSection m_CS;

public:
	CVisionObject();
	virtual ~CVisionObject();
	
	void SetClassNameString(CString strClassName);
	void SetClassRawNameString(CString strClassRawName);

	const CString GetClassNameString();

	int GetClassSize() { return m_nClassSize; }

	const CString GetClassRawNameString();
	const type_info& GetClassType();

	bool Lock() { return m_CS.Lock(); }
	void Unlock() { m_CS.Unlock(); }

	virtual CVisionObject* CreateVisionInstance() = 0;		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..
	virtual CVisionObject* ValidateRTTI(CVisionObject* pInstance);
};

