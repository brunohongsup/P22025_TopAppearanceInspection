#pragma once



#ifndef BYTE_MIN
#define BYTE_MIN			(0)
#endif

#ifndef SHORT_MIN
#define SHORT_MIN			(-32768)
#endif

#ifndef INT_MIN
#define INT_MIN				(-2147483647 - 1)
#endif

#ifndef LONG_MIN
#define LONG_MIN			(-2147483647L - 1)
#endif

#ifndef LONGLONG_MIN
#define LONGLONG_MIN		(-9223372036854775807i64 - 1)
#endif

#ifndef LONG64_MIN
#define LONG64_MIN			(-9223372036854775807i64 - 1)
#endif

#ifndef INT128_MIN
#define INT128_MIN			(-170141183460469231731687303715884105727i128 - 1)
#endif

#ifdef _WIN64
	#ifndef INT_PTR_MIN
	#define INT_PTR_MIN		(-9223372036854775807i64 - 1)
	#endif

	#ifndef LONG_PTR_MIN
	#define LONG_PTR_MIN	(-9223372036854775807i64 - 1)
	#endif

	#ifndef PTRDIFF_T_MIN
	#define PTRDIFF_T_MIN	(-9223372036854775807i64 - 1)
	#endif

	#ifndef SSIZE_T_MIN
	#define SSIZE_T_MIN		(-9223372036854775807i64 - 1)
	#endif
#else
	#ifndef INT_PTR_MIN
	#define INT_PTR_MIN		(-2147483647 - 1)
	#endif

	#ifndef LONG_PTR_MIN
	#define LONG_PTR_MIN	(-2147483647L - 1)
	#endif

	#ifndef PTRDIFF_T_MIN
	#define PTRDIFF_T_MIN	(-2147483647 - 1)
	#endif

	#ifndef SSIZE_T_MIN
	#define SSIZE_T_MIN		(-2147483647L - 1)
	#endif
#endif

#ifndef BYTE_MAX
#define BYTE_MAX			0xff
#endif

#ifndef SHORT_MAX
#define SHORT_MAX			32767
#endif

#ifndef USHORT_MAX
#define USHORT_MAX			0xffff
#endif

#ifndef WORD_MAX
#define WORD_MAX			0xffff
#endif

#ifndef INT_MAX
#define INT_MAX				2147483647
#endif

#ifndef UINT_MAX
#define UINT_MAX			0xffffffff
#endif

#ifndef LONG_MAX
#define LONG_MAX			2147483647L
#endif

#ifndef ULONG_MAX
#define ULONG_MAX			0xffffffffUL
#endif

#ifndef DWORD_MAX
#define DWORD_MAX			0xffffffffUL
#endif

#ifndef LONGLONG_MAX
#define LONGLONG_MAX		9223372036854775807i64
#endif

#ifndef LONG64_MAX
#define LONG64_MAX			9223372036854775807i64
#endif

#ifndef ULONGLONG_MAX
#define ULONGLONG_MAX		0xffffffffffffffffui64
#endif

#ifndef DWORDLONG_MAX
#define DWORDLONG_MAX		0xffffffffffffffffui64
#endif

#ifndef ULONG64_MAX
#define ULONG64_MAX			0xffffffffffffffffui64
#endif

#ifndef DWORD64_MAX
#define DWORD64_MAX			0xffffffffffffffffui64
#endif

#ifndef INT128_MAX
#define INT128_MAX			170141183460469231731687303715884105727i128
#endif

#ifndef UINT128_MAX
#define UINT128_MAX			0xffffffffffffffffffffffffffffffffui128
#endif

#ifdef _WIN64
	#ifndef INT_PTR_MAX
	#define INT_PTR_MAX		9223372036854775807i64
	#endif

	#ifndef UINT_PTR_MAX
	#define UINT_PTR_MAX	0xffffffffffffffffui64
	#endif

	#ifndef LONG_PTR_MAX
	#define LONG_PTR_MAX	9223372036854775807i64
	#endif

	#ifndef ULONG_PTR_MAX
	#define ULONG_PTR_MAX	0xffffffffffffffffui64
	#endif

	#ifndef DWORD_PTR_MAX
	#define DWORD_PTR_MAX	0xffffffffffffffffui64
	#endif

	#ifndef PTRDIFF_T_MAX
	#define PTRDIFF_T_MAX	9223372036854775807i64
	#endif

	#ifndef SIZE_T_MAX
	#define SIZE_T_MAX		0xffffffffffffffffui64
	#endif

	#ifndef SSIZE_T_MAX
	#define SSIZE_T_MAX		9223372036854775807i64
	#endif

	#ifndef _SIZE_T_MAX
	#define _SIZE_T_MAX		0xffffffffffffffffui64
	#endif
#else
	#ifndef INT_PTR_MAX
	#define INT_PTR_MAX		2147483647 
	#endif

	#ifndef UINT_PTR_MAX
	#define UINT_PTR_MAX	0xffffffff
	#endif

	#ifndef LONG_PTR_MAX
	#define LONG_PTR_MAX	2147483647L
	#endif

	#ifndef ULONG_PTR_MAX
	#define ULONG_PTR_MAX	0xffffffffUL
	#endif

	#ifndef DWORD_PTR_MAX
	#define DWORD_PTR_MAX	0xffffffffUL
	#endif

	#ifndef PTRDIFF_T_MAX
	#define PTRDIFF_T_MAX	2147483647
	#endif

	#ifndef SIZE_T_MAX
	#define SIZE_T_MAX		0xffffffff
	#endif

	#ifndef SSIZE_T_MAX
	#define SSIZE_T_MAX		2147483647L
	#endif

	#ifndef _SIZE_T_MAX
	#define _SIZE_T_MAX		0xffffffffUL
	#endif
#endif

