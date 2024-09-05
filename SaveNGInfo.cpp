#include "stdafx.h"
#include "SaveNGInfo.h"
#include "EventHandlerMain.h"


CSaveNGInfo::CSaveNGInfo(const CTime& tmSignalTime, const SCellTrackerData& sCellTrackingData,const std::vector<SMeasuredData>& vctMeasuredDataUpper, const std::vector<SMeasuredData>& vctMeasuredDataLower, EDefectStatus eDefectStatus)
	: m_tmSignalTime(tmSignalTime)
	, ISaveInfo(sCellTrackingData)
{
	for(auto& it : vctMeasuredDataUpper)
	{
		if(!it.bResult)
		{
			CString strMeasuredData;
			strMeasuredData.AppendFormat(_T("Upper %s(%.3lf),"), it.strName, it.dblData);
			m_vctMeasuredNG.push_back(strMeasuredData);
		}
	}
	for (auto& it : vctMeasuredDataLower)
	{
		if(!it.bResult)
		{
			CString strMeasuredData;
			strMeasuredData.AppendFormat(_T("Lower %s(%.3lf),"), it.strName, it.dblData);
			m_vctMeasuredNG.push_back(strMeasuredData);
		}
	}
	if((int)eDefectStatus & (int)EDefectStatus::UpperNG)
	{
		CString strDefectData;
		strDefectData.AppendFormat(_T("Upper Defect,"));
		m_vctMeasuredNG.push_back(strDefectData);
	}
	if((int)eDefectStatus & (int)EDefectStatus::LowerNG)
	{
		CString strDefectData;
		strDefectData.AppendFormat(_T("Lower Defect,"));
		m_vctMeasuredNG.push_back(strDefectData);
	}
	
}

bool CSaveNGInfo::DoSave()
{
	bool bReturn = false;

	do
	{
		CEventHandlerMain* pHandler = dynamic_cast<CEventHandlerMain*>(CEventHandlerManager::GetEventHandler(EEventHandlerNo_Main));
		if(!pHandler)
		{
			return false;
		}

		CModelInfo* pModelInfo = pHandler->GetModel();
		if(!pModelInfo)
			break;

		SdefaultModelParam modelParam;
		if(!pHandler->GetModelParam(modelParam))
			break;


		CUtilCommFuncFile commfuncfile;


		CString strFilePath = _T("");

		strFilePath = pHandler->GetSavePath();

		if(strFilePath.IsEmpty())
			break;


		strFilePath.AppendFormat(_T("\\Data"));
		if(commfuncfile.IsFolderExist(strFilePath))
			commfuncfile.MakeFolder(strFilePath);


		int nPos = 0;

		while(1)
		{
			nPos = strFilePath.Find(_T("\\"), nPos);

			if(nPos < 0)
			{
				CreateDirectory(strFilePath, 0);
				break;
			}

			CreateDirectory(strFilePath.Left(nPos), 0);
			++nPos;
		}

		strFilePath.Format(_T("%s\\NGData.csv"), strFilePath);

		//////////////////////////////////////////////////////////////////////////

		CString strResult[2];

		FILE* pFile = nullptr;
		if(!commfuncfile.IsFileExist(strFilePath))
		{
			errno_t err = _wfopen_s(&pFile, strFilePath, _T("at"));
			if(!err)
			{
				if(pFile)
				{
					fclose(pFile);
				}
			}

		}

		CString strTime = _T("");
		CTime tm = m_tmSignalTime;

		strTime.Format(_T("%02d_%02d_%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		CString strData;
		strData.Format(_T("%s,"), strTime);
		strData.AppendFormat(_T(",%s,%s,"),m_sCellTrackingData.strLotID, m_sCellTrackingData.strCellID[0]);
		if(!m_vctMeasuredNG.empty())
		{
			for(size_t nIdx = 0; nIdx < m_vctMeasuredNG.size(); nIdx++)
			{
				strData.AppendFormat(_T("%s,"), m_vctMeasuredNG[nIdx]);
			}
		}

		strData.AppendFormat(_T("\n"));

		errno_t err = _wfopen_s(&pFile, strFilePath, _T("at"));

		if(!err)
		{
			if(pFile)
			{
				fputws(strData, pFile);
				fclose(pFile);
			}
		}
		bReturn = true;
	}
	while(false);


	return bReturn;
}

CSaveNGInfo::~CSaveNGInfo()
{

}
