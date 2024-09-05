// CRegisterPageMarkROI.cpp: 구현 파일
//

#include "stdafx.h"

#include "RegisterPageMarkROI.h"
#include "afxdialogex.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
// CRegisterPageMarkROI 대화 상자

IMPLEMENT_DYNAMIC(CRegisterPageMarkROI, CDialog)

CRegisterPageMarkROI::CRegisterPageMarkROI(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_FORM_REGISTER_PAGE_MARKROI, pParent)
{
	m_pDlgEdit = nullptr;
	m_pDlgLineGaugeParam = nullptr;
	//m_pDlgROINaming = nullptr;

	m_pModelParam = nullptr;
}

CRegisterPageMarkROI::~CRegisterPageMarkROI()
{
	m_fontStatic.DeleteObject();
	m_fontBtn.DeleteObject();
	
	if (m_pDlgEdit)
	{
		delete[] m_pDlgEdit;
	}

	if(m_pDlgLineGaugeParam)
	{
		delete[] m_pDlgLineGaugeParam;
	}

// 	if(m_pDlgROINaming)
// 	{
// 		delete[] m_pDlgROINaming;
// 	}
}

void CRegisterPageMarkROI::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_ADD, m_btn[EBtn_Add]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_DELETE, m_btn[EBtn_Delete]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_EDIT, m_btn[EBtn_Edit]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_FINDTEST, m_btn[EBtn_FindTest]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_UP, m_btn[EBtn_Up]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_DOWN, m_btn[EBtn_Down]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_LEFT, m_btn[EBtn_Left]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_RIGHT, m_btn[EBtn_Right]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_MOVE, m_btn[EBtn_Move]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_SIZE, m_btn[EBtn_Size]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_AREA, m_btn[EBtn_Area]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_SELECT, m_btn[EBtn_Select]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_REG, m_btn[EBtn_Reg]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_MODIFYAREA, m_btn[EBtn_ModifyArea]);

	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_MARKAREA, m_static[EStatic_MarkArea]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_REGISTER, m_static[EStatic_Register]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_LIGHT, m_static[EStatic_Light]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_SIDE1, m_static[EStatic_Side1]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_SIDE2, m_static[EStatic_Side2]);

	DDX_Control(pDX, IDC_COMBO_REGISTER_PAGE_SIDE1, m_Combo[ECombo_Side1]);
	DDX_Control(pDX, IDC_COMBO_REGISTER_PAGE_SIDE2, m_Combo[ECombo_Side2]);

	DDX_Control(pDX, IDC_SLIDER_REGISTER_PAGE_SIDE1, m_Slider[ESlider_Side1]);
	DDX_Control(pDX, IDC_SLIDER_REGISTER_PAGE_SIDE2, m_Slider[ESlider_Side2]);

	DDX_Control(pDX, IDC_LIST_REGISTER_PAGE_MARK_AREA, m_ListBox);
	
	DDX_Control(pDX, IDC_EDIT_REGISTER_PAGE_SIDE1, m_edit[EEdit_Side1]);
	DDX_Control(pDX, IDC_EDIT_REGISTER_PAGE_SIDE2, m_edit[EEdit_Side2]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_LIGHT_SAVE, m_btn[EBtn_LightSave]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_LIGHT_SAVE2, m_btn[EBtn_LightSave2]);
}


BEGIN_MESSAGE_MAP(CRegisterPageMarkROI, CDialog)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_ADD, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageAdd)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_DELETE, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageDelete)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_EDIT, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageEdit)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_MOVE, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageMove)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_SIZE, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageSize)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_LEFT, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLeft)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_UP, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageUp)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_RIGHT, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageRight)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_DOWN, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageDown)
	ON_LBN_DBLCLK(IDC_LIST_REGISTER_PAGE_MARK_AREA, &CRegisterPageMarkROI::OnLbnDblclkListRegisterPageMarkArea)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_AREA, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageArea)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_FINDTEST, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageFindtest)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_SELECT, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageSelect)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_REG, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageReg)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER_REGISTER_PAGE_SIDE1, &CRegisterPageMarkROI::OnNMCustomdrawSliderRegisterPageSide1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER_REGISTER_PAGE_SIDE2, &CRegisterPageMarkROI::OnNMCustomdrawSliderRegisterPageSide2)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_MODIFYAREA, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageModifyarea)

	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_LIGHT_SAVE, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLightSave)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_LIGHT_SAVE2, &CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLightSave2)
	ON_LBN_SELCHANGE(IDC_LIST_REGISTER_PAGE_MARK_AREA, &CRegisterPageMarkROI::OnLbnSelchangeListRegisterPageMarkArea)
	ON_CBN_SELCHANGE(IDC_COMBO_REGISTER_PAGE_SIDE1, &CRegisterPageMarkROI::OnCbnSelchangeComboRegisterPageSide1)

