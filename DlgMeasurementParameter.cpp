// DlgMeasurementParameter.cpp: 구현 파일
//

#include "stdafx.h"
#include "DlgMeasurementParameter.h"

// CDlgMeasurementParameter 대화 상자

IMPLEMENT_DYNAMIC(CDlgMeasurementParameter, CDialog)

CDlgMeasurementParameter::CDlgMeasurementParameter(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_MEASUREMENT_PARAMETER, pParent)
{

}

CDlgMeasurementParameter::~CDlgMeasurementParameter()
{
}

void CDlgMeasurementParameter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SPREAD_MEASUREMENT_TYPE, m_Sheet[eSheetType_TypeInfo]);
	DDX_Control(pDX, IDC_SPREAD_MEASUREMENT_PARAMETER, m_Sheet[eSheetType_ParamInfo]);
	DDX_Control(pDX, IDC_LIST_MEASUREMENT_LIST1, m_ListBox[eListBoxType_SelectedROI1]);
	DDX_Control(pDX, IDC_LIST_MEASUREMENT_LIST2, m_ListBox[eListBoxType_SelectedROI2]);
	DDX_Control(pDX, IDC_LIST_MEASUREMENT_LIST3, m_ListBox[eListBoxType_SelectedROI3]);
	DDX_Control(pDX, IDC_LIST_MEASUREMENT_LISTALL, m_ListBox[eListBoxType_AllROI]);

	DDX_Control(pDX, IDC_EDIT_MEASUREMENT_NAME, m_EditName);

	DDX_Control(pDX, IDC_CHECK_MEASUEMENT1, m_CheckMeasurement);
	DDX_Control(pDX, IDC_CHECK_MEASUEMENT2, m_CheckByPass);
}


BEGIN_MESSAGE_MAP(CDlgMeasurementParameter, CDialog)
	ON_NOTIFY(NM_DBLCLK, IDC_SPREAD_MEASUREMENT_TYPE, OnSheetDblClick_Type)
	ON_NOTIFY(NM_CLICK, IDC_SPREAD_MEASUREMENT_TYPE, OnSheetClick_Type)

	ON_NOTIFY(NM_DBLCLK, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetDblClick)
	ON_NOTIFY(NM_CLICK, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetClick)
	ON_NOTIFY(NM_RCLICK, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetRClick)
	ON_NOTIFY(GVN_BEGINLABELEDIT, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetStartEdit)
	ON_NOTIFY(GVN_ENDLABELEDIT, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetEndEdit)
	ON_NOTIFY(GVN_SELCHANGING, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetStartSelChange)
	ON_NOTIFY(GVN_SELCHANGED, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetEndSelChange)
	ON_NOTIFY(GVN_BEGINDRAG, IDC_SPREAD_MEASUREMENT_PARAMETER, OnSheetBeginDrag)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON_MEASUREMENT_ADD1, &CDlgMeasurementParameter::OnBnClickedButtonMeasurementAdd1)
	ON_BN_CLICKED(IDC_BUTTON_MEASUREMENT_MINUS1, &CDlgMeasurementParameter::OnBnClickedButtonMeasurementMinus1)
	ON_BN_CLICKED(IDC_BUTTON_MEASUREMENT_ADD2, &CDlgMeasurementParameter::OnBnClickedButtonMeasurementAdd2)
	ON_BN_CLICKED(IDC_BUTTON_MEASUREMENT_MINUS2, &CDlgMeasurementParameter::OnBnClickedButtonMeasurementMinus2)
	ON_BN_CLICKED(IDC_BUTTON_LGP_SAVE, &CDlgMeasurementParameter::OnBnClickedButtonLgpSave)
	ON_BN_CLICKED(IDC_BUTTON_LGP_CLOSE, &CDlgMeasurementParameter::OnBnClickedButtonLgpClose)
	ON_BN_CLICKED(IDC_CHECK_MEASUEMENT1, &CDlgMeasurementParameter::OnBnClickedCheckMeasuement1)
	ON_BN_CLICKED(IDC_CHECK_MEASUEMENT2, &CDlgMeasurementParameter::OnBnClickedCheckMeasuement2)
END_MESSAGE_MAP()


// CDlgMeasurementParameter 메시지 처리기
BOOL CDlgMeasurementParameter::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다
	::GetObject((HFONT)GetStockObject(DEFAULT_GUI_FONT), sizeof(m_lf), &m_lf);

	wcscpy_s(m_lf.lfFaceName, _T("Tahoma"));
	m_lf.lfHeight = 15;
	m_lf.lfWidth = 5;
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

	m_fontSheet.CreateFontIndirect(&m_lf);

	InitSheetTypeInfo();
	InitSheetParamInfo();

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


