#include "stdafx.h"
#include "ImageViewTeaching.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define CHECK_WIN_UPDATE 20000
#define TIMER_CYCLE	5

IMPLEMENT_DYNCREATE(CImageViewTeaching, CRavidImageView)

CImageViewTeaching::CImageViewTeaching()
{
}


CImageViewTeaching::~CImageViewTeaching()
{
}

#ifdef _DEBUG
void CImageViewTeaching::AssertValid() const
{
	CView::AssertValid();
}

void CImageViewTeaching::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRavidDoc* CImageViewTeaching::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRavidDoc)));
	return (CRavidDoc*)m_pDocument;
}
#endif //_DEBUG

BEGIN_MESSAGE_MAP(CImageViewTeaching, CRavidImageView)
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_TIMER()
	ON_WM_MOUSEWHEEL()
	ON_WM_DROPFILES()
	ON_WM_SETCURSOR()
	ON_COMMAND(MENU_ID_MESURE_RECT, &CImageViewTeaching::OnCreateeRect)
	ON_COMMAND(MENU_ID_IMAGECONTROL2_DELETE, &CImageViewTeaching::OnImagecontrol2Delete)
	ON_COMMAND(MENU_ID_MESURE_DELETEALL, &CImageViewTeaching::OnImagecontrol2Delete)

	ON_COMMAND(MENU_ID_IMAGECONTROL_OPEN, &CImageViewTeaching::OnImagecontrolOpen)
	ON_COMMAND(MENU_ID_IMAGECONTROL_SAVE, &CImageViewTeaching::OnImagecontrolSave)
	ON_COMMAND(MENU_ID_IMAGECONTROL_CLOSE, &CImageViewTeaching::OnImagecontrolClose)
	ON_COMMAND(MENU_ID_IMAGECONTROL_IMPORTIMAGE, &CImageViewTeaching::OnImagecontrolImportImage)
	ON_COMMAND(MENU_ID_FINDCENTER, &CImageViewTeaching::OnImageFindCenter)

	ON_WM_MBUTTONDOWN()
	ON_WM_CREATE()
	ON_WM_MBUTTONDOWN()
	ON_WM_MBUTTONUP()
END_MESSAGE_MAP()

void CImageViewTeaching::OnDraw(CDC* pDC)
{
	__super::OnDraw(pDC);
	MeasureDataDraw();

}

void CImageViewTeaching::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	__super::OnTimer(nIDEvent);

	switch(nIDEvent)
	{
	case CHECK_WIN_UPDATE:
		{
			Invalidate();
		}
		break;

	default:
		break;
	}

	//ImplementThreadDisplayer();
}

void CImageViewTeaching::OnInitialUpdate()
{
	__super::OnInitialUpdate();
	m_hCursorIn[ECursor_Move] = AfxGetApp()->LoadCursor(IDC_CURSOR_MOVES);
	m_hCursorIn[ECursor_Size_Hor] = AfxGetApp()->LoadCursor(IDC_CURSOR_HOR);
	m_hCursorIn[ECursor_Size_Ver] = AfxGetApp()->LoadCursor(IDC_CURSOR_VER);

	m_hCursorIn[ECursor_Rotate] = AfxGetApp()->LoadCursor(IDC_CURSOR_ANGLE);
	m_hCursorIn[ECursor_None] = AfxGetApp()->LoadCursor(IDC_ARROW);

	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	SetTimer(CHECK_WIN_UPDATE, TIMER_CYCLE, nullptr);
}

int CImageViewTeaching::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if(CRavidImageView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	CMenu menuMain;
	m_menuMain.CreateMenu();

	CMenu menuPopup_IMAGECONTROL;
	CMenu menuPopup_IMAGECONTROL2;
	CMenu menuPopup_CONTINUELINE;
	menuPopup_IMAGECONTROL.CreatePopupMenu();
	menuPopup_IMAGECONTROL2.CreatePopupMenu();
	menuPopup_CONTINUELINE.CreatePopupMenu();
	CMenu menuSubPopup_MESURE;
	menuSubPopup_MESURE.CreatePopupMenu();

	//MESURE 팝업메뉴의 하위메뉴

	menuSubPopup_MESURE.AppendMenuW(MF_STRING, MENU_ID_MESURE_RECT, _T("Create a Square"));


	menuSubPopup_MESURE.AppendMenuW(MF_STRING | MF_DISABLED, MENU_ID_MESURE_DELETEALL, _T("Delete All"));

	//최상위 메뉴의 팝업 메뉴
	menuPopup_IMAGECONTROL.AppendMenuW(MF_STRING, MENU_ID_IMAGECONTROL_OPEN, _T("Open"));
	menuPopup_IMAGECONTROL.AppendMenuW(MF_STRING, MENU_ID_IMAGECONTROL_SAVE, _T("Save"));
	//menuPopup_IMAGECONTROL.AppendMenuW(MF_STRING, MENU_ID_FINDCENTER, _T("Master Align"));

	menuPopup_IMAGECONTROL.AppendMenuW(MF_STRING, MENU_ID_IMAGECONTROL_IMPORTIMAGE, _T("Import Image"));
	menuPopup_IMAGECONTROL.AppendMenuW(MF_STRING, MENU_ID_IMAGECONTROL_CLOSE, _T("Close"));
	menuPopup_IMAGECONTROL.AppendMenuW(MF_POPUP, (UINT_PTR)menuSubPopup_MESURE.Detach(), _T("Create"));

	menuPopup_IMAGECONTROL2.AppendMenuW(MF_STRING, MENU_ID_IMAGECONTROL2_DELETE, _T("Delete"));

// 	menuPopup_CONTINUELINE.AppendMenuW(MF_STRING, MENU_ID_CONTINUELINE_END, _T("측정 종료"));
// 	menuPopup_CONTINUELINE.AppendMenuW(MF_STRING, MENU_ID_CONTINUELINE_DELETE, _T("삭제"));
// 	menuPopup_CONTINUELINE.AppendMenuW(MF_STRING, MENU_ID_CONTINUELINE_DELETEALL, _T("전체 삭제"));
// 	menuPopup_CONTINUELINE.AppendMenuW(MF_STRING, MENU_ID_CONTINUELINE_CANCEEL, _T("취소"));
	//최상의 메뉴
	m_menuMain.AppendMenuW(MF_POPUP, (UINT_PTR)menuPopup_IMAGECONTROL.Detach(), _T("&IMAGECONTROL"));
	m_menuMain.AppendMenuW(MF_POPUP, (UINT_PTR)menuPopup_IMAGECONTROL2.Detach(), _T("&IMAGECONTROL2"));
	m_menuMain.AppendMenuW(MF_POPUP, (UINT_PTR)menuPopup_CONTINUELINE.Detach(), _T("&CONTINUELINE"));

	//윈도우에 메뉴 추가
	SetMenu(&m_menuMain);



	return 0;
}

BOOL CImageViewTeaching::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{

	if(!m_bCursor[ECursor_None])
	{
		for(int i = 0; i < ECursor_Count - 1; i++)
		{
			if(m_bCursor[i])
				SetCursor(m_hCursorIn[i]);
		}

	}
	else
	{
		SetCursor(LoadCursor(NULL, IDC_ARROW));
	}

	return TRUE;


//	SetCursor(LoadCursor(NULL, m_bMoveCursor ? IDC_SIZEALL : IDC_ARROW));
//	return TRUE;

	return CView::OnSetCursor(pWnd, nHitTest, message);
}

BOOL CImageViewTeaching::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
	m_rpScreenLastPos.SetPoint(pt);

 	return CRavidImageView::OnMouseWheel(nFlags, zDelta, pt);
}

void CImageViewTeaching::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CRavidPoint<int> rpScreen(point);
	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(rpScreen);

	bool bRBState = false;

	for(int i = 0; i < (int)m_vctMeasure.size(); ++i)
	{
		if(SetRect(i, rpImage, EMouseType_RButtonUp, true))
		{
			m_nMesureIndex = i;
			bRBState = true;
		}
	}

	if(!bRBState)
	{
		CPoint mouse;
		::GetCursorPos(&mouse);

		CMenu* pPopup = m_menuMain.GetSubMenu(0);
		CMenu* pPopup2 = pPopup->GetSubMenu(4);
		if(m_vctMeasure.size() > 0)
			pPopup2->EnableMenuItem(MENU_ID_MESURE_DELETEALL, MF_BYCOMMAND | MF_ENABLED);
		else
			pPopup2->EnableMenuItem(MENU_ID_MESURE_DELETEALL, MF_BYCOMMAND | MF_DISABLED);

		pPopup->TrackPopupMenu(TPM_LEFTALIGN, mouse.x, mouse.y, this);
		
	}
	else
	{
		CPoint mouse;
		::GetCursorPos(&mouse);
		CMenu* pPopup = m_menuMain.GetSubMenu(1);

		pPopup->TrackPopupMenu(TPM_LEFTALIGN, mouse.x, mouse.y, this);
	}

	//__super::OnRButtonUp(nFlags, point);
}

void CImageViewTeaching::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//////////////////////////////////////////////////////////////////////////
	m_bLButtonDown = true;
	CRavidPoint<int> rpScreen(point);
	m_rpScreenLastPos.SetPoint(point);
	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(rpScreen);
	SMeasure sData;

	for(int i = 0; i < (int)m_vctMeasure.size(); ++i)
	{	
		SetRect(i, rpImage, EMouseType_LButtonDown, true);
	}

