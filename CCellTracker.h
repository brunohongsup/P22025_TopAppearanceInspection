#pragma once
#include <memory>
#include <mutex>
#include <queue>
#include <vector>

struct SCell 
{
	CString strLotId;
	CString strCellId;
};

class CCellTracker
{
public:
	static std::shared_ptr<CCellTracker> GetInstance();
	bool AddCell(const std::shared_ptr<SCell>& cell);
	bool RemoveCell(const CString& cellId);
	bool ReportCells();

private:
	CCellTracker();
	static std::shared_ptr<CCellTracker> m_singleInstance;
	static std::mutex m_mtx;
	std::vector<std::shared_ptr<SCell>> m_vctCells;
};

