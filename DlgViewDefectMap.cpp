// RavidDlgImageViewTest.cpp: 구현 파일
//

#include "stdafx.h"
// #include "RavidDlgImageViewTest.h"
#include "DlgViewDefectMap.h"
#include "afxdialogex.h"
#include "resource.h"

#include "ImageViewHistory.h"
#include "DocumentHistory.h"
#include "Inspection.h"
// #include "RavidDialogViewTest.h"
// #include "RavidDocDialogViewTest.h"

using namespace Ravid::Framework;

// CRavidDlgImageViewTest 대화 상자

IMPLEMENT_DYNCREATE(CDlgViewDefectMap, CRavidDialogBase)

BEGIN_MESSAGE_MAP(CDlgViewDefectMap, CRavidDialogBase)
	ON_WM_CLOSE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_SHOWWINDOW()
	ON_WM_SIZE()
	ON_WM_ERASEBKGND()
	ON_WM_GETMINMAXINFO()
	ON_BN_CLICKED(IDC_BUTTON_DEFECTMAP_RESET, &CDlgViewDefectMap::OnBnClickedButtonDefectmapReset)
	ON_BN_CLICKED(IDC_BUTTON_DEFECTMAP_CLOSE, &CDlgViewDefectMap::OnBnClickedButtonDefectmapClose)
END_MESSAGE_MAP()

// CRavidDlgImageViewTest 메시지 처리기

CDlgViewDefectMap::CDlgViewDefectMap(CWnd* pParent /*=nullptr*/)
	: CRavidDialogBase(IDD_DIALOG_IMAGE_DEFECTMAP, pParent)
{
}

CDlgViewDefectMap::~CDlgViewDefectMap()
{
}

void CDlgViewDefectMap::DoDataExchange(CDataExchange* pDX)
{
	CRavidDialogBase::DoDataExchange(pDX);
}

BOOL CDlgViewDefectMap::Create(CWnd* pParent)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	return __super::Create(IDD_DIALOG_IMAGE_DEFECTMAP/*IDD_RAVID_DLG_VIEW*/, pParent);
}

BOOL CDlgViewDefectMap::OnInitDialog()
{
	CRavidDialogBase::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	do
	{
		EnableAdaptiveScale(false);

		m_context.m_pNewViewClass = RUNTIME_CLASS(CImageViewHistory);
		m_context.m_pCurrentDoc = new CDocumentHistory;
		m_context.m_pCurrentFrame = (CFrameWnd*)this;

		InitializeImageView();

		SetWindowText(_T("History View"));




	}
	while(false);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


BOOL CDlgViewDefectMap::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	do
	{
		if(!pDC)
			break;

		CRect crDlg;
		GetClientRect(crDlg);


		for(int i = 0; i < EImgView_Count; i++)
		{
			if(m_pImageView[i])
			{
				CRavidRect<int> rrView;

				m_pImageView[i]->GetWindowRect(rrView);
				ScreenToClient(rrView);

				pDC->ExcludeClipRect(rrView);
			}
		}

		pDC->GetClipBox(crDlg);
		pDC->FillSolidRect(crDlg, m_clrControl[ERavidControlColorType_Background]);

	}
	while(false);

	return false;
}


bool Ravid::Framework::CDlgViewDefectMap::InitializeImageView()
{
	bool bResult = false;

	do
	{
		// Image View 1
		m_pImageView[EImgView_1] = (CImageViewHistory*)((CFrameWnd*)this)->CreateView(&m_context);

		ASSERT(m_pImageView);

		CWnd* pStatic1 = GetDlgItem(IDC_STATIC_IMAGEBOX1);
 
		if(!pStatic1)
			break;

		CRect crView;

 		pStatic1->GetWindowRect(crView);


		ScreenToClient(crView);

		m_pImageView[EImgView_1]->MoveWindow(crView);
		m_pImageView[EImgView_1]->OnInitialUpdate();
		m_pImageView[EImgView_1]->ShowStatus(false);
		m_pImageView[EImgView_1]->ShowWindow(SW_SHOW);
		m_pImageView[EImgView_1]->SetObjectID(ECameraNum_Upper);



		// Image View 2
		m_pImageView[EImgView_2] = (CImageViewHistory*)((CFrameWnd*)this)->CreateView(&m_context);

		ASSERT(m_pImageView);
		CWnd* pStatic2 = GetDlgItem(IDC_STATIC_IMAGEBOX2);

		if(!pStatic2)
			break;

		pStatic2->GetWindowRect(crView);

		ScreenToClient(crView);

		m_pImageView[EImgView_2]->MoveWindow(crView);
		m_pImageView[EImgView_2]->OnInitialUpdate();
		m_pImageView[EImgView_2]->ShowStatus(false);
		m_pImageView[EImgView_2]->ShowWindow(SW_SHOW);
		m_pImageView[EImgView_2]->SetObjectID(ECameraNum_Lower);

		for(int i = 0; i < ECameraNum_Count; i++)
		{
			for(int j = 1; j < 9; j++)
			{
				CRavidImageViewLayer* pLayer = m_pImageView[EImgView_1 + i]->GetLayer(j);
				pLayer->Show(false);
			}
		}

		bResult = true;
	}
	while(false);

	return bResult;
}

bool Ravid::Framework::CDlgViewDefectMap::SetImageBuffer(EImgView eCh, CRavidImage * pImage)
{
	bool bReturn = true;

  do 
  {
	  bReturn &= m_pImageView[eCh]->SetImageInfo(pImage);
	  m_pImageView[eCh]->Invalidate();

  } while (false);

  
  return bReturn;
}



void Ravid::Framework::CDlgViewDefectMap::OnBnClickedButtonDefectmapReset()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	for(int i = 0; i < ECameraNum_Count; i++)
	{
		CEventHandlerCamera* pHandlerCamera = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + i));
		if(!pHandlerCamera)
			return;

		
		pHandlerCamera->SetDefectMapClear();

	}

	m_pImageView[EImgView_1]->Invalidate();
	m_pImageView[EImgView_2]->Invalidate();

}


void Ravid::Framework::CDlgViewDefectMap::OnBnClickedButtonDefectmapClose()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnOK();
}
