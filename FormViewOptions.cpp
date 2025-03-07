// OptionsFormView.cpp: 구현 파일
//

#include "stdafx.h"
#include "FormViewOptions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
// CFormViewOptions

IMPLEMENT_DYNCREATE(CFormViewOptions, CRavidFormViewBase)

CFormViewOptions::CFormViewOptions()
	: CRavidFormViewBase(IDD_FORM_OPTIONS)
{

}

CFormViewOptions::~CFormViewOptions()
{
	m_font.DeleteObject();
	m_fontBtn.DeleteObject();

}

void CFormViewOptions::DoDataExchange(CDataExchange* pDX)
{
// 	DDX_Control(pDX, IDC_TOPENG_RESULT_LIST, m_SheetResult);
// 
// 	DDX_Control(pDX, IDC_TOPENG_NG_LIST, m_SheetNgList);

	DDX_Control(pDX, IDC_STATIC_OPTIONS_PROCESSOPTION, m_stcTitle[ELabel_ProcsseOption]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_SYSTEMOPTION, m_stcTitle[ELabel_SystemOption]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_SYSTEMPASSWORD, m_stcTitle[ELabel_SystemPassword]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_LANGUAGE, m_stcTitle[ELabel_Language]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERAINFO, m_stcTitle[ELabel_CameraInfo]);


	DDX_Control(pDX, IDC_STATIC_OPTIONS_SYSTEMOPTION_SAVEDURATION, m_stcName[ELabel_SYSTEMOPTION_SAVEDURATION]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_SYSTEMOPTION_SAVEIMAGEDURATION, m_stcName[ELabel_SYSTEMOPTION_SAVEEIMAGEDURATION]);

	DDX_Control(pDX, IDC_STATIC_OPTIONS_HEIGHTSIZE, m_stcName[ELabel_HeightSize]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_WIDTHSIZE, m_stcName[ELabel_WidthSize]);

	DDX_Control(pDX, IDC_STATIC_OPTIONS_RESOLUTION, m_stcName[ELabel_Resolution]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA, m_stcName[ELabel_Camera]);

	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_X1, m_stcName[ELabel_Camera_CAMERA_X1]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_Y1, m_stcName[ELabel_Camera_CAMERA_Y1]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_X2, m_stcName[ELabel_Camera_CAMERA_X2]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_Y2, m_stcName[ELabel_Camera_CAMERA_Y2]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_X1_DATA, m_stcName[ELabel_Camera_CAMERA_X1_DATA]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_Y1_DATA, m_stcName[ELabel_Camera_CAMERA_Y1_DATA]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_X2_DATA, m_stcName[ELabel_Camera_CAMERA_X2_DATA]);
	DDX_Control(pDX, IDC_STATIC_OPTIONS_CAMERA_Y2_DATA, m_stcName[ELabel_Camera_CAMERA_Y2_DATA]);

	DDX_Control(pDX, IDC_STATIC_OPTIONS_SYSTEMOPTION_JPGSAVECOMPRESSION, m_stcName[ELabel_JPGSave]);

	DDX_Control(pDX, IDC_CHECK_OPTIONS_PROCESSOPTION_CAM1, m_btnCheckBox[ECheck_ProcessOption]);
	DDX_Control(pDX, IDC_CHECK_OPTIONS_PROCESSOPTION_MEASURE_PASS, m_btnCheckBox[ECheck_ProcessOption_Measure]);
	DDX_Control(pDX, IDC_CHECK_OPTIONS_PROCESSOPTION_DEFECTINS, m_btnCheckBox[ECheck_ProcessOption_Defect]);

	DDX_Control(pDX, IDC_CHECK_OPTIONS_SYSTEMOPTION_IMGSAVEOK, m_btnCheckBox[ECheck_ImageSaveOK]);
	DDX_Control(pDX, IDC_CHECK_OPTIONS_SYSTEMOPTION_IMGSAVENG, m_btnCheckBox[ECheck_ImageSaveNG]);

	DDX_Control(pDX, IDC_RADIO_OPTIONS_LANGUAGE_CHINESS, m_btnRadioBtn[ERadio_Chiness]);
	DDX_Control(pDX, IDC_RADIO_OPTIONS_LANGUAGE_ENGLISH, m_btnRadioBtn[ERadio_English]);
	DDX_Control(pDX, IDC_RADIO_OPTIONS_LANGUAGE_KOREAN, m_btnRadioBtn[ERadio_Korean]);

	DDX_Control(pDX, IDC_RADIO_OPTIONS_SAVE_BMP, m_btnRadioBtn[ERadio_BMP]);
	DDX_Control(pDX, IDC_RADIO_OPTIONS_SAVE_JPG, m_btnRadioBtn[ERadio_JPG]);
	
	DDX_Control(pDX, IDC_BUTTON_OPTIONS_SAVE, m_btnSave);
		
	DDX_Control(pDX, IDC_EDIT_OPTIONS_SYSTEMOPTION_SAVEDURATION, m_edit[EEditName_SaveDuration]);
	DDX_Control(pDX, IDC_EDIT_OPTIONS_SYSTEMOPTION_SAVEIMAGEDURATION, m_edit[EEditName_SaveImageDuration]);
	DDX_Control(pDX, IDC_EDIT_OPTIONS_HEIGHTSIZE_DATA, m_edit[EEditName_HeightSize_Data]);
	DDX_Control(pDX, IDC_EDIT_OPTIONS_WIDTHSIZE_DATA, m_edit[EEditName_WidthSize_Data]);

	DDX_Control(pDX, IDC_EDIT_OPTIONS_SYSTEMOPTION_JPGSAVE_COMPRESSION_DATA, m_edit[EEditName_JpgSave_Data]);

	CRavidFormViewBase::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CFormViewOptions, CRavidFormViewBase)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_OPTIONS_SAVE, &CFormViewOptions::OnBnClickedButtonOptionsSave)
	ON_WM_SIZE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