END_MESSAGE_MAP()


// CRegisterPageMarkROI 메시지 처리기
BOOL CRegisterPageMarkROI::OnInitDialog()
{
	CDialog::OnInitDialog();

	if (!m_pDlgEdit)
	{
		m_pDlgEdit = new CDlgEditROI(this);

		if (!m_pDlgEdit)
			return TRUE;

		if (m_pDlgEdit->GetSafeHwnd() == NULL)
			m_pDlgEdit->Create(IDD_DLG_TOPENG_EDITROI, this);

		m_pDlgEdit->ShowWindow(SW_HIDE);
	}

// 	if(!m_pDlgROINaming)
// 	{
// 		m_pDlgROINaming = new CDlgAddROINaming(this);
// 
// 		if(!m_pDlgROINaming)
// 			return TRUE;
// 
// 		if(m_pDlgROINaming->GetSafeHwnd() == NULL)
// 			m_pDlgROINaming->Create(IDD_DIALOG_ROI_NAME, this);
// 
// 		m_pDlgROINaming->ShowWindow(SW_HIDE);
// 	}


	if(!m_pDlgLineGaugeParam)
	{
		m_pDlgLineGaugeParam = new CDlgLineGaugeParameter(this);

		if(!m_pDlgLineGaugeParam)
			return TRUE;

		if(m_pDlgLineGaugeParam->GetSafeHwnd() == NULL)
			m_pDlgLineGaugeParam->Create(IDD_DLG_LINEGAUGE_PARAMETER, this);

		m_pDlgLineGaugeParam->ShowWindow(SW_HIDE);
	}

	m_fontBtn.CreatePointFont(100, _T("MS Shell Dlg"));

	for (int i = 0; i < EBtn_Count; i++)
	{
		m_btn[i].SetFont(&m_fontBtn);
		m_btn[i].SetFaceColor(RGB(40, 40, 40));
		m_btn[i].SetTextColor(WHITE);
	}

	for(int i = 0 ; i < EEdit_Count; i++)
	{
		m_edit[i].SetFont(&m_fontBtn);
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

	for(int i = 0 ; i < EStatic_Count; i++)
	{
		m_static[i].SetFont(&m_fontStatic);
		SetWindowTheme(m_static[i].m_hWnd, _T(""), _T(""));
	}
	

	for(int i = 0 ; i < ECombo_Count; i++)
	{
		m_Combo[i].SetFont(&m_fontStatic);
// 		m_Combo[i].SetItemHeight(0, 28);
// 		m_Combo[i].SetItemHeight(1, 28);
// 		m_Combo[i].SetItemHeight(2, 28);
// 		m_Combo[i].SetItemHeight(3, 28);

		m_Combo[i].InsertString(0,_T("CH 01"));
		m_Combo[i].InsertString(1,_T("CH 02"));
		m_Combo[i].InsertString(2,_T("CH 03"));
		m_Combo[i].InsertString(3,_T("CH 04"));
		m_Combo[i].InsertString(4,_T("CH 05"));

		m_Combo[i].SetCurSel(0);
	}

	for(int i = 0 ; i < ESlider_Count; i++)
	{
		m_Slider[i].SetRange(0, 255);
		m_Slider[i].SetLineSize(10);
		m_Slider[i].SetPageSize(10);
		m_Slider[i].SetTicFreq(5);
	}

	m_bMove = true;
	m_btn[EBtn_Move].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Move].Invalidate();
	m_btn[EBtn_Size].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Size].Invalidate();



	return TRUE;  // return TRUE unless you set the focus to a control
}

