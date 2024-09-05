#pragma once
#include "PLCProtocol_Type_Header.h"
#include "PLCProtocol_Type_Enum_Define.h"
#include "PLCProtocol_Type_CellIDBlock.h"

#ifndef PLC_PROTOCOL_TYPE_2_CELL_ID_NUMBER
#define	PLC_PROTOCOL_TYPE_2_CELL_ID_NUMBER		1
#define	PLC_PROTOCOL_TYPE_2_MSG_LENGTH			21
#define	PLC_PROTOCOL_TYPE_2_SPARE_WORD_NUMBER	29
#endif // !PLC_PROTOCOL_TYPE_2_CELL_ID_NUMBER


namespace PLC_PROTOCOL_DEFINE
{
	namespace TYPE_2
	{
		using namespace Header_Part;
		using namespace Cell_ID_Block;

#pragma pack(1)
		struct stProtocol_Type_2 :public stHeaderUnit, public stCellIDBlockUnit
		{
		public:

			unsigned short		_stSpare[PLC_PROTOCOL_TYPE_2_SPARE_WORD_NUMBER];

			stProtocol_Type_2(unsigned short nMsgLength = PLC_PROTOCOL_TYPE_2_MSG_LENGTH, unsigned short nCellIDNumber = PLC_PROTOCOL_TYPE_2_CELL_ID_NUMBER, unsigned short nProtocolNo = enProtocolVersion::enProtocolVersion_Type_2)
				:stHeaderUnit(nMsgLength, nProtocolNo)
				,stCellIDBlockUnit(nCellIDNumber)
			{
				memset(_stSpare, 0, PLC_PROTOCOL_TYPE_2_SPARE_WORD_NUMBER * 2);
				InitializeProtocol_Type_2();
			}

			void InitializeProtocol_Type_2(void)
			{
				stCellIDBlockUnit::InitializeCellIDBlockUnit();
			}

			/// <summary>
			/// 수신받은 정보를 메세지를 전환
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA FullMsgToString(void)
			{
				CStringA str;
				str.Format(("%s,CellNum=%u,LotID=%s,%s"), HeaderToString().GetString(), _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll().GetString());
				return str;
			}

			stProtocol_Type_2& operator=(const stProtocol_Type_2& Input)
			{
				memcpy(this, &Input, sizeof(stProtocol_Type_2));
				return *this;
			}

		};
#pragma pack()
	}
	//////////////////////////////////////////////////////////////////////////////
}