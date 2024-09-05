// DlgEditROI.cpp: 구현 파일
//

#include "stdafx.h"
#include "DlgLineGaugeParameter.h"


// CDlgLineGaugeParameter 대화 상자

IMPLEMENT_DYNAMIC(CDlgLineGaugeParameter, CDialog)

CDlgLineGaugeParameter::CDlgLineGaugeParameter(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DLG_LINEGAUGE_PARAMETER, pParent)
{
	m_pModelParam = nullptr;
	m_nPolarity = 0;
	m_nSidePolarity = 0;
}

CDlgLineGaugeParameter::~CDlgLineGaugeParameter()
{
	m_fontSheet.DeleteObject();
	m_fontStatic.DeleteObject();
}


void CDlgLineGaugeParameter::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_SPREAD_SETTING_PARAMETER, m_Sheet);
	DDX_Control(pDX, IDC_STATIC_ROI_NAME, m_sSTATIC);
	DDX_Control(pDX, IDC_EDIT_ROI_NAME, m_EditName);

	DDX_Control(pDX, IDC_CHECK_LINEGAUGE_TYPE, m_CheckUseRavid);

	DDX_Control(pDX, IDC_CHECK_LINEGAUGE_COLOR1, m_CheckBox[eColorImageType_R]);
	DDX_Control(pDX, IDC_CHECK_LINEGAUGE_COLOR2, m_CheckBox[eColorImageType_G]);
	DDX_Control(pDX, IDC_CHECK_LINEGAUGE_COLOR3, m_CheckBox[eColorImageType_B]);

}



BEGIN_MESSAGE_MAP(CDlgLineGaugeParameter, CDialog)
	//ON_WM_CTLCOLOR()
		
	ON_WM_TIMER()
	ON_NOTIFY(NM_DBLCLK, IDC_SPREAD_SETTING_PARAMETER, OnSheetDblClick)
	ON_NOTIFY(NM_CLICK, IDC_SPREAD_SETTING_PARAMETER, OnSheetClick)
	ON_NOTIFY(NM_RCLICK, IDC_SPREAD_SETTING_PARAMETER, OnSheetRClick)
	ON_NOTIFY(GVN_BEGINLABELEDIT, IDC_SPREAD_SETTING_PARAMETER, OnSheetStartEdit)
	ON_NOTIFY(GVN_ENDLABELEDIT, IDC_SPREAD_SETTING_PARAMETER, OnSheetEndEdit)
	ON_NOTIFY(GVN_SELCHANGING, IDC_SPREAD_SETTING_PARAMETER, OnSheetStartSelChange)
	ON_NOTIFY(GVN_SELCHANGED, IDC_SPREAD_SETTING_PARAMETER, OnSheetEndSelChange)
	ON_NOTIFY(GVN_BEGINDRAG, IDC_SPREAD_SETTING_PARAMETER, OnSheetBeginDrag)

	//ON_BN_CLICKED(IDC_BUTTON_ADDROI, &CDlgLineGaugeParameter::OnBnClickedButtonAddroi)

	ON_BN_CLICKED(IDC_BUTTON_LGP_SAVE, &CDlgLineGaugeParameter::OnBnClickedButtonLgpSave)
	ON_BN_CLICKED(IDC_BUTTON_LGP_CLOSE, &CDlgLineGaugeParameter::OnBnClickedButtonLgpClose)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_CHECK_LINEGAUGE_TYPE, &CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeType)
	ON_BN_CLICKED(IDC_CHECK_LINEGAUGE_COLOR1, &CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor1)
	ON_BN_CLICKED(IDC_CHECK_LINEGAUGE_COLOR2, &CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor2)
	ON_BN_CLICKED(IDC_CHECK_LINEGAUGE_COLOR3, &CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor3)
END_MESSAGE_MAP()


// CDlgLineGaugeParameter 메시지 처리기


BOOL CDlgLineGaugeParameter::OnInitDialog()
{
	CDialog::OnInitDialog();


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

	m_sSTATIC.SetFontName(_T("Tahoma"));
	m_sSTATIC.SetFontBold(false);
	m_sSTATIC.SetTextColor(BLACK);
	m_sSTATIC.SetBkColor(RGB(240, 240, 240));
	m_sSTATIC.SetFontSize(15);

	InitSheet();
	SetTimer(0, 100, nullptr);
	return TRUE;  // return TRUE unless you set the focus to a control
}

