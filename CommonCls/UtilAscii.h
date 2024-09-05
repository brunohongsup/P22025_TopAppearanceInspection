#pragma once
class CUtilAscii
{
public:

	enum
	{
		eBinary = 0,
		eOctal,
		eDecimal,
		eHexadecimal,
	};

	//////////////////////////////////////////////////////////////////////////
	// Escape Sequence
	//	const char*			unsigend char		Description
	//	"\\a"				'\a'				0x07			Alert (Beep)
	//	"\\b"				'\b'				0x08			Back Space
	//	"\\f"				'\f'				0x0C			Form Feed
	//	"\\n"				'\n'				0x0A			New Line
	//	"\\r"				'\r'				0x0D			Carriage Line
	//	"\\t"				'\t'				0x09			Tab
	//	"\\v"				'\v'				0x0B			Vertical Tab
	//	"\\'"				'\''				0x27			Signal Quotation mark
	//	"\\\"				'\"'				0x22			Double Quotation mark
	//	"\\\\"				'\\'				0x5C			Back Splash
	//	"\\?"				'\?'				0x3F			Literal Question mark
	//	"\\ooo"				'\0'				0x00			Ascii character in Octal notation
	//	"\\xhh"				'\0'				0x00			Ascii character in Hexadecimal notation


	CUtilAscii();
	~CUtilAscii();

	bool		IsOctalDigit(char ch);
	int			ConvertHexacharToNumber(char ch);
	char		ConvertNumberToHexachar(int nDec);
	char		ConvertNumberToHexaCharEx(int nDec);
	
	const char*	ConvertCharToBinary(unsigned char ch);

	int			ConvertEscapeStringToString(const char* pSrc, char* pDst, int nLength);

	char*		ConvertAsciiToHexa(CString strData, CString strPrefix, CString strSuffix, CString strDelimeter, int nType);

	bool		IsNumber(char ch);
	bool		IsFloatNumber(CString str);


	unsigned int	ConvertByteToInteger(BYTE* pSrc, bool bLittleEndian);
	bool			ConvertIntegerToByteArray(unsigned int nSrc, BYTE* pDst, bool bLittleEndian);

	unsigned int	ConvertByteToNumber(BYTE* pSrc, bool bLittleEndian);
	bool			ConvertNumberToByteArray(unsigned int nSrc, BYTE* pDst, bool bLittleEndian);

	unsigned short	ConvertByteToShort(BYTE* pSrc, bool bLittleEndian);
	bool			ConvertShortToByteArray(unsigned short nSrc, BYTE* pDst, bool bLittleEndian);

	
	CString		ConvertCharToCString(char* pData, int nLength);


};

