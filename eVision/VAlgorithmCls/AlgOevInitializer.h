#pragma once


#include "AlgOevBase.h"

using namespace Euresys::Open_eVision_1_2;

class CAlgOevInitializer : public CAlgOevBase
{
public:
	CAlgOevInitializer(void);
	virtual ~CAlgOevInitializer(void);

	void Initialize();
	void Terminate();

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..
};