#ifdef _DEBUG
void CFormViewOptions::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewOptions::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG

void CFormViewOptions::OnInitialUpdate()
{
	__super::OnInitialUpdate();

	CSize szScrollSize(0, 0);
	SetScrollSizes(MM_TEXT, szScrollSize);

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

	//////////////////////////////////////////////////////////////////////////
	m_font.CreateFontIndirect(&m_lf);//정의된 font로 설정 

	m_fontBtn.CreatePointFont(100, _T("MS Shell Dlg"));

	for (int i = 0; i < ELabel_TitleCount; i++)
	{
		m_stcTitle[i].SetFont(&m_font);
		m_stcTitle[i].SetBkColor(BASE_COLOR);

		SetWindowTheme(m_stcTitle[i].m_hWnd, _T(""), _T(""));
	}
	
// 
	for (int i = 0; i < ELabel_NameCount; i++)
	{
		m_stcName[i].SetFont(&m_font);
		m_stcName[i].SetBkColor(DARKGRAY);

		//SetWindowTheme(m_stcName[i].m_hWnd, _T(""), _T(""));

	}
	
	m_stcName[ELabel_Camera_CAMERA_X1_DATA].SetTextColor(RGB(120, 120, 120));
	m_stcName[ELabel_Camera_CAMERA_Y1_DATA].SetTextColor(RGB(120, 120, 120));
	m_stcName[ELabel_Camera_CAMERA_X2_DATA].SetTextColor(RGB(120, 120, 120));
	m_stcName[ELabel_Camera_CAMERA_Y2_DATA].SetTextColor(RGB(120, 120, 120));


	for(int i = 0 ; i < ECheck_NameCount; i++)
	{
		m_btnCheckBox[i].SetFont(&m_font);
		SetWindowTheme(m_btnCheckBox[i].m_hWnd, _T(""), _T(""));

	}
	
	for (int i = 0; i < ERadio_LanguageCount; i++)
	{
		m_btnRadioBtn[i].SetFont(&m_font);
		SetWindowTheme(m_btnRadioBtn[i].m_hWnd, _T(""), _T(""));

	}

	for (int i = 0; i < EEditName_Count; i++)
	{
		m_edit[i].SetFont(&m_font);
		SetWindowTheme(m_edit[i].m_hWnd, _T(""), _T(""));

	}

	m_btnSave.SetFont(&m_fontBtn);
	m_btnSave.SetFaceColor(RGB(40, 40, 40));
	m_btnSave.SetTextColor(WHITE);
// 	m_btnCheckBox.SetFaceColor(RGB(40, 40, 40));
// 	m_CheckBoxProcessOption.Set
// 	m_btnReset.SetFont(&m_fontBtn);
// 	m_btnReset.SetNormalGradient(DEEPDARKGRAY);
// //	m_btnReset.SetColorBg(DEEPDARKGRAY);
// 	m_btnReset.SetColorText(WHITE);
// 
// 	m_stc[ELabel_NGName].SetTextColor(RED);
// 	m_stc[ELabel_OKName].SetTextColor(GREEN);

	////////////////////////////////////////////////////////////////////////


// 	InitSheetResult();
// 	InitSheetNGList();



	InitializeThreadDisplayer();
}
void CFormViewOptions::OnDestroy()
{

	__super::OnDestroy();


	TerminateThreadDisplayer();


}

