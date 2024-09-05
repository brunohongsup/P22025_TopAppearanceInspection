#include "StdAfx.h"
#include "VfxDefImage.h"

#include <math.h>
#include <afxmt.h>

CImageInfo::CImageInfo()
{
	Init();
}

CImageInfo::CImageInfo(CImageInfo& imgInfoSrc)
{
	Init();
	Copy(&imgInfoSrc);
}

CImageInfo::CImageInfo(CImageInfo* pImgInfoSrc)
{
	Init();
	Copy(pImgInfoSrc);
}


CImageInfo::~CImageInfo()
{
	Clear();

	if(m_pCriticalSection)
	{
		delete m_pCriticalSection;
		m_pCriticalSection = nullptr;
	}
}


void CImageInfo::Init()
{
	m_nSizeX = 0;
	m_nSizeY = 0;
	m_nBpp = 0;
	m_bColor = false;
	m_bFlipped = false;

	m_pData = nullptr;
	m_pCriticalSection = new CCriticalSection;

	m_bUseExternalBuffer = false;;

	m_nPixelSizeByte = 0;
	m_pXOffsetValue = nullptr;
	m_ppYOffsetBuffer = nullptr;
}

inline void CImageInfo::Lock()
{
	m_pCriticalSection->Lock();
}
inline void CImageInfo::Unlock()
{
	m_pCriticalSection->Unlock();
}

void CImageInfo::Clear()
{
	if(m_pCriticalSection)
		m_pCriticalSection->Lock();

	if(!m_bUseExternalBuffer)
	{
		if(m_pData)
			delete [] m_pData;
	}

	m_pData = nullptr;
	m_bUseExternalBuffer = false;

	if(m_pXOffsetValue)
	{
		delete[] m_pXOffsetValue;
		m_pXOffsetValue = nullptr;
	}

	if(m_ppYOffsetBuffer)
	{
		delete [] m_ppYOffsetBuffer;
		m_ppYOffsetBuffer = nullptr;
	}

	if(m_pCriticalSection)
		m_pCriticalSection->Unlock();
}

// 되도록 사용하지 말 것..
inline void CImageInfo::SetBuffer(BYTE* pData)
{
	if(!m_bUseExternalBuffer)
	{
		delete [] m_pData;
		m_pData = nullptr;
	}

	m_pData = pData;
	m_bUseExternalBuffer = true;

	m_nPixelSizeByte = CalculatePixelSizeByte();

	CreateOffsetTable();
}

bool CImageInfo::Copy(CImageInfo& imgInfoSrc)
{
	return Copy(&imgInfoSrc);
}

bool CImageInfo::Copy(CImageInfo* pImgInfoSrc)
{
	bool bReturn = false;

	do
	{
		if(!pImgInfoSrc)
			break;

		if(!GetBuffer() || (pImgInfoSrc->GetSizeX() != GetSizeX()) || (pImgInfoSrc->GetSizeY() != GetSizeY()) || (pImgInfoSrc->GetBpp() != GetBpp()) || (pImgInfoSrc->IsColor() != IsColor()) || (pImgInfoSrc->IsFlipped() != IsFlipped()))
		{
			Clear();

			if(!CreateImageBuffer(pImgInfoSrc->GetSizeX(), pImgInfoSrc->GetSizeY(), pImgInfoSrc->GetBpp(), 0xff, pImgInfoSrc->IsColor(), pImgInfoSrc->IsFlipped()))
				break;
		}

		size_t szBufferSize = m_nSizeX * m_nSizeY * m_nPixelSizeByte;

		memcpy(GetBuffer(), pImgInfoSrc->GetBuffer(), szBufferSize);

		bReturn = true;
	}
		while(false);

	return bReturn;
}

