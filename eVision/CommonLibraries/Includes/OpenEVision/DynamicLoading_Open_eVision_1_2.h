#ifndef __WRAPPER_INTERNAL_OPEN_EVISION_1_2_MODULEHANDLER_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_OPEN_EVISION_1_2_MODULEHANDLER_OPEN_EVISION_1_2_1_2__
#include <string>
#include <windows.h>
#include "ScopeCriticSec_Open_eVision_1_2.h"

namespace Wrapper
{

  namespace Internal_Open_eVision_1_2
  {
    class ModuleHandler
    {
    private:
      HMODULE module_;
      HANDLE mutex_;
    public:
      ~ModuleHandler()
      {
        if(module_ == 0)
        {
          return;
        }

        {
          DWORD res = ::WaitForSingleObject(mutex_, INFINITE);
          if(res != WAIT_OBJECT_0) // The mutex has been signaled
            throw "ModuleHandle not reachable";
        }

        ::FreeLibrary(module_);
        ::ReleaseMutex(mutex_);
      }

      ModuleHandler(const std::string& dllPath)
      {
        Init();
        module_ = ::LoadLibraryA(dllPath.c_str());
        ::ReleaseMutex(mutex_);
        if(module_ == 0)
        {
          throw "ModuleHandle not reachable";
        }

      }

      ModuleHandler(char* moduleName, HKEY keyMain, char* regPath, char* regValue)
      {
        Init();
        char installPath[260];
        DWORD dwSize=260;
        HKEY hKey;
        LONG returnStatus;
        DWORD dwType=REG_SZ;
        returnStatus = ::RegOpenKeyExA(keyMain, regPath, 0L,  KEY_READ, &hKey);
        if (returnStatus == ERROR_SUCCESS)
        {
          returnStatus = ::RegQueryValueExA(hKey, regValue, NULL, &dwType,(LPBYTE)&installPath, &dwSize);
          if (returnStatus == ERROR_SUCCESS)
          {
            char* modulePath = reinterpret_cast<char*>(malloc((strlen(installPath) + strlen(moduleName) + 2) * sizeof(char)));
            if(modulePath != 0)
            {
              #pragma warning(push)
              #pragma warning(disable: 4996)
              sprintf(modulePath, "%s\\%s", installPath, moduleName);
              #pragma warning(pop)
              module_ = ::LoadLibraryExA(modulePath, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
              free(modulePath);
            }

          }

        }

        if(module_ == 0)
        {
          module_ = ::LoadLibraryA(moduleName);
        }

        ::ReleaseMutex(mutex_);
        if(module_ == 0)
        {
          throw "ModuleHandle not reachable";
        }

      }

      void Init()
      {
        module_ = 0;
        {
          mutex_ = NULL;
          DWORD processId = ::GetCurrentProcessId();
          char mutexName[260]; // The max length for a mutex name is 260, cf MSDN.
          #pragma warning(push)
          #pragma warning(disable: 4996) // sprintf is unsafe, use sprintf_s instead
          sprintf(mutexName, "IntraProcess_Unload_Protection_Mutex_%d", processId);
          #pragma warning(pop)
          mutex_ = ::CreateMutexA(NULL, TRUE, mutexName);
          if(mutex_ == NULL)
            throw "ModuleHandle not reachable";
          if(GetLastError() == ERROR_ALREADY_EXISTS)
          {
            DWORD res = ::WaitForSingleObject(mutex_, INFINITE);
            if(res != WAIT_OBJECT_0) // The mutex has been signaled
              throw "ModuleHandle not reachable";
          }

        }

      }

      void* LoadFunction(char* fctName)
      {
        void* result = ::GetProcAddress(module_, fctName);
        if(result == NULL)
        {
          throw "No function with that name on the module";
        }

        return result;
      }

    };
  }

}

#endif // __WRAPPER_INTERNAL_OPEN_EVISION_1_2_MODULEHANDLER_OPEN_EVISION_1_2_1_2__
