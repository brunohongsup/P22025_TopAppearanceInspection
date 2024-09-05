#pragma once



typedef struct sCpuInstructionSet
{
	bool bX64;
	bool bMMX;
	bool bSSE;
	bool bSSE2;
	bool bSSE3;
	bool bSSSE3;
	bool bSSE41;
	bool bSSE42;
	bool bSSE4a;
	bool bAVX;
	bool bXOP;
	bool bFMA3;
	bool bFMA4;

	sCpuInstructionSet()
	{
		bX64 = false;
		bMMX = false;
		bSSE = false;
		bSSE2 = false;
		bSSE3 = false;
		bSSSE3 = false;
		bSSE41 = false;
		bSSE42 = false;
		bSSE4a = false;
		bAVX = false;
		bXOP = false;
		bFMA3 = false;
		bFMA4 = false;
	}
}
	SCpuInstructionSet, *LPCpuInstructionSet;

typedef struct tagTHREADNAME_INFO
{
	DWORD dwType;       // must be 0x1000
	LPCSTR szName;      // pointer to name (in user addr space)
	DWORD dwThreadID;   // thread ID (-1=caller thread)
	DWORD dwFlags;      // reserved for future use, must be zero
}
	THREADNAME_INFO;


// Complex number(º¹¼Ò¼ö)
typedef struct sComplexNumber
{
	float fReal;
	float fImaginary;
}
	SComplexNumber, *LPComplexNumber;


// Discrete fourier transform
typedef struct sFourierTransform
{
	int nSizeX;
	int nSizeY;

	SComplexNumber* pFrequency;

	sFourierTransform()
	{
		nSizeX = 0;
		nSizeY = 0;
		pFrequency = nullptr;
	}

	~sFourierTransform()
	{
		if(pFrequency)
		{
			delete [] pFrequency;
			pFrequency = nullptr;
		}
	}
}
	SFourierTransform, *LPFourierTransform;


typedef struct sDFTRegion
{
	POINT ptStart;
	SIZE szSize;
}
	SDFTRegion, *LPDFTRegion;