// 	if(!m_vctMeasure.size())
// 		SetRect(0, rpImage, EMouseType_LButtonDown);

	//__super::OnLButtonDown(nFlags, point);
}

void CImageViewTeaching::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//__super::OnMouseMove(nFlags, point);

	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CRavidPoint<int> rpScreen(point);
	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(rpScreen);
	SMeasure sData;

	for(int i = 0; i < (int)m_vctMeasure.size(); ++i)
	{
// 		if(!m_bChoice)
// 			continue;

		SetRect(i, rpImage, EMouseType_MouseMove, true);	
	}

	if(m_bWheelButtonDown)
		__super::OnMouseMove(nFlags, point);
}

void CImageViewTeaching::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
		
	m_bLButtonDown = false;
	CRavidPoint<int> rpScreen(point);
	m_rpScreenLastPos.SetPoint(point);

	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(rpScreen);

	SMeasure sData;

	for(int i = 0; i < (int)m_vctMeasure.size(); ++i)
	{
		SetRect(i, rpImage, EMouseType_LButtonUp, true);		
	}

	if(!m_vctMeasure.size())
		SetRect(0, rpImage, EMouseType_LButtonUp);

	//__super::OnLButtonUp(nFlags, point);
}

void CImageViewTeaching::OnCreateeRect()
{

	if(!this->GetImageInfo())
		return;
	
	CRavidRect<int> rrImageSize;

	rrImageSize.left = 0;
	rrImageSize.top = 0;
	rrImageSize.right = this->GetImageInfo()->GetSizeX() - 1;
	rrImageSize.bottom = this->GetImageInfo()->GetSizeY() - 1;

 	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(m_rpScreenLastPos);

	if(!rrImageSize.DoesIntersect(rpImage))
	{
		rpImage = rrImageSize.GetCenter();
	}
		
	SMeasure sMeasure;
	if(m_sData.sLineParams.rqdROI.rpPoints[0].GetDistance(m_sData.sLineParams.rqdROI.rpPoints[1]))
	{// 길이가 0 이면 초기상태.

		sMeasure.m_rpRect1 = m_sData.sLineParams.rqdROI.rpPoints[0];
		sMeasure.m_rpRect2 = m_sData.sLineParams.rqdROI.rpPoints[1];
		sMeasure.m_rpRect3 = m_sData.sLineParams.rqdROI.rpPoints[2];
		sMeasure.m_rpRect4 = m_sData.sLineParams.rqdROI.rpPoints[3];

		sMeasure.m_rqrTemp.SetQuadrangle(m_sData.sLineParams.rqdROI.rpPoints[0], m_sData.sLineParams.rqdROI.rpPoints[1]
										 , m_sData.sLineParams.rqdROI.rpPoints[2], m_sData.sLineParams.rqdROI.rpPoints[3]);
	
		sMeasure.m_rpRectStr = sMeasure.m_rpRect1;
		sMeasure.m_bIsRectIntersect = false;
		sMeasure.m_bChoice = false;
		sMeasure.m_dblRectAngle = 0.;
	}
	else
	{
		int nOffset = 200;
		CRavidPoint<double> rp1;
		rp1.x = rpImage.x - nOffset;
		rp1.y = rpImage.y - nOffset;
		CRavidPoint<double> rp2;
		rp2.x = rpImage.x + nOffset;
		rp2.y = rpImage.y + nOffset;

		CRavidRect<double> rrRect(rp1.x, rp1.y, rp2.x, rp2.y);

		sMeasure.m_rqrTemp.SetQuadrangle(rrRect);
		sMeasure.m_rpRect1 = sMeasure.m_rqrTemp.rpPoints[0];
		sMeasure.m_rpRect2 = sMeasure.m_rqrTemp.rpPoints[1];
		sMeasure.m_rpRect3 = sMeasure.m_rqrTemp.rpPoints[2];
		sMeasure.m_rpRect4 = sMeasure.m_rqrTemp.rpPoints[3];
		sMeasure.m_rpRectStr = sMeasure.m_rpRect1;
		sMeasure.m_bIsRectIntersect = false;
		sMeasure.m_bChoice = false;
		sMeasure.m_dblRectAngle = 0.;
	}

	//Temp
	if(!m_vctMeasure.size())
		m_vctMeasure.push_back(sMeasure);
	else
		m_vctMeasure[0] = sMeasure;
}

void CImageViewTeaching::OnImagecontrol2Delete()
{
	if(m_vctMeasure.size() <= m_nMesureIndex)
		return;

	m_vctMeasure.erase(m_vctMeasure.begin() + m_nMesureIndex);
}

void CImageViewTeaching::OnImagecontrolOpen()
{
	__super::Open();
}

void CImageViewTeaching::OnImagecontrolSave()
{
	__super::OnImageSave();
}

void CImageViewTeaching::OnImagecontrolClose()
{
	__super::Close();
}

void CImageViewTeaching::OnImagecontrolImportImage()
{
	int nObjectID = GetObjectID() - EViewNo_ImageViewTeahcingUpper;

	CImageCameraView* pImageView = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), nObjectID));

	if(!pImageView)
		return;

	pImageView->Lock();
	m_ri.Copy(pImageView->GetImageInfo());
	pImageView->Unlock();

	this->SetImageInfo(&m_ri);


// 	CRavidImage pImage;
// 
// 	__super::CaptureScreen(&pImage);
// 
// 	CString szFilter = _T("Bitmap Files(*.*)|*.bmp|JPEG Files(*.*)|*.jpg|PNG Files(*.*)|*.png||");
// 
// 	CFileDialog dlg(FALSE, NULL, NULL, OFN_OVERWRITEPROMPT, (LPCTSTR)szFilter.GetBuffer(), NULL);
// 	if(dlg.DoModal() == IDOK)
// 	{
// 		CString strName, strPathName, strFileExt;
// 		strPathName = dlg.GetPathName();
// 		switch(dlg.m_ofn.nFilterIndex)
// 		{
// 		case 1:
// 			strFileExt = _T(".bmp");
// 			break;
// 		case 2:
// 			strFileExt = _T(".jpg");
// 			break;
// 		case 3:
// 			strFileExt = _T(".png");
// 			break;
// 		default:
// 			strFileExt = _T(".bmp");
// 			break;
// 		}
// 
// 		strName = strPathName;
// 		strName += strFileExt;
// 
// 		if(!strName.Right(4).Compare(_T(".bmp")) | !strName.Right(4).Compare(_T(".jpg")) | !strName.Right(4).Compare(_T(".png")))
// 		{
// 			int n = 0;
// 		}
// 		else
// 			strName += _T(".bmp");
// 
// 		pImage.Save(strName);
// 	}
}

void CImageViewTeaching::OnImageFindCenter()
{
		

}



