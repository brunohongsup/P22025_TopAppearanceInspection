//////////////////////////////////////////////////////////////////////////
// Define 상수의 라이브러리/ 클래스 명을 제외한 나머지 변경 불허합니다.  

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