HBRUSH CDlgLineGaugeParameter::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.
	switch (nCtlColor)
	{
	case CTLCOLOR_STATIC:
	{
		pDC->SetTextColor(BLACK);
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

void CDlgLineGaugeParameter::OnSheetDblClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	NM_GRIDVIEW* pItem = (NM_GRIDVIEW*)pNotifyStruct;
	CString strMsg;
	strMsg.Format(_T("Double Clicked on row %d, col %d\n"), pItem->iRow, pItem->iColumn);

}

void CDlgLineGaugeParameter::OnSheetClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgLineGaugeParameter::OnSheetRClick(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgLineGaugeParameter::OnSheetStartEdit(NMHDR * pNotifyStruct, LRESULT * pResult)
{
	ApplyAdjustedData();

}

void CDlgLineGaugeParameter::OnSheetEndEdit(NMHDR * pNotifyStruct, LRESULT * pResult)
{

	ApplyAdjustedData();

}

void CDlgLineGaugeParameter::OnSheetStartSelChange(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

void CDlgLineGaugeParameter::OnSheetEndSelChange(NMHDR * pNotifyStruct, LRESULT * pResult)
{

}

void CDlgLineGaugeParameter::OnSheetBeginDrag(NMHDR * pNotifyStruct, LRESULT * pResult)
{
}

bool CDlgLineGaugeParameter::InitSheet()
{
	USES_CONVERSION;

	bool bReturn = false;

	do
	{
		UpdateData();
		
		m_Sheet.GetDefaultCell(FALSE, FALSE)->SetBackClr(RGB(0xFF, 0xFF, 0xFF));

		const int nFixedCols = 1;
		const int nFixedRows = 1;
		const int nCols = 2;
		const int nRows = 11;

		const char* lpszTitle[nCols] = { "Parameter Type", "Parameter  Value" };
		const char* lpszMeasure[nRows] = { "", "Transition Choice", "Transition Type", "Find Line Direction",
			"Smoothing", "Threshold", "Thicknes", "MinimumAmplitude", "SamplingStep" ,"Num of pass", "OutLiersThreshold"};

		m_Sheet.SetAutoSizeStyle();


		RECT rc;
		ZeroMemory(&rc, sizeof(rc));
		m_Sheet.GetClientRect(&rc);

		double dblWeight = 0.f;
		dblWeight = (rc.right - rc.left) / nCols;
		for(int i = 0; i < nCols; ++i)
			m_Sheet.SetColumnWidth(i, (int)dblWeight);

		double dblHeight = 0.f;
		dblHeight = (rc.bottom - rc.top) / nRows;

		for(int j = 0; j < nRows; ++j)
			m_Sheet.SetRowHeight(j, (int)dblHeight);


		m_Sheet.EnableSelection(TRUE);
		m_Sheet.SetRowResize(FALSE);
		m_Sheet.SetColumnResize(FALSE);
		m_Sheet.SetEditable(TRUE);
		m_Sheet.SetFixedColumnSelection(FALSE);


		m_Sheet.SetFont(&m_fontSheet);

		m_Sheet.SetRowCount(nRows);
		m_Sheet.SetColumnCount(nCols);
		m_Sheet.SetFixedRowCount(nFixedRows);
		m_Sheet.SetFixedColumnCount(nFixedCols);
		m_Sheet.UsingScrollBars(GVL_BOTH, false);


		// fill rows/cols with text
		for(int row = 0; row < m_Sheet.GetRowCount(); row++)
		{
			for(int col = 0; col < m_Sheet.GetColumnCount(); col++)
			{
				CString str;

				SRavidSheetCellInfo sCellInfo;

				sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
				sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
				sCellInfo.nRow = row;
				sCellInfo.nCol = col;


				COLORREF crBackGround = WHITE;
				COLORREF crFont = BLACK;

				if(row < nFixedRows)
				{
					str.Format(_T("%s"), A2T(lpszTitle[col]));
					crBackGround = RGB(255, 219, 140);
				}
				else if(col < nFixedCols)
				{
					str.Format(_T("%s"), A2T(lpszMeasure[row]));
					crBackGround = RGB(195, 225, 255);
				}
				else if(row == 1 && col ==  1)
				{
					m_Sheet.SetCellType(row, col, RUNTIME_CLASS(CRavidSheetCellCombo));
					CRavidSheetCellCombo *pCell = (CRavidSheetCellCombo*)m_Sheet.GetCell(row, col);

					CStringArray astr;
					astr.Add(_T("Transition Choice_Begin"));
					astr.Add(_T("Transition Choice_End"));
					astr.Add(_T("Transition Choice_LargestAmplitude"));
					astr.Add(_T("Transition Choice_LargestArea"));
					astr.Add(_T("Transition Choice_Closest"));
			
					pCell->SetOptions(astr);
					pCell->SetStyle(CBS_DROPDOWN);
					pCell->SetCurSel(0);
				}
				else if(row == 2 && col == 1)
				{
					m_Sheet.SetCellType(row, col, RUNTIME_CLASS(CRavidSheetCellCombo));
					CRavidSheetCellCombo *pCell = (CRavidSheetCellCombo*)m_Sheet.GetCell(row, col);

					CStringArray astr;
					astr.Add(_T("Transition Type_BW"));
					astr.Add(_T("Transition Type_WB"));
					astr.Add(_T("Transition Type_BWorWB"));
					astr.Add(_T("Transition Type_BWB"));
					astr.Add(_T("Transition Type_WBW"));

					pCell->SetOptions(astr);
					pCell->SetStyle(CBS_DROPDOWN);
					pCell->SetCurSel(0);
				}
				else if(row == 3 && col == 1)
				{
					m_Sheet.SetCellType(row, col, RUNTIME_CLASS(CRavidSheetCellCombo));
					CRavidSheetCellCombo *pCell = (CRavidSheetCellCombo*)m_Sheet.GetCell(row, col);

					CStringArray astr;
					astr.Add(_T("Top to bottom"));
					astr.Add(_T("Left to right"));
					astr.Add(_T("Bottom to top"));
					astr.Add(_T("Right to left"));
					astr.Add(_T("Angle adjustment"));

					pCell->SetOptions(astr);
					pCell->SetStyle(CBS_DROPDOWN);
					pCell->SetCurSel(0);
				}

				else
					str.Empty();

				sCellInfo.strText = str;

				m_Sheet.SetItem(&sCellInfo);

				m_Sheet.SetItemBkColour(row, col, crBackGround);
				m_Sheet.SetItemFgColour(row, col, crFont);

				m_Sheet.SetItemFormat(row, col, sCellInfo.dwFormat);
			}
		}

		UpdateData(FALSE);
		Invalidate();

		bReturn = true;
	}
	while(false);

	return bReturn;
}

void CDlgLineGaugeParameter::DisplayDataToSheet(SMeasurementROI sData)
{
	do 
	{
		CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
		if(!pViewForm)
			return;

		ECameraNum eCam = pViewForm->GetSelectPosition();

		CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

		if(!pViewImage)
			return;

		sFindEdgeLine sLineData = sData.sLineParams;

		m_bCheckRavidUse = sLineData.bRavidLineUse;
		m_CheckUseRavid.SetCheck(m_bCheckRavidUse);



		for(int i = 0; i < eColorImageType_Count; i ++)
		{
			if(sLineData.eColorType == (1 << i))
				m_bCheckBox[i] = true;
			else
				m_bCheckBox[i] = false;

			m_CheckBox[i].SetCheck(m_bCheckBox[i]);

		}



		CRavidSheetCellCombo *pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_TransitionChoice, 1);
		if(pCellCombo)
			pCellCombo->SetCurSel(sLineData.eTransitionChoice);
		
		pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_TransitionType, 1);
		if(pCellCombo)
			pCellCombo->SetCurSel(sLineData.eTransitionType);

		pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_FindLineDir, 1);
		if(pCellCombo)
			pCellCombo->SetCurSel(sLineData.eFindDir);

	
		CString str;
		str.Format(_T("%d"),sLineData.nSmoothing);
		m_Sheet.SetItemText(ESheetContent_Smoothing, 1, str);

		str.Format(_T("%d"), sLineData.nThreshold);
		m_Sheet.SetItemText(ESheetContent_Threshold, 1, str);

		str.Format(_T("%d"), sLineData.nThicknes);
		m_Sheet.SetItemText(ESheetContent_Thicknes, 1, str);

		str.Format(_T("%d"), sLineData.nMinimumAmplitude);
		m_Sheet.SetItemText(ESheetContent_MinimumAmplitude, 1, str);

		str.Format(_T("%d"), sLineData.nSamplingStep);
		m_Sheet.SetItemText(ESheetContent_SamplingStep, 1, str);

		str.Format(_T("%d"), sLineData.nNumOfPass);
		m_Sheet.SetItemText(ESheetContent_NumOfPass, 1, str);

		str.Format(_T("%3.f"), sLineData.dblOutLiersThreshold);
		m_Sheet.SetItemText(ESheetContent_OutLiersThreshold, 1, str);

		pViewImage->SetLineMeasurementParam(sData);
	
		m_Sheet.Invalidate(TRUE);

	} while (false);

}