bool CImageViewTeaching::SetRect(int nIndex, CRavidPoint<double> rpImage, EMouseType eMouse, bool bVct)
{
	bool bReturn = false;
	double dblGetScale = GetScale();

	//////////////////////////////////////////////////////////////////////////
	//Area
	CRavidPoint<double> rpPoint1_1, rpPoint2_1, rpPoint3_1, rpPoint4_1;
	CRavidPoint<double> rpPoint1_2, rpPoint2_2, rpPoint3_2, rpPoint4_2;
	CRavidPoint<double> rpPoint1_3, rpPoint2_3, rpPoint3_3, rpPoint4_3;
	CRavidPoint<double> rpPoint1_4, rpPoint2_4, rpPoint3_4, rpPoint4_4;
	CRavidPoint<double> rpRect1, rpRect2, rpRect3, rpRect4;
	CRavidCircle<double> rcRect1, rcRect2, rcRect3, rcRect4;
	CRavidCircle<double> rcRect1_R, rcRect2_R, rcRect3_R, rcRect4_R;
	CRavidQuadrangle<double> rqrArea1, rqrArea2, rqrArea3, rqrArea4;
	double dblGradient, dblGradientVer;
	CRavidQuadrangle<double> rqrRect;
	if(bVct)
	{
		rpRect1 = m_vctMeasure.at(nIndex).m_rpRect1;
		rpRect2 = m_vctMeasure.at(nIndex).m_rpRect2;
		rpRect3 = m_vctMeasure.at(nIndex).m_rpRect3;
		rpRect4 = m_vctMeasure.at(nIndex).m_rpRect4;
		rqrRect = m_vctMeasure.at(nIndex).m_rqrTemp;


		double S1, S2;

		double dblX, dblY, dblXVer, dblYVer;
		if(abs(rpRect1.y - rpRect2.y) > abs(rpRect1.x - rpRect2.x))
		{
			if(rpRect1.x - rpRect2.x == 0)
			{
				dblGradient = 0;
				S1 = 0;
			}
			else
			{
				dblGradient = (rpRect1.y - rpRect2.y) / (rpRect1.x - rpRect2.x);
				S1 = -1 / (rpRect1.y - rpRect2.y) / (rpRect1.x - rpRect2.x);
			}
			dblX = (5 * (1 / dblGetScale))*cos(S1);
			dblY = (5 * (1 / dblGetScale))*sin(S1);
		}
		else
		{
			if(rpRect1.y - rpRect2.y == 0)
			{
				dblGradient = 0;
				S1 = 0;
			}
			else
			{
				dblGradient = (rpRect1.y - rpRect2.y) / (rpRect1.x - rpRect2.x);
				S1 = -1 / (rpRect1.x - rpRect2.x) / (rpRect1.y - rpRect2.y);
			}

			dblX = (5 * (1 / dblGetScale))*sin(S1);
			dblY = (5 * (1 / dblGetScale))*cos(S1);
		}

		if(abs(rpRect2.y - rpRect3.y) > abs(rpRect2.x - rpRect3.x))
		{
			if(rpRect2.x - rpRect3.x == 0)
			{
				dblGradientVer = 0;
				S2 = 0;
			}
			else
			{
				dblGradientVer = -1 / dblGradient;
				S2 = -1 / (rpRect2.y - rpRect3.y) / (rpRect2.x - rpRect3.x);
			}

			dblXVer = (5 * (1 / dblGetScale))*cos(S2);
			dblYVer = (5 * (1 / dblGetScale))*sin(S2);
		}
		else
		{
			if(rpRect2.y - rpRect3.y == 0)
			{
				dblGradientVer = 0;
				S2 = 0;
			}
			else
			{
				dblGradientVer = -1 / dblGradient;
				S2 = -1 / (rpRect2.x - rpRect3.x) / (rpRect2.y - rpRect3.y);
			}

			dblXVer = (5 * (1 / dblGetScale))*sin(S2);
			dblYVer = (5 * (1 / dblGetScale))*cos(S2);
		}


		rpPoint1_1.x = rpRect1.x + dblX;
		rpPoint1_1.y = rpRect1.y + dblY;

		rpPoint1_2.x = rpRect2.x + dblX;
		rpPoint1_2.y = rpRect2.y + dblY;

		rpPoint1_3.x = rpRect2.x - dblX;
		rpPoint1_3.y = rpRect2.y - dblY;

		rpPoint1_4.x = rpRect1.x - dblX;
		rpPoint1_4.y = rpRect1.y - dblY;

		rpPoint3_1.x = rpRect3.x + dblX;
		rpPoint3_1.y = rpRect3.y + dblY;

		rpPoint3_2.x = rpRect4.x + dblX;
		rpPoint3_2.y = rpRect4.y + dblY;

		rpPoint3_3.x = rpRect4.x - dblX;
		rpPoint3_3.y = rpRect4.y - dblY;

		rpPoint3_4.x = rpRect3.x - dblX;
		rpPoint3_4.y = rpRect3.y - dblY;

		rpPoint2_1.x = rpRect2.x + dblXVer;
		rpPoint2_1.y = rpRect2.y + dblYVer;

		rpPoint2_2.x = rpRect3.x + dblXVer;
		rpPoint2_2.y = rpRect3.y + dblYVer;

		rpPoint2_3.x = rpRect3.x - dblXVer;
		rpPoint2_3.y = rpRect3.y - dblYVer;

		rpPoint2_4.x = rpRect2.x - dblXVer;
		rpPoint2_4.y = rpRect2.y - dblYVer;

		rpPoint4_1.x = rpRect4.x + dblXVer;
		rpPoint4_1.y = rpRect4.y + dblYVer;

		rpPoint4_2.x = rpRect1.x + dblXVer;
		rpPoint4_2.y = rpRect1.y + dblYVer;

		rpPoint4_3.x = rpRect1.x - dblXVer;
		rpPoint4_3.y = rpRect1.y - dblYVer;

		rpPoint4_4.x = rpRect4.x - dblXVer;
		rpPoint4_4.y = rpRect4.y - dblYVer;


		rcRect1.SetCircle(rpRect1.x, rpRect1.y, 7 * (1 / dblGetScale), 0);
		rcRect2.SetCircle(rpRect2.x, rpRect2.y, 7 * (1 / dblGetScale), 0);
		rcRect3.SetCircle(rpRect3.x, rpRect3.y, 7 * (1 / dblGetScale), 0);
		rcRect4.SetCircle(rpRect4.x, rpRect4.y, 7 * (1 / dblGetScale), 0);
		rcRect1_R.SetCircle(rpRect1.x, rpRect1.y, /*15*/7 * (1 / dblGetScale), 0);
		rcRect2_R.SetCircle(rpRect2.x, rpRect2.y, /*15*/7 * (1 / dblGetScale), 0);
		rcRect3_R.SetCircle(rpRect3.x, rpRect3.y, /*15*/7 * (1 / dblGetScale), 0);
		rcRect4_R.SetCircle(rpRect4.x, rpRect4.y, /*15*/7 * (1 / dblGetScale), 0);
		rqrArea1.SetQuadrangle(rpPoint1_1, rpPoint1_2, rpPoint1_3, rpPoint1_4);
		rqrArea2.SetQuadrangle(rpPoint2_1, rpPoint2_2, rpPoint2_3, rpPoint2_4);
		rqrArea3.SetQuadrangle(rpPoint3_1, rpPoint3_2, rpPoint3_3, rpPoint3_4);
		rqrArea4.SetQuadrangle(rpPoint4_1, rpPoint4_2, rpPoint4_3, rpPoint4_4);


	}
	//////////////////////////////////////////////////////////////////////////

	switch(eMouse)
	{
	case EMouseType_RButtonUp:
		{
			if(bVct)
			{
				if(!m_bChoice && rqrRect.DoesIntersect(rpImage))
					bReturn = true;
			}
		}
		break;
	case EMouseType_LButtonDown:
		{
			if(bVct)
			{
				if(!m_bChoice && (rqrRect.DoesIntersect(rpImage) || rqrArea1.DoesIntersect(rpImage) || rqrArea2.DoesIntersect(rpImage) || rqrArea3.DoesIntersect(rpImage) || rqrArea4.DoesIntersect(rpImage) || rcRect1.DoesIntersect(rpImage) || rcRect2.DoesIntersect(rpImage) || rcRect3.DoesIntersect(rpImage) || rcRect4.DoesIntersect(rpImage) || rcRect1_R.DoesIntersect(rpImage) || rcRect2_R.DoesIntersect(rpImage) || rcRect3_R.DoesIntersect(rpImage) || rcRect4_R.DoesIntersect(rpImage)))
				{
					m_bChoice = true;
					m_vctMeasure.at(nIndex).m_bChoice = m_bChoice;
				}

				if((rcRect1_R.DoesIntersect(rpImage) || rcRect2_R.DoesIntersect(rpImage) || rcRect3_R.DoesIntersect(rpImage) || rcRect4_R.DoesIntersect(rpImage)) && m_bChoice)
				{
					m_vctMeasure.at(nIndex).m_bIsRectIntersect = true;

					CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();

					// 각도 
					if(m_sData.sLineParams.eFindDir == eFindLineDir_AngleAdjustment)
					{
						if(rcRect1_R.DoesIntersect(rpImage))
						{
							m_vctMeasure.at(nIndex).m_RectType = ERectType_Rotate_1;
						}
						else if(rcRect2_R.DoesIntersect(rpImage))
						{
							m_vctMeasure.at(nIndex).m_RectType = ERectType_Rotate_2;
						}
						else if(rcRect3_R.DoesIntersect(rpImage))
						{
							m_vctMeasure.at(nIndex).m_RectType = ERectType_Rotate_3;
						}
						else if(rcRect4_R.DoesIntersect(rpImage))
						{
							m_vctMeasure.at(nIndex).m_RectType = ERectType_Rotate_4;
						}
					}

				}

				else if((rqrArea1.DoesIntersect(rpImage) || rqrArea2.DoesIntersect(rpImage) || rqrArea3.DoesIntersect(rpImage) || rqrArea4.DoesIntersect(rpImage)) && m_bChoice)
				{
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					m_vctMeasure.at(nIndex).m_bIsRectIntersect = true;
					if(rqrArea1.DoesIntersect(rpImage))
						m_vctMeasure.at(nIndex).m_RectType = ERectType_Top;
					else if(rqrArea2.DoesIntersect(rpImage))
						m_vctMeasure.at(nIndex).m_RectType = ERectType_Right;
					else if(rqrArea3.DoesIntersect(rpImage))
						m_vctMeasure.at(nIndex).m_RectType = ERectType_Btm;
					else if(rqrArea4.DoesIntersect(rpImage))
						m_vctMeasure.at(nIndex).m_RectType = ERectType_Left;
				}
				else if(rqrRect.DoesIntersect(rpImage) && m_bChoice)
				{
					m_cpRectStartPos = rpImage;
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					m_vctMeasure.at(nIndex).m_bIsRectIntersect = true;
					m_vctMeasure.at(nIndex).m_RectType = ERectType_Rect;
				}
			}
			else
			{
				if(!m_bRect)
				{
// 					m_rpRect1 = rpImage;
// 					m_rpRect3 = rpImage;
					m_bRect = true;
				}
				else
					m_bRectEnd = true;
			}
		}
		break;
	case EMouseType_MouseMove:
		{
			if(bVct)
			{
				if(m_vctMeasure.at(nIndex).m_bIsRectIntersect)
				{
					if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Top)
					{
						m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
						//두직선의 교점구하는 공식
						//y = ax + b, y = cx + d일때
						//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
						double dblB1 = rpRect4.y - dblGradientVer * rpRect4.x;
						double dblB2 = rpRect3.y - dblGradientVer * rpRect3.x;
						double dblTop = rpImage.y - dblGradient * rpImage.x;

						CRavidPoint<double> rpCross1, rpCross2;
						if(dblGradient - dblGradientVer == 0)
						{
							if(rpRect4.y == rpRect3.y)
							{
								rpCross1.x = rpRect4.x;
								rpCross1.y = rpImage.y;

								rpCross2.x = rpRect3.x;
								rpCross2.y = rpImage.y;
							}
							else
							{
								rpCross1.x = rpImage.x;
								rpCross1.y = rpRect4.y;

								rpCross2.x = rpImage.x;
								rpCross2.y = rpRect3.y;
							}
						}
						else
						{
							rpCross1.x = (dblB1 - dblTop) / (dblGradient - dblGradientVer);
							rpCross1.y = dblGradient * rpCross1.x + dblTop;

							rpCross2.x = (dblB2 - dblTop) / (dblGradient - dblGradientVer);
							rpCross2.y = dblGradient * rpCross2.x + dblTop;
						}

						m_vctMeasure.at(nIndex).m_rpRect1 = rpCross1;
						m_vctMeasure.at(nIndex).m_rpRect2 = rpCross2;
						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Right)
					{
						m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
						//두직선의 교점구하는 공식
						//y = ax + b, y = cx + d일때
						//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
						double dblB1 = rpRect1.y - dblGradient * rpRect1.x;
						double dblB2 = rpRect4.y - dblGradient * rpRect4.x;
						double dblRight = rpImage.y - dblGradientVer * rpImage.x;

						CRavidPoint<double> rpCross1, rpCross2;
						if(dblGradient - dblGradientVer == 0)
						{
							if(rpRect1.y == rpRect4.y)
							{
								rpCross1.x = rpRect1.x;
								rpCross1.y = rpImage.y;

								rpCross2.x = rpRect4.x;
								rpCross2.y = rpImage.y;
							}
							else
							{
								rpCross1.x = rpImage.x;
								rpCross1.y = rpRect1.y;

								rpCross2.x = rpImage.x;
								rpCross2.y = rpRect4.y;
							}
						}
						else
						{
							rpCross1.x = (dblB1 - dblRight) / (dblGradientVer - dblGradient);
							rpCross1.y = dblGradientVer * rpCross1.x + dblRight;

							rpCross2.x = (dblB2 - dblRight) / (dblGradientVer - dblGradient);
							rpCross2.y = dblGradientVer * rpCross2.x + dblRight;
						}

						m_vctMeasure.at(nIndex).m_rpRect2 = rpCross1;
						m_vctMeasure.at(nIndex).m_rpRect3 = rpCross2;
						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Btm)
					{
						m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
						//두직선의 교점구하는 공식
						//y = ax + b, y = cx + d일때
						//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
						double dblB1 = rpRect2.y - dblGradientVer * rpRect2.x;
						double dblB2 = rpRect1.y - dblGradientVer * rpRect1.x;
						double dblBtm = rpImage.y - dblGradient * rpImage.x;

						CRavidPoint<double> rpCross1, rpCross2;
						if(dblGradient - dblGradientVer == 0)
						{
							if(rpRect2.y == rpRect1.y)
							{
								rpCross1.x = rpRect2.x;
								rpCross1.y = rpImage.y;

								rpCross2.x = rpRect1.x;
								rpCross2.y = rpImage.y;
							}
							else
							{
								rpCross1.x = rpImage.x;
								rpCross1.y = rpRect2.y;

								rpCross2.x = rpImage.x;
								rpCross2.y = rpRect1.y;
							}
						}
						else
						{
							rpCross1.x = (dblB1 - dblBtm) / (dblGradient - dblGradientVer);
							rpCross1.y = dblGradient * rpCross1.x + dblBtm;

							rpCross2.x = (dblB2 - dblBtm) / (dblGradient - dblGradientVer);
							rpCross2.y = dblGradient * rpCross2.x + dblBtm;
						}

						m_vctMeasure.at(nIndex).m_rpRect3 = rpCross1;
						m_vctMeasure.at(nIndex).m_rpRect4 = rpCross2;
						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Left)
					{
						m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
						//두직선의 교점구하는 공식
						//y = ax + b, y = cx + d일때
						//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
						double dblB1 = rpRect3.y - dblGradient * rpRect3.x;
						double dblB2 = rpRect2.y - dblGradient * rpRect2.x;
						double dblLeft = rpImage.y - dblGradientVer * rpImage.x;

						CRavidPoint<double> rpCross1, rpCross2;
						if(dblGradient - dblGradientVer == 0)
						{
							if(rpRect3.y == rpRect2.y)
							{
								rpCross1.x = rpRect3.x;
								rpCross1.y = rpImage.y;

								rpCross2.x = rpRect2.x;
								rpCross2.y = rpImage.y;
							}
							else
							{
								rpCross1.x = rpImage.x;
								rpCross1.y = rpRect3.y;

								rpCross2.x = rpImage.x;
								rpCross2.y = rpRect2.y;
							}
						}
						else
						{
							rpCross1.x = (dblB1 - dblLeft) / (dblGradientVer - dblGradient);
							rpCross1.y = dblGradientVer * rpCross1.x + dblLeft;

							rpCross2.x = (dblB2 - dblLeft) / (dblGradientVer - dblGradient);
							rpCross2.y = dblGradientVer * rpCross2.x + dblLeft;
						}

						m_vctMeasure.at(nIndex).m_rpRect4 = rpCross1;
						m_vctMeasure.at(nIndex).m_rpRect1 = rpCross2;
						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_1)
					{
						CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
						m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

						double dx, dy, rad;
						dx = rpImage.x - rpCenter.x;
						dy = rpCenter.y - rpImage.y;
						rad = atan2(dx, dy);
						double dblRectEndAngle = rad;

						dx = rpRect1.x - rpCenter.x;
						dy = rpCenter.y - rpRect1.y;
						rad = atan2(dx, dy);
						double dblRectStartAngle = rad;

						double dblAngle = dblRectEndAngle - dblRectStartAngle;

						//회전변환
						//x1, y1 : 원 영상의 좌표
						//x0, y0 : 회전 기준점(회전의 중심)
						CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
						rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
						rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

						rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
						rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

						rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
						rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

						rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
						rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

						CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

						m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
						m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
						m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
						m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_2)
					{
						CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
						m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

						double dx, dy, rad;
						dx = rpImage.x - rpCenter.x;
						dy = rpCenter.y - rpImage.y;
						rad = atan2(dx, dy);
						double dblRectEndAngle = rad;

						dx = rpRect2.x - rpCenter.x;
						dy = rpCenter.y - rpRect2.y;
						rad = atan2(dx, dy);
						double dblRectStartAngle = rad;

						double dblAngle = dblRectEndAngle - dblRectStartAngle;

						//회전변환
						//x1, y1 : 원 영상의 좌표
						//x0, y0 : 회전 기준점(회전의 중심)
						CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
						rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
						rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

						rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
						rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

						rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
						rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

						rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
						rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

						CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

						m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
						m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
						m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
						m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_3)
					{
						CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
						m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

						double dx, dy, rad;
						dx = rpImage.x - rpCenter.x;
						dy = rpCenter.y - rpImage.y;
						rad = atan2(dx, dy);
						double dblRectEndAngle = rad;

						dx = rpRect3.x - rpCenter.x;
						dy = rpCenter.y - rpRect3.y;
						rad = atan2(dx, dy);
						double dblRectStartAngle = rad;

						double dblAngle = dblRectEndAngle - dblRectStartAngle;

						//회전변환
						//x1, y1 : 원 영상의 좌표
						//x0, y0 : 회전 기준점(회전의 중심)
						CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
						rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
						rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

						rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
						rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

						rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
						rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

						rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
						rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

						CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

						m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
						m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
						m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
						m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_4)
					{
						CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
						m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

						double dx, dy, rad;
						dx = rpImage.x - rpCenter.x;
						dy = rpCenter.y - rpImage.y;
						rad = atan2(dx, dy);
						double dblRectEndAngle = rad;

						dx = rpRect4.x - rpCenter.x;
						dy = rpCenter.y - rpRect4.y;
						rad = atan2(dx, dy);
						double dblRectStartAngle = rad;

						double dblAngle = dblRectEndAngle - dblRectStartAngle;

						//회전변환
						//x1, y1 : 원 영상의 좌표
						//x0, y0 : 회전 기준점(회전의 중심)
						CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
						rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
						rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

						rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
						rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

						rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
						rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

						rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
						rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

						CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

						m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
						m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
						m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
						m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
					}
					else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rect)
					{
						m_cpRectEndPos = rpImage;
						CPoint pos = m_cpRectEndPos - m_cpRectStartPos;
						m_cpRectStartPos = rpImage;

						m_vctMeasure.at(nIndex).m_rpRect1 += pos;
						m_vctMeasure.at(nIndex).m_rpRect2 += pos;
						m_vctMeasure.at(nIndex).m_rpRect3 += pos;
						m_vctMeasure.at(nIndex).m_rpRect4 += pos;

						m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
						m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
					}
				}
			}
			else
			{
// 				if(m_bRect)
// 				{
// 					if(m_bShiftKey)
// 					{
// 						double dblX, dblY, dblX_abs, dblY_abs;
// 						dblX = rpImage.x - m_rpRect1.x;
// 						dblY = rpImage.y - m_rpRect1.y;
// 						dblX_abs = abs(dblX);
// 						dblY_abs = abs(dblY);
// 
// 						if(dblX_abs < dblY_abs)
// 						{
// 							if(dblX > 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblX_abs;
// 							}
// 							else if(dblX < 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblX_abs;
// 							}
// 							else if(dblX < 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblX_abs;
// 							}
// 							else if(dblX > 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblX_abs;
// 							}
// 						}
// 						else if(dblX_abs > dblY_abs)
// 						{
// 							if(dblX > 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblY_abs;
// 							}
// 							else if(dblX < 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblY_abs;
// 							}
// 							else if(dblX < 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblY_abs;
// 							}
// 							else if(dblX > 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblY_abs;
// 							}
// 						}
// 					}
// 					else
// 						m_rpRect3 = rpImage;
// 				}
			}


			////////////////////////////
			// 

			if(m_bLButtonDown)
				break;

			if((rqrRect.DoesIntersect(rpImage) || rqrArea1.DoesIntersect(rpImage) || rqrArea2.DoesIntersect(rpImage) || rqrArea3.DoesIntersect(rpImage) || rqrArea4.DoesIntersect(rpImage) || rcRect1.DoesIntersect(rpImage) || rcRect2.DoesIntersect(rpImage) || rcRect3.DoesIntersect(rpImage) || rcRect4.DoesIntersect(rpImage) || rcRect1_R.DoesIntersect(rpImage) || rcRect2_R.DoesIntersect(rpImage) || rcRect3_R.DoesIntersect(rpImage) || rcRect4_R.DoesIntersect(rpImage)))
			{
				m_bCursor[ECursor_Move] = true;
				m_bCursor[ECursor_Size_Ver] = false;
				m_bCursor[ECursor_Size_Hor] = false;

				m_bCursor[ECursor_Rotate] = false;
				m_bCursor[ECursor_None] = false;

			}
			else
			{
				m_bCursor[ECursor_Move] = false;
				m_bCursor[ECursor_Size_Ver] = false;
				m_bCursor[ECursor_Size_Hor] = false;
				m_bCursor[ECursor_Rotate] = false;
				m_bCursor[ECursor_None] = true;
			}

			if((rcRect1_R.DoesIntersect(rpImage) || rcRect2_R.DoesIntersect(rpImage) || rcRect3_R.DoesIntersect(rpImage) || rcRect4_R.DoesIntersect(rpImage)))
			{

				CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();

				if(m_sData.sLineParams.eFindDir == eFindLineDir_AngleAdjustment)
				{
								// 각도 
					if(rcRect1_R.DoesIntersect(rpImage) ||
					   rcRect2_R.DoesIntersect(rpImage) ||
					   rcRect3_R.DoesIntersect(rpImage) ||
					   rcRect4_R.DoesIntersect(rpImage))
					{
						m_bCursor[ECursor_Move] = false;
						m_bCursor[ECursor_Size_Ver] = false;
						m_bCursor[ECursor_Size_Hor] = false;
						m_bCursor[ECursor_Rotate] = true;
						m_bCursor[ECursor_None] = false;
					}
				}

			}

			else if((rqrArea1.DoesIntersect(rpImage) || rqrArea2.DoesIntersect(rpImage) || rqrArea3.DoesIntersect(rpImage) || rqrArea4.DoesIntersect(rpImage)))
			{
				// 크기
				if(rqrArea1.DoesIntersect(rpImage) ||
				   rqrArea3.DoesIntersect(rpImage))
				{
					m_bCursor[ECursor_Move] = false;
					m_bCursor[ECursor_Size_Ver] = true;
					m_bCursor[ECursor_Size_Hor] = false;
					m_bCursor[ECursor_Rotate] = false;
					m_bCursor[ECursor_None] = false;
				}
				else if(rqrArea2.DoesIntersect(rpImage) ||
						rqrArea4.DoesIntersect(rpImage))
				{
					m_bCursor[ECursor_Move] = false;
					m_bCursor[ECursor_Size_Ver] = false;
					m_bCursor[ECursor_Size_Hor] = true;
					m_bCursor[ECursor_Rotate] = false;
					m_bCursor[ECursor_None] = false;
				}

			}
			else if(rqrRect.DoesIntersect(rpImage))
			{
				m_bCursor[ECursor_Move] = true;
				m_bCursor[ECursor_Size_Ver] = false;
				m_bCursor[ECursor_Size_Hor] = false;
				m_bCursor[ECursor_Rotate] = false;
				m_bCursor[ECursor_None] = false;
			}
			else
			{
				m_bCursor[ECursor_Move] = false;
				m_bCursor[ECursor_Size_Ver] = false;
				m_bCursor[ECursor_Size_Hor] = false;
				m_bCursor[ECursor_Rotate] = false;
				m_bCursor[ECursor_None] = true;
			}
		}
		break;
	case EMouseType_LButtonUp:
		{
			if(bVct)
			{
				if(!m_vctMeasure.at(nIndex).m_bIsRectIntersect)
					return false;

				m_bChoice = false;
				//m_vctMeasure.at(nIndex).m_bChoice = m_bChoice;
				m_vctMeasure.at(nIndex).m_bIsRectIntersect = false;

				if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Top)
				{
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					//두직선의 교점구하는 공식
					//y = ax + b, y = cx + d일때
					//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
					double dblB1 = rpRect4.y - dblGradientVer * rpRect4.x;
					double dblB2 = rpRect3.y - dblGradientVer * rpRect3.x;
					double dblTop = rpImage.y - dblGradient * rpImage.x;

					CRavidPoint<double> rpCross1, rpCross2;
					if(dblGradient - dblGradientVer == 0)
					{
						if(rpRect4.y == rpRect3.y)
						{
							rpCross1.x = rpRect4.x;
							rpCross1.y = rpImage.y;

							rpCross2.x = rpRect3.x;
							rpCross2.y = rpImage.y;
						}
						else
						{
							rpCross1.x = rpImage.x;
							rpCross1.y = rpRect4.y;

							rpCross2.x = rpImage.x;
							rpCross2.y = rpRect3.y;
						}
					}
					else
					{
						rpCross1.x = (dblB1 - dblTop) / (dblGradient - dblGradientVer);
						rpCross1.y = dblGradient * rpCross1.x + dblTop;

						rpCross2.x = (dblB2 - dblTop) / (dblGradient - dblGradientVer);
						rpCross2.y = dblGradient * rpCross2.x + dblTop;
					}

					m_vctMeasure.at(nIndex).m_rpRect1 = rpCross1;
					m_vctMeasure.at(nIndex).m_rpRect2 = rpCross2;
					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Right)
				{
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					//두직선의 교점구하는 공식
					//y = ax + b, y = cx + d일때
					//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
					double dblB1 = rpRect1.y - dblGradient * rpRect1.x;
					double dblB2 = rpRect4.y - dblGradient * rpRect4.x;
					double dblRight = rpImage.y - dblGradientVer * rpImage.x;

					CRavidPoint<double> rpCross1, rpCross2;
					if(dblGradient - dblGradientVer == 0)
					{
						if(rpRect1.y == rpRect4.y)
						{
							rpCross1.x = rpRect1.x;
							rpCross1.y = rpImage.y;

							rpCross2.x = rpRect4.x;
							rpCross2.y = rpImage.y;
						}
						else
						{
							rpCross1.x = rpImage.x;
							rpCross1.y = rpRect1.y;

							rpCross2.x = rpImage.x;
							rpCross2.y = rpRect4.y;
						}
					}
					else
					{
						rpCross1.x = (dblB1 - dblRight) / (dblGradientVer - dblGradient);
						rpCross1.y = dblGradientVer * rpCross1.x + dblRight;

						rpCross2.x = (dblB2 - dblRight) / (dblGradientVer - dblGradient);
						rpCross2.y = dblGradientVer * rpCross2.x + dblRight;
					}

					m_vctMeasure.at(nIndex).m_rpRect2 = rpCross1;
					m_vctMeasure.at(nIndex).m_rpRect3 = rpCross2;
					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Btm)
				{
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					//두직선의 교점구하는 공식
					//y = ax + b, y = cx + d일때
					//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
					double dblB1 = rpRect2.y - dblGradientVer * rpRect2.x;
					double dblB2 = rpRect1.y - dblGradientVer * rpRect1.x;
					double dblBtm = rpImage.y - dblGradient * rpImage.x;

					CRavidPoint<double> rpCross1, rpCross2;
					if(dblGradient - dblGradientVer == 0)
					{
						if(rpRect2.y == rpRect1.y)
						{
							rpCross1.x = rpRect2.x;
							rpCross1.y = rpImage.y;

							rpCross2.x = rpRect1.x;
							rpCross2.y = rpImage.y;
						}
						else
						{
							rpCross1.x = rpImage.x;
							rpCross1.y = rpRect2.y;

							rpCross2.x = rpImage.x;
							rpCross2.y = rpRect1.y;
						}
					}
					else
					{
						rpCross1.x = (dblB1 - dblBtm) / (dblGradient - dblGradientVer);
						rpCross1.y = dblGradient * rpCross1.x + dblBtm;

						rpCross2.x = (dblB2 - dblBtm) / (dblGradient - dblGradientVer);
						rpCross2.y = dblGradient * rpCross2.x + dblBtm;
					}

					m_vctMeasure.at(nIndex).m_rpRect3 = rpCross1;
					m_vctMeasure.at(nIndex).m_rpRect4 = rpCross2;
					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Left)
				{
					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					//두직선의 교점구하는 공식
					//y = ax + b, y = cx + d일때
					//교점 : ((d-b)/(a-c)), a*((d-b)/(a-c))+b
					double dblB1 = rpRect3.y - dblGradient * rpRect3.x;
					double dblB2 = rpRect2.y - dblGradient * rpRect2.x;
					double dblLeft = rpImage.y - dblGradientVer * rpImage.x;

					CRavidPoint<double> rpCross1, rpCross2;
					if(dblGradient - dblGradientVer == 0)
					{
						if(rpRect3.y == rpRect2.y)
						{
							rpCross1.x = rpRect3.x;
							rpCross1.y = rpImage.y;

							rpCross2.x = rpRect2.x;
							rpCross2.y = rpImage.y;
						}
						else
						{
							rpCross1.x = rpImage.x;
							rpCross1.y = rpRect3.y;

							rpCross2.x = rpImage.x;
							rpCross2.y = rpRect2.y;
						}
					}
					else
					{
						rpCross1.x = (dblB1 - dblLeft) / (dblGradientVer - dblGradient);
						rpCross1.y = dblGradientVer * rpCross1.x + dblLeft;

						rpCross2.x = (dblB2 - dblLeft) / (dblGradientVer - dblGradient);
						rpCross2.y = dblGradientVer * rpCross2.x + dblLeft;
					}

					m_vctMeasure.at(nIndex).m_rpRect4 = rpCross1;
					m_vctMeasure.at(nIndex).m_rpRect1 = rpCross2;
					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
				}

				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_1)
				{
					CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
					m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

					double dx, dy, rad;
					dx = rpImage.x - rpCenter.x;
					dy = rpCenter.y - rpImage.y;
					rad = atan2(dx, dy);
					double dblRectEndAngle = rad;

					dx = rpRect1.x - rpCenter.x;
					dy = rpCenter.y - rpRect1.y;
					rad = atan2(dx, dy);
					double dblRectStartAngle = rad;

					double dblAngle = dblRectEndAngle - dblRectStartAngle;

					//회전변환
					//x1, y1 : 원 영상의 좌표
					//x0, y0 : 회전 기준점(회전의 중심)
					CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
					rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
					rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

					rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
					rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

					rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
					rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

					rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
					rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

					CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

					m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
					m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
					m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
					m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_2)
				{
					CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
					m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

					double dx, dy, rad;
					dx = rpImage.x - rpCenter.x;
					dy = rpCenter.y - rpImage.y;
					rad = atan2(dx, dy);
					double dblRectEndAngle = rad;

					dx = rpRect2.x - rpCenter.x;
					dy = rpCenter.y - rpRect2.y;
					rad = atan2(dx, dy);
					double dblRectStartAngle = rad;

					double dblAngle = dblRectEndAngle - dblRectStartAngle;

					//회전변환
					//x1, y1 : 원 영상의 좌표
					//x0, y0 : 회전 기준점(회전의 중심)
					CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
					rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
					rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

					rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
					rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

					rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
					rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

					rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
					rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

					CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

					m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
					m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
					m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
					m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_3)
				{
					CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
					m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

					double dx, dy, rad;
					dx = rpImage.x - rpCenter.x;
					dy = rpCenter.y - rpImage.y;
					rad = atan2(dx, dy);
					double dblRectEndAngle = rad;

					dx = rpRect3.x - rpCenter.x;
					dy = rpCenter.y - rpRect3.y;
					rad = atan2(dx, dy);
					double dblRectStartAngle = rad;

					double dblAngle = dblRectEndAngle - dblRectStartAngle;

					//회전변환
					//x1, y1 : 원 영상의 좌표
					//x0, y0 : 회전 기준점(회전의 중심)
					CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
					rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
					rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

					rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
					rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

					rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
					rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

					rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
					rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

					CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

					m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
					m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
					m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
					m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rotate_4)
				{
					CRavidPoint<double> rpCenter = m_vctMeasure.at(nIndex).m_rqrTemp.GetCenter();
					m_vctMeasure.at(nIndex).m_rpRectStr = rpCenter;

					double dx, dy, rad;
					dx = rpImage.x - rpCenter.x;
					dy = rpCenter.y - rpImage.y;
					rad = atan2(dx, dy);
					double dblRectEndAngle = rad;

					dx = rpRect4.x - rpCenter.x;
					dy = rpCenter.y - rpRect4.y;
					rad = atan2(dx, dy);
					double dblRectStartAngle = rad;

					double dblAngle = dblRectEndAngle - dblRectStartAngle;

					//회전변환
					//x1, y1 : 원 영상의 좌표
					//x0, y0 : 회전 기준점(회전의 중심)
					CRavidPoint<double> rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4;
					rpChangeRect1.x = cos(dblAngle) * (rpRect1.x - rpCenter.x) - sin(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.x;
					rpChangeRect1.y = sin(dblAngle) * (rpRect1.x - rpCenter.x) + cos(dblAngle) * (rpRect1.y - rpCenter.y) + rpCenter.y;

					rpChangeRect2.x = cos(dblAngle) * (rpRect2.x - rpCenter.x) - sin(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.x;
					rpChangeRect2.y = sin(dblAngle) * (rpRect2.x - rpCenter.x) + cos(dblAngle) * (rpRect2.y - rpCenter.y) + rpCenter.y;

					rpChangeRect3.x = cos(dblAngle) * (rpRect3.x - rpCenter.x) - sin(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.x;
					rpChangeRect3.y = sin(dblAngle) * (rpRect3.x - rpCenter.x) + cos(dblAngle) * (rpRect3.y - rpCenter.y) + rpCenter.y;

					rpChangeRect4.x = cos(dblAngle) * (rpRect4.x - rpCenter.x) - sin(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.x;
					rpChangeRect4.y = sin(dblAngle) * (rpRect4.x - rpCenter.x) + cos(dblAngle) * (rpRect4.y - rpCenter.y) + rpCenter.y;

					CRavidQuadrangle<double> rqrTemp(rpChangeRect1, rpChangeRect2, rpChangeRect3, rpChangeRect4);

					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(rqrTemp);

					m_vctMeasure.at(nIndex).m_rpRect1 = rpChangeRect1;
					m_vctMeasure.at(nIndex).m_rpRect2 = rpChangeRect2;
					m_vctMeasure.at(nIndex).m_rpRect3 = rpChangeRect3;
					m_vctMeasure.at(nIndex).m_rpRect4 = rpChangeRect4;
				}
				else if(m_vctMeasure.at(nIndex).m_RectType == ERectType_Rect)
				{
					m_cpRectEndPos = rpImage;
					CPoint pos = m_cpRectEndPos - m_cpRectStartPos;
					m_cpRectStartPos = rpImage;

					m_vctMeasure.at(nIndex).m_rpRect1 += pos;
					m_vctMeasure.at(nIndex).m_rpRect2 += pos;
					m_vctMeasure.at(nIndex).m_rpRect3 += pos;
					m_vctMeasure.at(nIndex).m_rpRect4 += pos;

					m_vctMeasure.at(nIndex).m_rpRectStr = rpImage;
					m_vctMeasure.at(nIndex).m_rqrTemp.SetQuadrangle(m_vctMeasure.at(nIndex).m_rpRect1, m_vctMeasure.at(nIndex).m_rpRect2, m_vctMeasure.at(nIndex).m_rpRect3, m_vctMeasure.at(nIndex).m_rpRect4);
				}

				m_vctMeasure.at(nIndex).m_RectType = ERectType_Total;
			}
			else
			{
// 				if(m_bRect && m_bRectEnd)
// 				{
// 					if(m_bShiftKey)
// 					{
// 						double dblX, dblY, dblX_abs, dblY_abs;
// 						dblX = rpImage.x - m_rpRect1.x;
// 						dblY = rpImage.y - m_rpRect1.y;
// 						dblX_abs = abs(dblX);
// 						dblY_abs = abs(dblY);
// 
// 						if(dblX_abs < dblY_abs)
// 						{
// 							if(dblX > 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblX_abs;
// 							}
// 							else if(dblX < 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblX_abs;
// 							}
// 							else if(dblX < 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblX_abs;
// 							}
// 							else if(dblX > 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblX_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblX_abs;
// 							}
// 						}
// 						else if(dblX_abs > dblY_abs)
// 						{
// 							if(dblX > 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblY_abs;
// 							}
// 							else if(dblX < 0 && dblY > 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y + dblY_abs;
// 							}
// 							else if(dblX < 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x - dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblY_abs;
// 							}
// 							else if(dblX > 0 && dblY < 0)
// 							{
// 								m_rpRect3.x = m_rpRect1.x + dblY_abs;
// 								m_rpRect3.y = m_rpRect1.y - dblY_abs;
// 							}
// 						}
// 					}
// 					else
// 						m_rpRect3 = rpImage;
// 
// 					m_bRect = false;
// // 					m_MesureType = EMeasureType_Total;
// // 
//  					SMeasure sMeasure;
// // 					sMeasure.m_MesureType = EMeasureType_Rect;
// 
// 					CRavidRect<double> rrRect(m_rpRect1.x, m_rpRect1.y, m_rpRect3.x, m_rpRect3.y);
// 
// 					CRavidPoint<double> cpRect2;
// 					CRavidPoint<double> cpRect4;
// 
// 					cpRect2.x = m_rpRect3.x;
// 					cpRect2.y = m_rpRect1.y;
// 					cpRect4.x = m_rpRect1.x;
// 					cpRect4.y = m_rpRect3.y;
// 
// 					sMeasure.m_rqrTemp.SetQuadrangle(rrRect);
// 					sMeasure.m_rpRect1 = m_rpRect1;
// 					sMeasure.m_rpRect2 = cpRect2;
// 					sMeasure.m_rpRect3 = m_rpRect3;
// 					sMeasure.m_rpRect4 = cpRect4;
// 					sMeasure.m_rpRectStr = m_rpRect3;
// 					sMeasure.m_bIsRectIntersect = false;
// 					sMeasure.m_bChoice = false;
// 					sMeasure.m_dblRectAngle = 0.;
// 
// 					m_vctMeasure.push_back(sMeasure);
// 
// 					m_bChoice = false;
// 
// 					m_bRectEnd = false;
// 				}
			}
		}
		break;
	default:
		break;
	}

	return bReturn;
}

