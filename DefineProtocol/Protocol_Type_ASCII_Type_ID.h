#pragma once
#include <atlstr.h>

#ifndef ASCII_TYPE_ID_NUMBER
#define	ASCII_TYPE_ID_NUMBER	10
#endif // !ASCII_TYPE_ID_NUMBER

namespace PROTOCOL_DEFINE
{
	namespace ASCII_TYPE_ID_10BYTE
	{
#pragma pack(1)
		struct stASCII_Type_ID_10Byte
		{
		private:

			/// <summary>
			/// ASCII Type ID 저장 변수
			/// </summary>
			char	_chCellID[ASCII_TYPE_ID_NUMBER];

		public:

			/// <summary>
			/// 생성자
			/// </summary>
			/// <param name=""></param>
			stASCII_Type_ID_10Byte(void)
			{
				InitializeASCII_Type_ID_10Byte();
			}

			/// <summary>
			/// 초기화 함수
			/// </summary>
			/// <param name=""></param>
			void InitializeASCII_Type_ID_10Byte(void)
			{
				memset(_chCellID, 0, ASCII_TYPE_ID_NUMBER);
			}

			/// <summary>
			/// 문자열 셀 id casting 연산자
			/// </summary>
			/// <param name=""></param>
			operator CStringA(void) const
			{
				CStringA strReturn;
				char* p = strReturn.GetBuffer(ASCII_TYPE_ID_NUMBER + 1);
				memcpy(p, _chCellID, ASCII_TYPE_ID_NUMBER);
				p[ASCII_TYPE_ID_NUMBER] = 0;
				strReturn.ReleaseBuffer();
				return strReturn;
			}

			/// <summary>
			/// 복사 연산자
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte 구조체 입력</param>
			/// <returns>stASCII_Type_ID_10Byte</returns>
			stASCII_Type_ID_10Byte& operator=(const stASCII_Type_ID_10Byte& Input)
			{
				memcpy(this, &Input, sizeof(stASCII_Type_ID_10Byte));
				return *this;
			}

			/// <summary>
			/// 복사 연산자
			/// </summary>
			/// <param name="strInput">셀 id 문자열</param>
			/// <returns>stASCII_Type_ID_10Byte</returns>
			stASCII_Type_ID_10Byte& operator=(const CStringA& strInput)
			{
				const int nLength = strInput.GetLength();
				if (nLength >= ASCII_TYPE_ID_NUMBER)
				{
					memcpy(_chCellID, strInput.GetString(), ASCII_TYPE_ID_NUMBER);
				}
				else
				{
					memset(_chCellID, 0, ASCII_TYPE_ID_NUMBER);
					if (nLength > 0)
					{
						memcpy(_chCellID, strInput.GetString(), nLength);
					}
				}
				return *this;
			}

			/// <summary>
			/// 동일한지 비교하는 함수
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte</param>
			/// <returns>동일하면 true</returns>
			bool operator==(const stASCII_Type_ID_10Byte& Input) const
			{
				return 0 == memcmp(_chCellID, &Input, ASCII_TYPE_ID_NUMBER);
			}

			/// <summary>
			/// 동일한지 비교하는 함수
			/// </summary>
			/// <param name="strInput">비교 대상 cell id 문자열</param>
			/// <returns>동일하면 true</returns>
			bool operator==(const CStringA& strInput) const
			{
				const int nLength = strInput.GetLength();
				if (nLength <= ASCII_TYPE_ID_NUMBER && nLength > 0)
				{
					return 0 == memcmp(_chCellID, strInput.GetString(), nLength);
				}
				return false;
			}

			/// <summary>
			/// 동일하지 않은 경우를 비교하는 함수
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte</param>
			/// <returns>서로 동일하지 않으면 true</returns>
			bool operator!=(const stASCII_Type_ID_10Byte& Input) const
			{
				return !operator==(Input);
			}

			/// <summary>
			/// 동일하지 않은 경우를 비교하는 함수
			/// </summary>
			/// <param name="strInput">비교 대상 cell id 문자열</param>
			/// <returns>동일하지 않은 경우 true</returns>
			bool operator!=(const CStringA& strInput) const
			{
				return !operator==(strInput);
			}
		};
#pragma pack()

		//////////////////////////////////////////////////////////////////////////
	}
	//////////////////////////////////////////////////////////////////////////////
}