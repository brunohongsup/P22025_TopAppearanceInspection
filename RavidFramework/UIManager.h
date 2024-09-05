#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>
#include <map>
#include <d2d1.h>
#include <dwrite.h>

class CMultiDocTemplate;
class Ravid::Algorithms::CRavidImage;

// Multi Document Template ������ ����ϴ� ��ó����
#define DOC_TEMPLATE(resid,doc,childfrm,view) resid,RUNTIME_CLASS(doc),RUNTIME_CLASS(childfrm),RUNTIME_CLASS(view)

namespace Ravid
{
	namespace Miscellaneous
	{
		class CPerformanceCounter;
	}

	namespace Framework
	{
		class CRavidLogViewer;
		class CRavidFormViewBase;
		class CRavidChildFrameLogViewer;
		class CRavidDialogBase;
		class CRavidInputBoxInfo;
		class CUIConfig;
		class CUIConfigElement;
		class CRavidImageView;
		class CRavidMainFrame;
		class CRavidImageProcessingTool;
		class CRavidChildFrameImageProcessingTool;
		class CRavidDlgModelManager;
		class CRavidDlgNotification;
		class CRavidDlgProgress;
		
		/**
		* �����ӿ�ũ UI�� �����ϴ� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CUIManager : public CRavidObjectEx
		{
		private:
			CUIManager();
		public:
			virtual ~CUIManager();

			static bool AddEasyConfigurationView(_In_ CRuntimeClass* pView, _In_opt_ CRuntimeClass* pFrame = nullptr);

			/**
			* �����ӿ�ũ�� ��ϵ� UI ������ ���� �����ɴϴ�.
			*/
			static size_t GetUIConfigurationCount();

			/**
			* �ش� ��ȣ�� UI ���� ������ �����ɴϴ�.
			*/
			static CUIConfig* GetUIConfiguration(_In_ int nNumber);

			/**
			* �ش� ��ȣ�� UI ������ �����մϴ�.
			*/
			static bool RunUIConfiguration(_In_ long nNumber);

			/**
			* ���� UI ���� ������ �����ɴϴ�.
			*/
			static CUIConfig* GetCurrentUIConfiguration();

			/**
			* ���� UI ���� ��ȣ�� �����ɴϴ�.
			*/
			static long GetCurrentUIConfigurationNumber();
			
			/**
			* �����ӿ�ũ�� ��ϵ� ��� �ڽ�â�� ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetAllRavidChildFrame(_Out_ std::vector<CRavidChildFrameBase*>* pVctChildFrame);
			
			/**
			* �����ӿ�ũ�� ��ϵ� ��� ������ ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetAllRavidFormView(_Out_ std::vector<CRavidFormViewBase*>* pVctFormView);
			
			/**
			* �����ӿ�ũ�� ��ϵ� ��� �̹������� ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetAllRavidImageView(_Out_ std::vector<CRavidImageView*>* pVctImageView);
			
			/**
			* �����ӿ�ũ�� ��ϵ� ��� ���̾�α��� ����Ʈ�� �����ɴϴ�.
			*/
			static bool GetAllRavidDialog(_Out_ std::vector<CRavidDialogBase*>* pVctDialog);

			/**
			* �ش� ID�� �並 �����ɴϴ�.
			*/
			static CRavidObject* FindView(_In_ long nObjectID = -1);
						
			/**
			* �ش� Ŭ���� & ID�� �並 �����ɴϴ�.
			*/
			static CRavidObject* FindView(_In_ CRuntimeClass* pRuntimeClass, _In_ long nObjectID = -1);
						
			/**
			* �ش� Ŭ���� Ÿ�� & ID�� �並 �����ɴϴ�.
			*/
			static CRavidObject* FindView(_In_ const std::type_info& classType, _In_ long nObjectID = -1);
			
			/**
			* �ش� Ŭ���� �̸� & ID�� �並 �����ɴϴ�.
			*/
			static CRavidObject* FindView(_In_ CString strClassNameIncludingNameSpace, _In_ long nObjectID = -1);
			
			/**
			* �ش� ��ġ�� ĸ���Ͽ� �̹����� �����ɴϴ�.
			*/
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage& riDst, _In_opt_ CRavidRect<int> rrROI);
			
