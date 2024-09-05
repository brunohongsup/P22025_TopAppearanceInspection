#include "stdafx.h"
#include "PointAlgorithm.h"

#define PI			3.14159265358979323846264338327950288419716939937510

CPointAlgorithm::CPointAlgorithm()
{
}


CPointAlgorithm::~CPointAlgorithm()
{
}

POINT m_rp0;

double CRS(CRavidPoint<double> rp1, CRavidPoint<double> rp2)
{
	return rp1.x*rp2.y - rp1.y*rp2.x;
}

double CRS(CRavidPoint<int> rp1, CRavidPoint<int> rp2)
{
	return rp1.x*rp2.y - rp1.y*rp2.x;
}

int CCW(CRavidPoint<double> rp1, CRavidPoint<double> rp2, CRavidPoint<double> rp3)
{
	// 0 --> Linear Line
	// 1 --> Clockwise CW 
	// 2 --> Counterclockwise CCW
	CRavidPoint<double> rpC1;
	rpC1.x = rp2.x - rp1.x;
	rpC1.y = rp2.y - rp1.y;
	CRavidPoint<double> rpC2;
	rpC2.x = rp3.x - rp1.x;
	rpC2.y = rp3.y - rp1.y;

	double nValue = CRS(rpC1, rpC2);
	if(nValue > 0) return 1;
	if(nValue < 0) return -1;
	return 0;
}

int CCW(CRavidPoint<int> rp1, CRavidPoint<int> rp2, CRavidPoint<int> rp3)
{
	// 0 --> Linear Line
	// 1 --> Clockwise CW 
	// 2 --> Counterclockwise CCW
	CRavidPoint<double> rpC1;
	rpC1.x = rp2.x - rp1.x;
	rpC1.y = rp2.y - rp1.y;
	CRavidPoint<double> rpC2;
	rpC2.x = rp3.x - rp1.x;
	rpC2.y = rp3.y - rp1.y;

	double nValue = CRS(rpC1, rpC2);
	if(nValue > 0) return 1;
	if(nValue < 0) return -1;
	return 0;
}

int comparedouble(const CRavidPoint<double>& vp1, const CRavidPoint<double>& vp2)
{
	int nValue = CCW(m_rp0, vp1, vp2);
	if(nValue > 0) return true;
	if(nValue < 0) return false;
	if(vp1.x != vp2.x) return vp1.x < vp2.x;
	return vp1.y < vp2.y;
}

int compareint(const CRavidPoint<int>& vp1, const CRavidPoint<int>& vp2)
{
	int nValue = CCW(m_rp0, vp1, vp2);
	if(nValue > 0) return true;
	if(nValue < 0) return false;
	if(vp1.x != vp2.x) return vp1.x < vp2.x;
	return vp1.y < vp2.y;
}

int CPointAlgorithm::FuncSwap(CRavidPoint<double>& rp1, CRavidPoint<double>& rp2)
{
	POINT rpTemp = rp1;
	rp1 = rp2;
	rp2 = rpTemp;

	return 0;
}

int CPointAlgorithm::FuncSwap(CRavidPoint<int>& rp1, CRavidPoint<int>& rp2)
{
	POINT rpTemp = rp1;
	rp1 = rp2;
	rp2 = rpTemp;

	return 0;
}

void CPointAlgorithm::FuncConvexHull(std::vector<CRavidPoint<double>> vctSrc, std::vector<CRavidPoint<double>>* vctDst)
{
	if(vctSrc.size() > 3)
	{
		double dblMinPosY = vctSrc[0].y;
		int nMin = 0;
		for(size_t i = 1; i < vctSrc.size(); ++i)
		{
			double dblPosY = vctSrc[i].y;

			if((dblPosY < dblMinPosY) || (dblMinPosY == dblPosY && vctSrc[i].x < vctSrc[nMin].x))
			{
				dblMinPosY = vctSrc[i].y;
				nMin = (int)i;
			}
		}

		FuncSwap(vctSrc[0], vctSrc[nMin]);

		m_rp0 = vctSrc[0];

		std::sort(vctSrc.begin() + 1, vctSrc.end(), comparedouble);

		int nMem = 1;

		for(size_t i = 0; i < vctSrc.size(); ++i)
		{
			while(vctDst->size() >= 2 && CCW(vctDst->at(vctDst->size() - 2), vctDst->back(), vctSrc[i]) <= 0)
			{
				vctDst->pop_back();
			}
			vctDst->push_back(vctSrc[i]);
		}
		return;
	}
}

