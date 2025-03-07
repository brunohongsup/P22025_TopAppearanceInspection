#pragma once


#include "resource.h"

#include "UI\CtrlGradientButton.h"
#include "UI\CtrlLabel.h"
#include "Definition.h"

#include "EventHandlerMain.h"

#include "ImageCameraView.h"
#pragma comment(lib, "UxTheme.lib")
// CFormViewOptions 보기
using namespace Ravid::Framework;

using namespace CDefinition;
class CFormViewOptions : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewOptions)

protected:
	CFormViewOptions();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CFormViewOptions();

public:
	enum ELabelTitle
	{
	
		ELabel_ProcsseOption = 0,
		ELabel_SystemOption,
		ELabel_SystemPassword,
		ELabel_Language,
		ELabel_CameraInfo,
		ELabel_TitleCount,
	};

	enum ELabelName
	{
		ELabel_SYSTEMOPTION_SAVEDURATION = 0,
		ELabel_SYSTEMOPTION_SAVEEIMAGEDURATION,

		ELabel_HeightSize,
		ELabel_WidthSize,

		ELabel_Resolution,
		ELabel_Camera,
		ELabel_Camera_CAMERA_X1,
		ELabel_Camera_CAMERA_Y1,
		ELabel_Camera_CAMERA_X2,
		ELabel_Camera_CAMERA_Y2,
		ELabel_Camera_CAMERA_X1_DATA,
		ELabel_Camera_CAMERA_Y1_DATA,
		ELabel_Camera_CAMERA_X2_DATA,
		ELabel_Camera_CAMERA_Y2_DATA,

		ELabel_JPGSave,

		ELabel_NameCount,
	};

	enum EEditName
	{	
		EEditName_SaveDuration = 0,
		EEditName_SaveImageDuration,
		EEditName_HeightSize_Data,
		EEditName_WidthSize_Data,

		EEditName_JpgSave_Data,
		EEditName_Count,
	};

	enum ECheckBox
	{
		ECheck_ProcessOption = 0,
		ECheck_ProcessOption_Measure, 
		ECheck_ProcessOption_Defect, 
		ECheck_ImageSaveOK,
		ECheck_ImageSaveNG,

		ECheck_NameCount,
	};
	enum ERadioBtn
	{
		ERadio_Chiness = 0,
		ERadio_English,
		ERadio_Korean,

		ERadio_BMP,
		ERadio_JPG,
		ERadio_LanguageCount,

	};

#ifdef AFX_DESIGN_TIME
	enum {
		IDD = IDD_FORM_OPTIONS};
#endif

#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:

	virtual void DoDataExchange(CDataExchange* pDX);
	virtual void OnInitialUpdate();
	virtual void OnDestroy();
	virtual BOOL PreTranslateMessage(MSG* pMsg);


	DECLARE_MESSAGE_MAP()
private:
	SdefaultModelParam * m_pModelParam;

	CRavidSheet m_SheetResult;
	CRavidSheet m_SheetNgList;

	CFont		m_font;
	CFont		m_fontBtn;
	LOGFONT		m_lf;

	CCtrlLabel m_stcTitle[ELabel_TitleCount];
	CCtrlLabel m_stcName[ELabel_NameCount];

	CButton m_btnCheckBox[ECheck_NameCount];
	CButton m_btnRadioBtn[ERadio_LanguageCount];

	CMFCButton m_btnSave;
	CEdit m_edit[EEditName_Count];

	CCtrlGradientButton	m_btnReset;
public:
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }
	void InitData();
	bool InitSheetResult();
	bool InitSheetNGList();
	int GetLanguageStatus();


public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedButtonOptionsSave();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
};




