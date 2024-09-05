#include "stdafx.h"
#include <vector>
#include "CSaveData.h"
#include "Definition.h"

#include "CommonCls/UtilCommFuncFile.h"
#include "EventHandlerMain.h"



CSaveData::CSaveData(CTime tmSignalTime, const SCellTrackerData& sCellTrackingData,const int nIdx, const std::vector<SMeasuredData>& vctMeasuredData)
	: ISaveInfo(sCellTrackingData) 
	, m_signalTime(tmSignalTime)
	, m_nInspIdx(nIdx)
	, m_vctMeasuredData(vctMeasuredData)
{

}

CSaveData::~CSaveData()
{
}

bool CSaveData::DoSave()
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


		strFilePath.Format(_T("%s\\MeasuredData_%d.csv"), strFilePath, m_nInspIdx);

		//////////////////////////////////////////////////////////////////////////

		CString strResult[2];

		CString strTop;
		strTop = _T("Time");
		strTop.AppendFormat(_T(",Lot ID, Cell ID"));
		for(int i = 0; i < m_vctMeasuredData.size(); i++)
		{
			strTop.AppendFormat(_T(",%s,%s Result"), m_vctMeasuredData[i].strName, m_vctMeasuredData[i].strName);
		}
		strTop.AppendFormat(_T("\n"));

		FILE* pFile = nullptr;
		if(!commfuncfile.IsFileExist(strFilePath))
		{
			errno_t err = _wfopen_s(&pFile, strFilePath, _T("at"));
			if(!err)
			{
				if(pFile)
				{
					fputws(strTop, pFile);
					fclose(pFile);
				}
			}

		}

		CString strTime = _T("");
		CTime tm = m_signalTime;

		strTime.Format(_T("%02d_%02d_%02d"), tm.GetHour(), tm.GetMinute(), tm.GetSecond());

		CString strData;
		strData.Format(_T("%s,"), strTime);
		strData.AppendFormat(_T("%s,%s,"), m_sCellTrackingData.strLotID, m_sCellTrackingData.strCellID[0]);
		for(int i = 0; i < m_vctMeasuredData.size(); i++)
		{
			CString strResult = m_vctMeasuredData[i].bResult ? _T("OK") : _T("NG");
			strData.AppendFormat(_T("%.3f,%s,"), m_vctMeasuredData[i].dblData, strResult);

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
