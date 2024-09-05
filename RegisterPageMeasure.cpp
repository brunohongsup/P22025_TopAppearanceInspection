// CRegisterPageMeasure.cpp: 구현 파일
//

#include "stdafx.h"

#include "RegisterPageMeasure.h"



// CRegisterPageMeasure 대화 상자

IMPLEMENT_DYNAMIC(CRegisterPageMeasure, CDialog)

CRegisterPageMeasure::CRegisterPageMeasure(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_FORM_REGISTER_PAGE_MEASURE)
{
	m_pDlgMeasurement = nullptr;
}

CRegisterPageMeasure::~CRegisterPageMeasure()
{
	m_fontStatic.DeleteObject();
	m_fontBtn.DeleteObject();

	if(m_pDlgMeasurement)
	{
		delete[] m_pDlgMeasurement;
	}
}

void CRegisterPageMeasure::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_ADD, m_btn[EBtn_Add]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_DELETE, m_btn[EBtn_Delete]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_EDIT, m_btn[EBtn_Edit]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_SETDATUM, m_btn[EBtn_Datum]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_MEASUREALL, m_btn[EBtn_MeasureAll]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_MEASURE, m_btn[EBtn_Measure]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_SHOWMEASURE, m_btn[EBtn_ShowMeasure]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_LOADFROMEXCEL, m_btn[EBtn_LoadFromExcel]);
	DDX_Control(pDX, IDC_BTN_REGISTER_PAGE_SAVETOEXCEL, m_btn[EBtn_SaveToExcel]);

	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_MEASURE_MEASURE, m_static[EStatic_Measure]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_MEASURE_RESULT, m_static[EStatic_Result]);

	DDX_Control(pDX, IDC_LIST_REGISTER_PAGE_MEASUREMENT, m_ListBox);

}


BEGIN_MESSAGE_MAP(CRegisterPageMeasure, CDialog)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_ADD, &CRegisterPageMeasure::OnBnClickedBtnRegisterPageAdd)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_DELETE, &CRegisterPageMeasure::OnBnClickedBtnRegisterPageDelete)
	ON_BN_CLICKED(IDC_BTN_REGISTER_PAGE_EDIT, &CRegisterPageMeasure::OnBnClickedBtnRegisterPageEdit)
	ON_LBN_DBLCLK(IDC_LIST_REGISTER_PAGE_MEASUREMENT, &CRegisterPageMeasure::OnLbnDblclkListRegisterPageMeasurement)
	ON_LBN_SELCHANGE(IDC_LIST_REGISTER_PAGE_MEASUREMENT, &CRegisterPageMeasure::OnLbnSelchangeListRegisterPageMeasurement)

END_MESSAGE_MAP()


// CRegisterPageMeasure 메시지 처리기


BOOL CRegisterPageMeasure::OnInitDialog()
{
	CDialog::OnInitDialog();
	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	m_fontBtn.CreatePointFont(100, _T("MS Shell Dlg"));

	for (int i = 0; i < EBtn_Count; i++)
	{
		m_btn[i].SetFont(&m_fontBtn);
		m_btn[i].SetFaceColor(RGB(40, 40, 40));
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


	if(!m_pDlgMeasurement)
	{
		m_pDlgMeasurement = new CDlgMeasurementParameter(this);

		if(!m_pDlgMeasurement)
			return TRUE;

		if(m_pDlgMeasurement->GetSafeHwnd() == NULL)
			m_pDlgMeasurement->Create(IDD_DLG_MEASUREMENT_PARAMETER, this);

		m_pDlgMeasurement->ShowWindow(SW_HIDE);
	}



	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}

void CRegisterPageMeasure::ShowDlgParam(long nIndex, CString strName)
{
	CImageViewTeaching* pView = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper));

	if(!pView)
		return;

	if(!pView->GetImageInfo())
		return;

	m_pDlgMeasurement->ShowWindow(SW_SHOW);

	m_pDlgMeasurement->DisplayMeasurementKindToEditBox(nIndex, strName);

	//pView->OnCreateeRect();

}

void CRegisterPageMeasure::SettingParam(SMeasurementKind sData)
{
	m_pDlgMeasurement->DisplayDataToSheetAndListBox(sData);
}

void CRegisterPageMeasure::SettingROIList(std::vector<SMeasurementROI> vct)
{
	m_pDlgMeasurement->DisplayROIAllDataToListBox(vct);

	if(m_pDlgMeasurement->IsWindowVisible())
	{
	    long nIndex = m_pDlgMeasurement->GetCurrentDlgSelectIndex();

		CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
		if(!pViewForm)
			return;

		ECameraNum eCam = pViewForm->GetSelectPosition();

		CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
		if(!pHandler)
			return;

		std::vector<SMeasurementKind> vctData;

		pHandler->GetMesurementKindData(vctData);

		if(nIndex >= vctData.size())
			return;

		SettingParam(vctData[nIndex]);
	}
}

void CRegisterPageMeasure::UpdateListBox()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

	m_ListBox.ResetContent();

	CString strMsg;
	CString strMsgCamName;

	eCam == ECameraNum_Upper ? strMsgCamName.Format(_T("Upper")) : strMsgCamName.Format(_T("Lower"));


	std::vector<SMeasurementKind> vctData;
	pHandler->GetMesurementKindData(vctData);

	for(size_t i = 0; i < vctData.size(); i++)
	{
		SMeasurementKind sData = vctData[i];
		strMsg.Format(_T("[%s] %s"), strMsgCamName, sData.strName);
		m_ListBox.AddString(strMsg);
	}
}

HBRUSH CRegisterPageMeasure::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
	switch (nCtlColor)
	{
	case CTLCOLOR_STATIC:
	{
		
		pDC->SetTextColor(WHITE);
		pDC->SetBkColor(RGB(40, 40, 40));

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


	return hbr;

	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
}

void CRegisterPageMeasure::OnBnClickedBtnRegisterPageAdd()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(eCam));
	if(!pHandler)
		return;

 	SMeasurementKind sData;
// 	long nIndex = pViewForm->SetMeasuremetKindDataAdd(sData);

	std::vector<SMeasurementKind> vec;
	pHandler->GetMesurementKindData(vec);
	long nIndex = vec.size();

	SettingParam(sData);

	pViewForm->SetROIDataToMeasurementDlgListBox();

	ShowDlgParam(nIndex, sData.strName);

	//pViewForm->ShowSetedDlgMeasurementParamFromPageMeasurement(nIndex, sData);
}


void CRegisterPageMeasure::OnBnClickedBtnRegisterPageDelete()
{
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

	pHandler->SetMesurementKindDataDelete(nSelect);

	pHandler->SaveMeasurementKindFormIni();

	UpdateListBox();

}


void CRegisterPageMeasure::OnBnClickedBtnRegisterPageEdit()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	OnLbnDblclkListRegisterPageMeasurement();
}

void CRegisterPageMeasure::OnLbnDblclkListRegisterPageMeasurement()
{
// 	if(m_pDlgMeasurement->IsWindowVisible())
// 		m_pDlgMeasurement->ShowWindow(SW_HIDE);

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

	std::vector<SMeasurementKind> vctData;

	pHandler->GetMesurementKindData(vctData);

	if(nSelect >= vctData.size())
		return;

	SettingParam(vctData[nSelect]);

	ShowDlgParam(nSelect, vctData[nSelect].strName);

}

void CRegisterPageMeasure::OnLbnSelchangeListRegisterPageMeasurement()
{
	if(!m_pDlgMeasurement->IsWindowVisible())
		return;

	OnLbnDblclkListRegisterPageMeasurement();
}



