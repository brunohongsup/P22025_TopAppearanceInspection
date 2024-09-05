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
			/// ASCII Type ID ���� ����
			/// </summary>
			char	_chCellID[ASCII_TYPE_ID_NUMBER];

		public:

			/// <summary>
			/// ������
			/// </summary>
			/// <param name=""></param>
			stASCII_Type_ID_10Byte(void)
			{
				InitializeASCII_Type_ID_10Byte();
			}

			/// <summary>
			/// �ʱ�ȭ �Լ�
			/// </summary>
			/// <param name=""></param>
			void InitializeASCII_Type_ID_10Byte(void)
			{
				memset(_chCellID, 0, ASCII_TYPE_ID_NUMBER);
			}

			/// <summary>
			/// ���ڿ� �� id casting ������
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
			/// ���� ������
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte ����ü �Է�</param>
			/// <returns>stASCII_Type_ID_10Byte</returns>
			stASCII_Type_ID_10Byte& operator=(const stASCII_Type_ID_10Byte& Input)
			{
				memcpy(this, &Input, sizeof(stASCII_Type_ID_10Byte));
				return *this;
			}

			/// <summary>
			/// ���� ������
			/// </summary>
			/// <param name="strInput">�� id ���ڿ�</param>
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
			/// �������� ���ϴ� �Լ�
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte</param>
			/// <returns>�����ϸ� true</returns>
			bool operator==(const stASCII_Type_ID_10Byte& Input) const
			{
				return 0 == memcmp(_chCellID, &Input, ASCII_TYPE_ID_NUMBER);
			}

			/// <summary>
			/// �������� ���ϴ� �Լ�
			/// </summary>
			/// <param name="strInput">�� ��� cell id ���ڿ�</param>
			/// <returns>�����ϸ� true</returns>
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
			/// �������� ���� ��츦 ���ϴ� �Լ�
			/// </summary>
			/// <param name="Input">stASCII_Type_ID_10Byte</param>
			/// <returns>���� �������� ������ true</returns>
			bool operator!=(const stASCII_Type_ID_10Byte& Input) const
			{
				return !operator==(Input);
			}

			/// <summary>
			/// �������� ���� ��츦 ���ϴ� �Լ�
			/// </summary>
			/// <param name="strInput">�� ��� cell id ���ڿ�</param>
			/// <returns>�������� ���� ��� true</returns>
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