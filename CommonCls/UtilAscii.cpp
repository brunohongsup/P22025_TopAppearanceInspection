#include "stdafx.h"
#include "UtilAscii.h"


CUtilAscii::CUtilAscii()
{
}


CUtilAscii::~CUtilAscii()
{
}

bool CUtilAscii::IsOctalDigit(char ch)
{
	return (ch >= '0' && ch < '8');
}

bool CUtilAscii::IsNumber(char ch)
{
	return (ch >= '0' && ch < '9');
}

bool CUtilAscii::IsFloatNumber(CString str)
{
	USES_CONVERSION;
	bool bReturn = true;


	do 
	{
		
		if(str.GetLength() == 0)
			return false;

		int nLength = str.GetLength() + 1;

		char* szData = new char[nLength];

		strcpy_s(szData, nLength, T2A(str));


		for(int i = 0; i < nLength; ++i)
		{
			if(szData[i] == 0x00)
				continue;

			if(!((szData[i] >= '0' && szData[i] <= '9') || (szData[i] == '.')))
				bReturn = false;
		}

		if(szData)
		{
			delete [] szData;
			szData = nullptr;
		}

	} while (false);
	

	return bReturn;
}

unsigned int CUtilAscii::ConvertByteToInteger(BYTE * pSrc, bool bLittleEndian)
{
	unsigned int nReturn = 0;

	if(bLittleEndian)
		nReturn = pSrc[0] + (pSrc[1] << 8) + (pSrc[2] << 16) + (pSrc[3] << 24);
	else
		nReturn = pSrc[3] + (pSrc[2] << 8) + (pSrc[1] << 16) + (pSrc[0] << 24);

	return nReturn;
}

bool CUtilAscii::ConvertIntegerToByteArray(unsigned int nSrc, BYTE* pDst, bool bLittleEndian)
{
	bool bReturn = false;
	do 
	{
		if(!pDst)
			break;

		//ZeroMemory(pDst, sizeof(pDst));

		if(bLittleEndian)
		{
			pDst[3] = (BYTE)((nSrc & 0xff000000) >> 24);
			pDst[2] = (BYTE)((nSrc & 0x00ff0000) >> 16);
			pDst[1] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[0] = (BYTE)(nSrc & 0x000000ff);
		}
		else
		{
			pDst[0] = (BYTE)((nSrc & 0xff000000) >> 24);
			pDst[1] = (BYTE)((nSrc & 0x00ff0000) >> 16);
			pDst[2] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[3] = (BYTE)(nSrc & 0x000000ff);
		}


		bReturn = true;

	} while (false);

	return bReturn;
}


unsigned int CUtilAscii::ConvertByteToNumber(BYTE * pSrc, bool bLittleEndian)
{
	unsigned int nReturn = 0;

	if(bLittleEndian)
		nReturn = pSrc[0] + (pSrc[1] << 8) + (pSrc[2] << 16);
	else
		nReturn = pSrc[2] + (pSrc[1] << 8) + (pSrc[0] << 16);

	return nReturn;
}

bool CUtilAscii::ConvertNumberToByteArray(unsigned int nSrc, BYTE* pDst, bool bLittleEndian)
{
	bool bReturn = false;
	do
	{
		if(!pDst)
			break;

		//ZeroMemory(pDst, sizeof(pDst));

		if(bLittleEndian)
		{
			//pDst[3] = (BYTE)((nSrc & 0xff000000) >> 24);
			pDst[2] = (BYTE)((nSrc & 0x00ff0000) >> 16);
			pDst[1] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[0] = (BYTE)(nSrc & 0x000000ff);
		}
		else
		{
			pDst[0] = (BYTE)((nSrc & 0x00ff0000) >> 16);
			pDst[1] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[2] = (BYTE)(nSrc & 0x000000ff);



		}


		bReturn = true;

	}
	while(false);

	return bReturn;
}


unsigned short CUtilAscii::ConvertByteToShort(BYTE * pSrc, bool bLittleEndian)
{
	unsigned int nReturn = 0;

	if(bLittleEndian)
		nReturn = pSrc[0] + (pSrc[1] << 8);
	else
		nReturn = pSrc[1] + (pSrc[0] << 8);

	return nReturn;
}

