#pragma once
#include "ImageCameraView.h"
// CRavidDlgImageViewTest 대화 상자

namespace Ravid
{
	namespace Framework
	{
		class CImageViewHistory;

		class CDlgViewHistory : public CRavidDialogBase
		{
			DECLARE_DYNCREATE(CDlgViewHistory)

		public:
			CDlgViewHistory(CWnd* pParent = nullptr);   // 표준 생성자입니다.
			virtual ~CDlgViewHistory();

		// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
			enum { IDD = IDD_DIALOG_IMAGE_HISTORY };
#endif

		protected:
			virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

			DECLARE_MESSAGE_MAP()
		public:
			virtual BOOL Create(_In_opt_ CWnd* pParent = nullptr);
			virtual BOOL OnInitDialog();

			afx_msg BOOL OnEraseBkgnd(CDC* pDC);

			void SettingFolderDate(const CString& strDate) { m_strDate = strDate; }
			void SettingLotID(const CString& strLotID) { m_strLotID = strLotID; }
			void SettingCellID(const CString& strCellID) { m_strCellID = strCellID; }
			
			bool LoadFolderImage();

			void SetViewAcc(int nCh, double dblXAcc, double dblYAcc);

		private:
			enum EImgView
			{
				EImgView_1 = 0,
				EImgView_2,

				EImgView_Count,
			};

			CImageViewHistory* m_pImageView[EImgView_Count] = { nullptr, };
			CCreateContext m_context;

			CString m_strDate = _T("");
			CString m_strLotID;
			CString m_strCellID;

			bool InitializeImageView();
		public:
			afx_msg void OnBnClickedButtonImagehistoryMeasurement();
			afx_msg void OnBnClickedButtonimagehistoryImageload();
			afx_msg void OnBnClickedButtonImagehistoryOpenpath();
			afx_msg void OnBnClickedButtonImagehistoryClose();
		};
	}
}