HBRUSH CRegisterPageMarkROI::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
	switch (nCtlColor)
	{
	case CTLCOLOR_STATIC:
	{
		if(pWnd->GetSafeHwnd() == GetDlgItem(IDC_SLIDER_REGISTER_PAGE_SIDE1)->GetSafeHwnd()
			|| pWnd->GetSafeHwnd() == GetDlgItem(IDC_SLIDER_REGISTER_PAGE_SIDE2)->GetSafeHwnd())
		{
			return CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

		}
		else
		{
			pDC->SetTextColor(WHITE);
			pDC->SetBkColor(RGB(40, 40, 40));
			return (HBRUSH)GetStockObject(NULL_BRUSH);
		}
	}
	break;
	case CTLCOLOR_DLG:
	{
		pDC->SetBkColor(RGB(40, 40, 40));
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
	break;
	case CTLCOLOR_BTN:
	{
		pDC->SetBkColor(YELLOW);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
	break;
	}


	return CDialog::OnCtlColor(pDC, pWnd, nCtlColor);



	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
}

void CRegisterPageMarkROI::OnOpenModel()
{
	if (!m_pModelParam)
		return;

	m_pDlgEdit->SetModelParamPtr(m_pModelParam);


	LoadLightValueData(0);

}

void CRegisterPageMarkROI::ShowDlgParam(long nIndex, CString strName)
{
// 	if(m_pDlgLineGaugeParam->IsWindowVisible())
// 		return;

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

	if(!pViewImage)
		return;

	if(!pViewImage->GetImageInfo())
		return;

	m_pDlgLineGaugeParam->ShowWindow(SW_SHOW);
	m_pDlgLineGaugeParam->DisplayROINameToEditBox(nIndex, strName);

	CRavidQuadrangle<double> rqd;
	CInspection i;
	i.FindCellArea(pViewImage->GetImageInfo(), eCam,  rqd);
	sCellAlignData sData;
	sData.rpCenter = rqd.GetCenter();
	sData.bResult = true;
	sData.ECameraType = eCam;
	CRavidLine<double> rl(rqd.rpPoints[0], rqd.rpPoints[1]);
	sData.dblAngle = rl.GetAngle();

	m_pDlgLineGaugeParam->SetAlignData(sData);
	pViewImage->SetAlignData(sData);

	pViewImage->OnCreateeRect();

}

void CRegisterPageMarkROI::SettingParam(SMeasurementROI sData)
{
	m_pDlgLineGaugeParam->DisplayDataToSheet(sData);
}

void CRegisterPageMarkROI::LoadLightValueData(int nCh)
{
	int nValue = m_pModelParam->cLightBrightness[nCh];
	m_Slider[ESlider_Side1].SetPos(nValue);
	m_Slider[ESlider_Side1].Invalidate();

	CString strValue;
	strValue.Format(_T("%d"), nValue);
	m_edit[EEdit_Side1].SetWindowTextW(strValue);
	m_edit[EEdit_Side1].Invalidate();
}


void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageAdd()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if(m_pDlgLineGaugeParam->IsWindowVisible())
		m_pDlgLineGaugeParam->ShowWindow(SW_HIDE);

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;


	SMeasurementROI sData;

	std::vector<SMeasurementROI> vec;
	pHandler->GetMesurementROIData(vec);
	long nIndex = vec.size();

	SettingParam(sData);
	ShowDlgParam(nIndex, sData.strName);

}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageDelete()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	int nSelect = m_ListBox.GetCurSel();

	if(nSelect < 0)
		return;

	//pViewForm->SetROIDataDelete(nSelect);

	pHandler->SetMesurementROIDataDelete(nSelect);

	pHandler->SaveMeasurementROIFormIni();

	pHandler->UpdateMeasurementKindParam();

	pViewForm->SetROIDataToMeasurementDlgListBox();
	
	UpdateListBox();
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageEdit()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	OnLbnDblclkListRegisterPageMarkArea();
}