sFindEdgeLine CDlgLineGaugeParameter::GetDisplayedDataOnSheet()
{
	sFindEdgeLine sLineDataReturn;

	do
	{
		CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
		if(!pViewForm)
			return sLineDataReturn;

		ECameraNum eCam = pViewForm->GetSelectPosition();

		CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

		if(!pViewImage)
			return sLineDataReturn;
		

		CRavidSheetCellCombo *pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_TransitionChoice, 1);
		if(pCellCombo)
			sLineDataReturn.eTransitionChoice = (CLineGauge::ETransitionChoice)pCellCombo->GetCurSel();

		pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_TransitionType, 1);
		if(pCellCombo)
			sLineDataReturn.eTransitionType = (CLineGauge::ETransitionType)pCellCombo->GetCurSel();

		pCellCombo = (CRavidSheetCellCombo*)m_Sheet.GetCell(ESheetContent_FindLineDir, 1);
		if(pCellCombo)
			sLineDataReturn.eFindDir = (eFindLineDir)pCellCombo->GetCurSel();


		CString str;
		str = m_Sheet.GetItemText(ESheetContent_Smoothing, 1);
		sLineDataReturn.nSmoothing = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_Threshold, 1);
		sLineDataReturn.nThreshold = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_Thicknes, 1);
		sLineDataReturn.nThicknes = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_MinimumAmplitude, 1);
		sLineDataReturn.nMinimumAmplitude = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_SamplingStep, 1);
		sLineDataReturn.nSamplingStep = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_NumOfPass, 1);
		sLineDataReturn.nNumOfPass = _ttoi(str);

		str = m_Sheet.GetItemText(ESheetContent_OutLiersThreshold, 1);
		sLineDataReturn.dblOutLiersThreshold = _ttof(str);
	}
	while(false);

	return sLineDataReturn;
}