BOOL CDlgMeasurementParameter::DestroyWindow()
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	return CDialog::DestroyWindow();
}


void CDlgMeasurementParameter::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CDialog::OnTimer(nIDEvent);
}

void CDlgMeasurementParameter::OnSheetDblClick_Type(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Double Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);
	
	COLORREF crBackGround = WHITE;
	COLORREF crCurrently = m_Sheet[eSheetType_TypeInfo].GetItemBkColour(pItem->iRow, pItem->iColumn);
	
	if(crBackGround == crCurrently)
		m_sData.bType[pItem->iColumn] = true;
	else
		m_sData.bType[pItem->iColumn] = false;

	if(m_sData.bType[pItem->iColumn])
		crBackGround = RGB(255, 219, 140);

	m_Sheet[eSheetType_TypeInfo].SetItemBkColour(pItem->iRow, pItem->iColumn, crBackGround);
	m_Sheet[eSheetType_TypeInfo].Invalidate();


	ApplyAdjustedData();

}

void CDlgMeasurementParameter::OnSheetClick_Type(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);
}

void CDlgMeasurementParameter::OnSheetDblClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Double Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

}

void CDlgMeasurementParameter::OnSheetClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgMeasurementParameter::OnSheetRClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgMeasurementParameter::OnSheetStartEdit(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnSheetEndEdit(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnSheetStartSelChange(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgMeasurementParameter::OnSheetEndSelChange(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgMeasurementParameter::OnSheetBeginDrag(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

bool CDlgMeasurementParameter::InitSheetTypeInfo()
{
	USES_CONVERSION;

	bool bReturn = false;

	do
	{
		UpdateData();

		m_Sheet[eSheetType_TypeInfo].GetDefaultCell(FALSE, FALSE)->SetBackClr(RGB(0xFF, 0xFF, 0xFF));

		const int nFixedCols = 0;
		const int nFixedRows = 0;
		const int nCols = 7;
		const int nRows = 1;

		const char* lpszTitle[nCols] = { "Alignment", "Size", "Position", "Area", "Sepa.", "Cell", "Line" };
		const char* lpszMeasure[nRows] = { "" };

		m_Sheet[eSheetType_TypeInfo].SetAutoSizeStyle();


		RECT rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet[eSheetType_TypeInfo].GetClientRect(&rc);

		double dblWeight = 0.f;
		dblWeight = (rc.right - rc.left) / nCols;
		for(int i = 0; i < nCols; ++i)
			m_Sheet[eSheetType_TypeInfo].SetColumnWidth(i, (int)dblWeight);

		double dblHeight = 0.f;
		dblHeight = (rc.bottom - rc.top) / nRows;

		for(int j = 0; j < nRows; ++j)
			m_Sheet[eSheetType_TypeInfo].SetRowHeight(j, (int)dblHeight);


		m_Sheet[eSheetType_TypeInfo].EnableSelection(FALSE);
		m_Sheet[eSheetType_TypeInfo].SetRowResize(FALSE);
		m_Sheet[eSheetType_TypeInfo].SetColumnResize(FALSE);
		m_Sheet[eSheetType_TypeInfo].SetEditable(FALSE);
		m_Sheet[eSheetType_TypeInfo].SetFixedColumnSelection(FALSE);


		m_Sheet[eSheetType_TypeInfo].SetFont(&m_fontSheet);

		m_Sheet[eSheetType_TypeInfo].SetRowCount(nRows);
		m_Sheet[eSheetType_TypeInfo].SetColumnCount(nCols);
		m_Sheet[eSheetType_TypeInfo].SetFixedRowCount(nFixedRows);
		m_Sheet[eSheetType_TypeInfo].SetFixedColumnCount(nFixedCols);
		m_Sheet[eSheetType_TypeInfo].UsingScrollBars(GVL_BOTH, false);


		// fill rows/cols with text
		for(int row = 0; row < m_Sheet[eSheetType_TypeInfo].GetRowCount(); row++)
		{
			for(int col = 0; col < m_Sheet[eSheetType_TypeInfo].GetColumnCount(); col++)
			{
				CString str;

				SRavidSheetCellInfo sCellInfo;

				sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
				sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
				sCellInfo.nRow = row;
				sCellInfo.nCol = col;

				COLORREF crBackGround = WHITE;
				COLORREF crFont = BLACK;

				str.Format(_T("%s"), A2T(lpszTitle[col]));

				if(m_bMeasurementType[col])	
					crBackGround = RGB(255, 219, 140);

				sCellInfo.strText = str;

				m_Sheet[eSheetType_TypeInfo].SetItem(&sCellInfo);
				m_Sheet[eSheetType_TypeInfo].SetItemBkColour(row, col, crBackGround);
				m_Sheet[eSheetType_TypeInfo].SetItemFgColour(row, col, crFont);
				m_Sheet[eSheetType_TypeInfo].SetItemFormat(row, col, sCellInfo.dwFormat);
			}
		}

		UpdateData(FALSE);

		Invalidate();

		bReturn = true;
	}
	while(false);

	return bReturn;
}

bool CDlgMeasurementParameter::InitSheetParamInfo()
{
	USES_CONVERSION;

	bool bReturn = false;

	do
	{
		UpdateData();

		m_Sheet[eSheetType_ParamInfo].GetDefaultCell(FALSE, FALSE)->SetBackClr(RGB(0xFF, 0xFF, 0xFF));

		const int nFixedCols = 1;
		const int nFixedRows = 0;
		const int nCols = 2;
		const int nRows = 5;

		const char* lpszTitle[nCols] = { "" };
		const char* lpszMeasure[nRows] = { "Reference", "USL", "LSL", "Offset", "Scale"  };

		m_Sheet[eSheetType_ParamInfo].SetAutoSizeStyle();

		RECT rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet[eSheetType_ParamInfo].GetClientRect(&rc);

		double dblWeight = 0.f;
		dblWeight = (rc.right - rc.left) / nCols;
		for(int i = 0; i < nCols; ++i)
			m_Sheet[eSheetType_ParamInfo].SetColumnWidth(i, (int)dblWeight);

		double dblHeight = 0.f;
		dblHeight = (rc.bottom - rc.top) / nRows;

		for(int j = 0; j < nRows; ++j)
			m_Sheet[eSheetType_ParamInfo].SetRowHeight(j, (int)dblHeight);


		m_Sheet[eSheetType_ParamInfo].EnableSelection(TRUE);
		m_Sheet[eSheetType_ParamInfo].SetRowResize(FALSE);
		m_Sheet[eSheetType_ParamInfo].SetColumnResize(FALSE);
		m_Sheet[eSheetType_ParamInfo].SetEditable(TRUE);
		m_Sheet[eSheetType_ParamInfo].SetFixedColumnSelection(FALSE);


		m_Sheet[eSheetType_ParamInfo].SetFont(&m_fontSheet);

		m_Sheet[eSheetType_ParamInfo].SetRowCount(nRows);
		m_Sheet[eSheetType_ParamInfo].SetColumnCount(nCols);
		m_Sheet[eSheetType_ParamInfo].SetFixedRowCount(nFixedRows);
		m_Sheet[eSheetType_ParamInfo].SetFixedColumnCount(nFixedCols);
		m_Sheet[eSheetType_ParamInfo].UsingScrollBars(GVL_BOTH, false);


		// fill rows/cols with text
		for(int row = 0; row < m_Sheet[eSheetType_ParamInfo].GetRowCount(); row++)
		{
			for(int col = 0; col < m_Sheet[eSheetType_ParamInfo].GetColumnCount(); col++)
			{
				CString str;

				SRavidSheetCellInfo sCellInfo;

				sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
				sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
				sCellInfo.nRow = row;
				sCellInfo.nCol = col;

				COLORREF crBackGround = WHITE;
				COLORREF crFont = BLACK;

				if(col == 0)
					str.Format(_T("%s"), A2T(lpszMeasure[row]));

				sCellInfo.strText = str;
				m_Sheet[eSheetType_ParamInfo].SetItem(&sCellInfo);
				m_Sheet[eSheetType_ParamInfo].SetItemBkColour(row, col, crBackGround);
				m_Sheet[eSheetType_ParamInfo].SetItemFgColour(row, col, crFont);
				m_Sheet[eSheetType_ParamInfo].SetItemFormat(row, col, sCellInfo.dwFormat);
			}
		}

		UpdateData(FALSE);

		Invalidate();

		bReturn = true;
	}
	while(false);

	return bReturn;
}

void CDlgMeasurementParameter::DisplayDataToSheetAndListBox(SMeasurementKind sData)
{

	if(sData.bUse)
		m_CheckMeasurement.SetCheck(true);
	else
		m_CheckByPass.SetCheck(true);

	CString str;
	str.Format(_T("%.3f"), sData.dblReference);
	m_Sheet[eSheetType_ParamInfo].SetItemText(eSheetParamContect_Reference, 1, str);

	str.Format(_T("%.3f"), sData.dblUSL);
	m_Sheet[eSheetType_ParamInfo].SetItemText(eSheetParamContect_USL, 1, str);

	str.Format(_T("%.3f"), sData.dblLSL);
	m_Sheet[eSheetType_ParamInfo].SetItemText(eSheetParamContect_LSL, 1, str);

	str.Format(_T("%.3f"), sData.dblOffset);
	m_Sheet[eSheetType_ParamInfo].SetItemText(eSheetParamContect_Offset, 1, str);

	str.Format(_T("%.3f"), sData.dblScale);
	m_Sheet[eSheetType_ParamInfo].SetItemText(eSheetParamContect_Scale, 1, str);

	m_Sheet[eSheetType_ParamInfo].Invalidate();

	///////////////////////////////////////////////
	for(int i = 0; i < EMeasurementKindType_Count; i++)
	{
		COLORREF crBackGround = WHITE;

		if(sData.bType[i])
			crBackGround = RGB(255, 219, 140);

		m_Sheet[eSheetType_TypeInfo].SetItemBkColour(0, i, crBackGround);
	}

	m_Sheet[eSheetType_TypeInfo].Invalidate();

	m_ListBox[eListBoxType_SelectedROI1].ResetContent();
	m_vctListBox[eListBoxType_SelectedROI1].clear();


	if(sData.strName != _T(""))
		AddListBoxString(eListBoxType_SelectedROI1, sData.sStandard);

	m_ListBox[eListBoxType_SelectedROI2].ResetContent();
	m_vctListBox[eListBoxType_SelectedROI2].clear();

	for(size_t i = 0; i < sData.vctOpponents.size(); i++)
		AddListBoxString(eListBoxType_SelectedROI2, sData.vctOpponents[i]);
	
	m_sData = sData;

	ShowMeasurement();
}

void CDlgMeasurementParameter::DisplayROIAllDataToListBox(std::vector<SMeasurementROI> vctData)
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	m_ListBox[eListBoxType_AllROI].ResetContent();
	m_vctListBox[eListBoxType_AllROI].clear();
	for(size_t i = 0; i < vctData.size(); i++)
		AddListBoxString(eListBoxType_AllROI, vctData[i]);
	
}

void CDlgMeasurementParameter::DisplayMeasurementKindToEditBox(long nIndex, CString strName)
{
	m_EditName.SetWindowTextW(strName);
	m_nSelectIndex = nIndex;
}

void CDlgMeasurementParameter::AddListBoxString(eListBoxType eType, SMeasurementROI sData)
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;
	ECameraNum eCam = pViewForm->GetSelectPosition();

	CString strMsg;
	CString strMsgCamName;

	eCam == ECameraNum_Upper ? strMsgCamName.Format(_T("Upper")) : strMsgCamName.Format(_T("Lower"));

	strMsg.Format(_T("[%s] %s"), strMsgCamName, sData.strName);
	m_ListBox[eType].AddString(strMsg);
	m_vctListBox[eType].push_back(sData);
}

void CDlgMeasurementParameter::DeleteListBoxString(eListBoxType eType, int nIndex)
{
	m_ListBox[eType].DeleteString(nIndex);

	if(m_vctListBox[eType].size() <= nIndex)
		return;

	auto iters = m_vctListBox[eType].begin() + nIndex;
	m_vctListBox[eType].erase(iters);
}

void CDlgMeasurementParameter::ApplyAdjustedData()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

	if(!pViewImage)
		return;

	CString str;
	m_EditName.GetWindowTextW(str);
	str.Replace(_T(" "), NULL);

	if(str == _T(""))
	{
		//AfxMessageBox(_T("Please enter Box name"));
		return;
	}



	CString strTempname = m_sData.strName;
	SMeasurementKind sData = m_sData;
 	m_EditName.GetWindowTextW(sData.strName);
	bool bListBoxUpdate = true;

	if(strTempname == sData.strName)
		bListBoxUpdate = false;

	sData.bUse = m_CheckMeasurement.GetCheck();

	str = m_Sheet[eSheetType_ParamInfo].GetItemText(eSheetParamContect_Reference, 1);
	sData.dblReference = _ttof(str);

	str = m_Sheet[eSheetType_ParamInfo].GetItemText(eSheetParamContect_USL, 1);
	sData.dblUSL = _ttof(str);

	str = m_Sheet[eSheetType_ParamInfo].GetItemText(eSheetParamContect_LSL, 1);
	sData.dblLSL = _ttof(str);

	str = m_Sheet[eSheetType_ParamInfo].GetItemText(eSheetParamContect_Offset, 1);
	sData.dblOffset = _ttof(str);

	str = m_Sheet[eSheetType_ParamInfo].GetItemText(eSheetParamContect_Scale, 1);
	sData.dblScale = _ttof(str);

	// 기준 ROI 가 하나도 없으면 하나도 없으면 저장되면 안됨.
	SMeasurementROI sROI;
	if(m_vctListBox[eListBoxType_SelectedROI1].size())
		sData.sStandard = m_vctListBox[eListBoxType_SelectedROI1][0];
	else
		sData.sStandard = sROI;

	sData.vctOpponents.clear();
	sData.vctOpponents = m_vctListBox[eListBoxType_SelectedROI2];

	m_sData = sData;

	pViewForm->SetMeasuremetKindDataAdjustedSave(m_nSelectIndex, m_sData);


	if(bListBoxUpdate)
		pViewForm->GetPageMeasure()->UpdateListBox();

	ShowMeasurement();
}

void CDlgMeasurementParameter::ShowMeasurement()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

	if(!pViewImage)
		return;

	pViewImage->GetLayer(1)->Clear();

	CInspection i;
	i.GetMeasurementForRegister(pViewImage->GetImageInfo(), pViewImage, m_sData);
}

void CDlgMeasurementParameter::OnBnClickedButtonMeasurementAdd1()
{
	
	//일단 ROI 1은 하나만

	if(m_ListBox[eListBoxType_SelectedROI1].GetCount() >= 1)
		return;

	long nIndex = m_ListBox[eListBoxType_AllROI].GetCurSel();

	if(nIndex < 0)
		return;

	SMeasurementROI sROI = m_vctListBox[eListBoxType_AllROI][nIndex];

	AddListBoxString(eListBoxType_SelectedROI1, sROI);

	m_sData.sStandard = sROI;

	ApplyAdjustedData();
}


void CDlgMeasurementParameter::OnBnClickedButtonMeasurementMinus1()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	if(!m_ListBox[eListBoxType_SelectedROI1].GetCount())
		return;

	long nIndex = m_ListBox[eListBoxType_SelectedROI1].GetCurSel();

	if(nIndex < 0)
		return;

	DeleteListBoxString(eListBoxType_SelectedROI1, nIndex);

	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnBnClickedButtonMeasurementAdd2()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	long nIndex = m_ListBox[eListBoxType_AllROI].GetCurSel();

	if(nIndex < 0)
		return;

	SMeasurementROI sROI = m_vctListBox[eListBoxType_AllROI][nIndex];

	bool bCheckSame = false;
	for(int i = 0; i < m_vctListBox[eListBoxType_SelectedROI2].size(); i ++)
	{
		if(sROI.strSerialNumber == m_vctListBox[eListBoxType_SelectedROI2][i].strSerialNumber)
		{
			bCheckSame = true;
			AfxMessageBox(_T("You can't add the same box"));
			break;
		}
	}

	if(!bCheckSame)
		AddListBoxString(eListBoxType_SelectedROI2,  sROI);

	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnBnClickedButtonMeasurementMinus2()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	long nIndex = m_ListBox[eListBoxType_SelectedROI2].GetCurSel();

	if(nIndex < 0)
		return;

	DeleteListBoxString(eListBoxType_SelectedROI2, nIndex);

	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnBnClickedButtonLgpSave()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CString str;
	m_EditName.GetWindowTextW(str);
	str.Replace(_T(" "), NULL);

	if(str == _T(""))
	{
		AfxMessageBox(_T("Please enter Box name"));
		return;
	}

	ApplyAdjustedData();
}

void CDlgMeasurementParameter::OnBnClickedButtonLgpClose()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnOK();
}

void CDlgMeasurementParameter::OnBnClickedCheckMeasuement1()
{
	bool b = m_CheckMeasurement.GetCheck();

	b = !b;
	m_CheckMeasurement.SetCheck(!b);
	m_CheckByPass.SetCheck(b);
}

void CDlgMeasurementParameter::OnBnClickedCheckMeasuement2()
{
	bool b = m_CheckByPass.GetCheck();

	b = !b;
	m_CheckByPass.SetCheck(!b);
	m_CheckMeasurement.SetCheck(b);
}


BOOL CDlgMeasurementParameter::PreTranslateMessage(MSG* pMsg)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
		// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	if(WM_KEYDOWN == pMsg->message)
	{
		if(VK_RETURN == pMsg->wParam || VK_ESCAPE == pMsg->wParam)
		{// 엔터 입력 시 다이얼로그 꺼짐 방지
			return TRUE;
		}
	}

	return CDialog::PreTranslateMessage(pMsg);
}
