#pragma once

enum eDirection
{
	eDirection_LtoR,
	eDirection_RtoL,
	eDirection_TtoB,
	eDirection_BtoT,
	eDirection_LtoRtoL,
	eDirection_LtoRtoB,
	eDirection_LtoRtoT,
	eDirection_RtoLtoR,
	eDirection_RtoLtoB,
	eDirection_RtoLtoT,
	eDirection_TtoBtoT,
	eDirection_TtoBtoL,
	eDirection_TtoBtoR,
	eDirection_BtoTtoB,
	eDirection_BtoTtoL,
	eDirection_BtoTtoR,
};

typedef struct sDPOINT
{
	double	x;
	double	y;

	operator POINT()
	{
		POINT pt;

		pt.x = (long)x;
		pt.y = (long)y;

		return pt;
	}

	sDPOINT& operator =(POINT& pt)
	{
		x = pt.x;
		y = pt.y;

		return *this;
	}
}
	DPOINT, *LPDPOINT;

typedef struct sPOINT_XYT
{
	long x;
	long y;
	long t;

	operator POINT()
	{
		POINT pt;

		pt.x = x;
		pt.y = y;

		return pt;
	}

	operator DPOINT()
	{
		DPOINT dpt;

		dpt.x = x;
		dpt.y = y;

		return dpt;
	}

	sPOINT_XYT& operator =(POINT& pt)
	{
		x = pt.x;
		y = pt.y;
		t = 0;

		return *this;
	}

	sPOINT_XYT& operator =(DPOINT& dpt)
	{
		x = (long)dpt.x;
		y = (long)dpt.y;
		t = (long)0;

		return *this;
	}
} 
	POINT_XYT, *LPPOINT_XYT;

typedef struct sDPOINT_XYT
{
	double x;
	double y;
	double t;

	operator POINT()
	{
		POINT pt;

		pt.x = (long)x;
		pt.y = (long)y;

		return pt;
	}

	operator sDPOINT()
	{
		sDPOINT dpt;

		dpt.x = x;
		dpt.y = y;

		return dpt;
	}

	operator POINT_XYT()
	{
		DPOINT_XYT pt;

		pt.x = (long)x;
		pt.y = (long)y;
		pt.t = (long)t;

		return pt;
	}

	sDPOINT_XYT& operator =(sDPOINT& dpt)
	{
		x = dpt.x;
		y = dpt.y;
		t = 0;

		return *this;
	}

	sDPOINT_XYT& operator =(POINT& pt)
	{
		x = pt.x;
		y = pt.y;
		t = 0;

		return *this;
	}

	sDPOINT_XYT& operator =(POINT_XYT& pt)
	{
		x = pt.x;
		y = pt.y;
		t = pt.t;

		return *this;
	}
} 
	DPOINT_XYT, *LPDPOINT_XYT;

typedef struct sDRECT
{
	double left;
	double top;
	double right;
	double bottom;

	operator RECT()
	{
		RECT rc;

		rc.left = (long)left;
		rc.top = (long)top;
		rc.right = (long)right;
		rc.bottom = (long)bottom;

		return rc;
	}

	sDRECT& operator =(RECT& rc)
	{
		left = rc.left;
		top = rc.top;
		right = rc.right;
		bottom = rc.bottom;

		return *this;
	}

	void Offset(DPOINT& dptOffset)
	{
		left += dptOffset.x;	
		top += dptOffset.y;	
		right += dptOffset.x;	
		bottom += dptOffset.y;	
	}

	void Offset(POINT& ptOffset)
	{
		left += ptOffset.x;	
		top += ptOffset.y;	
		right += ptOffset.x;	
		bottom += ptOffset.y;	
	}

	void Offset(int nX, int nY)
	{
		left += nX;	
		top += nY;	
		right += nX;	
		bottom += nY;	
	}

	void Offset(double dblX, double dblY)
	{
		left += dblX;	
		top += dblY;	
		right += dblX;	
		bottom += dblY;	
	}
} 
	DRECT, *LPDRECT;

