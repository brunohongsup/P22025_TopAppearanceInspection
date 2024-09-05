#include "stdafx.h"
#include "CCellTracker.h"

std::shared_ptr<CCellTracker> CCellTracker::m_singleInstance = nullptr;
std::mutex CCellTracker::m_mtx; 

std::shared_ptr<CCellTracker> CCellTracker::GetInstance()
{
	std::lock_guard<std::mutex> lock(m_mtx);
	if(m_singleInstance == nullptr) 
	{
		m_singleInstance = std::make_shared<CCellTracker>();
	}

	return m_singleInstance;
}

bool CCellTracker::AddCell(const std::shared_ptr<SCell>& cell)
{
	m_vctCells.push_back(cell);
	return true;
}

bool CCellTracker::RemoveCell(const CString & cellId)
{
	auto lookUp = [](const std::shared_ptr<SCell>& op1, const std::shared_ptr<SCell>& op2)
	{
		return op1->strCellId == op2->strCellId;
	};

	auto lookUpCell = std::find(std::begin(m_vctCells), std::end(m_vctCells), lookUp);
	if(lookUpCell == std::end(m_vctCells))
	{
		return false;	
	}
	else
	{
	}
}

bool CCellTracker::ReportCells()
{
	return false;
}
