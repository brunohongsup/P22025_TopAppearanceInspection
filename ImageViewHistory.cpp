#include "stdafx.h"
// #include "RavidDialogViewTest.h"
#include "ImageViewHistory.h"

// #include "RavidDocDialogViewTest.h"
#include "DocumentHistory.h"
#include "DlgViewHistory.h"
// #include "RavidDlgImageViewTest.h"

using namespace Ravid::Framework;
using namespace Ravid::Algorithms;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CImageViewHistory, CRavidImageView)

BEGIN_MESSAGE_MAP(CImageViewHistory, CRavidImageView)
	ON_WM_MOUSEACTIVATE()
END_MESSAGE_MAP()

CImageViewHistory::CImageViewHistory()
{
}


CImageViewHistory::~CImageViewHistory()
{
}

CRavidDocDialogView * CImageViewHistory::GetDoc()
{
	//ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRavidDocDialogView)));
	return (CRavidDocDialogView*)m_pDocument;
}

void CImageViewHistory::OnDraw(CDC* pDC)
{
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.

	do
	{
		DrawCanvas();
		DrawImage();
		DrawGrid();
		DrawPixelValue();
		DrawLayer();
		DrawStatus();
		//DrawScrollbarPadding();

		CommitDraw(pDC);

		CUIManager::SetImageViewDrawingElapsedTime(this);
	}
	while(false);
}

int CImageViewHistory::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	return CWnd::OnMouseActivate(pDesktopWnd, nHitTest, message);
}

bool CImageViewHistory::RunPopupMenu(CPoint point)

{
	EViewObjectContextMenuType eRTOCMT = EViewObjectContextMenuType_None;

	CPoint ptClient = point;
	ScreenToClient(&ptClient);

	CRavidPoint<double> rpImage = ScreenCoordToImageCoord(ptClient.x, ptClient.y);

	CRavidMenu mainMenu;

	mainMenu.CreatePopupMenu();

	{
		bool bNeedClearViewObject = false;

		bool bIsVisbleImageProcessingTool = CUIManager::IsVisibleImageProcessingTool();

		if(!bIsVisbleImageProcessingTool)
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageOpen, CMultiLanguageManager::GetString(ELanguageParameter_Open_Shortcut));
		else
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageOpen, CMultiLanguageManager::GetString(ELanguageParameter_Load));

		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ImageOpen, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageOpen], &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageOpen]);

		CRavidImage* pImage = GetImageInfo();

		if(pImage && DoesSupportingFormat(pImage))
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageSave, CMultiLanguageManager::GetString(ELanguageParameter_Save_Shortcut));
		else
			mainMenu.AppendMenu(MF_DISABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageSave, CMultiLanguageManager::GetString(ELanguageParameter_Save_Shortcut));

		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ImageSave, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageSave], &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageSave]);

		if(pImage)
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageClose, CMultiLanguageManager::GetString(ELanguageParameter_Close_Shortcut));
		else
			mainMenu.AppendMenu(MF_DISABLED | MF_STRING, ERavidImageViewPopupMenuID_ImageClose, CMultiLanguageManager::GetString(ELanguageParameter_Close_Shortcut));

		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ImageClose, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageClose], &m_bmMenuIcons[ERavidImageViewPopupMenu_ImageClose]);

		mainMenu.AppendMenu(MF_SEPARATOR);

		bool bNeedAddSepatator = true;

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_Arrow, CMultiLanguageManager::GetString(ELanguageParameter_Arrow_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_Arrow, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_Arrow], &m_bmMenuIcons[ERavidImageViewPopupMenu_Arrow]);

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ZoomIn, CMultiLanguageManager::GetString(ELanguageParameter_ZoomIn_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ZoomIn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomIn], &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomIn]);

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ZoomOut, CMultiLanguageManager::GetString(ELanguageParameter_ZoomOut_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ZoomOut, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomOut], &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomOut]);

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ZoomAll, CMultiLanguageManager::GetString(ELanguageParameter_ZoomFit_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ZoomAll, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomAll], &m_bmMenuIcons[ERavidImageViewPopupMenu_ZoomAll]);

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_Panning, CMultiLanguageManager::GetString(ELanguageParameter_Panning_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_Panning, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_Panning], &m_bmMenuIcons[ERavidImageViewPopupMenu_Panning]);

		mainMenu.AppendMenu(MF_SEPARATOR);

		CRavidMenu subLayer;
		{
			subLayer.CreatePopupMenu();
			mainMenu.AppendMenu(MF_POPUP | MF_BYCOMMAND, (UINT_PTR)subLayer.m_hMenu, CMultiLanguageManager::GetString(ELanguageParameter_Layer_Shortcut));
			mainMenu.SetMenuItemBitmaps((UINT_PTR)subLayer.m_hMenu, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_Layer], &m_bmMenuIcons[ERavidImageViewPopupMenu_Layer]);

			for(int i = 0; i < CRavidImageView::EMaxLayerCount; ++i)
			{
				CRavidImageViewLayer* pLayer = GetLayer(i);
				if(!pLayer)
					continue;

				CString strTitle = CMultiLanguageManager::GetString(ELanguageParameter_Layer);
				strTitle.AppendFormat(_T(" #&%d"), i);

				subLayer.AppendMenu((pLayer->IsShowing() ? MF_CHECKED : MF_UNCHECKED) | MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_LayerOnOff + i, strTitle);
			}
		}

		if(!IsPixelGridShowing())
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_GridOn, CMultiLanguageManager::GetString(ELanguageParameter_ShowGrid_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_GridOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_GridOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_GridOn]);
		}
		else
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_GridOff, CMultiLanguageManager::GetString(ELanguageParameter_HideGrid_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_GridOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_GridOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_GridOff]);
		}

		if(!IsPixelSpectrumShowing())
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_SpectrumOn, CMultiLanguageManager::GetString(ELanguageParameter_ShowPixelSpectrum_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_SpectrumOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_SpectrumOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_SpectrumOn]);
		}
		else
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_SpectrumOff, CMultiLanguageManager::GetString(ELanguageParameter_HidePixelSpectrum_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_SpectrumOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_SpectrumOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_SpectrumOff]);
		}

		if(!IsPixelValueShowing())
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_PixelValueOn, CMultiLanguageManager::GetString(ELanguageParameter_ShowPixelValue_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_PixelValueOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_PixelValueOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_PixelValueOn]);
		}
		else
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_PixelValueOff, CMultiLanguageManager::GetString(ELanguageParameter_HidePixelValue_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_PixelValueOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_PixelValueOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_PixelValueOff]);
		}

		if(!IsStatusShowing())
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_StatusBarOn, CMultiLanguageManager::GetString(ELanguageParameter_ShowStatusBar_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_StatusBarOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_StatusBarOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_StatusBarOn]);
		}
		else
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_StatusBarOff, CMultiLanguageManager::GetString(ELanguageParameter_HideStatusBar_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_StatusBarOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_StatusBarOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_StatusBarOff]);
		}

