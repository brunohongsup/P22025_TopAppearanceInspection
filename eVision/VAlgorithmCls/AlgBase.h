// AlgBase.h: interface for the CAlgBase class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_INSPBASE_H__543B0778_CE33_4D3A_976A_1A7C6D07AD03__INCLUDED_)
#define AFX_INSPBASE_H__543B0778_CE33_4D3A_976A_1A7C6D07AD03__INCLUDED_

#include "../VCommonCls/VisionObject.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CVision;

class CAlgBase
{
public:	

	virtual CVisionObject*	CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..

	CAlgBase();
	virtual ~CAlgBase();

protected:
	CString m_strClassName;
	CString m_strClassRawName;
	const type_info* m_pTypeInfo;
	int m_nClassSize;

	CCriticalSection m_CS;

	bool Lock() { return m_CS.Lock(); }
	void Unlock() { m_CS.Unlock(); }
};

#endif // !defined(AFX_INSPBASE_H__543B0778_CE33_4D3A_976A_1A7C6D07AD03__INCLUDED_)
