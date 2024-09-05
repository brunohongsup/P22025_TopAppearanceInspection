// RegisterPageImageStatistic.cpp: 구현 파일
//

#include "stdafx.h"
#include "RegisterPageImageStatistic.h"



// CRegisterPageImageStatistic 대화 상자

IMPLEMENT_DYNAMIC(CRegisterPageImageStatistic, CDialog)

CRegisterPageImageStatistic::CRegisterPageImageStatistic(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_FORM_REGISTER_PAGE_IMAGESTATISTIC, pParent)
{

}

CRegisterPageImageStatistic::~CRegisterPageImageStatistic()
{
	m_fontStatic.DeleteObject();
}

void CRegisterPageImageStatistic::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_SELECTITEM, m_static[EStatic_SelectItem]);
	DDX_Control(pDX, IDC_STATIC_REGISTER_PAGE_IMAGESTATISTIC, m_static[EStatic_ImageStatistic]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_LEFT, m_static[EStatic_Calibration_left]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_LEFT_X, m_static[EStatic_Calibration_left_X]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_LEFT_Y, m_static[EStatic_Calibration_left_Y]);

	DDX_Control(pDX, IDC_STATIC_CALIBRATION_RIGHT, m_static[EStatic_Calibration_Right]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_RIGHT_X, m_static[EStatic_Calibration_Right_X]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_RIGHT_Y, m_static[EStatic_Calibration_Right_Y]);

	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITION, m_static[EStatic_Calibration_Position]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_ZERO, m_static[EStatic_Calibration_Position_Zero]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_X_PLUS, m_static[EStatic_Calibration_Position_X_Plus]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_X_MINUS, m_static[EStatic_Calibration_Position_X_Minus]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_Y_PLUS, m_static[EStatic_Calibration_Position_Y_Plus]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_Y_MINUS, m_static[EStatic_Calibration_Position_Y_Minus]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_TH_PLUS, m_static[EStatic_Calibration_Position_Th_Plus]);
	DDX_Control(pDX, IDC_STATIC_CALIBRATION_POSITON_TH_MINUS, m_static[EStatic_Calibration_Position_Th_Minus]);

	
	DDX_Control(pDX, IDC_BUTTON_SELECT_STACK, m_btn[EButton_Stack]);
	DDX_Control(pDX, IDC_BUTTON_SELECT_ALIGN, m_btn[EButton_Align]);
	DDX_Control(pDX, IDC_BUTTON_CALIBRATION_SAVE, m_btn[EButton_Save]);
	DDX_Control(pDX, IDC_BUTTON_CALIBRATION_START, m_btn[EButton_CalibrationOn]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_ZERO_X, m_edit[EEdit_Left_Zero_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_ZERO_Y, m_edit[EEdit_Left_Zero_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_XP_X, m_edit[EEdit_Left_X_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_XP_Y, m_edit[EEdit_Left_X_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_XM_X, m_edit[EEdit_Left_X_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_XM_Y, m_edit[EEdit_Left_X_Minus_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_YP_X, m_edit[EEdit_Left_Y_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_YP_Y, m_edit[EEdit_Left_Y_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_YM_X, m_edit[EEdit_Left_Y_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_YM_Y, m_edit[EEdit_Left_Y_Minus_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_THP_X, m_edit[EEdit_Left_Th_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_THP_Y, m_edit[EEdit_Left_Th_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_THM_X, m_edit[EEdit_Left_Th_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_LEFT_THM_Y, m_edit[EEdit_Left_Th_Minus_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_ZERO_X, m_edit[EEdit_Right_Zero_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_ZERO_Y, m_edit[EEdit_Right_Zero_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_XP_X, m_edit[EEdit_Right_X_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_XP_Y, m_edit[EEdit_Right_X_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_XM_X, m_edit[EEdit_Right_X_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_XM_Y, m_edit[EEdit_Right_X_Minus_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_YP_X, m_edit[EEdit_Right_Y_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_YP_Y, m_edit[EEdit_Right_Y_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_YM_X, m_edit[EEdit_Right_Y_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_YM_Y, m_edit[EEdit_Right_Y_Minus_Y]);

	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_THP_X, m_edit[EEdit_Right_Th_Plus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_THP_Y, m_edit[EEdit_Right_Th_Plus_Y]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_THM_X, m_edit[EEdit_Right_Th_Minus_X]);
	DDX_Control(pDX, IDC_EDIT_CALIBRATION_RIGHT_THM_Y, m_edit[EEdit_Right_Th_Minus_Y]);

	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRegisterPageImageStatistic, CDialog)
	ON_WM_CTLCOLOR()
	ON_BN_CLICKED(IDC_BUTTON_SELECT_STACK, &CRegisterPageImageStatistic::OnBnClickedButtonSelectStack)
	ON_BN_CLICKED(IDC_BUTTON_SELECT_ALIGN, &CRegisterPageImageStatistic::OnBnClickedButtonSelectAlign)
	ON_BN_CLICKED(IDC_BUTTON_CALIBRATION_SAVE, &CRegisterPageImageStatistic::OnBnClickedButtoCalibrationSave)
	ON_BN_CLICKED(IDC_BUTTON_CALIBRATION_START, &CRegisterPageImageStatistic::OnBnClickedButtonCalibrationStart)
END_MESSAGE_MAP()


// CRegisterPageImageStatistic 메시지 처리기
BOOL CRegisterPageImageStatistic::OnInitDialog()
{
	CDialog::OnInitDialog();


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
	
	m_fontEdit.CreatePointFont(150, _T("MS Shell Dlg"));
	for (int i = 0; i < EStatic_Count; i++)
	{
						
		m_static[i].SetFont(&m_fontStatic);
		SetWindowTheme(m_static[i].m_hWnd, _T(""), _T(""));
	}

	for (int i = 0; i < EButton_Count; i++)
	{
		m_btn[i].SetFont(&m_fontStatic);
		m_btn[i].SetTextColor(RGB(80, 80, 80));
		m_btn[i].SetFaceColor(RGB(40, 40, 40));

	}
	m_btn[EButton_Save].SetTextColor(WHITE);
	m_btn[EButton_CalibrationOn].SetTextColor(WHITE);

	for (int i = 0; i < EEdit_Count; i++)
	{
		m_edit[i].SetFont(&m_fontEdit);
	}


	return TRUE;  // return TRUE unless you set the focus to a control

}

HBRUSH CRegisterPageImageStatistic::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
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
	// TODO:  기본값이 적당하지 않으면 다른 브러시를 반환합니다.
	return hbr;
}

void CRegisterPageImageStatistic::OnOpenModel()
{
	OnBnClickedButtonSelectStack();
	
}

void CRegisterPageImageStatistic::OnBnClickedButtonSelectStack()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	m_btn[EButton_Stack].SetTextColor(WHITE);
	m_btn[EButton_Align].SetTextColor(RGB(80,80,80));

	m_nSelect = 0;

	m_btn[EButton_Stack].Invalidate();
	m_btn[EButton_Align].Invalidate();

	/*
	CString strSetData;
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_Zero]);
	m_edit[EEdit_Left_Zero_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_Zero]);
	m_edit[EEdit_Left_Zero_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XPlus]);
	m_edit[EEdit_Left_X_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XPlus]);
	m_edit[EEdit_Left_X_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XMinus]);
	m_edit[EEdit_Left_X_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XMinus]);
	m_edit[EEdit_Left_X_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YPlus]);
	m_edit[EEdit_Left_Y_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YPlus]);
	m_edit[EEdit_Left_Y_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YMinus]);
	m_edit[EEdit_Left_Y_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YMinus]);
	m_edit[EEdit_Left_Y_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThPlus]);
	m_edit[EEdit_Left_Th_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThPlus]);
	m_edit[EEdit_Left_Th_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThMinus]);
	m_edit[EEdit_Left_Th_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThMinus]);
	m_edit[EEdit_Left_Th_Minus_Y].SetWindowTextW(strSetData);





	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_Zero]);
	m_edit[EEdit_Right_Zero_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_Zero]);
	m_edit[EEdit_Right_Zero_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XPlus]);
	m_edit[EEdit_Right_X_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XPlus]);
	m_edit[EEdit_Right_X_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XMinus]);
	m_edit[EEdit_Right_X_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XMinus]);
	m_edit[EEdit_Right_X_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YPlus]);
	m_edit[EEdit_Right_Y_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YPlus]);
	m_edit[EEdit_Right_Y_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YMinus]);
	m_edit[EEdit_Right_Y_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YMinus]);
	m_edit[EEdit_Right_Y_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThPlus]);
	m_edit[EEdit_Right_Th_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThPlus]);
	m_edit[EEdit_Right_Th_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThMinus]);
	m_edit[EEdit_Right_Th_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThMinus]);
	m_edit[EEdit_Right_Th_Minus_Y].SetWindowTextW(strSetData);
	*/


}


void CRegisterPageImageStatistic::OnBnClickedButtonSelectAlign()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_btn[EButton_Align].SetTextColor(WHITE);
	m_btn[EButton_Stack].SetTextColor(RGB(80, 80, 80));

	m_btn[EButton_Stack].Invalidate();
	m_btn[EButton_Align].Invalidate();

	m_nSelect = 1;

	/*
	CString strSetData;
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_Zero]);
	m_edit[EEdit_Left_Zero_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_Zero]);
	m_edit[EEdit_Left_Zero_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XPlus]);
	m_edit[EEdit_Left_X_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XPlus]);
	m_edit[EEdit_Left_X_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XMinus]);
	m_edit[EEdit_Left_X_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XMinus]);
	m_edit[EEdit_Left_X_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YPlus]);
	m_edit[EEdit_Left_Y_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YPlus]);
	m_edit[EEdit_Left_Y_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YMinus]);
	m_edit[EEdit_Left_Y_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YMinus]);
	m_edit[EEdit_Left_Y_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThPlus]);
	m_edit[EEdit_Left_Th_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThPlus]);
	m_edit[EEdit_Left_Th_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThMinus]);
	m_edit[EEdit_Left_Th_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThMinus]);
	m_edit[EEdit_Left_Th_Minus_Y].SetWindowTextW(strSetData);



	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_Zero]);
	m_edit[EEdit_Right_Zero_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_Zero]);
	m_edit[EEdit_Right_Zero_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XPlus]);
	m_edit[EEdit_Right_X_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XPlus]);
	m_edit[EEdit_Right_X_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XMinus]);
	m_edit[EEdit_Right_X_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XMinus]);
	m_edit[EEdit_Right_X_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YPlus]);
	m_edit[EEdit_Right_Y_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YPlus]);
	m_edit[EEdit_Right_Y_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YMinus]);
	m_edit[EEdit_Right_Y_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YMinus]);
	m_edit[EEdit_Right_Y_Minus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThPlus]);
	m_edit[EEdit_Right_Th_Plus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThPlus]);
	m_edit[EEdit_Right_Th_Plus_Y].SetWindowTextW(strSetData);

	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThMinus]);
	m_edit[EEdit_Right_Th_Minus_X].SetWindowTextW(strSetData);
	strSetData.Format(_T("%.2f"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThMinus]);
	m_edit[EEdit_Right_Th_Minus_Y].SetWindowTextW(strSetData);
	*/
}


void CRegisterPageImageStatistic::OnBnClickedButtoCalibrationSave()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

		/*
	if (m_nSelect) // Align
	{
		CString strSetData, strGetData;
		double dblData;
		CString strChangeData;
		bool bChange = false;


	
		m_edit[EEdit_Left_Zero_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_Zero] = dblData;

		m_edit[EEdit_Left_Zero_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_Zero] = dblData;

		m_edit[EEdit_Left_X_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XPlus] = dblData;

		m_edit[EEdit_Left_X_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XPlus] = dblData;


		m_edit[EEdit_Left_X_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_XMinus] = dblData;

		m_edit[EEdit_Left_X_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_XMinus] = dblData;

		m_edit[EEdit_Left_Y_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YPlus] = dblData;

		m_edit[EEdit_Left_Y_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YPlus] = dblData;

		m_edit[EEdit_Left_Y_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_YMinus] = dblData;

		m_edit[EEdit_Left_Y_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_YMinus] = dblData;

		m_edit[EEdit_Left_Th_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Left_Th_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Left_Th_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_X[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_X[EDirection_ThMinus] = dblData;

		m_edit[EEdit_Left_Th_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignLeftPos_Y[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignLeftPos_Y[EDirection_ThMinus] = dblData;

		

		m_edit[EEdit_Right_Zero_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_Zero] = dblData;

		m_edit[EEdit_Right_Zero_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_Zero] = dblData;

		m_edit[EEdit_Right_X_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XPlus] = dblData;

		m_edit[EEdit_Right_X_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XPlus] = dblData;


		m_edit[EEdit_Right_X_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_XMinus] = dblData;

		m_edit[EEdit_Right_X_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_XMinus] = dblData;

		m_edit[EEdit_Right_Y_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YPlus] = dblData;

		m_edit[EEdit_Right_Y_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YPlus] = dblData;

		m_edit[EEdit_Right_Y_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_YMinus] = dblData;

		m_edit[EEdit_Right_Y_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_YMinus] = dblData;

		m_edit[EEdit_Right_Th_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Right_Th_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Right_Th_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_X[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_X[EDirection_ThMinus] = dblData;

		m_edit[EEdit_Right_Th_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationAlignRightPos_Y[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationAlignRightPos_Y[EDirection_ThMinus] = dblData;

	
	}
	else //Stack
	{
		CString strSetData, strGetData;
		double dblData;
		CString strChangeData;
		bool bChange = false;

		m_edit[EEdit_Left_Zero_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_Zero] = dblData;

		m_edit[EEdit_Left_Zero_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_Zero] = dblData;

		m_edit[EEdit_Left_X_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XPlus] = dblData;

		m_edit[EEdit_Left_X_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XPlus] = dblData;


		m_edit[EEdit_Left_X_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_XMinus] = dblData;

		m_edit[EEdit_Left_X_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_XMinus] = dblData;

		m_edit[EEdit_Left_Y_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YPlus] = dblData;

		m_edit[EEdit_Left_Y_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YPlus] = dblData;

		m_edit[EEdit_Left_Y_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_YMinus] = dblData;

		m_edit[EEdit_Left_Y_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_YMinus] = dblData;

		m_edit[EEdit_Left_Th_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Left_Th_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Left_Th_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_X[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_X[EDirection_ThMinus] = dblData;

		m_edit[EEdit_Left_Th_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackLeftPos_Y[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackLeftPos_Y[EDirection_ThMinus] = dblData;



		m_edit[EEdit_Right_Zero_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_Zero] = dblData;

		m_edit[EEdit_Right_Zero_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_Zero] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_Zero] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_Zero], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_Zero] = dblData;

		m_edit[EEdit_Right_X_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XPlus] = dblData;

		m_edit[EEdit_Right_X_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_XPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XPlus] = dblData;


		m_edit[EEdit_Right_X_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_XMinus] = dblData;

		m_edit[EEdit_Right_X_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_XMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_XMinus] = dblData;

		m_edit[EEdit_Right_Y_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YPlus] = dblData;

		m_edit[EEdit_Right_Y_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_YPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YPlus] = dblData;

		m_edit[EEdit_Right_Y_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_YMinus] = dblData;

		m_edit[EEdit_Right_Y_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_YMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_YMinus] = dblData;

		m_edit[EEdit_Right_Th_Plus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Right_Th_Plus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThPlus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_ThPlus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThPlus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThPlus] = dblData;

		m_edit[EEdit_Right_Th_Minus_X].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_X[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_X[EDirection_ThMinus] = dblData;

		m_edit[EEdit_Right_Th_Minus_Y].GetWindowText(strGetData);
		dblData = _ttof(strGetData);

		if (m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThMinus] == dblData)	bChange = false;
		else bChange = true;
		strChangeData.Format(_T("[Parameter]CalibrationStackRightPos_Y[EDirection_ThMinus] [%.2f]->[%.2f]"), m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThMinus], dblData);
		if (bChange)
			CLogManager::Write(0, strChangeData);

		m_pModelParam->dblCalibrationStackRightPos_Y[EDirection_ThMinus] = dblData;
	}


	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;

	//pHandler->SetModelParamSave();

	*/
}


void CRegisterPageImageStatistic::OnBnClickedButtonCalibrationStart()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CEHBase* pHandler = dynamic_cast<CEHBase*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
	if(!pHandler)
		return;


// 	if (6 == AfxMessageBox(_T("위에 입력된 값으로 캘리브레이션을 진행 하겠습니까?"), MB_YESNO))
// 		pHandler->ManualCalibrationOn();
// 	else
// 		int a = 2;
}