void CImageViewTeaching::MeasureDataDraw()
{
	CRavidImageViewLayer* pLayerUser = this->GetLayer(0);
	pLayerUser->Clear();

	double dblGetScale = GetScale();
	CString strPosition;

	for(int i = 0; i < (int)m_vctMeasure.size(); ++i)
	{
		CRavidPoint<double> rpRect1(m_vctMeasure.at(i).m_rpRect1);
		CRavidPoint<double> rpRect2(m_vctMeasure.at(i).m_rpRect2);
		CRavidPoint<double> rpRect3(m_vctMeasure.at(i).m_rpRect3);
		CRavidPoint<double> rpRect4(m_vctMeasure.at(i).m_rpRect4);
		double dblRectAngle = m_vctMeasure.at(i).m_dblRectAngle;

	
		CRavidQuadrangle<double> rqd(rpRect1, rpRect2, rpRect3, rpRect4);
		DrawLineMeasureOption(pLayerUser, rqd);
		m_sData.sLineParams.rqdROI = rqd;

		DrawLineMeasureResult(pLayerUser);
		pLayerUser->DrawShape(m_vctMeasure.at(i).m_rqrTemp, m_vctMeasure.at(i).m_bChoice ? BLUE : YELLOW, 2, ERavidImageViewLayerTransparencyColor, ERavidImageViewPenStyle_DOT);

		if(m_sData.sLineParams.eFindDir == eFindLineDir_AngleAdjustment)
		{
			pLayerUser->DrawShape(rpRect1, LIGHTBROWN, 2, LIME);
			pLayerUser->DrawShape(rpRect2, LIGHTBROWN, 2, LIME);
			pLayerUser->DrawShape(rpRect3, LIGHTBROWN, 2, LIME);
			pLayerUser->DrawShape(rpRect4, LIGHTBROWN, 2, LIME);
		}


// 		pLayerUser->DrawTextW(rqd.rpPoints[0], _T("0"), LIGHTRED);
// 		pLayerUser->DrawTextW(rqd.rpPoints[1], _T("1"), LIGHTRED);
// 		pLayerUser->DrawTextW(rqd.rpPoints[2], _T("2"), LIGHTRED);
// 		pLayerUser->DrawTextW(rqd.rpPoints[3], _T("3"), LIGHTRED);

		pLayerUser->DrawTextW(CRavidPoint<double>(rqd.GetRect().left, rqd.GetRect().top - 50), m_sData.strName, LIME);

		if(m_sAlignData.bResult)
		{
			pLayerUser->DrawShape(m_sAlignData.rpCenter.MakeCrossHair(100, TRUE), LIGHTBROWN, 2, LIME);
		}

			
	}

}

