#pragma once

class CCriticalSection;

// CImageInfo.. ver. 2.2
class CImageInfo
{
public:
	CImageInfo();
	CImageInfo(CImageInfo& imgInfo);
	CImageInfo(CImageInfo* pImgInfo);
	virtual ~CImageInfo();

	void SetSizeX(ptrdiff_t nSizeX) { m_nSizeX = nSizeX; }
	ptrdiff_t GetSizeX() { return m_nSizeX; }

	void SetSizeY(ptrdiff_t nSizeY) { m_nSizeY = nSizeY; }
	ptrdiff_t GetSizeY() { return m_nSizeY; }

	void SetBpp(long nBpp) { m_nBpp = nBpp; }
	long GetBpp() { return m_nBpp; }

	void SetColor(bool bColor) { m_bColor = bColor; }
	bool IsColor() { return m_bColor; }

	void SetFlipped(bool bFlipped) { m_bFlipped = bFlipped; }
	bool IsFlipped() { return m_bFlipped; }

	void SetBuffer(BYTE* pData);
	BYTE* GetBuffer() { return m_pData; }

	bool IsExternalBuffer() { return m_bUseExternalBuffer; }

	__forceinline void Lock();
	__forceinline void Unlock();

	__forceinline BYTE GetPixelGray(ptrdiff_t nX, ptrdiff_t nY) { return *(*(m_ppYOffsetBuffer + nY) + nX); }
	__forceinline void GetPixelGray(ptrdiff_t nX, ptrdiff_t nY, BYTE* pGrayValue) { *pGrayValue = GetPixelGray(nX, nY); }

	__forceinline COLORREF GetPixelRGB(ptrdiff_t nX, ptrdiff_t nY) { COLORREF crPixel = 0; GetPixelRGB(nX, nY, &crPixel); return crPixel; }

	__forceinline void GetPixelRGB(ptrdiff_t nX, ptrdiff_t nY, COLORREF* pRGBValue)
	{
		BYTE* pPixelPosition = *(m_ppYOffsetBuffer + nY) + *(m_pXOffsetValue + nX);

		*pRGBValue = *(pPixelPosition) << 16;
		*pRGBValue |= *(pPixelPosition + 1) << 8;
		*pRGBValue |= *(pPixelPosition + 2);
	}

	__forceinline void GetPixelRGB(ptrdiff_t nX, ptrdiff_t nY, BYTE* pRed, BYTE* pGreen, BYTE* pBlue)
	{
		BYTE* pPixelPosition = *(m_ppYOffsetBuffer + nY) + *(m_pXOffsetValue + nX);

		*pBlue = *(pPixelPosition);
		*pGreen = *(pPixelPosition + 1);
		*pRed = *(pPixelPosition + 2);
	}

	__forceinline void SetPixelGray(ptrdiff_t nX, ptrdiff_t nY, BYTE cGrayValue) { *(m_ppYOffsetBuffer[nY] + nX) = cGrayValue; }
	__forceinline void SetPixelRGB(ptrdiff_t nX, ptrdiff_t nY, COLORREF crColorValue) { SetPixelRGB(nX, nY, crColorValue & 0xff, (crColorValue >> 8) & 0xff, (crColorValue >> 16) & 0xff); }
	__forceinline void SetPixelRGB(ptrdiff_t nX, ptrdiff_t nY, BYTE cRed, BYTE cGreen, BYTE cBlue)
	{
		BYTE* pPixelPosition = *(m_ppYOffsetBuffer + nY) + *(m_pXOffsetValue + nX);

		*(pPixelPosition) = cBlue;
		*(pPixelPosition + 1) = cGreen;
		*(pPixelPosition + 2) = cRed;
	}

	void Clear();

	bool Copy(CImageInfo& imgInfoSrc);
	bool Copy(CImageInfo* pImgInfoSrc);
	bool CopyRGBToGray(CImageInfo* pImgInfoSrcRGB);
	bool CopyGrayToRGB(CImageInfo* pImgInfoSrcGray);
	bool CopyRGBToYComponent(CImageInfo* pImgInfoSrcRGB);

	bool CreateImageBuffer(ptrdiff_t nSizeX, ptrdiff_t nSizeY, long nBpp, long nFillValue = -1, bool bColor = false, bool bFlipped = false);
	bool SetImagePtr(BYTE* pData, ptrdiff_t nSizeX, ptrdiff_t nSizeY, long nBpp, bool bColor = false, bool bFlipped = false);

	bool ConvertRGBToGray();
	bool ConvertGrayToRGB();
	bool ConvertRGBToYComponent();

protected:
	void Init();

	int CalculatePixelSizeByte(int nBpp = 0);
	bool CreateOffsetTable();

	ptrdiff_t			m_nSizeX;				// Width
	ptrdiff_t			m_nSizeY;				// Height
	long				m_nBpp;					// Bit per pixel
	bool				m_bColor;				// Color image
	bool				m_bFlipped;				// Flipped bitmap image

	BYTE*				m_pData;				// Image buffer
	CCriticalSection*	m_pCriticalSection;		// Synchronization instance

	bool				m_bUseExternalBuffer;	// Automatically set true after using 'SetImagePtr' function

	int					m_nPixelSizeByte;
	size_t*				m_pXOffsetValue;
	BYTE**				m_ppYOffsetBuffer;
};


#pragma pack(push, 1)
typedef struct sImageInfoPacket
{
	int nCh;
	int nIndex;
	int nSizeX;
	int nSizeY;
	BYTE* pData;
}
	SImageInfoPacket, *LPImageInfoPacket;
#pragma pack(pop)
