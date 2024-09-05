#pragma once

#include "Definition.h"

#include "CommonCls/UtilCommFuncFile.h"
#include "CommonCls/RavidAssistDskim.h"
#include "CommonCls/Util.h"
#include "ProfileCode/Profile.h"
#include "ImageCameraView.h"
#include <unordered_map>
#include "sqlite3.h"
#include "ProfileCode/Utils.h"

using namespace Ravid;
using namespace Ravid::Framework;
using namespace Ravid::Device;
using namespace Ravid::Algorithms;
using namespace Ravid::Miscellaneous;
using namespace Ravid::Mathematics;

using namespace CDefinition;

#ifdef PI
#undef PI
#endif

#define PI			3.14159265358979323846264338327950288419716939937510

#ifdef RADIAN
#undef RADIAN
#endif

#define RADIAN		57.295779513082320876798154814105

#ifdef EPSILON
#undef EPSILON
#endif

#define EPSILON		0.0000000001


class CEHBase : public Ravid::Framework::CEventHandlerBase
{
public:
	CEHBase();
	virtual ~CEHBase();

		
	virtual void OnTeach(_In_ Algorithms::CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);


	virtual void OnAcquisition(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ Ravid::Device::CDeviceBase* pDevice = nullptr);

	virtual void WhenItOpenModelInit(){};

	bool LoadSystemParameter();
	bool CaptureCurrentScreen(LPCTSTR lpszFilePath);

	bool ParsingStringToDouble(CString str, int nIndex, double& dblResult);
	bool ParsingStringToVector(CString str, std::vector<double>& vctResult);
	bool ParsingStringToVector(CString str, std::vector<std::vector<double> >& vctResult);

	bool ParsingStringToVector(CString str, std::vector<long long>& vctResult);
	bool ParsingStringToVector(CString str, std::vector<std::vector<long long> >& vctResult);

	bool ParsingStringToVector(CString str, std::vector<CString>& vctResult);


	/////////////////////////////////////////////////////////////////////////////
	// Model 
	CModelInfo* GetModel();
	bool GetModelParam(CDefinition::SdefaultModelParam& sParam);
	bool SetModelParamSave(CDefinition::SdefaultModelParam sParam);

	std::vector<CDefinition::sModel> GetModelInfo() { return m_vctModelInfo; }
	void SetModelInfo();

	void SetFrameWorkModelNum(long lNum) { m_lModelNumber = lNum; }
	long GetFrameWorkModelNum() { return m_lModelNumber; }

	void SetMachineNum(long lNum) { m_lMachineMumber = lNum; }
	long GetMachineNum() { return m_lMachineMumber; }

	//////////////////////////////////////////////////////////////////////////////
	// CSV File
	void SetSignalTime() { m_tmSignalTime = CTime::GetCurrentTime(); }
	CTime GetSignalTime() 
	{
		if(m_tmSignalTime.GetYear() == 1970)
			m_tmSignalTime = CTime::GetCurrentTime();

		return m_tmSignalTime; 
	}

	//SPC¿ë Time ms±îÁö
	void SetForSPCTime(ESPCTimeLogType  eTime, CString strTime = _T("")) 
	{ 
		if(eTime < ESPCTimeLogType_InspTackTime) 
			m_strForSPCTime[eTime] = GetmsTime();
		else 
			m_strForSPCTime[eTime] = strTime;
	}
	CString GetForSPCTime(ESPCTimeLogType eTime) { return m_strForSPCTime[eTime]; }

	CString GetmsTime()
	{
		CString strTime;
		SYSTEMTIME st;
		GetLocalTime(&st);

		strTime.Format(_T("%04d"), st.wYear);

		strTime.AppendFormat(_T("%02d"), st.wMonth);
		strTime.AppendFormat(_T("%02d"), st.wDay);
		strTime.AppendFormat(_T("%02d"), st.wHour);
		strTime.AppendFormat(_T("%02d"), st.wMinute);
		strTime.AppendFormat(_T("%02d"), st.wSecond);
		strTime.AppendFormat(_T("%03d"), st.wMilliseconds);

		return strTime;
	}

	CString GetSavePath();
	bool SaveCSVDataFile(int nIndex, const std::vector<SMeasuredData>& vct);
	bool SaveSQLiteDataFile(int nIndex, const std::vector<SMeasuredData>& vct);
	bool SaveImage(SSaveImageInfo SInfo, CRavidImageView * pView);

	bool SearchDataHistory(int nIndex, CTime tmSearchStart, CTime tmSearchEnd, std::vector<std::vector<SMeasuredData>>* pResult);
	//////////////////////////////////////////////////////////////////////////////
	// ini File
	bool SaveIniDataFile(EIniDataType eType, CString strPath);
	bool LoadIniDataFile(EIniDataType eType, CString strPath);

	// ROI 
	bool SaveMeasurementROIFormIni();
	bool LoadMeasurementROIFormIni();

