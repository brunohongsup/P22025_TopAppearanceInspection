#ifndef __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_CRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_CRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
#include <windows.h>

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    class CritSec
    {
    public:
      CritSec ( )
      {
        Init();
      }

      ~CritSec( )
      {
        ::DeleteCriticalSection( &critSec_);
      }

      void Enter( )
      {
        ::EnterCriticalSection( &critSec_);
      }

      void Init( )
      {
        ::InitializeCriticalSection( &critSec_);
      }

      void Leave()
      {
        ::LeaveCriticalSection( &critSec_);
      }

    private:
      CRITICAL_SECTION critSec_;
    };
  }

}

#endif // __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_CRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