			/**
			* �ش� ��ġ�� ĸ���Ͽ� �̹����� �����ɴϴ�.
			*/
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage& riDst, _In_opt_ CRavidRect<int>* pRrROI = nullptr);
			
			/**
			* �ش� ��ġ�� ĸ���Ͽ� �̹����� �����ɴϴ�.
			*/
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage* pRiDst, _In_opt_ CRavidRect<int> rrROI);
			
			/**
			* �ش� ��ġ�� ĸ���Ͽ� �̹����� �����ɴϴ�.
			*/
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage* pRiDst, _In_opt_ CRavidRect<int>* pRrROI = nullptr);
			
			/**
			* ���� �����ӿ�ũ�� Ÿ��Ʋ�� �����մϴ�.
			*/
			static bool SetRavidTitle(_In_ CString strTitle, _In_opt_ bool bHidePrefix = false);

			/**
			* ���� �����ӿ�ũ�� Ÿ��Ʋ�� �����ɴϴ�.
			*/
			static CString GetRavidTitle();
			
			/**
			* �����ӿ�ũ ��ü �� ������ �����մϴ�.
			*/
			static bool SetSkinType(_In_ ERavidSkinType eSkin);
			
			/**
			* �����ӿ�ũ ��ü �� ������ �����ɴϴ�.
			*/
			static ERavidSkinType GetSkinType();
			
			/**
			* ���� �����ӿ�ũ�� ������ ���� �����մϴ�.
			*/
			static bool SetRavidMainFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			
			/**
			* ���� �����ӿ�ũ�� ������ ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidMainFrameColor(_In_ ERavidFrameColorType eRFCT);
			
			/**
			* ���� �����ӿ�ũ�� ĸ�� ���� �����մϴ�.
			*/
			static bool SetRavidMainFrameCaptionColor(_In_ ERavidCaptionColorType eRCCT, _In_ COLORREF clr);
			
			/**
			* ���� �����ӿ�ũ�� ĸ�� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidMainFrameCaptionColor(_In_ ERavidCaptionColorType eRCCT);
			
			/**
			* ���� �����ӿ�ũ�� ���� ���� �����մϴ�.
			*/
			static bool SetRavidMainFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT, _In_ COLORREF clr);
			
			/**
			* ���� �����ӿ�ũ�� ���� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidMainFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT);
			
			/**
			* �ڽ� �������� ���� �����մϴ�.
			*/
			static bool SetRavidChildFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			
			/**
			* �ڽ� �������� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidChildFrameColor(_In_ ERavidFrameColorType eRFCT);
			
			/**
			* �ڽ� �������� ���� ���� �����մϴ�.
			*/
			static bool SetRavidChildFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT, _In_ COLORREF clr);
			
			/**
			* �ڽ� �������� ���� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidChildFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT);
			
			/**
			* ������ ��Ʈ�� ���� �����մϴ�.
			*/
			static bool SetRavidFormViewControlColor(_In_ ERavidControlColorType eRCCT, _In_ COLORREF clr);
			
			/**
			* ������ ��Ʈ�� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidFormViewControlColor(_In_ ERavidControlColorType eRCCT);
			
			/**
			* ���̾�α��� ������ ���� �����մϴ�.
			*/
			static bool SetRavidDialogFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			
			/**
			* ���̾�α��� ������ ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidDialogFrameColor(_In_ ERavidFrameColorType eRFCT);
						
			/**
			* ���̾�α��� ĸ�� ���� �����մϴ�.
			*/
			static bool SetRavidDialogCaptionColor(_In_ ERavidCaptionColorType eRCCT, _In_ COLORREF clr);
						
			/**
			* ���̾�α��� ĸ�� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidDialogCaptionColor(_In_ ERavidCaptionColorType eRCCT);
			
			/**
			* ���̾�α��� ��Ʈ�� ���� �����մϴ�.
			*/
			static bool SetRavidDialogControlColor(_In_ ERavidControlColorType eRCCT, _In_ COLORREF clr);
			
			/**
			* ���̾�α��� ��Ʈ�� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidDialogControlColor(_In_ ERavidControlColorType eRCCT);
			
			/**
			* �����ӿ�ũ�� �޴� ���� �����մϴ�.
			*/
			static bool SetRavidMenuColor(_In_ ERavidMenuColorType eRMCT, _In_ COLORREF clr);
			
			/**
			* �����ӿ�ũ�� �޴� ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidMenuColor(_In_ ERavidMenuColorType eRMCT);
			
			/**
			* �����ӿ�ũ�� ��Ʈ ���� �����մϴ�.
			*/
			static bool SetRavidSheetColor(_In_ ERavidSheetColorType eRMCT, _In_ COLORREF clr);
			
			/**
			* �����ӿ�ũ�� ��Ʈ ���� �����ɴϴ�.
			*/
			static COLORREF GetRavidSheetColor(_In_ ERavidSheetColorType eRMCT);
			
			/**
			* �α� �� On / Off �����մϴ�.
			*/
			static bool VisibleLogViewer(_In_ bool bVisible);
			
			/**
			* �α� ��� On / Off ���¸� �����ɴϴ�.
			*/
			static bool IsVisibleLogViewer();
			
			/**
			* �̹��� ���� On / Off �����մϴ�.
			*/
			static bool VisibleImageProcessingTool(_In_ bool bVisible);
			
			/**
			* �̹��� �� On / Off ���¸� �����ɴϴ�.
			*/
			static bool IsVisibleImageProcessingTool();
			
			/**
			* ��ũ�� ���̹��� On / Off �����մϴ�.
			*/
			static bool UseScreenSaver(_In_ bool bUse);
			
			/**
			* ��ũ�� ���̹� On / Off ���¸� �����ɴϴ�.
			*/
			static bool IsUsedScreenSaver();
			
			/**
			* ��ũ�� ���̹� Ÿ��Ʋ�� �����մϴ�.
			*/
			static bool SetScreenSaverTitle(_In_ CString strTitle);
			
			/**
			* ��ũ�� ���̹� Ÿ��Ʋ�� �����ɴϴ�.
			*/
			static CString GetScreenSaverTitle();
			
			/**
			* ��ũ�� ���̹� ��� �ð��� �����մϴ�.
			*/
			static bool SetScreenSaverWaitingTime(_In_ DWORD dwTime);
			
			/**
			* ��ũ�� ���̹� ��� �ð��� �����ɴϴ�.
			*/
			static DWORD GetScreenSaverWaitingTime();
			
			/**
			* �ش� ����� x �� �ػ󵵸� �����մϴ�.
			*/
			static bool SetAccuracyX(_In_ long nViewObjectID, _In_ double dblAccuracyX);
			
			/**
			* �ش� ����� y �� �ػ󵵸� �����մϴ�.
			*/
			static bool SetAccuracyY(_In_ long nViewObjectID, _In_ double dblAccuracyY);
			
			/**
			* ����ڰ� �Է��� Box�� �����մϴ�.
			*/
			static bool RunRavidInputBox(_In_ CRavidInputBoxInfo* pRavidInputBoxInfo, _In_opt_ CWnd* pWndParent = nullptr);
			
			/**
			* ���â�� �����մϴ�.
			*/
			static bool RunRavidNotification(_In_ CString strMessage, _In_opt_ ERavidNotificationType eNotification = ERavidNotificationType_Information, _In_opt_ ERavidModalType eModalType = ERavidModalType_Modal);
			
			/**
			* ���â�� �����մϴ�.
			*/
			static void EndRavidNotification(_In_ CRavidDlgNotification* pNotificationDlg, _In_ ERavidNotificationButtonType  eNotificationButton = ERavidNotificationButtonType_AllOk);
			
			/**
			* ���μ��� ������� â�� �����մϴ�.
			*/
			static bool RunRavidProgressDialog(_In_ CString strMessage, _In_ double dblMaxValue, _In_opt_ ERavidModalType eModalType = ERavidModalType_Modal, _In_opt_ COLORREF clrTextColor = RGB(0, 0, 0), _In_opt_ bool bShowProgressBar = true, _In_opt_ COLORREF clrProgressBarColor = LIME, _In_opt_ CBitmap* pBmpBackground = nullptr, _In_opt_ int nAlphaBlendValue = 127);

			/**
			* ���μ��� ������� â�� �����մϴ�.
			*/
			static void EndRavidProgressDialog();
			
			/**
			* ���μ��� ������� â�� �޽����� ������Ʈ�մϴ�.
			*/
			static bool UpdateProgressDialogMessage(_In_ CString strMessage);
			
			/**
			* ���μ��� ������� â�� ���� ���¸� ������Ʈ�մϴ�.
			*/
			static bool UpdateProgressDialogBar(_In_ double dblState);
			
			/**
			* ���μ��� ������� â�� �޽����� ���� ���¸� ������Ʈ�մϴ�.
			*/
			static bool UpdateMessageAndBar(_In_ CString strMessage, _In_ double dblState);
			
			/**
			* �ڽ� â�� ID ����� �����մϴ�.
			*/
			static void ShowChildFrameObjectID(_In_ bool bShow);
			
			/**
			* �ڽ� â�� ID ��� ���¸� �����ɴϴ�.
			*/
			static bool IsShowChildFrameObjectID();
			
			/**
			* ���������� ���� ����� �����մϴ�.
			*/
			static void ShowMainFrameToolBar(_In_ bool bShow);
			
			/**
			* ���������� ���� ��� ���¸� �����ɴϴ�.
			*/
			static bool IsShowMainFrameToolBar();
			
			/**
			* �ڽ� â�� ��ġ �� ũ�⸦ ��ȯ�մϴ�.
			*/
			static bool RavidChildFrameMoveWindow(_In_ long nObjectID, CRavidRect<int> rrPosition);
			
			/**
			* �ڽ� â�� ��ġ �� ũ�⸦ ��ȯ�մϴ�.
			*/
			static bool RavidChildFrameMoveWindow(_In_ long nObjectID, _In_ long nLeft, _In_ long nTop, _In_ long nRight, _In_ long nBottom);
			
			/**
			* ����� �̸� ����� �����մϴ�.
			*/
			static void ShowUserName(_In_ bool bShow);
			
			/**
			* ����� �̸� ��� ���¸� �����ɴϴ�.
			*/
			static bool IsShowUserName();

			// Only framework use

			static bool SetRavidMainFrameToolBarBottomEdgeDraw(_In_ bool bDraw);
			static bool GetRavidMainFrameToolBarBottomEdgeDraw();

			static bool SetRavidMainFrameToolBarTitleMinimumDisplayWidth(_In_ long nWidth);
			static bool GetRavidMainFrameToolBarTitleMinimumDisplayWidth();

			static bool SetRavidMainFrameToolBarTitleStartOffsetX(_In_ long nOffsetX);
			static long GetRavidMainFrameToolBarTitleStartOffsetX();


			static bool SetRavidChildFrameToolBarBottomEdgeDraw(_In_ bool bDraw);
			static bool GetRavidChildFrameToolBarBottomEdgeDraw();

			static bool SetRavidChildFrameToolBarTitleMinimumDisplayWidth(_In_ long nWidth);
			static bool GetRavidChildFrameToolBarTitleMinimumDisplayWidth();

			static bool SetRavidChildFrameToolBarTitleStartOffsetX(_In_ long nOffsetX);
			static long GetRavidChildFrameToolBarTitleStartOffsetX();

			static CUIConfigElement* GetUIConfigurationElement(_In_ int nID, _In_ CString strName);
			
			/**
			* �α� ����� �����͸� �����ɴϴ�.
			*/
			static CRavidLogViewer* GetLogViewer();
			
			/**
			* �α� ����� �ڽ� â�� �����͸� �����ɴϴ�.
			*/
			static CRavidChildFrameLogViewer* GetLogViewerFrame();
			
			/**
			* �̹��� �� ����� �����͸� �����ɴϴ�.
			*/
			static CRavidImageProcessingTool* GetImageProcessingTool();
			
			/**
			* �̹��� �� ����� �ڽ� â�� �����͸� �����ɴϴ�.
			*/
			static CRavidChildFrameImageProcessingTool* GetImageProcessingToolFrame();
			
			/**
			* �� ���� ����� �����͸� �����ɴϴ�.
			*/
			static CRavidDlgModelManager* GetDlgModelManager();
			
			/**
			* �̹��� �� �ʱ�ȭ ���¸� �����ɴϴ�.
			*/
			static bool IsImageProcessingToolInitilize();
			
			/**
			* Ravid���� �⺻������ �����ϴ� RavidMainFrame�� �����մϴ�.
			*/
			static bool CreateRavidMainFrame(_In_opt_ UINT uiToolBarResourceEnableID = 0, _In_opt_ UINT uiToolBarResourceDisableID = 0);
			
			/**
			* ������ ���̽��� ����� UI ������ ����մϴ�.
			*/
			static bool RegisterUIConfiguration();
			
			/**
			* UI �� �ʿ��� ���ҽ��� �ʱ�ȭ�մϴ�.
			*/
			static bool Initialize();
			
			/**
			* UI �� ����� ���ҽ��� �����մϴ�.
			*/
			static bool Terminate();
			
			/**
			* ��ϵ� �ڽ� �������� ũ�⸦ ������Ʈ�մϴ�.
			*/
			static bool UpdateChildFrameSize();
			
			/**
			* �ش� �������� ���ش��� �����մϴ�.
			*/
			static bool SetImageViewExtraData(_In_ long nViewObjectID, _In_ ERavidImageViewExtraDataType eType, _In_ CString strData);
			
			/**
			* �ش� �������� ���ش��� �����ɴϴ�.
			*/
			static bool GetImageViewExtraData(_In_ long nViewObjectID, _In_ ERavidImageViewExtraDataType eType, _Out_ CString& strData);
			
			/**
			* ���� �������� ũ�⸦ �����ɴϴ�.
			*/
			static CRavidRect<int> GetMainFrameClientRect();
			
			/**
			* ���� �������� ���ٸ� ������Ʈ�մϴ�.
			*/
			static bool UpdateRavidMainFrameToolbar();
			
			/**
			* RAVID�� UI ���ҽ��� �����մϴ�.
			*/
			static void BeginRavidUIResource();
			
			/**
			* RAVID�� UI ���ҽ��� �ݳ��մϴ�.
			*/
			static void EndRavidUIResource(_In_opt_ bool bSynchronization = true);

			static HMODULE GetRavidFrameworkResource();
			static HMODULE GetBackupRavidFrameworkResource();

			static void SetResourceHandle(_In_ HMODULE hResource);

			static void CloseAllMDIClient();

			static bool RegisterMFCToolBarImages(_In_ HINSTANCE hResourceHandle, _In_ UINT uiID);
			static CMFCToolBarImages* GetRegisterMFCToolBarImages(_In_ HINSTANCE hResourceHandle, _In_ UINT uiID);

			static bool SetLastFocusChildFrame(_In_ CRavidChildFrameBase* pChildFrame);
			static CRavidChildFrameBase* GetLastFocusChildFrame();

			static ID2D1Factory* GetD2DFactory();
			static IDWriteFactory* GetDWriteFactory();

			static ID2D1StrokeStyle* GetD2DStrokeStyle(_In_ ERavidImageViewPenStyle ePenStyle);

			static bool SetImageViewDrawingElapsedTime(_In_ CRavidImageView* pImageView);
			static double GetImageViewDrawingIntervalTime();

			static bool AddNotificationDlg(CRavidDlgNotification* pDlg);

			static bool InternalClearNotifications();
			
			/**
			* UI �� ȭ�� ũ�⿡ ������ ��ȭ�� �ϵ��� �����մϴ�.
			*/
			static bool SetRelativeLayout(_In_ bool bEnable = true);
						
			/**
			* UI �� ȭ�� ũ�⿡ ������ ��ȭ�� �ϴ� ������ �����ɴϴ�.
			*/
			static bool GetRelativeLayout();

			static bool SetImageViewEnableScrollBar(_In_ long nViewObjectID, _In_ CString strData);
			static bool GetImageViewEnableScrollBar(_In_ long nViewObjectID);


			static bool ConfigurationSave();
			static bool ConfigurationSaveAs(_In_ CString strTitle);
			static ERavidConfigurationTitle ConfigurationRename(_In_ CString strTitle);
			static bool ConfigurationDelete(_In_ int nIndex);

			static bool HideConfiguration();
			static bool MakeUIConfig(_In_ CString strTitle, _In_ std::vector<SConfigurationElementInfo> vctCEI, _Out_ CUIConfig& uc);

			static void SetMainFrameBackgroundBitmap(_In_ CBitmap* pBmp);
			static CBitmap* GetMainFrameBackgroundBitmap();
			
			/**
			* ���� ������ Ŭ������ �����ɴϴ�.
			*/
			static CRavidMainFrame* GetMainFrame();

		private:
			static bool FindChildWindow(_Inout_ SWindowElement& sWE);

			static bool AddUIConfiguration(_In_ CUIConfig& ravidUIConfig);
			static bool DeleteUIConfiguration(_In_ CUIConfig* pUIConfig);

			static bool ClearUIConfiguration();

			static CMultiDocTemplate* AddMultiDocTemplate(_In_ UINT nResourceID, _In_ CRuntimeClass* pDocument, _In_ CRuntimeClass* pChildFrame, _In_ CRuntimeClass* pView, _In_opt_ bool bDLLResource = false);

			static CUIManager* GetInstance();

			static CRuntimeClass* DecideChildFrame(CRuntimeClass* pView);

			static bool FindDialog(_In_ SWindowElement& sW, _Out_ std::vector<CRavidDialogBase*>* pVctDialog);

			static std::vector<SEasyConfigurationView>* GetEasyConfigurationView();

			static bool IsAvailableRegisterViewInfos();

			static bool CreateRegisterViewInfosTable(_In_opt_ bool bSave = true);

			static bool DropRegisterViewInfosTable(_In_opt_ bool bSave = true);

			static bool GetRegisterViewInfos(_Out_ std::vector<SRegisterViewInfo>& vctInfos);
			static bool GetRegisterViewInfos(_Out_ std::vector<SRegisterViewInfo>* pVctInfos);

			static bool GetConfigurationElementInfo(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool GetConfigurationElementInfo(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool GetConfigurationElementInfoPx(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool GetConfigurationElementInfoPx(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateRegisterViewInfosTable(_In_ std::vector<SRegisterViewInfo>& vctInfos);
			static bool UpdateRegisterViewInfosTable(_In_ std::vector<SRegisterViewInfo>* pVctInfos);

			static bool UpdateConfigurationElementInfo(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool UpdateConfigurationElementInfo(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateConfigurationElementInfoPx(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool UpdateConfigurationElementInfoPx(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateRegisterViewInspectionMenuTable(_In_ int nSequence, _In_ ERegisterViewType eType, _In_ std::vector<CString>& vctMenu);
			static bool UpdateRegisterViewTeachingMenuTable(_In_ int nSequence, _In_ ERegisterViewType eType, _In_ std::vector<SRegisterTeachingMenuInfo>& vctMenu);

			static bool GetRegisterViewInspectionMenu(_In_ int nSequence, _Out_ std::vector<CString>& vctMenu);
			static bool GetRegisterViewTeachingMenu(_In_ int nSequence, _Out_ std::vector<SRegisterTeachingMenuInfo>& vctMenu);

			static ERegisterViewType GetViewType(_In_ CRavidObject* pObject);
			static ERegisterViewType GetViewType(_In_ CString strClass);

			static bool SetConfigurationData(_In_ EUIManagerConfigurationDataType eType, _In_ CString strData, _In_opt_ CString strSubTitle = _T(""));
			static bool GetConfigurationData(_In_ EUIManagerConfigurationDataType eType, _Out_ CString& strData, _In_opt_ CString strSubTitle = _T(""));

			static bool GetRelativeLayoutTable();

			static bool UpdateSkinType();

			friend class CAuthorityManager;
			friend class CRavidDlgViewConfigurationTool;
			friend class CRavidImageProcessingTool;
			friend class CRavidDlgFrameworkConfigurationTool;
			friend class CRavidDlgConfigurationNew;

		protected:
			virtual ptrdiff_t OnMessage(Ravid::Framework::CMessageBase* pMessage);

		private:
			static bool InitViewConfiguration();
			static bool GetViewConfiguration(_Out_ std::vector<SViewConfiguration>& vctInfos);
			static bool GetViewConfiguration(_Out_ std::vector<SViewConfiguration>* pVctInfos);
			static bool InsertViewConfiguration(_In_ std::vector<SViewConfiguration>& vctInfos);
			static bool InsertViewConfiguration(_In_ std::vector<SViewConfiguration>* pVctInfos);
			static bool DeleteViewConfiguration(_In_ int nSequence);

			static bool UpdateConfiguration(_In_ int nSequence, _In_ std::vector<SConfigurationElementInfo> vctCEI);
			static bool AllUpdateViewConfiguration(_In_ std::vector<SViewConfiguration>& vctInfos);
			static bool AllUpdateViewConfiguration(_In_ std::vector<SViewConfiguration>* pVctInfos);


		protected:
			ERavidSkinType m_eSkinType = ERavidSkinType_Bright;
			CRavidMainFrame* m_pMainWnd = nullptr;
			HMODULE m_hResource = 0;

			CString m_strRavidTitle = _T("Ravid");

			std::vector<CMultiDocTemplate*>* m_pVctTemplate = nullptr;

			HINSTANCE m_hInstBackup = 0;

			std::map<CStringA, CMultiDocTemplate*> m_mapDocTemplates;

			CUIConfig* m_pCurrentUIConfig = nullptr;
			std::vector<CUIConfig*> m_vctUIConfigs;

			COLORREF m_clrRavidMainFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidMainFrameCaption[ERavidCaptionColorType_Count] = { 0, };
			COLORREF m_clrRavidMainFrameToolBar[ERavidToolBarColorType_Count] = { 0, };

			COLORREF m_clrRavidChildFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidChildFrameToolBar[ERavidToolBarColorType_Count] = { 0, };

			COLORREF m_clrRavidFormViewControl[ERavidControlColorType_Count] = { 0, };

			COLORREF m_clrRavidDialogFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidDialogCaption[ERavidCaptionColorType_Count] = { 0, };
			COLORREF m_clrRavidDialogControl[ERavidControlColorType_Count] = { 0, };

			COLORREF m_clrRavidMenu[ERavidMenuColorType_Count] = { 0, };

			COLORREF m_clrRavidSheet[ERavidSheetColorType_Count] = { 0, };

			bool m_bIsRavidMainFrameToolBarBottomEdge = false;
			bool m_bIsRavidChildFrameToolBarBottomEdge = false;

			long m_nRavidMainFrameToolBarTitleMinimumDisplayWidth = 0;
			long m_nRavidChildFrameToolBarTitleMinimumDisplayWidth = 0;

			long m_nRavidMainFrameToolBarTitleStartOffsetX = 0;
			long m_nRavidChildFrameToolBarTitleStartOffsetX = 0;

			std::vector<SEasyConfigurationView> m_vctEasyConfigurationView;

			std::vector<SRegisterMFCToolBarImagesInfo> m_vctRegisterMFCToolBarImages;

			static LPCTSTR m_lpszRavidImageViewExtraDataType[ERavidImageViewExtraDataType_Count];

			CRavidChildFrameBase* m_pLastFocuseChildFrame = nullptr;

			bool m_bIsShowChildFrameObjectID = true;

			bool m_bIsShowMainFrameToolBar = true;

			bool m_bIsShowUserName = true;

			ID2D1Factory* m_pD2DFactory = nullptr;
			IDWriteFactory* m_pDWriteFactory = nullptr;

			ID2D1StrokeStyle* m_pArrD2DStrokeStyle[ERavidImageViewPenStyle_Count] = { nullptr, };

			static LPCTSTR m_lpszConfigurationDataType[EUIManagerConfigurationDataType_Count];

			std::map<CRavidImageView*, Miscellaneous::CPerformanceCounter*> m_mapImageViewDrawingElapsedTime;

			CCriticalSection m_csNotification;
			std::vector<CRavidDlgNotification*> m_vctModelessNotificationDlgs;
			std::vector<CRavidDlgNotification*> m_vctModalNotificationDlgs;

			CRavidDlgProgress* m_pProgressDlg = nullptr;

			bool m_bRelativeLayout = true;

			CRavidChildFrameBase* m_pRCFB;

			CBitmap m_bmpMainFrameBackground;
		};
	}
}
