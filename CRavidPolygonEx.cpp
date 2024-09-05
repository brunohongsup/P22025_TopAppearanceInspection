#include "stdafx.h"
#include "CRavidPolygonEx.h"


CRavidPolygonEx::CRavidPolygonEx()
{
}


CRavidPolygonEx::~CRavidPolygonEx()
{
}

bool CRavidPolygonEx::AddArray(std::vector<CRavidPoint<int>>* pvtArr)
{
	Lock();
	for (auto& item : m_vctArray)
		delete item;

	m_vctArray.clear();


	int nCount = (int)pvtArr->size();
	m_vctArray.resize(nCount);

	for (int i = 0; i < nCount; i++)
	{
		m_vctArray[i] = new CRavidPoint<int>(pvtArr->at(i).x, pvtArr->at(i).y);
	}

	Unlock();

	return true;
}