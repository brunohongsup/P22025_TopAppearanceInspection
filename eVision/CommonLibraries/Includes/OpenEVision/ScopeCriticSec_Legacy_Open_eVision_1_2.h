#ifndef __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_SCOPECRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_SCOPECRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
#include "CriticalSection_Legacy_Open_eVision_1_2.h"

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    class ScopeCritSec
    {
    public:
      ScopeCritSec (CritSec* pCritSec) : pCritSec_(pCritSec)
      {
        if(pCritSec_ != 0)
          pCritSec_->Enter();
      }

      ~ScopeCritSec( )
      {
        if(pCritSec_ != 0)
          pCritSec_->Leave();
      }

    private:
      CritSec* pCritSec_;
    };
  }

}

#endif // __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_SCOPECRITICALSECTION_LEGACY_OPEN_EVISION_1_2_1_2__
