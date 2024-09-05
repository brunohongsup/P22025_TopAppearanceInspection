#pragma once
class CRavidPolygonEx : public CRavidPolygon
{
public:
	CRavidPolygonEx();
	virtual ~CRavidPolygonEx();


	bool AddArray(std::vector<CRavidPoint<int>>* pvtArr);
};

