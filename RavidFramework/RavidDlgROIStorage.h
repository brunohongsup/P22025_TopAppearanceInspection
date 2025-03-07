#pragma once

#include "RavidDialogBase.h"

// CRavidDlgROIStorage 대화 상자
namespace Ravid
{
	namespace Framework
	{
		class CRavidDlgROIStorage : public CRavidDialogBase
		{
			DECLARE_DYNAMIC(CRavidDlgROIStorage)

		public:
			CRavidDlgROIStorage(CWnd* pParent = nullptr);   // 표준 생성자입니다.
			virtual ~CRavidDlgROIStorage();

		// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
			enum { IDD = IDD_RAVID_IMAGE_TOOL_ROI_STORAGE };
#endif

		protected:
			virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

			virtual ptrdiff_t OnMessage(_In_ Ravid::Framework::CMessageBase* pMessage);

			DECLARE_MESSAGE_MAP()

		public:

			virtual BOOL OnInitDialog();
			virtual bool Create(_In_opt_ CWnd* pParent = nullptr);
			afx_msg void OnClose();
			virtual void PostNcDestroy();

			virtual void CloseROIStorage();
			virtual void ClearROIStorage();

			virtual CImageProcessingToolImageInfo* GetROIStorageImageInfo();

			virtual bool UpdateROIList(_In_ std::vector<CROIStorageElement*> vctROIStorageElement);
			virtual bool SetROIList(_In_ CROIStorageElement* pRSE);

			virtual bool LoadROI();
			virtual bool DeleteROI();
			virtual bool PreviewROI();

			virtual bool UpdateImageItemList(_In_ std::vector<CImageProcessingToolInfoBase*>* pVctImageToolViewInfo);
			virtual bool SetImageItemList(_In_ CImageProcessingToolImageInfo* pImageInfo);

			afx_msg void OnNMClickListRoiStorage(NMHDR *pNMHDR, LRESULT *pResult);
			afx_msg void OnBnClickedButtonDelete();
			afx_msg void OnBnClickedButtonLoad();
			afx_msg void OnNMRClickListRoiStorage(NMHDR *pNMHDR, LRESULT *pResult);
			afx_msg void OnCbnSelchangeComboRoiStorageImage();
			virtual BOOL PreTranslateMessage(MSG* pMsg);

		private:
			CListCtrl m_ListCtrl;
			CImageProcessingToolImageInfo* m_pImageInfo = nullptr;
			std::vector<CROIStorageElement*> m_vctROIStorageElement;
			
		public:
			bool m_bSelectedROIStorage = false;
		};
	}
}