BOOL CFormViewOptions::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg)
	{
		if (pMsg->message == WM_LBUTTONUP)
		{
		
		}
		if (pMsg->wParam == VK_RETURN)
		{

		}
	}

	return CRavidFormViewBase::PreTranslateMessage(pMsg);
}


bool CFormViewOptions::InitSheetNGList()
{
	USES_CONVERSION;

	bool bReturn = false;


	CRect crSpread;
	ZeroMemory(&crSpread, sizeof(crSpread));
	m_SheetNgList.GetClientRect(&crSpread);

	const int nColsStatistics = 8;
	const int nRowsStatistics = 20;
	const int nFixedCols = 1;
	const int nFixedRows = 1;
	const int nCols = 4;//5
	const int nRows = 20;//4

	m_SheetNgList.SetFont(&m_font);
	m_SheetNgList.GetDefaultCell(FALSE, FALSE)->SetBackClr(BLACK);
	m_SheetNgList.SetRowResize(FALSE);
	m_SheetNgList.SetColumnResize(FALSE);
	m_SheetNgList.EnableSelection(FALSE);
	m_SheetNgList.SetFixedColumnSelection(FALSE);
	m_SheetNgList.SetFixedRowSelection(FALSE);
	m_SheetNgList.SetRowCount(nRowsStatistics);
	m_SheetNgList.SetColumnCount(nColsStatistics);
	m_SheetNgList.SetFixedColumnCount(1);
	m_SheetNgList.SetEditable(FALSE);
	//m_SheetResult.SetFixedRowCount(nRowsStatistics);
	//GVL_NONE, false);
	m_SheetNgList.UsingScrollBars(GVL_BOTH, false);
	//m_SheetNgList.UsingScrollBars(GVL_NONE, false);
	CSize czSpread;
	czSpread.cx = crSpread.right;
	czSpread.cy = crSpread.bottom;
	czSpread.cx -= 2;
	czSpread.cy -= 2;

	int nSizeWidth = crSpread.Width() / (nColsStatistics);
	nSizeWidth -= 40;
	//m_SheetNgList.SetColumnWidth(0, nSizeWidth - 160);
	//m_SheetNgList.SetColumnWidth(1, nSizeWidth - 160);
	//m_SheetNgList.SetColumnWidth(2, nSizeWidth);
	//m_SheetNgList.SetColumnWidth(3, nSizeWidth);
	//m_SheetResult.SetColumnWidth(4, );

	for (int i = 0; i < nColsStatistics; i++)
		m_SheetNgList.SetColumnWidth(i, nSizeWidth);

	for (int i = 0; i < nRowsStatistics; i++)
		m_SheetNgList.SetRowHeight(i, (int)(crSpread.Height() / nRowsStatistics));

	CString strName;
	const char* lpszTitle[nColsStatistics] = { "NO", "CELL", "STAGE","CX","CY","CA","L1","L2"/*, "Count", "Distance"*/ };

	for (int row = 0; row < m_SheetNgList.GetRowCount(); row++)
	{
		for (int col = 0; col < m_SheetNgList.GetColumnCount(); col++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = row;
			sCellInfo.nCol = col;


			COLORREF crBackGround = BLACK;
			COLORREF crFont = WHITE;

			if (row < 1)
			{
				str.Format(_T("%s"), A2T(lpszTitle[col]));
				crBackGround = WHITE;
				crFont = BLACK;
			}
// 			else if (col < 1)
// 			{
// 				str.Format(_T("%d"), row/*A2T(lpszMeasure[row])*/);
// 				crBackGround = BLACK;
// 			}


			sCellInfo.strText = str;

			m_SheetNgList.SetItem(&sCellInfo);

			m_SheetNgList.SetItemBkColour(row, col, crBackGround);
			m_SheetNgList.SetItemFgColour(row, col, crFont);
			m_SheetNgList.SetItemFormat(row, col, sCellInfo.dwFormat);
		}

	}

	Invalidate();


	return bReturn;
}
bool CFormViewOptions::InitSheetResult()
{
	USES_CONVERSION;

	bool bReturn = false;


	CRect crSpread;
	ZeroMemory(&crSpread, sizeof(crSpread));
	m_SheetResult.GetClientRect(&crSpread);

	const int nColsStatistics = 4;
	const int nRowsStatistics = 20;
	const int nFixedCols = 1;
	const int nFixedRows = 1;
	const int nCols = 4;//5
	const int nRows = 20;//4
	m_SheetResult.SetFont(&m_font);
	m_SheetResult.GetDefaultCell(FALSE, FALSE)->SetBackClr(BLACK);
	m_SheetResult.SetRowResize(FALSE);
	m_SheetResult.SetColumnResize(FALSE);
	m_SheetResult.EnableSelection(FALSE);
	m_SheetResult.SetFixedColumnSelection(FALSE);
	m_SheetResult.SetFixedRowSelection(FALSE);
	m_SheetResult.SetRowCount(nRowsStatistics);
	m_SheetResult.SetColumnCount(nColsStatistics);
	m_SheetResult.SetFixedColumnCount(1);
	m_SheetResult.SetEditable(FALSE);
	//m_SheetResult.SetFixedRowCount(nRowsStatistics);
	//m_SheetResult.UsingScrollBars(GVL_VERT, false);
	m_SheetResult.UsingScrollBars(GVL_BOTH, false);

//	m_SheetResult.UsingScrollBars()
	CSize czSpread;
	czSpread.cx = crSpread.right;
	czSpread.cy = crSpread.bottom;
	czSpread.cx -= 2;
	czSpread.cy -= 2;

	int nSizeWidth = crSpread.Width() / (nColsStatistics);

	m_SheetResult.SetColumnWidth(0, nSizeWidth - 160);
	m_SheetResult.SetColumnWidth(1, nSizeWidth - 160);
	m_SheetResult.SetColumnWidth(2, nSizeWidth);
	m_SheetResult.SetColumnWidth(3, nSizeWidth);
	//m_SheetResult.SetColumnWidth(4, );

	//for (int i = 0; i < nColsStatistics; i++)
	//	m_SheetResult.SetColumnWidth(i, crSpread.Width() / (nColsStatistics+2));

	for (int i = 0; i < nRowsStatistics; i++)
		m_SheetResult.SetRowHeight(i, (int)(crSpread.Height() / nRowsStatistics) );

	CString strName;
	const char* lpszTitle[nColsStatistics] = { "NAME", "DATA", "REFERENCE","RANGE"/*, "Count", "Distance"*/ };

	for (int row = 0; row < m_SheetResult.GetRowCount(); row++)
	{
		for (int col = 0; col < m_SheetResult.GetColumnCount(); col++)
		{
			CString str;

			SRavidSheetCellInfo sCellInfo;

			sCellInfo.uiMask = ERavidSheetCellDataMask_Text;
			sCellInfo.dwFormat = DT_CENTER | DT_VCENTER;
			sCellInfo.nRow = row;
			sCellInfo.nCol = col;


			COLORREF crBackGround = BLACK;
			COLORREF crFont = WHITE;

			if (row < 1)
			{
				str.Format(_T("%s"), A2T(lpszTitle[col]));
				crBackGround = WHITE;
				crFont = BLACK;
			}
// 			else if (col < 1)
// 			{
// 				str.Format(_T("%d"), row/*A2T(lpszMeasure[row])*/);
// 				crBackGround = BLACK;
// 			}


			sCellInfo.strText = str;

			m_SheetResult.SetItem(&sCellInfo);

			m_SheetResult.SetItemBkColour(row, col, crBackGround);
			m_SheetResult.SetItemFgColour(row, col, crFont);
			m_SheetResult.SetItemFormat(row, col, sCellInfo.dwFormat);
		}

	}

	Invalidate();


	return bReturn;
}
int CFormViewOptions::GetLanguageStatus()
{
	return GetCheckedRadioButton(IDC_RADIO_OPTIONS_LANGUAGE_CHINESS,IDC_RADIO_OPTIONS_LANGUAGE_KOREAN);

}