typedef struct sQUADRANGLE
{
	POINT	ptKnot[4];

	operator RECT()
	{
		RECT rc;

		rc.left = __min(__min(__min(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		rc.top = __min(__min(__min(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);
		rc.right = __max(__max(__max(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		rc.bottom = __max(__max(__max(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);

		return rc;
	}

	sQUADRANGLE& operator =(RECT& rc)
	{
		ptKnot[0].x = rc.left;
		ptKnot[0].y = rc.top;
		ptKnot[1].x = rc.right;
		ptKnot[1].y = rc.top;
		ptKnot[2].x = rc.right;
		ptKnot[2].y = rc.bottom;
		ptKnot[3].x = rc.left;
		ptKnot[3].y = rc.bottom;

		return *this;
	}

	operator sDRECT()
	{
		sDRECT drc;

		drc.left = __min(__min(__min(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		drc.top = __min(__min(__min(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);
		drc.right = __max(__max(__max(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		drc.bottom = __max(__max(__max(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);

		return drc;
	}

	sQUADRANGLE& operator =(sDRECT& drc)
	{
		ptKnot[0].x = (long)drc.left;
		ptKnot[0].y = (long)drc.top;
		ptKnot[1].x = (long)drc.right;
		ptKnot[1].y = (long)drc.top;
		ptKnot[2].x = (long)drc.right;
		ptKnot[2].y = (long)drc.bottom;
		ptKnot[3].x = (long)drc.left;
		ptKnot[3].y = (long)drc.bottom;

		return *this;
	}

	void Offset(DPOINT& dptOffset)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += (LONG)dptOffset.x;
			ptKnot[i].y += (LONG)dptOffset.y;
		}
	}

	void Offset(POINT& ptOffset)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += ptOffset.x;
			ptKnot[i].y += ptOffset.y;
		}
	}

	void Offset(int nX, int nY)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += nX;
			ptKnot[i].y += nY;
		}
	}

	void Offset(double dblX, double dblY)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += (LONG)dblX;
			ptKnot[i].y += (LONG)dblY;
		}
	}
}
	QUADRANGLE, *LPQUADRANGLE;

typedef struct sDQUADRANGLE
{
	DPOINT	ptKnot[4];

	operator RECT()
	{
		RECT rc;

		rc.left = (long)__min(__min(__min(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		rc.top = (long)__min(__min(__min(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);
		rc.right = (long)__max(__max(__max(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		rc.bottom = (long)__max(__max(__max(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);

		return rc;
	}

	sDQUADRANGLE& operator =(RECT& rc)
	{
		ptKnot[0].x = rc.left;
		ptKnot[0].y = rc.top;
		ptKnot[1].x = rc.right;
		ptKnot[1].y = rc.top;
		ptKnot[2].x = rc.right;
		ptKnot[2].y = rc.bottom;
		ptKnot[3].x = rc.left;
		ptKnot[3].y = rc.bottom;

		return *this;
	}

	operator sDRECT()
	{
		sDRECT drc;

		drc.left = __min(__min(__min(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		drc.top = __min(__min(__min(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);
		drc.right = __max(__max(__max(ptKnot[0].x, ptKnot[1].x), ptKnot[2].x), ptKnot[3].x);
		drc.bottom = __max(__max(__max(ptKnot[0].y, ptKnot[1].y), ptKnot[2].y), ptKnot[3].y);

		return drc;
	}

	sDQUADRANGLE& operator =(sDRECT& drc)
	{
		ptKnot[0].x = drc.left;
		ptKnot[0].y = drc.top;
		ptKnot[1].x = drc.right;
		ptKnot[1].y = drc.top;
		ptKnot[2].x = drc.right;
		ptKnot[2].y = drc.bottom;
		ptKnot[3].x = drc.left;
		ptKnot[3].y = drc.bottom;

		return *this;
	}

	operator sQUADRANGLE()
	{
		sQUADRANGLE qdr;

		qdr.ptKnot[0] = ptKnot[0];
		qdr.ptKnot[1] = ptKnot[1];
		qdr.ptKnot[2] = ptKnot[2];
		qdr.ptKnot[3] = ptKnot[3];

		return qdr;
	}

	sDQUADRANGLE& operator =(sQUADRANGLE& qdr)
	{
		ptKnot[0] = qdr.ptKnot[0];
		ptKnot[1] = qdr.ptKnot[1];
		ptKnot[2] = qdr.ptKnot[2];
		ptKnot[3] = qdr.ptKnot[3];

		return *this;
	}

	void Offset(DPOINT& dptOffset)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += dptOffset.x;
			ptKnot[i].y += dptOffset.y;
		}
	}

	void Offset(POINT& ptOffset)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += ptOffset.x;
			ptKnot[i].y += ptOffset.y;
		}
	}

	void Offset(int nX, int nY)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += nX;
			ptKnot[i].y += nY;
		}
	}

	void Offset(double dblX, double dblY)
	{
		for(int i = 0; i < 4; ++i)
		{
			ptKnot[i].x += dblX;
			ptKnot[i].y += dblY;
		}
	}

}
	DQUADRANGLE, *LPDQUADRANGLE;


typedef struct sEllipse
{
	DPOINT dptCenter;
	float fWidth;
	float fHeight;
	float fAngle;

	sEllipse()
	{
		dptCenter.x = 0.;
		dptCenter.y = 0.;
		fWidth = 0.f;
		fHeight = 0.f;
		fAngle = 0.f;
	}
}
	SEllipse, *LPEllipse;

typedef struct sCircle
{
	DPOINT dptCenter;
	float fRadius;

	sCircle()
	{
		dptCenter.x = 0.;
		dptCenter.y = 0.;
		fRadius = 0.f;
	}
}
	SCircle, *LPCircle;

typedef struct sLine
{
	DPOINT dptStart;
	DPOINT dptEnd;

	sLine()
	{
		dptStart.x = 0.;
		dptStart.y = 0.;
		dptEnd.x = 0.;
		dptEnd.y = 0.;
	}
}
	SLine, *LPLine;

typedef struct sArc : public sCircle
{
	float fStartAngle;
	float fEndAngle;

	sArc()
	{
		fStartAngle = 0.f;
		fEndAngle = 0.f;
	}
}
	SArc, *LPArc;

typedef struct sPolyline
{
	long nCounts;
	DPOINT* pDptPoints;

	sPolyline()
	{
		nCounts = 0;
		pDptPoints = nullptr;
	}
}
	SPolyline, *LPPolyline;

typedef struct sSpline : public sPolyline
{
	sSpline()
	{
	}
}
	SSpline, *LPSpline;