void CDlgLineGaugeParameter::DisplayROINameToEditBox(long nIndex, CString strName)
{
// 	CWnd* pWnd = GetDlgItem(IDC_STATIC_ROI_NAME);
// 	if(!pWnd)
// 		return;
	m_sSTATIC.SetText(_T(""));


	CString strNum;
	strNum.Format(_T("[%d]"), nIndex);
	m_nSelectROIIndex = nIndex;

	m_sSTATIC.SetText(_T("ROI Name") + strNum);
	m_sSTATIC.Invalidate(TRUE);
	//pWnd->SetWindowText(_T("ROI Name") + strNum);

	m_EditName.SetWindowTextW(strName);

}

void CDlgLineGaugeParameter::ApplyAdjustedData()
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

	SMeasurementROI SMeasurementData = pViewImage->GetLineMeasurementParam(); //ROI 가 조정되었으니 ViewIamge에서 가져온다

	CRavidQuadrangle<double> rqdTemp(SMeasurementData.sLineParams.rqdROI);
	SMeasurementData.sLineParams = GetDisplayedDataOnSheet();
	SMeasurementData.sLineParams.rqdROI = rqdTemp;
	SMeasurementData.sLineParams.bRavidLineUse = m_bCheckRavidUse;

	int nTemp = 0;
	for(int i= 0; i < eColorImageType_Count; i++)
	{
		if(m_bCheckBox[i])
			nTemp += (1 << i);
		
	}
	SMeasurementData.sLineParams.eColorType = eColorImageCalType(nTemp);


	if(m_sAlignData.bResult)
		SMeasurementData.sLineParams.sAlignData = m_sAlignData;


	CString strTempname = SMeasurementData.strName;
	m_EditName.GetWindowTextW(SMeasurementData.strName);
	bool bListBoxUpdate = true;
	if(strTempname == SMeasurementData.strName)
		bListBoxUpdate = false;

	pViewImage->SetLineMeasurementParam(SMeasurementData);

	pViewForm->SetROIDataAdjustedSave(m_nSelectROIIndex, SMeasurementData);

	if(bListBoxUpdate)
		pViewForm->GetPageMarkROI()->UpdateListBox();

	pViewForm->SetROIDataToMeasurementDlgListBox();

}