// 		if(!IsScrollBarEnable())
// 		{
// 			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ScrollBarOn, CMultiLanguageManager::GetString(ELanguageParameter_ShowScrollBar_Shortcut));
// 			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ScrollBarOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ScrollBarOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_ScrollBarOn]);
// 		}
// 		else
// 		{
// 			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_ScrollBarOff, CMultiLanguageManager::GetString(ELanguageParameter_HideScrollBar_Shortcut));
// 			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_ScrollBarOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_ScrollBarOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_ScrollBarOff]);
// 		}

		if(!IsInvalidateEnable())
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_InvalidateOn, CMultiLanguageManager::GetString(ELanguageParameter_OnInvalidate_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_InvalidateOn, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_InvalidateOn], &m_bmMenuIcons[ERavidImageViewPopupMenu_InvalidateOn]);
		}
		else
		{
			mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_InvalidateOff, CMultiLanguageManager::GetString(ELanguageParameter_OffInvalidate_Shortcut));
			mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_InvalidateOff, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_InvalidateOff], &m_bmMenuIcons[ERavidImageViewPopupMenu_InvalidateOff]);
		}

		mainMenu.AppendMenu(MF_SEPARATOR);

		mainMenu.AppendMenu(MF_ENABLED | MF_STRING, ERavidImageViewPopupMenuID_AccuracySetting, CMultiLanguageManager::GetString(ELanguageParameter_SetPixelAccuracy_Shortcut));
		mainMenu.SetMenuItemBitmaps(ERavidImageViewPopupMenuID_AccuracySetting, MF_BYCOMMAND, &m_bmMenuIcons[ERavidImageViewPopupMenu_AccuracySetting], &m_bmMenuIcons[ERavidImageViewPopupMenu_AccuracySetting]);

		mainMenu.SetDrawTextFormat(DT_SINGLELINE | DT_VCENTER);
		mainMenu.UseIconColorChange(true);

		mainMenu.Initialize(this, CUIManager::GetRavidMenuColor(ERavidMenuColorType_Background), CUIManager::GetRavidMenuColor(ERavidMenuColorType_ItemNormal), CUIManager::GetRavidMenuColor(ERavidMenuColorType_ItemHover), CUIManager::GetRavidMenuColor(ERavidMenuColorType_ItemClick), CUIManager::GetRavidMenuColor(ERavidMenuColorType_ItemTextNormal), CUIManager::GetRavidMenuColor(ERavidMenuColorType_ItemTextDisable));

		int nSelectedItem = mainMenu.TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON | TPM_RETURNCMD, point.x, point.y, this);

		switch(nSelectedItem)
		{
		case ERavidImageViewPopupMenuID_ClearViewObject:
			{
				ClearViewObject(true);
			}
			break;

		case ERavidImageViewPopupMenuID_ImageOpen:
			{
				OnImageOpen();
			}
			break;

		case ERavidImageViewPopupMenuID_ImageSave:
			{
				OnImageSave();
			}
			break;

		case ERavidImageViewPopupMenuID_ImageClose:
			{
				OnImageClose();
			}
			break;

		case ERavidImageViewPopupMenuID_CopyImageFromTheIPT:
			{
				OnImageCopyFromTheIPT();
			}
			break;

		case ERavidImageViewPopupMenuID_CopyImageFromTheProject:
			{
				OnImageCopyFromTheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_CopyImageToTheIPT:
			{
				OnImageCopyToTheIPT(this->GetImageInfo());
			}
			break;

		case ERavidImageViewPopupMenuID_CopyImageToTheProject:
			{
				OnImageCopyToTheProject(this->GetImageInfo());
			}
			break;

		case ERavidImageViewPopupMenuID_ProjectTransferImageIPT:
			{
				ProjectTransferImageToTheIPT();
			}
			break;

		case ERavidImageViewPopupMenuID_ProjectTransferImageProject:
			{
				ProjectTransferImageToTheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_ProjectBringImageProject:
			{
				ProjectBringImageFromTheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_IPTBringImageProject:
			{
				IPTBringImageFromTheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_IPTCopyFromProject:
			{
				IPTCopyGeometryFromtheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_ProjectCopyFromProject:
			{
				ProjectCopyGeometryFromtheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_Arrow:
			{
				SetCursorMode(ERavidImageViewCursorMode_Arrow);
			}
			break;

		case ERavidImageViewPopupMenuID_ZoomIn:
			{
				SetCursorMode(ERavidImageViewCursorMode_ZoomIn);
			}
			break;

		case ERavidImageViewPopupMenuID_ZoomOut:
			{
				SetCursorMode(ERavidImageViewCursorMode_ZoomOut);
			}
			break;

		case ERavidImageViewPopupMenuID_ZoomAll:
			{
				SetCursorMode(ERavidImageViewCursorMode_ZoomAll);
			}
			break;

		case ERavidImageViewPopupMenuID_Panning:
			{
				SetCursorMode(ERavidImageViewCursorMode_Panning);
			}
			break;

		case ERavidImageViewPopupMenuID_IPTBringFromProject:
			{
				IPTBringGeometryFromtheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_ProjectBringFromProject:
			{
				ProjectBringGeometryFromtheProject();
			}
			break;

		case ERavidImageViewPopupMenuID_GridOn:
			{
				ShowPixelGrid(true);
			}
			break;

		case ERavidImageViewPopupMenuID_GridOff:
			{
				ShowPixelGrid(false);
			}
			break;

		case ERavidImageViewPopupMenuID_SpectrumOn:
			{
				ShowPixelSpectrum(true);
			}
			break;

		case ERavidImageViewPopupMenuID_SpectrumOff:
			{
				ShowPixelSpectrum(false);
			}
			break;

		case ERavidImageViewPopupMenuID_PixelValueOn:
			{
				ShowPixelValue(true);
			}
			break;

		case ERavidImageViewPopupMenuID_PixelValueOff:
			{
				ShowPixelValue(false);
			}
			break;

		case ERavidImageViewPopupMenuID_StatusBarOn:
			{
				ShowStatus(true);
			}
			break;

		case ERavidImageViewPopupMenuID_StatusBarOff:
			{
				ShowStatus(false);
			}
			break;

		case ERavidImageViewPopupMenuID_AccuracySetting:
			{
				OnAccuracySetting();
			}
			break;

		case ERavidImageViewPopupMenuID_ScrollBarOn:
			{
				EnableScrollBar(true);
			}
			break;

		case ERavidImageViewPopupMenuID_ScrollBarOff:
			{
				EnableScrollBar(false);
			}
			break;

		case ERavidImageViewPopupMenuID_InvalidateOn:
			{
				EnableInvalidate(true);
			}
			break;

		case ERavidImageViewPopupMenuID_InvalidateOff:
			{
				EnableInvalidate(false);
			}
			break;

		default:
			break;
		}
	}

	Invalidate(false);

	return true;
}
