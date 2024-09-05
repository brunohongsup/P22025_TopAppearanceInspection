#pragma once


#include "AlgBase.h"

using namespace Euresys::Open_eVision_1_2;

class CAlgOevBase : public CAlgBase
{
public:
	CAlgOevBase(void);
	virtual ~CAlgOevBase(void);

	virtual CVisionObject* CreateVisionInstance();		// If it has derived by CVisionObject class, you've gotta implement this function...  20110309 SJH       But, All Base classes are excluded..
};


