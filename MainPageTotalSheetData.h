#pragma once
#include "Definition.h"
#include "resource.h"

#include "DlgViewHistory.h"


using namespace CDefinition;
class CMainPageTotalSheetData : public CRavidDialogBase
{
	RavidUseDynamicCreation();

	DECLARE_DYNAMIC(CMainPageTotalSheetData)

public:
	CMainPageTotalSheetData(CWnd* pParent = nullptr);
	virtual ~CMainPageTotalSheetData();

	// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FORM_MAIN_PAGE_DATASHEET };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* pMMI);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);

	afx_msg void OnSheetDblClick(NMHDR *pNotifyStruct, LRESULT* pResult);
	afx_msg void OnSheetClick(NMHDR *pNotifyStruct, LRESULT* pResult);

private:

	CRect       m_crWindowSize;
	CRavidSheet m_Sheet;
	CFont		m_Font;
	CDlgViewHistory* m_pDlgViewHistory;

	long m_nObjectID = 0;

	long m_nSheetCount = 0;	
	std::map<CString, int> m_mapStringToIndex;
	int m_nColCount = 1;

public:
	virtual BOOL Create(_In_opt_ CWnd* pParent = nullptr);

	void InitializeDataSheet(std::vector<SMeasurementKind> vct);
	bool SettingTotalSheet(const SCellTrackerData& sCellTrackingData,const std::vector<SMeasuredData>& vct, CTime tm, bool bDefect, bool bIsMonoImg);
	void SetObjectID(long nID) {m_nObjectID = nID;}
	long GetObjectID(){return m_nObjectID;}


};
