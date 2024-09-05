#pragma once
#include "ISaveInfo.h"
#include "Definition.h"

using namespace CDefinition;
class CSaveImage : public ISaveInfo
{
public :

	CSaveImage() = delete;
	CSaveImage(const CSaveImage& saveImg) = delete;  

	
	CSaveImage(const int nObjectID, CTime tmSignalTime,const SCellTrackerData& sCellTrackingData,ECameraNum eCameraNum, bool bInspResult, CRavidImage* pInspImg, CRavidImageView* pImgView);

	virtual ~CSaveImage();


	virtual bool DoSave();



private:
	CRavidImage* m_pImg;
	CRavidImage* m_pCaptureImg;

	int m_nObjectID;
	CTime m_signalTime;


	CString m_strAddInfo = _T("");

	ECameraNum m_eCameraNum = ECameraNum_Upper;

	bool m_bInspResult = false;


};