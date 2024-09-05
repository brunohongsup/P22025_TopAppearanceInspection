#pragma once
#include <memory.h>

namespace PLC_PROTOCOL_DEFINE
{
#pragma pack(1)
	namespace SWITCH_BIT_GROUP
	{
		struct stSwitch_Bit_Group
		{
			unsigned short	bShortNGDrainMode : 1;				//Short 비젼 불량 배출 모드
			unsigned short	bMeasureVisionNGDrainMode : 1;		//치수 비전 불량 배출 모드
			unsigned short	bNGMarkDrainMode : 1;				//NG Mark 불량 배출 모드
			unsigned short	Spare : 13;

			stSwitch_Bit_Group(void)
			{
				memset(this, 0, sizeof(stSwitch_Bit_Group));
			}

			void InitializeSwitch_Bit_Group(void)
			{
				bShortNGDrainMode = 0;
				bMeasureVisionNGDrainMode = 0;
				bNGMarkDrainMode = 0;
			}

			unsigned short GetBitValue(void) const
			{
				return *(unsigned short*)this;
			}
		};

		/// <summary>
		/// 라미두께 측정용 비트 그룹
		/// </summary>
		struct stLamin_Thickness_Bit_Group
		{
			unsigned short	bNGOK : 1;				//Short NG/OK, NG = 1
			unsigned short Spare : 15;

			stLamin_Thickness_Bit_Group(void)
			{
				memset(this, 0, sizeof(stLamin_Thickness_Bit_Group));
			}

			void InitializeLamin_Thickness_Bit_Group(void)
			{
				bNGOK = 0;
			}
		};

		////////////////////////////////////////////////////////////////
	}

#pragma pack()

	////////////////////////////////////////////////////////////////////
}