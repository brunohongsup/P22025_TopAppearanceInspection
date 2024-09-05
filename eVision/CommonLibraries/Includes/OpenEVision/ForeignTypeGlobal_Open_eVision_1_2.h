#ifndef __WRAPPER_INTERNAL_OPEN_EVISION_1_2_FOREIGNTYPE_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_OPEN_EVISION_1_2_FOREIGNTYPE_OPEN_EVISION_1_2_1_2__
typedef unsigned int OEV_UINT32;
typedef unsigned char OEV_UINT8;
typedef unsigned short OEV_UINT16;
typedef signed int OEV_INT32;
#ifndef OEV_UINT64
  #ifdef _MSC_VER
    #if _MSC_VER < 1300 //VCPP6
      #undef OEV_UINT64
      typedef unsigned __int64 OEV_UINT64;
    #else
      typedef unsigned long long OEV_UINT64;
    #endif // _MSC_VER < 1300 //VCPP6
  #else
    typedef unsigned long long OEV_UINT64;
  #endif // _MSC_VER
#endif // OEV_UINT64
#ifndef OEV_INT64
  #ifdef _MSC_VER
    #if _MSC_VER < 1300 //VCPP6
      #undef OEV_INT64
      typedef __int64 OEV_INT64;
    #else
      typedef long long OEV_INT64;
    #endif // _MSC_VER < 1300 //VCPP6
  #else
    typedef long long OEV_INT64;
  #endif // _MSC_VER
#endif // OEV_INT64
typedef signed char OEV_INT8;
typedef signed short OEV_INT16;
typedef int BOOL;
#include <windows.h>
#include <string>

namespace Wrapper
{

  namespace Internal_Open_eVision_1_2
  {
    extern "C"
    {
      struct InternalString
      {
        InternalString()
        {
          Size = 0;
          Buffer = NULL;
        }
        size_t Size;
        char* Buffer;
        operator std::string() const
        {
          return std::string(Buffer, Size);
        }
      };
    }
  }

}

#include <string>

namespace Wrapper
{

  namespace Internal_Open_eVision_1_2
  {
    #include <string>
    extern "C"
    {
      struct InternalWString
      {
        size_t Size;
        wchar_t* Buffer;
        operator std::wstring() const
        {
          return std::wstring(Buffer, Size);
        }
      };
    }
  }

}

#include <vector>

namespace Wrapper
{

  namespace Internal_Open_eVision_1_2
  {
    extern "C"
    {
      struct InternalStdVector
      {
        void* Buffer;
        size_t Size;
        InternalStdVector()
        {
          Buffer = 0;
          Size = 0;
        }
      };
    }
  }

}

#include <memory>
#include <stdio.h>

namespace Wrapper
{
  namespace Internal_Open_eVision_1_2
  {
    struct CallbackSerializerHolder
    {
      static BOOL __stdcall GetEOS(void* cookie)
      {
        FILE* theFile = reinterpret_cast<FILE*>(cookie);
        int currentPosition = ftell(theFile);
        fseek(theFile, 0, SEEK_END);
        int endPosition = ftell(theFile);
        fseek(theFile, currentPosition, SEEK_SET);
        if(currentPosition == endPosition)
          return TRUE;
        return FALSE;
      }
      static void __stdcall SetCurrentPosition(unsigned int position, void* cookie)
      {
        FILE* theFile = reinterpret_cast<FILE*>(cookie);
        fseek(theFile, position, SEEK_SET);
      }
      static unsigned int __stdcall GetCurrentPos(void* cookie)
      {
        FILE* theFile = reinterpret_cast<FILE*>(cookie);
        return ftell(theFile);
      }
      static void __stdcall Close(void* cookie)
      {
        FILE* typedCookie = reinterpret_cast<FILE*>(cookie);
        fclose(typedCookie);
      }
      static int __stdcall SerializeMemory( void* data, size_t dataSize, const char* /*varName*/, int isWriting, void* cookie)
      {
        FILE* theFile = reinterpret_cast<FILE*>(cookie);
        if ( isWriting)
        {
          size_t numBytesWritten = fwrite( data, 1, dataSize, theFile);
          if ( numBytesWritten != dataSize)
            return 1;
        }
        else
        {
          size_t numBytesRead = fread( data, 1, dataSize, theFile);
          if ( numBytesRead != dataSize)
            return 2;
        }
        return 0;
      }

    };
  }
}

#endif // __WRAPPER_INTERNAL_OPEN_EVISION_1_2_FOREIGNTYPE_OPEN_EVISION_1_2_1_2__
