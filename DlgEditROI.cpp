// DlgEditROI.cpp: 구현 파일
//

#include "stdafx.h"
#include "DlgEditROI.h"


// CDlgEditROI 대화 상자

IMPLEMENT_DYNAMIC(CDlgEditROI, CDialog)

CDlgEditROI::CDlgEditROI(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_TOPENG_EDITROI, pParent)
{
	m_pModelParam = nullptr;
	m_nPolarity = 0;
	m_nSidePolarity = 0;
}

CDlgEditROI::~CDlgEditROI()
{
	m_fontBtn.DeleteObject();
	m_fontStatic.DeleteObject();
}


void CDlgEditROI::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_POLARITY, m_bitmapBtn);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_POLARITY2, m_bitmapBtnSecond);

	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_EDGE1LINE, m_btn[EBtn_Edge1Line]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_EDGE2LINE, m_btn[EBtn_Edge2Line]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_EDGE3LINE, m_btn[EBtn_Edge3Line]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_MARK, m_btn[EBtn_Mark]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_GRAYAREA, m_btn[EBtn_GrayArea]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_EDGECORNER, m_btn[EBtn_EdgeCorner]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_SAVE, m_btn[EBtn_Save]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_CANCEL, m_btn[EBtn_Cancel]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_LEFT, m_btn[EBtn_Left]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_TOP, m_btn[EBtn_Top]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_RIGHT, m_btn[EBtn_Right]);
	DDX_Control(pDX, IDC_DLG_EDITROI_BTN_BOTTOM, m_btn[EBtn_Bottom]);

	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_NAME, m_static[EStatic_Name]);
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_TYPE, m_static[EStatic_Type]);
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_THRESHOLD, m_static[EStatic_Threshold]);
	
	
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_POLARITY, m_static[EStatic_Polarity]);
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_DIRECTION, m_static[EStatic_Direction]);
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_POSITIONXY, m_static[EStatic_PositionXY]);
	DDX_Control(pDX, IDC_DLG_EDITROI_STATIC_SIZEXY, m_static[EStatic_SizeXY]);

	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_NAME, m_edit[EEdit_Name]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_THRESHOLD, m_edit[EEdit_Threshold]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_POSITIONX, m_edit[EEdit_PositionX]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_POSITIONY, m_edit[EEdit_PositionY]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_SIZEX, m_edit[EEdit_PositionX]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_SIZEY, m_edit[EEdit_PositionY]);
	DDX_Control(pDX, IDC_DLG_EDITROI_EDIT_THRESHOLD2, m_edit[EEdit_SideThreshold]);

}


BEGIN_MESSAGE_MAP(CDlgEditROI, CDialog)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_POLARITY, &CDlgEditROI::OnBnClickedDlgEditroiBtnPolarity)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_LEFT, &CDlgEditROI::OnBnClickedDlgEditroiBtnLeft)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_TOP, &CDlgEditROI::OnBnClickedDlgEditroiBtnTop)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_RIGHT, &CDlgEditROI::OnBnClickedDlgEditroiBtnRight)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_BOTTOM, &CDlgEditROI::OnBnClickedDlgEditroiBtnBottom)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_SAVE, &CDlgEditROI::OnBnClickedDlgEditroiBtnSave)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_CANCEL, &CDlgEditROI::OnBnClickedDlgEditroiBtnCancel)
	ON_BN_CLICKED(IDC_DLG_EDITROI_BTN_POLARITY2, &CDlgEditROI::OnBnClickedDlgEditroiBtnPolarity2)
END_MESSAGE_MAP()


// CDlgEditROI 메시지 처리기



BOOL CDlgEditROI::OnInitDialog()
{
	CDialog::OnInitDialog();

// 	m_bitmapBtn.LoadBitmaps(IDB_POLARITYBW2);
// 	m_bitmapBtn.SizeToContent();

// 	m_bitmapBtnSecond.LoadBitmaps(IDB_POLARITYLOW);
// 	m_bitmapBtnSecond.SizeToContent();


	m_fontBtn.CreatePointFont(120, _T("MS Shell Dlg"));

	for (int i = 0; i < EBtn_Count; i++)
	{
		m_btn[i].SetFont(&m_fontBtn);
		m_btn[i].SetFaceColor(BASE_COLOR);
		m_btn[i].SetTextColor(WHITE);
	}

	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("MS Shell Dlg"));//Tahoma
	m_lf.lfHeight = 20;
	m_lf.lfWidth = 8;
	m_lf.lfEscapement = 0;
	m_lf.lfOrientation = 0;
	m_lf.lfItalic = 0;
	m_lf.lfUnderline = 0;
	m_lf.lfStrikeOut = 0;
	m_lf.lfWeight = 200;
	m_lf.lfCharSet = HANGEUL_CHARSET;//ARABIC_CHARSET;
	m_lf.lfOutPrecision = OUT_STROKE_PRECIS;
	m_lf.lfClipPrecision = 2;
	m_lf.lfQuality = 1;
	m_lf.lfPitchAndFamily = 1;

	m_fontStatic.CreateFontIndirect(&m_lf);

	for (int i = 0; i < EStatic_Count; i++)
	{
		m_static[i].SetFont(&m_fontStatic);
		SetWindowTheme(m_static[i].m_hWnd, _T(""), _T(""));
	}


	return TRUE;  // return TRUE unless you set the focus to a control
}

