#pragma once
#include "Protocol_Type_ASCII_Type_ID.h"

namespace PROTOCOL_DEFINE
{
	using namespace ASCII_TYPE_ID_10BYTE;
#pragma pack(1)
	namespace LOT_ID
	{
		struct stLotIDUnit :public stASCII_Type_ID_10Byte
		{
			/// <summary>
			/// Lot id 반환
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA GetLotID(void) const
			{
				return stASCII_Type_ID_10Byte::operator CStringA();
			}

			/// <summary>
			/// Lot id 대입
			/// </summary>
			/// <param name="strCellID"></param>
			void SetLotID(const CStringA strCellID)
			{
				stASCII_Type_ID_10Byte::operator=(strCellID);
			}
		};
	}
#pragma pack()
	//////////////////////////////////////////////////////////////////////////////
}