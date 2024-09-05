// DlgAddROINaming.cpp: 구현 파일
//

//#include "pch.h"
#include "stdafx.h"
#include "DlgAddROINaming.h"



// CDlgAddROINaming 대화 상자

IMPLEMENT_DYNAMIC(CDlgAddROINaming, CDialog)

CDlgAddROINaming::CDlgAddROINaming(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_ROI_NAME, pParent)
{	

}

CDlgAddROINaming::~CDlgAddROINaming()
{

}

void CDlgAddROINaming::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_EDIT_ROI_NAME, m_edit);
}


BEGIN_MESSAGE_MAP(CDlgAddROINaming, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_1, &CDlgAddROINaming::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON_2, &CDlgAddROINaming::OnBnClickedButton2)
END_MESSAGE_MAP()


// CDlgAddROINaming 메시지 처리기

BOOL CDlgAddROINaming::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void CDlgAddROINaming::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CFormViewRegister* pViewForm = dynamic_cast<CFormViewRegister*>(CUIManager::FindView(typeid(CFormViewRegister)));
	if(!pViewForm)
		return;

// 	SMeasurementROI sData;
// 	long nIndex = 0;
// 	if(m_bNameEditExistingROI)
// 	{
// 		nIndex = m_nIndex;
// 		pViewForm->GetROIData(nIndex, sData);
// 		sData.strName = GetNameFromEditBox();
// 
// 		pViewForm->ShowSetedDlgLineGaugeParamFromPageMarkROI(nIndex, sData);
// 
// 		pViewForm->SetROIDataAdjustedSave(nIndex, sData);
// 
// 		pViewForm->SetROIDataLoadToListBox();
// 	}
// 	else
// 	{
// 		sData.strName = GetNameFromEditBox();
// 		long nIndex = pViewForm->SetROIDataAdd(sData);
// 
// 		pViewForm->ShowSetedDlgLineGaugeParamFromPageMarkROI(nIndex, sData);
// 
// 	}


	OnOK();
}


void CDlgAddROINaming::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnOK();

}

