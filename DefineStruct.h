#pragma once

namespace LOADVTECSDll_GROUP
{
#pragma pack(1)
	struct stDllStatus
	{
		bool bIsConnected;
		bool bInitialzed;

		stDllStatus()
		{
			bIsConnected = false;
			bInitialzed = false;
		}

		BOOL operator!=(const stDllStatus& Input)
		{
			return 0 != memcmp(this, &Input, sizeof(*this));
		}

		stDllStatus& operator=(const stDllStatus& Input)
		{
			memcpy(this, &Input, sizeof(stDllStatus));
			return *this;
		}
	};
#pragma pack()
}