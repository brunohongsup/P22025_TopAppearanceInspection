//////////////////////////////////////////////////////////////////////////
// Define ����� ���̺귯��/ Ŭ���� ���� ������ ������ ���� �����մϴ�.  

#include "StdAfx.h"
#include "AlgOevInitializer.h"


//////////////////////////////////////////////////////////////////////////


CAlgOevInitializer::CAlgOevInitializer(void)
{
}


CAlgOevInitializer::~CAlgOevInitializer(void)
{
}

void CAlgOevInitializer::Initialize()
{
	Euresys::Open_eVision_1_2::Tools::Initialize();
}

void CAlgOevInitializer::Terminate()
{
	Euresys::Open_eVision_1_2::Tools::Terminate();
}


CVisionObject* CAlgOevInitializer::CreateVisionInstance()
{
	return nullptr;
}