bool CUtilAscii::ConvertShortToByteArray(unsigned short nSrc, BYTE* pDst, bool bLittleEndian)
{
	bool bReturn = false;
	do 
	{
		if(!pDst)
			break;

		//ZeroMemory(pDst, sizeof(pDst));

		if(bLittleEndian)
		{
			pDst[1] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[0] = (BYTE)(nSrc & 0x000000ff);
		}
		else
		{

			pDst[0] = (BYTE)((nSrc & 0x0000ff00) >> 8);
			pDst[1] = (BYTE)(nSrc & 0x000000ff);
		}

		bReturn = true;
	} while (false);
	

	return bReturn;
}




int CUtilAscii::ConvertHexacharToNumber(char ch)
{
	// 0 -> 0
	// A - > 10
	// F -> 15
	int nReturn = 0;

	if(ch >= '0' && ch <= '9')
		nReturn = ch - '0';
	else if(ch >= 'A' && ch <= 'F')
		nReturn = ch - 'A' + 10;
	else if(ch >= 'a' && ch <= 'f')
		nReturn = ch - 'a' + 10;
	else
		nReturn = 0;

	return nReturn;
}

char CUtilAscii::ConvertNumberToHexachar(int nDec)
{
	char chReturn;

	if(nDec >= 0 && nDec <= 9)
		chReturn = nDec + '0';
	else if(nDec >= 10 && nDec <= 15)
		chReturn = nDec + 'A' - 10;
	else
		chReturn = '0';

	return chReturn;
}
char CUtilAscii::ConvertNumberToHexaCharEx(int nDec)
{
	char chReturn;

	if(nDec >= 0 && nDec <= 9)
		chReturn = nDec + '0';
	else if(nDec >= 10 && nDec <= 35)
		chReturn = nDec + 'A' - 10;
	else
		chReturn = '0';

	return chReturn;
}



const char * CUtilAscii::ConvertCharToBinary(unsigned char ch)
{
	static char chBuf[9];

	for(int i = 0; i < 8; ++i)
	{
		chBuf[7-i] = ((ch >> i) & 0x01) ? '1' : '0';
	}

	chBuf[8] = '\0';

	return chBuf;
}

int CUtilAscii::ConvertEscapeStringToString(const char * pSrc, char * pDst, int nLength)
{
	// Escape Sequence가 포함된 문자열을 일반 문자열로 변환한다...
	int nReturn = 0;

	while(*pSrc && nReturn < nLength)
	{
		if(pSrc[0] == '0')
			break;
		else if(pSrc[0] == '\\')		// Escape Sequence...
		{
			if(pSrc[1] == 'a')
			{
				pDst[nReturn] = 0x07;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'b')
			{
				pDst[nReturn] = 0x08;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'f')
			{
				pDst[nReturn] = 0x0C;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'n')
			{
				pDst[nReturn] = 0x0A;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'r')
			{
				pDst[nReturn] = 0x0D;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 't')
			{
				pDst[nReturn] = 0x09;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'v')
			{
				pDst[nReturn] = 0x0B;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == '\'')
			{
				pDst[nReturn] = 0x27;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == '\"')
			{
				pDst[nReturn] = 0x22;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == '\\')
			{
				pDst[nReturn] = 0x5C;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == '?')
			{
				pDst[nReturn] = 0x3F;
				++nReturn;
				pSrc += 2;
			}
			else if(pSrc[1] == 'x')
			{
				if(isxdigit(pSrc[2]) && isxdigit(pSrc[3]))
				{
					pDst[nReturn] = (unsigned char)(0x10 * ConvertHexacharToNumber(pSrc[2]) + ConvertHexacharToNumber(pSrc[3]));
					++nReturn;
					pSrc += 4;
				}
				else if(isxdigit(pSrc[2]))
				{
					pDst[nReturn] = (unsigned char)(ConvertHexacharToNumber(pSrc[3]));
					++nReturn;
					pSrc += 3;
				}
				else
				{
					pDst[nReturn] = 0x00;
					++nReturn;
					pSrc += 2;
				}
			}
			else if(IsOctalDigit(pSrc[1]))
			{
				if(IsOctalDigit(pSrc[2]) && IsOctalDigit(pSrc[3]))
				{
					pDst[nReturn] = (unsigned char)(8 * 8 * ConvertHexacharToNumber(pSrc[1]) + 8 * ConvertHexacharToNumber(pSrc[2]) + ConvertHexacharToNumber(pSrc[3]));
					++nReturn;
					pSrc += 4;
				}
				else if(IsOctalDigit(pSrc[2]))
				{
					pDst[nReturn] = (unsigned char)(8 * ConvertHexacharToNumber(pSrc[1]) + ConvertHexacharToNumber(pSrc[2]));
					++nReturn;
					pSrc += 3;
				}
				else
				{
					pDst[nReturn] = ConvertHexacharToNumber(pSrc[1]);
					++nReturn;
					pSrc += 2;
				}
			}
			else if(pSrc[1])
			{
				pDst[nReturn] = pSrc[1];
				++nReturn;
			}
			else
				break;
		}
		else
		{
			pDst[nReturn] = pSrc[0];
			++nReturn;
			pSrc++;
		}
	}

	return nReturn;
}