void CImageViewTeaching::DrawLineMeasureOption(CRavidImageViewLayer * pLayerUser,  CRavidQuadrangle<double> rqdBox)
{
	do 
	{
		CLineGauge::ETransitionType etType = m_sData.sLineParams.eTransitionType;

		bool bLineMeasureAngleType = false;

		if(m_sData.sLineParams.eFindDir == eFindLineDir_AngleAdjustment)
			bLineMeasureAngleType = true;

		//eFindLineDir_TopToBottom = 0,
		//eFindLineDir_LeftToRight,
		//eFindLineDir_BottomToTop,
		//eFindLineDir_RightToLeft,
		double dblOptionAngle[4] = {180, 90, 0, -90};

		CRavidQuadrangle<int>  rqdBoxScreen(rqdBox);
	
		bool bVer = false;
		CRavidQuadrangle<double> rqd(rqdBoxScreen);
		CRavidLine<double> rlTemp;
		double dblGetScaleStandard = 0.082f;
		double dblGetSizeStandardX = 80;
		double dblGetSizeStandardY = 240;

		double dblGetScaleDiff = dblGetScaleStandard / GetScale();

		double dblOffsetX = dblGetSizeStandardX * dblGetScaleDiff;//80;
		double dblOffsetY = dblGetSizeStandardY * dblGetScaleDiff;//240;
		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[1]);
		rqd.rpPoints[0] = rqdBoxScreen.GetCenterOfGravity() + rlTemp.GetUnitVector() * - (dblOffsetX);		
		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[3]);
		rqd.rpPoints[0] = rqd.rpPoints[0] + rlTemp.GetUnitVector() * -(dblOffsetY);

		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[1]);
		rqd.rpPoints[1] = rqdBoxScreen.GetCenterOfGravity() + rlTemp.GetUnitVector() * (dblOffsetX);
		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[3]);
		rqd.rpPoints[1] = rqd.rpPoints[1] + rlTemp.GetUnitVector() * -(dblOffsetY);

		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[1]);
		rqd.rpPoints[2] = rqdBoxScreen.GetCenterOfGravity() + rlTemp.GetUnitVector() * (dblOffsetX);
		rlTemp.SetLine(rqdBoxScreen.rpPoints[1], rqdBoxScreen.rpPoints[2]);
		rqd.rpPoints[2] = rqd.rpPoints[2] + rlTemp.GetUnitVector() * (dblOffsetY);

		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[1]);
		rqd.rpPoints[3] = rqdBoxScreen.GetCenterOfGravity() + rlTemp.GetUnitVector() * -(dblOffsetX);
		rlTemp.SetLine(rqdBoxScreen.rpPoints[0], rqdBoxScreen.rpPoints[3]);
		rqd.rpPoints[3] = rqd.rpPoints[3] + rlTemp.GetUnitVector() * (dblOffsetY);

		//pLayerUser->DrawShape(rqd, BLUE, 1);

		CRavidPolygon rpgTriangle;
		double dblOffset1 = rqd.rpPoints[0].GetDistance(rqd.rpPoints[3]) * 0.3;
		double dblOffset2 = rqd.rpPoints[0].GetDistance(rqd.rpPoints[3]) * 0.2;

		CRavidLine<double> rl1;

		rlTemp.SetLine(rqd.rpPoints[0], rqd.rpPoints[1]);
		rl1.rpPoints[0] = rqd.rpPoints[0] + rlTemp.GetUnitVector() * (rlTemp.GetScalar() / 2.f);
		rlTemp.SetLine(rqd.rpPoints[0], rqd.rpPoints[3]);
		rl1.rpPoints[0] = rl1.rpPoints[0] + rlTemp.GetUnitVector() * dblOffset1;


		rlTemp.SetLine(rqd.rpPoints[1], rqd.rpPoints[2]);
		rl1.rpPoints[1] = rqd.rpPoints[1] + rlTemp.GetUnitVector() * ((rlTemp.GetScalar() / 2.f) + dblOffset2);

		rpgTriangle.Add(rl1);

		CRavidLine<double> rl2;
		rl2.rpPoints[0] = rl1.rpPoints[1];
		rlTemp.SetLine(rqd.rpPoints[0], rqd.rpPoints[3]);
		rl2.rpPoints[1] = rqd.rpPoints[0] + rlTemp.GetUnitVector() * ((rlTemp.GetScalar() / 2.f) + dblOffset2);
		rpgTriangle.Add(rl2);


		CRavidLine<double> rl3;
		rl3.rpPoints[0] = rl2.rpPoints[1];
		rl3.rpPoints[1] = rl1.rpPoints[0];
		rpgTriangle.Add(rl3);


		CRavidPolygon rpgTriangleFront;
		CRavidPolygon rpgTriangleFrontHalf1;
		CRavidPolygon rpgTriangleFrontHalf2;

		rpgTriangleFront.Add(rl1);
		rpgTriangleFrontHalf1.Add(rl1);
		CRavidLine<double> rl4;
		rl4.rpPoints[0] = rl1.rpPoints[1];
		rl4.rpPoints[1] = rqd.rpPoints[1];
		rpgTriangleFront.Add(rl4);
		rpgTriangleFrontHalf1.Add(rl4);
		rl4.rpPoints[0] = rqd.rpPoints[1];
		rl4.rpPoints[1] = rqd.rpPoints[0];
		rpgTriangleFront.Add(rl4);
		rlTemp.SetLine(rqd.rpPoints[0], rqd.rpPoints[1]);
		rl4.rpPoints[1] = rqd.rpPoints[1] + rlTemp.GetUnitVector() * (-(rlTemp.GetScalar() / 2.f));
		rpgTriangleFrontHalf1.Add(rl4);
		rl4.rpPoints[0] = rl4.rpPoints[1];
		rl4.rpPoints[1] = rl1.rpPoints[0];
		rpgTriangleFrontHalf1.Add(rl4);
		
		rl4.rpPoints[1] = rl4.rpPoints[0];
		rl4.rpPoints[0] = rl1.rpPoints[0];
		rpgTriangleFrontHalf2.Add(rl4);
		rl4.rpPoints[0] = rl4.rpPoints[1];
		rl4.rpPoints[1] = rqd.rpPoints[0];
		rpgTriangleFrontHalf2.Add(rl4);

		rl4.rpPoints[0] = rqd.rpPoints[0];
		rl4.rpPoints[1] = rl3.rpPoints[0];
		rpgTriangleFront.Add(rl4);
		rpgTriangleFrontHalf2.Add(rl4);

		rl4.rpPoints[0] = rl3.rpPoints[0];
		rl4.rpPoints[1] = rl1.rpPoints[0];
		rpgTriangleFront.Add(rl4);
		rpgTriangleFrontHalf2.Add(rl4);

	

		CRavidPolygon rpgTriangleBack;
		CRavidPolygon rpgTriangleBackHalf1;
		CRavidPolygon rpgTriangleBackHalf2;
			
		CRavidPoint<double> rp1;
		rlTemp.SetLine(rl2);
		rp1 = rl3.rpPoints[0] + rlTemp.GetUnitVector() * (-(rlTemp.GetScalar() / 2.f));
		rl4.rpPoints[0] = rp1;
		rl4.rpPoints[1] = rl3.rpPoints[0];
		rpgTriangleBackHalf1.Add(rl4);

		rpgTriangleBack.Add(rl2);
		rl4.rpPoints[0] = rl3.rpPoints[0];
		rl4.rpPoints[1] = rqd.rpPoints[3];
		rpgTriangleBack.Add(rl4);
		rpgTriangleBackHalf1.Add(rl4);

		rl4.rpPoints[0] = rqd.rpPoints[3];
		rl4.rpPoints[1] = rqd.rpPoints[2];
		rpgTriangleBack.Add(rl4);
		CRavidPoint<double> rp2;
		rlTemp.SetLine(rqd.rpPoints[3], rqd.rpPoints[2]);
		rp2 = rqd.rpPoints[3] + rlTemp.GetUnitVector() * ((rlTemp.GetScalar() / 2.f));
		rl4.rpPoints[1] = rp2;
		rpgTriangleBackHalf1.Add(rl4);

		rl4.rpPoints[0] = rp2;
		rl4.rpPoints[1] = rp1;
		rpgTriangleBackHalf1.Add(rl4);
		rl4.rpPoints[0] = rp1;
		rl4.rpPoints[1] = rp2;
		rpgTriangleBackHalf2.Add(rl4);

		rl4.rpPoints[0] = rp2;
		rl4.rpPoints[1] = rqd.rpPoints[2];
		rpgTriangleBackHalf2.Add(rl4);

		rl4.rpPoints[0] = rqd.rpPoints[2];
		rl4.rpPoints[1] = rl2.rpPoints[0];
		rpgTriangleBack.Add(rl4);
		rpgTriangleBackHalf2.Add(rl4);

		rl4.rpPoints[0] = rl2.rpPoints[0];
		rl4.rpPoints[1] = rp1;
		rpgTriangleBackHalf2.Add(rl4);



		CRavidPolygon rpgTriangleCenterBox;
		rlTemp.SetLine(rqd.rpPoints[0], rqd.rpPoints[1]);
		CRavidLine<double> rl5;
		rl5.SetLine(rl1.rpPoints[0], rlTemp.GetAngle());		
		CRavidGeometryArray Rga;
		rqd.GetIntersection(rl5.GetInfiniteLine(), &Rga);
		if(Rga.GetCount() != 2)
			break;
		Rga[0]->GetCenter(rl5.rpPoints[0]);
		Rga[1]->GetCenter(rl5.rpPoints[1]);

		rpgTriangleCenterBox.Add(rl5);

		CRavidLine<double> rl6;
		rl6.rpPoints[0] = rl5.rpPoints[0];
		rl6.rpPoints[1] = rl1.rpPoints[1];

		rpgTriangleCenterBox.Add(rl6);

		rpgTriangleCenterBox.Add(rl1);

		rl6.rpPoints[0] = rl3.rpPoints[1];
		rl6.rpPoints[1] = rl3.rpPoints[0];
		rpgTriangleCenterBox.Add(rl6);

		rl6.rpPoints[0] = rl3.rpPoints[0];
		rl6.rpPoints[1] = rl5.rpPoints[1];

		rpgTriangleCenterBox.Add(rl6);

		
		if(!bLineMeasureAngleType)
		{
			rpgTriangleFront.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleBack.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleFrontHalf1.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleFrontHalf2.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleBackHalf1.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleBackHalf2.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangleCenterBox.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
			rpgTriangle.Rotate(dblOptionAngle[m_sData.sLineParams.eFindDir], rqd.GetCenter());
		}

		switch(etType)
		{
		case Ravid::Algorithms::CLineGauge::ETransitionType_BW:
			{
				pLayerUser->DrawShape(rpgTriangleFront, BLUE, 1, WHITE);
				pLayerUser->DrawShape(rpgTriangleBack, BLUE, 1, BLACK);
			}
			break;
		case Ravid::Algorithms::CLineGauge::ETransitionType_WB:
			{
				pLayerUser->DrawShape(rpgTriangleFront, BLUE, 1, BLACK);
				pLayerUser->DrawShape(rpgTriangleBack, BLUE, 1, WHITE);
			}
			break;
		case Ravid::Algorithms::CLineGauge::ETransitionType_BWorWB:
			{
				pLayerUser->DrawShape(rpgTriangleFrontHalf1, BLUE, 1, WHITE);
				pLayerUser->DrawShape(rpgTriangleFrontHalf2, BLUE, 1, BLACK);
				pLayerUser->DrawShape(rpgTriangleBackHalf1, BLUE, 1, WHITE);
				pLayerUser->DrawShape(rpgTriangleBackHalf2, BLUE, 1, BLACK);
			}
			break;
		case Ravid::Algorithms::CLineGauge::ETransitionType_BWB:
			{
				pLayerUser->DrawShape(rpgTriangleFront, BLUE, 1, BLACK);
				pLayerUser->DrawShape(rpgTriangleCenterBox, BLUE, 1, WHITE);
				pLayerUser->DrawShape(rpgTriangleBack, BLUE, 1, BLACK);
			}
			break;
		case Ravid::Algorithms::CLineGauge::ETransitionType_WBW:
			{
				pLayerUser->DrawShape(rpgTriangleFront, BLUE, 1, WHITE);
				pLayerUser->DrawShape(rpgTriangleCenterBox, BLUE, 1, BLACK);
				pLayerUser->DrawShape(rpgTriangleBack, BLUE, 1, WHITE);
			}
			break;
		default:
			break;
		}


		pLayerUser->DrawShape(rpgTriangle, BLUE, 1, LIGHTGRAY);

	} while (false);

}

