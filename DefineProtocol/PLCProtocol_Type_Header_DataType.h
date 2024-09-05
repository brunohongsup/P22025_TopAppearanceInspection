#pragma once
#include <memory.h>

namespace PLC_PROTOCOL_DEFINE
{
#pragma pack(1)
	namespace PLC_Data_Type
	{
		struct stPLCDataType
		{
			unsigned short bShortData : 1;
			unsigned short bVisionData : 1;
			unsigned short Spare : 14;

			/// <summary>
			/// ������
			/// </summary>
			/// <param name=""></param>
			stPLCDataType(void)
			{
				memset(this, 0, sizeof(stPLCDataType));
			}

			/// <summary>
			/// �ʱ�ȭ �Լ�
			/// </summary>
			/// <param name=""></param>
			void InitializePLCDataType(void)
			{
				bShortData = 0;
				bVisionData = 0;
			}

			/// <summary>
			/// short ������ ���� Ȯ��
			/// </summary>
			/// <param name=""></param>
			/// <returns>short �������̸� true</returns>
			bool IsShortData(void) const
			{
				return 1 == bShortData && 0 == bVisionData;
			}

			/// <summary>
			/// Vision ������ ���� Ȯ��
			/// </summary>
			/// <param name=""></param>
			/// <returns>Vision �������̸� true</returns>
			bool IsVisionData(void) const
			{
				return 0 == bShortData && 1 == bVisionData;
			}

			unsigned short DataType(void) const
			{
				return *(unsigned short*)this;
			}

			stPLCDataType& operator=(const stPLCDataType& Input)
			{
				memcpy(this, &Input, sizeof(stPLCDataType));
				return *this;
			}

			bool operator==(const stPLCDataType& Input) const
			{
				return 0 == memcmp(this, &Input, sizeof(stPLCDataType));
			}
		};
	}
#pragma pack()
}