bool CImageInfo::CopyRGBToGray(CImageInfo* pImgInfoSrcRGB)
{
	bool bReturn = false;

	do
	{
		if(!pImgInfoSrcRGB)
			break;

		if(!pImgInfoSrcRGB->IsColor())
			break;

		// 일단 24bit만 지원!
		if(pImgInfoSrcRGB->GetBpp() != 24)
			break;

		if(!GetBuffer() || (pImgInfoSrcRGB->GetSizeX() != GetSizeX()) || (pImgInfoSrcRGB->GetSizeY() != GetSizeY()) || (GetBpp() != 8) || IsColor() || (pImgInfoSrcRGB->IsFlipped() != IsFlipped()))
		{
			Clear();

			if(!CreateImageBuffer(pImgInfoSrcRGB->GetSizeX(), pImgInfoSrcRGB->GetSizeY(), 8, 0xff, false, pImgInfoSrcRGB->IsFlipped()))
				break;
		}

		BYTE* pColorPixelPosition = pImgInfoSrcRGB->GetBuffer();
		BYTE* pGrayPixelPosition = GetBuffer();

		for(ptrdiff_t y = 0; y < GetSizeY(); ++y)
		{
			for(ptrdiff_t x = 0; x < GetSizeX(); ++x)
			{
				long nSum = *(pColorPixelPosition++);
				nSum += *(pColorPixelPosition++);
				nSum += *(pColorPixelPosition++);

				*(pGrayPixelPosition++) = BYTE(nSum / 3);
			}
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

bool CImageInfo::CopyGrayToRGB(CImageInfo* pImgInfoSrcGray)
{
	bool bReturn = false;

	do
	{
		if(!pImgInfoSrcGray)
			break;

		if(pImgInfoSrcGray->IsColor())
			break;

		// 일단 8bit만 지원!
		if(pImgInfoSrcGray->GetBpp() != 8)
			break;

		if(!GetBuffer() || (pImgInfoSrcGray->GetSizeX() != GetSizeX()) || (pImgInfoSrcGray->GetSizeY() != GetSizeY()) || (GetBpp() != 24) || !IsColor() || (pImgInfoSrcGray->IsFlipped() != IsFlipped()))
		{
			Clear();

			if(!CreateImageBuffer(pImgInfoSrcGray->GetSizeX(), pImgInfoSrcGray->GetSizeY(), 24, 0xff, true, pImgInfoSrcGray->IsFlipped()))
				break;
		}

		BYTE* pGrayPixelPosition = pImgInfoSrcGray->GetBuffer();
		BYTE* pColorPixelPosition = GetBuffer();

		for(ptrdiff_t y = 0; y < GetSizeY(); ++y)
		{
			for(ptrdiff_t x = 0; x < GetSizeX(); ++x)
			{
				*(pColorPixelPosition++) = *pGrayPixelPosition;
				*(pColorPixelPosition++) = *pGrayPixelPosition;
				*(pColorPixelPosition++) = *(pGrayPixelPosition++);
			}
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}

bool CImageInfo::CopyRGBToYComponent(CImageInfo* pImgInfoSrcRGB)
{
	bool bReturn = false;

	do
	{
		if(!pImgInfoSrcRGB)
			break;

		if(!pImgInfoSrcRGB->IsColor())
			break;

		// 일단 24bit만 지원!
		if(pImgInfoSrcRGB->GetBpp() != 24)
			break;

		if(!GetBuffer() || (pImgInfoSrcRGB->GetSizeX() != GetSizeX()) || (pImgInfoSrcRGB->GetSizeY() != GetSizeY()) || (GetBpp() != 8) || IsColor() || (pImgInfoSrcRGB->IsFlipped() != IsFlipped()))
		{
			Clear();

			if(!CreateImageBuffer(pImgInfoSrcRGB->GetSizeX(), pImgInfoSrcRGB->GetSizeY(), 8, 0xff, pImgInfoSrcRGB->IsColor(), pImgInfoSrcRGB->IsFlipped()))
				break;
		}

		BYTE* pColorPixelPosition = pImgInfoSrcRGB->GetBuffer();
		BYTE* pGrayPixelPosition = GetBuffer();

		float fConstant = 219.f / 256.f;

		for(ptrdiff_t y = 0; y < GetSizeY(); ++y)
		{
			for(ptrdiff_t x = 0; x < GetSizeX(); ++x)
			{
				float fBlue = *(pColorPixelPosition++);
				float fGreen = *(pColorPixelPosition++);
				float fRed = *(pColorPixelPosition++);

				*(pGrayPixelPosition++) = BYTE(((0.2126f * fRed) + (0.7152f * fGreen) + (0.0722f * fBlue)) * fConstant + 16.f);
			//	*(pGrayPixelPosition++) = BYTE(fRed);
			//	*(pGrayPixelPosition++) = BYTE(fGreen);
			//	*(pGrayPixelPosition++) = BYTE(fBlue);
			}
		}

		bReturn = true;
	}
		while(false);

	return bReturn;
}


bool CImageInfo::ConvertRGBToGray()
{
	bool bReturn = false;

	do
	{
		if(!IsColor())
			break;

		// 일단 24bit만 지원!
		if(GetBpp() != 24)
			break;

		CImageInfo imgTemp;

		if(!imgTemp.Copy(this))
			break;

		bReturn = CopyRGBToGray(&imgTemp);
	}
		while(false);

	return bReturn;
}

bool CImageInfo::ConvertGrayToRGB()
{
	bool bReturn = false;

	do
	{
		if(IsColor())
			break;

		// 일단 8bit만 지원!
		if(GetBpp() != 8)
			break;

		CImageInfo imgTemp;

		if(!imgTemp.Copy(this))
			break;

		bReturn = CopyGrayToRGB(&imgTemp);
	}
		while(false);

	return bReturn;
}

bool CImageInfo::ConvertRGBToYComponent()
{
	bool bReturn = false;

	do
	{
		if(!IsColor())
			break;

		// 일단 24bit만 지원!
		if(GetBpp() != 24)
			break;

		CImageInfo imgTemp;

		if(!imgTemp.Copy(this))
			break;

		bReturn = CopyRGBToYComponent(&imgTemp);
	}
		while(false);

	return bReturn;
}



bool CImageInfo::CreateImageBuffer(ptrdiff_t nSizeX, ptrdiff_t nSizeY, long nBpp, long nFillValue/* = 255*/, bool bColor/* = false*/, bool bFlipped/* = false*/)
{
	bool bReturn = false;

	size_t szBufferSize = nSizeX * nSizeY * CalculatePixelSizeByte(nBpp);

	BYTE* pData = new BYTE[szBufferSize];

	if(pData)
	{
		if(nFillValue >= 0 && nFillValue <= 255)
			memset(pData, nFillValue, szBufferSize);

		bReturn = SetImagePtr(pData, nSizeX, nSizeY, nBpp, bColor, bFlipped);
		m_bUseExternalBuffer = false;
	}

	if(!bReturn)
		Clear();

	return bReturn;
}

bool CImageInfo::SetImagePtr(BYTE* pData, ptrdiff_t nSizeX, ptrdiff_t nSizeY, long nBpp, bool bColor/* = false*/, bool bFlipped/* = false*/)
{
	bool bReturn = false;

	Clear();

	if(pData)
	{
		m_nSizeX = nSizeX;
		m_nSizeY = nSizeY;
		m_nBpp = nBpp;
		m_bColor = bColor;
		m_bFlipped = bFlipped;
		m_pData = pData;

		m_bUseExternalBuffer = true;
		m_nPixelSizeByte = CalculatePixelSizeByte();

		CreateOffsetTable();
	}

	bReturn = true;

	return bReturn;
}

int CImageInfo::CalculatePixelSizeByte(int nBpp/* = 0*/)
{
	if(!nBpp)
		nBpp = m_nBpp;

	return (int)ceil(float(nBpp) / 8.f);
}

bool CImageInfo::CreateOffsetTable()
{
	bool bReturn = false;

	do 
	{
		if(!m_pData)
			break;

		if(m_nSizeX < 1)
			break;

		if(m_nSizeY < 1)
			break;

		if(m_pXOffsetValue)
		{
			delete[] m_pXOffsetValue;
			m_pXOffsetValue = nullptr;
		}

		m_pXOffsetValue = new size_t[m_nSizeX];

		m_pXOffsetValue[0] = 0;

		for(int x = 1; x < m_nSizeX; ++x)
			m_pXOffsetValue[x] = m_pXOffsetValue[x - 1] + m_nPixelSizeByte;

		if(m_ppYOffsetBuffer)
		{
			delete [] m_ppYOffsetBuffer;
			m_ppYOffsetBuffer = nullptr;
		}

		m_ppYOffsetBuffer = new BYTE*[m_nSizeY];

		int nYPitchByte = m_nSizeX * m_nPixelSizeByte;
		m_ppYOffsetBuffer[0] = m_pData;

		for(int y = 1; y < m_nSizeY; ++y)
			m_ppYOffsetBuffer[y] = m_ppYOffsetBuffer[y - 1] + nYPitchByte;

		bReturn = true;
	}
		while(false);

	return bReturn;
}