HBRUSH CDlgEditROI::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
	switch (nCtlColor)
	{
	case CTLCOLOR_STATIC:
	{
		pDC->SetTextColor(WHITE);
		pDC->SetBkColor(BASE_COLOR);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
	break;
	case CTLCOLOR_DLG:
	{
		pDC->SetBkColor(RGB(40, 40, 40));
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
	break;
	}
	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
}


void CDlgEditROI::OnOpenDialog(int nNum)
{
	if (!m_pModelParam)
		return;

	int nAnode = 0;
	if (GetAnodeMode()) // 양극일경우...
		nAnode = 16;
	int nData = 0;
	CString strMsg;

	/*
	if( nNum < 4)
	{
		m_nSelectModelNum = (GetSelectCamera() * 4) + nNum + nAnode;
		nData = m_pModelParam->nThreshold[m_nSelectModelNum];

		strMsg.Format(_T("%d"), nData);
		m_edit[EEdit_Threshold].SetWindowText(strMsg);
		m_edit[EEdit_Threshold].Invalidate();
		nData = m_pModelParam->nDirection[m_nSelectModelNum];

		SettingDirectionButton(nData);

		m_nPolarity = m_pModelParam->nPolarity[m_nSelectModelNum];

		if (m_nPolarity == 0)
		{
			m_bitmapBtn.LoadBitmaps(IDB_POLARITYBW2);
		}
		else
		{
			m_bitmapBtn.LoadBitmaps(IDB_POLARITYWB);
		}
		m_bitmapBtn.SizeToContent();
		m_bitmapBtn.Invalidate();


		strMsg = m_pModelParam->strName[m_nSelectModelNum];

		m_edit[EEdit_Name].SetWindowText(strMsg);
		m_edit[EEdit_Name].Invalidate();
		m_bSide = false;
	}
	else
	{
		m_bSide = true;

		

		m_nSelectModelNum = (GetSelectCamera() * 4) + nNum - 4;
		nData = m_pModelParam->nSideThreshold[m_nSelectModelNum];
		strMsg.Format(_T("%d"), nData);
		m_edit[EEdit_SideThreshold].SetWindowText(strMsg);
		m_edit[EEdit_SideThreshold].Invalidate();

		m_nSidePolarity = m_pModelParam->nSideDirection[m_nSelectModelNum];

		if (m_nSidePolarity == 0)
		{
			m_bitmapBtnSecond.LoadBitmaps(IDB_POLARITYLOW);
		}
		else
		{
			m_bitmapBtnSecond.LoadBitmaps(IDB_POLARITYHIGH);
		}
		m_bitmapBtnSecond.SizeToContent();
		m_bitmapBtnSecond.Invalidate();

		strMsg = m_pModelParam->strName[(GetSelectCamera() * 4) + nNum + 12];

		m_edit[EEdit_Name].SetWindowText(strMsg);
		m_edit[EEdit_Name].Invalidate();

	}
	*/

}

void CDlgEditROI::SettingDirectionButton(int nNum)
{
	m_btn[EBtn_Left].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Top].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Right].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Bottom].SetFaceColor(BASE_COLOR);

	if(nNum == 0)
		m_btn[EBtn_Left].SetFaceColor(LIMEGREEN);
	else if(nNum == 1)
		m_btn[EBtn_Top].SetFaceColor(LIMEGREEN);
	else if(nNum == 2)
		m_btn[EBtn_Right].SetFaceColor(LIMEGREEN);
	else
		m_btn[EBtn_Bottom].SetFaceColor(LIMEGREEN);

	m_btn[EBtn_Left].Invalidate();
	m_btn[EBtn_Top].Invalidate();
	m_btn[EBtn_Right].Invalidate();
	m_btn[EBtn_Bottom].Invalidate();
}


void CDlgEditROI::OnBnClickedDlgEditroiBtnPolarity()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	if (m_nPolarity == 0)
	{
		//m_bitmapBtn.LoadBitmaps(IDB_POLARITYWB);
		m_nPolarity = 1;
	}
	else
	{
		//m_bitmapBtn.LoadBitmaps(IDB_POLARITYBW2);
		m_nPolarity = 0;
	}

	m_bitmapBtn.SizeToContent();
	m_bitmapBtn.Invalidate();

	//m_pModelParam->nPolarity[m_nSelectModelNum] = m_nPolarity;

}


void CDlgEditROI::OnBnClickedDlgEditroiBtnLeft()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	SettingDirectionButton(0);

	//m_pModelParam->nDirection[m_nSelectModelNum] = 0;

}


void CDlgEditROI::OnBnClickedDlgEditroiBtnTop()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	//m_pModelParam->nDirection[m_nSelectModelNum] = 1;
	SettingDirectionButton(1);
}


