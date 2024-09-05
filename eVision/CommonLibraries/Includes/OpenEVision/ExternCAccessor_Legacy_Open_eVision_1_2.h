#ifndef __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_EXTERNC_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_EXTERNC_LEGACY_OPEN_EVISION_1_2_1_2__

#include "DynamicLoading_Legacy_Open_eVision_1_2.h"
#include "ExternCClassNameEnum_Legacy_Open_eVision_1_2.h"
#include "DestructionCallback_Legacy_Open_eVision_1_2.h"
#include "ExternCTypeDef_Legacy_Open_eVision_1_2.impl"

void ModuleLifeTimeCallback_Legacy_Open_eVision_1_2();

namespace Wrapper
{
  namespace Internal_Legacy_Open_eVision_1_2
  {
    #include "ExternCVars_Legacy_Open_eVision_1_2.impl"
    class ExternC
    {
    public:
      static void Load(const std::string& forceDllPath)
      {
        GetInstance(forceDllPath);
      }

      static void UnLoad()
      {
        Wrapper::Internal_Legacy_Open_eVision_1_2::ScopeCritSec locker(GetCritSec());
        GetInstance()->UnInitialize();
      }

      static ExternC* GetInstance(const std::string& dllPath = "")
      {
        static ExternC instance_;
        if(!instance_.isInitialized_)
        {
          Wrapper::Internal_Legacy_Open_eVision_1_2::ScopeCritSec locker(GetCritSec());
          if(!instance_.isInitialized_)
          {
              instance_.Initialize(dllPath);
          }

        }

        return &instance_;
      }

      static DestructionCBacks& GetDestructionCallbacks()
      {
        static DestructionCBacks cBacks_;
        return cBacks_;
      }

      ~ExternC()
      {
        UnInitialize();
      }

      std::string moduleID_;
      bool moduleIsAlive_;
    private:
      bool isInitialized_;
      Wrapper::Internal_Legacy_Open_eVision_1_2::ModuleHandler* moduleHandler_;
      ExternC()
      {
        isInitialized_ = false;
        moduleIsAlive_ = false;
        moduleHandler_ = 0;
        HMODULE thisModule = GetModuleHandleA(NULL);
        char buffer[261];
        GetModuleFileNameA(thisModule, buffer, 260);
        moduleID_ = buffer;
      }

      void Initialize(const std::string& dllPath)
      {
        if (isInitialized_)
        {
          UnInitialize();
        }

        if (!dllPath.empty())
        {
          moduleHandler_ = new Wrapper::Internal_Legacy_Open_eVision_1_2::ModuleHandler(dllPath);
        }

        else
        {
          if(sizeof(void*) == 4)
{
moduleHandler_ = new Wrapper::Internal_Legacy_Open_eVision_1_2::ModuleHandler("Open_eVision_1_2.dll", HKEY_LOCAL_MACHINE, "Software\\Euresys\\Open eVision 1.2\\Libraries", "Binaries");
}
if(sizeof(void*) == 8)
{
moduleHandler_ = new Wrapper::Internal_Legacy_Open_eVision_1_2::ModuleHandler("Open_eVision_1_2.dll", HKEY_LOCAL_MACHINE, "Software\\Wow6432Node\\Euresys\\Open eVision 1.2\\Libraries64", "Binaries");
}

        }

        Init();
        (*GetLegacy_Open_eVision_1_2_IAmAlive_FctPtr_1_2Ptr())(ModuleLifeTimeCallback_Legacy_Open_eVision_1_2, moduleID_.c_str());
        isInitialized_ = true;
        moduleIsAlive_ = true;
      }

      void Init()
      {
        #include "ExternCCtor_Legacy_Open_eVision_1_2.impl"
      }

      void UnInitialize()
      {
        if (!isInitialized_)
        {
          return;
        }

        if(moduleIsAlive_)
        {
          if(GetModuleHandleA("Open_eVision_1_2.dll") != NULL)
            (*GetLegacy_Open_eVision_1_2_IAmDying_FctPtr_1_2Ptr())(moduleID_.c_str());
        }

        #include "ExternCDtor_Legacy_Open_eVision_1_2.impl"
        delete moduleHandler_;
        isInitialized_ = false;;
        moduleHandler_ = 0;
      }

      static CritSec* GetCritSec()
      {
        static CritSec critSec_;
        return &critSec_;
      }

    };
    #include "ExternCStaticMethods_Legacy_Open_eVision_1_2.impl"
  }

}

inline void ModuleLifeTimeCallback_Legacy_Open_eVision_1_2()
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleIsAlive_ = false;
}


#endif // __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_EXTERNC_LEGACY_OPEN_EVISION_1_2_1_2__

