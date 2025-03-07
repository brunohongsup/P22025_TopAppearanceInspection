#pragma once

#include "RavidDialogBase.h"
#include <memory>

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CRavidDlgGeometryScript : public CRavidDialogBase
		{
			DECLARE_DYNAMIC(CRavidDlgGeometryScript)

		public:
			CRavidDlgGeometryScript(_In_opt_ CWnd* pParent = nullptr);
			virtual ~CRavidDlgGeometryScript();

			virtual ptrdiff_t OnMessage(_In_ Ravid::Framework::CMessageBase* pMessage);

			virtual void DoDataExchange(CDataExchange* pDX);
			virtual BOOL OnInitDialog();
			afx_msg void OnSize(UINT nType, int cx, int cy);

			virtual bool Create(_In_opt_ CWnd* pParent = nullptr);

		public:
			DECLARE_MESSAGE_MAP()

		public:
			virtual bool SetGeometryScript(_In_ std::vector<std::pair<COLORREF, CString> >* pVctScript);
			virtual void SetScriptTitle(_In_ CString strTitle);

		protected:
			virtual TViewThreadDisplayer* GetDisplayer() override;

		protected:
			CString m_strTitle = _T("");

		public:
			virtual BOOL PreTranslateMessage(MSG* pMsg);
			virtual void PostNcDestroy();
			bool Clear();
			void CloseScript();

			afx_msg void OnClose();

		protected:
			CRichEditCtrl m_editScript;

		};
	}
}
