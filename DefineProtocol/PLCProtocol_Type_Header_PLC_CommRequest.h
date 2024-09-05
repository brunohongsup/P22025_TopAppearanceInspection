#pragma once
#include <memory.h>

namespace PLC_PROTOCOL_DEFINE
{
#pragma pack(1)
	namespace PLC_Comm_Request
	{
		struct stPLCCommRequest_PCCommComplete
		{
			unsigned short	PLC_TO_PC_Return_Request : 1;
			unsigned short	SPARE : 15;

			stPLCCommRequest_PCCommComplete(void)
			{
				memset(this, 0, sizeof(stPLCCommRequest_PCCommComplete));
			}

			void InitializePLCCommRequest(void)
			{
				PLC_TO_PC_Return_Request = 0;
			}

			stPLCCommRequest_PCCommComplete& operator=(const stPLCCommRequest_PCCommComplete& Input)
			{
				memcpy(this, &Input, sizeof(stPLCCommRequest_PCCommComplete));
				return *this;
			}

			bool operator==(const stPLCCommRequest_PCCommComplete& Input) const
			{
				return 0 == memcmp(this, &Input, sizeof(stPLCCommRequest_PCCommComplete));
			}

			bool operator!=(const stPLCCommRequest_PCCommComplete& Input) const
			{
				return !operator==(Input);
			}
		};
	}
#pragma pack()
}