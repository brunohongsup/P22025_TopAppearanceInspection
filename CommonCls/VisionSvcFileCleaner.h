#pragma once

//#include "ThreadPool.h"

#include <vector>


class CVisionSvcFileCleaner
{
public:
	CVisionSvcFileCleaner(void);
	virtual ~CVisionSvcFileCleaner(void);

	virtual bool Initialize();
	virtual bool Terminate();

	void SetRecursive(bool bRecursive) { m_bRecursive = bRecursive; }

	bool AddDeletingFolder(LPCTSTR lpszPath);
	void SetExpirationDate(ULONG ulDate) { m_ulExpirationDate = ulDate; }

	void SetRemoveFileAttribute(bool bRemoveFileAttribute) { m_bRemoveFileAttribute = bRemoveFileAttribute; }


	virtual double GetUsedDriverPercentage(LPCTSTR lpszDriver);

	virtual CString GetDriverName(LPCTSTR lpszFile);

	virtual void SetLimitDriveVolume(bool bSet) { m_bLimitDriveVolume = bSet; }

	virtual bool IsLimitDriveVolume() { return m_bLimitDriveVolume; }

	virtual void SetDriveVolumeLimitPercentage(float fPercentage) { m_fDriveVolumeLimitPercentage = fPercentage; }


	bool		IsRunning() { return m_bIsRunning; }
	void		SetRunning(bool bSet) { m_bIsRunning = bSet; }
	ULONG		GetExpirationDate() { return m_ulExpirationDate; }
	bool		IsRecursive() { return m_bRecursive; }
	bool		IsRemoveFileAttribute() { return m_bRemoveFileAttribute; }
	float		GetDriveVolumeLimitPercentage() { return m_fDriveVolumeLimitPercentage; }

	std::vector<CString>*	GetPathList() { return &m_vctPathList; }

protected:

	static UINT	RunFileDelete(LPVOID pParam);

	CWinThread*		m_pThread;

	volatile bool m_bIsRunning;


	volatile ULONG m_ulExpirationDate;

	volatile bool m_bRecursive;

	volatile bool m_bRemoveFileAttribute;

	volatile bool m_bLimitDriveVolume;

	volatile float m_fDriveVolumeLimitPercentage;

	std::vector<CString> m_vctPathList;


};