void CPointAlgorithm::FuncConvexHull(std::vector<CRavidPoint<int>> vctSrc, std::vector<CRavidPoint<int>>* vctDst)
{
	if(vctSrc.size() > 3)
	{
		double dblMinPosY = vctSrc[0].y;
		int nMin = 0;
		for(size_t i = 1; i < vctSrc.size(); ++i)
		{
			double dblPosY = vctSrc[i].y;

			if((dblPosY < dblMinPosY) || (dblMinPosY == dblPosY && vctSrc[i].x < vctSrc[nMin].x))
			{
				dblMinPosY = vctSrc[i].y;
				nMin = (int)i;
			}
		}

		FuncSwap(vctSrc[0], vctSrc[nMin]);

		m_rp0 = vctSrc[0];

		std::sort(vctSrc.begin() + 1, vctSrc.end(), compareint);

		int nMem = 1;

		for(size_t i = 0; i < vctSrc.size(); ++i)
		{
			while(vctDst->size() >= 2 && CCW(vctDst->at(vctDst->size() - 2), vctDst->back(), vctSrc[i]) <= 0)
			{
				vctDst->pop_back();
			}
			vctDst->push_back(vctSrc[i]);
		}
		return;
	}
}

//////////////////////////////////////////////////////////////////////////
//Data Set
void CPointAlgorithm::SetRavidVector(std::vector<CRavidPoint<double>> &vctSrc)
{
	m_vctConvexSrc.clear();

	for(size_t i = 0; i < vctSrc.size(); ++i)
	{
		SPointConvex sConvex;
		sConvex.rpConvex = vctSrc[i];
		sConvex.fAngle = 0;

		m_vctConvexSrc.push_back(sConvex);
	}
}

bool CPointAlgorithm::GetRavidVector(std::vector<CRavidPoint<double>> *vctDst)
{
	bool bReturn = false;

	vctDst->clear();

	while(!m_vctConvexDst.empty())
	{
		vctDst->push_back(m_vctConvexDst.top().rpConvex);

		m_vctConvexDst.pop();
	}

	if(vctDst->size())
		bReturn = true;

	return bReturn;
}

bool CPointAlgorithm::MeasureConvexHull()
{
	if(m_vctConvexSrc.size() <= 0)
		return false;

	while( !m_vctConvexDst.empty() ) m_vctConvexDst.pop();

	FirstPoint(m_vctConvexSrc);
	PointAngle(m_vctConvexSrc);
	PointSort(m_vctConvexSrc, m_vctConvexDst);
	PointSearch(m_vctConvexSrc, m_vctConvexDst);

	return true;
}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
void CPointAlgorithm::FirstPoint(std::vector <SPointConvex> &vctConvexSrc)
{
	for(unsigned int i = 1; i < vctConvexSrc.size(); i++)
	{
		if(vctConvexSrc[0].rpConvex.y < vctConvexSrc[i].rpConvex.y)
		{
			std::swap(vctConvexSrc[0], vctConvexSrc[i]);
		}
		else if(vctConvexSrc[0].rpConvex.y == vctConvexSrc[i].rpConvex.y)
		{
			if(vctConvexSrc[0].rpConvex.x > vctConvexSrc[i].rpConvex.x)
			{
				std::swap(vctConvexSrc[0], vctConvexSrc[i]);
			}
		}
	}
}

bool Comp(CPointAlgorithm::SPointConvex &angle, CPointAlgorithm::SPointConvex &angle2)
{
	return angle.fAngle < angle2.fAngle;
}

void CPointAlgorithm::PointSort(std::vector<SPointConvex> &vctConvexSrc, std::stack<SPointConvex> &vctConvexDst)
{
	int nSize = (int)vctConvexSrc.size();
	sort(vctConvexSrc.begin(), vctConvexSrc.end(), Comp);

	vctConvexDst.push(vctConvexSrc[0]);
	vctConvexDst.push(vctConvexSrc[1]);
	vctConvexDst.push(vctConvexSrc[2]);
}

void CPointAlgorithm::PointAngle(std::vector<SPointConvex> &vctConvexSrc)
{
	float cx, cy, angle;

	for(unsigned int i = 1; i < vctConvexSrc.size(); i++)
	{
		cx = (float)vctConvexSrc[i].rpConvex.x - (float)vctConvexSrc[0].rpConvex.x;
		cy = (float)vctConvexSrc[i].rpConvex.y - (float)vctConvexSrc[0].rpConvex.y;

		angle = atan2(cy, cx);
		angle = angle * 180 / (float)PI;
		vctConvexSrc[i].fAngle = fabs(angle);
	}
	vctConvexSrc[0].fAngle = 0;
}
void CPointAlgorithm::PointSearch(std::vector<SPointConvex> &vctConvexSrc, std::stack<SPointConvex> &vctConvexDst)
{
	SPointConvex P1 = vctConvexSrc[1];
	SPointConvex P2 = vctConvexSrc[2];

	for(unsigned int i = 3; i < vctConvexSrc.size(); i++)
	{
		while(ccw(P1, P2, vctConvexSrc[i]) <= 0 && vctConvexSrc[i].fAngle > 0)
		{
			vctConvexDst.pop();

			P2 = vctConvexDst.top();
			vctConvexDst.pop();
			P1 = vctConvexDst.top();
			vctConvexDst.push(P2);
		}
		if(vctConvexSrc[i].fAngle != 0)
		{
			vctConvexDst.push(vctConvexSrc[i]);
		}

		P2 = vctConvexDst.top();
		vctConvexDst.pop();
		P1 = vctConvexDst.top();
		vctConvexDst.push(P2);
	}
}