void CImageViewTeaching::DrawLineMeasureResult(CRavidImageViewLayer * pLayerUser)
{
	CInspection i;

	SLineMeasurmentResult sResult;
	if(GetObjectID() == EViewNo_ImageViewTeahcingUpper)
	{

		CEventHandlerCamera* pHandler = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper));

		if(!pHandler)
			return;

		CRavidImage* pri = pHandler->GetGrayImage(this->GetImageInfo(), m_sData.sLineParams.rqdROI.GetRect(), m_sData.sLineParams.eColorType);
		sResult = i.GetLineGaugeMesurement(pri, m_sData.sLineParams);
	}
	else
	{
		sResult = i.GetLineGaugeMesurement(this->GetImageInfo(), m_sData.sLineParams);
	}

	pLayerUser->DrawShape(sResult.rlResult.GetInfiniteLine(), BLUE);


	for(auto& iter : sResult.vctMeasuredInvalidPoints)
		pLayerUser->DrawShape(iter, LIGHTRED);

	for(auto& iter : sResult.vctMeasuredValidPoints)
		pLayerUser->DrawShape(iter, BLUE);
}



BOOL CImageViewTeaching::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_SHIFT)
		{
			m_bShiftKey = true;
		}

		if (pMsg->wParam == VK_ESCAPE)
		{
			for (int i = 0; i < (int)m_vctMeasure.size(); ++i)
			{
				if (m_vctMeasure.at(i).m_bChoice)
					return false;
			}
		}

		if (pMsg->wParam == VK_DELETE)
		{
			for (int i = 0; i < (int)m_vctMeasure.size(); ++i)
			{
				if (m_vctMeasure.at(i).m_bChoice)
				{
					m_vctMeasure.erase(m_vctMeasure.begin() + i);
				}
			}
		}
	}

	if (pMsg->message == WM_KEYUP)
	{
		if (pMsg->wParam == VK_SHIFT)
		{
			m_bShiftKey = false;
		}
	}

	return false;
}

void CImageViewTeaching::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	m_bWheelButtonDown = true;
	m_rpScreenLastPos.SetPoint(point);
	CRavidImageView::OnMButtonDown(nFlags, point);
}

void CImageViewTeaching::OnMButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	m_bWheelButtonDown = false;
	m_rpScreenLastPos.SetPoint(point);

	CRavidImageView::OnMButtonUp(nFlags, point);
}
