#pragma once

// 32bit
#ifdef _M_X86

	#ifdef WIN64
		#undef WIN64
	#endif

	#ifdef _WIN64
		#undef _WIN64
	#endif

// 64bit
#elif _M_X64

	#ifndef WIN64
		#define WIN64
	#endif

	#ifndef _WIN64
		#define _WIN64
	#endif

#endif

#ifndef WIN32
	#define WIN32
#endif

#ifndef _WIN32
	#define _WIN32
#endif
