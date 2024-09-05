#pragma once
#include <atlstr.h>
#include "PLCProtocol_Type_Header_PLC_CommRequest.h"
//#include "PLCProtocol_Type_Header_PC_CommRequest.h"
#include "PLCProtocol_Type_Header_DataType.h"
#include "PLCProtocol_Type_Header_Switch_Bit_Group.h"

namespace PLC_PROTOCOL_DEFINE
{
#pragma pack(1)
	namespace Header_Part
	{
		using namespace PLC_Comm_Request;
		using namespace PLC_Data_Type;
		using namespace SWITCH_BIT_GROUP;

		struct stHeaderUnit
		{
			unsigned short					_nMsgLength;		//메세지 길이값
			stPLCCommRequest_PCCommComplete	_stPLCCommRequest;	//plc write 영역, pc read 영역
			stPLCDataType					_stPLCDataType;		//pc write 영역, plc read 영역
			unsigned short					_nProtocolNo;		//프로토콜 번호

			stHeaderUnit(unsigned short nMsgLength = 0, unsigned short nProtocolNo = 0)
			{
				InitializeHeader(nMsgLength, nProtocolNo);
			}

			void InitializeHeader(unsigned short nMsgLength, unsigned short nProtocolNo)
			{
				_nMsgLength = nMsgLength;
				_stPLCCommRequest.InitializePLCCommRequest();
				_stPLCDataType.InitializePLCDataType();
				
				_nProtocolNo = nProtocolNo;
			}

			CStringA HeaderToString(void)
			{
				CStringA str;
				str.Format("MsgL=%u,PLC/PCReq=%u,DType=%u,ProVer=%u", _nMsgLength, _stPLCCommRequest.PLC_TO_PC_Return_Request, _stPLCDataType.DataType(), _nProtocolNo);
				return str;
			}

			/// <summary>
			/// PLC에서 PC에게 통신 송신에 대한 응답 요청이 있는 경우 true
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			bool IsRequestPCReturn(void) const
			{
				return 1 == _stPLCCommRequest.PLC_TO_PC_Return_Request;
			}

			/// <summary>
			/// PLC에서 PC에게 통신 반환 요청
			/// </summary>
			/// <param name=""></param>
			void SetPLCRequestReturnFromPC(void)
			{
				_stPLCCommRequest.PLC_TO_PC_Return_Request = 1;
			}

			/// <summary>
			/// 통신 pc->plc 통신 반환 confirm on 처리
			/// </summary>
			/// <param name=""></param>
			void SetPCReturnConfirm(void)
			{
				_stPLCCommRequest.PLC_TO_PC_Return_Request = 1;
			}

			/// <summary>
			/// pc->plc 송신이 필요하면 true
			/// </summary>
			/// <param name=""></param>
			/// <returns></returns>
			bool IsNeedSend_PC_to_PLC(void) const
			{
				return 1 == _stPLCCommRequest.PLC_TO_PC_Return_Request;
			}

			stHeaderUnit& operator=(const stHeaderUnit& Input)
			{
				memcpy(this, &Input, sizeof(stHeaderUnit));
				return *this;
			}
		};

		//////////////////////////////////////////////////////////////////////////
	}
	//////////////////////////////////////////////////////////////////////////////
#pragma pack()
}