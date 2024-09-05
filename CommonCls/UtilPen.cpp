#include "stdafx.h"
#include "UtilPen.h"


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#define new DEBUG_NEW
#endif
CUtilPen::CUtilPen()
{
	m_bUsePen = false;
	m_bLButtonClicking = false;
	m_bSelectGV = false;
	m_nSelectGV = 0;
}

CUtilPen::~CUtilPen()
{

}

void CUtilPen::OnDraw(CDC* pDC)
{

	__super::OnDraw(pDC);
}

void CUtilPen::OnMouseMove(UINT nFlags, CPoint point)
{

	if (m_bLButtonClicking && IsUsePen())
	{
		CRavidPoint<int> rpTest = point;
		rpTest = ScreenCoordToImageCoord(rpTest);
		CRavidPoint<double> rpDDD = rpTest;
		double dblPixel = GetImageInfo()->GetGVBilinear(rpDDD);





		if (GetImageInfo()->IsColor())
		{
			GetImageInfo()->SetValue((int)rpDDD.x, (int)rpDDD.y, (BYTE)m_sColor.bRed, (BYTE)m_sColor.bGreen, (BYTE)m_sColor.bBlue);
		}
		else
		{
			if (m_nSelectGV == 0)
				m_bGV = ChangeRGBtoGray((BYTE)m_sColor.bRed, (BYTE)m_sColor.bGreen, (BYTE)m_sColor.bBlue);
			else
				m_bGV = m_nSelectGV;
			GetImageInfo()->SetValue((int)rpDDD.x, (int)rpDDD.y, (BYTE)m_bGV);
		}

		Invalidate();
	}
	else
	{
		__super::OnMouseMove(nFlags, point);
	}
}

void CUtilPen::OnLButtonDown(UINT nFlags, CPoint point)
{
	int nObjectID = GetObjectID();

	if (m_bSelectGV)
	{
		if (GetImageInfo() == NULL)
			return;

		CRavidPoint<int> rpTest = point;
		rpTest = ScreenCoordToImageCoord(rpTest);
		CRavidPoint<double> rpDDD = rpTest;
		float fPixel = GetImageInfo()->GetGVBilinear(rpDDD);

		m_nSelectGV = (BYTE)fPixel;
		m_bSelectGV = false;

	}
	else
	{
		if (IsUsePen())
		{
			if (GetImageInfo() == NULL)
				return;

			m_bLButtonClicking = true;

			CRavidPoint<int> rpTest = point;
			rpTest = ScreenCoordToImageCoord(rpTest);
			CRavidPoint<double> rpDDD = rpTest;
			double dblPixel = GetImageInfo()->GetGVBilinear(rpDDD);

			if (GetImageInfo()->IsColor())
			{

				GetImageInfo()->SetValue((int)rpDDD.x, (int)rpDDD.y, (BYTE)m_sColor.bRed, (BYTE)m_sColor.bGreen, (BYTE)m_sColor.bBlue);
			}
			else
			{
				if (m_nSelectGV == 0)
					m_bGV = ChangeRGBtoGray((BYTE)m_sColor.bRed, (BYTE)m_sColor.bGreen, (BYTE)m_sColor.bBlue);
				else
					m_bGV = m_nSelectGV;
				GetImageInfo()->SetValue((int)rpDDD.x, (int)rpDDD.y, (BYTE)m_bGV);





			}
			Invalidate();
		}
		else
		{
			__super::OnLButtonDown(nFlags, point);
		}
	}
	
}

void CUtilPen::OnLButtonUp(UINT nFlags, CPoint point)
{
	if (IsUsePen())
	{
		m_bLButtonClicking = false;
	}
	else
	{
		__super::OnLButtonUp(nFlags, point);
	}
}

void CUtilPen::OnRButtonDown(UINT nFlags, CPoint point)
{
	if(IsUsePen())
	{
		ChoiceColor();
	}
	else
	{
		__super::OnRButtonDown(nFlags, point);
	}
}

void CUtilPen::OnRButtonUp(UINT nFlags, CPoint point)
{
	if(!IsUsePen())
	{
		__super::OnRButtonUp(nFlags, point);
	}
}

