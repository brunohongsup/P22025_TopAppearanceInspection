#ifndef __WRAPPER_WRAPPERCPP_MAINHEADER_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_WRAPPERCPP_MAINHEADER_LEGACY_OPEN_EVISION_1_2_1_2__
#ifdef DO_NOT_USE_INLINE_LEGACY_OPEN_EVISION_1_2
#define INLINE_LEGACY_OPEN_EVISION_1_2
#else
#define INLINE_LEGACY_OPEN_EVISION_1_2 inline
#endif // DO_NOT_USE_INLINE_LEGACY_OPEN_EVISION_1_2
#pragma warning(push)
#pragma warning(disable : 4504) // Warning BK4504 : file contains too many references; ignoring further references from this source
#pragma warning(disable : 4748) // Warning C4748 : /GS can not protect parameters and local variables from local buffer overrun because optimizations are disabled in function
#pragma warning(disable : 4127) // Warning C4127 : conditional expression is constant.
#pragma warning(disable : 4584) // Warning C4584 : base-class '...' is already a base-class of ...
#pragma warning(disable : 4786) // Warning C4786 : identifier was truncated to '255' characters in the browser information
#pragma pack(push)
#pragma pack(8)
#include <string>
#include <exception>
#include <stdexcept>
#include "ForeignTypeGlobal_Legacy_Open_eVision_1_2.h"
#include "Enumerations_Legacy_Open_eVision_1_2.h"
#include "WrappedClass_Legacy_Open_eVision_1_2.h"
#include "Predecl_Legacy_Open_eVision_1_2.h"
#include "Property_Legacy_Open_eVision_1_2.h"
#if _MSC_VER >= 1700
#if _MSC_VER < 1800
#define NEEDED_TEMPLATE_ARG template
#else
#define NEEDED_TEMPLATE_ARG typename
#endif
#else
#define NEEDED_TEMPLATE_ARG 
#endif



#ifndef OEV_CDECL
#define OEV_CDECL _cdecl
#endif

#ifndef FLOAT32
#define FLOAT32 float
#endif

#ifndef FLOAT32_UNDEFINED
#define FLOAT32_UNDEFINED 3.402823466e+38F
#endif

#ifndef INT8
#define INT8 signed char
#endif

#ifndef PINT8
#define PINT8 signed char*
#endif

#ifndef INT16
#define INT16 signed short
#endif

#ifndef PINT16
#define PINT16 signed short*
#endif

#ifndef INT32
#define INT32 signed int
#endif

#ifndef PINT32
#define PINT32 signed int*
#endif

#ifndef UINT8
#define UINT8 unsigned char
#endif

#ifndef PUINT8
#define PUINT8 unsigned char*
#endif

#ifndef UINT16
#define UINT16 unsigned short
#endif

#ifndef PUINT16
#define PUINT16 unsigned short*
#endif

#ifndef UINT32
#define UINT32 unsigned int
#endif

#ifndef PUINT32
#define PUINT32 unsigned int*
#endif

#ifndef INT32_MAX
#define INT32_MAX ( static_cast<INT32>(2147483647i32))
#endif

#ifndef UINT32_UNDEFINED
#define UINT32_UNDEFINED (static_cast<UINT32>(~0))
#endif

#ifndef INT32_UNDEFINED
#define INT32_UNDEFINED (static_cast<INT32>(~0))
#endif

#ifndef BOOL_UNDEFINED
#define BOOL_UNDEFINED    (static_cast<BOOL>(~0))
#endif

#define E_ETRACE_USED 0x4
#define HALF_HANDLE_SIZE 4

#ifndef EmptyPointPairs
#define EmptyPointPairs EmptyLandmarks
#endif

enum E_TRACE_MODE
{
  E_TRACE_DISPLAY_MESSAGE = 0,
  E_TRACE_SILENT = 1,
  E_TRACE_DISPLAY_FULL_MESSAGE = 2,

  E_TRACE_SILENT_ETRACE = E_TRACE_SILENT | E_ETRACE_USED,
  E_TRACE_DISPLAY_MESSAGE_ETRACE = E_TRACE_DISPLAY_MESSAGE | E_ETRACE_USED,
  E_TRACE_DISPLAY_FULL_MESSAGE_ETRACE = E_TRACE_DISPLAY_FULL_MESSAGE | E_ETRACE_USED,

  E_TRACE_UNKNOWN  = 0xFFFFFFFF
};

void ESetTraceMode(enum E_TRACE_MODE mode);
enum E_TRACE_MODE EGetTraceMode();
E_ERRORS ETraceError(char* pszCall);
void EETraceTraceMode( );

E_ERRORS EGetError();
E_ERRORS EOk();
void ESetError(E_ERRORS error);
void ESetError(const Euresys::eVision::Exception& error);
int ESuccess();
int EFailure();

#define ETrace( f) ( EETraceTraceMode( ), f, ETraceError( __FILE__, __LINE__, #f))
#define ETraceR( f) { f; if ( EGetError( ) != E_OK) return; }
#define ETraceRS( f) { f; if ( EGetError( ) != E_OK) return EGetError( ); }

char* EGetErrorText(E_ERRORS error);
char* EGetErrorText();

#define EGetMMX() TRUE
#define ESetMMX(isMmx) 

int& EGetJpegQuality();
void ESetJpegQuality(int quality);

#define EPeaksVector EPeakVector

#define BRC_FIRST_ADDITIONAL BRC_BINARY_CODE
#define BRC_LAST_ADDITIONAL BRC_RSS_14_EXPANDED
#define BRC_FIRST_STANDARD BRC_CODABAR
#define BRC_LAST_STANDARD BRC_UPC_E

#define OBJECT_CONNEXITY CONNEXITY
#define OBJ_CONNEXITY_4 IMG_CONTOUR_CONNEXITY_4
#define OBJ_CONNEXITY_8 IMG_CONTOUR_CONNEXITY_8
#define OBJ_GRAVITY_CENTER OBJ_GRAVITY_CENTER_X
#define OBJ_ELLIPSE OBJ_ELLIPSE_WIDTH

void ImgPixelStat(const EROIBW8* sourceImage, UINT8& minimumValue, UINT8& maximumValue, float& average);
void ImgPixelStat(const EROIBW16* sourceImage, UINT16& minimumValue, UINT16& maximumValue, float& average);

#define EImageSubPixel64 EUnwarpingLut

#define EOCVObjectVector Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVObject, 8>
#define EOCVCharVector Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVChar, 9>
#define EOCVTextVector Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVText, 10>

class ECodedImage;
INT16 ObjAnalyseObjects( ECodedImage* pSrcCodedImage, INT16 n16Feature1 = NULL, INT16 n16Feature2 = NULL, INT16 n16Feature3 = NULL, INT16 n16Feature4 = NULL, INT16 n16Feature5 = NULL, INT16 n16Feature6 = NULL, INT16 n16Feature7 = NULL, INT16 n16Feature8 = NULL, INT16 n16Feature9 = NULL, INT16 n16Feature10 = NULL);
void ObjFeatureDeviation( ECodedImage* pCodedImage, enum OBJECT_FEATURES eFeature, FLOAT32& f32Average, FLOAT32& f32Deviation);
INT16 ObjSortObjectsUsingFeature( ECodedImage* pSrcCodedImage, enum OBJECT_FEATURES Feature,  enum SORT_OPTIONS Operation);
INT16 ObjSelectObjectsUsingPosition( ECodedImage* pSrcCodedImage, EGenericROI* pROI, enum SELECT_BY_POSITION Operation);
INT16 ObjSelectObjectsUsingPosition( ECodedImage* pSrcCodedImage, INT32 n32OrgX, INT32 n32OrgY, INT32 n32Width, INT32 n32Height, enum SELECT_BY_POSITION Operation);


#define OCR_CLASS_31 (static_cast<OCRClasses>(0x80000000))

#define E_ERROR_CUSTOM_ACTIVEX_CODES_FIRST 40000
#define E_ERROR_CUSTOM_ACTIVEX_CODES_LAST 42000

namespace Euresys
{
  namespace eVision
  {
    namespace Utils
    {
      template<typename T>
      class Vector : public std::vector<T>
      {
      public:
        bool Contains(const T& item)
        {
          unsigned int i;
          for(i = 0; i < size(); ++i)
          {
            if(item == (*this)[i])
              return true;
          }
          return false;
        }
        const T& ItemAt(int index) const
        {
          return (*this)[index];
        }
        T& ItemAt(int index)
        {
          return (*this)[index];
        }
        unsigned int NbItems() const
        {
          return size();
        }

        void Add(const T& item)
        {
          push_back(item);
        }

        unsigned int Find(const T& item)
        {
          unsigned int i;
          for(i = 0; i < size(); ++i)
          {
            if(item == (*this)[i])
              return i;
          }
          throw EException(E_ERROR_PARAMETER_1_OUT_OF_RANGE);
        }

        void Remove(const T& item)
        {
          std::vector<T>::iterator toRemove;
          for(std::vector<T>::iterator it = begin(); it != end(); ++it)
          {
            if(item == *it)
            {
              toRemove = it;
              break;
            }
          }
          erase(toRemove);
        }

        void Remove(unsigned int index)
        {
          if(index >= v.size())
            throw EException(E_ERROR_PARAMETER_1_OUT_OF_RANGE);

          std::vector<T>::iterator toRemove = begin();
          toRemove += index
          erase(toRemove);
        }

        void Clear()
        {
          clear();
        }

        Vector()
          : std::vector<T>()
        {
        }

        Vector(const std::vector<T>& other)
        {
          *this = other;
        }

        Vector& operator=(const std::vector<T>& other)
        {
          this->Clear();
          for(unsigned int i = 0; i < other.size(); ++i)
          {
            this->Add(other[i]);
          }
          return *this;
        }

        typedef NEEDED_TEMPLATE_ARG std::vector<T>::iterator Iterator;
      };
    }
  }
}

namespace Euresys
{
  namespace eVision
  {
    typedef EPoint Point;
  }
}

enum OCV_DRAWING_MODES
{
  OCV_DRAW_LEARN = EDrawingMode_Learn,
  OCV_DRAW_MATCH = EDrawingMode_Match,
  OCV_DRAW_POSITION = EDrawingMode_Position,
  OCV_DRAW_INSPECTED = EDrawingMode_Inspected,
  OCV_DRAW_MAX_INSPECTED = EDrawingMode_MaxInspected,
  OCV_DRAW_UNKNOWN  = 0xFFFFFFFF
};

void* eVision_Malloc(unsigned int size);
void eVision_Free(void* buffer);

enum IMAGE_FILE_TYPES
{
  E_FILE_FORMAT_AUTO,
  E_FILE_FORMAT_BILEVEL_TIFF,
  E_FILE_FORMAT_GRAY_LEVEL_TIFF,
  E_FILE_FORMAT_COLOR_TIFF,
  E_FILE_FORMAT_PACKED_BILEVEL_TIFF,
  E_FILE_FORMAT_PACKED_GRAY_LEVEL_TIFF,
  E_FILE_FORMAT_BILEVEL_BMP,
  E_FILE_FORMAT_GRAY_LEVEL_BMP,
  E_FILE_FORMAT_COLOR_BMP,
  E_FILE_FORMAT_GRAY_LEVEL_JPEG,
  E_FILE_FORMAT_COLOR_JPEG
};

 unsigned int& EGetTiffThreshold();
void ESetTiffThreshold(unsigned int value);

void EGenericROI_Global_Save(EGenericROI& src, const std::string& path, EImageFileType imageType);

HDC EOpenImageDC(EImageBW8* src);
HDC EOpenImageDC(EImageC24* src);
void ECloseImageDC(EImageBW8* pImage, HDC hDC = 0);
void ECloseImageDC(EImageC24* pImage, HDC hDC = 0);

void ImgTransform(EROIBW8* pSrcImage, EROIBW8* pDstImage, EBW8 (OEV_CDECL *Transform)(EBW8 bw8Src), BOOL bUseLUT= TRUE);
void ImgTransform(EROIBW16* pSrcImage, EROIBW16* pDstImage, EBW16 (OEV_CDECL *Transform)(EBW16 bw16Src), BOOL bUseLUT= TRUE);

namespace Euresys
{
  namespace eVision
  {
    void ThrowOnEError();
  }
}

EWorldShape& GetEasyWorld();
#ifndef LEGACY_OPEN_EVISION_1_2_UNDEFINE_GOBJ_ALIASES
#define EasyWorld (GetEasyWorld())
#endif

#ifndef LEGACY_OPEN_EVISION_1_2_UNDEFINE_GOBJ_ALIASES
#define EUnit_um (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_um)))
#define EUnit_mm (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_mm)))
#define EUnit_cm (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_cm)))
#define EUnit_dm (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_dm)))
#define EUnit_m (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_m)))
#define EUnit_dam (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_dam)))
#define EUnit_hm (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_hm)))
#define EUnit_km (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_km)))
#define EUnit_mil (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_mil)))
#define EUnit_inch (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_inch)))
#define EUnit_foot (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_foot)))
#define EUnit_yard (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_yard)))
#define EUnit_mile (*(EMeasurementUnit::GetStockMeasurementUnit(EStockMeasurementUnit_mile)))
#endif


namespace Euresys
{

  namespace eVision
  {

    namespace Internal
    {
      class StringLegacyConvertion
      {
      public:
        Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_StringLegacyConvertion_;
        
      public:
        StringLegacyConvertion();
      public:
        static BOOL EOCVText_Get_m_bIsotropicScaling_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_bIsotropicScaling_Internal(void* ptr, BOOL val);
      public:
        static BOOL EOCVText_Get_m_bSelected_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_bSelected_Internal(void* ptr, BOOL val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32NumContourPoints_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32NumContourPoints_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVText_Get_m_f32TemplateLocationScore_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32TemplateLocationScore_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SampleLocationScore_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SampleLocationScore_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32LocationScoreTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32LocationScoreTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewBias_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewBias_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewTolerance_Internal(void* ptr, float val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ShiftXStride_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ShiftXStride_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ShiftYStride_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ShiftYStride_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ScaleXCount_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ScaleXCount_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ScaleYCount_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ScaleYCount_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ShearCount_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ShearCount_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32SkewCount_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32SkewCount_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVText_Get_m_f32ScaleX_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleX_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleY_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleY_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32Shear_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32Shear_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32Skew_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32Skew_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftX_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftX_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftY_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftY_Internal(void* ptr, float val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32Diagnostics_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32Diagnostics_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32MarginWidth_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32MarginWidth_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32TemplateForegroundArea_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32TemplateForegroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32SampleForegroundArea_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32SampleForegroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32ForegroundAreaTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32ForegroundAreaTolerance_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32TemplateBackgroundArea_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32TemplateBackgroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32SampleBackgroundArea_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32SampleBackgroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVText_Get_m_un32BackgroundAreaTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_un32BackgroundAreaTolerance_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVText_Get_m_f32TemplateForegroundSum_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32TemplateForegroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SampleForegroundSum_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SampleForegroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ForegroundSumTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ForegroundSumTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32TemplateBackgroundSum_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32TemplateBackgroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SampleBackgroundSum_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SampleBackgroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32BackgroundSumTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32BackgroundSumTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32Correlation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32Correlation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32CorrelationTolerance_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32CorrelationTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftXMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftXMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShiftYMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShiftYMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ShearMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ShearMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32SkewMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32SkewMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleXMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleXMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYMin_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYMin_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ScaleYMax_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ScaleYMax_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ForegroundAreaAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ForegroundAreaAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ForegroundAreaDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ForegroundAreaDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32BackgroundAreaAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32BackgroundAreaAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32BackgroundAreaDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32BackgroundAreaDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ForegroundSumAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ForegroundSumAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32ForegroundSumDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32ForegroundSumDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32BackgroundSumAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32BackgroundSumAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32BackgroundSumDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32BackgroundSumDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32CorrelationAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32CorrelationAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32CorrelationDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32CorrelationDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32LocationScoreAverage_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32LocationScoreAverage_Internal(void* ptr, float val);
      public:
        static float EOCVText_Get_m_f32LocationScoreDeviation_Internal(void* ptr);
      public:
        static void EOCVText_Set_m_f32LocationScoreDeviation_Internal(void* ptr, float val);
      public:
        static BOOL EOCVChar_Get_m_bWhiteOnBlack_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_bWhiteOnBlack_Internal(void* ptr, BOOL val);
      public:
        static BOOL EOCVChar_Get_m_bSelected_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_bSelected_Internal(void* ptr, BOOL val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32NumContourPoints_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32NumContourPoints_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVChar_Get_m_f32TemplateLocationScore_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32TemplateLocationScore_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32SampleLocationScore_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32SampleLocationScore_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32LocationScoreTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32LocationScoreTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftX_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftX_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXBias_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXBias_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXTolerance_Internal(void* ptr, float val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32ShiftXStride_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32ShiftXStride_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVChar_Get_m_f32ShiftY_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftY_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYBias_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYBias_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYTolerance_Internal(void* ptr, float val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32ShiftYStride_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32ShiftYStride_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32Diagnostics_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32Diagnostics_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32MarginWidth_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32MarginWidth_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32TemplateForegroundArea_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32TemplateForegroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32SampleForegroundArea_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32SampleForegroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32ForegroundAreaTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32ForegroundAreaTolerance_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32TemplateBackgroundArea_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32TemplateBackgroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32SampleBackgroundArea_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32SampleBackgroundArea_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 EOCVChar_Get_m_un32BackgroundAreaTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_un32BackgroundAreaTolerance_Internal(void* ptr, OEV_UINT32 val);
      public:
        static float EOCVChar_Get_m_f32TemplateForegroundSum_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32TemplateForegroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32SampleForegroundSum_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32SampleForegroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ForegroundSumTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ForegroundSumTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32TemplateBackgroundSum_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32TemplateBackgroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32SampleBackgroundSum_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32SampleBackgroundSum_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32BackgroundSumTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32BackgroundSumTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32Correlation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32Correlation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32CorrelationTolerance_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32CorrelationTolerance_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32LocationScoreAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32LocationScoreAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32LocationScoreDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32LocationScoreDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXMin_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXMin_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftXMax_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftXMax_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYMin_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYMin_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ShiftYMax_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ShiftYMax_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ForegroundAreaAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ForegroundAreaAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ForegroundAreaDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ForegroundAreaDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32BackgroundAreaAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32BackgroundAreaAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32BackgroundAreaDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32BackgroundAreaDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ForegroundSumAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ForegroundSumAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32ForegroundSumDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32ForegroundSumDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32BackgroundSumAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32BackgroundSumAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32BackgroundSumDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32BackgroundSumDeviation_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32CorrelationAverage_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32CorrelationAverage_Internal(void* ptr, float val);
      public:
        static float EOCVChar_Get_m_f32CorrelationDeviation_Internal(void* ptr);
      public:
        static void EOCVChar_Set_m_f32CorrelationDeviation_Internal(void* ptr, float val);
      public:
        static void* EOCV_Get_m_TemplateImage_Internal(void* ptr);
      public:
        static void* EOCV_Get_m_FreeObjects_Internal(void* ptr, int index);
      public:
        static OEV_UINT32 EOCV_Get_m_FreeObjects_Count_Internal(void* ptr);
      public:
        static void* EOCV_Get_m_FreeChars_Internal(void* ptr, int index);
      public:
        static void* EOCV_Get_m_Texts_Internal(void* ptr, int index);
      public:
        static bool MatrixCodeReader_Get_LearnMask_Internal(void* ptr, int index);
      public:
        static void MatrixCodeReader_Set_LearnMask_Internal(void* ptr, int index, bool val);
      public:
        static void* MatrixCodeReader_Get_SearchParamsType_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyMatrixCode::LogicalSize::Type SearchParamsType_Get_LogicalSize_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_LogicalSize_Internal(void* ptr, int index, Euresys::eVision::EasyMatrixCode::LogicalSize::Type val);
      public:
        static std::string MatrixCode_Get_DecodedString_Internal(void* ptr);
      public:
        static void* EOCVObject_Get_m_pCodedObject_Internal(void* ptr);
      public:
        static void EOCVObject_Set_m_pCodedObject_Internal(void* ptr, void* val);
      public:
        static bool EOCVObject_Get_m_bSelected_Internal(void* ptr);
      public:
        static void* PatternFinder_GetPivot_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyFind::PatternType::Type PatternFinder_GetPatternType_Internal(void* ptr);
      public:
        static void PatternFinder_SetPatternType_Internal(void* ptr, Euresys::eVision::EasyFind::PatternType::Type val);
      public:
        static Euresys::eVision::EasyFind::LocalSearchMode::Type PatternFinder_GetLocalSearchMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetLocalSearchMode_Internal(void* ptr, Euresys::eVision::EasyFind::LocalSearchMode::Type val);
      public:
        static bool PatternFinder_GetInterpolate_Internal(void* ptr);
      public:
        static void PatternFinder_SetInterpolate_Internal(void* ptr, bool val);
      public:
        static OEV_UINT32 PatternFinder_GetMinFeaturePoints_Internal(void* ptr);
      public:
        static void PatternFinder_SetMinFeaturePoints_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_UINT32 PatternFinder_GetMaxFeaturePoints_Internal(void* ptr);
      public:
        static void PatternFinder_SetMaxFeaturePoints_Internal(void* ptr, OEV_UINT32 val);
      public:
        static int PatternFinder_GetTransitionThickness_Internal(void* ptr);
      public:
        static void PatternFinder_SetTransitionThickness_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetMaxInstances_Internal(void* ptr);
      public:
        static void PatternFinder_SetMaxInstances_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetFindExtension_Internal(void* ptr);
      public:
        static void PatternFinder_SetFindExtension_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetForcedThreshold_Internal(void* ptr);
      public:
        static void PatternFinder_SetForcedThreshold_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetAngleSearchExtent_Internal(void* ptr);
      public:
        static void PatternFinder_SetAngleSearchExtent_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetScaleSearchExtent_Internal(void* ptr);
      public:
        static void PatternFinder_SetScaleSearchExtent_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetXSearchExtent_Internal(void* ptr);
      public:
        static void PatternFinder_SetXSearchExtent_Internal(void* ptr, int val);
      public:
        static int PatternFinder_GetYSearchExtent_Internal(void* ptr);
      public:
        static void PatternFinder_SetYSearchExtent_Internal(void* ptr, int val);
      public:
        static bool PatternFinder_GetAutoTransitionThickness_Internal(void* ptr);
      public:
        static void PatternFinder_SetAutoTransitionThickness_Internal(void* ptr, bool val);
      public:
        static float PatternFinder_GetLightBalance_Internal(void* ptr);
      public:
        static void PatternFinder_SetLightBalance_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetMinScore_Internal(void* ptr);
      public:
        static void PatternFinder_SetMinScore_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetAngleBias_Internal(void* ptr);
      public:
        static void PatternFinder_SetAngleBias_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetAngleTolerance_Internal(void* ptr);
      public:
        static void PatternFinder_SetAngleTolerance_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetScaleBias_Internal(void* ptr);
      public:
        static void PatternFinder_SetScaleBias_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetScaleTolerance_Internal(void* ptr);
      public:
        static void PatternFinder_SetScaleTolerance_Internal(void* ptr, float val);
      public:
        static float PatternFinder_GetReductionStrength_Internal(void* ptr);
      public:
        static void PatternFinder_SetReductionStrength_Internal(void* ptr, float val);
      public:
        static Euresys::eVision::EasyFind::ReductionMode::Type PatternFinder_GetReductionMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetReductionMode_Internal(void* ptr, Euresys::eVision::EasyFind::ReductionMode::Type val);
      public:
        static Euresys::eVision::EasyFind::Contrast::Type PatternFinder_GetContrastMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetContrastMode_Internal(void* ptr, Euresys::eVision::EasyFind::Contrast::Type val);
      public:
        static Euresys::eVision::EasyFind::ThinStructureMode::Type PatternFinder_GetThinStructureMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetThinStructureMode_Internal(void* ptr, Euresys::eVision::EasyFind::ThinStructureMode::Type val);
      public:
        static void* FoundPattern_Get_Center_Internal(void* ptr);
      public:
        static void FoundPattern_Set_Center_Internal(void* ptr, void* val);
      public:
        static float FoundPattern_Get_Angle_Internal(void* ptr);
      public:
        static void FoundPattern_Set_Angle_Internal(void* ptr, float val);
      public:
        static float FoundPattern_Get_Scale_Internal(void* ptr);
      public:
        static void FoundPattern_Set_Scale_Internal(void* ptr, float val);
      public:
        static float FoundPattern_Get_Score_Internal(void* ptr);
      public:
        static void FoundPattern_Set_Score_Internal(void* ptr, float val);
      public:
        static void* FoundPattern_Get_FeaturePoints_Internal(void* ptr, int index);
      public:
        static void FoundPattern_Set_FeaturePoints_Internal(void* ptr, int index, void* val);
      public:
        static void* FoundPattern_Get_RectangleCorners_Internal(void* ptr, int index);
      public:
        static void FoundPattern_Set_RectangleCorners_Internal(void* ptr, int index, void* val);
      public:
        static void* FoundPattern_Get_originRoi_Internal(void* ptr);
      public:
        static void FoundPattern_Set_originRoi_Internal(void* ptr, void* val);
      public:
        static int FoundPattern_Get_patternType_Internal(void* ptr);
      public:
        static void FoundPattern_Set_patternType_Internal(void* ptr, int val);
      public:
        static bool FoundPattern_Get_DrawBoundingBox_Internal(void* ptr);
      public:
        static void FoundPattern_Set_DrawBoundingBox_Internal(void* ptr, bool val);
      public:
        static bool FoundPattern_Get_DrawCenter_Internal(void* ptr);
      public:
        static void FoundPattern_Set_DrawCenter_Internal(void* ptr, bool val);
      public:
        static bool FoundPattern_Get_DrawFeaturePoints_Internal(void* ptr);
      public:
        static void FoundPattern_Set_DrawFeaturePoints_Internal(void* ptr, bool val);
      public:
        static float EPoint_Get_x_Internal(void* ptr);
      public:
        static void EPoint_Set_x_Internal(void* ptr, float val);
      public:
        static float EPoint_Get_y_Internal(void* ptr);
      public:
        static void EPoint_Set_y_Internal(void* ptr, float val);
      public:
        static void* EMatch_Get_PositionPtr_Internal(void* ptr, OEV_UINT32 index);
      public:
        static int MatrixCodeReader_Get_PreprocLocalBinHalfKSize_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_PreprocLocalBinHalfKSize_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_PreprocLocalBinNoise_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_PreprocLocalBinNoise_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_MaxNumPyramidLevels_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MaxNumPyramidLevels_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_MaxNumSkippedLocationLevels_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MaxNumSkippedLocationLevels_Internal(void* ptr, int val);
      public:
        static bool MatrixCodeReader_Get_ComputeGrading_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_ComputeGrading_Internal(void* ptr, bool val);
      public:
        static int MatrixCodeReader_Get_LocationLocalBinHalfKSize_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_LocationLocalBinHalfKSize_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_LocationLocalBinNoise_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_LocationLocalBinNoise_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_CornerShiftStepWidth_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_CornerShiftStepWidth_Internal(void* ptr, int val);
      public:
        static int MatrixCodeReader_Get_CornerShiftStepHeight_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_CornerShiftStepHeight_Internal(void* ptr, int val);
      public:
        static float MatrixCodeReader_Get_MaxHeightWidthRatio_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MaxHeightWidthRatio_Internal(void* ptr, float val);
      public:
        static float MatrixCodeReader_Get_MaxSkew_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MaxSkew_Internal(void* ptr, float val);
      public:
        static float MatrixCodeReader_Get_MinCandidateProba_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MinCandidateProba_Internal(void* ptr, float val);
      public:
        static float MatrixCodeReader_Get_MinimumPrintGrowth_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MinimumPrintGrowth_Internal(void* ptr, float val);
      public:
        static float MatrixCodeReader_Get_MaximumPrintGrowth_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_MaximumPrintGrowth_Internal(void* ptr, float val);
      public:
        static float MatrixCodeReader_Get_NominalPrintGrowth_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_NominalPrintGrowth_Internal(void* ptr, float val);
      public:
        static OEV_UINT32 MatrixCodeReader_Get_TimeOut_Internal(void* ptr);
      public:
        static void MatrixCodeReader_Set_TimeOut_Internal(void* ptr, OEV_UINT32 val);
      public:
        static OEV_INT32 MatrixCode_Get_NumErrors_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyMatrixCode::LogicalSize::Type MatrixCode_Get_LogicalSize_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyMatrixCode::Contrast::Type MatrixCode_Get_ContrastType_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyMatrixCode::Flipping::Type MatrixCode_Get_Flipping_Internal(void* ptr);
      public:
        static Euresys::eVision::EasyMatrixCode::Family::Type MatrixCode_Get_Family_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_LogicalSizeWidth_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_LogicalSizeHeight_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_LocationThreshold_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_ReadingThreshold_Internal(void* ptr);
      public:
        static BOOL MatrixCode_Get_IsFound_Internal(void* ptr);
      public:
        static float MatrixCode_Get_Contrast_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_ContrastGrade_Internal(void* ptr);
      public:
        static float MatrixCode_Get_PrintGrowth_Internal(void* ptr);
      public:
        static float MatrixCode_Get_MeasuredPrintGrowth_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_PrintGrowthGrade_Internal(void* ptr);
      public:
        static float MatrixCode_Get_AxialNonUniformity_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_AxialNonUniformityGrade_Internal(void* ptr);
      public:
        static float MatrixCode_Get_UnusedErrorCorrection_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_UnusedErrorCorrectionGrade_Internal(void* ptr);
      public:
        static OEV_INT32 MatrixCode_Get_OverallGrade_Internal(void* ptr);
      public:
        static void* MatrixCode_Get_Center_Internal(void* ptr);
      public:
        static float MatrixCode_Get_Angle_Internal(void* ptr);
      public:
        static void* MatrixCode_Get_Corners_Internal(void* ptr, int index);
      public:
        static void MatrixCode_Set_Corners_Internal(void* ptr, int index, void* val);
      public:
        static OEV_UINT8 MatrixCode_Get_DecodedData_Internal(void* ptr, int index);
      public:
        static void MatrixCode_Set_DecodedData_Internal(void* ptr, int index, OEV_UINT8 val);
      public:
        static Euresys::eVision::EasyMatrixCode::Contrast::Type SearchParamsType_Get_Contrast_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Contrast_Internal(void* ptr, int index, Euresys::eVision::EasyMatrixCode::Contrast::Type val);
      public:
        static Euresys::eVision::EasyMatrixCode::Flipping::Type SearchParamsType_Get_Flipping_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Flipping_Internal(void* ptr, int index, Euresys::eVision::EasyMatrixCode::Flipping::Type val);
      public:
        static Euresys::eVision::EasyMatrixCode::Family::Type SearchParamsType_Get_Family_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Family_Internal(void* ptr, int index, Euresys::eVision::EasyMatrixCode::Family::Type val);
      public:
        static float EOCV_Get_m_f32TemplateBackground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32TemplateBackground_Internal(void* ptr, float val);
      public:
        static float EOCV_Get_m_f32TemplateForeground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32TemplateForeground_Internal(void* ptr, float val);
      public:
        static EBW8 EOCV_Get_m_bw8TemplateThreshold_Internal(void* ptr);
      public:
        static void EOCV_Set_m_bw8TemplateThreshold_Internal(void* ptr, EBW8 val);
      public:
        static EBW8 EOCV_Get_m_bw8SampleThreshold_Internal(void* ptr);
      public:
        static void EOCV_Set_m_bw8SampleThreshold_Internal(void* ptr, EBW8 val);
      public:
        static float EOCV_Get_m_f32SampleBackground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32SampleBackground_Internal(void* ptr, float val);
      public:
        static float EOCV_Get_m_f32SampleForeground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32SampleForeground_Internal(void* ptr, float val);
      public:
        static OCV_LOCATION_MODE EOCV_Get_m_eLocationMode_Internal(void* ptr);
      public:
        static void EOCV_Set_m_eLocationMode_Internal(void* ptr, OCV_LOCATION_MODE val);
      public:
        static void* ECodedImage_GetObjDataPtr(void* ptr, void* listItem);
      public:
        static void* ECodedImage_GetRunDataPtr(void* ptr, void* listItem);
      public:
        static const void* GetErrorText_Internal(E_ERRORS error);
      public:
        static void* EVectorBW8_GetDataPtr(void* ptr);
      public:
        static void* EVectorBW16_GetDataPtr(void* ptr);
      public:
        static void* EVectorBW32_GetDataPtr(void* ptr);
      public:
        static void* EVectorC24_GetDataPtr(void* ptr);
      public:
        static void EColorLookup_SetTransform(void* ptr, void* fct, E_COLOR_SYSTEM eSystemIn, E_COLOR_SYSTEM eSystemOut);
      public:
        static void* EBarCode_GetSymbologyName(void* ptr, BRC_SYMBOLOGIES eSymbology);
      public:
        static void SetTlsValue(const std::string& key, void* value);
      public:
        static void* GetTlsValue(const std::string& key);
      public:
        static void ESwapImages(EImageBW8* img1, EImageBW8* img2);
      public:
        static void EasyImageTransformBW8(EROIBW8* pSrcImage, EROIBW8* pDstImage, void* transform, BOOL bUseLUT);
      public:
        static void EasyImageTransformBW16(EROIBW16* pSrcImage, EROIBW16* pDstImage, void* transform, BOOL bUseLUT);
      public:
        static void ClrTransform_Pixel(EROIC24* sourceImage, EROIC24* destinationImage, void* transform, E_COLOR_SYSTEM colorSystemIn, E_COLOR_SYSTEM colorSystemOut);
      public:
        static void ClrTransform_Color(EROIC24* sourceImage, EROIC24* destinationImage, void* transform, E_COLOR_SYSTEM colorSystemIn, E_COLOR_SYSTEM colorSystemOut);
      public:
        static EWorldShape* GetEasyWorld();
      public:
        static void* EChecker_Get_m_Registered_Internal(void* checker);
      public:
        static void* EChecker_Get_m_Low_Internal(void* checker);
      public:
        static void* EChecker_Get_m_High_Internal(void* checker);
      public:
        virtual ~StringLegacyConvertion() throw();
      public:
        StringLegacyConvertion(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Color
  {
    struct RGBColor
    {
      
      int Red;
      int Green;
      int Blue;
    public:
      RGBColor(int red, int green, int blue);
    public:
      RGBColor();
    };
  }
}
struct EC24
{
  
  OEV_UINT8 m_un8C2;
  OEV_UINT8 m_un8C1;
  OEV_UINT8 m_un8C0;
public:
  EC24();
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  EC24(const Euresys::Color::RGBColor& rgbColor);
public:
  EC24(OEV_UINT8 c0, OEV_UINT8 c1, OEV_UINT8 c2);
public:
  static OEV_INT32 GetSize();
};
struct EXYZ
{
  
  float m_f32X;
  float m_f32Y;
  float m_f32Z;
};
struct ERGB
{
  
  float m_f32R;
  float m_f32G;
  float m_f32B;
};
struct ELAB
{
  
  float m_f32L;
  float m_f32A;
  float m_f32B;
};
struct ELUV
{
  
  float m_f32L;
  float m_f32U;
  float m_f32V;
};
struct EYUV
{
  
  float m_f32Y;
  float m_f32U;
  float m_f32V;
};
struct EYIQ
{
  
  float m_f32Y;
  float m_f32I;
  float m_f32Q;
};
struct ELCH
{
  
  float m_f32L;
  float m_f32C;
  float m_f32H;
};
struct ELSH
{
  
  float m_f32L;
  float m_f32S;
  float m_f32H;
};
struct EISH
{
  
  float m_f32I;
  float m_f32S;
  float m_f32H;
};
struct EVSH
{
  
  float m_f32V;
  float m_f32S;
  float m_f32H;
};
struct EYSH
{
  
  float m_f32Y;
  float m_f32S;
  float m_f32H;
};
typedef union EColor
{
  EXYZ m_XYZ;
  ERGB m_RGB;
  ELAB m_LAB;
  ELUV m_LUV;
  EYUV m_YUV;
  EYIQ m_YIQ;
  ELCH m_LCH;
  ELSH m_LSH;
  EISH m_ISH;
  EVSH m_VSH;
  EYSH m_YSH;
  EColor() {}
  EColor(FLOAT32 f32C0, FLOAT32 f32C1, FLOAT32 f32C2)
  {
    m_RGB.m_f32R = f32C0;
    m_RGB.m_f32G = f32C1;
    m_RGB.m_f32B = f32C2;
  }

}

EColor;
struct EBW8
{
  //TODO: Write manual declarations here
public:
  operator UINT8()
  {
    return static_cast<UINT8>(GetUINT32Value());
  }

  OEV_UINT8 m_un8Value;
public:
  EBW8();
public:
  EBW8(OEV_UINT8 value);
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  static OEV_INT32 GetSize();
};
struct EBW16
{
  //TODO: Write manual declarations here
public:
  operator unsigned int() const
  {
    return GetUINT32Value();
  }
  OEV_UINT16 m_un8Value;
public:
  EBW16();
public:
  EBW16(OEV_UINT16 value);
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  static OEV_INT32 GetSize();
};
struct EBW1
{
  //TODO: Write manual declarations here
public:
  operator unsigned int() const
  {
    return GetUINT32Value();
  }

  OEV_UINT32 m_un8Value;
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  EBW1();
public:
  EBW1(OEV_UINT32 value);
public:
  static OEV_INT32 GetSize();
};
struct EBW16Path
{
  
  OEV_INT32 m_n16X;
  OEV_INT32 m_n16Y;
  EBW16 m_bw16Pixel;
};
struct EBW32
{
  //TODO: Write manual declarations here
public:
  operator UINT32() const
  {
    return GetUINT32Value();
  }
  OEV_UINT32 m_un8Value;
public:
  EBW32();
public:
  EBW32(OEV_UINT32 value);
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  static OEV_INT32 GetSize();
};
struct EBW8Path
{
  
  OEV_INT32 m_n16X;
  OEV_INT32 m_n16Y;
  EBW8 m_bw8Pixel;
};
struct EC15
{
  
  OEV_UINT16 m_un5C2:5;
  OEV_UINT16 m_un5C1:5;
  OEV_UINT16 m_un5C0:5;
private:
  OEV_UINT16 Pad:1;
public:
public:
  EC15();
public:
  EC15(OEV_UINT8 c0, OEV_UINT8 c1, OEV_UINT8 c2);
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  static OEV_INT32 GetSize();
};
struct EC16
{
  
  OEV_UINT16 m_un5C2:5;
  OEV_UINT16 m_un6C1:6;
  OEV_UINT16 m_un5C0:5;
public:
  EC16();
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  EC16(OEV_UINT8 c0, OEV_UINT8 c1, OEV_UINT8 c2);
public:
  static OEV_INT32 GetSize();
};
struct EC24A
{
  
  OEV_UINT8 m_un5C2;
  OEV_UINT8 m_un5C1;
  OEV_UINT8 m_un5C0;
  OEV_UINT8 m_un8A;
public:
  OEV_UINT32 GetUINT32Value() const;
public:
  void SetUINT32Value(OEV_UINT32 value);
public:
  EC24A();
public:
  EC24A(OEV_UINT8 c0, OEV_UINT8 c1, OEV_UINT8 c2);
public:
  static OEV_INT32 GetSize();
};
struct EC24Path
{
  
  OEV_INT32 m_n16X;
  OEV_INT32 m_n16Y;
  EC24 m_c24Pixel;
};
struct EFeatureData
{
  
  OEV_INT32 n32Size;
  OBJECT_FEATURES n32FeatNum;
  DATA_TYPE n32FeatDataType;
  DATA_SIZE n32FeatDataSize;
private:
  void* hpvStartPtr;
public:
private:
  void* hpvEndPtr;
public:
};
struct EMatchPosition
{
  
  float m_f32CenterX;
  float m_f32CenterY;
  float m_f32Angle;
  float m_f32Scale;
  float m_f32ScaleX;
  float m_f32ScaleY;
  float m_f32Score;
  BOOL m_bInterpolated;
  float m_f32AreaRatio;
private:
  float Reserved;
public:
};
struct EObjectData
{
  
  OEV_INT32 n32Class;
  OEV_INT32 n32ObjNum;
  OEV_INT32 n32ObjNbRun;
  OEV_INT32 n32ObjNbHole;
  OEV_UINT8 un8IsSelected;
private:
  void* hpvReserved1;
public:
private:
  void* hpvReserved2;
public:
  BOOL bIsHole;
private:
  void* hpvParent;
public:
private:
  void* hpvFirstHole;
public:
private:
  void* hpvNextHole;
public:
};
struct EPath
{
  
  OEV_INT32 m_n16X;
  OEV_INT32 m_n16Y;
};
struct EPeak
{
  
  OEV_UINT32 m_un32Start;
  OEV_UINT32 m_un32Length;
  float m_f32Center;
  OEV_INT32 m_n32Amplitude;
  OEV_INT32 m_n32Area;
};
struct ERunData
{
  
  OEV_INT32 n32OrgX;
  OEV_INT32 n32OrgY;
  OEV_INT32 n32Len;
  OEV_INT32 n32Class;
  OEV_INT32 n32ObjNum;
private:
  void* hpvReserved;
public:
private:
  void* hpvReserved2;
public:
};
struct ETransitionData
{
  
  OEV_INT32 m_Width;
  OEV_INT32 m_Polarity;
  float m_Contrast;
  float m_MaxSlope;
  float m_Location;
  float m_Score;
};
class EPoint
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPoint_;
  //TODO: Write manual declarations here
public:
  void Set(float x, float y)
  {
    SetCenterXY(x, y);
  }

  void SetCenter(float x, float y)
  {
    SetCenterXY(x, y);
  }

  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> x;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> y;
public:
  EPoint();
public:
  EPoint(float centerX, float centerY);
public:
  EPoint(const EPoint& other);
public:
  EPoint& operator=(const EPoint& other);
public:
  EPoint* CopyTo(EPoint* other) const;
public:
  virtual void SetCenter(const EPoint& center);
public:
  virtual EPoint GetCenter() const;
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetX() const;
public:
  float GetY() const;
public:
  EPoint operator+(const EPoint& point) const;
public:
  EPoint operator-(const EPoint& point) const;
public:
  EPoint operator*(float scalar) const;
public:
  EPoint operator/(float scalar) const;
public:
  BOOL operator==(const EPoint& point) const;
public:
  BOOL operator!=(const EPoint& point) const;
public:
  EPoint MidPoint(const EPoint& Point) const;
public:
  EPoint Rotate(float angle) const;
public:
  float Square() const;
public:
  float Modulus() const;
public:
  float Argument() const;
public:
  float Dot(const EPoint& Point) const;
public:
  float Area(const EPoint& Point) const;
public:
  EPoint Project(const ELine& shape) const;
public:
  EPoint Project(const ECircle& shape) const;
public:
  float SquaredDistance(const EPoint& Point) const;
public:
  virtual float Distance(const EPoint& point) const;
public:
  virtual float Distance(const ELine& line, BOOL segmentOnly) const;
public:
  virtual float Distance(const ECircle& circle, BOOL arcOnly) const;
public:
  virtual ~EPoint() throw();
public:
  virtual float Distance(const ELine& line) const;
public:
  virtual float Distance(const ECircle& circle) const;
public:
  EPoint(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EFrame : public EPoint
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EFrame_;
  
public:
  EFrame();
public:
  EFrame(float centerX, float centerY, float angle, float scale);
public:
  EFrame(const EPoint& center, float angle, float scale);
public:
  EFrame(const EFrame& frame);
public:
  EFrame& operator=(const EFrame& frame);
public:
  EFrame* CopyTo(EFrame* other) const;
public:
  void SetAngle(float angle);
public:
  void SetScale(float scale);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  float GetScale() const;
public:
  EPoint LocalToGlobal(const EPoint& local) const;
public:
  EFrame LocalToGlobal(const EFrame& local) const;
public:
  ELine LocalToGlobal(const ELine& local) const;
public:
  ECircle LocalToGlobal(const ECircle& local) const;
public:
  EPoint GlobalToLocal(const EPoint& global) const;
public:
  EFrame GlobalToLocal(const EFrame& global) const;
public:
  virtual ~EFrame() throw();
public:
  EFrame(float centerX, float centerY, float angle);
public:
  EFrame(float centerX, float centerY);
public:
  EFrame(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECircle : public EFrame
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircle_;
  //TODO: Write manual declarations here
public:
void Set(EPoint Center, FLOAT32 f32Diameter, FLOAT32 f32OrgAngle= 0, BOOL bDirect= TRUE)
{
  SetCenter(Center);
  SetDiameter(f32Diameter);
  SetAngle(f32OrgAngle);
  SetDirectInternal(bDirect);
}

void Set(EPoint Center, FLOAT32 f32Diameter, FLOAT32 f32OrgAngle, FLOAT32 f32Amplitude)
{
  SetCenter(Center);
  SetDiameter(f32Diameter);
  SetAngle(f32OrgAngle);
  SetAmplitude(f32Amplitude);
}

public:
  ECircle();
public:
  ECircle(const EPoint& center, float diameter, float originAngle, BOOL direct);
public:
  ECircle(const EPoint& center, const EPoint& origin, BOOL direct);
public:
  ECircle(const EPoint& center, float diameter, float originAngle, float amplitude);
public:
  ECircle(const EPoint& origin, const EPoint& middle, const EPoint& end, BOOL fullCircle);
public:
  ECircle(const ECircle& other);
public:
  ECircle& operator=(const ECircle& other);
public:
  ECircle* CopyTo(ECircle* other) const;
public:
  void Set(const EPoint& center, const EPoint& origin, BOOL direct);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end, BOOL fullCircle);
public:
  void SetRadius(float f32Radius);
public:
  float GetRadius() const;
public:
  void SetDiameter(float f32Diameter);
public:
  float GetDiameter() const;
public:
  float GetArcLength() const;
public:
  float GetOrgAngle() const;
public:
  float GetApexAngle() const;
public:
  float GetEndAngle() const;
public:
  EPoint GetOrg() const;
public:
  EPoint GetApex() const;
public:
  EPoint GetEnd() const;
public:
  EPoint GetPoint(float fraction) const;
public:
  BOOL GetFull() const;
public:
  BOOL GetDirect() const;
public:
  void SetDirectInternal(BOOL direct);
public:
  float GetAmplitude() const;
public:
  void SetAmplitude(float amplitude);
public:
  virtual float Distance(const ECircle& circle);
public:
  virtual void Serialize(ESerializer* serializer, OEV_UINT32 un32FileVersion);
public:
  virtual ~ECircle() throw();
public:
  ECircle(const EPoint& center, float diameter, float originAngle);
public:
  ECircle(const EPoint& center, float diameter);
public:
  ECircle(const EPoint& center, const EPoint& origin);
public:
  ECircle(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void Set(const EPoint& center, const EPoint& origin);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  ECircle(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ELine : public EFrame
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ELine_;
  //TODO: Write manual declarations here
public:
  void Set( EPoint Center, FLOAT32 f32Length, FLOAT32 f32Angle = 0)
  {
    SetCenter(Center);
    SetLength(f32Length);
    SetAngle(f32Angle);
  }

public:
  ELine();
public:
  ELine(const EPoint& center, float length, float angle);
public:
  ELine(const EPoint& origin, const EPoint& end);
public:
  ELine(const ELine& other);
public:
  ELine& operator=(const ELine& other);
public:
  ELine* CopyTo(ELine* other) const;
public:
  void Set(const EPoint& origin, const EPoint& end);
public:
  void SetFromTwoPoints(const EPoint& origin, const EPoint& end);
public:
  void SetLength(float length);
public:
  float GetLength();
public:
  float GetLength() const;
public:
  EPoint GetOrg() const;
public:
  EPoint GetEnd() const;
public:
  EPoint GetPoint(float fraction) const;
public:
  virtual void Serialize(ESerializer* serializer, OEV_UINT32 un32FileVersion);
public:
  static EPoint GetIntersectionOfLines(ELine* pline1, ELine* pline2);
public:
  virtual ~ELine() throw();
public:
  ELine(const EPoint& center, float length);
public:
  ELine(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EVector_;
  
public:
  EVector& operator=(const EVector& other);
public:
  EVector(const EVector& other);
public:
  EVector();
public:
  virtual ~EVector() throw();
public:
  OEV_UINT32 GetNumElements() const;
public:
  void SetNumElements(OEV_UINT32 un32NumElements);
public:
  void Empty();
public:
  virtual void RemoveElement(OEV_UINT32 index);
public:
  void Serialize(ESerializer* serializer, OEV_UINT32 un32Version);
public:
  EVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBW32Vector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW32Vector_;
  //TODO: Write manual declarations here
public:
  EBW32* GetDataPtr()
  {
    return reinterpret_cast<EBW32*>(Euresys::eVision::Internal::StringLegacyConvertion::EVectorBW32_GetDataPtr(wrappedFunctions_EBW32Vector_.GetImpl()));
  }

public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EBW32 element);
public:
  EBW32& operator[](OEV_UINT32 index) const;
public:
  EBW32 GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EBW32 value);
public:
  EBW32Vector();
public:
  EBW32Vector(OEV_UINT32 maxNumberOfElements);
public:
  EBW32Vector(const EBW32Vector& other);
public:
  virtual ~EBW32Vector() throw();
public:
  void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX, float originY);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY);
public:
  float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
public:
  EBW32Vector& operator=(const EBW32Vector& other);
public:
  void SetYRange(OEV_INT32 n32YMin);
public:
  void SetYRange();
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height);
public:
  void Draw(HDC graphicContext, float width, float height, float originX);
public:
  void Draw(HDC graphicContext, float width, float height);
public:
  float WeightedMoment(OEV_UINT32 from);
public:
  float WeightedMoment();
public:
  EBW32Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class DimensionalValue
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_DimensionalValue_;
  
public:
  DimensionalValue();
public:
  DimensionalValue(float f32Value, EMeasurementUnit* pUnit);
public:
  virtual ~DimensionalValue() throw();
public:
  DimensionalValue& operator=(const DimensionalValue& other);
public:
  float GetValue() const;
public:
  void SetValue(float f32Value);
public:
  void SetValue(float f32Value, EMeasurementUnit* pUnit);
public:
  float GetValue(EMeasurementUnit* pUnit);
public:
  EMeasurementUnit* GetUnit();
public:
  const EMeasurementUnit* GetUnit() const;
public:
  void SetUnit(EMeasurementUnit* pUnit);
public:
  void Load(ESerializer* serializer);
public:
  void Save(ESerializer* serializer);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  DimensionalValue(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class Easy
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_Easy_;
  
public:
  static void CheckLicenses();
public:
  static void SetOemKey(const std::vector<char>& key, int index);
public:
  static BOOL CheckOemKey(const std::vector<char>& key, int index);
public:
  static bool CheckLicense(Features license);
public:
  static std::string GetErrorText(E_ERRORS error);
public:
  static E_IMAGE_TYPES GetBestMatchingImageType(const std::string& path);
public:
  static void SetOemKey(const std::vector<char>& key);
public:
  static BOOL CheckOemKey(const std::vector<char>& key);
};

class EasyColor
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyColor_;
  
public:
  static float GetNtscGamma();
public:
  static float GetPalGamma();
public:
  static float GetSmpteGamma();
public:
  static float GetCompensateNtscGamma();
public:
  static float GetCompensatePalGamma();
public:
  static float GetCompensateSmpteGamma();
public:
  static float GetCieAR();
public:
  static float GetCieAG();
public:
  static float GetCieAB();
public:
  static float GetCieD50R();
public:
  static float GetCieD50G();
public:
  static float GetCieD50B();
public:
  static float GetCieD55R();
public:
  static float GetCieD55G();
public:
  static float GetCieD55B();
public:
  static float GetCieD65R();
public:
  static float GetCieD65G();
public:
  static float GetCieD65B();
public:
  static float GetCieFR();
public:
  static float GetCieFG();
public:
  static float GetCieFB();
};

class EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EGenericROI_;
  //TODO: Write manual declarations here
protected:
  virtual void BiLevelSave(const std::string& path, EImageFileType imageType) = 0;
  virtual void GrayLevelSave(const std::string& path, EImageFileType imageType) = 0;
  virtual void ColorSave(const std::string& path, EImageFileType imageType) = 0;

private:
  std::string title_;
public:
  const char* GetTitle() const
  {
    EGenericROI* pthis = const_cast<EGenericROI*>(this);
    pthis->title_ = pthis->GetTitleInternal();
    return title_.c_str();
  }

  int SameSize(const EGenericROI* other) const
  {
    ESetError(E_OK);
    if(other->GetWidth() != this->GetWidth())
      ESetError(E_ERROR_IMAGES_NOT_SAME_SIZE);
    if(other->GetHeight() != this->GetHeight())
      ESetError(E_ERROR_IMAGES_NOT_SAME_SIZE);
    return EGetError();
  }

  void Save(const std::string& path, IMAGE_FILE_TYPES type)
  {
    switch(type)
    {
    case E_FILE_FORMAT_BILEVEL_BMP:
      {
        BiLevelSave(path, EImageFileType_Bmp);
        break;
      }

    case E_FILE_FORMAT_GRAY_LEVEL_BMP:
      {
        GrayLevelSave(path, EImageFileType_Bmp);
        break;
      }

    case E_FILE_FORMAT_COLOR_BMP:
      {
        ColorSave(path, EImageFileType_Bmp);
        break;
      }

    case E_FILE_FORMAT_GRAY_LEVEL_JPEG:
      {
        GrayLevelSave(path, EImageFileType_Jpeg);
        break;
      }

    case E_FILE_FORMAT_COLOR_JPEG:
      {
        ColorSave(path, EImageFileType_Jpeg);
        break;
      }

    case E_FILE_FORMAT_GRAY_LEVEL_TIFF:
      {
        GrayLevelSave(path, EImageFileType_Tiff);
        break;
      }

    case E_FILE_FORMAT_COLOR_TIFF:
      {
        ColorSave(path, EImageFileType_Tiff);
        break;
      }

    case E_FILE_FORMAT_PACKED_BILEVEL_TIFF:
      {
        ESetError(E_ERROR_INVALID_OPERATION);
        break;
      }

    case E_FILE_FORMAT_PACKED_GRAY_LEVEL_TIFF:
      {
        ESetError(E_ERROR_INVALID_OPERATION);
        break;
      }

    case E_FILE_FORMAT_BILEVEL_TIFF:
      {
        BiLevelSave(path, EImageFileType_Tiff);
        break;
      }

    case E_FILE_FORMAT_AUTO:
    default:
      this->EGenericROI::Save(path);
      break;
    }
  }

  void Save(const std::string& path)
  {
    Internal_Save(path);
  }

  int GetDataType()
  {
    return 1;
  }

  bool Void()
  {
    return IsVoid();
  }

  void Load(const char* path)
  {
    Load((std::string)path);
  }
  void Save(const char* path)
  {
    Save((std::string)path);
  }

public:
  EGenericROI& operator=(const EGenericROI& other);
public:
  EGenericROI(const EGenericROI& other);
public:
  virtual ~EGenericROI() throw();
public:
  EGenericROI* GetBaseTopParent_Internal();
public:
  const EGenericROI* GetBaseTopParent_Internal() const;
public:
  EGenericROI* GetParent();
public:
  const EGenericROI* GetParent() const;
public:
  bool IsAnROI() const;
public:
  bool HasSubROI(const EGenericROI* subROI) const;
public:
  EGenericROI* GetFirstSubROI();
public:
  EGenericROI* GetNextSiblingSubROI(EGenericROI* subROI);
public:
  EGenericROI* GetNextROI(EGenericROI* startROI);
public:
  EGenericROI* GetNextSiblingROI();
public:
  OEV_INT32 GetRowPitch() const;
public:
  OEV_INT32 GetColPitch() const;
public:
  OEV_UINT32 GetBitsPerPixel() const;
public:
  void SetImagePtr(OEV_INT32 width, OEV_INT32 height, void* imagePointer, OEV_INT32 bitsPerRow);
public:
  void* GetGenericImagePtr(OEV_INT32 x, OEV_INT32 y);
public:
  const void* GetGenericImagePtr(OEV_INT32 x, OEV_INT32 y) const;
public:
  void* GetGenericImagePtr();
public:
  const void* GetGenericImagePtr() const;
public:
  OEV_INT32 GetOrgX() const;
public:
  void SetOrgX(OEV_INT32 x);
public:
  OEV_INT32 GetOrgY() const;
public:
  void SetOrgY(OEV_INT32 y);
public:
  OEV_INT32 GetWidth() const;
public:
  void SetWidth(OEV_INT32 w);
public:
  OEV_INT32 GetHeight() const;
public:
  void SetHeight(OEV_INT32 h);
public:
  void CropToImage();
public:
  bool IsVoid() const;
public:
  void SetPlacement(OEV_INT32 x, OEV_INT32 y, OEV_INT32 w, OEV_INT32 h);
public:
  std::vector<EGenericROI*> GetSubBaseROIs(bool recursive);
public:
  std::vector<const EGenericROI*> GetSubBaseROIs(bool bRecursive) const;
public:
  E_HANDLES HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY, float panX, float panY);
public:
  OEV_INT32 GetTotalOrgX() const;
public:
  OEV_INT32 GetTotalOrgY() const;
public:
  OEV_INT32 GetTotalWidth() const;
public:
  OEV_INT32 GetTotalHeight() const;
public:
  void Drag(E_HANDLES eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY, float f32PanX, float f32PanY);
public:
  virtual void Serialize(ESerializer* serializer) = 0;
public:
  void Detach();
public:
  void Attach(EGenericROI* parent);
public:
  void Attach(EGenericROI* parent, int orgX, int orgY, int width, int height);
public:
  void CopyTo(EGenericROI* dest) const;
public:
  OEV_UINT32 GetPlanesPerPixel() const;
public:
  E_COLOR_SYSTEM GetColorSystem() const;
public:
  void SetColorSystem(E_COLOR_SYSTEM colorSystem);
public:
  E_IMAGE_TYPES GetType() const;
public:
  void SetSize(OEV_INT32 width, OEV_INT32 height);
public:
  void SetSize(const EGenericROI* other);
public:
  void DrawFrame(EDrawAdapter* graphicContext, E_FRAME_POSITION framePosition, BOOL handles, float zoomX, float zoomY, float x, float y) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY, float x, float y) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(EDrawAdapter* graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(EDrawAdapter* graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(HDC graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(HDC graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX, float panY) const;
public:
  void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
public:
  void DrawFrame(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
public:
  void Load(const std::string& path);
public:
  void Load(ESerializer* serializer);
public:
  void Internal_Save(const std::string& path, EImageFileType type) const;
public:
  void Internal_Save(ESerializer* serializer);
public:
  void SaveJpeg(const std::string& path, int quality) const;
public:
  void SaveJpeg2K(const std::string& path, int quality) const;
public:
  std::string GetAuthotInternal() const;
public:
  void SetAuthor(const std::string& author);
public:
  std::string GetCommentInternal() const;
public:
  void SetComment(const std::string& comment);
public:
  std::string GetDateInternal() const;
public:
  void SetDate(const std::string& date);
public:
  std::string GetTitleInternal() const;
public:
  void SetTitle(const std::string& title);
public:
  void SetImagePtr(OEV_INT32 width, OEV_INT32 height, void* imagePointer);
public:
  std::vector<EGenericROI*> GetSubBaseROIs();
public:
  std::vector<const EGenericROI*> GetSubBaseROIs() const;
public:
  E_HANDLES HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY, float panX);
public:
  E_HANDLES HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY);
public:
  E_HANDLES HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX);
public:
  E_HANDLES HitTest(OEV_INT32 x, OEV_INT32 y);
public:
  void Drag(E_HANDLES eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY, float f32PanX);
public:
  void Drag(E_HANDLES eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY);
public:
  void Drag(E_HANDLES eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX);
public:
  void Drag(E_HANDLES eHandle, OEV_INT32 n32X, OEV_INT32 n32Y);
public:
  void Attach(EGenericROI* parent, int orgX, int orgY, int width);
public:
  void Attach(EGenericROI* parent, int orgX, int orgY);
public:
  void DrawFrame(EDrawAdapter* graphicContext, E_FRAME_POSITION framePosition, BOOL handles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, E_FRAME_POSITION framePosition, BOOL handles, float zoomX, float zoomY) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, E_FRAME_POSITION framePosition, BOOL handles, float zoomX) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, E_FRAME_POSITION framePosition, BOOL handles) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, BOOL handles, float zoomX) const;
public:
  void DrawFrame(EDrawAdapter* graphicContext, BOOL handles) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, BOOL bHandles, float zoomX) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, BOOL bHandles) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bHandles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bHandles, float zoomX, float zoomY) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bHandles, float zoomX) const;
public:
  void DrawFrameWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bHandles) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX) const;
public:
  void Draw(EDrawAdapter* graphicContext) const;
public:
  void Draw(EDrawAdapter* graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY, float panX) const;
public:
  void Draw(EDrawAdapter* graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY) const;
public:
  void Draw(EDrawAdapter* graphicContext, EC24Vector* c24Vector, float zoomX) const;
public:
  void Draw(EDrawAdapter* graphicContext, EC24Vector* c24Vector) const;
public:
  void Draw(EDrawAdapter* graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX) const;
public:
  void Draw(EDrawAdapter* graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY) const;
public:
  void Draw(EDrawAdapter* graphicContext, EBW8Vector* bw8Vector, float zoomX) const;
public:
  void Draw(EDrawAdapter* graphicContext, EBW8Vector* bw8Vector) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, float zoomX) const;
public:
  void Draw(HDC graphicContext) const;
public:
  void Draw(HDC graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY, float panX) const;
public:
  void Draw(HDC graphicContext, EC24Vector* c24Vector, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, EC24Vector* c24Vector, float zoomX) const;
public:
  void Draw(HDC graphicContext, EC24Vector* c24Vector) const;
public:
  void Draw(HDC graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX) const;
public:
  void Draw(HDC graphicContext, EBW8Vector* bw8Vector, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, EBW8Vector* bw8Vector, float zoomX) const;
public:
  void Draw(HDC graphicContext, EBW8Vector* bw8Vector) const;
public:
  void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY) const;
public:
  void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX) const;
public:
  void DrawFrame(HDC graphicContext, BOOL bHandles) const;
public:
  void DrawFrame(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY, float x) const;
public:
  void DrawFrame(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX, float zoomY) const;
public:
  void DrawFrame(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles, float zoomX) const;
public:
  void DrawFrame(HDC graphicContext, E_FRAME_POSITION framePosition, BOOL bHandles) const;
public:
  void Internal_Save(const std::string& path) const;
public:
  void SaveJpeg(const std::string& path) const;
public:
  void SaveJpeg2K(const std::string& path) const;
public:
  void Load(FILE* stream);
public:
  void Save(FILE* stream);
public:
  EGenericROI(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIBW8 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW8_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EBW8* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EBW8*>(GetGenericImagePtr(x, y));
  }


public:
  EROIBW8();
public:
  virtual ~EROIBW8() throw();
public:
  void SetPixel(EBW8 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EBW8 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIBW8* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIBW8* GetNextROI(EGenericROI* startROI);
public:
  EROIBW8* GetNextSiblingROI();
public:
  EROIBW8* GetParent();
public:
  const EROIBW8* GetParent() const;
public:
  EBW8 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EBW8 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageBW8* GetTypedTopParent();
public:
  const EImageBW8* GetTopParent() const;
public:
  EROIBW8(const EROIBW8& other);
public:
  EROIBW8& operator=(const EROIBW8& other);
public:
  EROIBW8(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageBW8 : public EROIBW8
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW8_;
  
public:
  EImageBW8();
public:
  EImageBW8(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageBW8() throw();
public:
  EImageBW8(const EImageBW8& other);
public:
  EImageBW8& operator=(const EImageBW8& other);
public:
  EImageBW8(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIBW32 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW32_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EBW32* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EBW32*>(GetGenericImagePtr(x, y));
  }


public:
  EROIBW32();
public:
  virtual ~EROIBW32() throw();
public:
  void SetPixel(EBW32 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EBW32 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIBW32* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIBW32* GetNextROI(EGenericROI* startROI);
public:
  EROIBW32* GetNextSiblingROI();
public:
  EROIBW32* GetParent();
public:
  const EROIBW32* GetParent() const;
public:
  EBW32 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EBW32 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageBW32* GetTypedTopParent();
public:
  const EImageBW32* GetTopParent() const;
public:
  EROIBW32(const EROIBW32& other);
public:
  EROIBW32& operator=(const EROIBW32& other);
public:
  EROIBW32(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageBW32 : public EROIBW32
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW32_;
  
public:
  EImageBW32();
public:
  EImageBW32(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageBW32() throw();
public:
  EImageBW32(const EImageBW32& other);
public:
  EImageBW32& operator=(const EImageBW32& other);
public:
  EImageBW32(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EHitAndMissKernel
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EHitAndMissKernel_;
  
public:
  EHitAndMissKernel& operator=(const EHitAndMissKernel& other);
public:
  EHitAndMissKernel(const EHitAndMissKernel& other);
public:
  EHitAndMissKernel(int startX, int startY, int endX, int endY);
public:
  EHitAndMissKernel(OEV_UINT32 halfSizeX, OEV_UINT32 halfSizeY);
public:
  EHitAndMissKernel();
public:
  virtual ~EHitAndMissKernel() throw();
public:
  void SetSize(int startX, int startY, int endX, int endY);
public:
  void SetSize(OEV_UINT32 halfSizeX, OEV_UINT32 halfSizeY);
public:
  int GetStartX() const;
public:
  int GetStartY() const;
public:
  int GetEndX() const;
public:
  int GetEndY() const;
public:
  void SetValue(int x, int y, EHitAndMissValue value);
public:
  EHitAndMissValue GetValue(int x, int y) const;
public:
  EHitAndMissKernel(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EasyImage
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyImage_;
  
public:
  static void Gain(EROIC24* sourceImage, EROIC24* destinationImage, EColor Gain);
public:
  static void Offset(EROIC24* sourceImage, EROIC24* destinationImage, EColor Offset);
public:
  static void PixelMinBW8(const EROIBW8* sourceImage, EBW8& minimumValue);
public:
  static void PixelMinBW16(const EROIBW16* sourceImage, EBW16& minimumValue);
public:
  static void PixelMaxBW8(const EROIBW8* sourceImage, EBW8& maximumValue);
public:
  static void PixelMaxBW16(const EROIBW16* sourceImage, EBW16& maximumValue);
public:
  static void PixelStatBW8(const EROIBW8* sourceImage, EBW8& minimumValue, EBW8& maximumValue, float& average);
public:
  static void PixelStatBW16(const EROIBW16* sourceImage, EBW16& minimumValue, EBW16& maximumValue, float& average);
public:
  static void HitAndMiss(const EROIBW8* source, EROIBW8* destination, const EHitAndMissKernel& kernel);
public:
  static void HitAndMiss(const EROIBW16* source, EROIBW16* destination, const EHitAndMissKernel& kernel);
public:
  static void HitAndMiss(const EROIC24* source, EROIC24* destination, const EHitAndMissKernel& kernel);
};

class EasyObject
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyObject_;
  
public:
  static bool IsUnsignedIntegerFeature(EFeature feature);
public:
  static bool IsIntegerFeature(EFeature feature);
public:
  static bool IsFloatFeature(EFeature feature);
};

class EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EShape_;
  //TODO: Write manual declarations here
public:
  void SetDragable(BOOL bDragable, BOOL bDaughters)
  {
    if(bDaughters)
      SetDragableRecursive(bDragable);
    else
      SetDragable(bDragable);
  }

  void SetSelected(BOOL bDragable, BOOL bDaughters)
  {
    if(bDaughters)
      SetSelectedRecursive(bDragable);
    else
      SetSelected(bDragable);
  }

  void SetRotatable(BOOL bRotatable, BOOL bDaughters)
  {
    if(bDaughters)
      SetRotatableRecursive(bRotatable);
    else
      SetRotatable(bRotatable);
  }

  void SetResizable(BOOL bDragable, BOOL bDaughters)
  {
    if(bDaughters)
      SetResizableRecursive(bDragable);
    else
      SetResizable(bDragable);
  }

  virtual void SetActive(BOOL bDragable, BOOL bDaughters)
  {
    if(bDaughters)
      SetActiveRecursive(bDragable);
    else
      SetActive(bDragable);
  }

  void SetVisible(BOOL visible, BOOL bDaughters)
  {
    if(bDaughters)
      SetVisibleRecursive(visible);
    else
      SetVisible(visible);
  }

  void SetSelectable(BOOL selectable, BOOL bDaughters)
  {
    if(bDaughters)
      SetSelectableRecursive(selectable);
    else
      SetSelectable(selectable);
  }

  void SetLabeled(BOOL labeled, BOOL bDaughters)
  {
    if(bDaughters)
      SetLabeledRecursive(labeled);
    else
      SetLabeled(labeled);
  }

  void SetActualShape(BOOL actual, BOOL bDaughters)
  {
    if(bDaughters)
      SetActualShapeRecursive(actual);
    else
      SetActualShape(actual);
  }

private:
  std::string name_;
public:
  const char* GetName()
  {
    name_ = GetNameInternal();
    return name_.c_str();
  }

  void SetName(const char* name)
  {
    std::string temp;
    temp = name;
    SetName(temp);
  }

  void Load(const char* path)
  {
    Load((std::string)path);
  }
  void Save(const char* path)
  {
    Save((std::string)path);
  }

public:
  EShape& operator=(const EShape& other);
public:
  EShape(const EShape& other);
public:
  EShape();
public:
  virtual ~EShape() throw();
public:
  virtual INS_SHAPE_TYPES GetType() = 0;
public:
  std::string GetNameInternal();
public:
  void SetName(const std::string& name);
public:
  EShape* GetShapeNamed(const std::string& name);
public:
  BOOL GetVisible();
public:
  void SetVisible(BOOL visible);
public:
  void SetVisibleRecursive(BOOL visible);
public:
  BOOL GetSelected();
public:
  void SetSelected(BOOL selected);
public:
  void SetSelectedRecursive(BOOL selected);
public:
  BOOL GetSelectable();
public:
  void SetSelectable(BOOL selectable);
public:
  void SetSelectableRecursive(BOOL selectable);
public:
  BOOL GetDragable();
public:
  void SetDragable(BOOL dragable);
public:
  void SetDragableRecursive(BOOL dragable);
public:
  BOOL GetResizable();
public:
  void SetResizable(BOOL resizable);
public:
  void SetResizableRecursive(BOOL resizable);
public:
  BOOL GetRotatable();
public:
  void SetRotatable(BOOL rotatable);
public:
  void SetRotatableRecursive(BOOL rotatable);
public:
  BOOL GetLabeled();
public:
  void SetLabeled(BOOL labeled);
public:
  void SetLabeledRecursive(BOOL labeled);
public:
  virtual BOOL GetActive();
public:
  virtual void SetActive(BOOL active);
public:
  virtual void SetActiveRecursive(BOOL active);
public:
  BOOL GetActualShape();
public:
  void SetActualShape(BOOL actualShape);
public:
  void SetActualShapeRecursive(BOOL actualShape);
public:
  BOOL GetAutoArrange();
public:
  void SetAutoArrange(BOOL bAutoArrange, BOOL bDaughters);
public:
  BOOL GetFound();
public:
  virtual void SetFound(BOOL bFound, BOOL bDaughters);
public:
  BOOL GetInspected();
public:
  void SetInspected(BOOL bFound, BOOL bDaughters);
public:
  BOOL GetPassed();
public:
  void SetPassed(BOOL bFound, BOOL bDaughters);
public:
  BOOL GetQuickDraw();
public:
  void SetQuickDraw(BOOL bFound, BOOL bDaughters);
public:
  BOOL GetOptionalDraw();
public:
  void SetOptionalDraw(BOOL bFound, BOOL bDaughters);
public:
  BOOL GetUserFlag();
public:
  void SetUserFlag(BOOL bUserFlag, BOOL bDaughters);
public:
  BOOL GetAllocated() const;
public:
  void SetAllocated(BOOL bAllocated, BOOL bDaughters);
public:
  void EnableBehaviorFilter(INS_SHAPE_BEHAVIOR behavior, BOOL value);
public:
  void DisableBehaviorFilter(INS_SHAPE_BEHAVIOR behavior);
public:
  void Attach(EShape* mother);
public:
  void Detach();
public:
  void DetachDaughters();
public:
  OEV_UINT32 GetNumDaughters();
public:
  EShape* GetMother();
public:
  virtual EShape* GetDaughter(OEV_UINT32 index);
public:
  EWorldShape* GetWorldShape();
public:
  BOOL IsWorld();
public:
  void InvalidateWorld();
public:
  EPoint LocalToSensor(const EPoint& LPoint);
public:
  EPoint SensorToLocal(const EPoint& SPoint);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters) = 0;
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters) = 0;
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters) = 0;
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters) = 0;
public:
  virtual float GetZoomX();
public:
  virtual float GetZoomY();
public:
  virtual float GetPanX();
public:
  virtual float GetPanY();
public:
  virtual void SetZoom(float f32ZoomX, float f32ZoomY);
public:
  virtual void SetPan(float f32PanX, float f32PanY);
public:
  virtual BOOL HitTest(BOOL bDaughters) = 0;
public:
  E_HANDLES GetHitHandle();
public:
  EShape* GetHitShape();
public:
  void SetDraggingMode(INS_DRAGGING_MODES eDraggingMode, BOOL bDaughters);
public:
  INS_DRAGGING_MODES GetDraggingMode();
public:
  void SetCursor(OEV_INT32 x, OEV_INT32 y);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY) = 0;
public:
  virtual void Closest() = 0;
public:
  EShape* GetClosestShape();
public:
  virtual void Process(EROIBW8* pSrc, BOOL bDaughters);
public:
  void Save(ESerializer* serializer, BOOL daughters);
public:
  void Load(ESerializer* serializer, BOOL daughters);
public:
  virtual void EnableTypeFilter(OEV_UINT32 un32Types);
public:
  virtual void DisableTypeFilter();
public:
  void SetAutoArrange(BOOL bAutoArrange);
public:
  virtual void SetFound(BOOL bFound);
public:
  void SetInspected(BOOL bFound);
public:
  void SetPassed(BOOL bFound);
public:
  void SetQuickDraw(BOOL bFound);
public:
  void SetOptionalDraw(BOOL bFound);
public:
  void SetUserFlag(BOOL bUserFlag);
public:
  void SetAllocated(BOOL bAllocated);
public:
  void EnableBehaviorFilter(INS_SHAPE_BEHAVIOR behavior);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode) = 0;
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext) = 0;
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode) = 0;
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color) = 0;
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode) = 0;
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext) = 0;
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode) = 0;
public:
  virtual void Draw(HDC graphicContext) = 0;
public:
  virtual void SetZoom(float f32ZoomX);
public:
  virtual void SetZoom();
public:
  virtual void SetPan(float f32PanX);
public:
  virtual void SetPan();
public:
  virtual BOOL HitTest() = 0;
public:
  void SetDraggingMode(INS_DRAGGING_MODES eDraggingMode);
public:
  virtual void Process(EROIBW8* pSrc);
public:
  void Save(ESerializer* serializer);
public:
  void Load(ESerializer* serializer);
public:
  void Save(FILE* stream, BOOL daughters);
public:
  void Save(std::string stream, BOOL daughters);
public:
  void Load(FILE* stream, BOOL daughters);
public:
  void Load(std::string stream, BOOL daughters);
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  EShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ERectangle : public EFrame
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangle_;
  //TODO: Write manual declarations here
public:
void Set(EPoint Center, FLOAT32 f32SizeX, FLOAT32 f32SizeY, FLOAT32 f32Angle= 0)
{
  SetCenter(Center);
  SetSize(f32SizeX, f32SizeY);
  SetAngle(f32Angle);
}


public:
  ERectangle();
public:
  ERectangle(const EPoint& center, float sizeX, float sizeY, float angle);
public:
  ERectangle(const EPoint& origin, const EPoint& end);
public:
  ERectangle(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  ERectangle(const ERectangle& other);
public:
  ERectangle& operator=(const ERectangle& other);
public:
  ERectangle* CopyTo(ERectangle* other) const;
public:
  void Set(const EPoint& origin, const EPoint& end);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void SetFromTwoPoints(const EPoint& origin, const EPoint& end);
public:
  void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void SetSize(float sizeX, float sizeY);
public:
  float GetSizeX() const;
public:
  float GetSizeY() const;
public:
  EPoint GetPoint(float fractionX, float fractionY);
public:
  void GetMidEdges(EPoint& x, EPoint& XX, EPoint& y, EPoint& YY);
public:
  void GetCorners(EPoint& xy, EPoint& XXy, EPoint& xYY, EPoint& XXYY);
public:
  void GetEdges(ELine& x, ELine& XX, ELine& y, ELine& YY);
public:
  virtual ~ERectangle() throw();
public:
  ERectangle(const EPoint& center, float sizeX, float sizeY);
public:
  ERectangle(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ERectangleShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangleShape_;
  //TODO: Write manual declarations here
void SetCenter(float x, float y)
{
  SetCenterXY(x, y);
}

public:
  ERectangleShape(const ERectangleShape& other);
public:
  ERectangleShape();
public:
  virtual ~ERectangleShape() throw();
public:
  EPoint GetCenter() const;
public:
  void SetCenter(const EPoint& center);
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  void SetAngle(float f32Angle);
public:
  float GetScale() const;
public:
  void SetScale(float f32Scale);
public:
  void SetFromTwoPoints(const EPoint& origin, const EPoint& end);
public:
  void SetFromOppositeCorners(const EPoint& origin, const EPoint& end);
public:
  void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void SetFromThreeCorners(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  virtual void SetRectangle(const ERectangle& rectangle);
public:
  void SetSize(float sizeX, float sizeY);
public:
  float GetSizeX() const;
public:
  float GetSizeY() const;
public:
  EPoint GetPoint(float fractionX, float fractionY);
public:
  void GetMidEdges(EPoint& x, EPoint& XX, EPoint& y, EPoint& YY);
public:
  void GetCorners(EPoint& xy, EPoint& XXy, EPoint& xYY, EPoint& XXYY);
public:
  void GetEdges(ELine& x, ELine& XX, ELine& y, ELine& YY);
public:
  ERectangleShape& operator=(const ERectangleShape& other);
public:
  ERectangleShape* CopyTo(ERectangleShape* dest, BOOL bRecursive) const;
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL bDaughters);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  ERectangleShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBarCode : public ERectangleShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBarCode_;
  //TODO: Write manual declarations here
private:
  float fakeReadingAngle_;
  unsigned int fakeThreshold_;
public:
  void Decode(enum BRC_SYMBOLOGIES eSymbology, char* pszString, unsigned int un32Length);
  void Set ( const ERectangle& Rectangle);
  float GetReadingAngle()
  {
    return fakeReadingAngle_;
  }
  //void SetReadingAngle(float val)
  //{
  //  fakeReadingAngle_ = val;
  //}
  //float GetReadingAngle()
  //{
  //  return fakeReadingAngle_;
  //}
  void SetReadingAngle(float val)
  {
    fakeReadingAngle_ = val;
  }
  UINT32 GetThreshold()
  {
    return fakeThreshold_;
  }
  void SetThreshold(unsigned int val)
  {
    fakeThreshold_ = val;
  }

  void Read(EROIBW8* src, char* buffer, int maxSize)
  {
    std::string res = Read(src);
    memset(buffer, 0, sizeof(char) * maxSize);
    unsigned int toCopy = (unsigned int)((unsigned int)maxSize < res.length() ? maxSize : res.length());
    memcpy(buffer, res.c_str(), sizeof(char) * toCopy);
  }

  const char* GetSymbologyName(BRC_SYMBOLOGIES symbology);

public:
  EBarCode& operator=(const EBarCode& other);
public:
  EBarCode(const EBarCode& other);
public:
  EBarCode();
public:
  virtual ~EBarCode() throw();
public:
  virtual void SetRectangle(const ERectangle& rectangle);
public:
  void SetReadingCenter(float relativeX, float relativeY);
public:
  void SetReadingSize(float relativeSizeX, float relativeSizeY);
public:
  float GetRelativeReadingX();
public:
  float GetRelativeReadingY();
public:
  float GetRelativeReadingSizeX();
public:
  float GetRelativeReadingSizeY();
public:
  float GetModule();
public:
  void SetModule(float f32Module);
public:
  float GetThicknessRatio();
public:
  void SetThicknessRatio(float f32ThicknessRatio);
public:
  BOOL GetKnownLocation();
public:
  void SetKnownLocation(BOOL bKnownLocation);
public:
  BOOL GetKnownModule();
public:
  void SetKnownModule(BOOL bKnownModule);
public:
  BOOL GetVerifyChecksum();
public:
  void SetVerifyChecksum(BOOL bVerifyChecksum);
public:
  void Detect(EROIBW8* sourceImage);
public:
  std::string Decode(BRC_SYMBOLOGIES symbology);
public:
  std::string Read(EROIBW8* sourceImage);
public:
  void GetDecodedDirection(BOOL& directEncoding);
public:
  void GetDecodedDirection(BRC_SYMBOLOGIES symbology, BOOL& directEncoding);
public:
  void GetDecodedAngle(float& decodedAngle);
public:
  void GetDecodedAngle(float& decodedAngle, float cutAngle);
public:
  void GetDecodedAngle(BRC_SYMBOLOGIES symbology, float& decodedAngle);
public:
  void GetDecodedAngle(BRC_SYMBOLOGIES symbology, float& decodedAngle, float cutAngle);
public:
  void GetDecodedRectangle(ERectangle& rect);
public:
  void GetDecodedRectangle(BRC_SYMBOLOGIES symbology, ERectangle& rect);
public:
  OEV_UINT32 GetNumEnabledSymbologies();
public:
  OEV_UINT32 GetNumDecodedSymbologies();
public:
  BRC_SYMBOLOGIES GetDecodedSymbology(OEV_UINT32 index);
public:
  OEV_UINT32 GetStandardSymbologies();
public:
  void SetStandardSymbologies(OEV_UINT32 un32StandardSymbologies);
public:
  OEV_UINT32 GetAdditionalSymbologies();
public:
  void SetAdditionalSymbologies(OEV_UINT32 un32AdditionalSymbologies);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
public:
  std::string GetSymbologyName_Internal(BRC_SYMBOLOGIES symbology);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  EBarCode(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBW16PathVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW16PathVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EBW16Path element);
public:
  EBW16Path& operator[](OEV_UINT32 index) const;
public:
  EBW16Path GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EBW16Path value);
public:
  EBW16PathVector();
public:
  EBW16PathVector(OEV_UINT32 maxNumberOfElements);
public:
  EBW16PathVector(const EBW16PathVector& other);
public:
  virtual ~EBW16PathVector() throw();
public:
  EBW16PathVector& operator=(const EBW16PathVector& other);
public:
  BOOL GetClosed();
public:
  void SetClosed(BOOL bClosed);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX, float originY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  EBW16PathVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBW16Vector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW16Vector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EBW16 element);
public:
  EBW16& operator[](OEV_UINT32 index) const;
public:
  EBW16 GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EBW16 value);
public:
  EBW16Vector();
public:
  EBW16Vector(OEV_UINT32 maxNumberOfElements);
public:
  EBW16Vector(const EBW16Vector& other);
public:
  virtual ~EBW16Vector() throw();
public:
  EBW16Vector& operator=(const EBW16Vector& other);
public:
  void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX, float originY);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY);
public:
  float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
public:
  void SetYRange(OEV_INT32 n32YMin);
public:
  void SetYRange();
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height);
public:
  void Draw(HDC graphicContext, float width, float height, float originX);
public:
  void Draw(HDC graphicContext, float width, float height);
public:
  float WeightedMoment(OEV_UINT32 from);
public:
  float WeightedMoment();
public:
  EBW16Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBW8PathVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW8PathVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EBW8Path element);
public:
  EBW8Path& operator[](OEV_UINT32 index) const;
public:
  EBW8Path GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EBW8Path value);
public:
  EBW8PathVector();
public:
  EBW8PathVector(OEV_UINT32 maxNumberOfElements);
public:
  EBW8PathVector(const EBW8PathVector& other);
public:
  EBW8PathVector& operator=(const EBW8PathVector& other);
public:
  virtual ~EBW8PathVector() throw();
public:
  BOOL GetClosed();
public:
  void SetClosed(BOOL bClosed);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX, float originY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  EBW8PathVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBW8Vector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW8Vector_;
  //TODO: Write manual declarations here
public:
  EBW8* GetDataPtr()
  {
    return reinterpret_cast<EBW8*>(Euresys::eVision::Internal::StringLegacyConvertion::EVectorBW8_GetDataPtr(wrappedFunctions_EBW8Vector_.GetImpl()));
  }

public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EBW8 element);
public:
  EBW8& operator[](OEV_UINT32 index) const;
public:
  EBW8 GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EBW8 value);
public:
  EBW8Vector();
public:
  EBW8Vector(OEV_UINT32 maxNumberOfElements);
public:
  EBW8Vector(const EBW8Vector& other);
public:
  EBW8Vector& operator=(const EBW8Vector& other);
public:
  virtual ~EBW8Vector() throw();
public:
  void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX, float originY);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY);
public:
  float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
public:
  void SetYRange(OEV_INT32 n32YMin);
public:
  void SetYRange();
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height);
public:
  void Draw(HDC graphicContext, float width, float height, float originX);
public:
  void Draw(HDC graphicContext, float width, float height);
public:
  float WeightedMoment(OEV_UINT32 from);
public:
  float WeightedMoment();
public:
  EBW8Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBWHistogramVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBWHistogramVector_;
  public:
  UINT32* GetDataPtr() const
  {
    return reinterpret_cast<UINT32*>(GetRawDataPtr());
  }

public:
  void* GetRawDataPtr() const;
public:
  void AddElement(OEV_UINT32 element);
public:
  OEV_UINT32& operator[](OEV_UINT32 index) const;
public:
  OEV_UINT32 GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, OEV_UINT32 value);
public:
  EBWHistogramVector();
public:
  EBWHistogramVector(const EBWHistogramVector& other);
public:
  EBWHistogramVector(OEV_UINT32 maxNumberOfElements);
public:
  virtual ~EBWHistogramVector() throw();
public:
  EBWHistogramVector& operator=(const EBWHistogramVector& other);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX, float originY);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float width, float height);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float width, float height);
public:
  void Draw(HDC graphicContext, float width, float height, float originX);
public:
  void Draw(HDC graphicContext, float width, float height);
public:
  EBWHistogramVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EC24PathVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EC24PathVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EC24Path element);
public:
  EC24Path& operator[](OEV_UINT32 index) const;
public:
  EC24Path GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EC24Path value);
public:
  EC24PathVector();
public:
  EC24PathVector(const EC24PathVector& other);
public:
  EC24PathVector(OEV_UINT32 maxNumberOfElements);
public:
  virtual ~EC24PathVector() throw();
public:
  EC24PathVector& operator=(const EC24PathVector& other);
public:
  BOOL GetClosed();
public:
  void SetClosed(BOOL bClosed);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX, float originY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  EC24PathVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EC24Vector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EC24Vector_;
  //TODO: Write manual declarations here
public:
  void Draw( HDC hDC, FLOAT32 f32Width, FLOAT32 f32Height, FLOAT32 f32OrgX, FLOAT32 f32OrgY, HGDIOBJ hPen0, HGDIOBJ hPen1, HGDIOBJ hPen2)
  {
    LOGPEN logPen;
    Euresys::Color::RGBColor color0;
    Euresys::Color::RGBColor color1;
    Euresys::Color::RGBColor color2;

    ::GetObject(hPen0, sizeof(LOGPEN), &logPen);
    color0= Euresys::Color::RGBColor(GetRValue(logPen.lopnColor), GetGValue(logPen.lopnColor), GetBValue(logPen.lopnColor));

    ::GetObject(hPen1, sizeof(LOGPEN), &logPen);
    color1= Euresys::Color::RGBColor(GetRValue(logPen.lopnColor), GetGValue(logPen.lopnColor), GetBValue(logPen.lopnColor));

    ::GetObject(hPen2, sizeof(LOGPEN), &logPen);
    color2= Euresys::Color::RGBColor(GetRValue(logPen.lopnColor), GetGValue(logPen.lopnColor), GetBValue(logPen.lopnColor));

    Draw(hDC, f32Width, f32Height, f32OrgX, f32OrgY, color0, color1, color2);
  }

  EC24* GetDataPtr()
  {
    return reinterpret_cast<EC24*>(Euresys::eVision::Internal::StringLegacyConvertion::EVectorC24_GetDataPtr(wrappedFunctions_EC24Vector_.GetImpl()));
  }

public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EC24 element);
public:
  EC24& operator[](OEV_UINT32 index) const;
public:
  EC24 GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EC24 value);
public:
  EC24Vector();
public:
  EC24Vector(OEV_UINT32 maxNumberOfElements);
public:
  EC24Vector(const EC24Vector& other);
public:
  virtual ~EC24Vector() throw();
public:
  EC24Vector& operator=(const EC24Vector& other);
public:
  void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
public:
  void Draw(HDC graphicContext, float width, float height);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY);
public:
  void Draw(HDC graphicContext, float width, float height, float originX, float originY, const Euresys::Color::RGBColor& color0, const Euresys::Color::RGBColor& color1, const Euresys::Color::RGBColor& color2);
public:
  void Draw(HDC graphicContext, float width, float height, const Euresys::Color::RGBColor& color0, const Euresys::Color::RGBColor& color1, const Euresys::Color::RGBColor& color2);
public:
  void Draw(EDrawAdapter* graphicContext, float width, float height);
public:
  void Draw(EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
public:
  void Draw(EDrawAdapter* graphicContext, float width, float height, float originX, float originY, const Euresys::Color::RGBColor& color0, const Euresys::Color::RGBColor& color1, const Euresys::Color::RGBColor& color2);
public:
  void Draw(EDrawAdapter* graphicContext, float width, float height, const Euresys::Color::RGBColor& color0, const Euresys::Color::RGBColor& color1, const Euresys::Color::RGBColor& color2);
public:
  void SetYRange(OEV_INT32 n32YMin);
public:
  void SetYRange();
public:
  EC24Vector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ESerializer
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ESerializer_;
  
public:
  virtual void Close() = 0;
public:
  virtual BOOL GetWriting() const = 0;
public:
  virtual ~ESerializer() throw();
public:
  static ESerializer* CreateFileWriter(const std::string& filePath, FileWriterMode mode);
public:
  static ESerializer* CreateFileReader(const std::string& filePath);
public:
  static ESerializer* CreateCallbackWriter(void* isEOS, void* setCurrentPos, void* getCurrentPos, void* serializeMemory, void* close, void* cookie);
public:
  static ESerializer* CreateCallbackReader(void* isEOS, void* setCurrentPos, void* getCurrentPos, void* serializeMemory, void* close, void* cookie);
public:
  ESerializer();
public:
  ESerializer(const ESerializer& other);
public:
  ESerializer& operator=(const ESerializer& other);
public:
  static ESerializer* CreateFileWriter(const std::string& filePath);
public:
  ESerializer(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECallbackSerializer : public ESerializer
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECallbackSerializer_;
  
public:
  ECallbackSerializer& operator=(const ECallbackSerializer& other);
public:
  ECallbackSerializer(const ECallbackSerializer& other);
public:
  virtual BOOL GetWriting() const;
public:
  virtual void Close();
public:
  virtual ~ECallbackSerializer() throw();
public:
  ECallbackSerializer(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECannyEdgeDetector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECannyEdgeDetector_;
  
public:
  ECannyEdgeDetector& operator=(const ECannyEdgeDetector& other);
public:
  ECannyEdgeDetector(const ECannyEdgeDetector& other);
public:
  ECannyEdgeDetector();
public:
  virtual ~ECannyEdgeDetector() throw();
public:
  void SetSmoothingScale(float scale);
public:
  float GetSmoothingScale() const;
public:
  void ResetSmoothingScale();
public:
  void SetThresholdingMode(ECannyThresholdingMode mode);
public:
  ECannyThresholdingMode GetThresholdingMode() const;
public:
  void SetLowThreshold(float lowThreshold);
public:
  float GetLowThreshold() const;
public:
  void SetHighThreshold(float highThreshold);
public:
  float GetHighThreshold() const;
public:
  void Apply(const EROIBW8& source, EROIBW8& result);
public:
  ECannyEdgeDetector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EChecker
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EChecker_;
  //TODO: Write manual declarations here
public:
  void Draw(HDC graphicContext, OCV_DRAWING_MODES drawingMode, BOOL handles = FALSE, float zoomX = 1, float zoomY = 0, float panX = 0, float panY = 0)
  {
    Draw(graphicContext, (INS_DRAWING_MODES)drawingMode, handles, zoomX, zoomY, panX, panY);
  }
  void Load(const char* path)
  {
    Load((std::string)path);
  }
  void Save(const char* path)
  {
    Save((std::string)path);
  }

  EImageBW8 m_Low;
  EImageBW8 m_High;
  EImageBW8 m_Registered;
public:
  EChecker& operator=(const EChecker& other);
public:
  EChecker(const EChecker& other);
public:
  EImageBW8* GetLow();
public:
  EImageBW8* GetHigh();
public:
  EImageBW8* GetRegistered();
public:
  EChecker();
public:
  virtual ~EChecker() throw();
public:
  void Attach(EROIBW8* source);
public:
  OEV_UINT32 GetToleranceX();
public:
  OEV_UINT32 GetToleranceY();
public:
  void SetTolerance(OEV_UINT32 toleranceX, OEV_UINT32 toleranceY);
public:
  OEV_UINT32 GetNumAverageSamples();
public:
  OEV_UINT32 GetNumDeviationSamples();
public:
  OCV_NORMALIZATION_MODE GetNormalize();
public:
  void SetNormalize(OCV_NORMALIZATION_MODE eNormalize);
public:
  float GetAverage();
public:
  float GetDeviation();
public:
  OEV_UINT32 GetDegreesOfFreedom();
public:
  void SetDegreesOfFreedom(OEV_UINT32 un32DegreesOfFreedom);
public:
  void Register();
public:
  void Learn(OCV_LEARNING_MODES mode);
public:
  float GetRelativeTolerance();
public:
  void SetRelativeTolerance(float f32RelativeTolerance);
public:
  void EmptyPathNames();
public:
  void AddPathName(const std::string& pathName);
public:
  void BatchLearn(OCV_LEARNING_MODES mode);
public:
  float GetDarkGray();
public:
  void SetDarkGray(float f32DarkGray);
public:
  float GetLightGray();
public:
  void SetLightGray(float f32LightGray);
public:
  void SetZoom(float zoom);
public:
  void SetZoom(float zoomX, float zoomY);
public:
  void SetPan(float panX, float panY);
public:
  float GetZoomX();
public:
  float GetZoomY();
public:
  float GetPanX();
public:
  float GetPanY();
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
public:
  BOOL HitTest(OEV_INT32 x, OEV_INT32 y);
public:
  E_HANDLES GetHitHandle();
public:
  ROI_HIT GetHitRoi();
public:
  void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  void Load(ESerializer* serializer);
public:
  void Save(ESerializer* serializer);
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles);
public:
  void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL handles);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles, float zoomX);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL handles);
public:
  void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  EChecker(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECircleShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircleShape_;
  //TODO: Write manual declarations here
public:
  void SetCenter(float x, float y)
  {
    SetCenterXY(x, y);
  }

  void Set(const EPoint& center, float diam, float angle, float ampl)
  {
    SetCenter(center);
    SetDiameter(diam);
    SetAngle(angle);
    SetAmplitude(ampl);
  }

  void Set(const EPoint& center, float diam, float angle)
  {
    SetCenter(center);
    SetDiameter(diam);
    SetAngle(angle);
  }

public:
  ECircleShape(const ECircleShape& other);
public:
  ECircleShape();
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  void SetAngle(float f32Angle);
public:
  float GetScale() const;
public:
  void SetScale(float f32Scale);
public:
  float GetAmplitude() const;
public:
  void SetAmplitude(float ampl);
public:
  EPoint GetApex() const;
public:
  float GetApexAngle() const;
public:
  float GetArcLength() const;
public:
  EPoint GetCenter() const;
public:
  void SetCenter(const EPoint& center);
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetDiameter() const;
public:
  void SetDiameter(float f32Diameter);
public:
  BOOL GetDirect() const;
public:
  EPoint GetEnd() const;
public:
  float GetEndAngle() const;
public:
  BOOL GetFull() const;
public:
  EPoint GetOrg() const;
public:
  float GetOrgAngle() const;
public:
  EPoint GetPoint(float fraction) const;
public:
  float GetRadius() const;
public:
  void SetRadius(float f32Radius);
public:
  ECircleShape& operator=(const ECircleShape& other);
public:
  ECircleShape* CopyTo(ECircleShape* dest, BOOL bRecursive) const;
public:
  virtual ~ECircleShape() throw();
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  void SetFromCenterAndOrigin(const EPoint& center, const EPoint& origin, BOOL direct);
public:
  void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end, BOOL fullCircle);
public:
  virtual void Set(const ECircle& circle);
public:
  virtual ECircle GetCircle() const;
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL bDaughters);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  void SetFromCenterAndOrigin(const EPoint& center, const EPoint& origin);
public:
  void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  ECircleShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECircleGauge : public ECircleShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircleGauge_;
  //TODO: Write manual declarations here
public:
  virtual void SetActive(BOOL active, BOOL recurs)
  {
    this->EShape::SetActive(active, recurs);
  }

public:
  void SetTolerance(float tolerance);
public:
  float GetTolerance();
public:
  BOOL GetHVConstraint();
public:
  void SetHVConstraint(BOOL bHVConstraint);
public:
  OEV_UINT32 GetThickness();
public:
  void SetThickness(OEV_UINT32 un32Thickness);
public:
  OEV_UINT32 GetSmoothing();
public:
  void SetSmoothing(OEV_UINT32 un32Smoothing);
public:
  void SetTransitionType(GGE_TRANSITION_TYPE eTransitionType);
public:
  GGE_TRANSITION_TYPE GetTransitionType();
public:
  void SetTransitionChoice(GGE_TRANSITION_CHOICE eTransitionChoice);
public:
  GGE_TRANSITION_CHOICE GetTransitionChoice();
public:
  void SetTransitionIndex(OEV_UINT32 un32TransitionIndex);
public:
  OEV_UINT32 GetTransitionIndex();
public:
  void SetThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetMinAmplitude(OEV_UINT32 un32MinAmplitude);
public:
  OEV_UINT32 GetMinAmplitude();
public:
  void SetMinArea(OEV_UINT32 un32MinArea);
public:
  OEV_UINT32 GetMinArea();
public:
  OEV_UINT32 GetNumMeasuredPoints();
public:
  EPeak GetMeasuredPeak(OEV_UINT32 index);
public:
  BOOL GetValid();
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  float GetFilteringThreshold();
public:
  void SetFilteringThreshold(float f32FilteringThreshold);
public:
  OEV_UINT32 GetNumFilteringPasses();
public:
  void SetNumFilteringPasses(OEV_UINT32 un32NumFilteringPasses);
public:
  OEV_UINT32 GetNumValidSamples();
public:
  float GetAverageDistance();
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2, OEV_INT32 side3);
public:
  void GetMinNumFitSamples(OEV_INT32& side0, OEV_INT32& side1, OEV_INT32& side2, OEV_INT32& side3);
public:
  OEV_UINT32 AddSkipRange(const OEV_UINT32 start, const OEV_UINT32 end);
public:
  OEV_UINT32 GetNumSkipRanges() const;
public:
  void GetSkipRange(const OEV_UINT32 index, OEV_UINT32& start, OEV_UINT32& end) const;
public:
  void RemoveSkipRange(const OEV_UINT32 index);
public:
  void RemoveAllSkipRanges();
public:
  ECircleGauge();
public:
  ECircleGauge(const ECircleGauge& other);
public:
  virtual ~ECircleGauge() throw();
public:
  ECircleGauge* CopyTo(ECircleGauge* other, BOOL recursive) const;
public:
  ECircleGauge& operator=(const ECircleGauge& other);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  ECircle GetShape();
public:
  virtual void SetCircle(const ECircle& circle);
public:
  virtual void SetActive(BOOL active);
public:
  void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
public:
  BOOL GetRectangularSamplingArea();
public:
  float GetInnerFilteringThreshold();
public:
  void SetInnerFilteringThreshold(float f32InnerFilteringThreshold);
public:
  void DisableInnerFiltering();
public:
  BOOL GetInnerFilteringEnabled();
public:
  float GetSamplingStep();
public:
  void SetSamplingStep(float f32SamplingStep);
public:
  OEV_UINT32 GetNumSamples() const;
public:
  virtual void Process(EROIBW8* sourceImage, BOOL daughters);
public:
  void Measure(EROIBW8* sourceImage);
public:
  void MeasureWithoutFitting(EROIBW8* sourceImage);
public:
  void MeasureSample(EROIBW8* sourceImage, OEV_UINT32 pathIndex);
public:
  ECircle GetMeasuredCircle();
public:
  EPoint GetMeasuredPoint(OEV_UINT32 index);
public:
  BOOL GetSample(EPoint& pt, OEV_UINT32 index);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  EPeak GetMeasuredPeak();
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
public:
  void SetMinNumFitSamples(OEV_INT32 side0);
public:
  virtual void Process(EROIBW8* sourceImage);
public:
  EPoint GetMeasuredPoint();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  ECircleGauge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQuadrangle
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQuadrangle_;
  
public:
  EQuadrangle& operator=(const EQuadrangle& other);
public:
  EQuadrangle(const EQuadrangle& other);
public:
  EQuadrangle();
public:
  EPoint GetPoint(OEV_UINT32 index) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
public:
  virtual ~EQuadrangle() throw();
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX) const;
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX) const;
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, float zoomX) const;
public:
  void Draw(HDC graphicContext) const;
public:
  EQuadrangle(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ERotatedBoundingBox
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ERotatedBoundingBox_;
  
public:
  ERotatedBoundingBox(float centerX, float centerY, float width, float height, float angle);
public:
  ERotatedBoundingBox();
public:
  ERotatedBoundingBox(const ERotatedBoundingBox& other);
public:
  ERotatedBoundingBox& operator=(const ERotatedBoundingBox& other);
public:
  virtual ~ERotatedBoundingBox() throw();
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  EPoint GetCenter() const;
public:
  float GetWidth() const;
public:
  float GetHeight() const;
public:
  float GetAngle() const;
public:
  EQuadrangle GetQuadrangle();
public:
  ERotatedBoundingBox LocalToGlobalBox(const ERotatedBoundingBox& localBox) const;
public:
  EPoint LocalToGlobalPoint(const EPoint& localPoint) const;
public:
  void Translate(float offsetX, float offsetY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  ERotatedBoundingBox(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EPathVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPathVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EPath element);
public:
  EPath& operator[](OEV_UINT32 index) const;
public:
  EPath GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EPath value);
public:
  EPathVector();
public:
  EPathVector(OEV_UINT32 maxNumberOfElements);
public:
  EPathVector(const EPathVector& other);
public:
  EPathVector& operator=(const EPathVector& other);
public:
  virtual ~EPathVector() throw();
public:
  BOOL GetClosed();
public:
  void SetClosed(BOOL bClosed);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  EPathVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EObjectRunsIterator
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EObjectRunsIterator_;
  
public:
  EObjectRunsIterator();
public:
  EObjectRunsIterator(const ECodedElement& codedElement);
public:
  EObjectRunsIterator(const EObjectRunsIterator& other);
public:
  EObjectRunsIterator& operator=(const EObjectRunsIterator& other);
public:
  void First();
public:
  bool IsDone() const;
public:
  void Next();
public:
  int GetY() const;
public:
  int GetStartX() const;
public:
  int GetEndX() const;
public:
  OEV_UINT32 GetLength() const;
public:
  virtual ~EObjectRunsIterator() throw();
public:
  EObjectRunsIterator(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECodedElement
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedElement_;
  
public:
  ECodedElement(const ECodedElement& other);
public:
  ECodedElement& operator=(const ECodedElement& other);
public:
  ECodedElement();
public:
  const EObjectRunsIterator& GetRunsIterator() const;
public:
  bool IsHole() const;
public:
  bool IsObject() const;
public:
  bool IsCodedElement() const;
public:
  OEV_UINT32 GetElementIndex() const;
public:
  OEV_UINT32 GetLayerIndex() const;
public:
  OEV_UINT32 GetRunCount();
public:
  OEV_UINT32 GetArea();
public:
  OEV_UINT32 GetLargestRun();
public:
  float GetGravityCenterX();
public:
  float GetGravityCenterY();
public:
  EPoint GetGravityCenter();
public:
  int GetLeftLimit();
public:
  int GetTopLimit();
public:
  int GetRightLimit();
public:
  int GetBottomLimit();
public:
  float GetBoundingBoxCenterX();
public:
  float GetBoundingBoxCenterY();
public:
  EPoint GetBoundingBoxCenter();
public:
  float GetBoundingBoxWidth();
public:
  float GetBoundingBoxHeight();
public:
  double GetMoment(OEV_UINT32 p, OEV_UINT32 q);
public:
  float GetNormalizedCentralMoment(OEV_UINT32 p, OEV_UINT32 q);
public:
  float GetCentralMoment(OEV_UINT32 p, OEV_UINT32 q);
public:
  float GetEllipseWidth();
public:
  float GetEllipseHeight();
public:
  float GetEllipseAngle();
public:
  float GetEccentricity();
public:
  float GetFeretBox22CenterX();
public:
  float GetFeretBox22CenterY();
public:
  EPoint GetFeretBox22Center();
public:
  float GetFeretBox22Width();
public:
  float GetFeretBox22Height();
public:
  float GetFeretBox45CenterX();
public:
  float GetFeretBox45CenterY();
public:
  EPoint GetFeretBox45Center();
public:
  float GetFeretBox45Width();
public:
  float GetFeretBox45Height();
public:
  float GetFeretBox68CenterX();
public:
  float GetFeretBox68CenterY();
public:
  EPoint GetFeretBox68Center();
public:
  float GetFeretBox68Width();
public:
  float GetFeretBox68Height();
public:
  float GetMinimumEnclosingRectangleCenterX();
public:
  float GetMinimumEnclosingRectangleCenterY();
public:
  EPoint GetMinimumEnclosingRectangleCenter();
public:
  float GetMinimumEnclosingRectangleWidth();
public:
  float GetMinimumEnclosingRectangleHeight();
public:
  float GetMinimumEnclosingRectangleAngle();
public:
  ERotatedBoundingBox GetMinimumEnclosingRectangle();
public:
  ERotatedBoundingBox GetBoundingBox();
public:
  ERotatedBoundingBox GetFeretBox22Box();
public:
  ERotatedBoundingBox GetFeretBox45Box();
public:
  ERotatedBoundingBox GetFeretBox68Box();
public:
  ERotatedBoundingBox ComputeFeretBox(float angle) const;
public:
  float GetSigmaX();
public:
  float GetSigmaY();
public:
  float GetSigmaXY();
public:
  float GetSigmaXX();
public:
  float GetSigmaYY();
public:
  int GetContourX();
public:
  int GetContourY();
public:
  EPoint GetContour();
public:
  void ComputeConvexHull(EPathVector& result);
public:
  EBW8 ComputePixelMin(const EROIBW8& image) const;
public:
  EBW8 ComputePixelMax(const EROIBW8& image) const;
public:
  float ComputePixelGrayAverage(const EROIBW8& image);
public:
  float ComputePixelGrayDeviation(const EROIBW8& image);
public:
  double ComputePixelGrayVariance(const EROIBW8& image);
public:
  EPoint ComputeWeightedGravityCenter(const EROIBW8& image) const;
public:
  void RenderMask(EROIBW8& destination, int offsetX, int offsetY) const;
public:
  void RenderMask(EROIBW8& destination) const;
public:
  EHole& AsHole();
public:
  EObject& AsObject();
public:
  virtual ~ECodedElement() throw();
public:
  ECodedElement(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EObject : public ECodedElement
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EObject_;
  
public:
  EObject(const EObject& other);
public:
  EObject& operator=(const EObject& other);
public:
  EObject();
public:
  virtual ~EObject() throw();
public:
  OEV_UINT32 GetHoleCount();
public:
  EHole& GetHole(OEV_UINT32 index);
public:
  EObject(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EHole : public ECodedElement
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EHole_;
  
public:
  EHole(const EHole& other);
public:
  EHole& operator=(const EHole& other);
public:
  EHole();
public:
  OEV_UINT32 GetParentObjectIndex() const;
public:
  virtual ~EHole() throw();
public:
  EHole(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECodedImage
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedImage_;
  //TODO: Write manual declarations here
public:
  INT16 GetObjectFeature(OBJECT_FEATURES feature, EListItem* objectNumber, signed char& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, signed short& result)
  {
    Internal_GetObjectFeature(feature, object_, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, signed int& result)
  {
    Internal_GetObjectFeature(feature, object_, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, float& result)
  {
    Internal_GetObjectFeature(feature, object_, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, double& result)
  {
    Internal_GetObjectFeature(feature, object_, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(signed int feature, signed int objectNumber, signed char& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(signed int feature, signed int objectNumber, signed short& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(signed int feature, signed int objectNumber, signed int& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(signed int feature, signed int objectNumber, float& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(signed int feature, signed int objectNumber, double& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(EListItem* feature, signed int objectNumber, signed char& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(EListItem* feature, signed int objectNumber, signed short& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(EListItem* feature, signed int objectNumber, signed int& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(EListItem* feature, signed int objectNumber, float& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  INT16 GetObjectFeature(EListItem* feature, signed int objectNumber, double& result)
  {
    Internal_GetObjectFeature(feature, objectNumber, result);
    return (INT16)EGetError();
  }
  EObjectData* GetObjDataPtr(EListItem* currentFeature);
  ERunData* GetRunDataPtr(EListItem* currentFeature);

public:
  ECodedImage& operator=(const ECodedImage& other);
public:
  ECodedImage(const ECodedImage& other);
public:
  ECodedImage();
public:
  virtual ~ECodedImage() throw();
public:
  void SetWhiteClass(OEV_INT16 n16WhiteClass);
public:
  void SetNeutralClass(OEV_INT16 n16NeutralClass);
public:
  void SetBlackClass(OEV_INT16 n16BlackClass);
public:
  void SetThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetThresholdImage(EROIBW8* pImage);
public:
  void SetLowThreshold(OEV_UINT32 un32LowThreshold);
public:
  OEV_UINT32 GetLowThreshold();
public:
  void SetLowImage(EROIBW8* pImage);
public:
  EROIBW8* GetLowImage();
public:
  void SetHighThreshold(OEV_UINT32 un32HighThreshold);
public:
  OEV_UINT32 GetHighThreshold();
public:
  void SetHighImage(EROIBW8* pImage);
public:
  EROIBW8* GetHighImage();
public:
  void SetLowColorThreshold(EC24 c24LowThreshold);
public:
  EC24 GetLowColorThreshold();
public:
  void SetHighColorThreshold(EC24 c24HighThreshold);
public:
  EC24 GetHighColorThreshold();
public:
  void ResetContinuousMode();
public:
  void SetContinuous(BOOL bContinuous);
public:
  OEV_INT16 GetWhiteClass();
public:
  OEV_INT16 GetNeutralClass();
public:
  OEV_INT16 GetBlackClass();
public:
  CONNEXITY GetConnexity();
public:
  void SetConnexity(CONNEXITY eConnexity);
public:
  OEV_UINT32 GetTrueThreshold();
public:
  BOOL GetContinuous();
public:
  void BuildRuns(EROIBW1* sourceImage);
public:
  void BuildRuns(EROIBW8* sourceImage);
public:
  void BuildRuns(EROIC24* sourceImage);
public:
  void BuildLabeledRuns(EROIBW8* sourceImage);
public:
  void BuildLabeledRuns(EROIBW16* sourceImage);
public:
  void BuildObjects(EROIBW1* sourceImage);
public:
  void BuildObjects(EROIBW8* sourceImage);
public:
  void BuildObjects(EROIC24* sourceImage);
public:
  void BuildObjects();
public:
  void BuildLabeledObjects(EROIBW8* sourceImage);
public:
  void BuildLabeledObjects(EROIBW16* sourceImage);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5, OBJECT_FEATURES feature6, OBJECT_FEATURES feature7, OBJECT_FEATURES feature8, OBJECT_FEATURES feature9, OBJECT_FEATURES feature10);
public:
  void FeatureMinimum(OBJECT_FEATURES feature, float& minimum);
public:
  void FeatureMaximum(OBJECT_FEATURES feature, float& maximum);
public:
  void FeatureAverage(OBJECT_FEATURES feature, float& average);
public:
  void FeatureVariance(OBJECT_FEATURES feature, float& average, float& variance);
public:
  void FeatureDeviation(OBJECT_FEATURES feature, float& average, float& deviation);
public:
  void ObjectConvexHull(EListItem* object_, EPathVector* destinationVector);
public:
  void SetLimitAngle(float f32Angle);
public:
  float GetLimitAngle();
public:
  void SelectObjectsUsingFeature(OBJECT_FEATURES feature, OEV_INT8 minimum, OEV_INT8 maximum, SELECT_OPTIONS operation);
public:
  void SelectObjectsUsingFeature(OBJECT_FEATURES feature, OEV_INT16 minimum, OEV_INT16 maximum, SELECT_OPTIONS operation);
public:
  void SelectObjectsUsingFeature(OBJECT_FEATURES feature, OEV_INT32 minimum, OEV_INT32 maximum, SELECT_OPTIONS operation);
public:
  void SelectObjectsUsingFeature(OBJECT_FEATURES feature, float minimum, float maximum, SELECT_OPTIONS operation);
public:
  void SelectObjectsUsingFeature(OBJECT_FEATURES feature, double minimum, double maximum, SELECT_OPTIONS operation);
public:
  void SelectObjectsUsingPosition(EGenericROI* roi, SELECT_BY_POSITION operation);
public:
  void SelectObjectsUsingPosition(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, SELECT_BY_POSITION operation);
public:
  void SortObjectsUsingFeature(OBJECT_FEATURES feature, SORT_OPTIONS Operation);
public:
  void RemoveRun(OEV_INT32 position);
public:
  void RemoveRun(EListItem* listItem);
public:
  void RemoveAllRuns();
public:
  void GetFirstRunData(ERunData* run);
public:
  void GetLastRunData(ERunData* run);
public:
  void GetCurrentRunData(ERunData* run);
public:
  void GetRunData(ERunData* run, OEV_INT32 position);
public:
  void GetRunData(ERunData* run, EListItem* listItem);
public:
  EListItem* GetPreviousRunPtr(EListItem* listItem);
public:
  EListItem* GetNextRunPtr(EListItem* listItem);
public:
  EListItem* GetFirstRunPtr();
public:
  EListItem* GetLastRunPtr();
public:
  EListItem* GetCurrentRunPtr();
public:
  EListItem* GetRunPtr(OEV_INT32 position);
public:
  EListItem* GetRunPtrByCoordinates(OEV_INT32 x, OEV_INT32 y);
public:
  BOOL GetRunDataPtr(EListItem* currentFeature, ERunData* runData);
public:
  void GetPreviousRunData(ERunData* run, EListItem* listItem);
public:
  void GetPreviousRunData(ERunData* run);
public:
  void GetNextRunData(ERunData* run);
public:
  void GetNextRunData(ERunData* run, EListItem* listItem);
public:
  OEV_INT32 GetNumRuns();
public:
  OEV_UINT32 GetMaxObjects();
public:
  void SetMaxObjects(OEV_UINT32 un32MaxObjects);
public:
  void RemoveObject(OEV_INT32 objectNumber);
public:
  void RemoveObject(EListItem* listItem);
public:
  void RemoveAllObjects();
public:
  void GetPreviousObjData(EObjectData* object_);
public:
  void GetNextObjData(EObjectData* object_);
public:
  void GetFirstObjData(EObjectData* object_);
public:
  void GetLastObjData(EObjectData* object_);
public:
  void GetCurrentObjData(EObjectData* objectData);
public:
  void GetObjectData(EObjectData* object_, OEV_INT32 objectNumber);
public:
  void GetObjectData(EObjectData* object_, EListItem* listItem);
public:
  OEV_INT32 GetNumObjects();
public:
  void AddRunToObj(EListItem* pObjectToAddTo);
public:
  OEV_INT32 GetNumObjectRuns(OEV_INT32 objectNumber);
public:
  OEV_INT32 GetNumObjectRuns(EListItem* listItem);
public:
  void SetFirstRunPtr(EListItem* firstRun, OEV_INT32 objectNumber);
public:
  void SetFirstRunPtr(EListItem* firstRun, EListItem* currentObject);
public:
  void SetLastRunPtr(EListItem* lastRun, OEV_INT32 objectNumber);
public:
  void SetLastRunPtr(EListItem* lastRun, EListItem* currentObject);
public:
  void DetachRunsFromObj(EListItem* pCurrentObject);
public:
  EListItem* GetObjPtrByNum(OEV_INT32 n32ObjNum);
public:
  EListItem* GetPreviousObjPtr(EListItem* listItem);
public:
  EListItem* GetNextObjPtr(EListItem* listItem);
public:
  EListItem* GetFirstObjPtr();
public:
  EListItem* GetLastObjPtr();
public:
  EListItem* GetCurrentObjPtr();
public:
  EListItem* GetObjPtr(OEV_INT32 objectNumber);
public:
  EListItem* GetObjPtrByCoordinates(OEV_INT32 x, OEV_INT32 y);
public:
  EListItem* GetObjFirstRunPtr(OEV_INT32 objectNumber);
public:
  EListItem* GetObjFirstRunPtr(EListItem* listItem);
public:
  EListItem* GetObjLastRunPtr(OEV_INT32 objectNumber);
public:
  EListItem* GetObjLastRunPtr(EListItem* objectNumber);
public:
  BOOL GetObjDataPtr(EListItem* currentFeature, EObjectData* objectData);
public:
  OEV_INT32 GetNumSelectedObjects();
public:
  void SetNumSelectedObjects(OEV_INT32 n32Nb_Selected_Objects);
public:
  void SelectObject(OEV_INT32 objectNumber);
public:
  void SelectObject(EListItem* listItem);
public:
  void UnselectObject(OEV_INT32 objectNumber);
public:
  void UnselectObject(EListItem* listItem);
public:
  void IsObjectSelected(OEV_INT32 objectNumber, BOOL& selected);
public:
  void IsObjectSelected(EListItem* listItem, BOOL& selected);
public:
  EListItem* GetObjPtrByPos(OEV_INT32 position);
public:
  void SelectAllObjects();
public:
  void UnselectAllObjects();
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjects(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, EListItem* objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
public:
  BOOL GetDrawDiagonals();
public:
  void SetDrawDiagonals(BOOL bDrawDiagonals);
public:
  void AddFeat(EFeatureData* feature, OEV_INT32 numberOfObjects);
public:
  void SetFeatInfo(EFeatureData* feature, OBJECT_FEATURES featureCode);
public:
  void BlankFeatures();
public:
  void RemoveAllFeats();
public:
  OEV_INT32 GetNumFeatures();
public:
  EListItem* GetFeatPtrByNum(OEV_INT32 numFeat);
public:
  BOOL GetFeatData(EListItem* currentFeature, EFeatureData* featureData);
public:
  OEV_INT32 GetFeatSize(OEV_INT32 position);
public:
  OEV_INT32 GetFeatSize(EListItem* currentFeature);
public:
  OEV_INT32 GetFeatNum(OEV_INT32 position);
public:
  OEV_INT32 GetFeatNum(EListItem* currentFeature);
public:
  DATA_SIZE GetFeatDataSize(OEV_INT32 position);
public:
  DATA_SIZE GetFeatDataSize(EListItem* currentFeature);
public:
  DATA_TYPE GetFeatDataType(OEV_INT32 position);
public:
  DATA_TYPE GetFeatDataType(EListItem* currentFeature);
public:
  void Internal_GetObjectFeature(OBJECT_FEATURES feature, EListItem* objectNumber, OEV_INT8& result);
public:
  void Internal_GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, OEV_INT16& result);
public:
  void Internal_GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, OEV_INT32& result);
public:
  void Internal_GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, float& result);
public:
  void Internal_GetObjectFeature(OBJECT_FEATURES feature, EListItem* object_, double& result);
public:
  void Internal_GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT8& result);
public:
  void Internal_GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT16& result);
public:
  void Internal_GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT32& result);
public:
  void Internal_GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, float& result);
public:
  void Internal_GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, double& result);
public:
  void Internal_GetObjectFeature(EListItem* feature, OEV_INT32 objectNumber, OEV_INT8& result);
public:
  void Internal_GetObjectFeature(EListItem* feature, OEV_INT32 objectNumber, OEV_INT16& result);
public:
  void Internal_GetObjectFeature(EListItem* feature, OEV_INT32 objectNumber, OEV_INT32& result);
public:
  void Internal_GetObjectFeature(EListItem* feature, OEV_INT32 objectNumber, float& result);
public:
  void Internal_GetObjectFeature(EListItem* feature, OEV_INT32 objectNumber, double& result);
public:
  void BuildHoles();
public:
  void BuildHoles(EListItem* object_);
public:
  void RemoveHoles(EListItem* object_);
public:
  void SelectHoles(EListItem* parentObject);
public:
  void UnselectHoles(EListItem* parentObject);
public:
  EListItem* GetFirstHole(EListItem* parentObject);
public:
  EListItem* GetNextHole(EListItem* hole);
public:
  EListItem* GetHoleParentObject(EListItem* hole);
public:
  BOOL IsHole(EListItem* object_);
public:
  OEV_INT32 GetNumHoles(EListItem* object_);
public:
  OEV_INT32 GetNumHoleRuns();
public:
  void SetThreshold();
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5, OBJECT_FEATURES feature6, OBJECT_FEATURES feature7, OBJECT_FEATURES feature8, OBJECT_FEATURES feature9);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5, OBJECT_FEATURES feature6, OBJECT_FEATURES feature7, OBJECT_FEATURES feature8);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5, OBJECT_FEATURES feature6, OBJECT_FEATURES feature7);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5, OBJECT_FEATURES feature6);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4, OBJECT_FEATURES feature5);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3, OBJECT_FEATURES feature4);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2, OBJECT_FEATURES feature3);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1, OBJECT_FEATURES feature2);
public:
  void AnalyseObjects(OBJECT_FEATURES feature1);
public:
  void AnalyseObjects();
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawObjects(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjects(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjects(HDC graphicContext, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjects(HDC graphicContext, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjects(HDC graphicContext);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, OEV_INT32 objectNumber);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, EListItem* object_, float zoomX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, EListItem* object_);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_INT32 objectNumber);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EListItem* object_, float zoomX);
public:
  void DrawObjectWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EListItem* object_);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, OEV_INT32 objectNumber);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, EListItem* object_, float zoomX);
public:
  void DrawObjectWithPredefinedPen(EDrawAdapter* graphicContext, EListItem* object_);
public:
  void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObject(HDC graphicContext, OEV_INT32 objectNumber);
public:
  void DrawObject(HDC graphicContext, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, EListItem* object_, float zoomX);
public:
  void DrawObject(HDC graphicContext, EListItem* object_);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY, float panX);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX, float zoomY);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag, float zoomX);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature, E_SELECTION_MODE selectionFlag);
public:
  void DrawObjectsFeature(HDC graphicContext, OBJECT_FEATURES feature);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, OBJECT_FEATURES feature, EListItem* object_);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, EListItem* object_, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, EListItem* object_);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OBJECT_FEATURES feature, OEV_INT32 objectNumber);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, EListItem* object_, float zoomX);
public:
  void DrawObjectFeatureWithPredefinedPen(EDrawAdapter* graphicContext, OBJECT_FEATURES feature, EListItem* object_);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, EListItem* objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, EListItem* objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, EListItem* objectNumber, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, EListItem* objectNumber);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, OBJECT_FEATURES feature, OEV_INT32 objectNumber);
public:
  void RemoveHoles();
public:
  void SelectHoles();
public:
  void UnselectHoles();
public:
  OEV_INT32 GetNumHoles();
public:
  ECodedImage(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EObjectSelection
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EObjectSelection_;
  
public:
  EObjectSelection& operator=(const EObjectSelection& other);
public:
  EObjectSelection(const EObjectSelection& other);
public:
  EObjectSelection();
public:
  void Clear();
public:
  void Add(ECodedElement& element);
public:
  void Remove(ECodedElement& element);
public:
  OEV_UINT32 GetElementCount();
public:
  ECodedElement& GetElement(OEV_UINT32 index);
public:
  OEV_UINT32 GetIndexOfElement(const ECodedElement& element);
public:
  void AddObjects(ECodedImage2& image);
public:
  void ClearFeatureCache();
public:
  void SetAttachedImage(const EROIBW8* image);
public:
  const EROIBW8* GetAttachedImage() const;
public:
  void SetFeretAngle(float angle);
public:
  float GetFeretAngle();
public:
  bool IsSelected(ECodedElement& element);
public:
  bool IsSelected(ECodedImage2& codedImage, OEV_UINT32 objectIndex);
public:
  bool IsSelected(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  bool IsSelected(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void AddLayer(ECodedImage2& codedImage, OEV_UINT32 layerIndex);
public:
  void AddLayer(ECodedImage2& codedImage);
public:
  void RemoveLayer(ECodedImage2& codedImage);
public:
  void RemoveLayer(ECodedImage2& codedImage, OEV_UINT32 layerIndex);
public:
  void AddObject(ECodedImage2& codedImage, OEV_UINT32 objectIndex);
public:
  void AddObject(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void RemoveObject(ECodedImage2& codedImage, OEV_UINT32 objectIndex);
public:
  void RemoveObject(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void AddHole(ECodedImage2& codedImage, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void AddHole(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void RemoveHole(ECodedImage2& codedImage, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void RemoveHole(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void AddHolesOfSelectedObjects();
public:
  void AddHoles(ECodedImage2& codedImage);
public:
  void AddHoles(ECodedImage2& codedImage, OEV_UINT32 layerIndex);
public:
  void AddHoles(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void RemoveSelectedHoles();
public:
  void RemoveHoles(ECodedImage2& codedImage);
public:
  void RemoveHoles(ECodedImage2& codedImage, OEV_UINT32 layerIndex);
public:
  void RemoveHoles(ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void AddObjectUsingPosition(ECodedImage2& codedImage, int x, int y);
public:
  void RemoveObjectUsingPosition(ECodedImage2& codedImage, int x, int y);
public:
  void AddObjectsUsingRectangle(ECodedImage2& codedImage, int x, int y, OEV_UINT32 width, OEV_UINT32 height, ERectangleMode mode);
public:
  void AddObjectsUsingRectangle(ECodedImage2& codedImage, OEV_UINT32 layerIndex, int x, int y, OEV_UINT32 width, OEV_UINT32 height, ERectangleMode mode);
public:
  void RemoveObjectsUsingRectangle(ECodedImage2& codedImage, int x, int y, OEV_UINT32 width, OEV_UINT32 height, ERectangleMode mode);
public:
  void RemoveObjectsUsingRectangle(ECodedImage2& codedImage, OEV_UINT32 layerIndex, int x, int y, OEV_UINT32 width, OEV_UINT32 height, ERectangleMode mode);
public:
  void RenderMask(EROIBW8& result, int offsetX, int offsetY);
public:
  void RenderMask(EROIBW8& result);
public:
  void AddObjectsUsingUnsignedIntegerFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, OEV_UINT32 threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingUnsignedIntegerFeature(ECodedImage2& codedImage, EFeature feature, OEV_UINT32 threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingUnsignedIntegerFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, OEV_UINT32 lowBound, OEV_UINT32 highBound, EDoubleThresholdMode mode);
public:
  void AddObjectsUsingUnsignedIntegerFeature(ECodedImage2& codedImage, EFeature feature, OEV_UINT32 lowBound, OEV_UINT32 highBound, EDoubleThresholdMode mode);
public:
  void AddObjectsUsingIntegerFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, int threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingIntegerFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, int lowBound, int highBound, EDoubleThresholdMode mode);
public:
  void AddObjectsUsingIntegerFeature(ECodedImage2& codedImage, EFeature feature, int threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingIntegerFeature(ECodedImage2& codedImage, EFeature feature, int lowBound, int highBound, EDoubleThresholdMode mode);
public:
  void AddObjectsUsingFloatFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, float threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingFloatFeature(ECodedImage2& codedImage, OEV_UINT32 layerIndex, EFeature feature, float lowBound, float highBound, EDoubleThresholdMode mode);
public:
  void AddObjectsUsingFloatFeature(ECodedImage2& codedImage, EFeature feature, float threshold, ESingleThresholdMode mode);
public:
  void AddObjectsUsingFloatFeature(ECodedImage2& codedImage, EFeature feature, float lowBound, float highBound, EDoubleThresholdMode mode);
public:
  void RemoveUsingUnsignedIntegerFeature(EFeature feature, OEV_UINT32 threshold, ESingleThresholdMode mode);
public:
  void RemoveUsingUnsignedIntegerFeature(EFeature feature, OEV_UINT32 low, OEV_UINT32 high, EDoubleThresholdMode mode);
public:
  void RemoveUsingIntegerFeature(EFeature feature, int threshold, ESingleThresholdMode mode);
public:
  void RemoveUsingIntegerFeature(EFeature feature, int low, int high, EDoubleThresholdMode mode);
public:
  void RemoveUsingFloatFeature(EFeature feature, float threshold, ESingleThresholdMode mode);
public:
  void RemoveUsingFloatFeature(EFeature feature, float low, float high, EDoubleThresholdMode mode);
public:
  OEV_UINT32 GetUnsignedIntegerFeature(OEV_UINT32 index, EFeature feature);
public:
  int GetIntegerFeature(OEV_UINT32 index, EFeature feature);
public:
  float GetFloatFeature(OEV_UINT32 index, EFeature feature);
public:
  void Sort(EFeature feature);
public:
  void Sort(EFeature feature, ESortDirection direction);
public:
  float FeatureAverage(EFeature feature);
public:
  float FeatureDeviation(EFeature feature);
public:
  float FeatureVariance(EFeature feature);
public:
  OEV_UINT32 UnsignedIntegerFeatureMinimum(EFeature feature);
public:
  int IntegerFeatureMinimum(EFeature feature);
public:
  float FloatFeatureMinimum(EFeature feature);
public:
  OEV_UINT32 UnsignedIntegerFeatureMaximum(EFeature feature);
public:
  int IntegerFeatureMaximum(EFeature feature);
public:
  float FloatFeatureMaximum(EFeature feature);
public:
  virtual ~EObjectSelection() throw();
public:
  EObjectSelection(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ECodedImage2
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedImage2_;
  
public:
  ECodedImage2(const ECodedImage2& other);
public:
  ECodedImage2& operator=(const ECodedImage2& other);
public:
  ECodedImage2();
public:
  virtual ~ECodedImage2() throw();
public:
  OEV_UINT32 GetLayerCount() const;
public:
  OEV_UINT32 GetObjCount(OEV_UINT32 layerIndex) const;
public:
  OEV_UINT32 GetObjCount() const;
public:
  EObject& GetObj(OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  const EObject& GetObj(OEV_UINT32 layerIndex, OEV_UINT32 objectIndex) const;
public:
  EObject& GetObj(OEV_UINT32 objectIndex);
public:
  const EObject& GetObj(OEV_UINT32 objectIndex) const;
public:
  int GetStartY() const;
public:
  OEV_UINT32 GetWidth() const;
public:
  OEV_UINT32 GetHeight() const;
public:
  void ClearFeatureCache();
public:
  EObject& GetParentObject(EHole& hole);
public:
  EObject* FindObject(int x, int y);
public:
  EObject* FindObject(OEV_UINT32 layerIndex, int x, int y);
public:
  void RenderMask(EROIBW8& result);
public:
  void RenderMask(EROIBW8& result, OEV_UINT32 layerIndex, int offsetX, int offsetY);
public:
  void RenderMask(EROIBW8& result, OEV_UINT32 layerIndex);
public:
  void RenderMask(EROIBW8& result, int offsetX, int offsetY);
public:
  void Draw(EDrawAdapter* graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
public:
  void Draw(EDrawAdapter* graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void Draw(EDrawAdapter* graphicContext, ECodedElement& element, float zoomX, float zoomY);
public:
  void Draw(EDrawAdapter* graphicContext, ECodedElement& element, float zoomX);
public:
  void Draw(EDrawAdapter* graphicContext, ECodedElement& element);
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX);
public:
  void Draw(EDrawAdapter* graphicContext);
public:
  void Draw(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void Draw(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX);
public:
  void Draw(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, float zoomX);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void Draw(EDrawAdapter* graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void Draw(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, ECodedElement& element, float zoomX);
public:
  void Draw(HDC graphicContext, ECodedElement& element);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, ECodedElement& element, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, ECodedElement& element, float zoomX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, ECodedElement& element);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, float zoomX);
public:
  void Draw(HDC graphicContext);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX);
public:
  void Draw(HDC graphicContext, OEV_UINT32 layerIndex);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, float zoomX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, float zoomX);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, float zoomX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void Draw(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawWithCurrentPen(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void DrawWithCurrentPen(HDC graphicContext, ECodedElement& element, float zoomX, float zoomY);
public:
  void DrawWithCurrentPen(HDC graphicContext, ECodedElement& element, float zoomX);
public:
  void DrawWithCurrentPen(HDC graphicContext, ECodedElement& element);
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX);
public:
  void DrawWithCurrentPen(HDC graphicContext);
public:
  void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX);
public:
  void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, float zoomX);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void DrawWithCurrentPen(HDC graphicContext, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, float zoomX, float zoomY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, float zoomX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, ECodedElement& element);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX);
public:
  void DrawFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, EObjectSelection& selection);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, float zoomX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, float zoomX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, ECodedElement& element);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element, float zoomX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, ECodedElement& element);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, float zoomX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void DrawFeature(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void DrawFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY, float panX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX, float zoomY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element, float zoomX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, ECodedElement& element);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY, float panX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX, float zoomY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, float zoomX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, EObjectSelection& selection, OEV_UINT32 elementIndex);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY, float panX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, float zoomX, float zoomY);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, float zoomX);
public:
  void DrawFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObject(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHole(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
public:
  void DrawObjectFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(EDrawAdapter* graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeature(HDC graphicContext, const Euresys::Color::RGBColor& color, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
public:
  void DrawHoleFeatureWithCurrentPen(HDC graphicContext, EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
public:
  ECodedImage2(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EColorLookup
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorLookup_;
  //TODO: Write manual declarations here
public:
  void SetTransform(void (OEV_CDECL *Transform)(EColor SrcColor, EColor& DstColor), enum E_COLOR_SYSTEM eSystemIn= E_COLOR_SYSTEM_RGB, enum E_COLOR_SYSTEM eSystemOut= E_COLOR_SYSTEM_RGB)
  {
    Euresys::eVision::Internal::StringLegacyConvertion::EColorLookup_SetTransform(this->wrappedFunctions_EColorLookup_.GetImpl(), reinterpret_cast<void*>(Transform), eSystemIn, eSystemOut);
  }


public:
  EColorLookup& operator=(const EColorLookup& other);
public:
  EColorLookup(const EColorLookup& other);
public:
  EColorLookup();
public:
  virtual ~EColorLookup() throw();
public:
  void SetInterpolation(BOOL bInterpolation);
public:
  BOOL GetInterpolation();
public:
  void SetIndexBits(OEV_UINT32 un32IndexBits);
public:
  OEV_UINT32 GetIndexBits();
public:
  E_COLOR_SYSTEM GetColorSystemIn();
public:
  E_COLOR_SYSTEM GetColorSystemOut();
public:
  void WhiteBalance(float gain, float gamma, float balanceRed, float balanceGreen, float balanceBlue);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0, float offset0, float gain1, float offset1, float gain2, float offset2);
public:
  void ConvertToRGB(E_COLOR_SYSTEM colorSystem);
public:
  void ConvertFromRGB(E_COLOR_SYSTEM colorSystem);
public:
  void Calibrate(EC24 Color0, float x0, float y0, float z0, EC24 Color1, float x1, float y1, float z1, EC24 Color2, float x2, float y2, float z2);
public:
  void Calibrate(EC24 Color0, float x0, float y0, float z0, EC24 Color1, float x1, float y1, float z1, EC24 Color2, float x2, float y2, float z2, EC24 Color3, float x3, float y3, float z3);
public:
  void Calibrate(EC24 color, float x, float y, float z);
public:
  void Transform(EC24 sourceImageColor, EC24& destinationImageColor);
public:
  void Transform(EROIC24* sourceImage, EROIC24* destinationImage);
public:
  void WhiteBalance(float gain, float gamma, float balanceRed, float balanceGreen);
public:
  void WhiteBalance(float gain, float gamma, float balanceRed);
public:
  void WhiteBalance(float gain, float gamma);
public:
  void WhiteBalance(float gain);
public:
  void WhiteBalance();
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0, float offset0, float gain1, float offset1, float gain2);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0, float offset0, float gain1, float offset1);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0, float offset0, float gain1);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0, float offset0);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem, float gain0);
public:
  void AdjustGainOffset(E_COLOR_SYSTEM colorSystem);
public:
  EColorLookup(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EColorVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EColor element);
public:
  EColor& operator[](OEV_UINT32 index) const;
public:
  EColor GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EColor value);
public:
  EColorVector();
public:
  EColorVector(OEV_UINT32 un32MaxElements);
public:
  virtual ~EColorVector() throw();
public:
  EColorVector(const EColorVector& other);
public:
  EColorVector& operator=(const EColorVector& other);
public:
  EColorVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EDrawAdapter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EDrawAdapter_;
  
public:
  EDrawAdapter(const EDrawAdapter& other);
public:
  EDrawAdapter& operator=(const EDrawAdapter& other);
public:
  EDrawAdapter();
public:
  virtual ~EDrawAdapter() throw();
public:
  void FilledRectangle(const int orgX, const int orgY, const int width, const int height);
public:
  virtual void FilledRectangle(const int orgX, const int orgY, const int width, const int height, const Euresys::Color::RGBColor& traceColor, const Euresys::Color::RGBColor& fillColor) = 0;
public:
  EDrawAdapter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EFilePointerSerializer : public ESerializer
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EFilePointerSerializer_;
  
public:
  EFilePointerSerializer& operator=(const EFilePointerSerializer& other);
public:
  EFilePointerSerializer(const EFilePointerSerializer& other);
public:
  virtual void Close();
public:
  virtual BOOL GetWriting() const;
public:
  virtual ~EFilePointerSerializer() throw();
public:
  EFilePointerSerializer(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EFileSerializer : public ESerializer
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EFileSerializer_;
  
public:
  EFileSerializer(const EFileSerializer& other);
public:
  EFileSerializer& operator=(const EFileSerializer& other);
public:
  EFileSerializer();
public:
  virtual BOOL GetWriting() const;
public:
  virtual void Close();
public:
  virtual ~EFileSerializer() throw();
public:
  EFileSerializer(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EFrameShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EFrameShape_;
  //TODO: Write manual declarations here
public:
  void SetCenter ( float f32CenterX, float f32CenterY)
  {
    SetCenter( EPoint( f32CenterX, f32CenterY));
  }
public:
  EFrameShape();
public:
  virtual ~EFrameShape() throw();
public:
  EFrameShape(const EFrameShape& frameShape);
public:
  EFrameShape& operator=(const EFrameShape& other);
public:
  EFrameShape* CopyTo(EFrameShape* other, BOOL recursive) const;
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  void SetCenter(const EPoint& point);
public:
  EPoint GetCenter() const;
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  void SetAngle(float angle);
public:
  float GetAngle() const;
public:
  void SetScale(float scale);
public:
  float GetScale() const;
public:
  float GetSizeX();
public:
  float GetSizeY();
public:
  void Set(const EPoint& center, float angle, float scale);
public:
  void SetSize(float sizeX, float sizeY);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL daughter);
public:
  virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax, float f32YMin, float f32YMax, OEV_UINT32 un32NumXIntervals, OEV_UINT32 un32NumYIntervals);
public:
  void Set(const EPoint& center, float angle);
public:
  void Set(const EPoint& center);
public:
  void SetSize(float sizeX);
public:
  virtual BOOL HitTest();
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax, float f32YMin, float f32YMax, OEV_UINT32 un32NumXIntervals);
public:
  void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax, float f32YMin, float f32YMax);
public:
  void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax, float f32YMin);
public:
  void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax);
public:
  void DrawCrossGrid(HDC dc, float f32XMin);
public:
  void DrawCrossGrid(HDC dc);
public:
  EFrameShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIC24 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC24_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EC24* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EC24*>(GetGenericImagePtr(x, y));
  }


public:
  EROIC24();
public:
  virtual ~EROIC24() throw();
public:
  void SetPixel(EC24 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EC24 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIC24* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIC24* GetNextROI(EGenericROI* startROI);
public:
  EROIC24* GetNextSiblingROI();
public:
  EROIC24* GetParent();
public:
  const EROIC24* GetParent() const;
public:
  EC24 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EC24 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageC24* GetTypedTopParent();
public:
  const EImageC24* GetTopParent() const;
public:
  EROIC24(const EROIC24& other);
public:
  EROIC24& operator=(const EROIC24& other);
public:
  EROIC24(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EGDIDrawAdapter : public EDrawAdapter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EGDIDrawAdapter_;
  
public:
  EGDIDrawAdapter(const EGDIDrawAdapter& other);
public:
  EGDIDrawAdapter& operator=(const EGDIDrawAdapter& other);
public:
  EGDIDrawAdapter();
public:
  EGDIDrawAdapter(HDC hDC);
public:
  virtual ~EGDIDrawAdapter() throw();
public:
  virtual void FilledRectangle(const int orgX, const int orgY, const int width, const int height, const Euresys::Color::RGBColor& traceColor, const Euresys::Color::RGBColor& fillColor);
public:
  EGDIDrawAdapter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EHarrisInterestPoints
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EHarrisInterestPoints_;
  
public:
  EHarrisInterestPoints& operator=(const EHarrisInterestPoints& other);
public:
  EHarrisInterestPoints(const EHarrisInterestPoints& other);
public:
  EHarrisInterestPoints();
public:
  OEV_UINT32 GetPointCount() const;
public:
  float GetX(OEV_UINT32 index) const;
public:
  float GetY(OEV_UINT32 index) const;
public:
  EPoint GetPoint(OEV_UINT32 index) const;
public:
  float GetCornerness(OEV_UINT32 index) const;
public:
  float GetGradientX(OEV_UINT32 index) const;
public:
  float GetGradientY(OEV_UINT32 index) const;
public:
  float GetGradientMagnitude(OEV_UINT32 index) const;
public:
  float GetGradientOrientation(OEV_UINT32 index) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY) const;
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX, float originY) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY) const;
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY) const;
public:
  void DrawCorner(HDC graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
public:
  void DrawCorner(HDC graphicContext, const Euresys::Color::RGBColor& color, int index, float zoomX, float zoomY, float originX, float originY) const;
public:
  void DrawCorner(EDrawAdapter* graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
public:
  void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
public:
  virtual ~EHarrisInterestPoints() throw();
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY, float originX) const;
public:
  void Draw(HDC graphicContext, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, float zoomX) const;
public:
  void Draw(HDC graphicContext) const;
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float originX) const;
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY) const;
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX) const;
public:
  void Draw(HDC graphicContext, const Euresys::Color::RGBColor& color) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
public:
  void Draw(EDrawAdapter* graphicContext, float zoomX) const;
public:
  void Draw(EDrawAdapter* graphicContext) const;
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX) const;
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY) const;
public:
  void DrawWithCurrentPen(HDC graphicContext, float zoomX) const;
public:
  void DrawWithCurrentPen(HDC graphicContext) const;
public:
  void DrawCorner(HDC graphicContext, int index, float zoomX, float zoomY, float originX) const;
public:
  void DrawCorner(HDC graphicContext, int index, float zoomX, float zoomY) const;
public:
  void DrawCorner(HDC graphicContext, int index, float zoomX) const;
public:
  void DrawCorner(HDC graphicContext, int index) const;
public:
  void DrawCorner(HDC graphicContext, const Euresys::Color::RGBColor& color, int index, float zoomX, float zoomY, float originX) const;
public:
  void DrawCorner(HDC graphicContext, const Euresys::Color::RGBColor& color, int index, float zoomX, float zoomY) const;
public:
  void DrawCorner(HDC graphicContext, const Euresys::Color::RGBColor& color, int index, float zoomX) const;
public:
  void DrawCorner(HDC graphicContext, const Euresys::Color::RGBColor& color, int index) const;
public:
  void DrawCorner(EDrawAdapter* graphicContext, int index, float zoomX, float zoomY, float originX) const;
public:
  void DrawCorner(EDrawAdapter* graphicContext, int index, float zoomX, float zoomY) const;
public:
  void DrawCorner(EDrawAdapter* graphicContext, int index, float zoomX) const;
public:
  void DrawCorner(EDrawAdapter* graphicContext, int index) const;
public:
  void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY, float originX) const;
public:
  void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY) const;
public:
  void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX) const;
public:
  void DrawCornerWithCurrentPen(HDC graphicContext, int index) const;
public:
  EHarrisInterestPoints(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EHarrisCornerDetector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EHarrisCornerDetector_;
  
public:
  EHarrisCornerDetector& operator=(const EHarrisCornerDetector& other);
public:
  EHarrisCornerDetector(const EHarrisCornerDetector& other);
public:
  EHarrisCornerDetector();
public:
  virtual ~EHarrisCornerDetector() throw();
public:
  void SetIntegrationScale(float integrationScale);
public:
  float GetIntegrationScale() const;
public:
  void SetThreshold(float threshold);
public:
  float GetThreshold() const;
public:
  void SetSubpixelPrecisionEnabled(bool subpixelEnabled);
public:
  bool GetSubpixelPrecisionEnabled() const;
public:
  void SetDerivationScale(float derivationScale);
public:
  float GetDerivationScale() const;
public:
  void SetThresholdingMode(EHarrisThresholdingMode mode);
public:
  EHarrisThresholdingMode GetThresholdingMode() const;
public:
  void SetGradientNormalizationEnabled(bool isEnabled);
public:
  bool GetGradientNormalizationEnabled() const;
public:
  void Apply(const EROIBW8& source, EHarrisInterestPoints& interestPoints);
public:
  EHarrisCornerDetector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIBW1 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW1_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EBW1* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EBW1*>(GetGenericImagePtr(x, y));
  }

public:
  virtual OEV_UINT64 GetBitIndex(OEV_INT32 x, OEV_INT32 y) const;
public:
  EROIBW1();
public:
  virtual ~EROIBW1() throw();
public:
  void SetPixel(EBW1 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EBW1 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIBW1* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIBW1* GetNextROI(EGenericROI* startROI);
public:
  EROIBW1* GetNextSiblingROI();
public:
  EROIBW1* GetParent();
public:
  const EROIBW1* GetParent() const;
public:
  EBW1 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EBW1 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageBW1* GetTypedTopParent();
public:
  const EImageBW1* GetTopParent() const;
public:
  EROIBW1(const EROIBW1& other);
public:
  EROIBW1& operator=(const EROIBW1& other);
public:
  virtual OEV_UINT64 GetBitIndex(OEV_INT32 x) const;
public:
  virtual OEV_UINT64 GetBitIndex() const;
public:
  EROIBW1(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageBW1 : public EROIBW1
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW1_;
  
public:
  EImageBW1();
public:
  EImageBW1(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageBW1() throw();
public:
  EImageBW1(const EImageBW1& other);
public:
  EImageBW1& operator=(const EImageBW1& other);
public:
  virtual OEV_UINT64 GetBitIndex(OEV_INT32 x, OEV_INT32 y) const;
public:
  virtual OEV_UINT64 GetBitIndex(OEV_INT32 x) const;
public:
  virtual OEV_UINT64 GetBitIndex() const;
public:
  EImageBW1(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIBW16 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW16_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EBW16* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EBW16*>(GetGenericImagePtr(x, y));
  }

public:
  EROIBW16();
public:
  virtual ~EROIBW16() throw();
public:
  void SetPixel(EBW16 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EBW16 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIBW16* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIBW16* GetNextROI(EGenericROI* startROI);
public:
  EROIBW16* GetNextSiblingROI();
public:
  EROIBW16* GetParent();
public:
  const EROIBW16* GetParent() const;
public:
  EBW16 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EBW16 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageBW16* GetTypedTopParent();
public:
  const EImageBW16* GetTopParent() const;
public:
  EROIBW16(const EROIBW16& other);
public:
  EROIBW16& operator=(const EROIBW16& other);
public:
  EROIBW16(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageBW16 : public EROIBW16
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW16_;
  
public:
  EImageBW16();
public:
  EImageBW16(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageBW16() throw();
public:
  EImageBW16(const EImageBW16& other);
public:
  EImageBW16& operator=(const EImageBW16& other);
public:
  EImageBW16(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIC15 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC15_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EC15* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EC15*>(GetGenericImagePtr(x, y));
  }


public:
  EROIC15();
public:
  virtual ~EROIC15() throw();
public:
  void SetPixel(EC15 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EC15 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIC15* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIC15* GetNextROI(EGenericROI* startROI);
public:
  EROIC15* GetNextSiblingROI();
public:
  EROIC15* GetParent();
public:
  const EROIC15* GetParent() const;
public:
  EC15 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EC15 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageC15* GetTypedTopParent();
public:
  const EImageC15* GetTopParent() const;
public:
  EROIC15(const EROIC15& other);
public:
  EROIC15& operator=(const EROIC15& other);
public:
  EROIC15(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageC15 : public EROIC15
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC15_;
  
public:
  EImageC15();
public:
  EImageC15(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageC15() throw();
public:
  EImageC15(const EImageC15& other);
public:
  EImageC15& operator=(const EImageC15& other);
public:
  EImageC15(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIC16 : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC16_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EC16* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EC16*>(GetGenericImagePtr(x, y));
  }


public:
  EROIC16();
public:
  virtual ~EROIC16() throw();
public:
  void SetPixel(EC16 value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EC16 value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIC16* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIC16* GetNextROI(EGenericROI* startROI);
public:
  EROIC16* GetNextSiblingROI();
public:
  EROIC16* GetParent();
public:
  const EROIC16* GetParent() const;
public:
  EC16 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EC16 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageC16* GetTypedTopParent();
public:
  const EImageC16* GetTopParent() const;
public:
  EROIC16(const EROIC16& other);
public:
  EROIC16& operator=(const EROIC16& other);
public:
  EROIC16(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageC16 : public EROIC16
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC16_;
  
public:
  EImageC16();
public:
  EImageC16(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageC16() throw();
public:
  EImageC16(const EImageC16& other);
public:
  EImageC16& operator=(const EImageC16& other);
public:
  EImageC16(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageC24 : public EROIC24
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC24_;
  
public:
  EImageC24();
public:
  EImageC24(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageC24() throw();
public:
  EImageC24(const EImageC24& other);
public:
  EImageC24& operator=(const EImageC24& other);
public:
  EImageC24(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EROIC24A : public EGenericROI
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC24A_;
  //TODO: Write manual declarations here
protected:
  void BiLevelSave(const std::string& path, EImageFileType imageType);
  void GrayLevelSave(const std::string& path, EImageFileType imageType);
  void ColorSave(const std::string& path, EImageFileType imageType);

public:
  EC24A* GetImagePtr(int x = 0, int y = 0)
  {
    return static_cast<EC24A*>(GetGenericImagePtr(x, y));
  }


public:
  EROIC24A();
public:
  virtual ~EROIC24A() throw();
public:
  void SetPixel(EC24A value, OEV_INT32 x, OEV_INT32 y);
public:
  void SetUncheckedPixel(EC24A value, OEV_INT32 x, OEV_INT32 y);
public:
  EROIC24A* GetFirstSubROI();
public:
  virtual void Serialize(ESerializer* serializer);
public:
  EROIC24A* GetNextROI(EGenericROI* startROI);
public:
  EROIC24A* GetNextSiblingROI();
public:
  EROIC24A* GetParent();
public:
  const EROIC24A* GetParent() const;
public:
  EC24A GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EC24A GetPixel(OEV_INT32 x, OEV_INT32 y) const;
public:
  EImageC24A* GetTypedTopParent();
public:
  const EImageC24A* GetTopParent() const;
public:
  EROIC24A(const EROIC24A& other);
public:
  EROIC24A& operator=(const EROIC24A& other);
public:
  EROIC24A(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageC24A : public EROIC24A
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC24A_;
  
public:
  EImageC24A();
public:
  EImageC24A(OEV_INT32 width, OEV_INT32 height);
public:
  virtual ~EImageC24A() throw();
public:
  EImageC24A(const EImageC24A& other);
public:
  EImageC24A& operator=(const EImageC24A& other);
public:
  EImageC24A(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageSegmenter_;
  
public:
  EImageSegmenter& operator=(const EImageSegmenter& other);
public:
  EImageSegmenter(const EImageSegmenter& other);
public:
  EImageSegmenter();
public:
  virtual ~EImageSegmenter() throw();
public:
  EImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ETwoLayersImageSegmenter : public EImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ETwoLayersImageSegmenter_;
  
public:
  ETwoLayersImageSegmenter& operator=(const ETwoLayersImageSegmenter& other);
public:
  ETwoLayersImageSegmenter();
public:
  ETwoLayersImageSegmenter(const ETwoLayersImageSegmenter& other);
public:
  virtual void SetBlackLayerIndex(OEV_UINT32 index);
public:
  virtual OEV_UINT32 GetBlackLayerIndex() const;
public:
  virtual void SetBlackLayerEncoded(bool encode);
public:
  virtual bool GetBlackLayerEncoded() const;
public:
  virtual void SetWhiteLayerIndex(OEV_UINT32 index);
public:
  virtual OEV_UINT32 GetWhiteLayerIndex() const;
public:
  virtual void SetWhiteLayerEncoded(bool encode);
public:
  virtual bool GetWhiteLayerEncoded() const;
public:
  virtual ~ETwoLayersImageSegmenter() throw();
public:
  ETwoLayersImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EBinaryImageSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EBinaryImageSegmenter_;
  
public:
  EBinaryImageSegmenter& operator=(const EBinaryImageSegmenter& other);
public:
  EBinaryImageSegmenter(const EBinaryImageSegmenter& other);
public:
  EBinaryImageSegmenter();
public:
  virtual ~EBinaryImageSegmenter() throw();
public:
  EBinaryImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EColorRangeThresholdSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorRangeThresholdSegmenter_;
  
public:
  EColorRangeThresholdSegmenter& operator=(const EColorRangeThresholdSegmenter& other);
public:
  EColorRangeThresholdSegmenter(const EColorRangeThresholdSegmenter& other);
public:
  EColorRangeThresholdSegmenter();
public:
  void SetLowThreshold(EC24 threshold);
public:
  EC24 GetLowThreshold() const;
public:
  void SetHighThreshold(EC24 threshold);
public:
  EC24 GetHighThreshold() const;
public:
  virtual ~EColorRangeThresholdSegmenter() throw();
public:
  EColorRangeThresholdSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EColorSingleThresholdSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorSingleThresholdSegmenter_;
  
public:
  EColorSingleThresholdSegmenter& operator=(const EColorSingleThresholdSegmenter& other);
public:
  EColorSingleThresholdSegmenter(const EColorSingleThresholdSegmenter& other);
public:
  EColorSingleThresholdSegmenter();
public:
  void SetThreshold(EC24 threshold);
public:
  EC24 GetThreshold() const;
public:
  virtual ~EColorSingleThresholdSegmenter() throw();
public:
  EColorSingleThresholdSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EThreeLayersImageSegmenter : public EImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EThreeLayersImageSegmenter_;
  
public:
  EThreeLayersImageSegmenter& operator=(const EThreeLayersImageSegmenter& other);
public:
  EThreeLayersImageSegmenter();
public:
  EThreeLayersImageSegmenter(const EThreeLayersImageSegmenter& other);
public:
  virtual void SetBlackLayerIndex(OEV_UINT32 index);
public:
  virtual OEV_UINT32 GetBlackLayerIndex() const;
public:
  virtual void SetBlackLayerEncoded(bool encode);
public:
  virtual bool GetBlackLayerEncoded() const;
public:
  virtual void SetNeutralLayerIndex(OEV_UINT32 index);
public:
  virtual OEV_UINT32 GetNeutralLayerIndex() const;
public:
  virtual void SetNeutralLayerEncoded(bool encode);
public:
  virtual bool GetNeutralLayerEncoded() const;
public:
  virtual void SetWhiteLayerIndex(OEV_UINT32 index);
public:
  virtual OEV_UINT32 GetWhiteLayerIndex() const;
public:
  virtual void SetWhiteLayerEncoded(bool encode);
public:
  virtual bool GetWhiteLayerEncoded() const;
public:
  virtual ~EThreeLayersImageSegmenter() throw();
public:
  EThreeLayersImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EGrayscaleDoubleThresholdSegmenter : public EThreeLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EGrayscaleDoubleThresholdSegmenter_;
  
public:
  EGrayscaleDoubleThresholdSegmenter& operator=(const EGrayscaleDoubleThresholdSegmenter& other);
public:
  EGrayscaleDoubleThresholdSegmenter(const EGrayscaleDoubleThresholdSegmenter& other);
public:
  EGrayscaleDoubleThresholdSegmenter();
public:
  void SetLowThreshold(OEV_UINT32 threshold);
public:
  OEV_UINT32 GetLowThreshold() const;
public:
  void SetHighThreshold(OEV_UINT32 threshold);
public:
  OEV_UINT32 GetHighThreshold() const;
public:
  virtual ~EGrayscaleDoubleThresholdSegmenter() throw();
public:
  EGrayscaleDoubleThresholdSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EGrayscaleSingleThresholdSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EGrayscaleSingleThresholdSegmenter_;
  
public:
  EGrayscaleSingleThresholdSegmenter& operator=(const EGrayscaleSingleThresholdSegmenter& other);
public:
  EGrayscaleSingleThresholdSegmenter(const EGrayscaleSingleThresholdSegmenter& other);
public:
  EGrayscaleSingleThresholdSegmenter();
public:
  void SetMode(EGrayscaleSingleThreshold mode);
public:
  EGrayscaleSingleThreshold GetMode() const;
public:
  void SetAbsoluteThreshold(OEV_UINT32 threshold);
public:
  OEV_UINT32 GetAbsoluteThreshold() const;
public:
  void SetRelativeThreshold(float threshold);
public:
  float GetRelativeThreshold() const;
public:
  OEV_UINT32 GetLastThreshold() const;
public:
  bool IsFirstApplication() const;
public:
  virtual ~EGrayscaleSingleThresholdSegmenter() throw();
public:
  EGrayscaleSingleThresholdSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageRangeSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageRangeSegmenter_;
  
public:
  EImageRangeSegmenter& operator=(const EImageRangeSegmenter& other);
public:
  EImageRangeSegmenter(const EImageRangeSegmenter& other);
public:
  EImageRangeSegmenter();
public:
  virtual ~EImageRangeSegmenter() throw();
public:
  virtual void SetBlackLayerIndex(OEV_UINT32 index);
public:
  virtual void SetBlackLayerEncoded(bool encode);
public:
  virtual void SetWhiteLayerIndex(OEV_UINT32 index);
public:
  virtual void SetWhiteLayerEncoded(bool encode);
public:
  void SetLowImageBW8(const EROIBW8* image);
public:
  const EROIBW8* GetLowImageBW8() const;
public:
  void SetHighImageBW8(const EROIBW8* image);
public:
  const EROIBW8* GetHighImageBW8() const;
public:
  void SetLowImageBW16(const EROIBW16* image);
public:
  const EROIBW16* GetLowImageBW16() const;
public:
  void SetHighImageBW16(const EROIBW16* image);
public:
  const EROIBW16* GetHighImageBW16() const;
public:
  void SetLowImageC24(const EROIC24* image);
public:
  const EROIC24* GetLowImageC24() const;
public:
  void SetHighImageC24(const EROIC24* image);
public:
  const EROIC24* GetHighImageC24() const;
public:
  EImageRangeSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ELabeledImageSegmenter : public EImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ELabeledImageSegmenter_;
  
public:
  ELabeledImageSegmenter& operator=(const ELabeledImageSegmenter& other);
public:
  ELabeledImageSegmenter(const ELabeledImageSegmenter& other);
public:
  ELabeledImageSegmenter();
public:
  void SetMinLayer(EBW16 minLayer);
public:
  EBW16 GetMinLayer() const;
public:
  void SetMaxLayer(EBW16 maxLayer);
public:
  EBW16 GetMaxLayer() const;
public:
  virtual ~ELabeledImageSegmenter() throw();
public:
  ELabeledImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EReferenceImageSegmenter : public ETwoLayersImageSegmenter
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EReferenceImageSegmenter_;
  
public:
  EReferenceImageSegmenter& operator=(const EReferenceImageSegmenter& other);
public:
  EReferenceImageSegmenter(const EReferenceImageSegmenter& other);
public:
  EReferenceImageSegmenter();
public:
  virtual ~EReferenceImageSegmenter() throw();
public:
  virtual void SetBlackLayerIndex(OEV_UINT32 index);
public:
  virtual void SetBlackLayerEncoded(bool encode);
public:
  virtual void SetWhiteLayerIndex(OEV_UINT32 index);
public:
  virtual void SetWhiteLayerEncoded(bool encode);
public:
  void SetReferenceImageBW8(const EROIBW8* image);
public:
  const EROIBW8* GetReferenceImageBW8() const;
public:
  void SetReferenceImageBW16(const EROIBW16* image);
public:
  const EROIBW16* GetReferenceImageBW16() const;
public:
  void SetReferenceImageC24(const EROIC24* image);
public:
  const EROIC24* GetReferenceImageC24() const;
public:
  EReferenceImageSegmenter(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EImageEncoder
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageEncoder_;
  
public:
  EImageEncoder(const EImageEncoder& other);
public:
  EImageEncoder& operator=(const EImageEncoder& other);
public:
  EImageEncoder();
public:
  virtual ~EImageEncoder() throw();
public:
  void SetSegmentationMethod(ESegmentationMethod method);
public:
  ESegmentationMethod GetSegmentationMethod() const;
public:
  EBinaryImageSegmenter& GetBinaryImageSegmenter();
public:
  EColorRangeThresholdSegmenter& GetColorRangeThresholdSegmenter();
public:
  EColorSingleThresholdSegmenter& GetColorSingleThresholdSegmenter();
public:
  EGrayscaleDoubleThresholdSegmenter& GetGrayscaleDoubleThresholdSegmenter();
public:
  EGrayscaleSingleThresholdSegmenter& GetGrayscaleSingleThresholdSegmenter();
public:
  EImageRangeSegmenter& GetImageRangeSegmenter();
public:
  ELabeledImageSegmenter& GetLabeledImageSegmenter();
public:
  EReferenceImageSegmenter& GetReferenceImageSegmenter();
public:
  void SetEncodingConnexity(EEncodingConnexity connexity);
public:
  EEncodingConnexity GetEncodingConnexity() const;
public:
  void SetContinuousModeEnabled(bool enabled);
public:
  bool GetContinuousModeEnabled() const;
public:
  void SetContinuousModeMaxHeight(OEV_UINT32 maxHeight);
public:
  OEV_UINT32 GetContinuousModeMaxHeight() const;
public:
  void ResetContinuousMode();
public:
  void FlushContinuousMode(ECodedImage2& codedImage);
public:
  void Encode(const EROIBW1& sourceImage, ECodedImage2& codedImage);
public:
  void Encode(const EROIBW8& sourceImage, ECodedImage2& codedImage);
public:
  void Encode(const EROIBW16& sourceImage, ECodedImage2& codedImage);
public:
  void Encode(const EROIC24& sourceImage, ECodedImage2& codedImage);
public:
  void Encode(const EROIBW1& sourceImage, const EROIBW8& inputMask, ECodedImage2& codedImage);
public:
  void Encode(const EROIBW8& sourceImage, const EROIBW8& inputMask, ECodedImage2& codedImage);
public:
  void Encode(const EROIBW16& sourceImage, const EROIBW8& inputMask, ECodedImage2& codedImage);
public:
  void Encode(const EROIC24& sourceImage, const EROIBW8& inputMask, ECodedImage2& codedImage);
public:
  EImageEncoder(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EKernel
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EKernel_;
  //TODO: Write manual declarations here
public:
  void SetRectifier(INT16 rectif)
  {
    SetRectifier(static_cast<KERNEL_RECTIFIER>(rectif));
  }

  void SetSizeX(INT16 x)
  {
    INT16 y = GetSizeY();
    SetSize(x, y);
  }

  void SetSizeY(INT16 y)
  {
    INT16 x = GetSizeX();
    SetSize(x, y);
  }

public:
  EKernel& operator=(const EKernel& other);
public:
  EKernel(const EKernel& other);
public:
  EKernel();
public:
  EKernel(OEV_INT16 sizeX, OEV_INT16 sizeY, float gain, OEV_UINT32 offset, KERNEL_RECTIFIER rectifier, OEV_UINT32 outsideValue);
public:
  EKernel(KERNEL_TYPE KernelType);
public:
  virtual ~EKernel() throw();
public:
  OEV_INT16 GetSizeX();
public:
  OEV_INT16 GetSizeY();
public:
  float GetGain();
public:
  OEV_UINT32 GetOffset();
public:
  KERNEL_RECTIFIER GetRectifier();
public:
  OEV_UINT32 GetOutsideValue();
public:
  void* GetRawDataPtr();
public:
  void GetKernelData(OEV_INT32 columnIndex, OEV_INT32 rowIndex, float& coefficientValue);
public:
  void SetKernelData(OEV_INT32 columnIndex, OEV_INT32 rowIndex, float coefficientValue);
public:
  void SetKernelData(float coefficientValue00, float coefficientValue10, float coefficientValue20, float coefficientValue01, float coefficientValue11, float coefficientValue21, float coefficientValue02, float coefficientValue12, float coefficientValue22);
public:
  void SetKernelData(float coefficientValue00, float coefficientValue10, float coefficientValue20, float coefficientValue30, float coefficientValue40, float coefficientValue01, float coefficientValue11, float coefficientValue21, float coefficientValue31, float coefficientValue41, float coefficientValue02, float coefficientValue12, float coefficientValue22, float coefficientValue32, float coefficientValue42, float coefficientValue03, float coefficientValue13, float coefficientValue23, float coefficientValue33, float coefficientValue43, float coefficientValue04, float coefficientValue14, float coefficientValue24, float coefficientValue34, float coefficientValue44);
public:
  void SetKernelData(float coefficientValue00, float coefficientValue10, float coefficientValue20, float coefficientValue30, float coefficientValue40, float coefficientValue50, float coefficientValue60, float coefficientValue01, float coefficientValue11, float coefficientValue21, float coefficientValue31, float coefficientValue41, float coefficientValue51, float coefficientValue61, float coefficientValue02, float coefficientValue12, float coefficientValue22, float coefficientValue32, float coefficientValue42, float coefficientValue52, float coefficientValue62, float coefficientValue03, float coefficientValue13, float coefficientValue23, float coefficientValue33, float coefficientValue43, float coefficientValue53, float coefficientValue63, float coefficientValue04, float coefficientValue14, float coefficientValue24, float coefficientValue34, float coefficientValue44, float coefficientValue54, float coefficientValue64, float coefficientValue05, float coefficientValue15, float coefficientValue25, float coefficientValue35, float coefficientValue45, float coefficientValue55, float coefficientValue65, float coefficientValue06, float coefficientValue16, float coefficientValue26, float coefficientValue36, float coefficientValue46, float coefficientValue56, float coefficientValue66);
public:
  void SetSize(OEV_INT16 n16SizeX, OEV_INT16 n16SizeY);
public:
  void SetGain(float f32Gain);
public:
  void SetOffset(OEV_UINT32 un32Offset);
public:
  void SetRectifier(KERNEL_RECTIFIER rectifier);
public:
  void SetOutsideValue(OEV_UINT32 un32OutsideValue);
public:
  EKernel(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ELandmark
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ELandmark_;
  //TODO: Write manual declarations here

public:
  ELandmark(const ELandmark& other);
public:
  ELandmark& operator=(const ELandmark& other);
public:
  ELandmark();
public:
  float GetSensorX() const;
public:
  void SetSensorX(float val);
public:
  float GetSensorY() const;
public:
  void SetSensorY(float val);
public:
  float GetWorldX() const;
public:
  void SetWorldX(float val);
public:
  float GetWorldY() const;
public:
  void SetWorldY(float val);
public:
  virtual ~ELandmark() throw();
public:
  ELandmark(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ELineShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ELineShape_;
  //TODO: Write manual declarations here
public:
  void SetCenter(float x, float y)
  {
    SetCenterXY(x, y);
  }
public:
  ELineShape();
public:
  ELineShape(const ELineShape& other);
public:
  ELineShape& operator=(const ELineShape& other);
public:
  virtual ~ELineShape() throw();
public:
  EPoint GetCenter() const;
public:
  void SetCenter(const EPoint& center);
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  void SetAngle(float f32Angle);
public:
  float GetScale() const;
public:
  void SetScale(float f32Scale);
public:
  void SetFromTwoPoints(const EPoint& origin, const EPoint& end);
public:
  void SetFromOriginAndEnd(const EPoint& origin, const EPoint& end);
public:
  virtual void SetLine(const ELine& line);
public:
  void SetLength(float length);
public:
  float GetLength();
public:
  float GetLength() const;
public:
  EPoint GetOrg();
public:
  EPoint GetEnd();
public:
  EPoint GetPoint(float fraction);
public:
  ELineShape* CopyTo(ELineShape* dest, BOOL bRecursive) const;
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL bDaughters);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  ELineShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ELineGauge : public ELineShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ELineGauge_;
  //TODO: Write manual declarations here
public:
  virtual void SetActive(BOOL active, BOOL recurs)
  {
    this->EShape::SetActive(active, recurs);
  }

  void Set(const ELine& line)
  {
    SetCenter(line.GetCenter());
    SetLength(line.GetLength());
    SetAngle(line.GetAngle());
  }

public:
  void SetTolerance(float tolerance);
public:
  float GetTolerance();
public:
  BOOL GetHVConstraint();
public:
  void SetHVConstraint(BOOL HVConstraint);
public:
  OEV_UINT32 GetThickness();
public:
  void SetThickness(OEV_UINT32 thickness);
public:
  OEV_UINT32 GetSmoothing();
public:
  void SetSmoothing(OEV_UINT32 smoothing);
public:
  void SetTransitionType(GGE_TRANSITION_TYPE transitionType);
public:
  GGE_TRANSITION_TYPE GetTransitionType();
public:
  void SetTransitionChoice(GGE_TRANSITION_CHOICE transitionChoice);
public:
  GGE_TRANSITION_CHOICE GetTransitionChoice();
public:
  void SetTransitionIndex(OEV_UINT32 transitionIndex);
public:
  OEV_UINT32 GetTransitionIndex();
public:
  void SetThreshold(OEV_UINT32 threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetMinAmplitude(OEV_UINT32 un32MinAmplitude);
public:
  OEV_UINT32 GetMinAmplitude();
public:
  void SetMinArea(OEV_UINT32 un32MinArea);
public:
  OEV_UINT32 GetMinArea();
public:
  OEV_UINT32 GetNumMeasuredPoints();
public:
  EPeak GetMeasuredPeak(OEV_UINT32 index);
public:
  BOOL GetValid();
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  float GetFilteringThreshold();
public:
  void SetFilteringThreshold(float f32FilteringThreshold);
public:
  OEV_UINT32 GetNumFilteringPasses();
public:
  void SetNumFilteringPasses(OEV_UINT32 un32NumFilteringPasses);
public:
  OEV_UINT32 GetNumValidSamples();
public:
  float GetAverageDistance();
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2, OEV_INT32 side3);
public:
  void GetMinNumFitSamples(OEV_INT32& side0, OEV_INT32& side1, OEV_INT32& side2, OEV_INT32& side3);
public:
  OEV_UINT32 AddSkipRange(const OEV_UINT32 start, const OEV_UINT32 end);
public:
  OEV_UINT32 GetNumSkipRanges() const;
public:
  void GetSkipRange(const OEV_UINT32 index, OEV_UINT32& start, OEV_UINT32& end) const;
public:
  void RemoveSkipRange(const OEV_UINT32 index);
public:
  void RemoveAllSkipRanges();
public:
  ELineGauge();
public:
  ELineGauge(const ELineGauge& other);
public:
  virtual ~ELineGauge() throw();
public:
  ELineGauge* CopyTo(ELineGauge* other, BOOL recursive) const;
public:
  ELineGauge& operator=(const ELineGauge& other);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  virtual void SetLine(const ELine& line);
public:
  virtual void SetActive(BOOL active);
public:
  ELine GetShape();
public:
  void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
public:
  BOOL GetRectangularSamplingArea();
public:
  float GetSamplingStep();
public:
  void SetSamplingStep(float f32SamplingStep);
public:
  OEV_UINT32 GetNumSamples() const;
public:
  virtual void Process(EROIBW8* sourceImage, BOOL daughters);
public:
  BOOL GetKnownAngle();
public:
  void SetKnownAngle(BOOL bKnownAngle);
public:
  void SetClippingMode(GGE_CLIPPING_MODE clippingMode);
public:
  GGE_CLIPPING_MODE GetClippingMode() const;
public:
  void Measure(EROIBW8* sourceImage);
public:
  void MeasureWithoutFitting(EROIBW8* sourceImage);
public:
  void MeasureSample(EROIBW8* sourceImage, OEV_UINT32 pathIndex);
public:
  ELine GetMeasuredLine();
public:
  BOOL GetSample(EPoint& pt, OEV_UINT32 index);
public:
  EPoint GetMeasuredPoint(OEV_UINT32 index);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  EPeak GetMeasuredPeak();
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
public:
  void SetMinNumFitSamples(OEV_INT32 side0);
public:
  virtual void Process(EROIBW8* sourceImage);
public:
  EPoint GetMeasuredPoint();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  ELineGauge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EListItem
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EListItem_;
  
public:
  EListItem& operator=(const EListItem& other);
public:
  EListItem(const EListItem& other);
public:
  EListItem();
public:
  virtual ~EListItem() throw();
public:
  EListItem(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EMatch
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EMatch_;
  //TODO: Write manual declarations here
public:
  EMatchPosition* GetPosition(unsigned int index)
  {
    void* pThis = this->wrappedFunctions_EMatch_.GetImpl();
    void* pRet = Euresys::eVision::Internal::StringLegacyConvertion::EMatch_Get_PositionPtr_Internal(pThis, index);
    return reinterpret_cast<EMatchPosition*>(pRet);
  }

  EImageBW8* CreateBW8PatternCopy() const
  {
    if(!IsPatternLearnt())
      return NULL;
    EImageBW8* toReturn = new EImageBW8();
    CopyLearntPattern(*toReturn);
    return toReturn;
  }

  EImageC24* CreateC24PatternCopy() const
  {
    if(!IsPatternLearnt())
      return NULL;
    EImageC24* toReturn = new EImageC24();
    CopyLearntPattern(*toReturn);
    return toReturn;
  }

  EGenericROI* CreatePatternCopy() const
  {
    if(!IsPatternLearnt())
      return NULL;
    switch(GetPatternType())
    {
    case EImageType_BW8:
        return CreateBW8PatternCopy();
    case EImageType_C24:
        return CreateC24PatternCopy();
    default:
      ESetError(E_ERROR_INVALID_IMAGE_TYPE);
    }
    return NULL;
  }

public:
  EMatch();
public:
  EMatch(OEV_UINT32 maximumNumberOfDegreesOfFreedom);
public:
  EMatch(const EMatch& other);
public:
  EMatch& operator=(const EMatch& other);
public:
  EMatch* CopyTo(EMatch* other) const;
public:
  void Save(ESerializer* serializer);
public:
  void Load(ESerializer* serializer);
public:
  void LearnPattern(EROIBW8* pattern);
public:
  void LearnPattern(EROIC24* pattern);
public:
  void ClearImage();
public:
  BOOL IsPatternLearnt() const;
public:
  void SetExtension(OEV_INT32 n32ExtensionX, OEV_INT32 n32ExtensionY);
public:
  void CopyLearntPattern(EImageBW8& image) const;
public:
  void CopyLearntPattern(EImageC24& image) const;
public:
  void Match(EROIBW8* image);
public:
  void Match(EROIC24* image);
public:
  void SetMinReducedArea(OEV_UINT32 un32Area);
public:
  OEV_UINT32 GetMinReducedArea();
public:
  void SetDontCareThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetDontCareThreshold();
public:
  void SetCorrelationMode(E_CORRELATION_MODE eMode);
public:
  E_CORRELATION_MODE GetCorrelationMode();
public:
  void SetContrastMode(MCH_CONTRAST_MODE eMode);
public:
  MCH_CONTRAST_MODE GetContrastMode();
public:
  OEV_UINT32 GetMaxPositions();
public:
  void SetMaxPositions(OEV_UINT32 un32MaxPositions);
public:
  OEV_UINT32 GetMaxInitialPositions();
public:
  void SetMaxInitialPositions(OEV_UINT32 un32MaxInitialPositions);
public:
  float GetInitialMinScore();
public:
  void SetInitialMinScore(float f32InitialMinScore);
public:
  float GetMinScore();
public:
  void SetMinScore(float f32MinScore);
public:
  float GetMinAngle();
public:
  void SetMinAngle(float f32MinAngle);
public:
  float GetMaxAngle();
public:
  void SetMaxAngle(float f32MaxAngle);
public:
  float GetMinScale();
public:
  void SetMinScale(float f32Scale);
public:
  float GetMaxScale();
public:
  void SetMaxScale(float f32Scale);
public:
  float GetMinScaleX();
public:
  void SetMinScaleX(float f32MinScaleX);
public:
  float GetMaxScaleX();
public:
  void SetMaxScaleX(float f32MaxScaleX);
public:
  float GetMinScaleY();
public:
  void SetMinScaleY(float f32MinScaleY);
public:
  float GetMaxScaleY();
public:
  void SetMaxScaleY(float f32MaxScaleY);
public:
  BOOL GetIsotropicScale();
public:
  float GetAngleStep();
public:
  float GetScaleStep();
public:
  float GetScaleXStep();
public:
  float GetScaleYStep();
public:
  void SetPixelDimensions(float width, float height);
public:
  void GetPixelDimensions(float& width, float& height);
public:
  BOOL GetInterpolate();
public:
  void SetInterpolate(BOOL bInterpolate);
public:
  MCH_FILTERING_MODE GetFilteringMode();
public:
  void SetFilteringMode(MCH_FILTERING_MODE eFilteringMode);
public:
  OEV_UINT32 GetNumPositions();
public:
  EMatchPosition GetPositionInternal(OEV_UINT32 index);
public:
  OEV_UINT32 GetNumReductions();
public:
  EGenericROI* GetPattern(OEV_UINT32 un32Index) const;
public:
  E_IMAGE_TYPES GetPatternType() const;
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawPositions(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
public:
  void SetFinalReduction(OEV_UINT32 un32FinalReduction);
public:
  OEV_UINT32 GetFinalReduction();
public:
  OEV_INT32 GetPatternWidth();
public:
  OEV_INT32 GetPatternHeight();
public:
  static OEV_UINT32 GetVersion();
public:
  virtual ~EMatch() throw();
public:
  EMatch* CopyTo() const;
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, OEV_UINT32 index);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index, BOOL bCorner);
public:
  void DrawPositionWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 index);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner);
public:
  void DrawPositionWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 index);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner);
public:
  void DrawPosition(HDC graphicContext, OEV_UINT32 index);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, BOOL bCorner, float zoomX);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, BOOL bCorner);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bCorner, float zoomX);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, BOOL bCorner);
public:
  void DrawPositionsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext, BOOL bCorner, float zoomX);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext, BOOL bCorner);
public:
  void DrawPositionsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawPositions(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX);
public:
  void DrawPositions(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY);
public:
  void DrawPositions(HDC graphicContext, BOOL bCorner, float zoomX);
public:
  void DrawPositions(HDC graphicContext, BOOL bCorner);
public:
  void DrawPositions(HDC graphicContext);
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  EMatch(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EMeasurementUnit
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EMeasurementUnit_;
  
public:
  EMeasurementUnit(float magnitude, const std::string& name);
public:
  EMeasurementUnit(EMeasurementUnit* pUnit);
public:
  EMeasurementUnit();
public:
  EMeasurementUnit& operator=(const EMeasurementUnit& other);
public:
  std::string GetName() const;
public:
  void SetName(const std::string& name);
public:
  float GetMagnitude() const;
public:
  void SetMagnitude(float f32Magnitude);
public:
  float ConversionFactorTo(const EMeasurementUnit& Unit) const;
public:
  static EMeasurementUnit* GetStockMeasurementUnit(EStockMeasurementUnit unit);
public:
  virtual ~EMeasurementUnit() throw();
public:
  EMeasurementUnit(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EMovingAverage
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EMovingAverage_;
  
public:
  EMovingAverage& operator=(const EMovingAverage& other);
public:
  EMovingAverage(const EMovingAverage& other);
public:
  EMovingAverage();
public:
  EMovingAverage(OEV_UINT32 period, OEV_INT32 width, OEV_INT32 height, BOOL internalAllocationScheme);
public:
  virtual ~EMovingAverage() throw();
public:
  void SetSize(OEV_UINT32 numberOfImages, OEV_INT32 imageWidth, OEV_INT32 imageHeight, BOOL internalAllocationScheme);
public:
  void GetSize(OEV_UINT32& numberOfImages, OEV_INT32& imageWidth, OEV_INT32& imageHeight, BOOL& internalAllocationScheme);
public:
  void Reset();
public:
  EImageBW8* GetSrcImage();
public:
  void Average(EROIBW8* destinationImage);
public:
  void Average(EROIBW8* sourceImage, EROIBW8* destinationImage);
public:
  EMovingAverage(OEV_UINT32 period, OEV_INT32 width, OEV_INT32 height);
public:
  void SetSize(OEV_UINT32 numberOfImages, OEV_INT32 imageWidth, OEV_INT32 imageHeight);
public:
  EMovingAverage(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EOCR
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCR_;
  //TODO: Write manual declarations here
public:
  UINT16 BuildObjects(EROIBW8* src)
  {
    BuildObjectsNoReturns(src);
    return (UINT16)EGetError();
  }
  UINT16 FindAllChars(EROIBW8* src)
  {
    FindAllCharsNoReturns(src);
    return (UINT16)EGetError();
  }

  UINT16 Recognize(EROIBW8* sourceImage, signed int maximumNumberOfCharacters, unsigned int classes, char* dst)
  {
    std::string toRet = Recognize(sourceImage, maximumNumberOfCharacters, classes);
    unsigned int i;;
    if(EGetError() != E_OK)
      return (UINT16)EGetError();
    for(i = 0; i < ((unsigned int)maximumNumberOfCharacters < toRet.length() ? maximumNumberOfCharacters : toRet.length() ); ++i)
    {
      dst[i] = toRet[i];
    }
    dst[i] = '\0';
    return (UINT16)EGetError();
  }

  UINT16 Recognize(EROIBW8* sourceImage, signed int maximumNumberOfCharacters, unsigned int* classes, char* dst)
  {
    std::vector<unsigned int> cls;
    unsigned int i;;
    for(i = 0; i < (unsigned int)maximumNumberOfCharacters; ++i)
      cls.push_back(classes[i]);
    std::string toRet = Recognize(sourceImage, maximumNumberOfCharacters, cls);
    if(EGetError() != E_OK)
      return (UINT16)EGetError();
    for(i = 0; i < ((unsigned int)maximumNumberOfCharacters < toRet.length() ? maximumNumberOfCharacters : toRet.length() ); ++i)
    {
      dst[i] = toRet[i];
    }
    dst[i] = '\0';
    return (UINT16)EGetError();
  }

  INT16 ReadText(EROIBW8* pSrcImage, INT32 n32MaxChars, UINT32* pun32Classes, CHAR* pszString, BOOL bAutoSegmentation= TRUE)
  {
    std::vector<unsigned int> cls;
    unsigned int i;;
    for(i = 0; i < (unsigned int)n32MaxChars; ++i)
      cls.push_back(pun32Classes[i]);
    std::string res = ReadText(pSrcImage, n32MaxChars, cls, bAutoSegmentation);
    for(i = 0; i < ((unsigned int)n32MaxChars < res.length() ? n32MaxChars : res.length() ); ++i)
    {
      pszString[i] = res[i];
    }
    pszString[i] = '\0';
    return (UINT16)EGetError();
  }

  INT16 ReadText(EROIBW8* pSrcImage, INT32 n32MaxChars, UINT32 pun32Classes, CHAR* pszString, BOOL bAutoSegmentation= TRUE)
  {
    std::string res = ReadText(pSrcImage, n32MaxChars, pun32Classes, bAutoSegmentation);
    unsigned int i;;
    for(i = 0; i < ((unsigned int)n32MaxChars < res.length() ? n32MaxChars : res.length() ); ++i)
    {
      pszString[i] = res[i];
    }
    pszString[i] = '\0';
    return (UINT16)EGetError();
  }

  UINT16 LoadFont(const std::string& path)
  {
    Load(path);
    return (UINT16)EGetError();
  }

  UINT16 SaveFont(const std::string& path)
  {
    Save(path);
    return (UINT16)EGetError();
  }

  UINT16 NewFont(unsigned int patternWidth, unsigned int patternHeight)
  {
    Internal_NewFont(patternWidth, patternHeight);
    return (UINT16)EGetError();
  }
  UINT16 NewFont(unsigned int patternWidth)
  {
    Internal_NewFont(patternWidth);
    return (UINT16)EGetError();
  }
  UINT16 NewFont()
  {
    Internal_NewFont();
    return (UINT16)EGetError();
  }
  void Load(const char* path)
  {
    Load((std::string)path);
  }
  void Save(const char* path)
  {
    Save((std::string)path);
  }

  EBW8* GetPatternBitmap(INT32 index)
  {
    EImageBW8* temp = this->GetPatternImageTyped(index);
    if(temp == NULL)
      return NULL;
    return temp->GetImagePtr();
  }

public:
  EOCR();
public:
  EOCR(const EOCR& other);
public:
  virtual ~EOCR() throw();
public:
  EOCR& operator=(const EOCR& other);
public:
  OEV_UINT32 GetPatternWidth();
public:
  OEV_UINT32 GetPatternHeight();
public:
  OCR_MATCHING_MODES GetMatchingMode();
public:
  void SetMatchingMode(OCR_MATCHING_MODES eMatchingMode);
public:
  OCR_SHIFTING_MODES GetShiftingMode();
public:
  void SetShiftingMode(OCR_SHIFTING_MODES eShiftingMode);
public:
  OEV_UINT32 GetShiftXTolerance();
public:
  void SetShiftXTolerance(OEV_UINT32 un32ShiftXTolerance);
public:
  OEV_UINT32 GetShiftYTolerance();
public:
  void SetShiftYTolerance(OEV_UINT32 un32ShiftYTolerance);
public:
  OCRColor GetTextColor();
public:
  void SetTextColor(OCRColor eTextColor);
public:
  void SetThreshold(OEV_INT32 un32Threshold);
public:
  OEV_INT32 GetThreshold();
public:
  void SetRelativeThreshold(float f32Threshold);
public:
  float GetRelativeThreshold();
public:
  OEV_INT32 GetMinCharWidth();
public:
  void SetMinCharWidth(OEV_INT32 n32MinCharWidth);
public:
  OEV_INT32 GetMaxCharWidth();
public:
  void SetMaxCharWidth(OEV_INT32 n32MaxCharWidth);
public:
  OEV_INT32 GetMinCharHeight();
public:
  void SetMinCharHeight(OEV_INT32 n32MinCharHeight);
public:
  OEV_INT32 GetMaxCharHeight();
public:
  void SetMaxCharHeight(OEV_INT32 n32MaxCharHeight);
public:
  OEV_INT32 GetCharSpacing();
public:
  void SetCharSpacing(OEV_INT32 n32CharSpacing);
public:
  OEV_INT32 GetNoiseArea();
public:
  void SetNoiseArea(OEV_INT32 n32NoiseArea);
public:
  OCRSegmentationMode GetSegmentationMode();
public:
  void SetSegmentationMode(OCRSegmentationMode eSegmentationMode);
public:
  BOOL GetCutLargeChars();
public:
  void SetCutLargeChars(BOOL bCutLargeChars);
public:
  float GetRelativeSpacing();
public:
  void SetRelativeSpacing(float f32RelativeSpacing);
public:
  BOOL GetRemoveNarrowOrFlat();
public:
  void SetRemoveNarrowOrFlat(BOOL bRemoveNarrowOrFlat);
public:
  BOOL GetRemoveBorder();
public:
  void SetRemoveBorder(BOOL bRemoveBorder);
public:
  BOOL GetCompareAspectRatio();
public:
  void SetCompareAspectRatio(BOOL bCompareAspectRatio);
public:
  OEV_INT32 GetNumChars();
public:
  OEV_INT32 GetFirstCharCode(OEV_INT32 index);
public:
  OEV_INT32 GetSecondCharCode(OEV_INT32 index);
public:
  float GetFirstCharDistance(OEV_INT32 index);
public:
  float GetSecondCharDistance(OEV_INT32 index);
public:
  float GetConfidenceRatio(OEV_INT32 index);
public:
  float GetAverageFirstCharDistance();
public:
  OEV_INT32 CharGetOrgX(OEV_INT32 index);
public:
  OEV_INT32 CharGetOrgY(OEV_INT32 index);
public:
  OEV_INT32 CharGetDstX(OEV_INT32 index);
public:
  OEV_INT32 CharGetDstY(OEV_INT32 index);
public:
  OEV_INT32 CharGetTotalOrgX(OEV_INT32 index);
public:
  OEV_INT32 CharGetTotalOrgY(OEV_INT32 index);
public:
  OEV_INT32 CharGetTotalDstX(OEV_INT32 index);
public:
  OEV_INT32 CharGetTotalDstY(OEV_INT32 index);
public:
  OEV_INT32 CharGetWidth(OEV_INT32 index);
public:
  OEV_INT32 CharGetHeight(OEV_INT32 index);
public:
  void BuildObjectsNoReturns(EROIBW8* sourceImage);
public:
  void FindAllCharsNoReturns(EROIBW8* sourceImage);
public:
  void MatchChar(EROIBW8* sourceImage, OEV_UINT32 classes, OEV_INT32 index, OEV_INT32 shiftX, OEV_INT32 shiftY);
public:
  std::string ReadText(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes, BOOL autoSegmentation);
public:
  std::string ReadText(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
public:
  std::wstring ReadTextWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes, BOOL autoSegmentation);
public:
  std::wstring ReadTextWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
public:
  std::string Recognize(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
public:
  std::string Recognize(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
public:
  std::wstring RecognizeWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
public:
  std::wstring RecognizeWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
public:
  BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void LearnPattern(EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code, OEV_UINT32 classes, BOOL autoSegmentation);
public:
  void LearnPatterns(EROIBW8* sourceImage, const std::string& text, OEV_UINT32 singleClass, BOOL autoSegmentation);
public:
  void LearnPatterns(EROIBW8* sourceImage, const std::string& text, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
public:
  void AddPatternFromImage(EROIBW8* sourceImage, OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, OEV_INT32 code, OEV_UINT32 classes);
public:
  void Internal_NewFont(OEV_UINT32 patternWidth, OEV_UINT32 patternHeight);
public:
  void RemovePattern(OEV_UINT32 index);
public:
  OEV_INT32 GetNumPatterns();
public:
  OEV_INT32 GetPatternCode(OEV_INT32 index);
public:
  void SetPatternCode(OEV_INT32 n32Index, OEV_INT32 n32Code);
public:
  OEV_UINT32 GetPatternClass(OEV_INT32 index);
public:
  void SetPatternClass(OEV_INT32 n32Index, OEV_UINT32 un32Class);
public:
  EImageBW8* GetPatternImageTyped(OEV_INT32 index);
public:
  void* GetPatternBitmapUnTyped(OEV_INT32 index);
public:
  void EmptyChars();
public:
  void AddChar(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 endX, OEV_INT32 endY);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawCharWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawCharsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawChars(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
public:
  OEV_UINT32 GetTrueThreshold();
public:
  void Load(ESerializer* serializer);
public:
  void Save(ESerializer* serializer);
public:
  void Dump();
public:
  std::string ReadText(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
public:
  std::string ReadText(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
public:
  std::wstring ReadTextWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
public:
  std::wstring ReadTextWide(EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
public:
  BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex, float zoomX, float zoomY, float panX);
public:
  BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex, float zoomX, float zoomY);
public:
  BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex, float zoomX);
public:
  BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex);
public:
  BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
public:
  BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex, float zoomX, float zoomY);
public:
  BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex, float zoomX);
public:
  BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex);
public:
  void LearnPattern(EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code, OEV_UINT32 classes);
public:
  void LearnPattern(EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code);
public:
  void LearnPatterns(EROIBW8* sourceImage, const std::string& text, OEV_UINT32 singleClass);
public:
  void LearnPatterns(EROIBW8* sourceImage, const std::string& text);
public:
  void LearnPatterns(EROIBW8* sourceImage, const std::string& text, const std::vector<OEV_UINT32>& classes);
public:
  void AddPatternFromImage(EROIBW8* sourceImage, OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, OEV_INT32 code);
public:
  void Internal_NewFont(OEV_UINT32 patternWidth);
public:
  void Internal_NewFont();
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, OEV_UINT32 charIndex);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 charIndex, float zoomX);
public:
  void DrawCharWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, OEV_UINT32 charIndex);
public:
  void DrawCharWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
public:
  void DrawCharWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
public:
  void DrawCharWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX);
public:
  void DrawCharWithPredefinedPen(EDrawAdapter* graphicContext, OEV_UINT32 charIndex);
public:
  void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
public:
  void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
public:
  void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX);
public:
  void DrawChar(HDC graphicContext, OEV_UINT32 charIndex);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, float zoomX);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
public:
  void DrawCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawCharsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawCharsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
public:
  void DrawCharsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
public:
  void DrawCharsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawChars(HDC graphicContext, float zoomX, float zoomY, float panX);
public:
  void DrawChars(HDC graphicContext, float zoomX, float zoomY);
public:
  void DrawChars(HDC graphicContext, float zoomX);
public:
  void DrawChars(HDC graphicContext);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  EOCR(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EOCVText
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCVText_;
  //TODO: Write manual declarations here

  Euresys::eVision::Internal::Properties::NotWrapped::Property<BOOL> m_bIsotropicScaling;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<BOOL> m_bSelected;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32NumContourPoints;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateLocationScore;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleLocationScore;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ShiftXStride;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ShiftYStride;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ScaleXCount;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ScaleYCount;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ShearCount;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32SkewCount;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleX;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleY;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32Shear;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32Skew;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftX;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftY;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32Diagnostics;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32MarginWidth;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32TemplateForegroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32SampleForegroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ForegroundAreaTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32TemplateBackgroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32SampleBackgroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32BackgroundAreaTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateForegroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleForegroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateBackgroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleBackgroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32Correlation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShearMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SkewMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleXMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ScaleYMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundAreaAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundAreaDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundAreaAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundAreaDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreDeviation;
public:
  void SetIsotropicScaling(BOOL isotropicScaling);
public:
  BOOL GetIsotropicScaling();
public:
  EOCVText();
public:
  EOCVText(const EOCVText& ocvText);
public:
  virtual ~EOCVText() throw();
public:
  EOCVText& operator=(const EOCVText& other);
public:
  void ResetParameters();
public:
  void SetSelected(BOOL selected);
public:
  BOOL GetSelected();
public:
  float GetTemplateLocationScore() const;
public:
  void SetTemplateLocationScore(float value);
public:
  float GetSampleLocationScore() const;
public:
  void SetSampleLocationScore(float value);
public:
  float GetLocationScoreTolerance() const;
public:
  void SetLocationScoreTolerance(float value);
public:
  float GetShiftXBias() const;
public:
  void SetShiftXBias(float value);
public:
  float GetShiftXTolerance() const;
public:
  void SetShiftXTolerance(float value);
public:
  float GetShiftYBias() const;
public:
  void SetShiftYBias(float value);
public:
  float GetShiftYTolerance() const;
public:
  void SetShiftYTolerance(float value);
public:
  float GetScaleXBias() const;
public:
  void SetScaleXBias(float value);
public:
  float GetScaleXTolerance() const;
public:
  void SetScaleXTolerance(float value);
public:
  float GetScaleYBias() const;
public:
  void SetScaleYBias(float value);
public:
  float GetScaleYTolerance() const;
public:
  void SetScaleYTolerance(float value);
public:
  float GetShearBias() const;
public:
  void SetShearBias(float value);
public:
  float GetShearTolerance() const;
public:
  void SetShearTolerance(float value);
public:
  float GetSkewBias() const;
public:
  void SetSkewBias(float value);
public:
  float GetSkewTolerance() const;
public:
  void SetSkewTolerance(float value);
public:
  float GetScaleX() const;
public:
  void SetScaleX(float value);
public:
  float GetScaleY() const;
public:
  void SetScaleY(float value);
public:
  float GetShear() const;
public:
  void SetShear(float value);
public:
  float GetSkew() const;
public:
  void SetSkew(float value);
public:
  float GetShiftX() const;
public:
  void SetShiftX(float value);
public:
  float GetShiftY() const;
public:
  void SetShiftY(float value);
public:
  float GetTemplateForegroundSum() const;
public:
  void SetTemplateForegroundSum(float value);
public:
  float GetSampleForegroundSum() const;
public:
  void SetSampleForegroundSum(float value);
public:
  float GetForegroundSumTolerance() const;
public:
  void SetForegroundSumTolerance(float value);
public:
  float GetTemplateBackgroundSum() const;
public:
  void SetTemplateBackgroundSum(float value);
public:
  float GetSampleBackgroundSum() const;
public:
  void SetSampleBackgroundSum(float value);
public:
  float GetBackgroundSumTolerance() const;
public:
  void SetBackgroundSumTolerance(float value);
public:
  float GetCorrelation() const;
public:
  void SetCorrelation(float value);
public:
  float GetCorrelationTolerance() const;
public:
  void SetCorrelationTolerance(float value);
public:
  float GetShiftXAverage() const;
public:
  void SetShiftXAverage(float value);
public:
  float GetShiftXDeviation() const;
public:
  void SetShiftXDeviation(float value);
public:
  float GetShiftXMin() const;
public:
  void SetShiftXMin(float value);
public:
  float GetShiftXMax() const;
public:
  void SetShiftXMax(float value);
public:
  float GetShiftYAverage() const;
public:
  void SetShiftYAverage(float value);
public:
  float GetShiftYDeviation() const;
public:
  void SetShiftYDeviation(float value);
public:
  float GetShiftYMin() const;
public:
  void SetShiftYMin(float value);
public:
  float GetShiftYMax() const;
public:
  void SetShiftYMax(float value);
public:
  float GetShearAverage() const;
public:
  void SetShearAverage(float value);
public:
  float GetShearDeviation() const;
public:
  void SetShearDeviation(float value);
public:
  float GetShearMin() const;
public:
  void SetShearMin(float value);
public:
  float GetShearMax() const;
public:
  void SetShearMax(float value);
public:
  float GetSkewAverage() const;
public:
  void SetSkewAverage(float value);
public:
  float GetSkewDeviation() const;
public:
  void SetSkewDeviation(float value);
public:
  float GetSkewMin() const;
public:
  void SetSkewMin(float value);
public:
  float GetSkewMax() const;
public:
  void SetSkewMax(float value);
public:
  float GetScaleXAverage() const;
public:
  void SetScaleXAverage(float value);
public:
  float GetScaleXDeviation() const;
public:
  void SetScaleXDeviation(float value);
public:
  float GetScaleXMin() const;
public:
  void SetScaleXMin(float value);
public:
  float GetScaleXMax() const;
public:
  void SetScaleXMax(float value);
public:
  float GetScaleYAverage() const;
public:
  void SetScaleYAverage(float value);
public:
  float GetScaleYDeviation() const;
public:
  void SetScaleYDeviation(float value);
public:
  float GetScaleYMin() const;
public:
  void SetScaleYMin(float value);
public:
  float GetScaleYMax() const;
public:
  void SetScaleYMax(float value);
public:
  float GetForegroundAreaAverage() const;
public:
  void SetForegroundAreaAverage(float value);
public:
  float GetForegroundAreaDeviation() const;
public:
  void SetForegroundAreaDeviation(float value);
public:
  float GetBackgroundAreaAverage() const;
public:
  void SetBackgroundAreaAverage(float value);
public:
  float GetBackgroundAreaDeviation() const;
public:
  void SetBackgroundAreaDeviation(float value);
public:
  float GetForegroundSumAverage() const;
public:
  void SetForegroundSumAverage(float value);
public:
  float GetForegroundSumDeviation() const;
public:
  void SetForegroundSumDeviation(float value);
public:
  float GetBackgroundSumAverage() const;
public:
  void SetBackgroundSumAverage(float value);
public:
  float GetBackgroundSumDeviation() const;
public:
  void SetBackgroundSumDeviation(float value);
public:
  float GetCorrelationAverage() const;
public:
  void SetCorrelationAverage(float value);
public:
  float GetCorrelationDeviation() const;
public:
  void SetCorrelationDeviation(float value);
public:
  float GetLocationScoreAverage() const;
public:
  void SetLocationScoreAverage(float value);
public:
  float GetLocationScoreDeviation() const;
public:
  void SetLocationScoreDeviation(float value);
public:
  OEV_UINT32 GetNumContourPoints() const;
public:
  void SetNumContourPoints(OEV_UINT32 value);
public:
  OEV_UINT32 GetShiftXStride() const;
public:
  void SetShiftXStride(OEV_UINT32 value);
public:
  OEV_UINT32 GetShiftYStride() const;
public:
  void SetShiftYStride(OEV_UINT32 value);
public:
  OEV_UINT32 GetScaleXCount() const;
public:
  void SetScaleXCount(OEV_UINT32 value);
public:
  OEV_UINT32 GetScaleYCount() const;
public:
  void SetScaleYCount(OEV_UINT32 value);
public:
  OEV_UINT32 GetShearCount() const;
public:
  void SetShearCount(OEV_UINT32 value);
public:
  OEV_UINT32 GetSkewCount() const;
public:
  void SetSkewCount(OEV_UINT32 value);
public:
  OEV_UINT32 GetDiagnostics() const;
public:
  void SetDiagnostics(OEV_UINT32 value);
public:
  OEV_UINT32 GetMarginWidth() const;
public:
  void SetMarginWidth(OEV_UINT32 value);
public:
  OEV_UINT32 GetTemplateForegroundArea() const;
public:
  void SetTemplateForegroundArea(OEV_UINT32 value);
public:
  OEV_UINT32 GetSampleForegroundArea() const;
public:
  void SetSampleForegroundArea(OEV_UINT32 value);
public:
  OEV_UINT32 GetForegroundAreaTolerance() const;
public:
  void SetForegroundAreaTolerance(OEV_UINT32 value);
public:
  OEV_UINT32 GetTemplateBackgroundArea() const;
public:
  void SetTemplateBackgroundArea(OEV_UINT32 value);
public:
  OEV_UINT32 GetSampleBackgroundArea() const;
public:
  void SetSampleBackgroundArea(OEV_UINT32 value);
public:
  OEV_UINT32 GetBackgroundAreaTolerance() const;
public:
  void SetBackgroundAreaTolerance(OEV_UINT32 value);
public:
  EOCVText(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EOCVChar
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCVChar_;
  //TODO: Write manual declarations here

  Euresys::eVision::Internal::Properties::NotWrapped::Property<BOOL> m_bWhiteOnBlack;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<BOOL> m_bSelected;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32NumContourPoints;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateLocationScore;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleLocationScore;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftX;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ShiftXStride;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftY;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYBias;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ShiftYStride;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32Diagnostics;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32MarginWidth;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32TemplateForegroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32SampleForegroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32ForegroundAreaTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32TemplateBackgroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32SampleBackgroundArea;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> m_un32BackgroundAreaTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateForegroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleForegroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateBackgroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleBackgroundSum;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32Correlation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationTolerance;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32LocationScoreDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftXMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYMin;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ShiftYMax;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundAreaAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundAreaDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundAreaAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundAreaDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32ForegroundSumDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32BackgroundSumDeviation;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationAverage;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32CorrelationDeviation;
public:
  EOCVChar();
public:
  EOCVChar(const EOCVChar& other);
public:
  virtual ~EOCVChar() throw();
public:
  EOCVChar& operator=(const EOCVChar& other);
public:
  void ResetParameters();
public:
  BOOL GetWhiteOnBlack() const;
public:
  void SetWhiteOnBlack(BOOL val);
public:
  BOOL GetSelected() const;
public:
  void SetSelected(BOOL val);
public:
  OEV_UINT32 GetNumContourPoints() const;
public:
  void SetNumContourPoints(OEV_UINT32 val);
public:
  float GetTemplateLocationScore() const;
public:
  void SetTemplateLocationScore(float val);
public:
  float GetSampleLocationScore() const;
public:
  void SetSampleLocationScore(float val);
public:
  float GetLocationScoreTolerance() const;
public:
  void SetLocationScoreTolerance(float val);
public:
  float GetShiftX() const;
public:
  void SetShiftX(float val);
public:
  float GetShiftXBias() const;
public:
  void SetShiftXBias(float val);
public:
  float GetShiftXTolerance() const;
public:
  void SetShiftXTolerance(float val);
public:
  OEV_UINT32 GetShiftXStride() const;
public:
  void SetShiftXStride(OEV_UINT32 val);
public:
  float GetShiftY() const;
public:
  void SetShiftY(float val);
public:
  float GetShiftYBias() const;
public:
  void SetShiftYBias(float val);
public:
  float GetShiftYTolerance() const;
public:
  void SetShiftYTolerance(float val);
public:
  OEV_UINT32 GetShiftYStride() const;
public:
  void SetShiftYStride(OEV_UINT32 val);
public:
  OEV_UINT32 GetDiagnostics() const;
public:
  void SetDiagnostics(OEV_UINT32 val);
public:
  OEV_UINT32 GetMarginWidth() const;
public:
  void SetMarginWidth(OEV_UINT32 val);
public:
  OEV_UINT32 GetTemplateForegroundArea() const;
public:
  void SetTemplateForegroundArea(OEV_UINT32 val);
public:
  OEV_UINT32 GetSampleForegroundArea() const;
public:
  void SetSampleForegroundArea(OEV_UINT32 val);
public:
  OEV_UINT32 GetForegroundAreaTolerance() const;
public:
  void SetForegroundAreaTolerance(OEV_UINT32 val);
public:
  OEV_UINT32 GetTemplateBackgroundArea() const;
public:
  void SetTemplateBackgroundArea(OEV_UINT32 val);
public:
  OEV_UINT32 GetSampleBackgroundArea() const;
public:
  void SetSampleBackgroundArea(OEV_UINT32 val);
public:
  OEV_UINT32 GetBackgroundAreaTolerance() const;
public:
  void SetBackgroundAreaTolerance(OEV_UINT32 val);
public:
  float GetTemplateForegroundSum() const;
public:
  void SetTemplateForegroundSum(float val);
public:
  float GetSampleForegroundSum() const;
public:
  void SetSampleForegroundSum(float val);
public:
  float GetForegroundSumTolerance() const;
public:
  void SetForegroundSumTolerance(float val);
public:
  float GetTemplateBackgroundSum() const;
public:
  void SetTemplateBackgroundSum(float val);
public:
  float GetSampleBackgroundSum() const;
public:
  void SetSampleBackgroundSum(float val);
public:
  float GetBackgroundSumTolerance() const;
public:
  void SetBackgroundSumTolerance(float val);
public:
  float GetCorrelation() const;
public:
  void SetCorrelation(float val);
public:
  float GetCorrelationTolerance() const;
public:
  void SetCorrelationTolerance(float val);
public:
  float GetLocationScoreAverage() const;
public:
  void SetLocationScoreAverage(float val);
public:
  float GetLocationScoreDeviation() const;
public:
  void SetLocationScoreDeviation(float val);
public:
  float GetShiftXAverage() const;
public:
  void SetShiftXAverage(float val);
public:
  float GetShiftXDeviation() const;
public:
  void SetShiftXDeviation(float val);
public:
  float GetShiftXMin() const;
public:
  void SetShiftXMin(float val);
public:
  float GetShiftXMax() const;
public:
  void SetShiftXMax(float val);
public:
  float GetShiftYAverage() const;
public:
  void SetShiftYAverage(float val);
public:
  float GetShiftYDeviation() const;
public:
  void SetShiftYDeviation(float val);
public:
  float GetShiftYMin() const;
public:
  void SetShiftYMin(float val);
public:
  float GetShiftYMax() const;
public:
  void SetShiftYMax(float val);
public:
  float GetForegroundAreaAverage() const;
public:
  void SetForegroundAreaAverage(float val);
public:
  float GetForegroundAreaDeviation() const;
public:
  void SetForegroundAreaDeviation(float val);
public:
  float GetBackgroundAreaAverage() const;
public:
  void SetBackgroundAreaAverage(float val);
public:
  float GetBackgroundAreaDeviation() const;
public:
  void SetBackgroundAreaDeviation(float val);
public:
  float GetForegroundSumAverage() const;
public:
  void SetForegroundSumAverage(float val);
public:
  float GetForegroundSumDeviation() const;
public:
  void SetForegroundSumDeviation(float val);
public:
  float GetBackgroundSumAverage() const;
public:
  void SetBackgroundSumAverage(float val);
public:
  float GetBackgroundSumDeviation() const;
public:
  void SetBackgroundSumDeviation(float val);
public:
  float GetCorrelationAverage() const;
public:
  void SetCorrelationAverage(float val);
public:
  float GetCorrelationDeviation() const;
public:
  void SetCorrelationDeviation(float val);
public:
  EOCVChar(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EOCV
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCV_;
  //TODO: Write manual declarations here
  void Load(const char* path)
  {
    Load((std::string)path);
  }
  void Save(const char* path)
  {
    Save((std::string)path);
  }

  EImageBW8 m_TemplateImage;
  Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVObject, 8> m_FreeObjects;
  Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVChar, 9> m_FreeChars;
  Euresys::eVision::Internal::Properties::Wrapped::Property_Vector_ReadOnly<EOCVText, 10> m_Texts;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateBackground;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32TemplateForeground;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<EBW8> m_bw8TemplateThreshold;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<EBW8> m_bw8SampleThreshold;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleBackground;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<float> m_f32SampleForeground;
  Euresys::eVision::Internal::Properties::NotWrapped::Property<OCV_LOCATION_MODE> m_eLocationMode ;
public:
  EOCV& operator=(const EOCV& other);
public:
  EOCV(const EOCV& other);
public:
  void Dump();
public:
  EOCV();
public:
  virtual ~EOCV() throw();
public:
  void ComputeDefaultTolerances(EROIBW8* roi, OEV_UINT32 threshold);
public:
  void Save(ESerializer* serializer);
public:
  void Load(ESerializer* serializer);
public:
  BOOL AreAllFreeObjectsSelected();
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateObjects(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  EOCVChar& GetFreeChar(OEV_INT32 index);
public:
  void SetFreeChar(OEV_INT32 index, EOCVChar& freeChar);
public:
  OEV_UINT32 GetFreeCharCount();
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateChars(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  EOCVText& GetText(OEV_INT32 index);
public:
  void SetText(OEV_INT32 index, EOCVText& text);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void SetTemplateImage(EROIBW8* templateImage, EROIBW8* objectsImage);
public:
  void SetTemplateImage(EROIBW8* templateImage);
public:
  EROIBW8* GetTemplateImage();
public:
  void CreateTemplateObjects(ECodedImage* codedImage, E_SELECTION_MODE codedObjectsSelectionFlag);
public:
  void SelectTemplateObjects(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE objectsSelectionFlag);
public:
  void DeleteTemplateObjects(E_SELECTION_MODE objectsSelectionFlag);
public:
  void CreateTemplateChars(E_SELECTION_MODE objectsSelectionFlag, OCV_CHAR_CREATION_MODES creationMode);
public:
  void SelectTemplateChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE charsSelectionFlag);
public:
  void DeleteTemplateChars(E_SELECTION_MODE charsSelectionFlag);
public:
  void CreateTemplateTexts(E_SELECTION_MODE charsSelectionFlag);
public:
  void SelectTemplateTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE textsSelectionFlag);
public:
  void DeleteTemplateTexts(E_SELECTION_MODE textsSelectionFlag);
public:
  void SelectSampleTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE textsSelectionFlag);
public:
  void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void Learn(EROIBW8* image, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  BOOL GetWhiteOnBlack();
public:
  void SetWhiteOnBlack(BOOL bWhiteOnBlack);
public:
  EBW8 GetTemplateThreshold();
public:
  void SetTemplateThreshold(EBW8 value);
public:
  float GetTemplateBackground();
public:
  void SetTemplateBackground(float value);
public:
  float GetTemplateForeground();
public:
  void SetTemplateForeground(float value);
public:
  EBW8 GetSampleThreshold();
public:
  void SetSampleThreshold(EBW8 value);
public:
  float GetSampleBackground();
public:
  void SetSampleBackground(float value);
public:
  float GetSampleForeground();
public:
  void SetSampleForeground(float value);
public:
  float GetSampleContrast();
public:
  float GetContrastAverage();
public:
  float GetContrastDeviation();
public:
  void SetContrastTolerance(float contrastTolerance);
public:
  float GetContrastTolerance();
public:
  float GetTemplateContrast();
public:
  OCV_LOCATION_MODE GetLocationMode();
public:
  void SetLocationMode(OCV_LOCATION_MODE locationMode);
public:
  BOOL GetReduceLocationScore();
public:
  void SetReduceLocationScore(BOOL bReduceLocationScore);
public:
  BOOL GetNormalizeLocationScore();
public:
  void SetNormalizeLocationScore(BOOL bNormalizeLocationScore);
public:
  BOOL GetAccurateTextsLocationScores();
public:
  void SetAccurateTextsLocationScores(BOOL bAccurateTextsLocationScores);
public:
  OEV_UINT32 GetNumTexts();
public:
  void GetTextParameters(EOCVText& Text, OEV_UINT32 textIndex);
public:
  void SetTextParameters(EOCVText& Text, OEV_UINT32 textIndex);
public:
  void GatherTextsParameters(EOCVText& Text, E_SELECTION_MODE textsSelectionFlag);
public:
  void ScatterTextsParameters(EOCVText& Text, E_SELECTION_MODE textsSelectionFlag);
public:
  OEV_UINT32 GetNumTextChars(OEV_UINT32 index);
public:
  void GetTextCharParameters(EOCVChar& ocvChar, OEV_UINT32 textIndex, OEV_UINT32 charIndex);
public:
  void SetTextCharParameters(EOCVChar& ocvChar, OEV_UINT32 textIndex, OEV_UINT32 charIndex);
public:
  void GatherTextsCharsParameters(EOCVChar& ocvChar, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void ScatterTextsCharsParameters(EOCVChar& ocvChar, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, EOCVText& text, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawText(HDC graphicContext, EOCVText& text, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY, float panX, float panY);
public:
  OEV_UINT32 GetUsedQualityIndicators();
public:
  void SetUsedQualityIndicators(OEV_UINT32 un32UsedQualityIndicators);
public:
  BOOL GetResampleChars();
public:
  void SetResampleChars(BOOL bResampleChars);
public:
  OEV_UINT32 GetDiagnostics();
public:
  void Inspect(EROIBW8* sampleImage, OEV_UINT32 threshold);
public:
  OEV_UINT32 GetStatisticsCount();
public:
  void ClearStatistics();
public:
  void UpdateStatistics();
public:
  void AdjustShiftTolerances(EROIBW8* roi);
public:
  void AdjustTextsLocationRanges(float factor, E_SELECTION_MODE selection);
public:
  void AdjustTextsQualityRanges(float factor, E_SELECTION_MODE selection);
public:
  void AdjustCharsLocationRanges(float factor, E_SELECTION_MODE textSelection, E_SELECTION_MODE charSelection);
public:
  void AdjustCharsQualityRanges(float factor, E_SELECTION_MODE textSelection, E_SELECTION_MODE charSelection);
public:
  void ComputeDefaultTolerances(EROIBW8* roi);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE objectsSelectionFlag, float zoomX);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE objectsSelectionFlag);
public:
  void DrawTemplateObjectsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE objectsSelectionFlag);
public:
  void DrawTemplateObjectsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTemplateObjects(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateObjects(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateObjects(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag, float zoomX);
public:
  void DrawTemplateObjects(HDC graphicContext, E_SELECTION_MODE objectsSelectionFlag);
public:
  void DrawTemplateObjects(HDC graphicContext);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateCharsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTemplateChars(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateChars(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateChars(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateChars(HDC graphicContext, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateChars(HDC graphicContext);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTemplateTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTemplateTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTexts(HDC graphicContext);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTemplateTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTemplateTextsChars(HDC graphicContext);
public:
  void CreateTemplateObjects(ECodedImage* codedImage);
public:
  void SelectTemplateObjects(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
public:
  void DeleteTemplateObjects();
public:
  void CreateTemplateChars(E_SELECTION_MODE objectsSelectionFlag);
public:
  void CreateTemplateChars();
public:
  void SelectTemplateChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
public:
  void DeleteTemplateChars();
public:
  void CreateTemplateTexts();
public:
  void SelectTemplateTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
public:
  void DeleteTemplateTexts();
public:
  void SelectSampleTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
public:
  void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, E_SELECTION_MODE textsSelectionFlag);
public:
  void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
public:
  void Learn(EROIBW8* image, E_SELECTION_MODE textsSelectionFlag);
public:
  void Learn(EROIBW8* image);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, EOCVText& text, float zoomX, float zoomY, float originX);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, EOCVText& text, float zoomX, float zoomY);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, EOCVText& text, float zoomX);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, EOCVText& text);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, float zoomX, float zoomY, float originX);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, float zoomX, float zoomY);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, float zoomX);
public:
  void DrawTextWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text);
public:
  void DrawTextWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, float zoomX, float zoomY, float originX);
public:
  void DrawTextWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, float zoomX, float zoomY);
public:
  void DrawTextWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, float zoomX);
public:
  void DrawTextWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text);
public:
  void DrawText(HDC graphicContext, EOCVText& text, float zoomX, float zoomY, float originX);
public:
  void DrawText(HDC graphicContext, EOCVText& text, float zoomX, float zoomY);
public:
  void DrawText(HDC graphicContext, EOCVText& text, float zoomX);
public:
  void DrawText(HDC graphicContext, EOCVText& text);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, float zoomX);
public:
  void DrawTexts(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTexts(HDC graphicContext);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY, float panX);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX);
public:
  void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, EOCVText& text);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, EOCVText& text);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextCharsWithPredefinedPen(EDrawAdapter* graphicContext, EOCVText& text);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextChars(HDC graphicContext, EOCVText& text);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsCharsWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY, float originX);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX, float zoomY);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag, float zoomX);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag, E_SELECTION_MODE charsSelectionFlag);
public:
  void DrawTextsChars(HDC graphicContext, E_SELECTION_MODE textsSelectionFlag);
public:
  void DrawTextsChars(HDC graphicContext);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY, float panX);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y, float reducedX);
public:
  void GetTextCharPoint(OEV_UINT32 textIndex, OEV_UINT32 charIndex, OEV_INT32& x, OEV_INT32& y);
public:
  void AdjustTextsLocationRanges(float factor);
public:
  void AdjustTextsLocationRanges();
public:
  void AdjustTextsQualityRanges(float factor);
public:
  void AdjustTextsQualityRanges();
public:
  void AdjustCharsLocationRanges(float factor, E_SELECTION_MODE textSelection);
public:
  void AdjustCharsLocationRanges(float factor);
public:
  void AdjustCharsLocationRanges();
public:
  void AdjustCharsQualityRanges(float factor, E_SELECTION_MODE textSelection);
public:
  void AdjustCharsQualityRanges(float factor);
public:
  void AdjustCharsQualityRanges();
public:
  void Save(FILE* stream);
public:
  void Save(std::string stream);
public:
  void Load(FILE* stream);
public:
  void Load(std::string stream);
public:
  EOCV(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EPointShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPointShape_;
  //TODO: Write manual declarations here

public:
  EPointShape();
public:
  EPointShape(const EPointShape& other);
public:
  virtual ~EPointShape() throw();
public:
  virtual void SetCenterXY(float centerX, float centerY);
public:
  virtual void SetCenter(const EPoint& point);
public:
  virtual EPoint GetCenter() const;
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  void SetScale(float scale);
public:
  float GetScale();
public:
  void SetAngle(float angle);
public:
  float GetAngle();
public:
  BOOL operator==(const EPointShape& other) const;
public:
  BOOL operator!=(const EPointShape& other);
public:
  EPointShape& operator=(const EPointShape& other);
public:
  EPointShape* CopyTo(EPointShape* dest, BOOL bRecursive) const;
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL bDaughters);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  EPointShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EPeakVector : public EVector
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPeakVector_;
  
public:
  void* GetRawDataPtr() const;
public:
  void AddElement(EPeak element);
public:
  EPeak& operator[](OEV_UINT32 index) const;
public:
  EPeak GetElement(OEV_INT32 index);
public:
  void SetElement(OEV_INT32 index, EPeak value);
public:
  EPeakVector();
public:
  EPeakVector(const EPeakVector& other);
public:
  EPeakVector(OEV_UINT32 maxNumberOfElements);
public:
  virtual ~EPeakVector() throw();
public:
  EPeakVector& operator=(const EPeakVector& other);
public:
  EPeakVector(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EPointGauge : public EPointShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPointGauge_;
  //TODO: Write manual declarations here
public:
  void SetCenter(float x, float y)
  {
    SetCenterXY(x, y);
  }

  void SetTolerance(float tol, float angle)
  {
    SetTolerance(tol);
    SetToleranceAngle(angle);
  }

  virtual void SetActive(BOOL active, BOOL recurs)
  {
    this->EShape::SetActive(active, recurs);
  }

  void Set(const EPoint& center, float angle, float scale)
  {
    SetCenter(center);
    SetAngle(angle);
    SetScale(scale);
  }

public:
  void SetTolerances(float tolerance, float angle);
public:
  void SetTolerance(float tolerance);
public:
  float GetTolerance();
public:
  void SetToleranceAngle(float toleranceAngle);
public:
  float GetToleranceAngle();
public:
  BOOL GetHVConstraint();
public:
  void SetHVConstraint(BOOL bHVConstraint);
public:
  OEV_UINT32 GetThickness();
public:
  void SetThickness(OEV_UINT32 un32Thickness);
public:
  OEV_UINT32 GetSmoothing();
public:
  void SetSmoothing(OEV_UINT32 un32Smoothing);
public:
  void SetTransitionType(GGE_TRANSITION_TYPE eTransitionType);
public:
  GGE_TRANSITION_TYPE GetTransitionType();
public:
  void SetTransitionChoice(GGE_TRANSITION_CHOICE eTransitionChoice);
public:
  GGE_TRANSITION_CHOICE GetTransitionChoice();
public:
  void SetTransitionIndex(OEV_UINT32 un32TransitionIndex);
public:
  OEV_UINT32 GetTransitionIndex();
public:
  void SetThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetMinAmplitude(OEV_UINT32 un32MinAmplitude);
public:
  OEV_UINT32 GetMinAmplitude();
public:
  void SetMinArea(OEV_UINT32 un32MinArea);
public:
  OEV_UINT32 GetMinArea();
public:
  OEV_UINT32 GetNumMeasuredPoints();
public:
  EPeak GetMeasuredPeak(OEV_UINT32 index);
public:
  BOOL GetValid();
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  EPointGauge();
public:
  EPointGauge(float centerX, float centerY);
public:
  EPointGauge(const EPointGauge& other);
public:
  virtual ~EPointGauge() throw();
public:
  EPointGauge& operator=(const EPointGauge& other);
public:
  EPointGauge* CopyTo(EPointGauge* other, BOOL recursive) const;
public:
  EPoint GetShape();
public:
  virtual void SetCenter(const EPoint& center);
public:
  virtual void SetCenterXY(float centerX, float centerY);
public:
  virtual void SetActive(BOOL active);
public:
  void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
public:
  BOOL GetRectangularSamplingArea();
public:
  void Measure(EROIBW8* sourceImage);
public:
  virtual void Process(EROIBW8* sourceImage, BOOL daughters);
public:
  EPoint GetMeasuredPoint(OEV_UINT32 index);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  void SetTolerances(float tolerance);
public:
  EPeak GetMeasuredPeak();
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  virtual void Process(EROIBW8* sourceImage);
public:
  EPoint GetMeasuredPoint();
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  EPointGauge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EPseudoColorLookup
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EPseudoColorLookup_;
  
public:
  EPseudoColorLookup& operator=(const EPseudoColorLookup& other);
public:
  EPseudoColorLookup(const EPseudoColorLookup& other);
public:
  EPseudoColorLookup();
public:
  void SetShading(EC24 black, EC24 white, E_COLOR_SYSTEM colorSystem, BOOL wrap);
public:
  virtual ~EPseudoColorLookup() throw();
public:
  void SetShading(EC24 black, EC24 white, E_COLOR_SYSTEM colorSystem);
public:
  EPseudoColorLookup(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQuadrilateral
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQuadrilateral_;
  
public:
  EQuadrilateral();
public:
  EQuadrilateral(const std::vector<EPoint>& corners);
public:
  EQuadrilateral(const EQuadrilateral& other);
public:
  std::vector<EPoint> GetCorners();
public:
  EQuadrilateral& operator=(const EQuadrilateral& other);
public:
  virtual ~EQuadrilateral() throw();
public:
  EQuadrilateral(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQRCodeGeometry
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeGeometry_;
  
public:
  EQRCodeGeometry();
public:
  EQRCodeGeometry(const EQRCodeGeometry& other);
public:
  EQRCodeGeometry(const EQuadrilateral& position, const std::vector<EPoint>& finderPatternCenters);
public:
  EQuadrilateral GetPosition();
public:
  std::vector<EPoint> GetFinderPatternCenters();
public:
  void Draw(HDC hDC, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC hDC, float zoomX, float zoomY, float panX, float panY);
public:
  EQRCodeGeometry& operator=(const EQRCodeGeometry& other);
public:
  virtual ~EQRCodeGeometry() throw();
public:
  EQRCodeGeometry(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQRCodeDecodedStreamPart
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeDecodedStreamPart_;
  
public:
  EQRCodeDecodedStreamPart();
public:
  EQRCodeDecodedStreamPart(const EQRCodeDecodedStreamPart& other);
public:
  EQRCodeEncoding GetEncoding();
public:
  std::vector<OEV_UINT8> GetDecodedData();
public:
  EQRCodeDecodedStreamPart& operator=(const EQRCodeDecodedStreamPart& other);
public:
  virtual ~EQRCodeDecodedStreamPart() throw();
public:
  EQRCodeDecodedStreamPart(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQRCodeDecodedStream
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeDecodedStream_;
  
public:
  EQRCodeDecodedStream();
public:
  EQRCodeDecodedStream(const EQRCodeDecodedStream& other);
public:
  EQRCodeCodingMode GetCodingMode();
public:
  OEV_UINT32 GetApplicationIndicator();
public:
  std::vector<OEV_UINT8> GetRawBitstream();
public:
  std::vector<EQRCodeDecodedStreamPart> GetDecodedStreamParts();
public:
  EQRCodeDecodedStream& operator=(const EQRCodeDecodedStream& other);
public:
  virtual ~EQRCodeDecodedStream() throw();
public:
  EQRCodeDecodedStream(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQRCode
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCode_;
  
public:
  EQRCode();
public:
  EQRCode(const EQRCode& other);
public:
  EQRCodeModel GetModel();
public:
  OEV_UINT32 GetVersion();
public:
  EQRCodeLevel GetLevel();
public:
  EQRCodeGeometry& GetGeometry();
public:
  EQRCodeDecodedStream& GetDecodedStream();
public:
  float GetUnusedErrorCorrection();
public:
  bool GetIsDecodingReliable();
public:
  void Draw(HDC hDC, float zoomX, float zoomY, float panX, float panY);
public:
  void DrawWithCurrentPen(HDC hDC, float zoomX, float zoomY, float panX, float panY);
public:
  EQRCode& operator=(const EQRCode& other);
public:
  virtual ~EQRCode() throw();
public:
  EQRCode(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EQRCodeReader
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeReader_;
  
public:
  EQRCodeReader();
public:
  virtual ~EQRCodeReader() throw();
public:
  void SetSearchField(EROIBW8& field);
public:
  void SetScanPrecision(EQRCodeScanPrecision precision);
public:
  EQRCodeScanPrecision GetScanPrecision();
public:
  void SetMinimumScore(float minScore);
public:
  float GetMinimumScore();
public:
  void SetMinimumIsotropy(float isotropy);
public:
  float GetMinimumIsotropy();
public:
  void SetPerspectiveMode(EQRCodePerspectiveMode mode);
public:
  EQRCodePerspectiveMode GetPerspectiveMode();
public:
  void SetFilterOutUnreliablyDecodedQRCodes(bool filter);
public:
  bool GetFilterOutUnreliablyDecodedQRCodes();
public:
  void SetCellPolarityConfidenceThreshold(float threshold);
public:
  float GetCellPolarityConfidenceThreshold();
public:
  void SetSearchedModels(const std::vector<EQRCodeModel>& models);
public:
  std::vector<EQRCodeModel> GetSearchedModels();
public:
  void SetMinimumVersion(OEV_UINT32 version);
public:
  OEV_UINT32 GetMinimumVersion();
public:
  void SetMaximumVersion(OEV_UINT32 version);
public:
  OEV_UINT32 GetMaximumVersion();
public:
  std::vector<EQRCodeGeometry> Detect();
public:
  EQRCode Decode(const EQRCodeGeometry& geometry);
public:
  std::vector<EQRCode> Read();
public:
  EQRCodeReader(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class ERectangleGauge : public ERectangleShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangleGauge_;
  //TODO: Write manual declarations here
public:
  void Set( const ERectangle& rect)
  {
    this->SetCenter(rect.GetCenter( ));
    this->SetSize(rect.GetSizeX( ), rect.GetSizeY( ));
    this->SetAngle(rect.GetAngle( ));
  }

public:
  float GetFilteringThreshold();
public:
  void SetFilteringThreshold(float f32FilteringThreshold);
public:
  OEV_UINT32 GetNumFilteringPasses();
public:
  void SetNumFilteringPasses(OEV_UINT32 un32NumFilteringPasses);
public:
  OEV_UINT32 GetNumValidSamples();
public:
  float GetAverageDistance();
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2, OEV_INT32 side3);
public:
  void GetMinNumFitSamples(OEV_INT32& side0, OEV_INT32& side1, OEV_INT32& side2, OEV_INT32& side3);
public:
  OEV_UINT32 AddSkipRange(const OEV_UINT32 start, const OEV_UINT32 end);
public:
  OEV_UINT32 GetNumSkipRanges() const;
public:
  void GetSkipRange(const OEV_UINT32 index, OEV_UINT32& start, OEV_UINT32& end) const;
public:
  void RemoveSkipRange(const OEV_UINT32 index);
public:
  void RemoveAllSkipRanges();
public:
  ERectangleGauge();
public:
  virtual ~ERectangleGauge() throw();
public:
  ERectangleGauge* CopyTo(ERectangleGauge* other, BOOL recursive) const;
public:
  ERectangleGauge(const ERectangleGauge& other);
public:
  ERectangleGauge& operator=(const ERectangleGauge& other);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  ERectangle GetShape();
public:
  virtual void SetActive(BOOL active);
public:
  virtual void SetActive(BOOL active, BOOL daughters);
public:
  void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
public:
  BOOL GetRectangularSamplingArea();
public:
  float GetInnerFilteringThreshold();
public:
  void SetInnerFilteringThreshold(float f32InnerFilteringThreshold);
public:
  void DisableInnerFiltering();
public:
  BOOL GetInnerFilteringEnabled();
public:
  OEV_UINT32 GetActiveEdges();
public:
  void SetActiveEdges(OEV_UINT32 un32ActiveEdges);
public:
  void SetTolerance(float f32Tolerance);
public:
  float GetTolerance();
public:
  void SetHVConstraint(BOOL bHVConstraint);
public:
  BOOL GetHVConstraint();
public:
  void SetTransitionType(GGE_TRANSITION_TYPE eTransitionType);
public:
  GGE_TRANSITION_TYPE GetTransitionType();
public:
  void SetTransitionChoice(GGE_TRANSITION_CHOICE eTransitionChoice);
public:
  GGE_TRANSITION_CHOICE GetTransitionChoice();
public:
  void SetTransitionIndex(OEV_UINT32 un32TransitionIndex);
public:
  OEV_UINT32 GetTransitionIndex();
public:
  void SetThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetMinAmplitude(OEV_UINT32 un32MinAmplitude);
public:
  OEV_UINT32 GetMinAmplitude();
public:
  void SetMinArea(OEV_UINT32 un32MinArea);
public:
  OEV_UINT32 GetMinArea();
public:
  OEV_UINT32 GetThickness();
public:
  void SetThickness(OEV_UINT32 un32Thickness);
public:
  OEV_UINT32 GetSmoothing();
public:
  void SetSmoothing(OEV_UINT32 un32Smoothing);
public:
  float GetSamplingStep();
public:
  void SetSamplingStep(float f32SamplingStep);
public:
  OEV_UINT32 GetNumSamples() const;
public:
  OEV_UINT32 GetNumSamplesx() const;
public:
  OEV_UINT32 GetNumSamplesy() const;
public:
  OEV_UINT32 GetNumSamplesX() const;
public:
  OEV_UINT32 GetNumSamplesY() const;
public:
  virtual void Process(EROIBW8* sourceImage, BOOL daughters);
public:
  BOOL GetKnownAngle();
public:
  void SetKnownAngle(BOOL bKnownAngle);
public:
  void Measure(EROIBW8* sourceImage);
public:
  void MeasureWithoutFitting(EROIBW8* sourceImage);
public:
  void MeasureSample(EROIBW8* sourceImage, OEV_UINT32 pathIndex);
public:
  ERectangle GetMeasuredRectangle();
public:
  EPoint GetMeasuredPoint(OEV_UINT32 index);
public:
  BOOL GetValid();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  BOOL GetSamplex(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSamplex(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSampley(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSampley(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSampleX(EPoint& point, OEV_UINT32 index);
public:
  BOOL GetSampleX(EPeak& peak, OEV_UINT32 index);
public:
  BOOL GetSampleY(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSampleY(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSample(EPoint& pt, OEV_UINT32 index);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
public:
  void SetMinNumFitSamples(OEV_INT32 side0);
public:
  virtual void Process(EROIBW8* sourceImage);
public:
  EPoint GetMeasuredPoint();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  virtual BOOL HitTest();
public:
  ERectangleGauge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EUnwarpingLut
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EUnwarpingLut_;
  
public:
  EUnwarpingLut& operator=(const EUnwarpingLut& other);
public:
  EUnwarpingLut(const EUnwarpingLut& other);
public:
  EUnwarpingLut();
public:
  virtual ~EUnwarpingLut() throw();
public:
  EUnwarpingLut(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EWedge : public EFrame
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedge_;
  //TODO: Write manual declarations here
public:
void Set(EPoint Center, FLOAT32 f32Diameter, FLOAT32 f32Breadth= 0, FLOAT32 f32OrgAngle= 0, BOOL bDirect= TRUE)
{
  SetCenter(Center);
  SetDiameters(f32Diameter, f32Breadth);
  SetAngle(f32OrgAngle);
  SetDirect(bDirect);
}

void Set(EPoint Center, FLOAT32 f32Diameter, FLOAT32 f32Breadth, FLOAT32 f32OrgAngle, FLOAT32 f32Amplitude)
{
  SetCenter(Center);
  SetDiameters(f32Diameter, f32Breadth);
  SetAngle(f32OrgAngle);
  SetAmplitude(f32Amplitude);
}

public:
  EWedge();
public:
  EWedge(const EPoint& center, float diameter, float breadth, float originAngle, BOOL direct);
public:
  EWedge(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  EWedge(const EPoint& center, float diameter, float breadth, float originAngle, float amplitude);
public:
  EWedge(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth, BOOL fullCircle);
public:
  EWedge(const EWedge& other);
public:
  EWedge& operator=(const EWedge& other);
public:
  EWedge* CopyTo(EWedge* destinationImage) const;
public:
  void Set(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth, BOOL fullCircle);
public:
  void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  void SetAmplitude(float ampl);
public:
  float GetAmplitude() const;
public:
  void SetRadii(float radius, float breadth);
public:
  void SetDiameters(float diameter, float breadth);
public:
  float GetInnerDiameter() const;
public:
  float GetOuterDiameter() const;
public:
  float GetInnerRadius() const;
public:
  float GetOuterRadius() const;
public:
  float GetBreadth() const;
public:
  float GetInnerArcLength() const;
public:
  float GetOuterArcLength() const;
public:
  float GetOrgAngle() const;
public:
  float GetApexAngle() const;
public:
  float GetEndAngle() const;
public:
  EPoint GetInnerOrg() const;
public:
  EPoint GetInnerApex() const;
public:
  EPoint GetInnerEnd() const;
public:
  EPoint GetOuterOrg() const;
public:
  EPoint GetOuterApex() const;
public:
  EPoint GetOuterEnd() const;
public:
  EPoint GetInnerPoint(float fraction) const;
public:
  EPoint GetOuterPoint(float fraction) const;
public:
  EPoint GetPoint(float breadthFraction, float angleFraction) const;
public:
  BOOL GetFullBreadth() const;
public:
  BOOL GetFullCircle() const;
public:
  BOOL GetDirect() const;
public:
  void SetDirect(BOOL direct);
public:
  void GetMidEdges(EPoint& a, EPoint& AA, EPoint& r, EPoint& RR);
public:
  void GetCorners(EPoint& ar, EPoint& AAr, EPoint& aRR, EPoint& AARR);
public:
  void GetEdges(ELine& a, ELine& AA, ECircle& r, ECircle& RR);
public:
  virtual ~EWedge() throw();
public:
  EWedge(const EPoint& center, float diameter, float breadth, float originAngle);
public:
  EWedge(const EPoint& center, float diameter, float breadth);
public:
  EWedge(const EPoint& center, float diameter);
public:
  EWedge(const EPoint& center, const EPoint& origin, float breadth);
public:
  EWedge(const EPoint& center, const EPoint& origin);
public:
  EWedge(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth);
public:
  EWedge(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void Set(const EPoint& center, const EPoint& origin, float breadth);
public:
  void Set(const EPoint& center, const EPoint& origin);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth);
public:
  void Set(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth);
public:
  void SetFromTwoPoints(const EPoint& center, const EPoint& origin);
public:
  void SetRadii(float radius);
public:
  void SetDiameters(float diameter);
public:
  EWedge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EWedgeShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedgeShape_;
  //TODO: Write manual declarations here
public:
void SetCenter(float x, float y)
{
  SetCenterXY(x, y);
}

void Set()
{
  Set(EWedge( EPoint( 0, 0), 1, 1));
}
void Set( EWedge wedge)
{
  SetWedge(wedge);
}

void Set( EPoint center, FLOAT32 diameter, FLOAT32 breadth= 0, FLOAT32 orgAngle= 0, BOOL direct= TRUE)
{
  SetCenter(center);
  SetDiameters(diameter, breadth);
  SetDirect(direct);
  SetAngle(orgAngle);
}

void Set( EPoint center, FLOAT32 diameter, FLOAT32 breadth, FLOAT32 orgAngle, FLOAT32 amplitude)
{
  SetCenter(center);
  SetDiameters(diameter, breadth);
  SetAngle(orgAngle);
  SetAmplitude(amplitude);
}

void Set( EPoint center, EPoint origin, FLOAT32 breadth= 0, BOOL direct= TRUE)
{
  SetFromTwoPoints(center, origin, breadth, direct);
}

void Set( EPoint origin, EPoint middle, EPoint end, FLOAT32 breadth= 0, BOOL full= TRUE)
{
  SetFromOriginMiddleEnd(origin, middle, end, breadth, full);
}


public:
  EWedgeShape();
public:
  EWedgeShape(const EWedgeShape& other);
public:
  virtual ~EWedgeShape() throw();
public:
  EPoint GetCenter() const;
public:
  void SetCenter(const EPoint& center);
public:
  void SetCenterXY(float centerX, float centerY);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  void SetAngle(float f32Angle);
public:
  float GetScale() const;
public:
  void SetScale(float f32Scale);
public:
  EWedgeShape& operator=(const EWedgeShape& other);
public:
  EWedgeShape* CopyTo(EWedgeShape* dest, BOOL bRecursive) const;
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  void SetFromCenterAndOrigin(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth, BOOL fullCircle);
public:
  virtual void SetWedge(const EWedge& wedge);
public:
  void SetAmplitude(float amplitude);
public:
  float GetAmplitude() const;
public:
  virtual void SetRadii(float outerRadius, float breadth);
public:
  virtual void SetDiameters(float diameter, float breadth);
public:
  float GetInnerDiameter() const;
public:
  float GetOuterDiameter() const;
public:
  float GetInnerRadius() const;
public:
  float GetOuterRadius() const;
public:
  float GetBreadth() const;
public:
  float GetInnerArcLength() const;
public:
  float GetOuterArcLength() const;
public:
  float GetOrgAngle() const;
public:
  float GetApexAngle() const;
public:
  float GetEndAngle() const;
public:
  EPoint GetInnerOrg() const;
public:
  EPoint GetInnerApex() const;
public:
  EPoint GetInnerEnd() const;
public:
  EPoint GetOuterOrg() const;
public:
  EPoint GetOuterApex() const;
public:
  EPoint GetOuterEnd() const;
public:
  EPoint GetInnerPoint(float fraction) const;
public:
  EPoint GetOuterPoint(float fraction) const;
public:
  EPoint GetPoint(float breadthFraction, float angleFraction) const;
public:
  BOOL GetFullBreadth() const;
public:
  BOOL GetFullCircle() const;
public:
  BOOL GetDirect();
public:
  void SetDirect(BOOL direct);
public:
  void GetMidEdges(EPoint& a, EPoint& AA, EPoint& r, EPoint& RR);
public:
  void GetCorners(EPoint& ar, EPoint& AAr, EPoint& aRR, EPoint& AARR);
public:
  void GetEdges(ELine& a, ELine& AA, ECircle& r, ECircle& RR);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
public:
  void SetFromCenterAndOrigin(const EPoint& center, const EPoint& origin, float breadth);
public:
  void SetFromCenterAndOrigin(const EPoint& center, const EPoint& origin);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  virtual void SetRadii(float outerRadius);
public:
  virtual void SetDiameters(float diameter);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  virtual BOOL HitTest();
public:
  EWedgeShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EWedgeGauge : public EWedgeShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedgeGauge_;
  //TODO: Write manual declarations here
public:
  void SetActive(bool active, bool recursive)
  {
    this->EShape::SetActive(active, recursive);
  }

public:
  float GetFilteringThreshold();
public:
  void SetFilteringThreshold(float f32FilteringThreshold);
public:
  OEV_UINT32 GetNumFilteringPasses();
public:
  void SetNumFilteringPasses(OEV_UINT32 un32NumFilteringPasses);
public:
  OEV_UINT32 GetNumValidSamples();
public:
  float GetAverageDistance();
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2, OEV_INT32 side3);
public:
  void GetMinNumFitSamples(OEV_INT32& side0, OEV_INT32& side1, OEV_INT32& side2, OEV_INT32& side3);
public:
  OEV_UINT32 AddSkipRange(const OEV_UINT32 start, const OEV_UINT32 end);
public:
  OEV_UINT32 GetNumSkipRanges() const;
public:
  void GetSkipRange(const OEV_UINT32 index, OEV_UINT32& start, OEV_UINT32& end) const;
public:
  void RemoveSkipRange(const OEV_UINT32 index);
public:
  void RemoveAllSkipRanges();
public:
  EWedgeGauge();
public:
  virtual ~EWedgeGauge() throw();
public:
  EWedgeGauge* CopyTo(EWedgeGauge* other, BOOL recursive) const;
public:
  EWedgeGauge(const EWedgeGauge& other);
public:
  EWedgeGauge& operator=(const EWedgeGauge& other);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  EWedge GetShape();
public:
  virtual void SetWedge(const EWedge& wedge);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth, BOOL direct);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth, BOOL full);
public:
  virtual void SetActive(BOOL active);
public:
  void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
public:
  BOOL GetRectangularSamplingArea();
public:
  OEV_UINT32 GetActiveEdges();
public:
  void SetActiveEdges(OEV_UINT32 un32ActiveEdges);
public:
  virtual void SetDiameters(float diameter, float breadth);
public:
  virtual void SetRadii(float outerRadius, float breadth);
public:
  void SetTolerance(float f32Tolerance);
public:
  float GetTolerance();
public:
  void SetHVConstraint(BOOL bHVConstraint);
public:
  BOOL GetHVConstraint();
public:
  void SetTransitionType(GGE_TRANSITION_TYPE transitionType);
public:
  GGE_TRANSITION_TYPE GetTransitionType();
public:
  void SetTransitionChoice(GGE_TRANSITION_CHOICE transitionChoice);
public:
  GGE_TRANSITION_CHOICE GetTransitionChoice();
public:
  void SetTransitionIndex(OEV_UINT32 un32TransitionIndex);
public:
  OEV_UINT32 GetTransitionIndex();
public:
  void SetThreshold(OEV_UINT32 un32Threshold);
public:
  OEV_UINT32 GetThreshold();
public:
  void SetMinAmplitude(OEV_UINT32 un32MinAmplitude);
public:
  OEV_UINT32 GetMinAmplitude();
public:
  void SetMinArea(OEV_UINT32 un32MinArea);
public:
  OEV_UINT32 GetMinArea();
public:
  OEV_UINT32 GetThickness();
public:
  void SetThickness(OEV_UINT32 un32Thickness);
public:
  OEV_UINT32 GetSmoothing();
public:
  void SetSmoothing(OEV_UINT32 un32Smoothing);
public:
  float GetSamplingStep();
public:
  void SetSamplingStep(float f32SamplingStep);
public:
  OEV_UINT32 GetNumSamples() const;
public:
  OEV_UINT32 GetNumSamplesa() const;
public:
  OEV_UINT32 GetNumSamplesr() const;
public:
  OEV_UINT32 GetNumSamplesA() const;
public:
  OEV_UINT32 GetNumSamplesR() const;
public:
  virtual void Process(EROIBW8* sourceImage, BOOL daughters);
public:
  void Measure(EROIBW8* sourceImage);
public:
  void MeasureWithoutFitting(EROIBW8* sourceImage);
public:
  void MeasureSample(EROIBW8* sourceImage, OEV_UINT32 pathIndex);
public:
  EWedge GetMeasuredWedge();
public:
  EPoint GetMeasuredPoint(OEV_UINT32 index);
public:
  BOOL GetValid();
public:
  BOOL GetSamplea(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSamplea(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSampler(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSampler(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSampleA(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSampleA(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSampleR(EPoint& pt, OEV_UINT32 index);
public:
  BOOL GetSampleR(EPeak& pk, OEV_UINT32 index);
public:
  BOOL GetSample(EPoint& pt, OEV_UINT32 index);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode, BOOL daughters);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX, float originY);
public:
  virtual BOOL HitTest(BOOL daughters);
public:
  virtual void Drag(OEV_INT32 x, OEV_INT32 y);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
public:
  void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
public:
  void SetMinNumFitSamples(OEV_INT32 side0);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin, float breadth);
public:
  virtual void SetFromTwoPoints(const EPoint& center, const EPoint& origin);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end, float breadth);
public:
  virtual void SetFromOriginMiddleEnd(const EPoint& origin, const EPoint& middle, const EPoint& end);
public:
  virtual void Process(EROIBW8* sourceImage);
public:
  EPoint GetMeasuredPoint();
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingMode);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingMode);
public:
  virtual void Draw(HDC graphicContext);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(EDrawAdapter* graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void PlotWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height, float originX);
public:
  void Plot(HDC graphicContext, GGE_PLOT_ITEMS drawItems, float width, float height);
public:
  virtual BOOL HitTest();
public:
  EWedgeGauge(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EWorldShape : public EShape
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EWorldShape_;
  //TODO: Write manual declarations here
public:
  UINT32 RebuildGrid(FLOAT32 colPitch, FLOAT32 rowPitch, UINT32 centerIndex, const EPoint& worldCenter, BOOL)
  {
    return RebuildGrid(colPitch, rowPitch, worldCenter, centerIndex);
  }
  UINT32 RebuildGrid(FLOAT32 colPitch, FLOAT32 rowPitch, UINT32 centerIndex, const EPoint& worldCenter)
  {
    return RebuildGrid(colPitch, rowPitch, worldCenter, centerIndex);
  }
  void SetAngle(float val, bool)
  {
    SetAngle(val);
  }

public:
  EWorldShape(const EWorldShape& other);
public:
  EWorldShape();
public:
  virtual ~EWorldShape() throw();
public:
  EWorldShape& operator=(const EWorldShape& other);
public:
  EPoint GetCenter() const;
public:
  void SetCenter(const EPoint& center);
public:
  void SetCenter(float centerX, float centerY);
public:
  float GetCenterX() const;
public:
  float GetCenterY() const;
public:
  float GetAngle() const;
public:
  void SetAngle(float f32Angle);
public:
  float GetScale() const;
public:
  void SetScale(float f32Scale);
public:
  float GetRatio();
public:
  void SetRatio(float ratio);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength, float distortionStrength, float distortionStrength2, float opticalCenterX, float opticalCenterY, OEV_UINT32 calibrationModes);
public:
  void SetSensorSize(OEV_INT32 width, OEV_INT32 height);
public:
  void SetFieldSize(float width, float height);
public:
  void SetResolution(float resolutionX, float resolutionY);
public:
  OEV_INT32 GetSensorWidth();
public:
  OEV_INT32 GetSensorHeight();
public:
  float GetFieldWidth();
public:
  float GetFieldHeight();
public:
  float GetXResolution();
public:
  float GetYResolution();
public:
  void SetPerspective(float tiltXAngle, float tiltYAngle, float perspectiveStrength);
public:
  float GetTiltXAngle();
public:
  float GetTiltYAngle();
public:
  float GetPerspectiveStrength();
public:
  void SetDistortion(float distortionStrength, float distortionStrength2);
public:
  float GetDistortionStrength();
public:
  float GetDistortionStrength2();
public:
  OEV_UINT32 GetCalibrationModes();
public:
  void SetCalibrationModes(OEV_UINT32 calibrationModes);
public:
  void EmptyLandmarks();
public:
  void AddPoint(const EPoint& sensorPoint);
public:
  void AddLandmark(const EPoint& sensorPoint, const EPoint& worldPoint);
public:
  void RemoveLandmark(OEV_UINT32 index);
public:
  void Calibrate(OEV_UINT32 calibrationModes);
public:
  OEV_UINT32 AutoCalibrate(BOOL testEmpiricalModes);
public:
  OEV_UINT32 AutoCalibrateLandmarks(BOOL testEmpiricalModes);
public:
  OEV_UINT32 AutoCalibrateDotGrid(EROIBW8* sourceImage, float columnPitch, float rowPitch, BOOL testEmpiricalModes);
public:
  BOOL CalibrationSucceeded();
public:
  float GetGridPointsMeanVariation();
public:
  float GetGridPointsMaxVariation();
public:
  float GetGridPointsMeanVariationThreshold();
public:
  void SetGridPointsMeanVariationThreshold(float meanVariationThreshold);
public:
  float GetGridPointsMaxVariationThreshold();
public:
  void SetGridPointsMaxVariationThreshold(float maxVariationThreshold);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, OEV_UINT32 centerIndex, BOOL direct);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const EPoint& worldCenter, OEV_UINT32 centerIndex, BOOL direct);
public:
  void Unwarp(EROIBW8* sourceImage, EROIBW8* destinationImage, BOOL interpolate);
public:
  void Unwarp(EROIC24* sourceImage, EROIC24* destinationImage, BOOL interpolate);
public:
  void Unwarp(EUnwarpingLut* lookupTable, EROIBW8* sourceImage, EROIBW8* destinationImage, BOOL interpolate);
public:
  void Unwarp(EUnwarpingLut* lookupTable, EROIC24* sourceImage, EROIC24* destinationImage, BOOL interpolate);
public:
  void SetupUnwarp(EUnwarpingLut* lookupTable, EROIBW8* sourceImage, BOOL interpolate);
public:
  void SetupUnwarp(EUnwarpingLut* lookupTable, EROIC24* sourceImage, BOOL interpolate);
public:
  void Invalidate();
public:
  EPoint SensorToWorld(const EPoint& sensorPoint);
public:
  EPoint WorldToSensor(const EPoint& worldPoint);
public:
  OEV_UINT32 GetNumLandmarkElements() const;
public:
  ELandmark& GetLandmarkElement(OEV_UINT32 i);
public:
  const ELandmark& GetLandmarkElement(OEV_UINT32 i) const;
public:
  float GetOpticalCenterX() const;
public:
  float GetOpticalCenterY() const;
public:
  void SetOpticalCenter(float centerX, float centerY);
public:
  virtual INS_SHAPE_TYPES GetType();
public:
  void SetSize(float sizeX, float sizeY);
public:
  virtual void Closest();
public:
  virtual BOOL HitTest(BOOL bDaughters);
public:
  virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingModes, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingModes, BOOL daughters);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingModes, BOOL daughters);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingModes, BOOL daughters);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
public:
  virtual float GetZoomX();
public:
  virtual float GetZoomY();
public:
  virtual float GetPanX();
public:
  virtual float GetPanY();
public:
  virtual void SetZoom(float zoomX, float zoomY);
public:
  virtual void SetPan(float panX, float panY);
public:
  void DrawGridWithPredefinedPen(HDC graphicContext);
public:
  void DrawGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawGridWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawGrid(HDC graphicContext);
public:
  void DrawLandmarks(HDC graphicContext);
public:
  void DrawLandmarks(EDrawAdapter* graphicContext);
public:
  void HitLandmark();
public:
  OEV_UINT32 GetHitLandmark();
public:
  void DragLandmark(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
public:
  virtual void EnableTypeFilter(OEV_UINT32 un32Types);
public:
  virtual void DisableTypeFilter();
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength, float distortionStrength, float distortionStrength2, float opticalCenterX, float opticalCenterY);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength, float distortionStrength, float distortionStrength2, float opticalCenterX);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength, float distortionStrength, float distortionStrength2);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength, float distortionStrength);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle, float perspectiveStrength);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle, float tiltYAngle);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle, float tiltXAngle);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY, float angle);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX, float centerY);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight, float centerX);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth, float fieldHeight);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight, float fieldWidth);
public:
  void SetSensor(OEV_INT32 sensorWidth, OEV_INT32 sensorHeight);
public:
  void SetFieldSize(float width);
public:
  void SetResolution(float resolutionX);
public:
  void SetDistortion(float distortionStrength);
public:
  void Calibrate();
public:
  OEV_UINT32 AutoCalibrate();
public:
  OEV_UINT32 AutoCalibrateLandmarks();
public:
  OEV_UINT32 AutoCalibrateDotGrid(EROIBW8* sourceImage, float columnPitch, float rowPitch);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, OEV_UINT32 centerIndex);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const EPoint& worldCenter, OEV_UINT32 centerIndex);
public:
  OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const EPoint& worldCenter);
public:
  void Unwarp(EROIBW8* sourceImage, EROIBW8* destinationImage);
public:
  void Unwarp(EROIC24* sourceImage, EROIC24* destinationImage);
public:
  void Unwarp(EUnwarpingLut* lookupTable, EROIBW8* sourceImage, EROIBW8* destinationImage);
public:
  void Unwarp(EUnwarpingLut* lookupTable, EROIC24* sourceImage, EROIC24* destinationImage);
public:
  void SetupUnwarp(EUnwarpingLut* lookupTable, EROIBW8* sourceImage);
public:
  void SetupUnwarp(EUnwarpingLut* lookupTable, EROIC24* sourceImage);
public:
  void SetSize(float sizeX);
public:
  virtual BOOL HitTest();
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, INS_DRAWING_MODES drawingModes);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, INS_DRAWING_MODES drawingModes);
public:
  virtual void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext, INS_DRAWING_MODES drawingModes);
public:
  virtual void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  virtual void Draw(HDC graphicContext, INS_DRAWING_MODES drawingModes);
public:
  virtual void Draw(HDC graphicContext);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX, float maximumX, float minimumY);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX, float maximumX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, float minimumX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX, float maximumX, float minimumY);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX, float maximumX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float minimumX);
public:
  void DrawCrossGridWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX, float maximumX);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext, float minimumX);
public:
  void DrawCrossGridWithPredefinedPen(EDrawAdapter* graphicContext);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX, float minimumY);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX);
public:
  void DrawCrossGrid(HDC graphicContext, float minimumX);
public:
  void DrawCrossGrid(HDC graphicContext);
public:
  virtual void SetZoom(float zoomX);
public:
  virtual void SetZoom();
public:
  virtual void SetPan(float panX);
public:
  virtual void SetPan();
public:
  EWorldShape(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class EOCVObject
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCVObject_;
  
  Euresys::eVision::Internal::Properties::Wrapped::Property_Pointer<EListItem> m_pCodedObject;
  Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<bool> m_bSelected;
public:
  EOCVObject();
public:
  virtual ~EOCVObject() throw();
public:
  EOCVObject(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
};

class LicensingHelpers
{
public:
  Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_LicensingHelpers_;
  
public:
  static void Invalidate();
public:
  static void Validate();
};


namespace Euresys
{

  namespace eVision
  {
    class Exception :  public std::runtime_error
    {
    public:
      Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_Exception_;
      //TODO: Write manual declarations here
private:
  std::string message_;
public:
  const char* What() const
  {
    Exception* pThis = const_cast<Exception*>(this);
    pThis->message_ = this->Internal_What();
    return message_.c_str();
  }

  static E_ERRORS Internal_GetError(void* ptr);

      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<E_ERRORS> Error;
    public:
      Exception();
    public:
      Exception(E_ERRORS error);
    public:
      Euresys::eVision::Exception& operator=(const Euresys::eVision::Exception& other);
    public:
      Exception(const Euresys::eVision::Exception& other);
    public:
      Exception(const std::string& message);
    public:
      virtual ~Exception() throw();
    public:
      std::string Internal_What() const;
    public:
      E_ERRORS GetError() const;
    public:
      Exception(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace eVision
  {
    class FoundPattern
    {
    public:
      Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_FoundPattern_;
      //TODO: Write manual declarations here
public:
  void Draw(HDC hDC, BOOL drawFeaturePoints, FLOAT32 f32ZoomX = 1.f, FLOAT32 f32ZoomY = 0.f, FLOAT32 f32PanX = 0.f, FLOAT32 f32PanY = 0.f)
  {
    bool drawFPOld = GetDrawFeaturePoints();
    SetDrawFeaturePoints(drawFeaturePoints ? true : false);
    Draw(hDC, f32ZoomX, f32ZoomY, f32PanX, f32PanY);
    SetDrawFeaturePoints(drawFPOld);
  }
      EPoint Center;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> Angle;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> Scale;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> Score;
      Euresys::eVision::Internal::Properties::Wrapped::Property_Vector<EPoint, 173> FeaturePoints;
      Euresys::eVision::Internal::Properties::Wrapped::Property_Vector<EPoint, 174> RectangleCorners;
      EPoint originRoi;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> patternType;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> DrawBoundingBox;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> DrawCenter;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> DrawFeaturePoints;
    public:
      EPoint GetCenter();
    public:
      float GetAngle();
    public:
      float GetScale();
    public:
      float GetScore();
    public:
      void SetDrawBoundingBox(bool drawBoundingBox);
    public:
      bool GetDrawBoundingBox();
    public:
      void SetDrawCenter(bool drawCenter);
    public:
      bool GetDrawCenter();
    public:
      void SetDrawFeaturePoints(bool drawFeaturePoints);
    public:
      bool GetDrawFeaturePoints();
    public:
      FoundPattern();
    public:
      FoundPattern(const Euresys::eVision::FoundPattern& other);
    public:
      Euresys::eVision::FoundPattern& operator=(const Euresys::eVision::FoundPattern& other);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      bool operator==(const Euresys::eVision::FoundPattern& fndPat) const;
    public:
      bool operator!=(const Euresys::eVision::FoundPattern& fndPat) const;
    public:
      EQuadrangle GetQuadrangle() const;
    public:
      virtual ~FoundPattern() throw();
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      FoundPattern(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace eVision
  {
    class MatrixCode
    {
    public:
      Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_MatrixCode_;
      //TODO: Write manual declarations here

      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<std::string> DecodedString;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> NumErrors;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<Euresys::eVision::EasyMatrixCode::LogicalSize::Type> LogicalSize;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<Euresys::eVision::EasyMatrixCode::Contrast::Type> ContrastType;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<Euresys::eVision::EasyMatrixCode::Flipping::Type> Flipping;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<Euresys::eVision::EasyMatrixCode::Family::Type> Family;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> LogicalSizeWidth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> LogicalSizeHeight;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> LocationThreshold;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> ReadingThreshold;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<BOOL> IsFound;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> Contrast;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> ContrastGrade;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> PrintGrowth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> MeasuredPrintGrowth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> PrintGrowthGrade;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> AxialNonUniformity;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> AxialNonUniformityGrade;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> UnusedErrorCorrection;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> UnusedErrorCorrectionGrade;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<INT32> OverallGrade;
      EPoint Center;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_ReadOnly<FLOAT32> Angle;
      Euresys::eVision::Internal::Properties::Wrapped::Property_Vector<EPoint, 220> Corners;
      Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<UINT8, 221> DecodedData;
    public:
      MatrixCode();
    public:
      MatrixCode(const Euresys::eVision::MatrixCode& other);
    public:
      Euresys::eVision::MatrixCode& operator=(const Euresys::eVision::MatrixCode& other);
    public:
      virtual ~MatrixCode() throw();
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrorsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Load(ESerializer* serializer);
    public:
      void Save(ESerializer* serializer);
    public:
      const EPoint& GetCorner(OEV_INT32 index);
    public:
      void SetCorner(OEV_INT32 index, const EPoint& corner);
    public:
      OEV_UINT8 GetDecodedDataElement(OEV_INT32 index);
    public:
      std::string GetDecodedString() const;
    public:
      OEV_INT32 GetNumErrors() const;
    public:
      Euresys::eVision::EasyMatrixCode::LogicalSize::Type GetLogicalSize() const;
    public:
      Euresys::eVision::EasyMatrixCode::Contrast::Type GetContrastType() const;
    public:
      Euresys::eVision::EasyMatrixCode::Flipping::Type GetFlipping() const;
    public:
      Euresys::eVision::EasyMatrixCode::Family::Type GetFamily() const;
    public:
      OEV_INT32 GetLogicalSizeWidth() const;
    public:
      OEV_INT32 GetLogicalSizeHeight() const;
    public:
      OEV_INT32 GetLocationThreshold() const;
    public:
      OEV_INT32 GetReadingThreshold() const;
    public:
      BOOL GetFound() const;
    public:
      float GetContrast() const;
    public:
      OEV_INT32 GetContrastGrade() const;
    public:
      float GetPrintGrowth() const;
    public:
      float GetMeasuredPrintGrowth() const;
    public:
      OEV_INT32 GetPrintGrowthGrade() const;
    public:
      float GetAxialNonUniformity() const;
    public:
      OEV_INT32 GetAxialNonUniformityGrade() const;
    public:
      float GetUnusedErrorCorrection() const;
    public:
      OEV_INT32 GetUnusedErrorCorrectionGrade() const;
    public:
      OEV_INT32 GetOverallGrade() const;
    public:
      float GetSymbolContrastSNR() const;
    public:
      float GetVerticalMarkGrowth() const;
    public:
      float GetHorizontalMarkGrowth() const;
    public:
      float GetVerticalMarkMisplacement() const;
    public:
      float GetHorizontalMarkMisplacement() const;
    public:
      float GetDataMatrixCellWidth() const;
    public:
      float GetDataMatrixCellHeight() const;
    public:
      float GetCellDefects() const;
    public:
      float GetFinderPatternDefects() const;
    public:
      const EPoint& GetCenter() const;
    public:
      float GetAngle() const;
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
    public:
      void DrawWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawWithPredefinedPen(EDrawAdapter* graphicContext);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, float zoomX);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
    public:
      void DrawErrorsWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
    public:
      void DrawErrorsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrorsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrorsWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawErrorsWithPredefinedPen(EDrawAdapter* graphicContext);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrors(HDC graphicContext, float zoomX);
    public:
      void DrawErrors(HDC graphicContext);
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    public:
      MatrixCode(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace eVision
  {

    namespace EasyMatrixCode
    {
      class SearchParamsType
      {
      public:
        Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_SearchParamsType_;
        
        Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<Euresys::eVision::EasyMatrixCode::LogicalSize::Type, 3> LogicalSize;
        Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<Euresys::eVision::EasyMatrixCode::Contrast::Type, 222> Contrast;
        Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<Euresys::eVision::EasyMatrixCode::Flipping::Type, 223> Flipping;
        Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<Euresys::eVision::EasyMatrixCode::Family::Type, 224> Family;
      public:
        SearchParamsType();
      public:
        void AddLogicalSize(Euresys::eVision::EasyMatrixCode::LogicalSize::Type searchLogicalSize);
      public:
        void ClearLogicalSize();
      public:
        void RemoveLogicalSize(Euresys::eVision::EasyMatrixCode::LogicalSize::Type searchLogicalSize);
      public:
        OEV_INT32 GetLogicalSizeCount() const;
      public:
        Euresys::eVision::EasyMatrixCode::LogicalSize::Type GetLogicalSize(OEV_INT32 index);
      public:
        void AddContrast(Euresys::eVision::EasyMatrixCode::Contrast::Type searchContrast);
      public:
        void ClearContrast();
      public:
        void RemoveContrast(Euresys::eVision::EasyMatrixCode::Contrast::Type searchContrast);
      public:
        OEV_INT32 GetContrastCount() const;
      public:
        Euresys::eVision::EasyMatrixCode::Contrast::Type GetContrast(OEV_INT32 index);
      public:
        void AddFlipping(Euresys::eVision::EasyMatrixCode::Flipping::Type searchFlipping);
      public:
        void ClearFlipping();
      public:
        void RemoveFlipping(Euresys::eVision::EasyMatrixCode::Flipping::Type searchFlipping);
      public:
        OEV_INT32 GetFlippingCount() const;
      public:
        Euresys::eVision::EasyMatrixCode::Flipping::Type GetFlipping(OEV_INT32 index);
      public:
        void AddFamily(Euresys::eVision::EasyMatrixCode::Family::Type searchFamily);
      public:
        void ClearFamily();
      public:
        void RemoveFamily(Euresys::eVision::EasyMatrixCode::Family::Type searchFamily);
      public:
        OEV_INT32 GetFamilyCount() const;
      public:
        Euresys::eVision::EasyMatrixCode::Family::Type GetFamily(OEV_INT32 index);
      public:
        SearchParamsType(const Euresys::eVision::EasyMatrixCode::SearchParamsType& other);
      public:
        Euresys::eVision::EasyMatrixCode::SearchParamsType& operator=(const Euresys::eVision::EasyMatrixCode::SearchParamsType& other);
      public:
        virtual ~SearchParamsType() throw();
      public:
        SearchParamsType(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace eVision
  {
    class MatrixCodeReader
    {
    public:
      Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_MatrixCodeReader_;
      //TODO: Write manual declarations here

      Euresys::eVision::Internal::Properties::NotWrapped::Property_Vector<bool, 1> LearnMask;
      Euresys::eVision::EasyMatrixCode::SearchParamsType SearchParams;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> PreprocLocalBinHalfKSize;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> PreprocLocalBinNoise;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> MaxNumPyramidLevels;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> MaxNumSkippedLocationLevels;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> ComputeGrading;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> LocationLocalBinHalfKSize;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> LocationLocalBinNoise;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> CornerShiftStepWidth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> CornerShiftStepHeight;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MaxHeightWidthRatio;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MaxSkew;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MinCandidateProba;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MinimumPrintGrowth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MaximumPrintGrowth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> NominalPrintGrowth;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> TimeOut;
    public:
      MatrixCodeReader();
    public:
      Euresys::eVision::MatrixCode Read(const EROIBW8& roi);
    public:
      void Reset();
    public:
      Euresys::eVision::MatrixCode Learn(const EROIBW8& roi);
    public:
      Euresys::eVision::MatrixCode LearnMore(const EROIBW8& roi);
    public:
      void Load(ESerializer* serializer);
    public:
      void Save(ESerializer* serializer);
    public:
      void SetLearnMaskElement(Euresys::eVision::EasyMatrixCode::LearnParams::Type index, bool value);
    public:
      bool GetLearnMaskElement(Euresys::eVision::EasyMatrixCode::LearnParams::Type index);
    public:
      Euresys::eVision::EasyMatrixCode::SearchParamsType& GetSearchParams();
    public:
      BOOL GetComputeGrading();
    public:
      void SetComputeGrading(BOOL value);
    public:
      float GetMinimumPrintGrowth();
    public:
      void SetMinimumPrintGrowth(float value);
    public:
      float GetMaximumPrintGrowth();
    public:
      void SetMaximumPrintGrowth(float value);
    public:
      float GetNominalPrintGrowth();
    public:
      void SetNominalPrintGrowth(float value);
    public:
      OEV_UINT32 GetTimeOut();
    public:
      void SetTimeOut(OEV_UINT32 value);
    public:
      void SetMaxHeightWidthRatio(float value);
    public:
      float GetMaxHeightWidthRatio();
    public:
      MatrixCodeReader(const Euresys::eVision::MatrixCodeReader& other);
    public:
      Euresys::eVision::MatrixCodeReader& operator=(const Euresys::eVision::MatrixCodeReader& other);
    public:
      virtual ~MatrixCodeReader() throw();
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    public:
      MatrixCodeReader(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace eVision
  {
    class PatternFinder : public EPointShape
    {
    public:
      Wrapper::Internal_Legacy_Open_eVision_1_2::WrappedClass wrappedFunctions_PatternFinder_;
      //TODO: Write manual declarations here
public:
  void Learn(const EROIBW8& pattern, const EROIBW8& dontCare)
  {
    Learn(&pattern, const_cast<EROIBW8*>(&dontCare));
  }

  std::vector<Euresys::eVision::FoundPattern> Find(const EROIBW8& source)
  {
    return Find(const_cast<EROIBW8*>(&source));
  }

  void Learn(const EROIBW8& pattern)
  {
    Learn(&pattern);
  }

  EImageBW8* CreatePatternCopy() const
  {
    if(!LearningDone())
      return NULL;
    EImageBW8* toReturn = new EImageBW8();
    const_cast<Euresys::eVision::PatternFinder*>(this)->CopyLearntPattern(*toReturn);
    return toReturn;
  }
      EPoint Pivot;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<Euresys::eVision::EasyFind::PatternType::Type> PatternType;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<Euresys::eVision::EasyFind::LocalSearchMode::Type> LocalSearchMode;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> Interpolate;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> MinFeaturePoints;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<unsigned int> MaxFeaturePoints;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> TransitionThickness;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> MaxInstances;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> FindExtension;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> ForcedThreshold;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> AngleSearchExtent;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> ScaleSearchExtent;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> XSearchExtent;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<int> YSearchExtent;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<bool> AutoTransitionThickness;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> LightBalance;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> MinScore;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> AngleBias;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> AngleTolerance;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> ScaleBias;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> ScaleTolerance;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<float> ReductionStrength;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<Euresys::eVision::EasyFind::ReductionMode::Type> ReductionMode;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<Euresys::eVision::EasyFind::Contrast::Type> ContrastMode;
      Euresys::eVision::Internal::Properties::NotWrapped::Property<Euresys::eVision::EasyFind::ThinStructureMode::Type> ThinStructureMode;
    public:
      PatternFinder();
    public:
      PatternFinder(const Euresys::eVision::PatternFinder& other);
    public:
      Euresys::eVision::PatternFinder& operator=(const Euresys::eVision::PatternFinder& other);
    public:
      void Learn(const EROIBW8* pattern, EROIBW8* dontCare);
    public:
      bool LearningDone() const;
    public:
      void CopyLearntPattern(EImageBW8& image);
    public:
      std::vector<Euresys::eVision::FoundPattern> Find(EROIBW8* source);
    public:
      float GetAngleBias() const;
    public:
      void SetAngleBias(float f32AngleBias);
    public:
      float GetAngleTolerance() const;
    public:
      void SetAngleTolerance(float f32AngleTolerance);
    public:
      float GetScaleBias() const;
    public:
      void SetScaleBias(float f32ScaleBias);
    public:
      float GetScaleTolerance() const;
    public:
      void SetScaleTolerance(float f32ScaleTolerance);
    public:
      BOOL GetInterpolate() const;
    public:
      void SetInterpolate(BOOL bInterpolate);
    public:
      Euresys::eVision::EasyFind::Contrast::Type GetContrastMode() const;
    public:
      void SetContrastMode(Euresys::eVision::EasyFind::Contrast::Type eContrastMode);
    public:
      Euresys::eVision::EasyFind::ReductionMode::Type GetReductionMode() const;
    public:
      void SetReductionMode(Euresys::eVision::EasyFind::ReductionMode::Type eReductionMode);
    public:
      void SetLocalSearchMode(Euresys::eVision::EasyFind::LocalSearchMode::Type eLocalSearchMode);
    public:
      Euresys::eVision::EasyFind::LocalSearchMode::Type GetLocalSearchMode() const;
    public:
      void SetAngleSearchExtent(OEV_INT32 n32Extent);
    public:
      void SetScaleSearchExtent(OEV_INT32 n32Extent);
    public:
      void SetXSearchExtent(OEV_INT32 n32Extent);
    public:
      void SetYSearchExtent(OEV_INT32 n32Extent);
    public:
      OEV_INT32 GetAngleSearchExtent() const;
    public:
      OEV_INT32 GetScaleSearchExtent() const;
    public:
      OEV_INT32 GetXSearchExtent() const;
    public:
      OEV_INT32 GetYSearchExtent() const;
    public:
      OEV_UINT32 GetMaxInstances() const;
    public:
      void SetMaxInstances(OEV_UINT32 un32MaxInstances);
    public:
      float GetMinScore() const;
    public:
      void SetMinScore(float f32MinScore);
    public:
      float GetAngle() const;
    public:
      float GetScale() const;
    public:
      float GetScore() const;
    public:
      float GetReductionStrength() const;
    public:
      void SetReductionStrength(float f32ReductionStrength);
    public:
      OEV_UINT32 GetMinFeaturePoints() const;
    public:
      void SetMinFeaturePoints(OEV_UINT32 un32MinFeaturePoints);
    public:
      OEV_UINT32 GetMaxFeaturePoints() const;
    public:
      void SetMaxFeaturePoints(OEV_UINT32 un32MaxFeaturePoints);
    public:
      Euresys::eVision::EasyFind::PatternType::Type GetPatternType() const;
    public:
      void SetPatternType(Euresys::eVision::EasyFind::PatternType::Type patternType);
    public:
      virtual INS_SHAPE_TYPES GetType();
    public:
      OEV_INT32 GetFindExtension() const;
    public:
      void SetFindExtension(OEV_INT32 n32Extension);
    public:
      void SetLightBalance(float f32LightBalance);
    public:
      float GetLightBalance() const;
    public:
      void SetForcedThreshold(OEV_UINT32 un32ForcedThreshold);
    public:
      OEV_UINT32 GetForcedThreshold() const;
    public:
      void SetTransitionThickness(OEV_UINT32 un32TransitionThickness);
    public:
      OEV_UINT32 GetTransitionThickness() const;
    public:
      void SetAutoTransitionThickness(bool bAutoTransitionThickness);
    public:
      bool GetAutoTransitionThickness() const;
    public:
      void SetThinStructureMode(Euresys::eVision::EasyFind::ThinStructureMode::Type thinStructureMode);
    public:
      Euresys::eVision::EasyFind::ThinStructureMode::Type GetThinStructureMode() const;
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModelWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      EPoint GetPivot() const;
    public:
      void SetPivot(const EPoint& pivot);
    public:
      const EPoint* GetCachedPivot() const;
    public:
      virtual ~PatternFinder() throw();
    public:
      void Learn(const EROIBW8* pattern);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, float zoomX);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX, float zoomY);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color, float zoomX);
    public:
      void DrawModelWithPredefinedPen(HDC graphicContext, const Euresys::Color::RGBColor& color);
    public:
      void DrawModelWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModelWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawModelWithPredefinedPen(EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawModelWithPredefinedPen(EDrawAdapter* graphicContext);
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawModel(HDC graphicContext, float zoomX);
    public:
      void DrawModel(HDC graphicContext);
    public:
      PatternFinder(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor );
    };
  }
}

void ESetAngleUnit(E_ANGLE_UNITS unit);
E_ANGLE_UNITS EGetAngleUnit();
float EFromRadians(float angle);
float EToRadians(float angle);
std::string Internal_EGetVersion();
HDC EOpenImageGraphicContext(EImageBW8* pImage);
HDC EOpenImageGraphicContext(EImageC24* pImage);
void ECloseImageGraphicContext(EImageBW8* pImage, HDC hDC);
void ECloseImageGraphicContext(EImageC24* pImage, HDC hDC);
void ERender3D(EROIBW8* sourceImage, EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale, float zScale, OEV_INT32 dotSize);
void ERender3D(EROIC24* sourceImage, EROIBW8* zImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale, OEV_INT32 dotSize);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* sysImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
OEV_INT32 EStopTiming(OEV_INT32 resolution);
void EStartTiming();
OEV_INT32 ETrueTimingResolution();
void EResize(EROIBW8* sourceImage, EROIBW8* destinationImage);
void EResize(EROIBW16* sourceImage, EROIBW16* destinationImage);
void EResize(EROIC15* sourceImage, EROIC15* destinationImage);
void EResize(EROIC16* sourceImage, EROIC16* destinationImage);
void EResize(EROIC24* sourceImage, EROIC24* destinationImage);
void EResize(EROIC24A* sourceImage, EROIC24A* destinationImage);
void ERender3D(EROIBW8* sourceImage, EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
void ERender3D(EROIBW8* sourceImage, EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale);
void ERender3D(EROIBW8* sourceImage, EROIBW8* destinationImage, float phi, float psi, float xScale);
void ERender3D(EROIBW8* sourceImage, EROIBW8* destinationImage, float phi, float psi);
void ERender3D(EROIC24* sourceImage, EROIBW8* zImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
void ERender3D(EROIC24* sourceImage, EROIBW8* zImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
void ERender3D(EROIC24* sourceImage, EROIBW8* zImage, EROIC24* destinationImage, float phi, float psi, float xScale);
void ERender3D(EROIC24* sourceImage, EROIBW8* zImage, EROIC24* destinationImage, float phi, float psi);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* destinationImage, float phi, float psi, float xScale);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* destinationImage, float phi, float psi);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* sysImage, EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* sysImage, EROIC24* destinationImage, float phi, float psi, float xScale);
void ERenderColorHistogram(EROIC24* sourceImage, EROIC24* sysImage, EROIC24* destinationImage, float phi, float psi);
OEV_INT32 EStopTiming();
void ClrPseudoColor(EROIBW8* sourceImage, EROIC24* destinationImage, EPseudoColorLookup* lookup);
void ClrSetRGBStandard(E_RGB_STANDARD rgbStandard);
E_RGB_STANDARD ClrGetRGBStandard();
void ClrSetSrcQuantization(E_COLOR_QUANTIZATION quantization);
E_COLOR_QUANTIZATION ClrGetSrcQuantization();
void ClrSetDstQuantization(E_COLOR_QUANTIZATION quantization);
E_COLOR_QUANTIZATION ClrGetDstQuantization();
void ClrDequantize(EC24 colorIn, ERGB& colorOut);
void ClrDequantize(EC24 colorIn, EXYZ& colorOut);
void ClrDequantize(EC24 colorIn, EYUV& colorOut);
void ClrDequantize(EC24 colorIn, EYIQ& colorOut);
void ClrDequantize(EC24 colorIn, ELSH& colorOut);
void ClrDequantize(EC24 colorIn, EVSH& colorOut);
void ClrDequantize(EC24 colorIn, EISH& colorOut);
void ClrDequantize(EC24 colorIn, EYSH& colorOut);
void ClrDequantize(EC24 colorIn, ELAB& colorOut);
void ClrDequantize(EC24 colorIn, ELCH& colorOut);
void ClrDequantize(EC24 colorIn, ELUV& colorOut);
void ClrQuantize(ERGB colorIn, EC24& colorOut);
void ClrQuantize(EXYZ colorIn, EC24& colorOut);
void ClrQuantize(EYUV colorIn, EC24& colorOut);
void ClrQuantize(EYIQ colorIn, EC24& colorOut);
void ClrQuantize(ELSH colorIn, EC24& colorOut);
void ClrQuantize(EVSH colorIn, EC24& colorOut);
void ClrQuantize(EISH colorIn, EC24& colorOut);
void ClrQuantize(EYSH colorIn, EC24& colorOut);
void ClrQuantize(ELAB colorIn, EC24& colorOut);
void ClrQuantize(ELCH colorIn, EC24& colorOut);
void ClrQuantize(ELUV colorIn, EC24& colorOut);
void ClrRGBToXYZ(ERGB colorIn, EXYZ& colorOut);
void ClrRGBToXYZ(EC24 colorIn, EC24& colorOut);
void ClrXYZToRGB(EXYZ colorIn, ERGB& colorOut);
void ClrXYZToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToYUV(ERGB colorIn, EYUV& colorOut);
void ClrRGBToYUV(EC24 colorIn, EC24& colorOut);
void ClrYUVToRGB(EYUV colorIn, ERGB& colorOut);
void ClrYUVToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToYIQ(ERGB colorIn, EYIQ& colorOut);
void ClrRGBToYIQ(EC24 colorIn, EC24& colorOut);
void ClrYIQToRGB(EYIQ colorIn, ERGB& colorOut);
void ClrYIQToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToLSH(ERGB colorIn, ELSH& colorOut);
void ClrRGBToLSH(EC24 colorIn, EC24& colorOut);
void ClrLSHToRGB(ELSH colorIn, ERGB& colorOut);
void ClrLSHToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToVSH(ERGB colorIn, EVSH& colorOut);
void ClrRGBToVSH(EC24 colorIn, EC24& colorOut);
void ClrVSHToRGB(EVSH colorIn, ERGB& colorOut);
void ClrVSHToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToISH(ERGB colorIn, EISH& colorOut);
void ClrRGBToISH(EC24 colorIn, EC24& colorOut);
void ClrISHToRGB(EISH colorIn, ERGB& colorOut);
void ClrISHToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToYSH(ERGB colorIn, EYSH& colorOut);
void ClrRGBToYSH(EC24 colorIn, EC24& colorOut);
void ClrYSHToRGB(EYSH colorIn, ERGB& colorOut);
void ClrYSHToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToLAB(ERGB colorIn, ELAB& colorOut);
void ClrRGBToLAB(EC24 colorIn, EC24& colorOut);
void ClrLABToRGB(ELAB colorIn, ERGB& colorOut);
void ClrLABToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToLCH(ERGB colorIn, ELCH& colorOut);
void ClrRGBToLCH(EC24 colorIn, EC24& colorOut);
void ClrLCHToRGB(ELCH colorIn, ERGB& colorOut);
void ClrLCHToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToLUV(ERGB colorIn, ELUV& colorOut);
void ClrRGBToLUV(EC24 colorIn, EC24& colorOut);
void ClrLUVToRGB(ELUV colorIn, ERGB& colorOut);
void ClrLUVToRGB(EC24 colorIn, EC24& colorOut);
void ClrRGBToReducedXYZ(ERGB colorIn, EXYZ& colorOut);
void ClrRGBToReducedXYZ(EC24 colorIn, EC24& colorOut);
void ClrXYZToLAB(EXYZ colorIn, ELAB& colorOut);
void ClrXYZToLAB(EC24 colorIn, EC24& colorOut);
void ClrLABToXYZ(ELAB colorIn, EXYZ& colorOut);
void ClrLABToXYZ(EC24 colorIn, EC24& colorOut);
void ClrXYZToLUV(EXYZ colorIn, ELUV& colorOut);
void ClrXYZToLUV(EC24 colorIn, EC24& colorOut);
void ClrLUVToXYZ(ELUV colorIn, EXYZ& colorOut);
void ClrLUVToXYZ(EC24 colorIn, EC24& colorOut);
void ClrCompose(EROIBW8* sourceImageOfColor0, EROIBW8* sourceImageOfColor1, EROIBW8* sourceImageOfColor2, EROIC24* colorDestinationImage, EColorLookup* lookup);
void ClrDecompose(EROIC24* colorSourceImage, EROIBW8* destinationImageOfColor0, EROIBW8* destinationImageOfColor1, EROIBW8* destinationImageOfColor2, EColorLookup* lookup);
void ClrGetComponent(EROIC24* colorSourceImage, EROIBW8* bWDestinationImage, OEV_UINT32 component, EColorLookup* lookup);
void ClrSetComponent(EROIBW8* bWSourceImage, EROIC24* colorDestinationImage, OEV_UINT32 component);
void ClrTransform(EROIC24* sourceImage, EROIC24* destinationImage, EColorLookup* lookup);
void ClrAssignNearestClassCenter(EROIC24* sourceImage, EROIC24* destinationImage, EC24Vector* classCenters);
void ClrAssignNearestClass(EROIC24* sourceImage, EROIBW8* destinationImage, EC24Vector* classCenters);
void ClrImproveClassCenters(EROIC24* sourceImage, EC24Vector* classCenters);
void ClrClassAverages(EROIC24* sourceImage, EC24Vector* classCenters, EColorVector* averages);
void ClrClassVariances(EROIC24* sourceImage, EC24Vector* classCenters, EColorVector* averages, EColorVector* variances);
void ClrFormat422To444(EROIBW16* sourceImage, EROIC24* destinationImage, BOOL yFirst);
void ClrFormat444To422(EROIC24* sourceImage, EROIBW16* destinationImage, BOOL yFirst);
void ClrBayerToC24(EROIBW8* sourceImage, EROIC24* destinationImage, BOOL evenCol, BOOL evenRow, BOOL interpolate, BOOL improved);
void ClrC24ToBayer(EROIC24* sourceImage, EROIBW8* destinationImage, BOOL evenCol, BOOL evenRow);
void ClrTransformBayer(EROIBW8* sourceImage, EROIBW8* destinationImage, EColorLookup* lookup, BOOL evenCol, BOOL evenRow);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY, OEV_INT32 gShiftY, OEV_INT32 bShiftY);
void ClrCompose(EROIBW8* sourceImageOfColor0, EROIBW8* sourceImageOfColor1, EROIBW8* sourceImageOfColor2, EROIC24* colorDestinationImage);
void ClrDecompose(EROIC24* colorSourceImage, EROIBW8* destinationImageOfColor0, EROIBW8* destinationImageOfColor1, EROIBW8* destinationImageOfColor2);
void ClrGetComponent(EROIC24* colorSourceImage, EROIBW8* bWDestinationImage, OEV_UINT32 component);
void ClrBayerToC24(EROIBW8* sourceImage, EROIC24* destinationImage, BOOL evenCol, BOOL evenRow, BOOL interpolate);
void ClrBayerToC24(EROIBW8* sourceImage, EROIC24* destinationImage, BOOL evenCol, BOOL evenRow);
void ClrBayerToC24(EROIBW8* sourceImage, EROIC24* destinationImage, BOOL evenCol);
void ClrBayerToC24(EROIBW8* sourceImage, EROIC24* destinationImage);
void ClrC24ToBayer(EROIC24* sourceImage, EROIBW8* destinationImage, BOOL evenCol);
void ClrC24ToBayer(EROIC24* sourceImage, EROIBW8* destinationImage);
void ClrTransformBayer(EROIBW8* sourceImage, EROIBW8* destinationImage, EColorLookup* lookup, BOOL evenCol);
void ClrTransformBayer(EROIBW8* sourceImage, EROIBW8* destinationImage, EColorLookup* lookup);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY, OEV_INT32 gShiftY);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 rShiftX);
void ClrRegisterPlanes(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgSetOverlayColor(EC24 color);
EC24 ImgGetOverlayColor();
void ImgCopy(const EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgCopy(const EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgCopy(const EROIBW32* sourceImage, EROIBW32* destinationImage);
void ImgCopy(const EROIC24* sourceImage, EROIC24* destinationImage);
void ImgCopy(const EROIC15* sourceImage, EROIC15* destinationImage);
void ImgCopy(const EROIC16* sourceImage, EROIC16* destinationImage);
void ImgCopy(const EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgCopy(EBW1 constant, EROIBW1* destinationImage);
void ImgCopy(EBW16 constant, EROIBW16* destinationImage);
void ImgCopy(EBW32 constant, EROIBW32* destinationImage);
void ImgCopy(EC24 constant, EROIC24* destinationImage);
void ImgCopy(EC15 constant, EROIC15* destinationImage);
void ImgCopy(EC16 constant, EROIC16* destinationImage);
void ImgCopy(EBW8 constant, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EBW1 constant, EROIBW1* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW1* sourceImage0, const EROIBW1* sourceImage1, EROIBW1* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EBW8 constant, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EBW16 constant, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EC24 constant, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EBW8 constant, const EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EBW16 constant, const EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, EC24 constant, const EROIC24* sourceImage, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage, EBW8 constant, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW16* sourceImage, EBW16 constant, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIC24* sourceImage, EC24 constant, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIC24* sourceImage, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage0, const EROIBW8* sourceImage1, EROIBW8* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW16* sourceImage0, const EROIBW16* sourceImage1, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIC24* sourceImage0, const EROIC24* sourceImage1, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage0, const EROIBW8* sourceImage1, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW16* sourceImage0, const EROIBW8* sourceImage1, EROIBW16* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage0, const EROIBW8* sourceImage1, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIBW8* sourceImage0, const EROIC24* sourceImage1, EROIC24* destinationImage);
void ImgOper(ARITH_LOGIC_OPERATIONS operation, const EROIC24* sourceImage0, const EROIBW8* sourceImage1, EROIC24* destinationImage);
void ImgOverlay(const EROIC24* sourceImage, EROIC16* destinationImage, OEV_INT32 panX, OEV_INT32 panY, EC24 referenceValue);
void ImgOverlay(const EROIC24* sourceImage, EROIC15* destinationImage, OEV_INT32 panX, OEV_INT32 panY, EC24 referenceValue);
void ImgOverlay(const EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY, EC24 referenceValue);
void ImgOverlay(const EROIC24* sourceImage, const EROIBW8* mask, EROIC15* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
void ImgOverlay(const EROIC24* sourceImage, const EROIBW8* mask, EROIC16* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
void ImgOverlay(const EROIC24* sourceImage, const EROIBW8* mask, EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
void ImgOverlay(const EROIBW8* sourceImage, EROIC24* overlay, EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY, EC24 referenceValue);
void ImgConvert(EROIC24* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIC24* destinationImage);
void ImgConvert(EROIC24* sourceImage, EROIC15* destinationImage);
void ImgConvert(EROIC15* sourceImage, EROIC24* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIC15* destinationImage);
void ImgConvert(EROIC15* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIC24* sourceImage, EROIC16* destinationImage);
void ImgConvert(EROIC16* sourceImage, EROIC24* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIC16* destinationImage);
void ImgConvert(EROIC16* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIC24* sourceImage, EROIC24A* destinationImage);
void ImgConvert(EROIC24A* sourceImage, EROIC24* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIBW1* destinationImage);
void ImgConvert(EROIBW16* sourceImage, EROIBW1* destinationImage);
void ImgConvert(EROIBW32* sourceImage, EROIBW1* destinationImage);
void ImgConvert(EROIBW32* sourceImage, EROIBW16* destinationImage, OEV_UINT32 rightShift);
void ImgConvert(EROIBW32* sourceImage, EROIBW8* destinationImage, OEV_UINT32 rightShift);
void ImgConvert(EROIBW16* sourceImage, EROIBW8* destinationImage, OEV_UINT32 rightShift);
void ImgConvert(EROIBW8* sourceImage, EROIBW16* destinationImage, OEV_UINT32 leftShift);
void ImgConvert(EROIBW8* sourceImage, EROIBW32* destinationImage, OEV_UINT32 leftShift);
void ImgConvert(EROIBW16* sourceImage, EROIBW32* destinationImage, OEV_UINT32 leftShift);
void ImgConvert(EROIC24* sourceImage, EROIBW8* sourceImageAlpha, EROIC24A* destinationImage);
void ImgConvert(EROIC24A* sourceImage, EROIC24* destinationImage, EROIBW8* destinationImageAlpha);
void ImgConvert(EROIBW1* sourceImage, EROIBW8* destinationImage, EBW8 highValue);
void ImgConvert(EROIBW1* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIBW1* sourceImage, EROIBW16* destinationImage, EBW16 highValue);
void ImgConvert(EROIBW1* sourceImage, EROIBW16* destinationImage);
void ImgConvert(EROIBW1* sourceImage, EROIBW32* destinationImage, EBW32 highValue);
void ImgConvert(EROIBW1* sourceImage, EROIBW32* destinationImage);
void ImgConvertTo422(EROIBW8* sourceImage, EROIBW16* destinationImage);
void ImgGainOffset(EROIBW8* sourceImage, EROIBW8* destinationImage, float gain, float offset);
void ImgGainOffset(EROIBW16* sourceImage, EROIBW16* destinationImage, float gain, float offset);
void ImgGainOffset(EROIC24* sourceImage, EROIC24* destinationImage, EColor Gain, EColor Offset);
void ImgLut(const EROIBW16* sourceImage, EROIBW16* destinationImage, EBW16Vector* lookupTable);
void ImgLut(const EROIBW8* sourceImage, EROIBW8* destinationImage, EBW8Vector* lookupTable);
void ImgLut(const EROIBW16* sourceImage, EROIBW8* destinationImage, EBW8Vector* lookupTable, OEV_UINT32 numberOfScalingBits);
void ImgNormalize(EROIBW8* sourceImage, EROIBW8* destinationImage, float imposedAverage, float imposedStandardDeviation);
void ImgNormalize(EROIBW16* sourceImage, EROIBW16* destinationImage, float imposedAverage, float imposedStandardDeviation);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EROIBW8* imageReference, EROIBW8* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EROIBW16* imageReference, EROIBW16* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EROIC24* imageReference, EROIC24* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EBW8Vector* vectorOfPixelReference, EROIBW8* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EBW16Vector* vectorOfPixelReference, EROIBW16* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EC24Vector* vectorOfPixelReference, EROIC24* destinationImage, BOOL multiplicative);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelLightReference, EROIBW8* imageLightReference, EBW8 pixelDarkReference, EROIBW8* imageDarkReference, EROIBW8* destinationImage);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelLightReference, EROIBW16* imageLightReference, EBW16 pixelDarkReference, EROIBW16* imageDarkReference, EROIBW16* destinationImage);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelLightReference, EROIC24* imageLightReference, EC24 pixelDarkReference, EROIC24* imageDarkReference, EROIC24* destinationImage);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelLightReference, EBW8Vector* vectorOfPixelLightReference, EBW8 pixelDarkReference, EBW8Vector* vectorOfPixelDarkReference, EROIBW8* destinationImage);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelLightReference, EBW16Vector* vectorOfPixelLightReference, EBW16 pixelDarkReference, EBW16Vector* vectorOfPixelDarkReference, EROIBW16* destinationImage);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelLightReference, EC24Vector* vectorOfPixelLightReference, EC24 pixelDarkReference, EC24Vector* vectorOfPixelDarkReference, EROIC24* destinationImage);
void ImgSetRecursiveAverageLUT(EBW16Vector* lookupTable, float reductionNoiseFactor, float reductionNoiseWidth);
void ImgRecursiveAverage(EROIBW8* sourceImage, EROIBW16* store, EROIBW8* destinationImage, EBW16Vector* lookupTable);
void ImgThreshold(EROIBW8* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold, float relativeThreshold);
void ImgThreshold(EROIBW16* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold, float relativeThreshold);
void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue, OEV_UINT8 highValue, float relativeThreshold);
void ImgThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 threshold);
void ImgThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 threshold, EBW16 lowValue, EBW16 highValue);
void ImgThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, float relativeThreshold);
void ImgThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, float relativeThreshold, EBW16 lowValue, EBW16 highValue);
void ImgThreshold(EROIC24* sourceImage, EROIBW8* destinationImage, EC24 minimum, EC24 maximum);
void ImgThreshold(EROIC24* sourceImage, EROIBW8* destinationImage, EC24 minimum, EC24 maximum, EColorLookup* colorLookupTable, EBW8 rejectValue, EBW8 acceptValue);
void ImgThreshold(EROIC24* sourceImage, EROIBW8* destinationImage, EC24 minimum, EC24 maximum, EColorLookup* colorLookupTable);
void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue, OEV_UINT8 middleValue, OEV_UINT8 highValue);
void ImgDoubleThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, EBW16 lowValue, EBW16 middleValue, EBW16 highValue);
void ImgDoubleThreshold(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, IMG_THRESHOLD_MODES thresholdMode, float relativeThresholdMode);
EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, IMG_THRESHOLD_MODES thresholdMode, float relativeThresholdMode);
EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode, float relativeThresholdMode);
EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode, float relativeThresholdMode);
void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from, OEV_UINT32 to);
void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from, OEV_UINT32 to);
EBW8 ImgIsodataThreshold(EBWHistogramVector* histogram, OEV_UINT32 from, OEV_UINT32 to);
float ImgTwoLevelsMinResidueThreshold(EBWHistogramVector* histogram, EBW8& firstWhitePixelValue, float& averageBlack, float& averageWhite);
float ImgThreeLevelsMinResidueThreshold(EBWHistogramVector* histogram, EBW8& firstGrayPixelValue, EBW8& firstWhitePixelValue, float& averageBlack, float& averageGray, float& averageWhite);
EBW16 ImgIsodataThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32 from, OEV_UINT32 to);
void ImgConvolKernel(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* kernel);
void ImgConvolKernel(EROIBW16* sourceImage, EROIBW16* destinationImage, EKernel* kernel);
void ImgConvolKernel(EROIC24* sourceImage, EROIC24* destinationImage, EKernel* kernel);
void ImgConvolSymmetricKernel(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* kernel);
void ImgConvolSymmetricKernel(EROIBW16* sourceImage, EROIBW16* destinationImage, EKernel* kernel);
void ImgConvolSymmetricKernel(EROIC24* sourceImage, EROIC24* destinationImage, EKernel* kernel);
void ImgConvolLowpass1(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLowpass1(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLowpass1(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLowpass2(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLowpass2(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLowpass2(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLowpass3(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLowpass3(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLowpass3(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolUniform(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolUniform(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolUniform(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolUniform(EBW8Vector* sourceVector, EBW8Vector* destinationVector, OEV_UINT32 halfOfKernelWidth);
void ImgConvolUniform(EBW16Vector* sourceVector, EBW16Vector* destinationVector, OEV_UINT32 halfOfKernelWidth);
void ImgConvolGaussian(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolGaussian(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolGaussian(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgConvolGaussian(const EBW8Vector* sourceImage, EBW8Vector* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolGaussian(const EBW16Vector* sourceImage, EBW16Vector* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolHighpass1(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolHighpass1(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolHighpass1(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolHighpass2(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolHighpass2(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolHighpass2(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolGradientX(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolGradientX(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolGradientX(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolGradientY(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolGradientY(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolGradientY(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolGradient(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolGradient(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolGradient(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolSobelX(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolSobelX(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolSobelX(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolSobelY(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolSobelY(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolSobelY(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolSobel(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolSobel(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolSobel(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolPrewittX(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolPrewittX(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolPrewittX(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolPrewittY(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolPrewittY(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolPrewittY(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolPrewitt(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolPrewitt(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolPrewitt(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolRoberts(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolRoberts(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolRoberts(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLaplacianX(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLaplacianX(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLaplacianX(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLaplacianY(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLaplacianY(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLaplacianY(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLaplacian4(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLaplacian4(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLaplacian4(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolLaplacian8(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolLaplacian8(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolLaplacian8(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgModulusImage(EImageBW8* destinationImage, float gain);
void ImgArgumentImage(EImageBW8* destinationImage, EBW8 phase, float period);
void ImgArgumentImage(EImageBW8* destinationImage);
void ImgArgumentImage(EImageBW8* destinationImage, EBW8 phase);
void ImgGradientScalar(EROIBW8* sourceImage, EROIBW8* destinationImage, EROIBW8* lookupTable);
void ImgGradientScalar(EROIBW32* sourceImage, EROIBW8* destinationImage, EROIBW8* lookupTable);
void ImgLocalAverage(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
void ImgLocalAverage(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
void ImgLocalDeviation(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
void ImgLocalDeviation(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
void ImgDilateBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgDilateBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgDilateBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgErodeBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgErodeBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgErodeBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgOpenBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgOpenBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgOpenBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgCloseBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgCloseBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgCloseBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgWhiteTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgWhiteTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgWhiteTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBlackTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBlackTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBlackTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgMorphoGradientBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgMorphoGradientBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgMorphoGradientBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgErodeDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientDisk(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientDisk(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientDisk(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
void ImgBiLevelErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpen(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode, OEV_INT32 n32ValOffDilate);
void ImgOpen(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode, EC24 c24ColorOffDilate);
void ImgClose(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate, OEV_INT32 n32ValOffErode);
void ImgClose(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate, EC24 c24ColorOffErode);
void ImgErode(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOff);
void ImgErode(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOff);
void ImgErode(EBW8Vector* pSrc, EBW8Vector* pDst, OEV_UINT32 un32HalfWidth);
void ImgErode(EBW16Vector* pSrc, EBW16Vector* pDst, OEV_UINT32 un32HalfWidth);
void ImgDilate(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOff);
void ImgDilate(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOff);
void ImgDilate(EBW8Vector* pSrc, EBW8Vector* pDst, OEV_UINT32 un32HalfWidth);
void ImgDilate(EBW16Vector* pSrc, EBW16Vector* pDst, OEV_UINT32 un32HalfWidth);
void ImgBlackTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate, OEV_INT32 n32ValOffErode);
void ImgBlackTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate, EC24 c24ColorOffErode);
void ImgWhiteTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode, OEV_INT32 n32ValOffDilate);
void ImgWhiteTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode, EC24 c24ColorOffDilate);
void ImgMedian(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgMedian(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgMedian(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgMedian(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgThin(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* thinningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgThin(EROIBW16* sourceImage, EROIBW16* destinationImage, EKernel* thinningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgThin(EROIC24* sourceImage, EROIC24* destinationImage, EKernel* thinningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
OEV_INT32 ImgThin(EROIBW1* sourceImage, EROIBW1* destinationImage, EKernel* thinningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgThick(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* thickeningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgThick(EROIBW16* sourceImage, EROIBW16* destinationImage, EKernel* thickeningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgThick(EROIC24* sourceImage, EROIC24* destinationImage, EKernel* thickeningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
OEV_INT32 ImgThick(EROIBW1* sourceImage, EROIBW1* destinationImage, EKernel* thickeningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgBiLevelMedian(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelThin(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* thinningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgBiLevelThick(EROIBW8* sourceImage, EROIBW8* destinationImage, EKernel* thickeningKernel, KERNEL_ROTATION rotationMode, OEV_INT32& numberOfIterations);
void ImgDistance(EROIBW8* sourceImage, EImageBW16* destinationImage, OEV_INT32 valueOutOfImage);
void ImgHistogram(const EROIBW8* sourceImage, EBWHistogramVector* histogram);
void ImgHistogram(const EROIBW16* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
void ImgHistogram(const EROIBW32* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
void ImgHistogram(const EROIBW8* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram);
void ImgHistogram(const EROIBW16* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
void ImgHistogram(const EROIBW32* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
void ImgEqualize(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgEqualize(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgCumulateHistogram(EBWHistogramVector* sourceVector, EBWHistogramVector* destinationVector);
float ImgAnalyseHistogram(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex, OEV_INT32 maximumIndex);
float ImgAnalyseHistogramBW16(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex, OEV_INT32 maximumIndex);
void ImgProjectOnARow(const EROIBW8* sourceImage, EBW32Vector* destinationVector);
void ImgProjectOnARow(const EROIBW16* sourceImage, EBW32Vector* destinationVector);
void ImgProjectOnARow(const EROIBW8* sourceImage, EBW8Vector* destinationVector);
void ImgProjectOnARow(const EROIBW16* sourceImage, EBW16Vector* destinationVector);
void ImgProjectOnARow(const EROIC24* sourceImage, EC24Vector* destinationVector);
void ImgProjectOnARow(const EROIBW8* sourceImage, const EROIBW8* mask, EBW32Vector* destinationVector);
void ImgProjectOnARow(const EROIBW16* sourceImage, const EROIBW8* mask, EBW32Vector* destinationVector);
void ImgProjectOnARow(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8Vector* destinationVector);
void ImgProjectOnARow(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16Vector* destinationVector);
void ImgProjectOnARow(const EROIC24* sourceImage, const EROIBW8* mask, EC24Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW8* sourceImage, EBW32Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW16* sourceImage, EBW32Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW8* sourceImage, EBW8Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW16* sourceImage, EBW16Vector* destinationVector);
void ImgProjectOnAColumn(const EROIC24* sourceImage, EC24Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW8* sourceImage, const EROIBW8* mask, EBW32Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW16* sourceImage, const EROIBW8* mask, EBW32Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW8* sourceImage, EROIBW8* mask, EBW8Vector* destinationVector);
void ImgProjectOnAColumn(const EROIBW16* sourceImage, EROIBW8* mask, EBW16Vector* destinationVector);
void ImgProjectOnAColumn(const EROIC24* sourceImage, EROIBW8* mask, EC24Vector* destinationVector);
float ImgFocusing(EROIBW8* image);
float ImgFocusing(EROIBW16* image);
float ImgFocusing(EROIC24* image);
void ImgSetFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, BOOL odd);
void ImgSetFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, BOOL odd);
void ImgSetFrame(EROIC24* sourceImage, EROIC24* destinationImage, BOOL odd);
void ImgGetFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, BOOL odd);
void ImgGetFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, BOOL odd);
void ImgGetFrame(EROIC24* sourceImage, EROIC24* destinationImage, BOOL odd);
void ImgRebuildFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 fixedRow);
void ImgRebuildFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 fixedRow);
void ImgRebuildFrame(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 fixedRow);
void ImgRealignFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
void ImgRealignFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
void ImgRealignFrame(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
void ImgMatchFrames(EROIBW8* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
void ImgMatchFrames(EROIBW16* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
void ImgMatchFrames(EROIC24* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
void ImgSwapFrames(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgSwapFrames(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgSwapFrames(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgSetupEqualize(EBWHistogramVector* histogram, EBW8Vector* lookupTable);
void ImgImageToLineSegment(const EROIBW8* sourceImage, EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToLineSegment(const EROIBW16* sourceImage, EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToLineSegment(const EROIC24* sourceImage, EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToLineSegment(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 outOfMaskValue, EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToLineSegment(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 outOfMaskValue, EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToLineSegment(const EROIC24* sourceImage, const EROIBW8* mask, EC24 outOfMaskValue, EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIBW8* destinationImage, EBW8 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIBW16* destinationImage, EBW16 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIC24* destinationImage, EC24 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIBW8* destinationImage, EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIBW16* destinationImage, EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgLineSegmentToImage(EROIC24* destinationImage, EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
void ImgImageToPath(const EROIBW8* sourceImage, EBW8PathVector* path);
void ImgImageToPath(const EROIBW16* sourceImage, EBW16PathVector* path);
void ImgImageToPath(const EROIC24* sourceImage, EC24PathVector* path);
void ImgImageToPath(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 outOfMaskValue, EBW8PathVector* path);
void ImgImageToPath(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 outOfMaskValue, EBW16PathVector* path);
void ImgImageToPath(const EROIC24* sourceImage, const EROIBW8* mask, EC24 outOfMaskValue, EC24PathVector* path);
void ImgPathToImage(EROIBW8* sourceImage, EBW8PathVector* path);
void ImgPathToImage(EROIBW16* sourceImage, EBW16PathVector* path);
void ImgPathToImage(EROIC24* sourceImage, EC24PathVector* path);
void ImgProfileDerivative(EBW8Vector* sourceVector, EBW8Vector* destinationVector);
void ImgProfileDerivative(EBW16Vector* sourceVector, EBW16Vector* destinationVector);
void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude, OEV_UINT32 minimumArea);
void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude, OEV_UINT32 minimumArea);
OEV_UINT32 ImgPixelCompare(const EROIBW1* sourceImage0, const EROIBW1* sourceImage1);
OEV_UINT32 ImgPixelCompare(const EROIBW8* sourceImage0, const EROIBW8* sourceImage1);
OEV_UINT32 ImgPixelCompare(const EROIBW16* sourceImage0, const EROIBW16* sourceImage1);
OEV_UINT32 ImgPixelCompare(const EROIC24* sourceImage0, const EROIC24* sourceImage1);
OEV_UINT32 ImgPixelCompare(const EROIBW8* sourceImage0, const EROIBW8* sourceImage1, const EROIBW8* mask);
OEV_UINT32 ImgPixelCompare(const EROIBW16* sourceImage0, const EROIBW16* sourceImage1, const EROIBW8* mask);
OEV_UINT32 ImgPixelCompare(const EROIC24* sourceImage0, const EROIC24* sourceImage1, const EROIBW8* mask);
void ImgPixelMin(const EROIBW8* sourceImage, EBW8& minimumValue);
void ImgPixelMin(const EROIBW16* sourceImage, EBW16& minimumValue);
void ImgPixelMin(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8& minimumValue);
void ImgPixelMin(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16& minimumValue);
void ImgPixelMax(const EROIBW8* sourceImage, EBW8& maximumValue);
void ImgPixelMax(const EROIBW16* sourceImage, EBW16& maximumValue);
void ImgPixelMax(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8& maximumValue);
void ImgPixelMax(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16& maximumValue);
void ImgPixelAverage(const EROIBW8* sourceImage, float& average);
void ImgPixelAverage(const EROIBW16* sourceImage, float& average);
void ImgPixelAverage(const EROIC24* sourceImage, float& average0, float& average1, float& average2);
void ImgPixelAverage(const EROIBW8* sourceImage, const EROIBW8* inputMask, float& average);
void ImgPixelAverage(const EROIBW16* sourceImage, const EROIBW8* inputMask, float& average);
void ImgPixelAverage(const EROIC24* sourceImage, const EROIBW8* inputMask, float& average0, float& average1, float& average2);
void ImgPixelStat(const EROIBW8* sourceImage, EBW8& minimumValue, EBW8& maximumValue, float& average);
void ImgPixelStat(const EROIBW16* sourceImage, EBW16& minimumValue, EBW16& maximumValue, float& average);
void ImgPixelStat(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8& minimumValue, EBW8& maximumValue, float& average);
void ImgPixelStat(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16& minimumValue, EBW16& maximumValue, float& average);
void ImgPixelStdDev(const EROIBW8* sourceImage, float& standardDeviation, float& mean);
void ImgPixelStdDev(const EROIBW16* sourceImage, float& standardDeviation, float& mean);
void ImgPixelStdDev(const EROIC24* sourceImage, float& standardDeviation0, float& standardDeviation1, float& standardDeviation2, float& correlation01, float& correlation12, float& correlation20, float& mean0, float& mean1, float& mean2);
void ImgPixelStdDev(const EROIBW8* sourceImage, const EROIBW8* mask, float& standardDeviation, float& mean);
void ImgPixelStdDev(const EROIBW16* sourceImage, const EROIBW8* mask, float& standardDeviation, float& mean);
void ImgPixelStdDev(const EROIC24* sourceImage, const EROIBW8* mask, float& standardDeviation0, float& standardDeviation1, float& standardDeviation2, float& correlation01, float& correlation12, float& correlation20, float& mean0, float& mean1, float& mean2);
void ImgPixelCount(const EROIBW8* sourceImage, EBW8 lowThreshold, EBW8 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW16* sourceImage, EBW16 lowThreshold, EBW16 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW8* sourceImage, EBW8 lowThreshold, EBW8 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW16* sourceImage, EBW16 lowThreshold, EBW16 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 lowThreshold, EBW8 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 lowThreshold, EBW16 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 lowThreshold, EBW8 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
void ImgPixelCount(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 lowThreshold, EBW16 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
void ImgArea(const EROIBW8* sourceImage, EBW8 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgArea(const EROIBW16* sourceImage, EBW16 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgArea(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgArea(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
void ImgAreaDoubleThreshold(const EROIBW8* sourceImage, EBW8 lowThreshold, EBW8 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
void ImgAreaDoubleThreshold(const EROIBW16* sourceImage, EBW16 lowThreshold, EBW16 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
void ImgAreaDoubleThreshold(const EROIBW8* sourceImage, const EROIBW8* mask, EBW8 lowThreshold, EBW8 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
void ImgAreaDoubleThreshold(const EROIBW16* sourceImage, const EROIBW8* mask, EBW16 lowThreshold, EBW16 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
void ImgPixelVariance(const EROIBW8* sourceImage, float& variance, float& mean);
void ImgPixelVariance(const EROIBW16* sourceImage, float& variance, float& mean);
void ImgPixelVariance(const EROIC24* sourceImage, float& variance0, float& variance1, float& variance2, float& covariance01, float& covariance12, float& covariance20, float& mean0, float& mean1, float& mean2);
void ImgPixelVariance(const EROIBW8* sourceImage, const EROIBW8* mask, float& variance, float& mean);
void ImgPixelVariance(const EROIBW16* sourceImage, const EROIBW8* mask, float& variance, float& mean);
void ImgPixelVariance(const EROIC24* sourceImage, const EROIBW8* mask, float& variance0, float& variance1, float& variance2, float& covariance01, float& covariance12, float& covariance20, float& mean0, float& mean1, float& mean2);
void ImgGravityCenter(const EROIBW8* sourceImage, OEV_UINT32 threshold, float& gravityX, float& gravityY);
void ImgGravityCenter(const EROIBW16* sourceImage, OEV_UINT32 threshold, float& gravityX, float& gravityY);
void ImgGravityCenter(const EROIBW8* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& gravityX, float& gravityY);
void ImgGravityCenter(const EROIBW16* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& gravityX, float& gravityY);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW16* referenceImage, OEV_UINT32 count, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask, IMG_REFERENCE_NOISE referenceNoise);
float ImgSignalNoiseRatio(EROIBW8* pSrcImage, EROIBW16* pRefImage, OEV_UINT32 un32Count, IMG_REFERENCE_NOISE eReferenceNoise);
void ImgBinaryMoments(const EROIBW8* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My);
void ImgBinaryMoments(const EROIBW16* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My);
void ImgBinaryMoments(const EROIBW8* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My);
void ImgBinaryMoments(const EROIBW16* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My);
void ImgBinaryMoments(const EROIBW8* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgBinaryMoments(const EROIBW16* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgBinaryMoments(const EROIBW8* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgBinaryMoments(const EROIBW16* sourceImage, const EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgWeightedMoments(const EROIBW8* sourceImage, float& M, float& Mx, float& My);
void ImgWeightedMoments(const EROIBW16* sourceImage, float& M, float& Mx, float& My);
void ImgWeightedMoments(const EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgWeightedMoments(const EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgWeightedMoments(const EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
void ImgWeightedMoments(const EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
void ImgWeightedMoments(const EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
void ImgWeightedMoments(const EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
void ImgWeightedMoments(const EROIBW8* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My);
void ImgWeightedMoments(const EROIBW16* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My);
void ImgWeightedMoments(const EROIBW8* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgWeightedMoments(const EROIBW16* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
void ImgWeightedMoments(const EROIBW8* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
void ImgWeightedMoments(const EROIBW16* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
void ImgWeightedMoments(const EROIBW8* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
void ImgWeightedMoments(const EROIBW16* sourceImage, const EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
void ImgSetCircleWarp(float centerX, float centerY, OEV_INT32 numberOfRadialSampledPoints, float minimumRadius, float maximumRadius, OEV_INT32 numberOfTangentSampledPoints, float minimumAngle, float maximumAngle, EImageBW16* warpImageX, EImageBW16* warpImageY);
void ImgWarp(EROIBW8* sourceImage, EROIBW8* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX, OEV_INT32 shiftY);
void ImgWarp(EROIC24* sourceImage, EROIC24* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX, OEV_INT32 shiftY);
void ImgContour(EROIBW8* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EPathVector* path);
void ImgContour(EROIBW16* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EPathVector* path);
void ImgContour(EROIBW8* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW8PathVector* path, BOOL freeman);
void ImgContour(EROIBW16* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW16PathVector* path, BOOL freeman);
void ImgVerticalMirror(EROIBW8* sourceImage);
void ImgVerticalMirror(EROIBW16* sourceImage);
void ImgVerticalMirror(EROIC24* sourceImage);
void ImgHorizontalMirror(EROIBW8* sourceImage);
void ImgHorizontalMirror(EROIC24* sourceImage);
void ImgHorizontalMirror(EROIBW16* sourceImage);
void ImgLinearTransform(EROIBW8* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW8* destinationImage, OEV_INT32 interpolationBits);
void ImgLinearTransform(EROIBW16* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW16* destinationImage, OEV_INT32 interpolationBits);
void ImgLinearTransform(EROIC24* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIC24* destinationImage, OEV_INT32 interpolationBits);
void ImgScaleRotate(EROIBW8* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW8* destinationImage, OEV_INT32 interpolationBits);
void ImgScaleRotate(EROIC24* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIC24* destinationImage, OEV_INT32 interpolationBits);
void ImgScaleRotate(EROIBW16* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW16* destinationImage, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
void ImgShrink(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgShrink(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgShrink(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgAdaptiveThreshold(const EROIBW8* src, EROIBW8* dst, Euresys::eVision::EasyImage::AdaptiveThresholdMethod::Type method, int halfKernelSize, int constant);
void ImgConvert(EROIBW32* sourceImage, EROIBW16* destinationImage);
void ImgConvert(EROIBW32* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIBW16* sourceImage, EROIBW8* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIBW16* destinationImage);
void ImgConvert(EROIBW8* sourceImage, EROIBW32* destinationImage);
void ImgConvert(EROIBW16* sourceImage, EROIBW32* destinationImage);
void ImgGainOffset(EROIBW8* sourceImage, EROIBW8* destinationImage, float gain);
void ImgGainOffset(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgGainOffset(EROIBW16* sourceImage, EROIBW16* destinationImage, float gain);
void ImgGainOffset(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgLut(const EROIBW16* sourceImage, EROIBW8* destinationImage, EBW8Vector* lookupTable);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EROIBW8* imageReference, EROIBW8* destinationImage);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EROIBW16* imageReference, EROIBW16* destinationImage);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EROIC24* imageReference, EROIC24* destinationImage);
void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EBW8Vector* vectorOfPixelReference, EROIBW8* destinationImage);
void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EBW16Vector* vectorOfPixelReference, EROIBW16* destinationImage);
void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EC24Vector* vectorOfPixelReference, EROIC24* destinationImage);
void ImgSetRecursiveAverageLUT(EBW16Vector* lookupTable, float reductionNoiseFactor);
void ImgThreshold(EROIBW8* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold);
void ImgThreshold(EROIBW8* sourceImage, EROIBW1* destinationImage);
void ImgThreshold(EROIBW16* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold);
void ImgThreshold(EROIBW16* sourceImage, EROIBW1* destinationImage);
void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue, OEV_UINT8 highValue);
void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue);
void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold);
void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue, OEV_UINT8 middleValue);
void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue);
void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, IMG_THRESHOLD_MODES thresholdMode);
EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, IMG_THRESHOLD_MODES thresholdMode);
EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode);
EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode);
void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from);
void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold);
void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold);
void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from);
void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold);
void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold);
EBW8 ImgIsodataThreshold(EBWHistogramVector* histogram, OEV_UINT32 from);
EBW8 ImgIsodataThreshold(EBWHistogramVector* histogram);
EBW16 ImgIsodataThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32 from);
EBW16 ImgIsodataThresholdBW16(EBWHistogramVector* histogram);
void ImgConvolLowpass1(EROIBW8* sourceImage);
void ImgConvolLowpass1(EROIBW16* sourceImage);
void ImgConvolLowpass1(EROIC24* sourceImage);
void ImgConvolLowpass2(EROIBW8* sourceImage);
void ImgConvolLowpass2(EROIBW16* sourceImage);
void ImgConvolLowpass2(EROIC24* sourceImage);
void ImgConvolLowpass3(EROIBW8* sourceImage);
void ImgConvolLowpass3(EROIBW16* sourceImage);
void ImgConvolLowpass3(EROIC24* sourceImage);
void ImgConvolUniform(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolUniform(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolUniform(EROIBW8* sourceImage);
void ImgConvolUniform(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolUniform(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolUniform(EROIBW16* sourceImage);
void ImgConvolUniform(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolUniform(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolUniform(EROIC24* sourceImage);
void ImgConvolUniform(EBW8Vector* sourceVector, EBW8Vector* destinationVector);
void ImgConvolUniform(EBW16Vector* sourceVector, EBW16Vector* destinationVector);
void ImgConvolGaussian(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolGaussian(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgConvolGaussian(EROIBW8* sourceImage);
void ImgConvolGaussian(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolGaussian(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgConvolGaussian(EROIBW16* sourceImage);
void ImgConvolGaussian(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgConvolGaussian(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgConvolGaussian(EROIC24* sourceImage);
void ImgConvolGaussian(const EBW8Vector* sourceImage, EBW8Vector* destinationImage);
void ImgConvolGaussian(const EBW16Vector* sourceImage, EBW16Vector* destinationImage);
void ImgConvolHighpass1(EROIBW8* sourceImage);
void ImgConvolHighpass1(EROIBW16* sourceImage);
void ImgConvolHighpass1(EROIC24* sourceImage);
void ImgConvolHighpass2(EROIBW8* sourceImage);
void ImgConvolHighpass2(EROIBW16* sourceImage);
void ImgConvolHighpass2(EROIC24* sourceImage);
void ImgConvolGradientX(EROIBW8* sourceImage);
void ImgConvolGradientX(EROIBW16* sourceImage);
void ImgConvolGradientX(EROIC24* sourceImage);
void ImgConvolGradientY(EROIBW8* sourceImage);
void ImgConvolGradientY(EROIBW16* sourceImage);
void ImgConvolGradientY(EROIC24* sourceImage);
void ImgConvolGradient(EROIBW8* sourceImage);
void ImgConvolGradient(EROIBW16* sourceImage);
void ImgConvolGradient(EROIC24* sourceImage);
void ImgConvolSobelX(EROIBW8* sourceImage);
void ImgConvolSobelX(EROIBW16* sourceImage);
void ImgConvolSobelX(EROIC24* sourceImage);
void ImgConvolSobelY(EROIBW8* sourceImage);
void ImgConvolSobelY(EROIBW16* sourceImage);
void ImgConvolSobelY(EROIC24* sourceImage);
void ImgConvolSobel(EROIBW8* sourceImage);
void ImgConvolSobel(EROIBW16* sourceImage);
void ImgConvolSobel(EROIC24* sourceImage);
void ImgConvolPrewittX(EROIBW8* sourceImage);
void ImgConvolPrewittX(EROIBW16* sourceImage);
void ImgConvolPrewittX(EROIC24* sourceImage);
void ImgConvolPrewittY(EROIBW8* sourceImage);
void ImgConvolPrewittY(EROIBW16* sourceImage);
void ImgConvolPrewittY(EROIC24* sourceImage);
void ImgConvolPrewitt(EROIBW8* sourceImage);
void ImgConvolPrewitt(EROIBW16* sourceImage);
void ImgConvolPrewitt(EROIC24* sourceImage);
void ImgConvolRoberts(EROIBW8* sourceImage);
void ImgConvolRoberts(EROIBW16* sourceImage);
void ImgConvolRoberts(EROIC24* sourceImage);
void ImgConvolLaplacianX(EROIBW8* sourceImage);
void ImgConvolLaplacianX(EROIBW16* sourceImage);
void ImgConvolLaplacianX(EROIC24* sourceImage);
void ImgConvolLaplacianY(EROIBW8* sourceImage);
void ImgConvolLaplacianY(EROIBW16* sourceImage);
void ImgConvolLaplacianY(EROIC24* sourceImage);
void ImgConvolLaplacian4(EROIBW8* sourceImage);
void ImgConvolLaplacian4(EROIBW16* sourceImage);
void ImgConvolLaplacian4(EROIC24* sourceImage);
void ImgConvolLaplacian8(EROIBW8* sourceImage);
void ImgConvolLaplacian8(EROIBW16* sourceImage);
void ImgConvolLaplacian8(EROIC24* sourceImage);
void ImgModulusImage(EImageBW8* destinationImage);
void ImgDilateBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgDilateBox(EROIBW1* sourceImage);
void ImgDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgDilateBox(EROIBW8* sourceImage);
void ImgDilateBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgDilateBox(EROIBW16* sourceImage);
void ImgDilateBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgDilateBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgDilateBox(EROIC24* sourceImage);
void ImgErodeBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgErodeBox(EROIBW1* sourceImage);
void ImgErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgErodeBox(EROIBW8* sourceImage);
void ImgErodeBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgErodeBox(EROIBW16* sourceImage);
void ImgErodeBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgErodeBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgErodeBox(EROIC24* sourceImage);
void ImgOpenBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgOpenBox(EROIBW1* sourceImage);
void ImgOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgOpenBox(EROIBW8* sourceImage);
void ImgOpenBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgOpenBox(EROIBW16* sourceImage);
void ImgOpenBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgOpenBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgOpenBox(EROIC24* sourceImage);
void ImgCloseBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgCloseBox(EROIBW1* sourceImage);
void ImgCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgCloseBox(EROIBW8* sourceImage);
void ImgCloseBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgCloseBox(EROIBW16* sourceImage);
void ImgCloseBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgCloseBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgCloseBox(EROIC24* sourceImage);
void ImgWhiteTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgWhiteTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgWhiteTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgWhiteTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgBlackTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBlackTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgBlackTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBlackTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgMorphoGradientBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientBox(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgMorphoGradientBox(EROIBW1* sourceImage);
void ImgMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgMorphoGradientBox(EROIBW8* sourceImage);
void ImgMorphoGradientBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientBox(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgMorphoGradientBox(EROIBW16* sourceImage);
void ImgMorphoGradientBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgMorphoGradientBox(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgMorphoGradientBox(EROIC24* sourceImage);
void ImgErodeDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgErodeDisk(EROIBW1* sourceImage);
void ImgErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgErodeDisk(EROIBW8* sourceImage);
void ImgErodeDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgErodeDisk(EROIBW16* sourceImage);
void ImgErodeDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgErodeDisk(EROIC24* sourceImage);
void ImgDilateDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgDilateDisk(EROIBW1* sourceImage);
void ImgDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgDilateDisk(EROIBW8* sourceImage);
void ImgDilateDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgDilateDisk(EROIBW16* sourceImage);
void ImgDilateDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgDilateDisk(EROIC24* sourceImage);
void ImgOpenDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgOpenDisk(EROIBW1* sourceImage);
void ImgOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgOpenDisk(EROIBW8* sourceImage);
void ImgOpenDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgOpenDisk(EROIBW16* sourceImage);
void ImgOpenDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgOpenDisk(EROIC24* sourceImage);
void ImgCloseDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgCloseDisk(EROIBW1* sourceImage);
void ImgCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgCloseDisk(EROIBW8* sourceImage);
void ImgCloseDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgCloseDisk(EROIBW16* sourceImage);
void ImgCloseDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgCloseDisk(EROIC24* sourceImage);
void ImgWhiteTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgWhiteTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgWhiteTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgBlackTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBlackTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgBlackTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgMorphoGradientDisk(EROIBW1* sourceImage, EROIBW1* destinationImage);
void ImgMorphoGradientDisk(EROIBW1* sourceImage);
void ImgMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgMorphoGradientDisk(EROIBW8* sourceImage);
void ImgMorphoGradientDisk(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgMorphoGradientDisk(EROIBW16* sourceImage);
void ImgMorphoGradientDisk(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgMorphoGradientDisk(EROIC24* sourceImage);
void ImgBiLevelErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelErodeBox(EROIBW8* sourceImage);
void ImgBiLevelDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelDilateBox(EROIBW8* sourceImage);
void ImgBiLevelOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelOpenBox(EROIBW8* sourceImage);
void ImgBiLevelCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelCloseBox(EROIBW8* sourceImage);
void ImgBiLevelWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage);
void ImgBiLevelErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelErodeDisk(EROIBW8* sourceImage);
void ImgBiLevelDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelDilateDisk(EROIBW8* sourceImage);
void ImgBiLevelOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelOpenDisk(EROIBW8* sourceImage);
void ImgBiLevelCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelCloseDisk(EROIBW8* sourceImage);
void ImgBiLevelWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgBiLevelMorphoGradientDisk(EROIBW8* sourceImage);
void ImgOpen(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode);
void ImgOpen(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgOpen(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode);
void ImgOpen(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgClose(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate);
void ImgClose(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgClose(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate);
void ImgClose(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgErode(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgErode(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgErode(EBW8Vector* pSrc, EBW8Vector* pDst);
void ImgErode(EBW16Vector* pSrc, EBW16Vector* pDst);
void ImgDilate(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgDilate(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgDilate(EBW8Vector* pSrc, EBW8Vector* pDst);
void ImgDilate(EBW16Vector* pSrc, EBW16Vector* pDst);
void ImgBlackTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate);
void ImgBlackTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgBlackTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate);
void ImgBlackTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgWhiteTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode);
void ImgWhiteTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter);
void ImgWhiteTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode);
void ImgWhiteTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter);
void ImgDistance(EROIBW8* sourceImage, EImageBW16* destinationImage);
void ImgHistogram(const EROIBW16* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
void ImgHistogram(const EROIBW32* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
void ImgHistogram(const EROIBW16* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
void ImgHistogram(const EROIBW32* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
float ImgAnalyseHistogram(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex);
float ImgAnalyseHistogram(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation);
float ImgAnalyseHistogramBW16(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex);
float ImgAnalyseHistogramBW16(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation);
void ImgRebuildFrame(EROIBW8* sourceImage, EROIBW8* destinationImage);
void ImgRebuildFrame(EROIBW16* sourceImage, EROIBW16* destinationImage);
void ImgRebuildFrame(EROIC24* sourceImage, EROIC24* destinationImage);
void ImgRealignFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 offset);
void ImgRealignFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_INT32 offset);
void ImgRealignFrame(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 offset);
void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude);
void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold);
void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks);
void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude);
void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold);
void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage);
float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage);
float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask);
float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask);
float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask);
float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW16* referenceImage, OEV_UINT32 count);
float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage);
float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage);
float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage);
float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask);
float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask);
float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask);
float ImgSignalNoiseRatio(EROIBW8* pSrcImage, EROIBW16* pRefImage, OEV_UINT32 un32Count);
void ImgWarp(EROIBW8* sourceImage, EROIBW8* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX);
void ImgWarp(EROIBW8* sourceImage, EROIBW8* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY);
void ImgWarp(EROIC24* sourceImage, EROIC24* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX);
void ImgWarp(EROIC24* sourceImage, EROIC24* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY);
void ImgContour(EROIBW8* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW8PathVector* path);
void ImgContour(EROIBW16* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW16PathVector* path);
void ImgLinearTransform(EROIBW8* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW8* destinationImage);
void ImgLinearTransform(EROIBW16* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW16* destinationImage);
void ImgLinearTransform(EROIC24* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIC24* destinationImage);
void ImgScaleRotate(EROIBW8* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW8* destinationImage);
void ImgScaleRotate(EROIC24* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIC24* destinationImage);
void ImgScaleRotate(EROIBW16* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW16* destinationImage);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
void ImgAdaptiveThreshold(const EROIBW8* src, EROIBW8* dst, Euresys::eVision::EasyImage::AdaptiveThresholdMethod::Type method, int halfKernelSize);
void ObjContourArea(EPathVector* pPathVector, OEV_INT32& n32Area);
void ObjContourGravityCenter(EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY);
void ObjContourInertia(EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY, float& f32SigmaX, float& f32SigmaY, float& f32SigmaXY);

namespace Euresys
{

  namespace eVision
  {
    class Tools
    {
      public:
      static void Initialize();
      static void Terminate();
    };

  }
}

namespace Euresys
{

  namespace Color
  {
    class Tools
    {
      public:
      static void Initialize();
      static void Terminate();
    };

  }
}

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    class Tools
    {
      public:
      static void Initialize();
      static void Terminate();
    };

  }
}
namespace Euresys
{
  namespace Legacy_Open_eVision_1_2
  {
    class EBW8PixelAccessor
    {
    private:
      unsigned char *const buffer_;
      const signed int pitch_;

    public:
      EBW8PixelAccessor(EROIBW8& roi)
        : buffer_((unsigned char*)roi.GetImagePtr()),
        pitch_(roi.GetRowPitch())
      {
      }

      inline unsigned char GetPixel(signed int x, signed int y) const
      {
        return buffer_[x + y * pitch_];
      }

      inline void SetPixel(unsigned char value, signed int x, signed int y)
      {
        buffer_[x + y * pitch_] = value;
      }
    };


  }
}

#ifndef DO_NOT_USE_INLINE_LEGACY_OPEN_EVISION_1_2
#include "Legacy_Open_eVision_1_2.cpp"
#endif // DO_NOT_USE_INLINE_LEGACY_OPEN_EVISION_1_2
#pragma warning(pop)
#pragma pack(pop)
#endif // __WRAPPER_WRAPPERCPP_MAINHEADER_LEGACY_OPEN_EVISION_1_2_1_2__