char* CUtilAscii::ConvertAsciiToHexa(CString strData, CString strPrefix, CString strSuffix, CString strDelimeter, int nType)
{
	USES_CONVERSION;

	char* pResult = nullptr;

	do 
	{
		if(strData.GetLength() < 1)
			break;

		if(nType < eBinary && nType > eHexadecimal)
			break;


		char* pChar = new char[strData.GetLength() + 1];

		int nLength = ConvertEscapeStringToString(T2A(strData), pChar, strData.GetLength());

		pChar[nLength] = '\0';

		int nMaxLength = nLength * (strPrefix.GetLength() + strSuffix.GetLength() + strDelimeter.GetLength() + 8);

		pResult = new char[nMaxLength + 1];

		int n = 0;
		for(int i = 0; i < nLength; ++i)
		{
			n += _snprintf_s(pResult + n, nMaxLength - n, _TRUNCATE, "%s", T2A(strPrefix));

			switch(nType)
			{
				case eBinary:
				{
					const char* szBinary = ConvertCharToBinary((unsigned char)pChar[i]);					
					n += _snprintf_s(pResult +n, nMaxLength - n, _TRUNCATE, "%s", szBinary);
				}
				break;
				case eOctal:
				{					
					n += _snprintf_s(pResult + n, nMaxLength - n, _TRUNCATE, "%o", (int)(unsigned char)pChar[i]);
				}
				break;
				case eDecimal:
				{
					n += _snprintf_s(pResult + n, nMaxLength - n, _TRUNCATE, "%u", (int)(unsigned char)pChar[i]);
				}
				break;
				case eHexadecimal:
				{
					n += _snprintf_s(pResult + n, nMaxLength - n, _TRUNCATE, "%02X", (int)(unsigned char)pChar[i]);
				}
				break;
			}

			n += _snprintf_s(pResult + n, nMaxLength - n, _TRUNCATE, "%s", T2A(strSuffix));

			if(nLength > (i + 1))
			{
				n += _snprintf_s(pResult +n, nMaxLength - n, _TRUNCATE, "%s", T2A(strDelimeter));
			}
		}

		pResult[nMaxLength] = '\0';


		if(pChar)
		{
			delete [] pChar;
			pChar = nullptr;
		}

	} while (false);

	return pResult;
}


CString CUtilAscii::ConvertCharToCString(char * pData, int nLength)
{
	CString strResult;
	strResult.Empty();

	do 
	{
		if(!pData)
			break;
		if(nLength < 1)
			break;

		for(int i = 0; i < nLength; ++i)
		{
			if(pData[i] != 0x00)
				strResult.AppendChar(pData[i]);

		}


	} while (false);

	return strResult;
}

