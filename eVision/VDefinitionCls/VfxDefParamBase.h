#pragma once

//////////////////////////////////////////////////////////////////////////
// CParamBase Sturctures

template<class UserDefinedType>
struct SParamElement
{
	UserDefinedType tValue;
	bool bInitialized;

	size_t GetStructSize() { return sizeof(*this); }
	size_t GetValueSize() { return sizeof(tValue); }
	SParamElement() { bInitialized = false; }
};

//////////////////////////////////////////////////////////////////////////
