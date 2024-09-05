
#pragma once

#include "RavidDialogBase.h"
#include "RavidTreeCtrl.h"


namespace Ravid
{
	namespace Framework
	{
		class CRavidViewConfigurationToolSlider;
		class AFX_EXT_CLASS CRavidDlgConfigurationNew : public CRavidDialogBase
		{
		public:
			CRavidDlgConfigurationNew(CWnd* pParent = NULL);
			virtual ~CRavidDlgConfigurationNew();

			virtual bool CreateMe(CWnd* pParent = nullptr);

		protected:
			virtual void DoDataExchange(CDataExchange* pDX);

			DECLARE_MESSAGE_MAP()
		protected:
			bool Save();
			virtual bool LoadData();
			virtual bool ClearRegisterViewInfoVector();
			virtual bool ClearUseConfigElementInfoVector();
			virtual bool UpdateRegisterTree();
			virtual HTREEITEM GetRegisteredViewTreeItem(HTREEITEM hItem);
			virtual bool CheckConfigurationNewPermission();

			virtual BOOL OnInitDialog();
			afx_msg void OnDestroy();
			afx_msg void OnClose();
			afx_msg void OnPaint();

			afx_msg void OnBtnClickedRavidDlgConfigurationNewSave();
			afx_msg void OnBtnClickedRavidDlgConfigurationNewCancel();
			afx_msg void OnNMRClickedTreeRavidDlgViewRegister(NMHDR *pNMHDR, LRESULT *pResult);

		public:
			bool Run();
			void Stop(_In_ bool bRunCurrentConfig = false);
			bool IsOpen();

			virtual bool SetSlider(_In_ CRavidViewConfigurationToolSlider* pSlider);
			virtual bool InitSlider();
			virtual void SetChangedStatus(_In_ bool bChange); 
		
		protected:
			virtual ptrdiff_t OnMessage(Ravid::Framework::CMessageBase* pMessage);

		private:
			CRavidViewConfigurationToolSlider* m_pSlider = nullptr;					// Slider

			CRavidTreeCtrl m_treeRegisterViewList;									// Ʈ��
			std::vector<SRegisterViewInfo*> m_vctRegisterView;						// ����� �� �ִ� ���
			std::vector<SConfigurationElementInfo*> m_vctUseConfigElementInfo;		// ���� Ȱ��ȭ�� ���

			std::vector<CString> m_vctHighNode[ERegisterViewType_Count];			// Tree String Text

			bool m_bIsChanged = false;
			bool m_bIsSaved = false;
			bool m_bIsStop = false;
			bool m_bReset = false;
			bool m_bIsOpen = false;
		};
	}
}

