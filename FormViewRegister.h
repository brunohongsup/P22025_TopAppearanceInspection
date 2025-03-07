#pragma once


#include "P22025_TopEngBatteryAppearanceInspection.h"
#include "UI\CtrlGradientButton.h"
#include "UI\CtrlLabel.h"

#include "Definition.h"
#include "EHBase.h"

#include "RegisterPageImageStatistic.h"
#include "RegisterPageMarkROI.h"
#include "RegisterPageMeasure.h"


// CFormViewRegister 보기
using namespace Ravid::Framework;
using namespace CDefinition;

class CRegisterPageMeasure;
class CRegisterPageImageStatistic;
class CRegisterPageMarkROI;



class CFormViewRegister : public CRavidFormViewBase
{
	DECLARE_DYNCREATE(CFormViewRegister)

protected:
	CFormViewRegister();           // 동적 만들기에 사용되는 protected 생성자입니다.
	virtual ~CFormViewRegister();

public:
	enum ELabelName
	{
		ELabel_ModelName = 0,
		ELabel_ToTalName,
		ELabel_YieldName,
		ELabel_LotIDName,
		ELabel_OKName,
		ELabel_NGName,
		ELabel_Count,
	};

	enum ELabelData
	{
		ELabel_ModelData = 0,
		ELabel_ToTalData,
		ELabel_YieldData,
		ELabel_LotIDData,
		ELabel_OKData,
		ELabel_NGData,
		ELabel_DataCount,
	};

	enum EBtn
	{
// 		EBtn_Align_LeftTop = 0,
// 		EBtn_Align_LeftBottom,
// 		EBtn_Align_RightTop,
// 		EBtn_Align_RightBottom,
		EBtn_Live,
		EBtn_Stop,
		EBtn_LoadDXF,
		EBtn_DrawDXF,
		EBtn_Load,
		EBtn_Save,
		EBtn_Front,
		EBtn_Rear,
// 		EBtn_Add,
// 		EBtn_Delete,
// 		EBtn_Edit,
// 		EBtn_Datum,
// 		EBtn_MeasureAll,
// 		EBtn_Measure,
// 		EBtn_ShowMeasure,
// 		EBtn_LoadFromExcel,
// 		EBtn_SaveToExcel,

		EBtn_Tab_Measure,
		EBtn_Tab_MarkROI,
		EBtn_Tab_ImageStatistic,

		EBtn_Count,
	};

	enum EStatic
	{
		EStatic_Camera = 0,
// 		EStatic_MeasureMent,
// 		EStatic_Result,

		EStatic_Count,
	};

#ifdef AFX_DESIGN_TIME
	enum {
		IDD = IDD_FORM_REGISTER
};
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
	SdefaultModelParam* m_pModelParam;
	CRegisterPageMeasure* m_pPageMeasure;
	CRegisterPageMarkROI* m_pPageMarkROI;
	CRegisterPageImageStatistic* m_pPageImageStatistic;

	CMFCButton m_btn[EBtn_Count];
	CCtrlLabel m_static[EStatic_Count];

	CRavidSheet m_SheetResult;
	CRavidSheet m_SheetNgList;
	CFont		m_font;
	CFont		m_fontBtn;
	LOGFONT		m_lf;
	//CCtrlLabel  m_stcModel, m_stcTotal, m_stcOK, m_stcNG, m_stcYield, m_stcLotID;
	CCtrlLabel m_stc[ELabel_Count];
	CCtrlLabel m_stcData[ELabel_DataCount];
	CCtrlGradientButton	m_btnReset;

	ECameraNum m_eCam = ECameraNum_Upper;
//	int m_nSelectCamera = 0;

public:


	// ROI Page 
	CRegisterPageMarkROI* GetPageMarkROI() { return m_pPageMarkROI; }
 	long SetROIDataAdd(SMeasurementROI sData);
 	bool GetROIData(int nIndex, SMeasurementROI& sData);
 	void SetROIDataAdjustedSave(int nAdjustNumber, SMeasurementROI sData);


	// Measurement Page
	CRegisterPageMeasure* GetPageMeasure() { return m_pPageMeasure; }
	long SetMeasuremetKindDataAdd(SMeasurementKind sData);
	bool GetMeasuremetKindData(int nIndex, SMeasurementKind& sData);
 	void SetMeasuremetKindDataAdjustedSave(int nAdjustNumber, SMeasurementKind sData);

 	void SetROIDataToMeasurementDlgListBox();


	// ImageStatistic Page
	CRegisterPageImageStatistic* GetPageImageStatistic() { return m_pPageImageStatistic; }



	////////////////////////////////////////////////////////////////////
	//
	void SetModelParamPtr(SdefaultModelParam* param) { m_pModelParam = param; }

	bool InitSheetResult();
	bool InitSheetNGList();
// 	void SetSelectCamera(int nCameraNum) { m_nSelectCamera = nCameraNum; }
// 	int GetSelectCamera() { return m_nSelectCamera; }

	void SetSelectPosition(ECameraNum nCameraPos) { m_eCam = nCameraPos; }
	ECameraNum GetSelectPosition() { return m_eCam; }
	void OnOpenModel();


public:
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnBnClickedBtnRegisterTabMeasure();
	afx_msg void OnBnClickedBtnRegisterTabMarkroi();
	afx_msg void OnBnClickedBtnRegisterTabImagestatistic();
// 	afx_msg void OnBnClickedBtnRegisterAlignLefttop();
// 	afx_msg void OnBnClickedBtnRegisterAlignRighttop();
// 	afx_msg void OnBnClickedBtnRegisterAlignLeftbottom();
// 	afx_msg void OnBnClickedBtnRegisterAlignRightbottom();
	afx_msg void OnBnClickedBtnRegisterLive();
	afx_msg void OnBnClickedBtnRegisterStop();
	afx_msg void OnBnClickedBtnRegisterFront();
	afx_msg void OnBnClickedBtnRegisterRear();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnBnClickedBtnRegisterLoad();
	afx_msg void OnBnClickedBtnRegisterSave();
};




