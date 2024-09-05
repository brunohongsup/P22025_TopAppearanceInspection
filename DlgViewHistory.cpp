// RavidDlgImageViewTest.cpp: 구현 파일
//

#include "stdafx.h"
// #include "RavidDlgImageViewTest.h"
#include "DlgViewHistory.h"
#include "afxdialogex.h"
#include "resource.h"

#include "ImageViewHistory.h"
#include "DocumentHistory.h"
#include "Inspection.h"
// #include "RavidDialogViewTest.h"
// #include "RavidDocDialogViewTest.h"

using namespace Ravid::Framework;

// CRavidDlgImageViewTest 대화 상자

IMPLEMENT_DYNCREATE(CDlgViewHistory, CRavidDialogBase)

BEGIN_MESSAGE_MAP(CDlgViewHistory, CRavidDialogBase)
	ON_WM_CLOSE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_SHOWWINDOW()
	ON_WM_SIZE()
	ON_WM_ERASEBKGND()
	ON_WM_GETMINMAXINFO()
	ON_BN_CLICKED(IDC_BUTTON_IMAGEHISTORY_MEASUREMENT, &CDlgViewHistory::OnBnClickedButtonImagehistoryMeasurement)
	ON_BN_CLICKED(IDC_BUTTONIMAGEHISTORY_IMAGELOAD, &CDlgViewHistory::OnBnClickedButtonimagehistoryImageload)
	ON_BN_CLICKED(IDC_BUTTON_IMAGEHISTORY_OPENPATH, &CDlgViewHistory::OnBnClickedButtonImagehistoryOpenpath)
	ON_BN_CLICKED(IDC_BUTTON_IMAGEHISTORY_CLOSE, &CDlgViewHistory::OnBnClickedButtonImagehistoryClose)
END_MESSAGE_MAP()

// CRavidDlgImageViewTest 메시지 처리기

CDlgViewHistory::CDlgViewHistory(CWnd* pParent /*=nullptr*/)
	: CRavidDialogBase(IDD_DIALOG_IMAGE_HISTORY, pParent)
{
}

CDlgViewHistory::~CDlgViewHistory()
{
}

void CDlgViewHistory::DoDataExchange(CDataExchange* pDX)
{
	CRavidDialogBase::DoDataExchange(pDX);
}

BOOL CDlgViewHistory::Create(CWnd* pParent)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	return __super::Create(IDD_DIALOG_IMAGE_HISTORY/*IDD_RAVID_DLG_VIEW*/, pParent);
}

BOOL CDlgViewHistory::OnInitDialog()
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


BOOL CDlgViewHistory::OnEraseBkgnd(CDC* pDC)
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

bool Ravid::Framework::CDlgViewHistory::LoadFolderImage()
{
	bool bReturn = false;
	
	do 
	{		
		CString strBasePath = (CString)DataDir;/*_T("D:\\Record\\Files");*/

		CString strFolders;
		CString strTemp = m_strDate;

		if(strTemp.IsEmpty())
			break;

		int nPos = 0;
		int nCount = 0;
		do 
		{
			nPos = strTemp.Find(_T("_"));
			strFolders = strTemp.Left(nPos);
			strTemp = strTemp.Right(strTemp.GetLength() - nPos - 1);

			strBasePath.AppendFormat(_T("\\%s"), strFolders);

			nCount++;

		} while (nCount != 3);

		CString strImageFileName = strTemp;
			
		strBasePath.AppendFormat(_T("\\Image"));

		CString strImageType[2] = {_T("Upper"), _T("Lower")};
		CString strPassOrFail[2] = { _T("Pass"), _T("Fail") };
		CString strMsg;
		for(int i = 0; i < 2; i ++)
		{
			CString strPath = strBasePath;

			strPath.AppendFormat(_T("\\%s"), strImageType[i]);

			CString strTemp;

			for (int j = 0; j < 2; j++)
			{
				strTemp = strPath;

				strTemp.AppendFormat(_T("\\%s"), strPassOrFail[j]);

				strTemp.AppendFormat(_T("\\%s_%s_%s.jpg"), strImageFileName, m_strLotID, m_strCellID);
				strMsg.Format(_T("Double Clicked on %s"), strTemp);
				CLogManager::Write(eLogTypeUser, strMsg);

				if(m_pImageView[i]->Open(strTemp))
					break;
			}

		}


	} while (false);

	return bReturn;
}

void Ravid::Framework::CDlgViewHistory::SetViewAcc(int nCh, double dblXAcc, double dblYAcc)
{
	m_pImageView[nCh]->SetAccuracyX(dblXAcc);
	m_pImageView[nCh]->SetAccuracyY(dblYAcc);
}


bool Ravid::Framework::CDlgViewHistory::InitializeImageView()
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


void Ravid::Framework::CDlgViewHistory::OnBnClickedButtonImagehistoryMeasurement()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	for(int i = 0; i < ECameraNum_Count; i++)
	{
		CEventHandlerCamera* pHandlerCamera = dynamic_cast<CEventHandlerCamera*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_CameraUpper + i));
		if(!pHandlerCamera)
			return;

		std::vector<SMeasurementKind> vct;
		pHandlerCamera->GetMesurementKindData(vct);

		m_pImageView[EImgView_1 + i]->ClearLayerDrawingObject();

		SInspectionInfo sInspectionInfo1;
		SInspectionInfo sInspectionInfo2;

		SImageInfo* pI1 = new SImageInfo(m_pImageView[EImgView_1 + i]->GetImageInfo());
		if(!pI1)
			return;

		SImageInfo* pI2 = new SImageInfo(m_pImageView[EImgView_1 + i]->GetImageInfo());
		if(!pI2)
			return;

		sInspectionInfo1.vctImg.push_back(pI1);
		sInspectionInfo2.vctImg.push_back(pI2);

		CInspection ci;
		ci.InspectionMeasure(i, &sInspectionInfo1, vct, m_pImageView[EImgView_1 + i]);


		ci.InspectionDefect(i, &sInspectionInfo2, m_pImageView[EImgView_1 + i]);

	}

}


void Ravid::Framework::CDlgViewHistory::OnBnClickedButtonimagehistoryImageload()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Ravid::Framework::CDlgViewHistory::OnBnClickedButtonImagehistoryOpenpath()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Ravid::Framework::CDlgViewHistory::OnBnClickedButtonImagehistoryClose()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	OnOK();
}
