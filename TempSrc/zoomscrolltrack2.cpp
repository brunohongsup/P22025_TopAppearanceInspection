// zoomscrolltrack2.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "zoomscrolltrack2.h"
#include "DlgViewChart.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CZoomscrolltrack2App

BEGIN_MESSAGE_MAP(CZoomscrolltrack2App, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CZoomscrolltrack2App construction

CZoomscrolltrack2App::CZoomscrolltrack2App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CZoomscrolltrack2App object
// 
// CZoomscrolltrack2App theApp;
// 

// CZoomscrolltrack2App initialization

BOOL CZoomscrolltrack2App::InitInstance()
{
	CWinApp::InitInstance();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need

	CDlgViewChart dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
