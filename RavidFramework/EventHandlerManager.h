#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Device
	{
		class CDeviceBase;
	}

	namespace Framework
	{
		class CRavidLogViewer;
		class CPacket;
		class CTeachingObject;
		class CEventHandlerBase;
		class CRavidImageProcessingTool;
		class CRavidImageView;
		class CModelInfo;
		class CViewObjectElement;
		
		/**
		* �����ӿ�ũ �̺�Ʈ ���� Ŭ�����Դϴ�.
		*/
		class AFX_EXT_CLASS CEventHandlerManager : public CRavidObjectEx
		{
		private:
			CEventHandlerManager();

		public:
			virtual ~CEventHandlerManager();
			
			/**
			* �̺�Ʈ�� �ְ� ���� �ڵ鷯�� �߰��մϴ�.
			*/
			static bool AddEventHandler(_In_ CEventHandlerBase* pEventHandler, _In_opt_ bool bAutoDestroy = true);
			
			/**
			* ��ϵ� �ڵ鷯�� ��� �����մϴ�.
			*/
			static void ClearEventHandler();
			
			/**
			* �ش� �ε����� �ڵ鷯�� �����ɴϴ�.
			*/
			static CEventHandlerBase* GetEventHandler(_In_ long nIndex);
			
			/**
			* ��ϵ� �ڵ鷯�� ���� �����ɴϴ�.
			*/
			static long GetEventHanderCount();
			
			/**
			* ��ϵ� �ڵ鷯�� OnInspect �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnInspect(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
			
			/**
			* ��ϵ� �ڵ鷯�� OnLearn �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnLearn(_In_ Algorithms::CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
			
			/**
			* ��ϵ� �ڵ鷯�� OnDeleteElement �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnDeleteElement(_In_ Algorithms::CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_ CViewObjectElement* pObjectElement, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
			
			/**
			* ��ϵ� �ڵ鷯�� OnAcquisition �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnAcquisition(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ CRavidImageView* pView = nullptr, Device::CDeviceBase* pDevice = nullptr);
			
			/**
			* ��ϵ� �ڵ鷯�� OnReceivingPacket �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnReceivingPacket(_In_ CPacket* pPacket, _In_ Device::CDeviceBase* pDevice);
			
			/**
			* ��ϵ� �ڵ鷯�� OnLogMessage �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnLogMessage(_In_ SRavidLogData* pLogData);
			
			/**
			* ��ϵ� �ڵ鷯�� OnSequenceStart �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnSequenceStart();
			
			/**
			* ��ϵ� �ڵ鷯�� OnSequencePause �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnSequencePause();
			
			/**
			* ��ϵ� �ڵ鷯�� OnSequenceStop �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnSequenceStop();
			
			/**
			* ��ϵ� �ڵ鷯�� OnOpenModel �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnOpenModel(_In_ CModelInfo* pModelInfo);
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseModel �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseModel(_In_ CModelInfo* pModelInfo);
			
			/**
			* ��ϵ� �ڵ鷯�� OnNewModel �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnNewModel(_In_ CModelInfo* pModelInfo);
			
			/**
			* ��ϵ� �ڵ鷯�� OnCopyModel �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCopyModel(_In_ CModelInfo* pModelInfo);
			
			/**
			* ��ϵ� �ڵ鷯�� OnDeleteModel �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnDeleteModel(_In_ int nModelNumber);
			
			/**
			* ��ϵ� �ڵ鷯�� OnLogIn �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnLogIn(_In_ CString strUserName, _In_ EUserType eChangedUserType);
			
			/**
			* ��ϵ� �ڵ鷯�� OnLogOut �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnLogOut();
			
			/**
			* ��ϵ� �ڵ鷯�� OnModelParameterSaveChanged �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnModelParameterSaveChanged();
			
			/**
			* ��ϵ� �ڵ鷯�� OnModelTableSaveChanged �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnModelTableSaveChanged(_In_ ERavidTableEventModelManager eEvent, _In_ CModelInfo* pModelInfo, _In_ CString strPreValue);
			
			/**
			* ��ϵ� �ڵ鷯�� OnStartImageProcessingTool �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnStartImageProcessingTool();
			
			/**
			* ��ϵ� �ڵ鷯�� OnEndImageProcessingTool �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnEndImageProcessingTool();
			
			/**
			* ��ϵ� �ڵ鷯�� OnDeviceInitialized �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnDeviceInitialized(_In_ Device::CDeviceBase* pDevice);
			
			/**
			* ��ϵ� �ڵ鷯�� OnDeviceTerminated �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnDeviceTerminated(_In_ Device::CDeviceBase* pDevice); 
			
			/**
			* ��ϵ� �ڵ鷯�� OnClose �̺�Ʈ�� �߻��մϴ�.
			*/
			static UINT BroadcastOnClose();
			
			/**
			* ��ϵ� �ڵ鷯�� OnUserToolbarEventRavidMainFrame �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnUserToolbarEventRavidMainFrame(_In_ UINT ulResourceID);
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidMainFrame �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidMainFrame(_In_ ERavidToolBarEventMainFrame eEvent);
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidChildFrameBase �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidChildFrameBase(_In_ CView* pView, _In_ ERavidToolBarEventChildFrameBase eEvent);
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidImageView �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidImageView(_In_ CRavidImageView* pView, _In_ ERavidToolBarEventImageView eEvent);
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidLogViewer �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidLogViewer(_In_ CRavidLogViewer* pView, _In_ ERavidToolBarEventLogViewer eEvent);
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidImageProcessingTool �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidImageProcessingTool(_In_ CRavidImageProcessingTool* pView, _In_ ERavidToolBarImageProcessingTool eEvent);
			
			/**
			* ��ϵ� �ڵ鷯�� RunUIConfiguration �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastRunUIConfiguration(_In_ long nNumber);
			
			/**
			* ��ϵ� �ڵ鷯�� OnTerminate �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnTerminate();
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseModelManager �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseModelManager();
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseDeviceManager �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseDeviceManager();
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseLogIn �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseLogIn();
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseAuthorityManager �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseAuthorityManager();
			
			/**
			* ��ϵ� �ڵ鷯�� OnCloseScreenSaverSetting �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnCloseScreenSaverSetting();
			
			/**
			* ��ϵ� �ڵ鷯�� OnToolbarEventRavidImageViewTeaching �̺�Ʈ�� �߻��մϴ�.
			*/
			static void BroadcastOnToolbarEventRavidImageViewTeaching(_In_ CRavidImageView* pView, _In_ int nSelectIdx);

		private:
			static bool AddFrameworkEventHandler(_In_ CEventHandlerBase* pEventHandler, _In_opt_ bool bAutoDestroy = true);
			static void ClearFrameworkEventHandler();
			static CEventHandlerManager* GetInstance();
			static CEventHandlerBase* GetFrameworkEventHandler(_In_ long nIndex);
			static long GetFrameworkEventHanderCount();

			friend class CUIManager;

		protected:
			typedef struct sEventHandlerData
			{
				CEventHandlerBase* pEventHandler;
				bool bAutoDestroy;
			}
			SEventHandlerData;


			std::vector<SEventHandlerData> m_vctEventHandlers;
			std::vector<SEventHandlerData> m_vctFrameworkEventHandlers;

		};
	}
}

