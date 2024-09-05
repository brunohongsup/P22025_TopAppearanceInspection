#pragma once
#include "Protocol_Type_ASCII_Type_ID.h"

namespace PROTOCOL_DEFINE
{
	namespace CELL_ID
	{
		using namespace ASCII_TYPE_ID_10BYTE;
#pragma pack(1)
		struct stCellIDUnit:public stASCII_Type_ID_10Byte
		{

			/// <summary>
			/// ºø id π›»Ø
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA GetCellID(void) const
			{
				return stASCII_Type_ID_10Byte::operator CStringA();
			}

			/// <summary>
			/// ºø id ¥Î¿‘
			/// </summary>
			/// <param name="strCellID"></param>
			void SetCellID(const CStringA strCellID)
			{
				stASCII_Type_ID_10Byte::operator=(strCellID);
			}
		};
#pragma pack()
		//////////////////////////////////////////////////////////////////////////
	}
	//////////////////////////////////////////////////////////////////////////////
}