	void GetMesurementROIData(std::vector<SMeasurementROI>& vct){ vct = m_vecROIData; }
	bool GetMesurementROIData(long nIndex, SMeasurementROI& sData) 
	{
		if(nIndex >= m_vecROIData.size())
			return false;

		sData = m_vecROIData[nIndex]; 

		return true;
	}

	long SetMesurementROIDataAdd(SMeasurementROI sData)
	{
		long nIndex = m_vecROIData.size();
		m_vecROIData.push_back(sData);
		m_mapROIIndex[sData.strSerialNumber] = nIndex + 1;
		return nIndex;
	}
	void SetMesurementROIDataDeleteAll() { m_vecROIData.clear(); m_mapROIIndex.clear();}
	void SetMesurementROIDataDelete(long nDeleteNumber) 
	{
		CString strKey = m_vecROIData[nDeleteNumber].strSerialNumber;

		auto item = m_mapROIIndex.find(strKey);
		if(item != m_mapROIIndex.end())
			m_mapROIIndex.erase(item);

		auto iter = m_vecROIData.begin() + nDeleteNumber; 
		m_vecROIData.erase(iter);

	}

	void SetMesurementROIDataAdjust(long nAdjustNumber, SMeasurementROI sdata)
	{
		if(nAdjustNumber >= m_vecROIData.size())
		{
			AfxMessageBox(_T("Save File"));
			return;
		}

		m_vecROIData[nAdjustNumber] = sdata;
	}
	long GetROIDataIndex(CString strKey){return m_mapROIIndex[strKey] - 1;}

	// Measurement Kind
	bool SaveMeasurementKindFormIni();
	bool LoadMeasurementKindFormIni();

	long SetMesurementKindDataAdd(SMeasurementKind sData)
	{
		long nIndex = m_vecMeasurementKindData.size();
		m_vecMeasurementKindData.push_back(sData);

		return nIndex;
	}
	void SetMesurementKindDataDeleteAll() { m_vecMeasurementKindData.clear(); m_vecMeasurementKindData.clear(); }
	void SetMesurementKindDataDelete(long nDeleteNumber)
	{
		auto iter = m_vecMeasurementKindData.begin() + nDeleteNumber;
		m_vecMeasurementKindData.erase(iter);
	}

	void GetMesurementKindData(std::vector<SMeasurementKind>& vct) { vct = m_vecMeasurementKindData; }
	bool GetMesurementKindData(long nIndex, SMeasurementKind& sData)
	{
		if(nIndex >= m_vecMeasurementKindData.size())
			return false;

		sData = m_vecMeasurementKindData[nIndex];

		return true;
	}

	void SetMesurementKindDataAdjust(long nAdjustNumber, SMeasurementKind sdata)
	{
		if(nAdjustNumber >= m_vecMeasurementKindData.size())
		{
			AfxMessageBox(_T("Save File"));
			return;
		}

		m_vecMeasurementKindData[nAdjustNumber] = sdata;
	}

	SMeasurementROI GetDataROIFromSerialNumber(CString strKey)
	{
		SMeasurementROI sReturn;
		auto item = m_mapROIIndex.find(strKey);
		if(item != m_mapROIIndex.end())
		{
			long nIndex = m_mapROIIndex[strKey] - 1;

			if(m_vecROIData.size() > nIndex)
				sReturn = m_vecROIData[nIndex];
		}
		return sReturn;
	}

	void UpdateMeasurementKindParam()
	{
		for(int i = 0; i < m_vecMeasurementKindData.size(); i++)
		{
			SMeasurementKind sData = m_vecMeasurementKindData[i];
			sData.sStandard = GetDataROIFromSerialNumber(sData.sStandard.strSerialNumber);
			
			int j = 0;
			for(auto iter = sData.vctOpponents.begin(); iter != sData.vctOpponents.end(); ++iter)
			{
				*iter = GetDataROIFromSerialNumber(iter->strSerialNumber);

				if(iter->strName == _T(""))
					sData.vctOpponents.erase(iter);
				else
				{
					sData.vctOpponents[j] = *iter;
					j++;
				}
			}

			m_vecMeasurementKindData[i] = sData;

		}
	}

protected:	
	std::vector<SMeasurementROI> m_vecROIData;
	std::map<CString, long> m_mapROIIndex;

	std::vector<SMeasurementKind> m_vecMeasurementKindData;
	std::vector<SMeasuredData> m_vecMeasuredData;

	long m_lModelNumber = 1;
	long m_lMachineMumber = 1;

	CTime m_tmSignalTime;

private:
	CString m_strForSPCTime[ESPCTimeLogType_Count];

	FILE* m_fp = nullptr;
	std::vector<CDefinition::sModel> m_vctModelInfo;
	CCriticalSection m_csLock;

	CRavidAssistDskim m_Assist;

};