HBRUSH CFormViewOptions::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH hbr = CFormView::OnCtlColor(pDC, pWnd, nCtlColor);

	// TODO:  여기서 DC의 특성을 변경합니다.

	if (pWnd->GetDlgCtrlID() == IDC_CHECK_OPTIONS_PROCESSOPTION_CAM1
		|| pWnd->GetDlgCtrlID() == IDC_CHECK_OPTIONS_SYSTEMOPTION_IMGSAVEOK
		|| pWnd->GetDlgCtrlID() == IDC_CHECK_OPTIONS_SYSTEMOPTION_IMGSAVENG
		|| pWnd->GetDlgCtrlID() == IDC_RADIO_OPTIONS_LANGUAGE_CHINESS
		|| pWnd->GetDlgCtrlID() == IDC_RADIO_OPTIONS_LANGUAGE_ENGLISH
		|| pWnd->GetDlgCtrlID() == IDC_RADIO_OPTIONS_LANGUAGE_KOREAN
		|| pWnd->GetDlgCtrlID() == IDC_RADIO_OPTIONS_SAVE_BMP
		|| pWnd->GetDlgCtrlID() == IDC_RADIO_OPTIONS_SAVE_JPG
		|| pWnd->GetDlgCtrlID() == IDC_CHECK_OPTIONS_PROCESSOPTION_MEASURE_PASS
		|| pWnd->GetDlgCtrlID() == IDC_CHECK_OPTIONS_PROCESSOPTION_DEFECTINS
		)
	{
		pDC->SetTextColor(RGB(120, 120, 120));
		pDC->SetBkMode(TRANSPARENT);	
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}


	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return hbr;
}