void CDlgEditROI::OnBnClickedDlgEditroiBtnRight()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	SettingDirectionButton(2);
	//m_pModelParam->nDirection[m_nSelectModelNum] = 2;
}


void CDlgEditROI::OnBnClickedDlgEditroiBtnBottom()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	SettingDirectionButton(3);
	//m_pModelParam->nDirection[m_nSelectModelNum] = 3;
}


void CDlgEditROI::OnBnClickedDlgEditroiBtnSave()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	CRegisterPageMarkROI* pPage = dynamic_cast<CRegisterPageMarkROI*>(CUIManager::FindView(typeid(CRegisterPageMarkROI)));

	CLogManager::Write(0, _T("[Roi] Save Button On"));

	CString strMsg;
	CString strChangeData;
	bool bChange = false;
	
	/*
	if (m_bSide)
	{
		m_edit[EEdit_SideThreshold].GetWindowText(strMsg);

		double dblData = _ttoi(strMsg);

		if (m_pModelParam->nSideThreshold[m_nSelectModelNum] == dblData)
			bChange = false;
		else
			bChange = true;


		strChangeData.Format(_T("[Parameter]SideThreshold[%d] : [%.2f]->[%.2f]"), m_nSelectModelNum, m_pModelParam->nSideThreshold[m_nSelectModelNum], dblData);
	
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->nSideThreshold[m_nSelectModelNum] = _ttoi(strMsg);


	}
	else
	{
		m_edit[EEdit_Name].GetWindowText(strMsg);
		m_pModelParam->strName[m_nSelectModelNum] = strMsg;

		m_edit[EEdit_Threshold].GetWindowText(strMsg);


		double dblData = _ttoi(strMsg);
		if (m_pModelParam->nThreshold[m_nSelectModelNum] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]Threshold[%d] : [%.2f]->[%.2f]"), m_nSelectModelNum, m_pModelParam->nThreshold[m_nSelectModelNum], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);


		m_pModelParam->nThreshold[m_nSelectModelNum] = _ttoi(strMsg);
	}
	*/

	//pHandler->SaveModelParam();
}


void CDlgEditROI::OnBnClickedDlgEditroiBtnCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ShowWindow(SW_HIDE);
}

void CDlgEditROI::SetSideMode(bool bOn)
{
	if (bOn)
	{
		m_bSideMode = true;
		m_bitmapBtnSecond.ShowWindow(SW_SHOW);
		m_edit[EEdit_SideThreshold].ShowWindow(SW_SHOW);

		m_edit[EEdit_Threshold].ShowWindow(SW_HIDE);
		m_bitmapBtn.ShowWindow(SW_HIDE);
		m_btn[EBtn_Left].ShowWindow(SW_HIDE);
		m_btn[EBtn_Top].ShowWindow(SW_HIDE);
		m_btn[EBtn_Right].ShowWindow(SW_HIDE);
		m_btn[EBtn_Bottom].ShowWindow(SW_HIDE);


		m_btn[EBtn_GrayArea].SetFaceColor(RGB(0, 255, 0));
		m_btn[EBtn_GrayArea].SetTextColor(RGB(40, 40, 40));

		m_btn[EBtn_EdgeCorner].SetFaceColor(RGB(40, 40, 40));
		m_btn[EBtn_EdgeCorner].SetTextColor(RGB(255, 255, 255));

	}
	else
	{
		m_bSideMode = false;
		m_edit[EEdit_Threshold].ShowWindow(SW_SHOW);
		m_bitmapBtn.ShowWindow(SW_SHOW);
		m_btn[EBtn_Left].ShowWindow(SW_SHOW);
		m_btn[EBtn_Top].ShowWindow(SW_SHOW);
		m_btn[EBtn_Right].ShowWindow(SW_SHOW);
		m_btn[EBtn_Bottom].ShowWindow(SW_SHOW);

		m_bitmapBtnSecond.ShowWindow(SW_HIDE);
		m_edit[EEdit_SideThreshold].ShowWindow(SW_HIDE);

		m_btn[EBtn_EdgeCorner].SetFaceColor(RGB(0, 255, 0));
		m_btn[EBtn_EdgeCorner].SetTextColor(RGB(40, 40, 40));

		m_btn[EBtn_GrayArea].SetFaceColor(RGB(40, 40, 40));
		m_btn[EBtn_GrayArea].SetTextColor(RGB(255, 255, 255));

	}
}

void CDlgEditROI::OnBnClickedDlgEditroiBtnPolarity2()
{
	do 
	{
		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			return;

		if (m_nSidePolarity == 0)
		{
			//m_bitmapBtnSecond.LoadBitmaps(IDB_POLARITYHIGH);
			m_nSidePolarity = 1;
		}
		else
		{
			//m_bitmapBtnSecond.LoadBitmaps(IDB_POLARITYLOW);
			m_nSidePolarity = 0;
		}

		m_bitmapBtnSecond.SizeToContent();
		m_bitmapBtnSecond.Invalidate();

		//m_pModelParam->nSideDirection[m_nSelectModelNum] = m_nSidePolarity;

	} while (false);

}
