#pragma once
#include "ImageCameraView.h"
// CRavidDlgImageViewTest 대화 상자

namespace Ravid
{
	namespace Framework
	{
		class CImageViewHistory;

		class CDlgViewDefectMap : public CRavidDialogBase
		{
			DECLARE_DYNCREATE(CDlgViewDefectMap)

			enum EImgView
			{
				EImgView_1 = 0,
				EImgView_2,

				EImgView_Count,
			};

		public:
			CDlgViewDefectMap(CWnd* pParent = nullptr);   // 표준 생성자입니다.
			virtual ~CDlgViewDefectMap();

		// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
			enum { IDD = IDD_DIALOG_IMAGE_DEFECTMAP };
#endif

		protected:
			virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

			DECLARE_MESSAGE_MAP()
		public:
			virtual BOOL Create(_In_opt_ CWnd* pParent = nullptr);
			virtual BOOL OnInitDialog();

			afx_msg BOOL OnEraseBkgnd(CDC* pDC);



		private:


			CImageViewHistory* m_pImageView[EImgView_Count] = { nullptr, };
			CCreateContext m_context;

			CString m_strDate = _T("");

			bool InitializeImageView();

		public:
			bool SetImageBuffer(EImgView eCh, CRavidImage* pImage);

			afx_msg void OnBnClickedButtonDefectmapReset();
			afx_msg void OnBnClickedButtonDefectmapClose();
		};
	}
}
