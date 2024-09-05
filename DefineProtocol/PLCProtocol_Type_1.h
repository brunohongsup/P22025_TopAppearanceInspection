#pragma once
#include <string.h>
#include "PLCProtocol_Type_CellIDBlock.h"
#include "PLCProtocol_Type_Header.h"
#include "PLCProtocol_Type_Enum_Define.h"

#ifndef PLC_PROTOCOL_TYPE_1_CELL_ID_NUMBER
#define	PLC_PROTOCOL_TYPE_1_CELL_ID_NUMBER		2
#define	PLC_PROTOCOL_TYPE_1_MSG_LENGTH			21
#define	PLC_PROTOCOL_TYPE_1_SPARE_WORD_NUMBER	29
#endif // !PLC_PROTOCOL_TYPE_1_CELL_ID_NUMBER


namespace PLC_PROTOCOL_DEFINE
{
	namespace TYPE_1
	{
		using namespace Header_Part;
		using namespace Cell_ID_Block;

#pragma pack(1)
		struct stProtocol_Type_1:public stHeaderUnit, public stCellIDBlockUnit
		{
		public:

			unsigned short		_stSpare[PLC_PROTOCOL_TYPE_1_SPARE_WORD_NUMBER];

			stProtocol_Type_1(unsigned short nMsgLength = PLC_PROTOCOL_TYPE_1_MSG_LENGTH, unsigned short nCellIDNumber = PLC_PROTOCOL_TYPE_1_CELL_ID_NUMBER, unsigned short nProtocolNo = enProtocolVersion::enProtocolVersion_Type_1)
				:stHeaderUnit(nMsgLength, nProtocolNo)
				,stCellIDBlockUnit(nCellIDNumber)
			{
				memset(_stSpare, 0, PLC_PROTOCOL_TYPE_1_SPARE_WORD_NUMBER * 2);
				InitializeProtocol_Type_1();
			}

			void InitializeProtocol_Type_1(void)
			{
				stCellIDBlockUnit::InitializeCellIDBlockUnit();
			}

			stProtocol_Type_1& operator=(const stProtocol_Type_1& Input)
			{
				memcpy(this, &Input, sizeof(stProtocol_Type_1));
				return *this;
			}

			/// <summary>
			/// 수신받은 정보를 메세지를 전환
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA FullMsgToString(void)
			{
				CStringA str;
				str.Format(("%s,CellNum=%u,LotID=%s,%s,BitModeValue=%u"), HeaderToString().GetString(), _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll().GetString(), GetBitValue());
				return str;
			}

			/*
			/// <summary>
			/// 동일한 셀 id가 존재하는지 확인하는 함수
			/// </summary>
			/// <param name="Input"></param>
			/// <returns></returns>
			bool IsExistSameCellID(const stProtocol_Type21_1& Input)
			{
				for (int i = 0; i < PLC_PROTOCOL_TYPE21_1_CELL_ID_NUMBER; i++)
				{
					if (_stCellID[i] == Input._stCellID[i])
					{
						return true;
					}
				}
				return false;
			}

			bool IsExistSameCellID(const CStringA& Input)
			{
				for (int i = 0; i < PLC_PROTOCOL_TYPE21_1_CELL_ID_NUMBER; i++)
				{
					if (_stCellID[i] == Input)
					{
						return true;
					}
				}
				return false;
			}
			*/

		};
#pragma pack()
	}
	//////////////////////////////////////////////////////////////////////////////
}