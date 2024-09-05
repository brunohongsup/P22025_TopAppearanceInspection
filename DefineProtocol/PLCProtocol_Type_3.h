#pragma once
#pragma once
#include "PLCProtocol_Type_CellIDBlock.h"
#include "PLCProtocol_Type_Header.h"
#include "PLCProtocol_Type_Enum_Define.h"

#ifndef PLC_PROTOCOL_TYPE_3_MAX_MEASURE_NUMBER
#define	PLC_PROTOCOL_TYPE_3_MAX_MEASURE_NUMBER		200
#define	PLC_PROTOCOL_TYPE_3_MSG_LENGTH				435
#define	PLC_PROTOCOL_TYPE_3_CELL_ID_NUMBER			1
#define	PLC_PROTOCOL_TYPE_3_RECEIPE					9
#endif

namespace PLC_PROTOCOL_DEFINE
{
	namespace TYPE_3
	{
		using namespace Header_Part;
		using namespace Cell_ID_Block;

#pragma pack(1)
		struct stProtocol_Type_3 :public stHeaderUnit, public stCellIDBlockUnit
		{
		public:

			unsigned short		_nReceipe[PLC_PROTOCOL_TYPE_3_RECEIPE];

			unsigned short		_nMeasureNumber;

			INT32		_nLimitMax;

			INT32		_nLimitMin;

			INT32		_nMeasureData[PLC_PROTOCOL_TYPE_3_MAX_MEASURE_NUMBER];

			stProtocol_Type_3(unsigned short nMsgLength = PLC_PROTOCOL_TYPE_3_MSG_LENGTH, unsigned short nCellIDNumber = PLC_PROTOCOL_TYPE_3_CELL_ID_NUMBER, unsigned short nProtocolNo = enProtocolVersion::enProtocolVersion_Type_3)
				:stHeaderUnit(nMsgLength, nProtocolNo)
				, stCellIDBlockUnit(nCellIDNumber)
			{
				_nCellIDNumber = nCellIDNumber;
				_nLimitMax = 0;
				_nLimitMin = 0;
				_nMeasureNumber = 1;
				for (int i = 0; i < PLC_PROTOCOL_TYPE_3_RECEIPE; i++)
				{
					_nReceipe[i] = 0;
				}
				InitializeProtocol_Type_3();
			}

			void InitializeProtocol_Type_3(void)
			{
				stCellIDBlockUnit::InitializeCellIDBlockUnit();
				int i;
				for (i = 0; i < PLC_PROTOCOL_TYPE_3_RECEIPE; i++)
				{
					_nReceipe[i] = 0;
				}
				for (i = 0; i < PLC_PROTOCOL_TYPE_3_MAX_MEASURE_NUMBER; i++)
				{
					_nMeasureData[i] = 0;
				}
			}

			/// <summary>
			/// 수신받은 정보를 메세지를 전환
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			CStringA FullMsgToString(void)
			{
				CStringA str, strMeasure, strTemp;
				strMeasure.Format("MeasureNumber=%u,LimitMax=%d,LimitMin=%d", _nMeasureNumber, _nLimitMax, _nLimitMin);
				for (unsigned short i = 1; i < _nMeasureNumber && i < PLC_PROTOCOL_TYPE_3_MAX_MEASURE_NUMBER; i++)
				{
					strTemp.Format(",P%u=%d", i+1, _nMeasureData[i]);
					strMeasure += strTemp;
				}
				str.Format("%s,CellNum=%u,LotID=%s,%s,BitModeValue=%u,%s", HeaderToString().GetString(), _nCellIDNumber, _stLotID.GetLotID().GetString(), GetCellIDAll().GetString(), GetBitValue(), strMeasure.GetString());
				return str;
			}

			stProtocol_Type_3& operator=(const stProtocol_Type_3& Input)
			{
				memcpy(this, &Input, sizeof(stProtocol_Type_3));
				return *this;
			}

		};
#pragma pack()
	}
}