BOOL CDlgLineGaugeParameter::PreTranslateMessage(MSG* pMsg)
{
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

void CDlgLineGaugeParameter::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	switch(nIDEvent)
	{
	case 0:
		{
			KillTimer(nIDEvent);
			InitSheet();
		}
	default:
		break;

	}
	CDialog::OnTimer(nIDEvent);
}

void CDlgLineGaugeParameter::OnBnClickedButtonLgpSave()
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
		AfxMessageBox(_T("Please enter Box name"));
		return;
	}

	ApplyAdjustedData();

	//pViewImage->OnImagecontrol2Delete();
}

void CDlgLineGaugeParameter::OnBnClickedButtonLgpClose()
{
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

	if(!pViewImage)
		return;

	pViewImage->OnImagecontrol2Delete();
	
	OnOK();
}


void CDlgLineGaugeParameter::OnClose()
{

	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

	ECameraNum eCam = pViewForm->GetSelectPosition();

	CImageViewTeaching* pViewImage = dynamic_cast<CImageViewTeaching*>(CUIManager::FindView(typeid(CImageViewTeaching), EViewNo_ImageViewTeahcingUpper + eCam));

	if(!pViewImage)
		return;

	pViewImage->OnImagecontrol2Delete();

	CDialog::OnClose();
}


void CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeType()
{
	m_bCheckRavidUse = m_CheckUseRavid.GetCheck();


	ApplyAdjustedData();
}


void CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor1()
{

	m_bCheckBox[eColorImageType_R] = m_CheckBox[eColorImageType_R].GetCheck();

	bool bCheck = true;
	for(int i = 0; i < eColorImageType_Count; i++)
	{
		if(m_bCheckBox[i])
			bCheck &= false; 
	}

	if(bCheck)
	{
		m_bCheckBox[eColorImageType_R] = true;
		m_CheckBox[eColorImageType_R].SetCheck(m_bCheckBox[eColorImageType_R]);
	}


// 	m_bCheckBox[eColorImageType_G] = !m_bCheckBox[eColorImageType_R];
// 	m_bCheckBox[eColorImageType_B] = !m_bCheckBox[eColorImageType_R];
// 
// 	m_CheckBox[eColorImageType_G].SetCheck(m_bCheckBox[eColorImageType_G]);
// 	m_CheckBox[eColorImageType_B].SetCheck(m_bCheckBox[eColorImageType_B]);

	ApplyAdjustedData();

}


void CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor2()
{
	m_bCheckBox[eColorImageType_G] = m_CheckBox[eColorImageType_G].GetCheck();

	bool bCheck = true;
	for(int i = 0; i < eColorImageType_Count; i++)
	{
		if(m_bCheckBox[i])
			bCheck &= false;
	}

	if(bCheck)
	{
		m_bCheckBox[eColorImageType_G] = true;
		m_CheckBox[eColorImageType_G].SetCheck(m_bCheckBox[eColorImageType_G]);
	}

// 	m_bCheckBox[eColorImageType_R] = !m_bCheckBox[eColorImageType_G];
// 	m_bCheckBox[eColorImageType_B] = !m_bCheckBox[eColorImageType_G];
// 
// 	m_CheckBox[eColorImageType_R].SetCheck(m_bCheckBox[eColorImageType_R]);
// 	m_CheckBox[eColorImageType_B].SetCheck(m_bCheckBox[eColorImageType_B]);

	ApplyAdjustedData();

}


void CDlgLineGaugeParameter::OnBnClickedCheckLinegaugeColor3()
{
	m_bCheckBox[eColorImageType_B] = m_CheckBox[eColorImageType_B].GetCheck();

	bool bCheck = true;
	for(int i = 0; i < eColorImageType_Count; i++)
	{
		if(m_bCheckBox[i])
			bCheck &= false;
	}

	if(bCheck)
	{
		m_bCheckBox[eColorImageType_B] = true;
		m_CheckBox[eColorImageType_B].SetCheck(m_bCheckBox[eColorImageType_B]);
	}

// 	m_bCheckBox[eColorImageType_R] = !m_bCheckBox[eColorImageType_B];
// 	m_bCheckBox[eColorImageType_G] = !m_bCheckBox[eColorImageType_B];
// 
// 	m_CheckBox[eColorImageType_R].SetCheck(m_bCheckBox[eColorImageType_R]);
// 	m_CheckBox[eColorImageType_G].SetCheck(m_bCheckBox[eColorImageType_G]);

	ApplyAdjustedData();

}