int CPointAlgorithm::ccw(SPointConvex p1, SPointConvex p2, SPointConvex p3)
{
	return (int)((p2.rpConvex.x - p1.rpConvex.x)*((1000 - p3.rpConvex.y) - (1000 - p1.rpConvex.y)) - ((1000 - p2.rpConvex.y) - (1000 - p1.rpConvex.y))*(p3.rpConvex.x - p1.rpConvex.x));
}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
CRavidPoint<double> CPointAlgorithm::GetPtOfRotateAngleQuad(CRavidPoint<double> rpCenter, CRavidPoint<double> rpPoint, double dblRotateAngle)
{
	CRavidPoint<double> dptRotate, dptDist;
	double dAng = GetAngleQuad(rpCenter, rpPoint) + dblRotateAngle;
	double dRadius = rpCenter.GetDistance(rpPoint);

	//Test
	double dAngleRavid = rpCenter.GetAngle(rpPoint) + dblRotateAngle;
	//Test
	dptDist.x = dRadius * cos(dAng / RADIAN);
	dptDist.y = dRadius * sin(dAng / RADIAN);

	// Quad -> Vision coordinates
	dptRotate.x = rpCenter.x + dptDist.x;
	dptRotate.y = rpCenter.y - dptDist.y;

	return dptRotate;
}

double CPointAlgorithm::GetAngleQuad(double dCX, double dCY, double dPX, double dPY)
{
	double Theta, at;
	double dx, dy;

	//Vision 좌표계에서만 해당됨.
	dx = dPX - dCX;
	dy = dCY - dPY;

	if(dx == 0)
	{
		if(dy == 0) return 0;
		else if(dy > 0) return 90;
		else return 270;
	}
	else
		at = (float)atan(dy / dx) * RADIAN;

	if(dx >= 0 && dy >= 0)
	{				//1사분면
		Theta = at;
	}
	else if(dx <= 0 && dy >= 0)
	{		//2사분면
		Theta = 180 + at;
	}
	else if(dx <= 0 && dy <= 0)
	{		//3사분면
		Theta = 180 + at;
	}
	else if(dx >= 0 && dy <= 0)
	{		//4사분면
		Theta = 360 + at;
	}
	return Theta;
}

double CPointAlgorithm::GetAngleQuad(CRavidPoint<double> rpCenter, CRavidPoint<double> rpPoint)
{
	double Theta, at;
	double dx, dy;

	//Vision 좌표계에서만 해당됨.
	dx = rpPoint.x - rpCenter.x;
	dy = rpCenter.y - rpPoint.y;

	if(dx == 0)
	{
		if(dy == 0) return 0;
		else if(dy > 0) return 90;
		else return 270;
	}
	else
		at = (float)atan(dy / dx) * RADIAN;

	if(dx >= 0 && dy >= 0)
	{				//1사분면
		Theta = at;
	}
	else if(dx <= 0 && dy >= 0)
	{		//2사분면
		Theta = 180 + at;
	}
	else if(dx <= 0 && dy <= 0)
	{		//3사분면
		Theta = 180 + at;
	}
	else if(dx >= 0 && dy <= 0)
	{		//4사분면
		Theta = 360 + at;
	}

	return Theta;
}

double CPointAlgorithm::GetAngleQuad(int nCX, int nCY, int nPX, int nPY)
{
	double Theta, at;
	double dx, dy;

	//Vision 좌표계에서만 해당됨.
	dx = nPX - nCX;
	dy = nCY - nPY;

	if(dx == 0)
	{
		if(dy == 0) return 0;
		else if(dy > 0) return 90;
		else return 270;
	}
	else
		at = (float)atan(dy / dx) * RADIAN;

	if(dx >= 0 && dy >= 0)
	{				//1사분면
		Theta = at;
	}
	else if(dx <= 0 && dy >= 0)
	{		//2사분면
		Theta = 180 + at;
	}
	else if(dx <= 0 && dy <= 0)
	{		//3사분면
		Theta = 180 + at;
	}
	else if(dx >= 0 && dy <= 0)
	{		//4사분면
		Theta = 360 + at;
	}
	return Theta;
}

double CPointAlgorithm::GetAngleQuad(CRavidPoint<int> rpCenter, CRavidPoint<int> rpPoint)
{
	double Theta, at;
	double dx, dy;

	//Vision 좌표계에서만 해당됨.
	dx = rpPoint.x - rpCenter.x;
	dy = rpCenter.y - rpPoint.y;

	if(dx == 0)
	{
		if(dy == 0) return 0;
		else if(dy > 0) return 90;
		else return 270;
	}
	else
		at = (float)atan(dy / dx) * RADIAN;

	if(dx >= 0 && dy >= 0)
	{				//1사분면
		Theta = at;
	}
	else if(dx <= 0 && dy >= 0)
	{		//2사분면
		Theta = 180 + at;
	}
	else if(dx <= 0 && dy <= 0)
	{		//3사분면
		Theta = 180 + at;
	}
	else if(dx >= 0 && dy <= 0)
	{		//4사분면
		Theta = 360 + at;
	}

	return Theta;
}