void CFormViewOptions::InitData()
{

	CImageCameraView* pViewImage[EViewNo_ImageViewCameraLower + 1] = {nullptr,};

	for(int i = 0 ; i < EViewNo_ImageViewCameraLower + 1; i++)
		pViewImage[i] = dynamic_cast<CImageCameraView*>(CUIManager::FindView(typeid(CImageCameraView), EViewNo_ImageViewCameraUpper));

	if(!pViewImage[EViewNo_ImageViewCameraUpper])
		return;

	if(!pViewImage[EViewNo_ImageViewCameraLower])
		return;
	CString strData;

	strData.Format(_T("%d"), m_pModelParam->nSaveDuration);
	m_edit[EEditName_SaveDuration].SetWindowText(strData);

	strData.Format(_T("%d"), m_pModelParam->nSaveImageDuration);
	m_edit[EEditName_SaveImageDuration].SetWindowText(strData);

	strData.Format(_T("%.5f"), pViewImage[EViewNo_ImageViewCameraUpper]->GetAccuracyX());
	m_stcName[ELabel_Camera_CAMERA_X1_DATA].SetWindowText(strData);
	strData.Format(_T("%.5f"), pViewImage[EViewNo_ImageViewCameraUpper]->GetAccuracyY());
	m_stcName[ELabel_Camera_CAMERA_Y1_DATA].SetWindowText(strData);

	strData.Format(_T("%.5f"), pViewImage[EViewNo_ImageViewCameraLower]->GetAccuracyX());
	m_stcName[ELabel_Camera_CAMERA_X2_DATA].SetWindowText(strData);
	strData.Format(_T("%.5f"), pViewImage[EViewNo_ImageViewCameraLower]->GetAccuracyY());
	m_stcName[ELabel_Camera_CAMERA_Y2_DATA].SetWindowText(strData);


	strData.Format(_T("%.2f"), 0/*m_pModelParam->dblWidthSize*/);
	m_edit[EEditName_WidthSize_Data].SetWindowText(strData);

	strData.Format(_T("%d"), m_pModelParam->nJPGCompression);
	m_edit[EEditName_JpgSave_Data].SetWindowText(strData);

	strData.Format(_T("%.2f"), 0/*m_pModelParam->dblHeightSize*/);
	m_edit[EEditName_HeightSize_Data].SetWindowText(strData);


	if (m_pModelParam->nPassOtion)
		m_btnCheckBox[ECheck_ProcessOption].SetCheck(true);
	if(m_pModelParam->nPassOtion_measurement)
		m_btnCheckBox[ECheck_ProcessOption_Measure].SetCheck(true);
	if(m_pModelParam->nPassOtion_Defect)
		m_btnCheckBox[ECheck_ProcessOption_Defect].SetCheck(true);

	if (m_pModelParam->nSaveOkImage)
		m_btnCheckBox[ECheck_ImageSaveOK].SetCheck(true);
	if (m_pModelParam->nSaveNGImage)
		m_btnCheckBox[ECheck_ImageSaveNG].SetCheck(true);

	switch (m_pModelParam->nLanguageType)
	{
	case 0: m_btnRadioBtn[ERadio_Chiness].SetCheck(true); break;
	case 1: m_btnRadioBtn[ERadio_English].SetCheck(true); break;
	case 2: m_btnRadioBtn[ERadio_Korean].SetCheck(true); break;
	default:
		break;
	}

	switch(m_pModelParam->nSaveImageType)
	{
	case 0: m_btnRadioBtn[ERadio_BMP].SetCheck(true); break;
	case 1: m_btnRadioBtn[ERadio_JPG].SetCheck(true); break;
	default:
		break;
	}


}

