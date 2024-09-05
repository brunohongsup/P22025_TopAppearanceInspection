#pragma once
#include "stdafx.h"
#include "Definition.h"


//class CRavidImage;

using namespace CDefinition;

class ISaveInfo
{
public:

	ISaveInfo(const SCellTrackerData& sCellTrackingData){ m_sCellTrackingData = sCellTrackingData;}
	virtual ~ISaveInfo();

	ISaveInfo(const ISaveInfo& saveInfo) = delete;


	/*ISaveInfo(CDef::EInspectionType eInspectType, bool bAlignResult, const CString& strSavePath, const CString& strSignalTime, const CString& strInspectTypeName);*/
	/*ISaveInfo(CRavidImage* pImg, CRavidImageView* pView, const CString& strViewName, const CString& strInspectTypeName, const CString& strSignalTime, const CString& strSavePath, const CString& strHandlerName, const CString& strStageName, CDef::SAlign* pAlign, CDef::sAlignResult sMarkResult, CDef::EInspectionType eType, int nSaveType, bool bAlginResult);*/


	//virtual bool SaveImage();


	//virtual bool SaveData();

	virtual bool DoSave()  = 0;

	

protected: 
	/*CString m_strSavePath;
	CString m_strSignalTime;
	CString m_strInspectTypeName;
	bool m_bAlignResult;*/

	sCellTrackerData m_sCellTrackingData;


private:


	//CRavidImage* m_pImg;
	//CRavidImage* m_pCaptureImg;
	//CString m_strViewName;
	////CString m_strInspectTypeName;
	//CString m_strHandlerName;
	//CString m_strStageName;
	////CString m_str

	//CDef::SAlign m_sAlignData[2];
	//CDef::sAlignResult m_sAlignMarkResult;


	


	//int m_nImageSaveType;
	//bool m_bAlignResult;


};