void CRegisterPageMarkROI::UpdateListBox()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if (!pViewForm)
		return;
		
	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;


	m_ListBox.ResetContent();



	CString strMsg;
	CString strMsgCamName;

	eCam == ECameraNum_Upper ? strMsgCamName.Format(_T("Upper")) : strMsgCamName.Format(_T("Lower"));
	

	std::vector<SMeasurementROI> vctData;
	pHandler->GetMesurementROIData(vctData);

	for(size_t i = 0; i < vctData.size(); i++)
	{
		SMeasurementROI sData = vctData[i];
		strMsg.Format(_T("[%s] %s"), strMsgCamName, sData.strName);
		m_ListBox.AddString(strMsg);
	}

}


////////////////////////////////////////////////////////////////////////////////////////////



void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageMove()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_btn[EBtn_Move].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Move].Invalidate();
	m_btn[EBtn_Size].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Size].Invalidate();

	m_bMove = true;
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageSize()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_btn[EBtn_Move].SetFaceColor(BASE_COLOR);
	m_btn[EBtn_Move].Invalidate();
	m_btn[EBtn_Size].SetFaceColor(LIMEGREEN);
	m_btn[EBtn_Size].Invalidate();

	m_bMove = false;
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLeft()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;


// 	if(m_bMove)
// 		pHandler->MoveTeachingROI(EMove_Left, pView->GetSelectCamera());
// 	else
// 		pHandler->ChangeSizeTeachingROI(EMove_Left, pView->GetSelectCamera());

}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageUp()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

// 	if (m_bMove)
// 		pHandler->MoveTeachingROI(EMove_Up, pView->GetSelectCamera());
// 	else
// 		pHandler->ChangeSizeTeachingROI(EMove_Up, pView->GetSelectCamera());
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageRight()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

// 	if (m_bMove)
// 		pHandler->MoveTeachingROI(EMove_Right, pView->GetSelectCamera());
// 	else
// 		pHandler->ChangeSizeTeachingROI(EMove_Right, pView->GetSelectCamera());
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageDown()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

// 	if (m_bMove)
// 		pHandler->MoveTeachingROI(EMove_Down, pView->GetSelectCamera());
// 	else
// 		pHandler->ChangeSizeTeachingROI(EMove_Down, pView->GetSelectCamera());
}

void CRegisterPageMarkROI::OnLbnDblclkListRegisterPageMarkArea()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

// 	if(m_pDlgLineGaugeParam->IsWindowVisible())
// 		m_pDlgLineGaugeParam->ShowWindow(SW_HIDE);

	int nSelect = m_ListBox.GetCurSel();

	if(nSelect < 0)
		return;

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	std::vector<SMeasurementROI> vctData;

	pHandler->GetMesurementROIData(vctData);

	if(nSelect >= vctData.size())
		return;

	SettingParam(vctData[nSelect]);

	ShowDlgParam(nSelect, vctData[nSelect].strName);


}

void CRegisterPageMarkROI::OnLbnSelchangeListRegisterPageMarkArea()
{
	if(!m_pDlgLineGaugeParam->IsWindowVisible())
		return;

	OnLbnDblclkListRegisterPageMarkArea();
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageArea()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

//	pHandler->ClearImageView(pView->GetSelectCamera());
	

	int nSelectROI = m_ListBox.GetCurSel();
	if (nSelectROI < 0)
	{
		AfxMessageBox(_T("[Select Error] 항목을 선택해주세요"));
		return;
	}

// 	for(int i = 0; i < 4; i++)
// 	{
// 		pHandler->DrawInspectROIArray(pView->GetSelectCamera(), i);
// 		pHandler->DrawInspectROIArray(pView->GetSelectCamera(), i + 4);
// 
// 	}

}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageFindtest()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	int nSelect = m_ListBox.GetCurSel();
	if (nSelect < 0)
	{
		AfxMessageBox(_T("[Select Error] 항목을 선택해주세요"));
		return;
	}


// 	pHandler->ClearImageView(pView->GetSelectCamera());
// 
// 	pHandler->DrawInspectROIArray(pView->GetSelectCamera(), nSelect);

}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageSelect()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;


//	pHandler->EditTeachingBoxArray(pView->GetSelectCamera(), 99999, true);
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageReg()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	int nSelectROI = m_ListBox.GetCurSel();
	if (nSelectROI < 0)
	{
		AfxMessageBox(_T("[Select Error] 항목을 선택해주세요"));
		return;
	}

	CLogManager::Write(0, _T("[Teaching]Teaching Data Save  Button On"));