void CUtilPen::OnMButtonDown(UINT nFlags, CPoint point)
{
	if (IsUsePen())
	{
		m_cpWheelStart = point;
	}
	else
	{
		__super::OnMButtonDown(nFlags, point);
	}

}
void CUtilPen::OnMButtonUp(UINT nFlags, CPoint point)
{
	if (IsUsePen())
	{
		m_cpWheelEnd = point;

		CRavidRect<int> rrROI;

		rrROI.left = m_cpWheelStart.x < m_cpWheelEnd.x ? m_cpWheelStart.x : m_cpWheelEnd.x;
		rrROI.top = m_cpWheelStart.y < m_cpWheelEnd.y ? m_cpWheelStart.y : m_cpWheelEnd.y;
		rrROI.right = m_cpWheelStart.x < m_cpWheelEnd.x ? m_cpWheelEnd.x : m_cpWheelStart.x;
		rrROI.bottom = m_cpWheelStart.y < m_cpWheelEnd.y ? m_cpWheelEnd.y : m_cpWheelStart.y;

		for (int i = rrROI.top; i < rrROI.bottom; i++)
		{
			for (int j = rrROI.left; j < rrROI.right; j++)
			{
				CRavidPoint<int> rpTest;
				rpTest.x = j;
				rpTest.y = i;

				rpTest = ScreenCoordToImageCoord(rpTest);

				if (m_nSelectGV == 0)
					m_bGV = ChangeRGBtoGray((BYTE)m_sColor.bRed, (BYTE)m_sColor.bGreen, (BYTE)m_sColor.bBlue);
				else
					m_bGV = m_nSelectGV;

				if(0 < rpTest.x && 0 < rpTest.y && rpTest.x < GetImageInfo()->GetSizeX() && rpTest.y < GetImageInfo()->GetSizeY())
					GetImageInfo()->SetValue(rpTest.x, rpTest.y, (BYTE)m_bGV);
			}
		}
		Invalidate();

	}
	else
	{
		__super::OnMButtonUp(nFlags, point);

	}
}

BOOL CUtilPen::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	return __super::OnMouseWheel(nFlags, zDelta, pt);
}

BOOL CUtilPen::PreTranslateMessage(MSG* pMsg)
{
	return __super::PreTranslateMessage(pMsg);
}

void CUtilPen::ChoiceColor()
{
	m_nSelectGV = 0;

//  	 int nYes = AfxMessageBox(_T("색 배합 할꺼?"), MB_YESNO);
//   	if (nYes == 6)
//   	{
// 		SelectDialogColor();
//   	}
//   	else
	{
		SelectImageColor();
	}
}


void CUtilPen::SelectDialogColor()
{
	int tes = GetObjectID();

	CColorDialog dlg(RGB(255, 0, 0), CC_FULLOPEN);;
	if ((dlg.DoModal() == IDOK))
	{
		m_sColor.bRed = GetRValue(dlg.GetColor());
		m_sColor.bGreen = GetGValue(dlg.GetColor());
		m_sColor.bBlue = GetBValue(dlg.GetColor());
	}
}

void CUtilPen::SelectImageColor()
{
	m_bSelectGV = true;
}



void CUtilPen::UsePen(bool bUse)
{
	//싱클톤 버전
// 	CSingletonCheck* cSingle;
// 
// 	cSingle = CSingletonCheck::GetInstance();
// 	cSingle->SetUse(bUse);

	m_bUsePen = bUse;

	//Image View Number 설정해야하는 버전
// 	m_bUsePen = bUse;
// 
// 	if (!bUse)
// 		m_nSelectGV = 0;
}

bool CUtilPen::IsUsePen()
{
	//싱클톤 버전
// 	CSingletonCheck* cSingle;
// 
// 	cSingle = CSingletonCheck::GetInstance();

	return m_bUsePen;

	//???
//	return cSingle->IsUsePen();


	//Image View Number 설정해야하는 버전
//	return m_bUsePen;
}

bool CUtilPen::IsLButtonClicking()
{
	return m_bLButtonClicking;
}

BYTE CUtilPen::ChangeRGBtoGray(BYTE bR, BYTE bG, BYTE bB)
{
	//	RGB to YIQ Matrix 사용한 변환공식.
	return (BYTE)((0.2989 * bR) + (0.5870 * bG) + (0.1140 * bB));
}


// bool CSingletonCheck::bFlag = false;
// 
// CSingletonCheck* CSingletonCheck::cSingleInstance = nullptr;
// 
// CSingletonCheck* CSingletonCheck::GetInstance()
// {
// 	if (!cSingleInstance)
// 	{
// 		cSingleInstance = new CSingletonCheck();
// 		bFlag = true;
// 	}
// 	else
// 	{
// 		cSingleInstance = nullptr;
// 	}
// 	return cSingleInstance;
// }
// 
// CSingletonCheck::~CSingletonCheck()
// {
// 
// 	if(cSingleInstance)
// 	{
// 		delete cSingleInstance;
// 		cSingleInstance = nullptr;
// 	}
// };