void CFormViewOptions::OnBnClickedButtonOptionsSave()
{
	CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if (!pHandler)
		return;

	CString strData;
	double dblData = 0;
	int nData = 0;
	bool bChange = false;
	CString strChangeData;


// 	nData = _ttoi(strData);
// 	m_pModelParam->nCam3Delay = nData;

	CLogManager::Write(0, _T("[Option]  Save Button On"));


	m_edit[EEditName_SaveDuration].UpdateData(FALSE);
	m_edit[EEditName_SaveDuration].GetWindowText(strData);
	nData = _ttoi(strData);

	if (m_pModelParam->nSaveDuration == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]D:Drive Over Check [%d]->[%d]"), m_pModelParam->nSaveDuration, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nSaveDuration = nData;

	m_edit[EEditName_SaveImageDuration].UpdateData(FALSE);
	m_edit[EEditName_SaveImageDuration].GetWindowText(strData);
	nData = _ttoi(strData);

	if (m_pModelParam->nSaveImageDuration == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]Save Image Duration [%d]->[%d]"), m_pModelParam->nSaveImageDuration, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nSaveImageDuration = nData;

	m_edit[EEditName_HeightSize_Data].UpdateData(FALSE);
	m_edit[EEditName_HeightSize_Data].GetWindowText(strData);
	dblData = _ttof(strData);

// 	if (m_pModelParam->dblHeightSize == dblData)	bChange = false;
// 	else bChange = true;
// 	strChangeData.Format(_T("[Parameter]HeightSize [%.2f]->[%.2f]"), m_pModelParam->dblHeightSize, dblData);
// 	if (bChange)
// 		CLogManager::Write(0, strChangeData);

	//m_pModelParam->dblHeightSize = dblData;

	m_edit[EEditName_WidthSize_Data].UpdateData(FALSE);
	m_edit[EEditName_WidthSize_Data].GetWindowText(strData);
	dblData = _ttof(strData);

// 	if (m_pModelParam->dblWidthSize == dblData)	bChange = false;
// 	else bChange = true;
// 	strChangeData.Format(_T("[Parameter]WidthSize [%.2f]->[%.2f]"), m_pModelParam->dblWidthSize, dblData);
// 	if (bChange)
// 		CLogManager::Write(0, strChangeData);

//	m_pModelParam->dblWidthSize = dblData;


	m_edit[EEditName_JpgSave_Data].UpdateData(FALSE);
	m_edit[EEditName_JpgSave_Data].GetWindowText(strData);
	nData = _ttoi(strData);

	if (m_pModelParam->nJPGCompression == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]JPGCompression [%.2f]->[%.2f]"), m_pModelParam->nJPGCompression, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nJPGCompression = nData;


	nData = m_btnCheckBox[ECheck_ProcessOption].GetCheck();


	if (m_pModelParam->nPassOtion == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]PassOtion [%d]->[%d]"), m_pModelParam->nPassOtion, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nPassOtion = nData;


	nData = m_btnCheckBox[ECheck_ProcessOption_Measure].GetCheck();

	if (m_pModelParam->nPassOtion_measurement == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]Measure PassOtion [%d]->[%d]"), m_pModelParam->nPassOtion_measurement, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nPassOtion_measurement = nData;

	nData = m_btnCheckBox[ECheck_ProcessOption_Defect].GetCheck();

	if (m_pModelParam->nPassOtion_Defect == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]Defect PassOtion [%d]->[%d]"), m_pModelParam->nPassOtion_Defect, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nPassOtion_Defect = nData;



	nData = m_btnCheckBox[ECheck_ImageSaveOK].GetCheck();

	if (m_pModelParam->nSaveOkImage == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]SaveOkImage [%d]->[%d]"), m_pModelParam->nSaveOkImage, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nSaveOkImage = nData;

	nData = m_btnCheckBox[ECheck_ImageSaveNG].GetCheck();

	if (m_pModelParam->nSaveNGImage == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]SaveNGImage [%d]->[%d]"), m_pModelParam->nSaveNGImage, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nSaveNGImage = nData;

	nData = 0;
	if (!m_btnRadioBtn[ERadio_Chiness].GetCheck())
	{
		nData = m_btnRadioBtn[ERadio_English].GetCheck();

		if (!nData)
		{
			if (m_btnRadioBtn[ERadio_Korean].GetCheck())
				nData = 2;
		}
	}
	else
		nData = 0;


	if (m_pModelParam->nLanguageType == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]LanguageType [%d]->[%d]"), m_pModelParam->nLanguageType, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nLanguageType = nData;

	if(!m_btnRadioBtn[ERadio_BMP].GetCheck())
	{
		nData = m_btnRadioBtn[ERadio_JPG].GetCheck();
	}
	else
		nData = 0;


	if (m_pModelParam->nSaveImageType == nData)	bChange = false;
	else bChange = true;
	strChangeData.Format(_T("[Parameter]SaveImageType [%d]->[%d]"), m_pModelParam->nSaveImageType, nData);
	if (bChange)
		CLogManager::Write(0, strChangeData);

	m_pModelParam->nSaveImageType = nData;

	pHandler->SetModelParamSave(*m_pModelParam);
}


void CFormViewOptions::OnSize(UINT nType, int cx, int cy)
{
	CFormView::OnSize(nType, cx, cy);
//	CRavidFormViewBase::OnSize(nType, cx, cy);

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
}


void CFormViewOptions::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
					   // 그리기 메시지에 대해서는 CRavidFormViewBase::OnPaint()을(를) 호출하지 마십시오.
}