// 	if(m_bSaveMode)
// 		??

// 	for (int i = 0; i < 8; i++)
// 	{
// 		pHandler->SaveROI(pView->GetSelectCamera(), i);
// 		m_bSaveMode = false;
// 	}
// 	else
// 		pHandler->SaveROI(pView->GetSelectCamera(), nSelectROI);


}

void CRegisterPageMarkROI::OnNMCustomdrawSliderRegisterPageSide1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	int nValue = m_Slider[ESlider_Side1].GetPos();

	int nCh = 0;
	nCh = m_Combo[ECombo_Side1].GetCurSel();

	CString strValue;
	strValue.Format(_T("%d"), nValue);
	m_edit[EEdit_Side1].SetWindowTextW(strValue);
	m_edit[EEdit_Side1].Invalidate();

	pHandler->LightControllerSetBrightValue(nCh + 1, nValue);
}

void CRegisterPageMarkROI::OnNMCustomdrawSliderRegisterPageSide2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	int nValue = m_Slider[ESlider_Side2].GetPos();

	CString strValue;
	strValue.Format(_T("%d"), nValue);
	m_edit[EEdit_Side2].SetWindowTextW(strValue);
	m_edit[EEdit_Side2].Invalidate();
	//pHandler->SetLightValue();
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageModifyarea()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	int nSelect = m_ListBox.GetCurSel();

	if (nSelect < 0)
	{
		AfxMessageBox(_T("[Select Error] 항목을 선택해주세요"));
		return;
	}
}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLightSave()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();


	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;


	int nCh = 0,nValue = 0;
	m_Combo[ECombo_Side1].GetItemData(nCh);
	nValue = m_Slider[ESlider_Side1].GetPos();

	m_pModelParam->cLightBrightness[nCh] = nValue;
		
	pHandler->SetModelParamSave(*m_pModelParam);

	CString strLog;
	strLog.Format(_T("[Parameter]Save Light[%d] Value: "), nCh, nValue);
	CLogManager::Write(0, strLog);

}

void CRegisterPageMarkROI::OnBnClickedBtnRegisterPageLightSave2()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	CLogManager::Write(0, _T("[Light]LightFlash-2 Change On"));

	int nCh = 0, nValue = 0;

	m_Combo[ECombo_Side2].GetItemData(nCh);
	nValue = m_Slider[ESlider_Side2].GetPos();
//	pHandler->SetFlashTimeValue(nCh, nValue, 1);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}




BOOL CRegisterPageMarkROI::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_ESCAPE))
	{
		return true;
	}

	if(pMsg->message == WM_LBUTTONDBLCLK)
	{
		CRect ccRect;
		m_static[EStatic_Side1].GetWindowRect(ccRect);

		if(ccRect.PtInRect(pMsg->pt))
		{
			if(CSequenceManager::IsRunning())
				return FALSE;

			CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
			if(!pHandler)
				return FALSE;

			pHandler->LightControllerEnableChannel(0, true, true);
		}

		m_static[EStatic_Side2].GetWindowRect(ccRect);

		if(ccRect.PtInRect(pMsg->pt))
		{
			if(CSequenceManager::IsRunning())
				return FALSE;

			CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
			if(!pHandler)
				return FALSE;

			pHandler->LightControllerEnableChannel(0, false, true);
		}



	}

	// 엔터키
	if((pMsg->message == WM_KEYDOWN) && (pMsg->wParam == VK_RETURN))
	{
		if(CSequenceManager::IsRunning())
			return FALSE;

		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
			return FALSE;
		CString strValue;
		m_edit[EEdit_Side1].GetWindowTextW(strValue);
		int nValue = _ttoi(strValue);

		m_Slider[ESlider_Side1].SetPos(nValue);

		int nCh = 0;
		nCh = m_Combo[ECombo_Side1].GetCurSel();

	
		pHandler->LightControllerSetBrightValue(nCh + 1, nValue);

		return true;
	}

	return CDialog::PreTranslateMessage(pMsg);
}


void CRegisterPageMarkROI::OnCbnSelchangeComboRegisterPageSide1()
{
	int nCh = m_Combo[ECombo_Side1].GetCurSel();
	LoadLightValueData(nCh);
}

