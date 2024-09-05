#pragma once
#include "Resource.h"
#include "CommonCls/Util.h"
#include "UI/CtrlLabel.h"
#include "EventHandlerCamera.h"
#include "Definition.h"
#include "PictureEx.h"

#pragma comment(lib,"ExtCtrls.lib") 

using namespace Ravid::Framework;
using namespace CDefinition;
class CFormViewCameraControl : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewCameraControl)

protected:
	CFormViewCameraControl();
	virtual ~CFormViewCameraControl();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_CAMERA };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

	enum EStatic
	{
		EStatic_Camera = 0,
 		EStatic_Calibration,
// 		EStatic_Result,

		EStatic_Count,
	};


	enum EButton
	{
		EButton_TypeLeft = 0,
		EButton_TypeRight,


		EButton_Count,
	};
private:
	SdefaultModelParam * m_pModelParam;
protected:
	CCtrlLabel m_static[EStatic_Count];
	ECameraNum m_eCamType = ECameraNum_Upper;

	CMFCButton m_btn[EButton_Count];

	CRavidSheet m_Sheet;
	CFont		m_font;
	CFont		m_fontBtn;

	LOGFONT		m_lf;
	CPictureEx m_picCamDraw;
	virtual void DoDataExchange(CDataExchange* pDX);


	afx_msg void OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetRClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndEdit(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetStartSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetEndSelChange(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetBeginDrag(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClickLight(NMHDR *pNotifyStruct, LRESULT* pResult);
	
	
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
		
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }

	void InitializeSheet();
	void UpdateSheet();
	void SettingViewParam();
	void OptionsFormUpdate();
	afx_msg void OnBnClickedBtnCameraFront();
	afx_msg void OnBnClickedBtnCameraRear();

	int m_nCOuntsss = 0;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
};


