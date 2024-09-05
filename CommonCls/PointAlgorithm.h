#pragma once

//////////////////////////////////////////////////////////////////////////
//Add header
#include <vector>
#include <algorithm>
#include <stack>

//////////////////////////////////////////////////////////////////////////

#define RADIAN		57.295779513082320876798154814105

class CPointAlgorithm
{
public:
	CPointAlgorithm();
	~CPointAlgorithm();

public:
	struct SPointConvex
	{
		CRavidPoint<double> rpConvex;
		float fAngle;
	};

public:
	//////////////////////////////////////////////////////////////////////////
	void SetRavidVector(std::vector<CRavidPoint<double>> &vctSrc);
	bool GetRavidVector(std::vector<CRavidPoint<double>> *vctDst);
	bool MeasureConvexHull();
	std::vector<SPointConvex> m_vctConvexSrc;
	std::stack <SPointConvex> m_vctConvexDst;
	//////////////////////////////////////////////////////////////////////////

public:
	int FuncSwap(CRavidPoint<double>& rp1, CRavidPoint<double>& rp2);
	int FuncSwap(CRavidPoint<int>& rp1, CRavidPoint<int>& rp2);
	void FuncConvexHull(std::vector<CRavidPoint<double>> vctSrc, std::vector<CRavidPoint<double>>* vctDst);
	void FuncConvexHull(std::vector<CRavidPoint<int>> vctSrc, std::vector<CRavidPoint<int>>* vctDst);

	//////////////////////////////////////////////////////////////////////////
	int ccw(SPointConvex p1, SPointConvex p2, SPointConvex p3);				//점 위치 파악
	void FirstPoint(std::vector <SPointConvex> &PointLocate);	//P0 찾기
	void PointAngle(std::vector<SPointConvex> &PointLocate);	//점들에 대한 각도 구하기

	//각도 크기에 따른 오름차순 정렬, P0, P1, P2 셋팅
	void PointSort(std::vector<SPointConvex> &PointLocate, std::stack<SPointConvex> &ConvexPoint);
	//ConvexPoint 구하기
	void PointSearch(std::vector<SPointConvex> &PointLocate, std::stack<SPointConvex> &ConvexPoint);
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	CRavidPoint<double> GetPtOfRotateAngleQuad(CRavidPoint<double> rpCenter, CRavidPoint<double> rpPoint, double dblRotateAngle);
	double GetAngleQuad(double dCX, double dCY, double dPX, double dPY);
	double GetAngleQuad(int nCX, int nCY, int nPX, int nPY);
	double GetAngleQuad(CRavidPoint<double> rpCenter, CRavidPoint<double> rpPoint);
	double GetAngleQuad(CRavidPoint<int> rpCenter, CRavidPoint<int> rpPoint);
	//////////////////////////////////////////////////////////////////////////
};

