#ifndef __WRAPPER_WRAPPERCPP_RABIDELETER_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_WRAPPERCPP_RABIDELETER_LEGACY_OPEN_EVISION_1_2_1_2__
#include <vector>

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    class RabiDeleter
    {
      std::vector<void*> toDelete;
      public:
        RabiDeleter() { }
        ~RabiDeleter()
        {
          for(unsigned int i = 0; i < toDelete.size(); ++i)
          {
            Wrapper::Internal_Legacy_Open_eVision_1_2::InternalDelete(toDelete[i]);
          }

        }

        void AddElementToDelete(void* elem)
        {
          toDelete.push_back(elem);
        }

    };

  }

}

#endif // __WRAPPER_WRAPPERCPP_RABIDELETER_LEGACY_OPEN_EVISION_1_2_1_2__
