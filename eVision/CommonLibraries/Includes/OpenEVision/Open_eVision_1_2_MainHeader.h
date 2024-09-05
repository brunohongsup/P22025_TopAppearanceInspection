#ifndef __WRAPPER_WRAPPERCPP_MAINHEADER_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_WRAPPERCPP_MAINHEADER_OPEN_EVISION_1_2_1_2__
#ifdef DO_NOT_USE_INLINE_OPEN_EVISION_1_2
#define INLINE_OPEN_EVISION_1_2
#else
#define INLINE_OPEN_EVISION_1_2 inline
#endif // DO_NOT_USE_INLINE_OPEN_EVISION_1_2
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
#include "ForeignTypeGlobal_Open_eVision_1_2.h"
#include "Enumerations_Open_eVision_1_2.h"
#include "WrappedClass_Open_eVision_1_2.h"
#include "Predecl_Open_eVision_1_2.h"

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ERGBColor
    {
      int Red;
      int Green;
      int Blue;
    public:
      ERGBColor(int red, int green, int blue);
    public:
      ERGBColor();
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EC24
    {
      OEV_UINT8 C2;
      OEV_UINT8 C1;
      OEV_UINT8 C0;
    public:
      EC24();
    public:
      OEV_UINT32 GetUINT32Value() const;
    public:
      void SetUINT32Value(OEV_UINT32 value);
    public:
      EC24(const Euresys::Open_eVision_1_2::ERGBColor& rgbColor);
    public:
      EC24(OEV_UINT8 c0, OEV_UINT8 c1, OEV_UINT8 c2);
    public:
      static OEV_INT32 GetSize();
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EColor
    {
      float C0;
      float C1;
      float C2;
    public:
      EColor();
    public:
      EColor(float c0, float c1, float c2);
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW8
    {
      OEV_UINT8 Value;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW16
    {
      OEV_UINT16 Value;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW1
    {
      OEV_UINT32 Value;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW16Path
    {
      OEV_INT32 X;
      OEV_INT32 Y;
      Euresys::Open_eVision_1_2::EBW16 Pixel;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW32
    {
      OEV_UINT32 Value;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EBW8Path
    {
      OEV_INT32 X;
      OEV_INT32 Y;
      Euresys::Open_eVision_1_2::EBW8 Pixel;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EC15
    {
      OEV_UINT16 C2:5;
      OEV_UINT16 C1:5;
      OEV_UINT16 C0:5;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EC16
    {
      OEV_UINT16 C2:5;
      OEV_UINT16 C1:6;
      OEV_UINT16 C0:5;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EC24A
    {
      OEV_UINT8 C2;
      OEV_UINT8 C1;
      OEV_UINT8 C0;
      OEV_UINT8 A;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EC24Path
    {
      OEV_INT32 X;
      OEV_INT32 Y;
      Euresys::Open_eVision_1_2::EC24 Pixel;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EFeatureData
    {
      OEV_INT32 Size;
      Euresys::Open_eVision_1_2::ELegacyFeature FeatNum;
      Euresys::Open_eVision_1_2::EDataType FeatDataType;
      Euresys::Open_eVision_1_2::EDataSize FeatDataSize;
    private:
      void* hpvStartPtr;
    public:
    private:
      void* hpvEndPtr;
    public:
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EISH
    {
      float I;
      float S;
      float H;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ELAB
    {
      float L;
      float A;
      float B;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ELCH
    {
      float L;
      float C;
      float H;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ELSH
    {
      float L;
      float S;
      float H;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ELUV
    {
      float L;
      float U;
      float V;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EMatchPosition
    {
      float CenterX;
      float CenterY;
      float Angle;
      float Scale;
      float ScaleX;
      float ScaleY;
      float Score;
      BOOL Interpolated;
      float AreaRatio;
    private:
      float Reserved;
    public:
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EObjectData
    {
      OEV_INT32 Class;
      OEV_INT32 ObjNum;
      OEV_INT32 ObjNbRun;
      OEV_INT32 ObjNbHole;
      OEV_UINT8 IsSelected;
    private:
      void* hpvReserved1;
    public:
    private:
      void* hpvReserved2;
    public:
      BOOL IsHole;
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
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EPath
    {
      OEV_INT32 X;
      OEV_INT32 Y;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EPeak
    {
      OEV_UINT32 Start;
      OEV_UINT32 Length;
      float Center;
      OEV_INT32 Amplitude;
      OEV_INT32 Area;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ERGB
    {
      float R;
      float G;
      float B;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ERunData
    {
      OEV_INT32 OrgX;
      OEV_INT32 OrgY;
      OEV_INT32 Len;
      OEV_INT32 Class;
      OEV_INT32 ObjNum;
    private:
      void* hpvReserved;
    public:
    private:
      void* hpvReserved2;
    public:
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct ETransitionData
    {
      OEV_INT32 Width;
      OEV_INT32 Polarity;
      float Contrast;
      float MaxSlope;
      float Location;
      float Score;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EVSH
    {
      float V;
      float S;
      float H;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EXYZ
    {
      float X;
      float Y;
      float Z;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EYIQ
    {
      float Y;
      float I;
      float Q;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EYSH
    {
      float Y;
      float S;
      float H;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    struct EYUV
    {
      float Y;
      float U;
      float V;
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPoint
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPoint_;
    public:
      EPoint();
    public:
      EPoint(float centerX, float centerY);
    public:
      EPoint(const Euresys::Open_eVision_1_2::EPoint& other);
    public:
      Euresys::Open_eVision_1_2::EPoint& operator=(const Euresys::Open_eVision_1_2::EPoint& other);
    public:
      Euresys::Open_eVision_1_2::EPoint* CopyTo(Euresys::Open_eVision_1_2::EPoint* other) const;
    public:
      virtual void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
    public:
      virtual Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenterXY(float centerX, float centerY);
    public:
      float GetX() const;
    public:
      float GetY() const;
    public:
      Euresys::Open_eVision_1_2::EPoint operator+(const Euresys::Open_eVision_1_2::EPoint& point) const;
    public:
      Euresys::Open_eVision_1_2::EPoint operator-(const Euresys::Open_eVision_1_2::EPoint& point) const;
    public:
      Euresys::Open_eVision_1_2::EPoint operator*(float scalar) const;
    public:
      Euresys::Open_eVision_1_2::EPoint operator/(float scalar) const;
    public:
      BOOL operator==(const Euresys::Open_eVision_1_2::EPoint& point) const;
    public:
      BOOL operator!=(const Euresys::Open_eVision_1_2::EPoint& point) const;
    public:
      Euresys::Open_eVision_1_2::EPoint MidPoint(const Euresys::Open_eVision_1_2::EPoint& Point) const;
    public:
      Euresys::Open_eVision_1_2::EPoint Rotate(float angle) const;
    public:
      float Square() const;
    public:
      float Modulus() const;
    public:
      float Argument() const;
    public:
      float Dot(const Euresys::Open_eVision_1_2::EPoint& Point) const;
    public:
      float Area(const Euresys::Open_eVision_1_2::EPoint& Point) const;
    public:
      Euresys::Open_eVision_1_2::EPoint Project(const Euresys::Open_eVision_1_2::ELine& shape) const;
    public:
      Euresys::Open_eVision_1_2::EPoint Project(const Euresys::Open_eVision_1_2::ECircle& shape) const;
    public:
      float SquaredDistance(const Euresys::Open_eVision_1_2::EPoint& Point) const;
    public:
      virtual float Distance(const Euresys::Open_eVision_1_2::EPoint& point) const;
    public:
      virtual float Distance(const Euresys::Open_eVision_1_2::ELine& line, BOOL segmentOnly) const;
    public:
      virtual float Distance(const Euresys::Open_eVision_1_2::ECircle& circle, BOOL arcOnly) const;
    public:
      virtual ~EPoint() throw();
    public:
      EPoint(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual float Distance(const Euresys::Open_eVision_1_2::ELine& line) const;
    public:
      virtual float Distance(const Euresys::Open_eVision_1_2::ECircle& circle) const;
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EFrame : public Euresys::Open_eVision_1_2::EPoint
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EFrame_;
    public:
      EFrame();
    public:
      EFrame(float centerX, float centerY, float angle, float scale);
    public:
      EFrame(const Euresys::Open_eVision_1_2::EPoint& center, float angle, float scale);
    public:
      EFrame(const Euresys::Open_eVision_1_2::EFrame& frame);
    public:
      Euresys::Open_eVision_1_2::EFrame& operator=(const Euresys::Open_eVision_1_2::EFrame& frame);
    public:
      Euresys::Open_eVision_1_2::EFrame* CopyTo(Euresys::Open_eVision_1_2::EFrame* other) const;
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
      Euresys::Open_eVision_1_2::EPoint LocalToGlobal(const Euresys::Open_eVision_1_2::EPoint& local) const;
    public:
      Euresys::Open_eVision_1_2::EFrame LocalToGlobal(const Euresys::Open_eVision_1_2::EFrame& local) const;
    public:
      Euresys::Open_eVision_1_2::ELine LocalToGlobal(const Euresys::Open_eVision_1_2::ELine& local) const;
    public:
      Euresys::Open_eVision_1_2::ECircle LocalToGlobal(const Euresys::Open_eVision_1_2::ECircle& local) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GlobalToLocal(const Euresys::Open_eVision_1_2::EPoint& global) const;
    public:
      Euresys::Open_eVision_1_2::EFrame GlobalToLocal(const Euresys::Open_eVision_1_2::EFrame& global) const;
    public:
      virtual ~EFrame() throw();
    public:
      EFrame(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      EFrame(float centerX, float centerY, float angle);
    public:
      EFrame(float centerX, float centerY);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECircle : public Euresys::Open_eVision_1_2::EFrame
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircle_;
    public:
      ECircle();
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float originAngle, BOOL direct);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, BOOL direct);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float originAngle, float amplitude);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, BOOL fullCircle);
    public:
      ECircle(const Euresys::Open_eVision_1_2::ECircle& other);
    public:
      Euresys::Open_eVision_1_2::ECircle& operator=(const Euresys::Open_eVision_1_2::ECircle& other);
    public:
      Euresys::Open_eVision_1_2::ECircle* CopyTo(Euresys::Open_eVision_1_2::ECircle* other) const;
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, BOOL direct);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, BOOL fullCircle);
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
      Euresys::Open_eVision_1_2::EPoint GetOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetApex() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fraction) const;
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
      virtual float Distance(const Euresys::Open_eVision_1_2::ECircle& circle);
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer, OEV_UINT32 un32FileVersion);
    public:
      virtual ~ECircle() throw();
    public:
      ECircle(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float originAngle);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, float diameter);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      ECircle(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ELine : public Euresys::Open_eVision_1_2::EFrame
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ELine_;
    public:
      ELine();
    public:
      ELine(const Euresys::Open_eVision_1_2::EPoint& center, float length, float angle);
    public:
      ELine(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      ELine(const Euresys::Open_eVision_1_2::ELine& other);
    public:
      Euresys::Open_eVision_1_2::ELine& operator=(const Euresys::Open_eVision_1_2::ELine& other);
    public:
      Euresys::Open_eVision_1_2::ELine* CopyTo(Euresys::Open_eVision_1_2::ELine* other) const;
    public:
      void SetFromOriginAndEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetLength(float length);
    public:
      float GetLength();
    public:
      float GetLength() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fraction) const;
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer, OEV_UINT32 un32FileVersion);
    public:
      static Euresys::Open_eVision_1_2::EPoint GetIntersectionOfLines(Euresys::Open_eVision_1_2::ELine* pline1, Euresys::Open_eVision_1_2::ELine* pline2);
    public:
      virtual ~ELine() throw();
    public:
      ELine(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      ELine(const Euresys::Open_eVision_1_2::EPoint& center, float length);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EVector_;
    public:
      Euresys::Open_eVision_1_2::EVector& operator=(const Euresys::Open_eVision_1_2::EVector& other);
    public:
      EVector(const Euresys::Open_eVision_1_2::EVector& other);
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
      void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer, OEV_UINT32 un32Version);
    public:
      EVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBW32Vector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW32Vector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EBW32 element);
    public:
      Euresys::Open_eVision_1_2::EBW32& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EBW32 GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EBW32 value);
    public:
      EBW32Vector();
    public:
      EBW32Vector(OEV_UINT32 maxNumberOfElements);
    public:
      EBW32Vector(const Euresys::Open_eVision_1_2::EBW32Vector& other);
    public:
      virtual ~EBW32Vector() throw();
    public:
      void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
    public:
      Euresys::Open_eVision_1_2::EBW32Vector& operator=(const Euresys::Open_eVision_1_2::EBW32Vector& other);
    public:
      EBW32Vector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetYRange(OEV_INT32 n32YMin);
    public:
      void SetYRange();
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height);
    public:
      float WeightedMoment(OEV_UINT32 from);
    public:
      float WeightedMoment();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class DimensionalValue
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_DimensionalValue_;
    public:
      DimensionalValue();
    public:
      DimensionalValue(float f32Value, Euresys::Open_eVision_1_2::EMeasurementUnit* pUnit);
    public:
      virtual ~DimensionalValue() throw();
    public:
      Euresys::Open_eVision_1_2::DimensionalValue& operator=(const Euresys::Open_eVision_1_2::DimensionalValue& other);
    public:
      float GetValue() const;
    public:
      void SetValue(float f32Value);
    public:
      void SetValue(float f32Value, Euresys::Open_eVision_1_2::EMeasurementUnit* pUnit);
    public:
      float GetValue(Euresys::Open_eVision_1_2::EMeasurementUnit* pUnit);
    public:
      Euresys::Open_eVision_1_2::EMeasurementUnit* GetUnit();
    public:
      const Euresys::Open_eVision_1_2::EMeasurementUnit* GetUnit() const;
    public:
      void SetUnit(Euresys::Open_eVision_1_2::EMeasurementUnit* pUnit);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      DimensionalValue(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class Easy
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_Easy_;
    public:
      static void CheckLicenses();
    public:
      static void SetOemKey(const std::vector<char>& key, int index);
    public:
      static BOOL CheckOemKey(const std::vector<char>& key, int index);
    public:
      static bool CheckLicense(Euresys::Open_eVision_1_2::LicenseFeatures::Features license);
    public:
      static void SetAngleUnit(Euresys::Open_eVision_1_2::EAngleUnit unit);
    public:
      static Euresys::Open_eVision_1_2::EAngleUnit GetAngleUnit();
    public:
      static float FromRadians(float angle);
    public:
      static float ToRadians(float angle);
    public:
      static std::string GetVersion();
    public:
      static std::string GetErrorText(Euresys::Open_eVision_1_2::EError error);
    public:
      static HDC OpenImageGraphicContext(Euresys::Open_eVision_1_2::EImageBW8* pImage);
    public:
      static HDC OpenImageGraphicContext(Euresys::Open_eVision_1_2::EImageC24* pImage);
    public:
      static void CloseImageGraphicContext(Euresys::Open_eVision_1_2::EImageBW8* pImage, HDC hDC);
    public:
      static void CloseImageGraphicContext(Euresys::Open_eVision_1_2::EImageC24* pImage, HDC hDC);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale, float zScale, OEV_INT32 dotSize);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* zImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale, OEV_INT32 dotSize);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* sysImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
    public:
      static Euresys::Open_eVision_1_2::EImageType GetBestMatchingImageType(const std::string& path);
    public:
      static OEV_INT32 StopTiming(OEV_INT32 resolution);
    public:
      static void StartTiming();
    public:
      static OEV_INT32 TrueTimingResolution();
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIC15* sourceImage, Euresys::Open_eVision_1_2::EROIC15* destinationImage);
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIC16* sourceImage, Euresys::Open_eVision_1_2::EROIC16* destinationImage);
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Resize(Euresys::Open_eVision_1_2::EROIC24A* sourceImage, Euresys::Open_eVision_1_2::EROIC24A* destinationImage);
    public:
      static void SetOemKey(const std::vector<char>& key);
    public:
      static BOOL CheckOemKey(const std::vector<char>& key);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float phi, float psi, float xScale, float yScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float phi, float psi, float xScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float phi, float psi);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* zImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale, float zScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* zImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* zImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale);
    public:
      static void Render3D(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* zImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* sysImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale, float yScale);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* sysImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi, float xScale);
    public:
      static void RenderColorHistogram(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* sysImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float phi, float psi);
    public:
      static OEV_INT32 StopTiming();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EasyColor
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyColor_;
    public:
      static void PseudoColor(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EPseudoColorLookup* lookup);
    public:
      static void SetRgbStandard(Euresys::Open_eVision_1_2::ERgbStandard rgbStandard);
    public:
      static Euresys::Open_eVision_1_2::ERgbStandard GetRgbStandard();
    public:
      static void SetSrcQuantization(Euresys::Open_eVision_1_2::EColorQuantization quantization);
    public:
      static Euresys::Open_eVision_1_2::EColorQuantization GetSrcQuantization();
    public:
      static void SetDstQuantization(Euresys::Open_eVision_1_2::EColorQuantization quantization);
    public:
      static Euresys::Open_eVision_1_2::EColorQuantization GetDstQuantization();
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EXYZ& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EYUV& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EYIQ& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::ELSH& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EVSH& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EISH& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EYSH& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::ELAB& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::ELCH& colorOut);
    public:
      static void Dequantize(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::ELUV& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EXYZ colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EYUV colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EYIQ colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::ELSH colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EVSH colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EISH colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::EYSH colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::ELAB colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::ELCH colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Quantize(Euresys::Open_eVision_1_2::ELUV colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToXyz(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EXYZ& colorOut);
    public:
      static void RgbToXyz(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void XyzToRgb(Euresys::Open_eVision_1_2::EXYZ colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void XyzToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToYuv(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EYUV& colorOut);
    public:
      static void RgbToYuv(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void YuvToRgb(Euresys::Open_eVision_1_2::EYUV colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void YuvToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToYiq(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EYIQ& colorOut);
    public:
      static void RgbToYiq(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void YiqToRgb(Euresys::Open_eVision_1_2::EYIQ colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void YiqToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToLsh(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::ELSH& colorOut);
    public:
      static void RgbToLsh(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LshToRgb(Euresys::Open_eVision_1_2::ELSH colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void LshToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToVsh(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EVSH& colorOut);
    public:
      static void RgbToVsh(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void VshToRgb(Euresys::Open_eVision_1_2::EVSH colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void VshToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToIsh(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EISH& colorOut);
    public:
      static void RgbToIsh(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void IshToRgb(Euresys::Open_eVision_1_2::EISH colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void IshToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToYsh(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EYSH& colorOut);
    public:
      static void RgbToYsh(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void YshToRgb(Euresys::Open_eVision_1_2::EYSH colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void YshToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToLab(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::ELAB& colorOut);
    public:
      static void RgbToLab(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LabToRgb(Euresys::Open_eVision_1_2::ELAB colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void LabToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToLch(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::ELCH& colorOut);
    public:
      static void RgbToLch(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LchToRgb(Euresys::Open_eVision_1_2::ELCH colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void LchToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToLuv(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::ELUV& colorOut);
    public:
      static void RgbToLuv(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LuvToRgb(Euresys::Open_eVision_1_2::ELUV colorIn, Euresys::Open_eVision_1_2::ERGB& colorOut);
    public:
      static void LuvToRgb(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void RgbToReducedXyz(Euresys::Open_eVision_1_2::ERGB colorIn, Euresys::Open_eVision_1_2::EXYZ& colorOut);
    public:
      static void RgbToReducedXyz(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void XyzToLab(Euresys::Open_eVision_1_2::EXYZ colorIn, Euresys::Open_eVision_1_2::ELAB& colorOut);
    public:
      static void XyzToLab(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LabToXyz(Euresys::Open_eVision_1_2::ELAB colorIn, Euresys::Open_eVision_1_2::EXYZ& colorOut);
    public:
      static void LabToXyz(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void XyzToLuv(Euresys::Open_eVision_1_2::EXYZ colorIn, Euresys::Open_eVision_1_2::ELUV& colorOut);
    public:
      static void XyzToLuv(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void LuvToXyz(Euresys::Open_eVision_1_2::ELUV colorIn, Euresys::Open_eVision_1_2::EXYZ& colorOut);
    public:
      static void LuvToXyz(Euresys::Open_eVision_1_2::EC24 colorIn, Euresys::Open_eVision_1_2::EC24& colorOut);
    public:
      static void Compose(Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor0, Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor1, Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor2, Euresys::Open_eVision_1_2::EROIC24* colorDestinationImage, Euresys::Open_eVision_1_2::EColorLookup* lookup);
    public:
      static void Decompose(Euresys::Open_eVision_1_2::EROIC24* colorSourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor0, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor1, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor2, Euresys::Open_eVision_1_2::EColorLookup* lookup);
    public:
      static void GetComponent(Euresys::Open_eVision_1_2::EROIC24* colorSourceImage, Euresys::Open_eVision_1_2::EROIBW8* bWDestinationImage, OEV_UINT32 component, Euresys::Open_eVision_1_2::EColorLookup* lookup);
    public:
      static void SetComponent(Euresys::Open_eVision_1_2::EROIBW8* bWSourceImage, Euresys::Open_eVision_1_2::EROIC24* colorDestinationImage, OEV_UINT32 component);
    public:
      static void Transform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EColorLookup* lookup);
    public:
      static void AssignNearestClassCenter(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EC24Vector* classCenters);
    public:
      static void AssignNearestClass(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EC24Vector* classCenters);
    public:
      static void ImproveClassCenters(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* classCenters);
    public:
      static void ClassAverages(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* classCenters, Euresys::Open_eVision_1_2::EColorVector* averages);
    public:
      static void ClassVariances(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* classCenters, Euresys::Open_eVision_1_2::EColorVector* averages, Euresys::Open_eVision_1_2::EColorVector* variances);
    public:
      static void Format422To444(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL yFirst);
    public:
      static void Format444To422(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, BOOL yFirst);
    public:
      static void BayerToC24(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL evenCol, BOOL evenRow, BOOL interpolate, BOOL improved);
    public:
      static void C24ToBayer(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL evenCol, BOOL evenRow);
    public:
      static void TransformBayer(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EColorLookup* lookup, BOOL evenCol, BOOL evenRow);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY, OEV_INT32 gShiftY, OEV_INT32 bShiftY);
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
    public:
      static void Compose(Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor0, Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor1, Euresys::Open_eVision_1_2::EROIBW8* sourceImageOfColor2, Euresys::Open_eVision_1_2::EROIC24* colorDestinationImage);
    public:
      static void Decompose(Euresys::Open_eVision_1_2::EROIC24* colorSourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor0, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor1, Euresys::Open_eVision_1_2::EROIBW8* destinationImageOfColor2);
    public:
      static void GetComponent(Euresys::Open_eVision_1_2::EROIC24* colorSourceImage, Euresys::Open_eVision_1_2::EROIBW8* bWDestinationImage, OEV_UINT32 component);
    public:
      static void BayerToC24(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL evenCol, BOOL evenRow, BOOL interpolate);
    public:
      static void BayerToC24(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL evenCol, BOOL evenRow);
    public:
      static void BayerToC24(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL evenCol);
    public:
      static void BayerToC24(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void C24ToBayer(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL evenCol);
    public:
      static void C24ToBayer(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void TransformBayer(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EColorLookup* lookup, BOOL evenCol);
    public:
      static void TransformBayer(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EColorLookup* lookup);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY, OEV_INT32 gShiftY);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX, OEV_INT32 rShiftY);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX, OEV_INT32 bShiftX);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX, OEV_INT32 gShiftX);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 rShiftX);
    public:
      static void RegisterPlanes(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBaseROI_;
    public:
      Euresys::Open_eVision_1_2::EBaseROI& operator=(const Euresys::Open_eVision_1_2::EBaseROI& other);
    public:
      EBaseROI(const Euresys::Open_eVision_1_2::EBaseROI& other);
    public:
      virtual ~EBaseROI() throw();
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetBaseTopParent();
    public:
      const Euresys::Open_eVision_1_2::EBaseROI* GetBaseTopParent() const;
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EBaseROI* GetParent() const;
    public:
      bool IsAnROI() const;
    public:
      bool HasSubROI(const Euresys::Open_eVision_1_2::EBaseROI* subROI) const;
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetFirstSubROI();
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetNextSiblingSubROI(Euresys::Open_eVision_1_2::EBaseROI* subROI);
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetNextSiblingROI();
    public:
      OEV_INT32 GetRowPitch() const;
    public:
      OEV_INT32 GetColPitch() const;
    public:
      OEV_UINT32 GetBitsPerPixel() const;
    public:
      void SetImagePtr(OEV_INT32 width, OEV_INT32 height, void* imagePointer, OEV_INT32 bitsPerRow);
    public:
      void* GetImagePtr(OEV_INT32 x, OEV_INT32 y);
    public:
      const void* GetImagePtr(OEV_INT32 x, OEV_INT32 y) const;
    public:
      void* GetImagePtr();
    public:
      const void* GetImagePtr() const;
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
      std::vector<Euresys::Open_eVision_1_2::EBaseROI*> GetSubBaseROIs(bool recursive);
    public:
      std::vector<const Euresys::Open_eVision_1_2::EBaseROI*> GetSubBaseROIs(bool bRecursive) const;
    public:
      Euresys::Open_eVision_1_2::EDragHandle HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY, float panX, float panY);
    public:
      OEV_INT32 GetTotalOrgX() const;
    public:
      OEV_INT32 GetTotalOrgY() const;
    public:
      OEV_INT32 GetTotalWidth() const;
    public:
      OEV_INT32 GetTotalHeight() const;
    public:
      void Drag(Euresys::Open_eVision_1_2::EDragHandle eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY, float f32PanX, float f32PanY);
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer) = 0;
    public:
      void Detach();
    public:
      void Attach(Euresys::Open_eVision_1_2::EBaseROI* parent);
    public:
      void Attach(Euresys::Open_eVision_1_2::EBaseROI* parent, int orgX, int orgY, int width, int height);
    public:
      void CopyTo(Euresys::Open_eVision_1_2::EBaseROI* dest) const;
    public:
      OEV_UINT32 GetPlanesPerPixel() const;
    public:
      Euresys::Open_eVision_1_2::EColorSystem GetColorSystem() const;
    public:
      void SetColorSystem(Euresys::Open_eVision_1_2::EColorSystem colorSystem);
    public:
      Euresys::Open_eVision_1_2::EImageType GetType() const;
    public:
      void SetSize(OEV_INT32 width, OEV_INT32 height);
    public:
      void SetSize(const Euresys::Open_eVision_1_2::EBaseROI* other);
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL handles, float zoomX, float zoomY, float x, float y) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY, float x, float y) const;
    public:
      void DrawFrame(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
    public:
      void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
    public:
      void DrawFrame(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY, float x, float y) const;
    public:
      void Load(const std::string& path);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(const std::string& path, Euresys::Open_eVision_1_2::EImageFileType type) const;
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void SaveJpeg(const std::string& path, int quality) const;
    public:
      void SaveJpeg2K(const std::string& path, int quality) const;
    public:
      std::string GetAuthor() const;
    public:
      void SetAuthor(const std::string& author);
    public:
      std::string GetComment() const;
    public:
      void SetComment(const std::string& comment);
    public:
      std::string GetDate() const;
    public:
      void SetDate(const std::string& date);
    public:
      std::string GetTitle() const;
    public:
      void SetTitle(const std::string& title);
    public:
      EBaseROI(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetImagePtr(OEV_INT32 width, OEV_INT32 height, void* imagePointer);
    public:
      std::vector<Euresys::Open_eVision_1_2::EBaseROI*> GetSubBaseROIs();
    public:
      std::vector<const Euresys::Open_eVision_1_2::EBaseROI*> GetSubBaseROIs() const;
    public:
      Euresys::Open_eVision_1_2::EDragHandle HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY, float panX);
    public:
      Euresys::Open_eVision_1_2::EDragHandle HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX, float zoomY);
    public:
      Euresys::Open_eVision_1_2::EDragHandle HitTest(OEV_INT32 x, OEV_INT32 y, float zoomX);
    public:
      Euresys::Open_eVision_1_2::EDragHandle HitTest(OEV_INT32 x, OEV_INT32 y);
    public:
      void Drag(Euresys::Open_eVision_1_2::EDragHandle eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY, float f32PanX);
    public:
      void Drag(Euresys::Open_eVision_1_2::EDragHandle eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX, float f32ZoomY);
    public:
      void Drag(Euresys::Open_eVision_1_2::EDragHandle eHandle, OEV_INT32 n32X, OEV_INT32 n32Y, float f32ZoomX);
    public:
      void Drag(Euresys::Open_eVision_1_2::EDragHandle eHandle, OEV_INT32 n32X, OEV_INT32 n32Y);
    public:
      void Attach(Euresys::Open_eVision_1_2::EBaseROI* parent, int orgX, int orgY, int width);
    public:
      void Attach(Euresys::Open_eVision_1_2::EBaseROI* parent, int orgX, int orgY);
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL handles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL handles, float zoomX, float zoomY) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL handles, float zoomX) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL handles) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL handles, float zoomX, float zoomY) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL handles, float zoomX) const;
    public:
      void DrawFrame(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL handles) const;
    public:
      void DrawFrame(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrame(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY) const;
    public:
      void DrawFrame(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX) const;
    public:
      void DrawFrame(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles) const;
    public:
      void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY) const;
    public:
      void DrawFrame(HDC graphicContext, BOOL bHandles, float zoomX) const;
    public:
      void DrawFrame(HDC graphicContext, BOOL bHandles) const;
    public:
      void DrawFrame(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bHandles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrame(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bHandles, float zoomX, float zoomY) const;
    public:
      void DrawFrame(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bHandles, float zoomX) const;
    public:
      void DrawFrame(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bHandles) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector) const;
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, float zoomX) const;
    public:
      void Draw(HDC graphicContext) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector, float zoomX) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EC24Vector* c24Vector) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector, float zoomX) const;
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EBW8Vector* bw8Vector) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, BOOL bHandles, float zoomX, float zoomY) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, BOOL bHandles, float zoomX) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, BOOL bHandles) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY, float x) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX, float zoomY) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles, float zoomX) const;
    public:
      void DrawFrameWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EFramePosition framePosition, BOOL bHandles) const;
    public:
      void Save(const std::string& path) const;
    public:
      void SaveJpeg(const std::string& path) const;
    public:
      void SaveJpeg2K(const std::string& path) const;
    public:
      void Load(FILE* stream);
    public:
      void Save(FILE* stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIBW8 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW8_;
    public:
      EROIBW8();
    public:
      virtual ~EROIBW8() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EBW8 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EBW8 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIBW8* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EBW8 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EBW8 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageBW8* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageBW8* GetTopParent() const;
    public:
      EROIBW8(const Euresys::Open_eVision_1_2::EROIBW8& other);
    public:
      Euresys::Open_eVision_1_2::EROIBW8& operator=(const Euresys::Open_eVision_1_2::EROIBW8& other);
    public:
      EROIBW8(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageBW8 : public Euresys::Open_eVision_1_2::EROIBW8
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW8_;
    public:
      EImageBW8();
    public:
      EImageBW8(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageBW8() throw();
    public:
      EImageBW8(const Euresys::Open_eVision_1_2::EImageBW8& other);
    public:
      Euresys::Open_eVision_1_2::EImageBW8& operator=(const Euresys::Open_eVision_1_2::EImageBW8& other);
    public:
      EImageBW8(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIBW32 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW32_;
    public:
      EROIBW32();
    public:
      virtual ~EROIBW32() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EBW32 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EBW32 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIBW32* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIBW32* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIBW32* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIBW32* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIBW32* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EBW32 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EBW32 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageBW32* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageBW32* GetTopParent() const;
    public:
      EROIBW32(const Euresys::Open_eVision_1_2::EROIBW32& other);
    public:
      Euresys::Open_eVision_1_2::EROIBW32& operator=(const Euresys::Open_eVision_1_2::EROIBW32& other);
    public:
      EROIBW32(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageBW32 : public Euresys::Open_eVision_1_2::EROIBW32
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW32_;
    public:
      EImageBW32();
    public:
      EImageBW32(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageBW32() throw();
    public:
      EImageBW32(const Euresys::Open_eVision_1_2::EImageBW32& other);
    public:
      Euresys::Open_eVision_1_2::EImageBW32& operator=(const Euresys::Open_eVision_1_2::EImageBW32& other);
    public:
      EImageBW32(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EHitAndMissKernel
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EHitAndMissKernel_;
    public:
      Euresys::Open_eVision_1_2::EHitAndMissKernel& operator=(const Euresys::Open_eVision_1_2::EHitAndMissKernel& other);
    public:
      EHitAndMissKernel(const Euresys::Open_eVision_1_2::EHitAndMissKernel& other);
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
      void SetValue(int x, int y, Euresys::Open_eVision_1_2::EHitAndMissValue value);
    public:
      Euresys::Open_eVision_1_2::EHitAndMissValue GetValue(int x, int y) const;
    public:
      EHitAndMissKernel(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EasyImage
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyImage_;
    public:
      static void SetOverlayColor(Euresys::Open_eVision_1_2::EC24 color);
    public:
      static Euresys::Open_eVision_1_2::EC24 GetOverlayColor();
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIC15* sourceImage, Euresys::Open_eVision_1_2::EROIC15* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIC16* sourceImage, Euresys::Open_eVision_1_2::EROIC16* destinationImage);
    public:
      static void Copy(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EBW1 constant, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EBW16 constant, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EBW32 constant, Euresys::Open_eVision_1_2::EROIBW32* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EC24 constant, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EC15 constant, Euresys::Open_eVision_1_2::EROIC15* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EC16 constant, Euresys::Open_eVision_1_2::EROIC16* destinationImage);
    public:
      static void Copy(Euresys::Open_eVision_1_2::EBW8 constant, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EBW1 constant, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW1* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW1* sourceImage1, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EBW8 constant, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EBW16 constant, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EC24 constant, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EBW8 constant, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EBW16 constant, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, Euresys::Open_eVision_1_2::EC24 constant, const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 constant, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 constant, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 constant, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage1, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIC24* sourceImage0, const Euresys::Open_eVision_1_2::EROIC24* sourceImage1, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIC24* sourceImage1, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Oper(Euresys::Open_eVision_1_2::EArithmeticLogicOperation operation, const Euresys::Open_eVision_1_2::EROIC24* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC16* destinationImage, OEV_INT32 panX, OEV_INT32 panY, Euresys::Open_eVision_1_2::EC24 referenceValue);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC15* destinationImage, OEV_INT32 panX, OEV_INT32 panY, Euresys::Open_eVision_1_2::EC24 referenceValue);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY, Euresys::Open_eVision_1_2::EC24 referenceValue);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EROIC15* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EROIC16* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY);
    public:
      static void Overlay(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* overlay, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 panX, OEV_INT32 panY, Euresys::Open_eVision_1_2::EC24 referenceValue);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC15* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC15* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC15* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC15* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC16* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC16* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIC16* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24A* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24A* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 rightShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 rightShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 rightShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 leftShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage, OEV_UINT32 leftShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage, OEV_UINT32 leftShift);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* sourceImageAlpha, Euresys::Open_eVision_1_2::EROIC24A* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIC24A* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImageAlpha);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8 highValue);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EBW16 highValue);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage, Euresys::Open_eVision_1_2::EBW32 highValue);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage);
    public:
      static void ConvertTo422(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float gain, float offset);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float gain, float offset);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EColor Gain, Euresys::Open_eVision_1_2::EColor Offset);
    public:
      static void Gain(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EColor Gain);
    public:
      static void Offset(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EColor Offset);
    public:
      static void Lut(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EBW16Vector* lookupTable);
    public:
      static void Lut(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8Vector* lookupTable);
    public:
      static void Lut(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8Vector* lookupTable, OEV_UINT32 numberOfScalingBits);
    public:
      static void Normalize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float imposedAverage, float imposedStandardDeviation);
    public:
      static void Normalize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float imposedAverage, float imposedStandardDeviation);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelReference, Euresys::Open_eVision_1_2::EROIBW8* imageReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelReference, Euresys::Open_eVision_1_2::EROIBW16* imageReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelReference, Euresys::Open_eVision_1_2::EROIC24* imageReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelReference, Euresys::Open_eVision_1_2::EBW8Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelReference, Euresys::Open_eVision_1_2::EBW16Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelReference, Euresys::Open_eVision_1_2::EC24Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL multiplicative);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelLightReference, Euresys::Open_eVision_1_2::EROIBW8* imageLightReference, Euresys::Open_eVision_1_2::EBW8 pixelDarkReference, Euresys::Open_eVision_1_2::EROIBW8* imageDarkReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelLightReference, Euresys::Open_eVision_1_2::EROIBW16* imageLightReference, Euresys::Open_eVision_1_2::EBW16 pixelDarkReference, Euresys::Open_eVision_1_2::EROIBW16* imageDarkReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelLightReference, Euresys::Open_eVision_1_2::EROIC24* imageLightReference, Euresys::Open_eVision_1_2::EC24 pixelDarkReference, Euresys::Open_eVision_1_2::EROIC24* imageDarkReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelLightReference, Euresys::Open_eVision_1_2::EBW8Vector* vectorOfPixelLightReference, Euresys::Open_eVision_1_2::EBW8 pixelDarkReference, Euresys::Open_eVision_1_2::EBW8Vector* vectorOfPixelDarkReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelLightReference, Euresys::Open_eVision_1_2::EBW16Vector* vectorOfPixelLightReference, Euresys::Open_eVision_1_2::EBW16 pixelDarkReference, Euresys::Open_eVision_1_2::EBW16Vector* vectorOfPixelDarkReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelLightReference, Euresys::Open_eVision_1_2::EC24Vector* vectorOfPixelLightReference, Euresys::Open_eVision_1_2::EC24 pixelDarkReference, Euresys::Open_eVision_1_2::EC24Vector* vectorOfPixelDarkReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void SetRecursiveAverageLUT(Euresys::Open_eVision_1_2::EBW16Vector* lookupTable, float reductionNoiseFactor, float reductionNoiseWidth);
    public:
      static void RecursiveAverage(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* store, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW16Vector* lookupTable);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 threshold, float relativeThreshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 threshold, float relativeThreshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue, OEV_UINT8 highValue, float relativeThreshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 threshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EBW16 lowValue, Euresys::Open_eVision_1_2::EBW16 highValue);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float relativeThreshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float relativeThreshold, Euresys::Open_eVision_1_2::EBW16 lowValue, Euresys::Open_eVision_1_2::EBW16 highValue);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EC24 minimum, Euresys::Open_eVision_1_2::EC24 maximum);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EC24 minimum, Euresys::Open_eVision_1_2::EC24 maximum, Euresys::Open_eVision_1_2::EColorLookup* colorLookupTable, Euresys::Open_eVision_1_2::EBW8 rejectValue, Euresys::Open_eVision_1_2::EBW8 acceptValue);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EC24 minimum, Euresys::Open_eVision_1_2::EC24 maximum, Euresys::Open_eVision_1_2::EColorLookup* colorLookupTable);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue, OEV_UINT8 middleValue, OEV_UINT8 highValue);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, Euresys::Open_eVision_1_2::EBW16 lowValue, Euresys::Open_eVision_1_2::EBW16 middleValue, Euresys::Open_eVision_1_2::EBW16 highValue);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
    public:
      static Euresys::Open_eVision_1_2::EBW8 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode, float relativeThresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW16 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode, float relativeThresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW8 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode, float relativeThresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW16 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode, float relativeThresholdMode);
    public:
      static void HistogramThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from, OEV_UINT32 to);
    public:
      static void HistogramThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from, OEV_UINT32 to);
    public:
      static Euresys::Open_eVision_1_2::EBW8 IsodataThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 from, OEV_UINT32 to);
    public:
      static float TwoLevelsMinResidueThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EBW8& firstWhitePixelValue, float& averageBlack, float& averageWhite);
    public:
      static float ThreeLevelsMinResidueThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EBW8& firstGrayPixelValue, Euresys::Open_eVision_1_2::EBW8& firstWhitePixelValue, float& averageBlack, float& averageGray, float& averageWhite);
    public:
      static Euresys::Open_eVision_1_2::EBW16 IsodataThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 from, OEV_UINT32 to);
    public:
      static void ConvolKernel(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolKernel(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolKernel(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolSymmetricKernel(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolSymmetricKernel(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolSymmetricKernel(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EKernel* kernel);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EBW8Vector* sourceVector, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EBW16Vector* sourceVector, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ConvolGaussian(const Euresys::Open_eVision_1_2::EBW8Vector* sourceImage, Euresys::Open_eVision_1_2::EBW8Vector* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolGaussian(const Euresys::Open_eVision_1_2::EBW16Vector* sourceImage, Euresys::Open_eVision_1_2::EBW16Vector* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ModulusImage(Euresys::Open_eVision_1_2::EImageBW8* destinationImage, float gain);
    public:
      static void ArgumentImage(Euresys::Open_eVision_1_2::EImageBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8 phase, float period);
    public:
      static void ArgumentImage(Euresys::Open_eVision_1_2::EImageBW8* destinationImage);
    public:
      static void ArgumentImage(Euresys::Open_eVision_1_2::EImageBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8 phase);
    public:
      static void GradientScalar(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EROIBW8* lookupTable);
    public:
      static void GradientScalar(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EROIBW8* lookupTable);
    public:
      static void LocalAverage(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
    public:
      static void LocalAverage(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
    public:
      static void LocalDeviation(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
    public:
      static void LocalDeviation(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfWidth, OEV_UINT32 halfHeight);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelDilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelOpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelCloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelWhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelBlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelMorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth, OEV_UINT32 halfOfKernelHeight);
    public:
      static void BiLevelErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelDilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelOpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelCloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelWhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelBlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelMorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode, OEV_INT32 n32ValOffDilate);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate, OEV_INT32 n32ValOffErode);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOff);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOff);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EBW8Vector* pSrc, Euresys::Open_eVision_1_2::EBW8Vector* pDst, OEV_UINT32 un32HalfWidth);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EBW16Vector* pSrc, Euresys::Open_eVision_1_2::EBW16Vector* pDst, OEV_UINT32 un32HalfWidth);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOff);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOff);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EBW8Vector* pSrc, Euresys::Open_eVision_1_2::EBW8Vector* pDst, OEV_UINT32 un32HalfWidth);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EBW16Vector* pSrc, Euresys::Open_eVision_1_2::EBW16Vector* pDst, OEV_UINT32 un32HalfWidth);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate, OEV_INT32 n32ValOffErode);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode, OEV_INT32 n32ValOffDilate);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate);
    public:
      static void Median(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Median(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Median(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Median(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Thin(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* thinningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Thin(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EKernel* thinningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Thin(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EKernel* thinningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static OEV_INT32 Thin(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, Euresys::Open_eVision_1_2::EKernel* thinningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Thick(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* thickeningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Thick(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EKernel* thickeningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Thick(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EKernel* thickeningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static OEV_INT32 Thick(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, Euresys::Open_eVision_1_2::EKernel* thickeningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void BiLevelMedian(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelThin(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* thinningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void BiLevelThick(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EKernel* thickeningKernel, Euresys::Open_eVision_1_2::EKernelRotation rotationMode, OEV_INT32& numberOfIterations);
    public:
      static void Distance(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EImageBW16* destinationImage, OEV_INT32 valueOutOfImage);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW32* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits, BOOL saturate);
    public:
      static void Equalize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Equalize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void CumulateHistogram(Euresys::Open_eVision_1_2::EBWHistogramVector* sourceVector, Euresys::Open_eVision_1_2::EBWHistogramVector* destinationVector);
    public:
      static float AnalyseHistogram(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation, OEV_INT32 minimumIndex, OEV_INT32 maximumIndex);
    public:
      static float AnalyseHistogramBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation, OEV_INT32 minimumIndex, OEV_INT32 maximumIndex);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void ProjectOnARow(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EC24Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW32Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void ProjectOnAColumn(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EC24Vector* destinationVector);
    public:
      static float Focusing(Euresys::Open_eVision_1_2::EROIBW8* image);
    public:
      static float Focusing(Euresys::Open_eVision_1_2::EROIBW16* image);
    public:
      static float Focusing(Euresys::Open_eVision_1_2::EROIC24* image);
    public:
      static void SetFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL odd);
    public:
      static void SetFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, BOOL odd);
    public:
      static void SetFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL odd);
    public:
      static void GetFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL odd);
    public:
      static void GetFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, BOOL odd);
    public:
      static void GetFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL odd);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 fixedRow);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 fixedRow);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 fixedRow);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 offset, OEV_UINT32 fixedRow);
    public:
      static void MatchFrames(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
    public:
      static void MatchFrames(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
    public:
      static void MatchFrames(Euresys::Open_eVision_1_2::EROIC24* sourceImage, OEV_INT32 fixedRow, OEV_INT32 minimumOffset, OEV_INT32 maximumOffset, OEV_INT32& bestOffset);
    public:
      static void SwapFrames(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void SwapFrames(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void SwapFrames(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void SetupEqualize(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EBW8Vector* lookupTable);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 outOfMaskValue, Euresys::Open_eVision_1_2::EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 outOfMaskValue, Euresys::Open_eVision_1_2::EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToLineSegment(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EC24 outOfMaskValue, Euresys::Open_eVision_1_2::EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EBW16 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EC24 pixel, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIBW16* destinationImage, Euresys::Open_eVision_1_2::EBW16Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void LineSegmentToImage(Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EC24Vector* path, OEV_INT32 X0, OEV_INT32 Y0, OEV_INT32 X1, OEV_INT32 Y1);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8PathVector* path);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16PathVector* path);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24PathVector* path);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 outOfMaskValue, Euresys::Open_eVision_1_2::EBW8PathVector* path);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 outOfMaskValue, Euresys::Open_eVision_1_2::EBW16PathVector* path);
    public:
      static void ImageToPath(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EC24 outOfMaskValue, Euresys::Open_eVision_1_2::EC24PathVector* path);
    public:
      static void PathToImage(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8PathVector* path);
    public:
      static void PathToImage(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16PathVector* path);
    public:
      static void PathToImage(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24PathVector* path);
    public:
      static void ProfileDerivative(Euresys::Open_eVision_1_2::EBW8Vector* sourceVector, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ProfileDerivative(Euresys::Open_eVision_1_2::EBW16Vector* sourceVector, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW8Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude, OEV_UINT32 minimumArea);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW16Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude, OEV_UINT32 minimumArea);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIBW1* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW1* sourceImage1);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage1);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIC24* sourceImage0, const Euresys::Open_eVision_1_2::EROIC24* sourceImage1);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW8* sourceImage1, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage0, const Euresys::Open_eVision_1_2::EROIBW16* sourceImage1, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static OEV_UINT32 PixelCompare(const Euresys::Open_eVision_1_2::EROIC24* sourceImage0, const Euresys::Open_eVision_1_2::EROIC24* sourceImage1, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static void PixelMin(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& minimumValue);
    public:
      static void PixelMin(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& minimumValue);
    public:
      static void PixelMin(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8& minimumValue);
    public:
      static void PixelMin(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16& minimumValue);
    public:
      static void PixelMinBW8(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& minimumValue);
    public:
      static void PixelMinBW16(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& minimumValue);
    public:
      static void PixelMax(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& maximumValue);
    public:
      static void PixelMax(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& maximumValue);
    public:
      static void PixelMax(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8& maximumValue);
    public:
      static void PixelMax(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16& maximumValue);
    public:
      static void PixelMaxBW8(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& maximumValue);
    public:
      static void PixelMaxBW16(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& maximumValue);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& average);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& average);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, float& average0, float& average1, float& average2);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* inputMask, float& average);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* inputMask, float& average);
    public:
      static void PixelAverage(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* inputMask, float& average0, float& average1, float& average2);
    public:
      static void PixelStat(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& minimumValue, Euresys::Open_eVision_1_2::EBW8& maximumValue, float& average);
    public:
      static void PixelStat(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& minimumValue, Euresys::Open_eVision_1_2::EBW16& maximumValue, float& average);
    public:
      static void PixelStat(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8& minimumValue, Euresys::Open_eVision_1_2::EBW8& maximumValue, float& average);
    public:
      static void PixelStat(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16& minimumValue, Euresys::Open_eVision_1_2::EBW16& maximumValue, float& average);
    public:
      static void PixelStatBW8(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8& minimumValue, Euresys::Open_eVision_1_2::EBW8& maximumValue, float& average);
    public:
      static void PixelStatBW16(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16& minimumValue, Euresys::Open_eVision_1_2::EBW16& maximumValue, float& average);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& standardDeviation, float& mean);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& standardDeviation, float& mean);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, float& standardDeviation0, float& standardDeviation1, float& standardDeviation2, float& correlation01, float& correlation12, float& correlation20, float& mean0, float& mean1, float& mean2);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& standardDeviation, float& mean);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& standardDeviation, float& mean);
    public:
      static void PixelStdDev(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& standardDeviation0, float& standardDeviation1, float& standardDeviation2, float& correlation01, float& correlation12, float& correlation20, float& mean0, float& mean1, float& mean2);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_INT32& numberOfPixelsBelowThreshold, OEV_INT32& numberOfPixelsBetweenThresholds, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
    public:
      static void PixelCount(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_UINT64& numberOfPixelsBelowThreshold, OEV_UINT64& numberOfPixelsBetweenThresholds, OEV_UINT64& numberOfPixelsAboveThreshold);
    public:
      static void Area(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void Area(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void Area(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void Area(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 threshold, OEV_INT32& numberOfPixelsAboveThreshold);
    public:
      static void AreaDoubleThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
    public:
      static void AreaDoubleThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
    public:
      static void AreaDoubleThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW8 lowThreshold, Euresys::Open_eVision_1_2::EBW8 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
    public:
      static void AreaDoubleThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBW16 lowThreshold, Euresys::Open_eVision_1_2::EBW16 highThreshold, OEV_INT32& numberOfPixelsBetweenThresholds);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& variance, float& mean);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& variance, float& mean);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, float& variance0, float& variance1, float& variance2, float& covariance01, float& covariance12, float& covariance20, float& mean0, float& mean1, float& mean2);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& variance, float& mean);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& variance, float& mean);
    public:
      static void PixelVariance(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& variance0, float& variance1, float& variance2, float& covariance01, float& covariance12, float& covariance20, float& mean0, float& mean1, float& mean2);
    public:
      static void GravityCenter(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 threshold, float& gravityX, float& gravityY);
    public:
      static void GravityCenter(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, OEV_UINT32 threshold, float& gravityX, float& gravityY);
    public:
      static void GravityCenter(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& gravityX, float& gravityY);
    public:
      static void GravityCenter(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& gravityX, float& gravityY);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, OEV_UINT32 count, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EReferenceNoise referenceNoise);
    public:
      static float SignalNoiseRatio(Euresys::Open_eVision_1_2::EROIBW8* pSrcImage, Euresys::Open_eVision_1_2::EROIBW16* pRefImage, OEV_UINT32 un32Count, Euresys::Open_eVision_1_2::EReferenceNoise eReferenceNoise);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void BinaryMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, OEV_UINT32 threshold, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& M, float& Mx, float& My);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& M, float& Mx, float& My);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
    public:
      static void WeightedMoments(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, float& M, float& Mx, float& My, float& Mxx, float& Mxy, float& Myy, float& Mxxx, float& Mxxy, float& Mxyy, float& Myyy, float& Mxxxx, float& Mxxxy, float& Mxxyy, float& Mxyyy, float& Myyyy);
    public:
      static void SetCircleWarp(float centerX, float centerY, OEV_INT32 numberOfRadialSampledPoints, float minimumRadius, float maximumRadius, OEV_INT32 numberOfTangentSampledPoints, float minimumAngle, float maximumAngle, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY, OEV_INT32 shiftX, OEV_INT32 shiftY);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY, OEV_INT32 shiftX, OEV_INT32 shiftY);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EPathVector* path);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EPathVector* path);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EBW8PathVector* path, BOOL freeman);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EBW16PathVector* path, BOOL freeman);
    public:
      static void VerticalMirror(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void VerticalMirror(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void VerticalMirror(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void HorizontalMirror(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void HorizontalMirror(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void HorizontalMirror(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIC24* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits);
    public:
      static void Shrink(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Shrink(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Shrink(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void AdaptiveThreshold(const Euresys::Open_eVision_1_2::EROIBW8* src, Euresys::Open_eVision_1_2::EROIBW8* dst, Euresys::Open_eVision_1_2::EAdaptiveThresholdMethod method, int halfKernelSize, int constant);
    public:
      static void HitAndMiss(const Euresys::Open_eVision_1_2::EROIBW8* source, Euresys::Open_eVision_1_2::EROIBW8* destination, const Euresys::Open_eVision_1_2::EHitAndMissKernel& kernel);
    public:
      static void HitAndMiss(const Euresys::Open_eVision_1_2::EROIBW16* source, Euresys::Open_eVision_1_2::EROIBW16* destination, const Euresys::Open_eVision_1_2::EHitAndMissKernel& kernel);
    public:
      static void HitAndMiss(const Euresys::Open_eVision_1_2::EROIC24* source, Euresys::Open_eVision_1_2::EROIC24* destination, const Euresys::Open_eVision_1_2::EHitAndMissKernel& kernel);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage);
    public:
      static void Convert(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW32* destinationImage);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float gain);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float gain);
    public:
      static void GainOffset(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Lut(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EBW8Vector* lookupTable);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelReference, Euresys::Open_eVision_1_2::EROIBW8* imageReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelReference, Euresys::Open_eVision_1_2::EROIBW16* imageReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelReference, Euresys::Open_eVision_1_2::EROIC24* imageReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EBW8 pixelReference, Euresys::Open_eVision_1_2::EBW8Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBW16 pixelReference, Euresys::Open_eVision_1_2::EBW16Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Uniformize(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EC24 pixelReference, Euresys::Open_eVision_1_2::EC24Vector* vectorOfPixelReference, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void SetRecursiveAverageLUT(Euresys::Open_eVision_1_2::EBW16Vector* lookupTable, float reductionNoiseFactor);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 threshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 threshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue, OEV_UINT8 highValue);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 threshold);
    public:
      static void Threshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue, OEV_UINT8 middleValue);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue);
    public:
      static void DoubleThreshold(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
    public:
      static Euresys::Open_eVision_1_2::EBW8 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW16 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW8 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode);
    public:
      static Euresys::Open_eVision_1_2::EBW16 AutoThreshold(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EThresholdMode thresholdMode);
    public:
      static void HistogramThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from);
    public:
      static void HistogramThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold);
    public:
      static void HistogramThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold);
    public:
      static void HistogramThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from);
    public:
      static void HistogramThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold);
    public:
      static void HistogramThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold);
    public:
      static Euresys::Open_eVision_1_2::EBW8 IsodataThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 from);
    public:
      static Euresys::Open_eVision_1_2::EBW8 IsodataThreshold(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram);
    public:
      static Euresys::Open_eVision_1_2::EBW16 IsodataThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 from);
    public:
      static Euresys::Open_eVision_1_2::EBW16 IsodataThresholdBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLowpass1(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLowpass2(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLowpass3(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EBW8Vector* sourceVector, Euresys::Open_eVision_1_2::EBW8Vector* destinationVector);
    public:
      static void ConvolUniform(Euresys::Open_eVision_1_2::EBW16Vector* sourceVector, Euresys::Open_eVision_1_2::EBW16Vector* destinationVector);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ConvolGaussian(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolGaussian(const Euresys::Open_eVision_1_2::EBW8Vector* sourceImage, Euresys::Open_eVision_1_2::EBW8Vector* destinationImage);
    public:
      static void ConvolGaussian(const Euresys::Open_eVision_1_2::EBW16Vector* sourceImage, Euresys::Open_eVision_1_2::EBW16Vector* destinationImage);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolHighpass1(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolHighpass2(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolGradientX(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolGradientY(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolGradient(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolSobelX(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolSobelY(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolSobel(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolPrewittX(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolPrewittY(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolPrewitt(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolRoberts(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLaplacianX(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLaplacianY(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLaplacian4(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ConvolLaplacian8(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ModulusImage(Euresys::Open_eVision_1_2::EImageBW8* destinationImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void DilateBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ErodeBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void OpenBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void CloseBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void WhiteTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BlackTopHatBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void MorphoGradientBox(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ErodeDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void DilateDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void OpenDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void CloseDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void WhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void BlackTopHatDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage, Euresys::Open_eVision_1_2::EROIBW1* destinationImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void MorphoGradientDisk(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      static void BiLevelErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelErodeBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelDilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelDilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelDilateBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelOpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelOpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelOpenBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelCloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelCloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelCloseBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelWhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelWhiteTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelBlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelBlackTopHatBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelMorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth);
    public:
      static void BiLevelMorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelMorphoGradientBox(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelErodeDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelDilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelDilateDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelOpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelOpenDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelCloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelCloseDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void BiLevelWhiteTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelBlackTopHatDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelMorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void BiLevelMorphoGradientDisk(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode);
    public:
      static void Open(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate);
    public:
      static void Close(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EBW8Vector* pSrc, Euresys::Open_eVision_1_2::EBW8Vector* pDst);
    public:
      static void Erode(Euresys::Open_eVision_1_2::EBW16Vector* pSrc, Euresys::Open_eVision_1_2::EBW16Vector* pDst);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EBW8Vector* pSrc, Euresys::Open_eVision_1_2::EBW8Vector* pDst);
    public:
      static void Dilate(Euresys::Open_eVision_1_2::EBW16Vector* pSrc, Euresys::Open_eVision_1_2::EBW16Vector* pDst);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffDilate);
    public:
      static void BlackTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 n32Iter);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter, Euresys::Open_eVision_1_2::EC24 c24ColorOffErode);
    public:
      static void WhiteTopHat(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 n32Iter);
    public:
      static void Distance(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EImageBW16* destinationImage);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW32* sourceImage, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
    public:
      static void Histogram(const Euresys::Open_eVision_1_2::EROIBW32* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask, Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits);
    public:
      static float AnalyseHistogram(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation, OEV_INT32 minimumIndex);
    public:
      static float AnalyseHistogram(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation);
    public:
      static float AnalyseHistogramBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation, OEV_INT32 minimumIndex);
    public:
      static float AnalyseHistogramBW16(Euresys::Open_eVision_1_2::EBWHistogramVector* histogram, Euresys::Open_eVision_1_2::EHistogramFeature operation);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void RebuildFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, OEV_INT32 offset);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, OEV_INT32 offset);
    public:
      static void RealignFrame(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, OEV_INT32 offset);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW8Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW8Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW8Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW8Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW16Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW16Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW16Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks, OEV_UINT32 lowThreshold);
    public:
      static void GetProfilePeaks(Euresys::Open_eVision_1_2::EBW16Vector* profile, Euresys::Open_eVision_1_2::EPeakVector* peaks);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float RmsNoise(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, OEV_UINT32 count);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const Euresys::Open_eVision_1_2::EROIBW8* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIBW16* sourceImage, const Euresys::Open_eVision_1_2::EROIBW16* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float SignalNoiseRatio(const Euresys::Open_eVision_1_2::EROIC24* sourceImage, const Euresys::Open_eVision_1_2::EROIC24* referenceImage, const Euresys::Open_eVision_1_2::EROIBW8* mask);
    public:
      static float SignalNoiseRatio(Euresys::Open_eVision_1_2::EROIBW8* pSrcImage, Euresys::Open_eVision_1_2::EROIBW16* pRefImage, OEV_UINT32 un32Count);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY, OEV_INT32 shiftX);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY, OEV_INT32 shiftX);
    public:
      static void Warp(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, Euresys::Open_eVision_1_2::EImageBW16* warpImageX, Euresys::Open_eVision_1_2::EImageBW16* warpImageY);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EBW8PathVector* path);
    public:
      static void Contour(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EContourMode contourMode, OEV_INT32 startX, OEV_INT32 startY, Euresys::Open_eVision_1_2::EContourThreshold thresholdMode, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::EConnexity connexity, Euresys::Open_eVision_1_2::EBW16PathVector* path);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void LinearTransform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIC24* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      static void ScaleRotate(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, Euresys::Open_eVision_1_2::EROIBW16* destinationImage);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIBW16* sourceImage, Euresys::Open_eVision_1_2::EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
    public:
      static void Register(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y);
    public:
      static void AdaptiveThreshold(const Euresys::Open_eVision_1_2::EROIBW8* src, Euresys::Open_eVision_1_2::EROIBW8* dst, Euresys::Open_eVision_1_2::EAdaptiveThresholdMethod method, int halfKernelSize);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EasyObject
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EasyObject_;
    public:
      static bool IsUnsignedIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      static bool IsIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      static bool IsFloatFeature(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      static void ContourArea(Euresys::Open_eVision_1_2::EPathVector* pPathVector, OEV_INT32& n32Area);
    public:
      static void ContourGravityCenter(Euresys::Open_eVision_1_2::EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY);
    public:
      static void ContourInertia(Euresys::Open_eVision_1_2::EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY, float& f32SigmaX, float& f32SigmaY, float& f32SigmaXY);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EShape_;
    public:
      Euresys::Open_eVision_1_2::EShape& operator=(const Euresys::Open_eVision_1_2::EShape& other);
    public:
      EShape(const Euresys::Open_eVision_1_2::EShape& other);
    public:
      EShape();
    public:
      virtual ~EShape() throw();
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType() = 0;
    public:
      std::string GetName();
    public:
      void SetName(const std::string& name);
    public:
      Euresys::Open_eVision_1_2::EShape* GetShapeNamed(const std::string& name);
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
      void EnableBehaviorFilter(Euresys::Open_eVision_1_2::EShapeBehavior behavior, BOOL value);
    public:
      void DisableBehaviorFilter(Euresys::Open_eVision_1_2::EShapeBehavior behavior);
    public:
      void Attach(Euresys::Open_eVision_1_2::EShape* mother);
    public:
      void Detach();
    public:
      void DetachDaughters();
    public:
      OEV_UINT32 GetNumDaughters();
    public:
      Euresys::Open_eVision_1_2::EShape* GetMother();
    public:
      virtual Euresys::Open_eVision_1_2::EShape* GetDaughter(OEV_UINT32 index);
    public:
      Euresys::Open_eVision_1_2::EWorldShape* GetWorldShape();
    public:
      BOOL IsWorld();
    public:
      void InvalidateWorld();
    public:
      Euresys::Open_eVision_1_2::EPoint LocalToSensor(const Euresys::Open_eVision_1_2::EPoint& LPoint);
    public:
      Euresys::Open_eVision_1_2::EPoint SensorToLocal(const Euresys::Open_eVision_1_2::EPoint& SPoint);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters) = 0;
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters) = 0;
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters) = 0;
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters) = 0;
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
      Euresys::Open_eVision_1_2::EDragHandle GetHitHandle();
    public:
      Euresys::Open_eVision_1_2::EShape* GetHitShape();
    public:
      void SetDraggingMode(Euresys::Open_eVision_1_2::EDraggingMode eDraggingMode, BOOL bDaughters);
    public:
      Euresys::Open_eVision_1_2::EDraggingMode GetDraggingMode();
    public:
      void SetCursor(OEV_INT32 x, OEV_INT32 y);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY) = 0;
    public:
      virtual void Closest() = 0;
    public:
      Euresys::Open_eVision_1_2::EShape* GetClosestShape();
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* pSrc, BOOL bDaughters);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer, BOOL daughters);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer, BOOL daughters);
    public:
      virtual void EnableTypeFilter(OEV_UINT32 un32Types);
    public:
      virtual void DisableTypeFilter();
    public:
      EShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
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
      void EnableBehaviorFilter(Euresys::Open_eVision_1_2::EShapeBehavior behavior);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode) = 0;
    public:
      virtual void Draw(HDC graphicContext) = 0;
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode) = 0;
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color) = 0;
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode) = 0;
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext) = 0;
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode) = 0;
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext) = 0;
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
      void SetDraggingMode(Euresys::Open_eVision_1_2::EDraggingMode eDraggingMode);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* pSrc);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
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
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ERectangle : public Euresys::Open_eVision_1_2::EFrame
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangle_;
    public:
      ERectangle();
    public:
      ERectangle(const Euresys::Open_eVision_1_2::EPoint& center, float sizeX, float sizeY, float angle);
    public:
      ERectangle(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      ERectangle(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      ERectangle(const Euresys::Open_eVision_1_2::ERectangle& other);
    public:
      Euresys::Open_eVision_1_2::ERectangle& operator=(const Euresys::Open_eVision_1_2::ERectangle& other);
    public:
      Euresys::Open_eVision_1_2::ERectangle* CopyTo(Euresys::Open_eVision_1_2::ERectangle* other) const;
    public:
      void SetFromOppositeCorners(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromThreeCorners(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetSize(float sizeX, float sizeY);
    public:
      float GetSizeX() const;
    public:
      float GetSizeY() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fractionX, float fractionY);
    public:
      void GetMidEdges(Euresys::Open_eVision_1_2::EPoint& x, Euresys::Open_eVision_1_2::EPoint& XX, Euresys::Open_eVision_1_2::EPoint& y, Euresys::Open_eVision_1_2::EPoint& YY);
    public:
      void GetCorners(Euresys::Open_eVision_1_2::EPoint& xy, Euresys::Open_eVision_1_2::EPoint& XXy, Euresys::Open_eVision_1_2::EPoint& xYY, Euresys::Open_eVision_1_2::EPoint& XXYY);
    public:
      void GetEdges(Euresys::Open_eVision_1_2::ELine& x, Euresys::Open_eVision_1_2::ELine& XX, Euresys::Open_eVision_1_2::ELine& y, Euresys::Open_eVision_1_2::ELine& YY);
    public:
      virtual ~ERectangle() throw();
    public:
      ERectangle(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      ERectangle(const Euresys::Open_eVision_1_2::EPoint& center, float sizeX, float sizeY);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ERectangleShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangleShape_;
    public:
      ERectangleShape(const Euresys::Open_eVision_1_2::ERectangleShape& other);
    public:
      ERectangleShape();
    public:
      virtual ~ERectangleShape() throw();
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
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
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromOppositeCorners(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromThreeCorners(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      virtual void SetRectangle(const Euresys::Open_eVision_1_2::ERectangle& rectangle);
    public:
      void SetSize(float sizeX, float sizeY);
    public:
      float GetSizeX() const;
    public:
      float GetSizeY() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fractionX, float fractionY);
    public:
      void GetMidEdges(Euresys::Open_eVision_1_2::EPoint& x, Euresys::Open_eVision_1_2::EPoint& XX, Euresys::Open_eVision_1_2::EPoint& y, Euresys::Open_eVision_1_2::EPoint& YY);
    public:
      void GetCorners(Euresys::Open_eVision_1_2::EPoint& xy, Euresys::Open_eVision_1_2::EPoint& XXy, Euresys::Open_eVision_1_2::EPoint& xYY, Euresys::Open_eVision_1_2::EPoint& XXYY);
    public:
      void GetEdges(Euresys::Open_eVision_1_2::ELine& x, Euresys::Open_eVision_1_2::ELine& XX, Euresys::Open_eVision_1_2::ELine& y, Euresys::Open_eVision_1_2::ELine& YY);
    public:
      Euresys::Open_eVision_1_2::ERectangleShape& operator=(const Euresys::Open_eVision_1_2::ERectangleShape& other);
    public:
      Euresys::Open_eVision_1_2::ERectangleShape* CopyTo(Euresys::Open_eVision_1_2::ERectangleShape* dest, BOOL bRecursive) const;
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL bDaughters);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      ERectangleShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBarCode : public Euresys::Open_eVision_1_2::ERectangleShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBarCode_;
    public:
      Euresys::Open_eVision_1_2::EBarCode& operator=(const Euresys::Open_eVision_1_2::EBarCode& other);
    public:
      EBarCode(const Euresys::Open_eVision_1_2::EBarCode& other);
    public:
      EBarCode();
    public:
      virtual ~EBarCode() throw();
    public:
      virtual void SetRectangle(const Euresys::Open_eVision_1_2::ERectangle& rectangle);
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
      void Detect(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      std::string Decode(Euresys::Open_eVision_1_2::ESymbologies symbology);
    public:
      std::string Read(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void GetDecodedDirection(BOOL& directEncoding);
    public:
      void GetDecodedDirection(Euresys::Open_eVision_1_2::ESymbologies symbology, BOOL& directEncoding);
    public:
      void GetDecodedAngle(float& decodedAngle);
    public:
      void GetDecodedAngle(float& decodedAngle, float cutAngle);
    public:
      void GetDecodedAngle(Euresys::Open_eVision_1_2::ESymbologies symbology, float& decodedAngle);
    public:
      void GetDecodedAngle(Euresys::Open_eVision_1_2::ESymbologies symbology, float& decodedAngle, float cutAngle);
    public:
      void GetDecodedRectangle(Euresys::Open_eVision_1_2::ERectangle& rect);
    public:
      void GetDecodedRectangle(Euresys::Open_eVision_1_2::ESymbologies symbology, Euresys::Open_eVision_1_2::ERectangle& rect);
    public:
      OEV_UINT32 GetNumEnabledSymbologies();
    public:
      OEV_UINT32 GetNumDecodedSymbologies();
    public:
      Euresys::Open_eVision_1_2::ESymbologies GetDecodedSymbology(OEV_UINT32 index);
    public:
      OEV_UINT32 GetStandardSymbologies();
    public:
      void SetStandardSymbologies(OEV_UINT32 un32StandardSymbologies);
    public:
      OEV_UINT32 GetAdditionalSymbologies();
    public:
      void SetAdditionalSymbologies(OEV_UINT32 un32AdditionalSymbologies);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
    public:
      std::string GetSymbologyName(Euresys::Open_eVision_1_2::ESymbologies symbology);
    public:
      EBarCode(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBW16PathVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW16PathVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EBW16Path element);
    public:
      Euresys::Open_eVision_1_2::EBW16Path& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EBW16Path GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EBW16Path value);
    public:
      EBW16PathVector();
    public:
      EBW16PathVector(OEV_UINT32 maxNumberOfElements);
    public:
      EBW16PathVector(const Euresys::Open_eVision_1_2::EBW16PathVector& other);
    public:
      virtual ~EBW16PathVector() throw();
    public:
      Euresys::Open_eVision_1_2::EBW16PathVector& operator=(const Euresys::Open_eVision_1_2::EBW16PathVector& other);
    public:
      BOOL GetClosed();
    public:
      void SetClosed(BOOL bClosed);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      EBW16PathVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBW16Vector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW16Vector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EBW16 element);
    public:
      Euresys::Open_eVision_1_2::EBW16& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EBW16 GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EBW16 value);
    public:
      EBW16Vector();
    public:
      EBW16Vector(OEV_UINT32 maxNumberOfElements);
    public:
      EBW16Vector(const Euresys::Open_eVision_1_2::EBW16Vector& other);
    public:
      virtual ~EBW16Vector() throw();
    public:
      Euresys::Open_eVision_1_2::EBW16Vector& operator=(const Euresys::Open_eVision_1_2::EBW16Vector& other);
    public:
      void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
    public:
      EBW16Vector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetYRange(OEV_INT32 n32YMin);
    public:
      void SetYRange();
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height);
    public:
      float WeightedMoment(OEV_UINT32 from);
    public:
      float WeightedMoment();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBW8PathVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW8PathVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EBW8Path element);
    public:
      Euresys::Open_eVision_1_2::EBW8Path& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EBW8Path GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EBW8Path value);
    public:
      EBW8PathVector();
    public:
      EBW8PathVector(OEV_UINT32 maxNumberOfElements);
    public:
      EBW8PathVector(const Euresys::Open_eVision_1_2::EBW8PathVector& other);
    public:
      Euresys::Open_eVision_1_2::EBW8PathVector& operator=(const Euresys::Open_eVision_1_2::EBW8PathVector& other);
    public:
      virtual ~EBW8PathVector() throw();
    public:
      BOOL GetClosed();
    public:
      void SetClosed(BOOL bClosed);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      EBW8PathVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBW8Vector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBW8Vector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EBW8 element);
    public:
      Euresys::Open_eVision_1_2::EBW8& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EBW8 GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EBW8 value);
    public:
      EBW8Vector();
    public:
      EBW8Vector(OEV_UINT32 maxNumberOfElements);
    public:
      EBW8Vector(const Euresys::Open_eVision_1_2::EBW8Vector& other);
    public:
      Euresys::Open_eVision_1_2::EBW8Vector& operator=(const Euresys::Open_eVision_1_2::EBW8Vector& other);
    public:
      virtual ~EBW8Vector() throw();
    public:
      void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      float WeightedMoment(OEV_UINT32 from, OEV_UINT32 to);
    public:
      EBW8Vector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetYRange(OEV_INT32 n32YMin);
    public:
      void SetYRange();
    public:
      void Draw(HDC graphicContext, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, float width, float height);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height);
    public:
      float WeightedMoment(OEV_UINT32 from);
    public:
      float WeightedMoment();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EBWHistogramVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBWHistogramVector_;
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
      EBWHistogramVector(const Euresys::Open_eVision_1_2::EBWHistogramVector& other);
    public:
      EBWHistogramVector(OEV_UINT32 maxNumberOfElements);
    public:
      virtual ~EBWHistogramVector() throw();
    public:
      Euresys::Open_eVision_1_2::EBWHistogramVector& operator=(const Euresys::Open_eVision_1_2::EBWHistogramVector& other);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      EBWHistogramVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float width, float height);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float width, float height);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EC24PathVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EC24PathVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EC24Path element);
    public:
      Euresys::Open_eVision_1_2::EC24Path& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EC24Path GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EC24Path value);
    public:
      EC24PathVector();
    public:
      EC24PathVector(const Euresys::Open_eVision_1_2::EC24PathVector& other);
    public:
      EC24PathVector(OEV_UINT32 maxNumberOfElements);
    public:
      virtual ~EC24PathVector() throw();
    public:
      Euresys::Open_eVision_1_2::EC24PathVector& operator=(const Euresys::Open_eVision_1_2::EC24PathVector& other);
    public:
      BOOL GetClosed();
    public:
      void SetClosed(BOOL bClosed);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      EC24PathVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EC24Vector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EC24Vector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EC24 element);
    public:
      Euresys::Open_eVision_1_2::EC24& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EC24 GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EC24 value);
    public:
      EC24Vector();
    public:
      EC24Vector(OEV_UINT32 maxNumberOfElements);
    public:
      EC24Vector(const Euresys::Open_eVision_1_2::EC24Vector& other);
    public:
      virtual ~EC24Vector() throw();
    public:
      Euresys::Open_eVision_1_2::EC24Vector& operator=(const Euresys::Open_eVision_1_2::EC24Vector& other);
    public:
      void SetYRange(OEV_INT32 n32YMin, OEV_UINT32 un32YMax);
    public:
      void Draw(HDC graphicContext, float width, float height);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(HDC graphicContext, float width, float height, float originX, float originY, const Euresys::Open_eVision_1_2::ERGBColor& color0, const Euresys::Open_eVision_1_2::ERGBColor& color1, const Euresys::Open_eVision_1_2::ERGBColor& color2);
    public:
      void Draw(HDC graphicContext, float width, float height, const Euresys::Open_eVision_1_2::ERGBColor& color0, const Euresys::Open_eVision_1_2::ERGBColor& color1, const Euresys::Open_eVision_1_2::ERGBColor& color2);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, float originX, float originY, const Euresys::Open_eVision_1_2::ERGBColor& color0, const Euresys::Open_eVision_1_2::ERGBColor& color1, const Euresys::Open_eVision_1_2::ERGBColor& color2);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float width, float height, const Euresys::Open_eVision_1_2::ERGBColor& color0, const Euresys::Open_eVision_1_2::ERGBColor& color1, const Euresys::Open_eVision_1_2::ERGBColor& color2);
    public:
      EC24Vector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetYRange(OEV_INT32 n32YMin);
    public:
      void SetYRange();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ESerializer
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ESerializer_;
    public:
      virtual void Close() = 0;
    public:
      virtual BOOL GetWriting() const = 0;
    public:
      virtual ~ESerializer() throw();
    public:
      static Euresys::Open_eVision_1_2::ESerializer* CreateFileWriter(const std::string& filePath, Euresys::Open_eVision_1_2::ESerializerFileWriterMode mode);
    public:
      static Euresys::Open_eVision_1_2::ESerializer* CreateFileReader(const std::string& filePath);
    public:
      static Euresys::Open_eVision_1_2::ESerializer* CreateCallbackWriter(void* isEOS, void* setCurrentPos, void* getCurrentPos, void* serializeMemory, void* close, void* cookie);
    public:
      static Euresys::Open_eVision_1_2::ESerializer* CreateCallbackReader(void* isEOS, void* setCurrentPos, void* getCurrentPos, void* serializeMemory, void* close, void* cookie);
    public:
      ESerializer();
    public:
      ESerializer(const Euresys::Open_eVision_1_2::ESerializer& other);
    public:
      Euresys::Open_eVision_1_2::ESerializer& operator=(const Euresys::Open_eVision_1_2::ESerializer& other);
    public:
      ESerializer(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      static Euresys::Open_eVision_1_2::ESerializer* CreateFileWriter(const std::string& filePath);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECallbackSerializer : public Euresys::Open_eVision_1_2::ESerializer
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECallbackSerializer_;
    public:
      Euresys::Open_eVision_1_2::ECallbackSerializer& operator=(const Euresys::Open_eVision_1_2::ECallbackSerializer& other);
    public:
      ECallbackSerializer(const Euresys::Open_eVision_1_2::ECallbackSerializer& other);
    public:
      virtual BOOL GetWriting() const;
    public:
      virtual void Close();
    public:
      virtual ~ECallbackSerializer() throw();
    public:
      ECallbackSerializer(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECannyEdgeDetector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECannyEdgeDetector_;
    public:
      Euresys::Open_eVision_1_2::ECannyEdgeDetector& operator=(const Euresys::Open_eVision_1_2::ECannyEdgeDetector& other);
    public:
      ECannyEdgeDetector(const Euresys::Open_eVision_1_2::ECannyEdgeDetector& other);
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
      void SetThresholdingMode(Euresys::Open_eVision_1_2::ECannyThresholdingMode mode);
    public:
      Euresys::Open_eVision_1_2::ECannyThresholdingMode GetThresholdingMode() const;
    public:
      void SetLowThreshold(float lowThreshold);
    public:
      float GetLowThreshold() const;
    public:
      void SetHighThreshold(float highThreshold);
    public:
      float GetHighThreshold() const;
    public:
      void Apply(const Euresys::Open_eVision_1_2::EROIBW8& source, Euresys::Open_eVision_1_2::EROIBW8& result);
    public:
      ECannyEdgeDetector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EChecker
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EChecker_;
    public:
      Euresys::Open_eVision_1_2::EChecker& operator=(const Euresys::Open_eVision_1_2::EChecker& other);
    public:
      EChecker(const Euresys::Open_eVision_1_2::EChecker& other);
    public:
      Euresys::Open_eVision_1_2::EImageBW8* GetLow();
    public:
      Euresys::Open_eVision_1_2::EImageBW8* GetHigh();
    public:
      Euresys::Open_eVision_1_2::EImageBW8* GetRegistered();
    public:
      EChecker();
    public:
      virtual ~EChecker() throw();
    public:
      void Attach(Euresys::Open_eVision_1_2::EROIBW8* source);
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
      Euresys::Open_eVision_1_2::ENormalizationMode GetNormalize();
    public:
      void SetNormalize(Euresys::Open_eVision_1_2::ENormalizationMode eNormalize);
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
      void Learn(Euresys::Open_eVision_1_2::ELearningMode mode);
    public:
      float GetRelativeTolerance();
    public:
      void SetRelativeTolerance(float f32RelativeTolerance);
    public:
      void EmptyPathNames();
    public:
      void AddPathName(const std::string& pathName);
    public:
      void BatchLearn(Euresys::Open_eVision_1_2::ELearningMode mode);
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
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX, float panY);
    public:
      BOOL HitTest(OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EDragHandle GetHitHandle();
    public:
      Euresys::Open_eVision_1_2::ERoiHit GetHitRoi();
    public:
      void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      EChecker(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL handles);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECircleShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircleShape_;
    public:
      ECircleShape(const Euresys::Open_eVision_1_2::ECircleShape& other);
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
      Euresys::Open_eVision_1_2::EPoint GetApex() const;
    public:
      float GetApexAngle() const;
    public:
      float GetArcLength() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
    public:
      void SetCenterXY(float centerX, float centerY);
    public:
      float GetDiameter() const;
    public:
      void SetDiameter(float f32Diameter);
    public:
      BOOL GetDirect() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetEnd() const;
    public:
      float GetEndAngle() const;
    public:
      BOOL GetFull() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOrg() const;
    public:
      float GetOrgAngle() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fraction) const;
    public:
      float GetRadius() const;
    public:
      void SetRadius(float f32Radius);
    public:
      Euresys::Open_eVision_1_2::ECircleShape& operator=(const Euresys::Open_eVision_1_2::ECircleShape& other);
    public:
      Euresys::Open_eVision_1_2::ECircleShape* CopyTo(Euresys::Open_eVision_1_2::ECircleShape* dest, BOOL bRecursive) const;
    public:
      virtual ~ECircleShape() throw();
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, BOOL direct);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, BOOL fullCircle);
    public:
      virtual void SetCircle(const Euresys::Open_eVision_1_2::ECircle& circle);
    public:
      virtual Euresys::Open_eVision_1_2::ECircle GetCircle() const;
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL bDaughters);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      ECircleShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECircleGauge : public Euresys::Open_eVision_1_2::ECircleShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECircleGauge_;
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
      void SetTransitionType(Euresys::Open_eVision_1_2::ETransitionType eTransitionType);
    public:
      Euresys::Open_eVision_1_2::ETransitionType GetTransitionType();
    public:
      void SetTransitionChoice(Euresys::Open_eVision_1_2::ETransitionChoice eTransitionChoice);
    public:
      Euresys::Open_eVision_1_2::ETransitionChoice GetTransitionChoice();
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
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak(OEV_UINT32 index);
    public:
      BOOL GetValid();
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
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
      ECircleGauge(const Euresys::Open_eVision_1_2::ECircleGauge& other);
    public:
      virtual ~ECircleGauge() throw();
    public:
      Euresys::Open_eVision_1_2::ECircleGauge* CopyTo(Euresys::Open_eVision_1_2::ECircleGauge* other, BOOL recursive) const;
    public:
      Euresys::Open_eVision_1_2::ECircleGauge& operator=(const Euresys::Open_eVision_1_2::ECircleGauge& other);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      Euresys::Open_eVision_1_2::ECircle GetShape();
    public:
      virtual void SetCircle(const Euresys::Open_eVision_1_2::ECircle& circle);
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
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL daughters);
    public:
      void Measure(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureWithoutFitting(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureSample(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 pathIndex);
    public:
      Euresys::Open_eVision_1_2::ECircle GetMeasuredCircle();
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint(OEV_UINT32 index);
    public:
      BOOL GetSample(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      ECircleGauge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak();
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQuadrangle
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQuadrangle_;
    public:
      Euresys::Open_eVision_1_2::EQuadrangle& operator=(const Euresys::Open_eVision_1_2::EQuadrangle& other);
    public:
      EQuadrangle(const Euresys::Open_eVision_1_2::EQuadrangle& other);
    public:
      EQuadrangle();
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(OEV_UINT32 index) const;
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals) const;
    public:
      virtual ~EQuadrangle() throw();
    public:
      EQuadrangle(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
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
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext) const;
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ERotatedBoundingBox
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ERotatedBoundingBox_;
    public:
      ERotatedBoundingBox(float centerX, float centerY, float width, float height, float angle);
    public:
      ERotatedBoundingBox();
    public:
      ERotatedBoundingBox(const Euresys::Open_eVision_1_2::ERotatedBoundingBox& other);
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox& operator=(const Euresys::Open_eVision_1_2::ERotatedBoundingBox& other);
    public:
      virtual ~ERotatedBoundingBox() throw();
    public:
      float GetCenterX() const;
    public:
      float GetCenterY() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      float GetWidth() const;
    public:
      float GetHeight() const;
    public:
      float GetAngle() const;
    public:
      Euresys::Open_eVision_1_2::EQuadrangle GetQuadrangle();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox LocalToGlobalBox(const Euresys::Open_eVision_1_2::ERotatedBoundingBox& localBox) const;
    public:
      Euresys::Open_eVision_1_2::EPoint LocalToGlobalPoint(const Euresys::Open_eVision_1_2::EPoint& localPoint) const;
    public:
      void Translate(float offsetX, float offsetY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY, bool drawDiagonals);
    public:
      ERotatedBoundingBox(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
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
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPathVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPathVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EPath element);
    public:
      Euresys::Open_eVision_1_2::EPath& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EPath GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EPath value);
    public:
      EPathVector();
    public:
      EPathVector(OEV_UINT32 maxNumberOfElements);
    public:
      EPathVector(const Euresys::Open_eVision_1_2::EPathVector& other);
    public:
      Euresys::Open_eVision_1_2::EPathVector& operator=(const Euresys::Open_eVision_1_2::EPathVector& other);
    public:
      virtual ~EPathVector() throw();
    public:
      BOOL GetClosed();
    public:
      void SetClosed(BOOL bClosed);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX, float originY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY);
    public:
      EPathVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECodedElement
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedElement_;
    public:
      ECodedElement(const Euresys::Open_eVision_1_2::ECodedElement& other);
    public:
      Euresys::Open_eVision_1_2::ECodedElement& operator=(const Euresys::Open_eVision_1_2::ECodedElement& other);
    public:
      ECodedElement();
    public:
      const Euresys::Open_eVision_1_2::EObjectRunsIterator& GetRunsIterator() const;
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
      Euresys::Open_eVision_1_2::EPoint GetGravityCenter();
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
      Euresys::Open_eVision_1_2::EPoint GetBoundingBoxCenter();
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
      Euresys::Open_eVision_1_2::EPoint GetFeretBox22Center();
    public:
      float GetFeretBox22Width();
    public:
      float GetFeretBox22Height();
    public:
      float GetFeretBox45CenterX();
    public:
      float GetFeretBox45CenterY();
    public:
      Euresys::Open_eVision_1_2::EPoint GetFeretBox45Center();
    public:
      float GetFeretBox45Width();
    public:
      float GetFeretBox45Height();
    public:
      float GetFeretBox68CenterX();
    public:
      float GetFeretBox68CenterY();
    public:
      Euresys::Open_eVision_1_2::EPoint GetFeretBox68Center();
    public:
      float GetFeretBox68Width();
    public:
      float GetFeretBox68Height();
    public:
      float GetMinimumEnclosingRectangleCenterX();
    public:
      float GetMinimumEnclosingRectangleCenterY();
    public:
      Euresys::Open_eVision_1_2::EPoint GetMinimumEnclosingRectangleCenter();
    public:
      float GetMinimumEnclosingRectangleWidth();
    public:
      float GetMinimumEnclosingRectangleHeight();
    public:
      float GetMinimumEnclosingRectangleAngle();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox GetMinimumEnclosingRectangle();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox GetBoundingBox();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox GetFeretBox22Box();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox GetFeretBox45Box();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox GetFeretBox68Box();
    public:
      Euresys::Open_eVision_1_2::ERotatedBoundingBox ComputeFeretBox(float angle) const;
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
      Euresys::Open_eVision_1_2::EPoint GetContour();
    public:
      void ComputeConvexHull(Euresys::Open_eVision_1_2::EPathVector& result);
    public:
      Euresys::Open_eVision_1_2::EBW8 ComputePixelMin(const Euresys::Open_eVision_1_2::EROIBW8& image) const;
    public:
      Euresys::Open_eVision_1_2::EBW8 ComputePixelMax(const Euresys::Open_eVision_1_2::EROIBW8& image) const;
    public:
      float ComputePixelGrayAverage(const Euresys::Open_eVision_1_2::EROIBW8& image);
    public:
      float ComputePixelGrayDeviation(const Euresys::Open_eVision_1_2::EROIBW8& image);
    public:
      double ComputePixelGrayVariance(const Euresys::Open_eVision_1_2::EROIBW8& image);
    public:
      Euresys::Open_eVision_1_2::EPoint ComputeWeightedGravityCenter(const Euresys::Open_eVision_1_2::EROIBW8& image) const;
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& destination, int offsetX, int offsetY) const;
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& destination) const;
    public:
      Euresys::Open_eVision_1_2::EHole& AsHole();
    public:
      Euresys::Open_eVision_1_2::EObject& AsObject();
    public:
      virtual ~ECodedElement() throw();
    public:
      ECodedElement(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EObject : public Euresys::Open_eVision_1_2::ECodedElement
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EObject_;
    public:
      EObject(const Euresys::Open_eVision_1_2::EObject& other);
    public:
      Euresys::Open_eVision_1_2::EObject& operator=(const Euresys::Open_eVision_1_2::EObject& other);
    public:
      EObject();
    public:
      virtual ~EObject() throw();
    public:
      OEV_UINT32 GetHoleCount();
    public:
      Euresys::Open_eVision_1_2::EHole& GetHole(OEV_UINT32 index);
    public:
      EObject(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EHole : public Euresys::Open_eVision_1_2::ECodedElement
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EHole_;
    public:
      EHole(const Euresys::Open_eVision_1_2::EHole& other);
    public:
      Euresys::Open_eVision_1_2::EHole& operator=(const Euresys::Open_eVision_1_2::EHole& other);
    public:
      EHole();
    public:
      OEV_UINT32 GetParentObjectIndex() const;
    public:
      virtual ~EHole() throw();
    public:
      EHole(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EObjectRunsIterator
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EObjectRunsIterator_;
    public:
      EObjectRunsIterator();
    public:
      EObjectRunsIterator(const Euresys::Open_eVision_1_2::ECodedElement& codedElement);
    public:
      EObjectRunsIterator(const Euresys::Open_eVision_1_2::EObjectRunsIterator& other);
    public:
      Euresys::Open_eVision_1_2::EObjectRunsIterator& operator=(const Euresys::Open_eVision_1_2::EObjectRunsIterator& other);
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
      EObjectRunsIterator(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECodedImage
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedImage_;
    public:
      Euresys::Open_eVision_1_2::ECodedImage& operator=(const Euresys::Open_eVision_1_2::ECodedImage& other);
    public:
      ECodedImage(const Euresys::Open_eVision_1_2::ECodedImage& other);
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
      void SetThresholdImage(Euresys::Open_eVision_1_2::EROIBW8* pImage);
    public:
      void SetLowThreshold(OEV_UINT32 un32LowThreshold);
    public:
      OEV_UINT32 GetLowThreshold();
    public:
      void SetLowImage(Euresys::Open_eVision_1_2::EROIBW8* pImage);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetLowImage();
    public:
      void SetHighThreshold(OEV_UINT32 un32HighThreshold);
    public:
      OEV_UINT32 GetHighThreshold();
    public:
      void SetHighImage(Euresys::Open_eVision_1_2::EROIBW8* pImage);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetHighImage();
    public:
      void SetLowColorThreshold(Euresys::Open_eVision_1_2::EC24 c24LowThreshold);
    public:
      Euresys::Open_eVision_1_2::EC24 GetLowColorThreshold();
    public:
      void SetHighColorThreshold(Euresys::Open_eVision_1_2::EC24 c24HighThreshold);
    public:
      Euresys::Open_eVision_1_2::EC24 GetHighColorThreshold();
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
      Euresys::Open_eVision_1_2::EConnexity GetConnexity();
    public:
      void SetConnexity(Euresys::Open_eVision_1_2::EConnexity eConnexity);
    public:
      OEV_UINT32 GetTrueThreshold();
    public:
      BOOL GetContinuous();
    public:
      void BuildRuns(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      void BuildRuns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void BuildRuns(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      void BuildLabeledRuns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void BuildLabeledRuns(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      void BuildObjects(Euresys::Open_eVision_1_2::EROIBW1* sourceImage);
    public:
      void BuildObjects(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void BuildObjects(Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      void BuildObjects();
    public:
      void BuildLabeledObjects(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void BuildLabeledObjects(Euresys::Open_eVision_1_2::EROIBW16* sourceImage);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5, Euresys::Open_eVision_1_2::ELegacyFeature feature6, Euresys::Open_eVision_1_2::ELegacyFeature feature7, Euresys::Open_eVision_1_2::ELegacyFeature feature8, Euresys::Open_eVision_1_2::ELegacyFeature feature9, Euresys::Open_eVision_1_2::ELegacyFeature feature10);
    public:
      void FeatureMinimum(Euresys::Open_eVision_1_2::ELegacyFeature feature, float& minimum);
    public:
      void FeatureMaximum(Euresys::Open_eVision_1_2::ELegacyFeature feature, float& maximum);
    public:
      void FeatureAverage(Euresys::Open_eVision_1_2::ELegacyFeature feature, float& average);
    public:
      void FeatureVariance(Euresys::Open_eVision_1_2::ELegacyFeature feature, float& average, float& variance);
    public:
      void FeatureDeviation(Euresys::Open_eVision_1_2::ELegacyFeature feature, float& average, float& deviation);
    public:
      void ObjectConvexHull(Euresys::Open_eVision_1_2::EListItem* object_, Euresys::Open_eVision_1_2::EPathVector* destinationVector);
    public:
      void SetLimitAngle(float f32Angle);
    public:
      float GetLimitAngle();
    public:
      void SelectObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT8 minimum, OEV_INT8 maximum, Euresys::Open_eVision_1_2::ESelectOption operation);
    public:
      void SelectObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT16 minimum, OEV_INT16 maximum, Euresys::Open_eVision_1_2::ESelectOption operation);
    public:
      void SelectObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 minimum, OEV_INT32 maximum, Euresys::Open_eVision_1_2::ESelectOption operation);
    public:
      void SelectObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, float minimum, float maximum, Euresys::Open_eVision_1_2::ESelectOption operation);
    public:
      void SelectObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, double minimum, double maximum, Euresys::Open_eVision_1_2::ESelectOption operation);
    public:
      void SelectObjectsUsingPosition(Euresys::Open_eVision_1_2::EBaseROI* roi, Euresys::Open_eVision_1_2::ESelectByPosition operation);
    public:
      void SelectObjectsUsingPosition(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectByPosition operation);
    public:
      void SortObjectsUsingFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESortOption Operation);
    public:
      void RemoveRun(OEV_INT32 position);
    public:
      void RemoveRun(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void RemoveAllRuns();
    public:
      void GetFirstRunData(Euresys::Open_eVision_1_2::ERunData* run);
    public:
      void GetLastRunData(Euresys::Open_eVision_1_2::ERunData* run);
    public:
      void GetCurrentRunData(Euresys::Open_eVision_1_2::ERunData* run);
    public:
      void GetRunData(Euresys::Open_eVision_1_2::ERunData* run, OEV_INT32 position);
    public:
      void GetRunData(Euresys::Open_eVision_1_2::ERunData* run, Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetPreviousRunPtr(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetNextRunPtr(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetFirstRunPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetLastRunPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetCurrentRunPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetRunPtr(OEV_INT32 position);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetRunPtrByCoordinates(OEV_INT32 x, OEV_INT32 y);
    public:
      BOOL GetRunDataPtr(Euresys::Open_eVision_1_2::EListItem* currentFeature, Euresys::Open_eVision_1_2::ERunData* runData);
    public:
      void GetPreviousRunData(Euresys::Open_eVision_1_2::ERunData* run, Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void GetPreviousRunData(Euresys::Open_eVision_1_2::ERunData* run);
    public:
      void GetNextRunData(Euresys::Open_eVision_1_2::ERunData* run);
    public:
      void GetNextRunData(Euresys::Open_eVision_1_2::ERunData* run, Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      OEV_INT32 GetNumRuns();
    public:
      OEV_UINT32 GetMaxObjects();
    public:
      void SetMaxObjects(OEV_UINT32 un32MaxObjects);
    public:
      void RemoveObject(OEV_INT32 objectNumber);
    public:
      void RemoveObject(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void RemoveAllObjects();
    public:
      void GetPreviousObjData(Euresys::Open_eVision_1_2::EObjectData* object_);
    public:
      void GetNextObjData(Euresys::Open_eVision_1_2::EObjectData* object_);
    public:
      void GetFirstObjData(Euresys::Open_eVision_1_2::EObjectData* object_);
    public:
      void GetLastObjData(Euresys::Open_eVision_1_2::EObjectData* object_);
    public:
      void GetCurrentObjData(Euresys::Open_eVision_1_2::EObjectData* objectData);
    public:
      void GetObjectData(Euresys::Open_eVision_1_2::EObjectData* object_, OEV_INT32 objectNumber);
    public:
      void GetObjectData(Euresys::Open_eVision_1_2::EObjectData* object_, Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      OEV_INT32 GetNumObjects();
    public:
      void AddRunToObj(Euresys::Open_eVision_1_2::EListItem* pObjectToAddTo);
    public:
      OEV_INT32 GetNumObjectRuns(OEV_INT32 objectNumber);
    public:
      OEV_INT32 GetNumObjectRuns(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void SetFirstRunPtr(Euresys::Open_eVision_1_2::EListItem* firstRun, OEV_INT32 objectNumber);
    public:
      void SetFirstRunPtr(Euresys::Open_eVision_1_2::EListItem* firstRun, Euresys::Open_eVision_1_2::EListItem* currentObject);
    public:
      void SetLastRunPtr(Euresys::Open_eVision_1_2::EListItem* lastRun, OEV_INT32 objectNumber);
    public:
      void SetLastRunPtr(Euresys::Open_eVision_1_2::EListItem* lastRun, Euresys::Open_eVision_1_2::EListItem* currentObject);
    public:
      void DetachRunsFromObj(Euresys::Open_eVision_1_2::EListItem* pCurrentObject);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjPtrByNum(OEV_INT32 n32ObjNum);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetPreviousObjPtr(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetNextObjPtr(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetFirstObjPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetLastObjPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetCurrentObjPtr();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjPtr(OEV_INT32 objectNumber);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjPtrByCoordinates(OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjFirstRunPtr(OEV_INT32 objectNumber);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjFirstRunPtr(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjLastRunPtr(OEV_INT32 objectNumber);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjLastRunPtr(Euresys::Open_eVision_1_2::EListItem* objectNumber);
    public:
      BOOL GetObjDataPtr(Euresys::Open_eVision_1_2::EListItem* currentFeature, Euresys::Open_eVision_1_2::EObjectData* objectData);
    public:
      OEV_INT32 GetNumSelectedObjects();
    public:
      void SetNumSelectedObjects(OEV_INT32 n32Nb_Selected_Objects);
    public:
      void SelectObject(OEV_INT32 objectNumber);
    public:
      void SelectObject(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void UnselectObject(OEV_INT32 objectNumber);
    public:
      void UnselectObject(Euresys::Open_eVision_1_2::EListItem* listItem);
    public:
      void IsObjectSelected(OEV_INT32 objectNumber, BOOL& selected);
    public:
      void IsObjectSelected(Euresys::Open_eVision_1_2::EListItem* listItem, BOOL& selected);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetObjPtrByPos(OEV_INT32 position);
    public:
      void SelectAllObjects();
    public:
      void UnselectAllObjects();
    public:
      void DrawObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX, float panY);
    public:
      BOOL GetDrawDiagonals();
    public:
      void SetDrawDiagonals(BOOL bDrawDiagonals);
    public:
      void AddFeat(Euresys::Open_eVision_1_2::EFeatureData* feature, OEV_INT32 numberOfObjects);
    public:
      void SetFeatInfo(Euresys::Open_eVision_1_2::EFeatureData* feature, Euresys::Open_eVision_1_2::ELegacyFeature featureCode);
    public:
      void BlankFeatures();
    public:
      void RemoveAllFeats();
    public:
      OEV_INT32 GetNumFeatures();
    public:
      Euresys::Open_eVision_1_2::EListItem* GetFeatPtrByNum(OEV_INT32 numFeat);
    public:
      BOOL GetFeatData(Euresys::Open_eVision_1_2::EListItem* currentFeature, Euresys::Open_eVision_1_2::EFeatureData* featureData);
    public:
      OEV_INT32 GetFeatSize(OEV_INT32 position);
    public:
      OEV_INT32 GetFeatSize(Euresys::Open_eVision_1_2::EListItem* currentFeature);
    public:
      OEV_INT32 GetFeatNum(OEV_INT32 position);
    public:
      OEV_INT32 GetFeatNum(Euresys::Open_eVision_1_2::EListItem* currentFeature);
    public:
      Euresys::Open_eVision_1_2::EDataSize GetFeatDataSize(OEV_INT32 position);
    public:
      Euresys::Open_eVision_1_2::EDataSize GetFeatDataSize(Euresys::Open_eVision_1_2::EListItem* currentFeature);
    public:
      Euresys::Open_eVision_1_2::EDataType GetFeatDataType(OEV_INT32 position);
    public:
      Euresys::Open_eVision_1_2::EDataType GetFeatDataType(Euresys::Open_eVision_1_2::EListItem* currentFeature);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber, OEV_INT8& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, OEV_INT16& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, OEV_INT32& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, double& result);
    public:
      void GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT8& result);
    public:
      void GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT16& result);
    public:
      void GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, OEV_INT32& result);
    public:
      void GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, float& result);
    public:
      void GetObjectFeature(OEV_INT32 feature, OEV_INT32 objectNumber, double& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::EListItem* feature, OEV_INT32 objectNumber, OEV_INT8& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::EListItem* feature, OEV_INT32 objectNumber, OEV_INT16& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::EListItem* feature, OEV_INT32 objectNumber, OEV_INT32& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::EListItem* feature, OEV_INT32 objectNumber, float& result);
    public:
      void GetObjectFeature(Euresys::Open_eVision_1_2::EListItem* feature, OEV_INT32 objectNumber, double& result);
    public:
      void BuildHoles();
    public:
      void BuildHoles(Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void RemoveHoles(Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void SelectHoles(Euresys::Open_eVision_1_2::EListItem* parentObject);
    public:
      void UnselectHoles(Euresys::Open_eVision_1_2::EListItem* parentObject);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetFirstHole(Euresys::Open_eVision_1_2::EListItem* parentObject);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetNextHole(Euresys::Open_eVision_1_2::EListItem* hole);
    public:
      Euresys::Open_eVision_1_2::EListItem* GetHoleParentObject(Euresys::Open_eVision_1_2::EListItem* hole);
    public:
      BOOL IsHole(Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      OEV_INT32 GetNumHoles(Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      OEV_INT32 GetNumHoleRuns();
    public:
      ECodedImage(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetThreshold();
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5, Euresys::Open_eVision_1_2::ELegacyFeature feature6, Euresys::Open_eVision_1_2::ELegacyFeature feature7, Euresys::Open_eVision_1_2::ELegacyFeature feature8, Euresys::Open_eVision_1_2::ELegacyFeature feature9);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5, Euresys::Open_eVision_1_2::ELegacyFeature feature6, Euresys::Open_eVision_1_2::ELegacyFeature feature7, Euresys::Open_eVision_1_2::ELegacyFeature feature8);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5, Euresys::Open_eVision_1_2::ELegacyFeature feature6, Euresys::Open_eVision_1_2::ELegacyFeature feature7);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5, Euresys::Open_eVision_1_2::ELegacyFeature feature6);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4, Euresys::Open_eVision_1_2::ELegacyFeature feature5);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3, Euresys::Open_eVision_1_2::ELegacyFeature feature4);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2, Euresys::Open_eVision_1_2::ELegacyFeature feature3);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1, Euresys::Open_eVision_1_2::ELegacyFeature feature2);
    public:
      void AnalyseObjects(Euresys::Open_eVision_1_2::ELegacyFeature feature1);
    public:
      void AnalyseObjects();
    public:
      void DrawObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjects(HDC graphicContext);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjectsWithCurrentPen(HDC graphicContext);
    public:
      void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObject(HDC graphicContext, OEV_INT32 objectNumber);
    public:
      void DrawObject(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObject(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_INT32 objectNumber);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_INT32 objectNumber);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_INT32 objectNumber);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjectsFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjectsFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjectsFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX, float zoomY);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag, float zoomX);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::ESelectionFlag selectionFlag);
    public:
      void DrawObjectsFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_, float zoomX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* object_);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber, float zoomX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, Euresys::Open_eVision_1_2::EListItem* objectNumber);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX, float zoomY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber, float zoomX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ELegacyFeature feature, OEV_INT32 objectNumber);
    public:
      void RemoveHoles();
    public:
      void SelectHoles();
    public:
      void UnselectHoles();
    public:
      OEV_INT32 GetNumHoles();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ECodedImage2
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ECodedImage2_;
    public:
      ECodedImage2(const Euresys::Open_eVision_1_2::ECodedImage2& other);
    public:
      Euresys::Open_eVision_1_2::ECodedImage2& operator=(const Euresys::Open_eVision_1_2::ECodedImage2& other);
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
      Euresys::Open_eVision_1_2::EObject& GetObj(OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      const Euresys::Open_eVision_1_2::EObject& GetObj(OEV_UINT32 layerIndex, OEV_UINT32 objectIndex) const;
    public:
      Euresys::Open_eVision_1_2::EObject& GetObj(OEV_UINT32 objectIndex);
    public:
      const Euresys::Open_eVision_1_2::EObject& GetObj(OEV_UINT32 objectIndex) const;
    public:
      int GetStartY() const;
    public:
      OEV_UINT32 GetWidth() const;
    public:
      OEV_UINT32 GetHeight() const;
    public:
      void ClearFeatureCache();
    public:
      Euresys::Open_eVision_1_2::EObject& GetParentObject(Euresys::Open_eVision_1_2::EHole& hole);
    public:
      Euresys::Open_eVision_1_2::EObject* FindObject(int x, int y);
    public:
      Euresys::Open_eVision_1_2::EObject* FindObject(OEV_UINT32 layerIndex, int x, int y);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result, OEV_UINT32 layerIndex, int offsetX, int offsetY);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result, OEV_UINT32 layerIndex);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result, int offsetX, int offsetY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleWithCurrentPen(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY, BOOL drawDiagonals);
    public:
      ECodedImage2(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, OEV_UINT32 layerIndex, float zoomX);
    public:
      void Draw(HDC graphicContext, OEV_UINT32 layerIndex);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ECodedElement& element);
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
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void DrawFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void DrawFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX, float zoomY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, float zoomX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY, float panX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX, float zoomY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element, float zoomX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY, float panX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX, float zoomY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, float zoomX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX, float zoomY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex, float zoomX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, Euresys::Open_eVision_1_2::EObjectSelection& selection, OEV_UINT32 elementIndex);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY, float panX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX, float zoomY);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, float zoomX);
    public:
      void DrawFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 objectIndex);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObject(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
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
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(HDC graphicContext, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHole(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
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
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX, float zoomY);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, float zoomX);
    public:
      void DrawObjectFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeature(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX, float zoomY);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex, float zoomX);
    public:
      void DrawHoleFeatureWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawableFeature feature, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EObjectSelection
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EObjectSelection_;
    public:
      Euresys::Open_eVision_1_2::EObjectSelection& operator=(const Euresys::Open_eVision_1_2::EObjectSelection& other);
    public:
      EObjectSelection(const Euresys::Open_eVision_1_2::EObjectSelection& other);
    public:
      EObjectSelection();
    public:
      void Clear();
    public:
      void Add(Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void Remove(Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      OEV_UINT32 GetElementCount();
    public:
      Euresys::Open_eVision_1_2::ECodedElement& GetElement(OEV_UINT32 index);
    public:
      OEV_UINT32 GetIndexOfElement(const Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      void AddObjects(Euresys::Open_eVision_1_2::ECodedImage2& image);
    public:
      void ClearFeatureCache();
    public:
      void SetAttachedImage(const Euresys::Open_eVision_1_2::EROIBW8* image);
    public:
      const Euresys::Open_eVision_1_2::EROIBW8* GetAttachedImage() const;
    public:
      void SetFeretAngle(float angle);
    public:
      float GetFeretAngle();
    public:
      bool IsSelected(Euresys::Open_eVision_1_2::ECodedElement& element);
    public:
      bool IsSelected(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 objectIndex);
    public:
      bool IsSelected(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      bool IsSelected(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void AddLayer(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex);
    public:
      void AddLayer(Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void RemoveLayer(Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void RemoveLayer(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex);
    public:
      void AddObject(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 objectIndex);
    public:
      void AddObject(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void RemoveObject(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 objectIndex);
    public:
      void RemoveObject(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void AddHole(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void AddHole(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void RemoveHole(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void RemoveHole(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex, OEV_UINT32 holeIndex);
    public:
      void AddHolesOfSelectedObjects();
    public:
      void AddHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void AddHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex);
    public:
      void AddHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void RemoveSelectedHoles();
    public:
      void RemoveHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void RemoveHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex);
    public:
      void RemoveHoles(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, OEV_UINT32 objectIndex);
    public:
      void AddObjectUsingPosition(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, int x, int y);
    public:
      void RemoveObjectUsingPosition(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, int x, int y);
    public:
      void AddObjectsUsingRectangle(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, int x, int y, OEV_UINT32 width, OEV_UINT32 height, Euresys::Open_eVision_1_2::ERectangleMode mode);
    public:
      void AddObjectsUsingRectangle(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, int x, int y, OEV_UINT32 width, OEV_UINT32 height, Euresys::Open_eVision_1_2::ERectangleMode mode);
    public:
      void RemoveObjectsUsingRectangle(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, int x, int y, OEV_UINT32 width, OEV_UINT32 height, Euresys::Open_eVision_1_2::ERectangleMode mode);
    public:
      void RemoveObjectsUsingRectangle(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, int x, int y, OEV_UINT32 width, OEV_UINT32 height, Euresys::Open_eVision_1_2::ERectangleMode mode);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result, int offsetX, int offsetY);
    public:
      void RenderMask(Euresys::Open_eVision_1_2::EROIBW8& result);
    public:
      void AddObjectsUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 lowBound, OEV_UINT32 highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void AddObjectsUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 lowBound, OEV_UINT32 highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void AddObjectsUsingIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, int threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, int lowBound, int highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void AddObjectsUsingIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, int threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingIntegerFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, int lowBound, int highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void AddObjectsUsingFloatFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, float threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingFloatFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, OEV_UINT32 layerIndex, Euresys::Open_eVision_1_2::EFeature feature, float lowBound, float highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void AddObjectsUsingFloatFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, float threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void AddObjectsUsingFloatFeature(Euresys::Open_eVision_1_2::ECodedImage2& codedImage, Euresys::Open_eVision_1_2::EFeature feature, float lowBound, float highBound, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void RemoveUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void RemoveUsingUnsignedIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature, OEV_UINT32 low, OEV_UINT32 high, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void RemoveUsingIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature, int threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void RemoveUsingIntegerFeature(Euresys::Open_eVision_1_2::EFeature feature, int low, int high, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      void RemoveUsingFloatFeature(Euresys::Open_eVision_1_2::EFeature feature, float threshold, Euresys::Open_eVision_1_2::ESingleThresholdMode mode);
    public:
      void RemoveUsingFloatFeature(Euresys::Open_eVision_1_2::EFeature feature, float low, float high, Euresys::Open_eVision_1_2::EDoubleThresholdMode mode);
    public:
      OEV_UINT32 GetUnsignedIntegerFeature(OEV_UINT32 index, Euresys::Open_eVision_1_2::EFeature feature);
    public:
      int GetIntegerFeature(OEV_UINT32 index, Euresys::Open_eVision_1_2::EFeature feature);
    public:
      float GetFloatFeature(OEV_UINT32 index, Euresys::Open_eVision_1_2::EFeature feature);
    public:
      void Sort(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      void Sort(Euresys::Open_eVision_1_2::EFeature feature, Euresys::Open_eVision_1_2::ESortDirection direction);
    public:
      float FeatureAverage(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      float FeatureDeviation(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      float FeatureVariance(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      OEV_UINT32 UnsignedIntegerFeatureMinimum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      int IntegerFeatureMinimum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      float FloatFeatureMinimum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      OEV_UINT32 UnsignedIntegerFeatureMaximum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      int IntegerFeatureMaximum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      float FloatFeatureMaximum(Euresys::Open_eVision_1_2::EFeature feature);
    public:
      virtual ~EObjectSelection() throw();
    public:
      EObjectSelection(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EColorLookup
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorLookup_;
    public:
      Euresys::Open_eVision_1_2::EColorLookup& operator=(const Euresys::Open_eVision_1_2::EColorLookup& other);
    public:
      EColorLookup(const Euresys::Open_eVision_1_2::EColorLookup& other);
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
      Euresys::Open_eVision_1_2::EColorSystem GetColorSystemIn();
    public:
      Euresys::Open_eVision_1_2::EColorSystem GetColorSystemOut();
    public:
      void WhiteBalance(float gain, float gamma, float balanceRed, float balanceGreen, float balanceBlue);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0, float offset0, float gain1, float offset1, float gain2, float offset2);
    public:
      void ConvertToRgb(Euresys::Open_eVision_1_2::EColorSystem colorSystem);
    public:
      void ConvertFromRgb(Euresys::Open_eVision_1_2::EColorSystem colorSystem);
    public:
      void Calibrate(Euresys::Open_eVision_1_2::EC24 Color0, float x0, float y0, float z0, Euresys::Open_eVision_1_2::EC24 Color1, float x1, float y1, float z1, Euresys::Open_eVision_1_2::EC24 Color2, float x2, float y2, float z2);
    public:
      void Calibrate(Euresys::Open_eVision_1_2::EC24 Color0, float x0, float y0, float z0, Euresys::Open_eVision_1_2::EC24 Color1, float x1, float y1, float z1, Euresys::Open_eVision_1_2::EC24 Color2, float x2, float y2, float z2, Euresys::Open_eVision_1_2::EC24 Color3, float x3, float y3, float z3);
    public:
      void Calibrate(Euresys::Open_eVision_1_2::EC24 color, float x, float y, float z);
    public:
      void Transform(Euresys::Open_eVision_1_2::EC24 sourceImageColor, Euresys::Open_eVision_1_2::EC24& destinationImageColor);
    public:
      void Transform(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      EColorLookup(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
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
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0, float offset0, float gain1, float offset1, float gain2);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0, float offset0, float gain1, float offset1);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0, float offset0, float gain1);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0, float offset0);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem, float gain0);
    public:
      void AdjustGainOffset(Euresys::Open_eVision_1_2::EColorSystem colorSystem);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EColorVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EColor element);
    public:
      Euresys::Open_eVision_1_2::EColor& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EColor GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EColor value);
    public:
      EColorVector();
    public:
      EColorVector(OEV_UINT32 un32MaxElements);
    public:
      virtual ~EColorVector() throw();
    public:
      EColorVector(const Euresys::Open_eVision_1_2::EColorVector& other);
    public:
      Euresys::Open_eVision_1_2::EColorVector& operator=(const Euresys::Open_eVision_1_2::EColorVector& other);
    public:
      EColorVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EDrawAdapter
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EDrawAdapter_;
    public:
      EDrawAdapter(const Euresys::Open_eVision_1_2::EDrawAdapter& other);
    public:
      Euresys::Open_eVision_1_2::EDrawAdapter& operator=(const Euresys::Open_eVision_1_2::EDrawAdapter& other);
    public:
      EDrawAdapter();
    public:
      virtual ~EDrawAdapter() throw();
    public:
      void FilledRectangle(const int orgX, const int orgY, const int width, const int height);
    public:
      virtual void FilledRectangle(const int orgX, const int orgY, const int width, const int height, const Euresys::Open_eVision_1_2::ERGBColor& traceColor, const Euresys::Open_eVision_1_2::ERGBColor& fillColor) = 0;
    public:
      EDrawAdapter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EException :  public std::runtime_error
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EException_;
    public:
      EException();
    public:
      EException(Euresys::Open_eVision_1_2::EError error);
    public:
      Euresys::Open_eVision_1_2::EException& operator=(const Euresys::Open_eVision_1_2::EException& other);
    public:
      EException(const Euresys::Open_eVision_1_2::EException& other);
    public:
      EException(const std::string& message);
    public:
      virtual ~EException() throw();
    public:
      std::string What() const;
    public:
      Euresys::Open_eVision_1_2::EError GetError() const;
    public:
      EException(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EFilePointerSerializer : public Euresys::Open_eVision_1_2::ESerializer
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EFilePointerSerializer_;
    public:
      Euresys::Open_eVision_1_2::EFilePointerSerializer& operator=(const Euresys::Open_eVision_1_2::EFilePointerSerializer& other);
    public:
      EFilePointerSerializer(const Euresys::Open_eVision_1_2::EFilePointerSerializer& other);
    public:
      virtual void Close();
    public:
      virtual BOOL GetWriting() const;
    public:
      virtual ~EFilePointerSerializer() throw();
    public:
      EFilePointerSerializer(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EFileSerializer : public Euresys::Open_eVision_1_2::ESerializer
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EFileSerializer_;
    public:
      EFileSerializer(const Euresys::Open_eVision_1_2::EFileSerializer& other);
    public:
      Euresys::Open_eVision_1_2::EFileSerializer& operator=(const Euresys::Open_eVision_1_2::EFileSerializer& other);
    public:
      EFileSerializer();
    public:
      virtual BOOL GetWriting() const;
    public:
      virtual void Close();
    public:
      virtual ~EFileSerializer() throw();
    public:
      EFileSerializer(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EFoundPattern
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EFoundPattern_;
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter();
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
      EFoundPattern();
    public:
      EFoundPattern(const Euresys::Open_eVision_1_2::EFoundPattern& other);
    public:
      Euresys::Open_eVision_1_2::EFoundPattern& operator=(const Euresys::Open_eVision_1_2::EFoundPattern& other);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      bool operator==(const Euresys::Open_eVision_1_2::EFoundPattern& fndPat) const;
    public:
      bool operator!=(const Euresys::Open_eVision_1_2::EFoundPattern& fndPat) const;
    public:
      Euresys::Open_eVision_1_2::EQuadrangle GetQuadrangle() const;
    public:
      virtual ~EFoundPattern() throw();
    public:
      EFoundPattern(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EFrameShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EFrameShape_;
    public:
      EFrameShape();
    public:
      virtual ~EFrameShape() throw();
    public:
      EFrameShape(const Euresys::Open_eVision_1_2::EFrameShape& frameShape);
    public:
      Euresys::Open_eVision_1_2::EFrameShape& operator=(const Euresys::Open_eVision_1_2::EFrameShape& other);
    public:
      Euresys::Open_eVision_1_2::EFrameShape* CopyTo(Euresys::Open_eVision_1_2::EFrameShape* other, BOOL recursive) const;
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& point);
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
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
      void Set(const Euresys::Open_eVision_1_2::EPoint& center, float angle, float scale);
    public:
      void SetSize(float sizeX, float sizeY);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL daughter);
    public:
      virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      void DrawCrossGrid(HDC dc, float f32XMin, float f32XMax, float f32YMin, float f32YMax, OEV_UINT32 un32NumXIntervals, OEV_UINT32 un32NumYIntervals);
    public:
      EFrameShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Set(const Euresys::Open_eVision_1_2::EPoint& center, float angle);
    public:
      void Set(const Euresys::Open_eVision_1_2::EPoint& center);
    public:
      void SetSize(float sizeX);
    public:
      virtual BOOL HitTest();
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
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
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIC24 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC24_;
    public:
      EROIC24();
    public:
      virtual ~EROIC24() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EC24 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EC24 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIC24* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIC24* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIC24* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIC24* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIC24* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EC24 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EC24 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageC24* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageC24* GetTopParent() const;
    public:
      EROIC24(const Euresys::Open_eVision_1_2::EROIC24& other);
    public:
      Euresys::Open_eVision_1_2::EROIC24& operator=(const Euresys::Open_eVision_1_2::EROIC24& other);
    public:
      EROIC24(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EGDIDrawAdapter : public Euresys::Open_eVision_1_2::EDrawAdapter
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EGDIDrawAdapter_;
    public:
      EGDIDrawAdapter(const Euresys::Open_eVision_1_2::EGDIDrawAdapter& other);
    public:
      Euresys::Open_eVision_1_2::EGDIDrawAdapter& operator=(const Euresys::Open_eVision_1_2::EGDIDrawAdapter& other);
    public:
      EGDIDrawAdapter();
    public:
      EGDIDrawAdapter(HDC hDC);
    public:
      virtual ~EGDIDrawAdapter() throw();
    public:
      virtual void FilledRectangle(const int orgX, const int orgY, const int width, const int height, const Euresys::Open_eVision_1_2::ERGBColor& traceColor, const Euresys::Open_eVision_1_2::ERGBColor& fillColor);
    public:
      EGDIDrawAdapter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EHarrisInterestPoints
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EHarrisInterestPoints_;
    public:
      Euresys::Open_eVision_1_2::EHarrisInterestPoints& operator=(const Euresys::Open_eVision_1_2::EHarrisInterestPoints& other);
    public:
      EHarrisInterestPoints(const Euresys::Open_eVision_1_2::EHarrisInterestPoints& other);
    public:
      EHarrisInterestPoints();
    public:
      OEV_UINT32 GetPointCount() const;
    public:
      float GetX(OEV_UINT32 index) const;
    public:
      float GetY(OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(OEV_UINT32 index) const;
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
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void DrawCorner(HDC graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void DrawCorner(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, int index, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void DrawCorner(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
    public:
      void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY, float originX, float originY) const;
    public:
      virtual ~EHarrisInterestPoints() throw();
    public:
      EHarrisInterestPoints(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float originX) const;
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, float zoomX) const;
    public:
      void Draw(HDC graphicContext) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float originX) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX) const;
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float originX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX) const;
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext) const;
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
      void DrawCorner(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, int index, float zoomX, float zoomY, float originX) const;
    public:
      void DrawCorner(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, int index, float zoomX, float zoomY) const;
    public:
      void DrawCorner(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, int index, float zoomX) const;
    public:
      void DrawCorner(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, int index) const;
    public:
      void DrawCorner(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, int index, float zoomX, float zoomY, float originX) const;
    public:
      void DrawCorner(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, int index, float zoomX, float zoomY) const;
    public:
      void DrawCorner(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, int index, float zoomX) const;
    public:
      void DrawCorner(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, int index) const;
    public:
      void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY, float originX) const;
    public:
      void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX, float zoomY) const;
    public:
      void DrawCornerWithCurrentPen(HDC graphicContext, int index, float zoomX) const;
    public:
      void DrawCornerWithCurrentPen(HDC graphicContext, int index) const;
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EHarrisCornerDetector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EHarrisCornerDetector_;
    public:
      Euresys::Open_eVision_1_2::EHarrisCornerDetector& operator=(const Euresys::Open_eVision_1_2::EHarrisCornerDetector& other);
    public:
      EHarrisCornerDetector(const Euresys::Open_eVision_1_2::EHarrisCornerDetector& other);
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
      void SetThresholdingMode(Euresys::Open_eVision_1_2::EHarrisThresholdingMode mode);
    public:
      Euresys::Open_eVision_1_2::EHarrisThresholdingMode GetThresholdingMode() const;
    public:
      void SetGradientNormalizationEnabled(bool isEnabled);
    public:
      bool GetGradientNormalizationEnabled() const;
    public:
      void Apply(const Euresys::Open_eVision_1_2::EROIBW8& source, Euresys::Open_eVision_1_2::EHarrisInterestPoints& interestPoints);
    public:
      EHarrisCornerDetector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIBW1 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW1_;
    public:
      virtual OEV_UINT64 GetBitIndex(OEV_INT32 x, OEV_INT32 y) const;
    public:
      EROIBW1();
    public:
      virtual ~EROIBW1() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EBW1 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EBW1 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIBW1* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIBW1* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIBW1* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIBW1* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIBW1* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EBW1 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EBW1 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageBW1* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageBW1* GetTopParent() const;
    public:
      EROIBW1(const Euresys::Open_eVision_1_2::EROIBW1& other);
    public:
      Euresys::Open_eVision_1_2::EROIBW1& operator=(const Euresys::Open_eVision_1_2::EROIBW1& other);
    public:
      EROIBW1(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual OEV_UINT64 GetBitIndex(OEV_INT32 x) const;
    public:
      virtual OEV_UINT64 GetBitIndex() const;
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageBW1 : public Euresys::Open_eVision_1_2::EROIBW1
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW1_;
    public:
      EImageBW1();
    public:
      EImageBW1(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageBW1() throw();
    public:
      EImageBW1(const Euresys::Open_eVision_1_2::EImageBW1& other);
    public:
      Euresys::Open_eVision_1_2::EImageBW1& operator=(const Euresys::Open_eVision_1_2::EImageBW1& other);
    public:
      virtual OEV_UINT64 GetBitIndex(OEV_INT32 x, OEV_INT32 y) const;
    public:
      EImageBW1(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual OEV_UINT64 GetBitIndex(OEV_INT32 x) const;
    public:
      virtual OEV_UINT64 GetBitIndex() const;
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIBW16 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIBW16_;
    public:
      EROIBW16();
    public:
      virtual ~EROIBW16() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EBW16 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EBW16 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIBW16* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIBW16* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIBW16* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIBW16* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIBW16* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EBW16 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EBW16 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageBW16* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageBW16* GetTopParent() const;
    public:
      EROIBW16(const Euresys::Open_eVision_1_2::EROIBW16& other);
    public:
      Euresys::Open_eVision_1_2::EROIBW16& operator=(const Euresys::Open_eVision_1_2::EROIBW16& other);
    public:
      EROIBW16(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageBW16 : public Euresys::Open_eVision_1_2::EROIBW16
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageBW16_;
    public:
      EImageBW16();
    public:
      EImageBW16(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageBW16() throw();
    public:
      EImageBW16(const Euresys::Open_eVision_1_2::EImageBW16& other);
    public:
      Euresys::Open_eVision_1_2::EImageBW16& operator=(const Euresys::Open_eVision_1_2::EImageBW16& other);
    public:
      EImageBW16(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIC15 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC15_;
    public:
      EROIC15();
    public:
      virtual ~EROIC15() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EC15 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EC15 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIC15* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIC15* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIC15* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIC15* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIC15* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EC15 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EC15 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageC15* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageC15* GetTopParent() const;
    public:
      EROIC15(const Euresys::Open_eVision_1_2::EROIC15& other);
    public:
      Euresys::Open_eVision_1_2::EROIC15& operator=(const Euresys::Open_eVision_1_2::EROIC15& other);
    public:
      EROIC15(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageC15 : public Euresys::Open_eVision_1_2::EROIC15
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC15_;
    public:
      EImageC15();
    public:
      EImageC15(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageC15() throw();
    public:
      EImageC15(const Euresys::Open_eVision_1_2::EImageC15& other);
    public:
      Euresys::Open_eVision_1_2::EImageC15& operator=(const Euresys::Open_eVision_1_2::EImageC15& other);
    public:
      EImageC15(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIC16 : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC16_;
    public:
      EROIC16();
    public:
      virtual ~EROIC16() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EC16 value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EC16 value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIC16* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIC16* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIC16* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIC16* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIC16* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EC16 GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EC16 GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageC16* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageC16* GetTopParent() const;
    public:
      EROIC16(const Euresys::Open_eVision_1_2::EROIC16& other);
    public:
      Euresys::Open_eVision_1_2::EROIC16& operator=(const Euresys::Open_eVision_1_2::EROIC16& other);
    public:
      EROIC16(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageC16 : public Euresys::Open_eVision_1_2::EROIC16
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC16_;
    public:
      EImageC16();
    public:
      EImageC16(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageC16() throw();
    public:
      EImageC16(const Euresys::Open_eVision_1_2::EImageC16& other);
    public:
      Euresys::Open_eVision_1_2::EImageC16& operator=(const Euresys::Open_eVision_1_2::EImageC16& other);
    public:
      EImageC16(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageC24 : public Euresys::Open_eVision_1_2::EROIC24
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC24_;
    public:
      EImageC24();
    public:
      EImageC24(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageC24() throw();
    public:
      EImageC24(const Euresys::Open_eVision_1_2::EImageC24& other);
    public:
      Euresys::Open_eVision_1_2::EImageC24& operator=(const Euresys::Open_eVision_1_2::EImageC24& other);
    public:
      EImageC24(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EROIC24A : public Euresys::Open_eVision_1_2::EBaseROI
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EROIC24A_;
    public:
      EROIC24A();
    public:
      virtual ~EROIC24A() throw();
    public:
      void SetPixel(Euresys::Open_eVision_1_2::EC24A value, OEV_INT32 x, OEV_INT32 y);
    public:
      void SetUncheckedPixel(Euresys::Open_eVision_1_2::EC24A value, OEV_INT32 x, OEV_INT32 y);
    public:
      Euresys::Open_eVision_1_2::EROIC24A* GetFirstSubROI();
    public:
      virtual void Serialize(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      Euresys::Open_eVision_1_2::EROIC24A* GetNextROI(Euresys::Open_eVision_1_2::EBaseROI* startROI);
    public:
      Euresys::Open_eVision_1_2::EROIC24A* GetNextSiblingROI();
    public:
      Euresys::Open_eVision_1_2::EROIC24A* GetParent();
    public:
      const Euresys::Open_eVision_1_2::EROIC24A* GetParent() const;
    public:
      Euresys::Open_eVision_1_2::EC24A GetUncheckedPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EC24A GetPixel(OEV_INT32 x, OEV_INT32 y) const;
    public:
      Euresys::Open_eVision_1_2::EImageC24A* GetTopParent();
    public:
      const Euresys::Open_eVision_1_2::EImageC24A* GetTopParent() const;
    public:
      EROIC24A(const Euresys::Open_eVision_1_2::EROIC24A& other);
    public:
      Euresys::Open_eVision_1_2::EROIC24A& operator=(const Euresys::Open_eVision_1_2::EROIC24A& other);
    public:
      EROIC24A(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageC24A : public Euresys::Open_eVision_1_2::EROIC24A
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageC24A_;
    public:
      EImageC24A();
    public:
      EImageC24A(OEV_INT32 width, OEV_INT32 height);
    public:
      virtual ~EImageC24A() throw();
    public:
      EImageC24A(const Euresys::Open_eVision_1_2::EImageC24A& other);
    public:
      Euresys::Open_eVision_1_2::EImageC24A& operator=(const Euresys::Open_eVision_1_2::EImageC24A& other);
    public:
      EImageC24A(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter& other);
      public:
        EImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter& other);
      public:
        EImageSegmenter();
      public:
        virtual ~EImageSegmenter() throw();
      public:
        EImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class ETwoLayersImageSegmenter : public Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ETwoLayersImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter& other);
      public:
        ETwoLayersImageSegmenter();
      public:
        ETwoLayersImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter& other);
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
        ETwoLayersImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EBinaryImageSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EBinaryImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EBinaryImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EBinaryImageSegmenter& other);
      public:
        EBinaryImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EBinaryImageSegmenter& other);
      public:
        EBinaryImageSegmenter();
      public:
        virtual ~EBinaryImageSegmenter() throw();
      public:
        EBinaryImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EColorRangeThresholdSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorRangeThresholdSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EColorRangeThresholdSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EColorRangeThresholdSegmenter& other);
      public:
        EColorRangeThresholdSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EColorRangeThresholdSegmenter& other);
      public:
        EColorRangeThresholdSegmenter();
      public:
        void SetLowThreshold(Euresys::Open_eVision_1_2::EC24 threshold);
      public:
        Euresys::Open_eVision_1_2::EC24 GetLowThreshold() const;
      public:
        void SetHighThreshold(Euresys::Open_eVision_1_2::EC24 threshold);
      public:
        Euresys::Open_eVision_1_2::EC24 GetHighThreshold() const;
      public:
        virtual ~EColorRangeThresholdSegmenter() throw();
      public:
        EColorRangeThresholdSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EColorSingleThresholdSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EColorSingleThresholdSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EColorSingleThresholdSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EColorSingleThresholdSegmenter& other);
      public:
        EColorSingleThresholdSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EColorSingleThresholdSegmenter& other);
      public:
        EColorSingleThresholdSegmenter();
      public:
        void SetThreshold(Euresys::Open_eVision_1_2::EC24 threshold);
      public:
        Euresys::Open_eVision_1_2::EC24 GetThreshold() const;
      public:
        virtual ~EColorSingleThresholdSegmenter() throw();
      public:
        EColorSingleThresholdSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EThreeLayersImageSegmenter : public Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EThreeLayersImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EThreeLayersImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EThreeLayersImageSegmenter& other);
      public:
        EThreeLayersImageSegmenter();
      public:
        EThreeLayersImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EThreeLayersImageSegmenter& other);
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
        EThreeLayersImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EGrayscaleDoubleThresholdSegmenter : public Euresys::Open_eVision_1_2::Segmenters::EThreeLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EGrayscaleDoubleThresholdSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EGrayscaleDoubleThresholdSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EGrayscaleDoubleThresholdSegmenter& other);
      public:
        EGrayscaleDoubleThresholdSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EGrayscaleDoubleThresholdSegmenter& other);
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
        EGrayscaleDoubleThresholdSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EGrayscaleSingleThresholdSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EGrayscaleSingleThresholdSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EGrayscaleSingleThresholdSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EGrayscaleSingleThresholdSegmenter& other);
      public:
        EGrayscaleSingleThresholdSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EGrayscaleSingleThresholdSegmenter& other);
      public:
        EGrayscaleSingleThresholdSegmenter();
      public:
        void SetMode(Euresys::Open_eVision_1_2::EGrayscaleSingleThreshold mode);
      public:
        Euresys::Open_eVision_1_2::EGrayscaleSingleThreshold GetMode() const;
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
        EGrayscaleSingleThresholdSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EImageRangeSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageRangeSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EImageRangeSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EImageRangeSegmenter& other);
      public:
        EImageRangeSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EImageRangeSegmenter& other);
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
        void SetLowImageBW8(const Euresys::Open_eVision_1_2::EROIBW8* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW8* GetLowImageBW8() const;
      public:
        void SetHighImageBW8(const Euresys::Open_eVision_1_2::EROIBW8* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW8* GetHighImageBW8() const;
      public:
        void SetLowImageBW16(const Euresys::Open_eVision_1_2::EROIBW16* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW16* GetLowImageBW16() const;
      public:
        void SetHighImageBW16(const Euresys::Open_eVision_1_2::EROIBW16* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW16* GetHighImageBW16() const;
      public:
        void SetLowImageC24(const Euresys::Open_eVision_1_2::EROIC24* image);
      public:
        const Euresys::Open_eVision_1_2::EROIC24* GetLowImageC24() const;
      public:
        void SetHighImageC24(const Euresys::Open_eVision_1_2::EROIC24* image);
      public:
        const Euresys::Open_eVision_1_2::EROIC24* GetHighImageC24() const;
      public:
        EImageRangeSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class ELabeledImageSegmenter : public Euresys::Open_eVision_1_2::Segmenters::EImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ELabeledImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::ELabeledImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::ELabeledImageSegmenter& other);
      public:
        ELabeledImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::ELabeledImageSegmenter& other);
      public:
        ELabeledImageSegmenter();
      public:
        void SetMinLayer(Euresys::Open_eVision_1_2::EBW16 minLayer);
      public:
        Euresys::Open_eVision_1_2::EBW16 GetMinLayer() const;
      public:
        void SetMaxLayer(Euresys::Open_eVision_1_2::EBW16 maxLayer);
      public:
        Euresys::Open_eVision_1_2::EBW16 GetMaxLayer() const;
      public:
        virtual ~ELabeledImageSegmenter() throw();
      public:
        ELabeledImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Segmenters
    {
      class EReferenceImageSegmenter : public Euresys::Open_eVision_1_2::Segmenters::ETwoLayersImageSegmenter
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EReferenceImageSegmenter_;
      public:
        Euresys::Open_eVision_1_2::Segmenters::EReferenceImageSegmenter& operator=(const Euresys::Open_eVision_1_2::Segmenters::EReferenceImageSegmenter& other);
      public:
        EReferenceImageSegmenter(const Euresys::Open_eVision_1_2::Segmenters::EReferenceImageSegmenter& other);
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
        void SetReferenceImageBW8(const Euresys::Open_eVision_1_2::EROIBW8* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW8* GetReferenceImageBW8() const;
      public:
        void SetReferenceImageBW16(const Euresys::Open_eVision_1_2::EROIBW16* image);
      public:
        const Euresys::Open_eVision_1_2::EROIBW16* GetReferenceImageBW16() const;
      public:
        void SetReferenceImageC24(const Euresys::Open_eVision_1_2::EROIC24* image);
      public:
        const Euresys::Open_eVision_1_2::EROIC24* GetReferenceImageC24() const;
      public:
        EReferenceImageSegmenter(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EImageEncoder
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EImageEncoder_;
    public:
      EImageEncoder(const Euresys::Open_eVision_1_2::EImageEncoder& other);
    public:
      Euresys::Open_eVision_1_2::EImageEncoder& operator=(const Euresys::Open_eVision_1_2::EImageEncoder& other);
    public:
      EImageEncoder();
    public:
      virtual ~EImageEncoder() throw();
    public:
      void SetSegmentationMethod(Euresys::Open_eVision_1_2::ESegmentationMethod method);
    public:
      Euresys::Open_eVision_1_2::ESegmentationMethod GetSegmentationMethod() const;
    public:
      Euresys::Open_eVision_1_2::Segmenters::EBinaryImageSegmenter& GetBinaryImageSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EColorRangeThresholdSegmenter& GetColorRangeThresholdSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EColorSingleThresholdSegmenter& GetColorSingleThresholdSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EGrayscaleDoubleThresholdSegmenter& GetGrayscaleDoubleThresholdSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EGrayscaleSingleThresholdSegmenter& GetGrayscaleSingleThresholdSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EImageRangeSegmenter& GetImageRangeSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::ELabeledImageSegmenter& GetLabeledImageSegmenter();
    public:
      Euresys::Open_eVision_1_2::Segmenters::EReferenceImageSegmenter& GetReferenceImageSegmenter();
    public:
      void SetEncodingConnexity(Euresys::Open_eVision_1_2::EEncodingConnexity connexity);
    public:
      Euresys::Open_eVision_1_2::EEncodingConnexity GetEncodingConnexity() const;
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
      void FlushContinuousMode(Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW1& sourceImage, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW8& sourceImage, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW16& sourceImage, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIC24& sourceImage, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW1& sourceImage, const Euresys::Open_eVision_1_2::EROIBW8& inputMask, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW8& sourceImage, const Euresys::Open_eVision_1_2::EROIBW8& inputMask, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIBW16& sourceImage, const Euresys::Open_eVision_1_2::EROIBW8& inputMask, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      void Encode(const Euresys::Open_eVision_1_2::EROIC24& sourceImage, const Euresys::Open_eVision_1_2::EROIBW8& inputMask, Euresys::Open_eVision_1_2::ECodedImage2& codedImage);
    public:
      EImageEncoder(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EKernel
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EKernel_;
    public:
      Euresys::Open_eVision_1_2::EKernel& operator=(const Euresys::Open_eVision_1_2::EKernel& other);
    public:
      EKernel(const Euresys::Open_eVision_1_2::EKernel& other);
    public:
      EKernel();
    public:
      EKernel(OEV_INT16 sizeX, OEV_INT16 sizeY, float gain, OEV_UINT32 offset, Euresys::Open_eVision_1_2::EKernelRectifier rectifier, OEV_UINT32 outsideValue);
    public:
      EKernel(Euresys::Open_eVision_1_2::EKernelType KernelType);
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
      Euresys::Open_eVision_1_2::EKernelRectifier GetRectifier();
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
      void SetRectifier(Euresys::Open_eVision_1_2::EKernelRectifier rectifier);
    public:
      void SetOutsideValue(OEV_UINT32 un32OutsideValue);
    public:
      EKernel(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ELandmark
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ELandmark_;
    public:
      ELandmark(const Euresys::Open_eVision_1_2::ELandmark& other);
    public:
      Euresys::Open_eVision_1_2::ELandmark& operator=(const Euresys::Open_eVision_1_2::ELandmark& other);
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
      ELandmark(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ELineShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ELineShape_;
    public:
      ELineShape();
    public:
      ELineShape(const Euresys::Open_eVision_1_2::ELineShape& other);
    public:
      Euresys::Open_eVision_1_2::ELineShape& operator=(const Euresys::Open_eVision_1_2::ELineShape& other);
    public:
      virtual ~ELineShape() throw();
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
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
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromOriginAndEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      virtual void SetLine(const Euresys::Open_eVision_1_2::ELine& line);
    public:
      void SetLength(float length);
    public:
      float GetLength();
    public:
      float GetLength() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOrg();
    public:
      Euresys::Open_eVision_1_2::EPoint GetEnd();
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float fraction);
    public:
      Euresys::Open_eVision_1_2::ELineShape* CopyTo(Euresys::Open_eVision_1_2::ELineShape* dest, BOOL bRecursive) const;
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL bDaughters);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      ELineShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ELineGauge : public Euresys::Open_eVision_1_2::ELineShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ELineGauge_;
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
      void SetTransitionType(Euresys::Open_eVision_1_2::ETransitionType transitionType);
    public:
      Euresys::Open_eVision_1_2::ETransitionType GetTransitionType();
    public:
      void SetTransitionChoice(Euresys::Open_eVision_1_2::ETransitionChoice transitionChoice);
    public:
      Euresys::Open_eVision_1_2::ETransitionChoice GetTransitionChoice();
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
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak(OEV_UINT32 index);
    public:
      BOOL GetValid();
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
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
      ELineGauge(const Euresys::Open_eVision_1_2::ELineGauge& other);
    public:
      virtual ~ELineGauge() throw();
    public:
      Euresys::Open_eVision_1_2::ELineGauge* CopyTo(Euresys::Open_eVision_1_2::ELineGauge* other, BOOL recursive) const;
    public:
      Euresys::Open_eVision_1_2::ELineGauge& operator=(const Euresys::Open_eVision_1_2::ELineGauge& other);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      virtual void SetLine(const Euresys::Open_eVision_1_2::ELine& line);
    public:
      virtual void SetActive(BOOL active);
    public:
      Euresys::Open_eVision_1_2::ELine GetShape();
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
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL daughters);
    public:
      BOOL GetKnownAngle();
    public:
      void SetKnownAngle(BOOL bKnownAngle);
    public:
      void SetClippingMode(Euresys::Open_eVision_1_2::EClippingMode clippingMode);
    public:
      Euresys::Open_eVision_1_2::EClippingMode GetClippingMode() const;
    public:
      void Measure(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureWithoutFitting(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureSample(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 pathIndex);
    public:
      Euresys::Open_eVision_1_2::ELine GetMeasuredLine();
    public:
      BOOL GetSample(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint(OEV_UINT32 index);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      ELineGauge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak();
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EListItem
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EListItem_;
    public:
      Euresys::Open_eVision_1_2::EListItem& operator=(const Euresys::Open_eVision_1_2::EListItem& other);
    public:
      EListItem(const Euresys::Open_eVision_1_2::EListItem& other);
    public:
      EListItem();
    public:
      virtual ~EListItem() throw();
    public:
      EListItem(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EMatcher
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EMatcher_;
    public:
      EMatcher();
    public:
      EMatcher(OEV_UINT32 maximumNumberOfDegreesOfFreedom);
    public:
      EMatcher(const Euresys::Open_eVision_1_2::EMatcher& other);
    public:
      Euresys::Open_eVision_1_2::EMatcher& operator=(const Euresys::Open_eVision_1_2::EMatcher& other);
    public:
      Euresys::Open_eVision_1_2::EMatcher* CopyTo(Euresys::Open_eVision_1_2::EMatcher* other) const;
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void LearnPattern(Euresys::Open_eVision_1_2::EROIBW8* pattern);
    public:
      void LearnPattern(Euresys::Open_eVision_1_2::EROIC24* pattern);
    public:
      void ClearImage();
    public:
      BOOL GetPatternLearnt() const;
    public:
      void SetExtension(OEV_INT32 n32ExtensionX, OEV_INT32 n32ExtensionY);
    public:
      void CopyLearntPattern(Euresys::Open_eVision_1_2::EImageBW8& image) const;
    public:
      void CopyLearntPattern(Euresys::Open_eVision_1_2::EImageC24& image) const;
    public:
      void Match(Euresys::Open_eVision_1_2::EROIBW8* image);
    public:
      void Match(Euresys::Open_eVision_1_2::EROIC24* image);
    public:
      void SetMinReducedArea(OEV_UINT32 un32Area);
    public:
      OEV_UINT32 GetMinReducedArea();
    public:
      void SetDontCareThreshold(OEV_UINT32 un32Threshold);
    public:
      OEV_UINT32 GetDontCareThreshold();
    public:
      void SetCorrelationMode(Euresys::Open_eVision_1_2::ECorrelationMode eMode);
    public:
      Euresys::Open_eVision_1_2::ECorrelationMode GetCorrelationMode();
    public:
      void SetContrastMode(Euresys::Open_eVision_1_2::EMatchContrastMode eMode);
    public:
      Euresys::Open_eVision_1_2::EMatchContrastMode GetContrastMode();
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
      Euresys::Open_eVision_1_2::EFilteringMode GetFilteringMode();
    public:
      void SetFilteringMode(Euresys::Open_eVision_1_2::EFilteringMode eFilteringMode);
    public:
      OEV_UINT32 GetNumPositions();
    public:
      Euresys::Open_eVision_1_2::EMatchPosition GetPosition(OEV_UINT32 index);
    public:
      OEV_UINT32 GetNumReductions();
    public:
      Euresys::Open_eVision_1_2::EBaseROI* GetPattern(OEV_UINT32 un32Index) const;
    public:
      Euresys::Open_eVision_1_2::EImageType GetPatternType() const;
    public:
      void DrawPosition(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPositions(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX, float panY);
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
      virtual ~EMatcher() throw();
    public:
      EMatcher(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      Euresys::Open_eVision_1_2::EMatcher* CopyTo() const;
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
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index, BOOL bCorner, float zoomX);
    public:
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index, BOOL bCorner);
    public:
      void DrawPosition(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 index);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index, BOOL bCorner);
    public:
      void DrawPosition(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 index);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner, float zoomX);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index, BOOL bCorner);
    public:
      void DrawPositionWithCurrentPen(HDC graphicContext, OEV_UINT32 index);
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
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bCorner, float zoomX);
    public:
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, BOOL bCorner);
    public:
      void DrawPositions(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL bCorner, float zoomX);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, BOOL bCorner);
    public:
      void DrawPositions(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY, float panX);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext, BOOL bCorner, float zoomX, float zoomY);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext, BOOL bCorner, float zoomX);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext, BOOL bCorner);
    public:
      void DrawPositionsWithCurrentPen(HDC graphicContext);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EMatrixCode
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EMatrixCode_;
    public:
      EMatrixCode();
    public:
      EMatrixCode(const Euresys::Open_eVision_1_2::EMatrixCode& other);
    public:
      Euresys::Open_eVision_1_2::EMatrixCode& operator=(const Euresys::Open_eVision_1_2::EMatrixCode& other);
    public:
      virtual ~EMatrixCode() throw();
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrors(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrors(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawErrorsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      const Euresys::Open_eVision_1_2::EPoint& GetCorner(OEV_INT32 index);
    public:
      void SetCorner(OEV_INT32 index, const Euresys::Open_eVision_1_2::EPoint& corner);
    public:
      OEV_UINT8 GetDecodedDataElement(OEV_INT32 index);
    public:
      std::string GetDecodedString() const;
    public:
      OEV_INT32 GetNumErrors() const;
    public:
      Euresys::Open_eVision_1_2::ELogicalSize GetLogicalSize() const;
    public:
      Euresys::Open_eVision_1_2::EMatrixCodeContrastMode GetContrastType() const;
    public:
      Euresys::Open_eVision_1_2::EFlipping GetFlipping() const;
    public:
      Euresys::Open_eVision_1_2::EFamily GetFamily() const;
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
      const Euresys::Open_eVision_1_2::EPoint& GetCenter() const;
    public:
      float GetAngle() const;
    public:
      EMatrixCode(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, float zoomX);
    public:
      void Draw(HDC graphicContext);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawWithCurrentPen(HDC graphicContext);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrors(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrors(HDC graphicContext, float zoomX);
    public:
      void DrawErrors(HDC graphicContext);
    public:
      void DrawErrors(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawErrors(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void DrawErrors(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void DrawErrors(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawErrors(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrors(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrors(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawErrors(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawErrorsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawErrorsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawErrorsWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawErrorsWithCurrentPen(HDC graphicContext);
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ESearchParamsType
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ESearchParamsType_;
    public:
      ESearchParamsType();
    public:
      void AddLogicalSize(Euresys::Open_eVision_1_2::ELogicalSize searchLogicalSize);
    public:
      void ClearLogicalSize();
    public:
      void RemoveLogicalSize(Euresys::Open_eVision_1_2::ELogicalSize searchLogicalSize);
    public:
      OEV_INT32 GetLogicalSizeCount() const;
    public:
      Euresys::Open_eVision_1_2::ELogicalSize GetLogicalSize(OEV_INT32 index);
    public:
      void AddContrast(Euresys::Open_eVision_1_2::EMatrixCodeContrastMode searchContrast);
    public:
      void ClearContrast();
    public:
      void RemoveContrast(Euresys::Open_eVision_1_2::EMatrixCodeContrastMode searchContrast);
    public:
      OEV_INT32 GetContrastCount() const;
    public:
      Euresys::Open_eVision_1_2::EMatrixCodeContrastMode GetContrast(OEV_INT32 index);
    public:
      void AddFlipping(Euresys::Open_eVision_1_2::EFlipping searchFlipping);
    public:
      void ClearFlipping();
    public:
      void RemoveFlipping(Euresys::Open_eVision_1_2::EFlipping searchFlipping);
    public:
      OEV_INT32 GetFlippingCount() const;
    public:
      Euresys::Open_eVision_1_2::EFlipping GetFlipping(OEV_INT32 index);
    public:
      void AddFamily(Euresys::Open_eVision_1_2::EFamily searchFamily);
    public:
      void ClearFamily();
    public:
      void RemoveFamily(Euresys::Open_eVision_1_2::EFamily searchFamily);
    public:
      OEV_INT32 GetFamilyCount() const;
    public:
      Euresys::Open_eVision_1_2::EFamily GetFamily(OEV_INT32 index);
    public:
      ESearchParamsType(const Euresys::Open_eVision_1_2::ESearchParamsType& other);
    public:
      Euresys::Open_eVision_1_2::ESearchParamsType& operator=(const Euresys::Open_eVision_1_2::ESearchParamsType& other);
    public:
      virtual ~ESearchParamsType() throw();
    public:
      ESearchParamsType(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EMatrixCodeReader
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EMatrixCodeReader_;
    public:
      EMatrixCodeReader();
    public:
      Euresys::Open_eVision_1_2::EMatrixCode Read(const Euresys::Open_eVision_1_2::EROIBW8& roi);
    public:
      void Reset();
    public:
      Euresys::Open_eVision_1_2::EMatrixCode Learn(const Euresys::Open_eVision_1_2::EROIBW8& roi);
    public:
      Euresys::Open_eVision_1_2::EMatrixCode LearnMore(const Euresys::Open_eVision_1_2::EROIBW8& roi);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void SetLearnMaskElement(Euresys::Open_eVision_1_2::ELearnParam index, bool value);
    public:
      bool GetLearnMaskElement(Euresys::Open_eVision_1_2::ELearnParam index);
    public:
      Euresys::Open_eVision_1_2::ESearchParamsType& GetSearchParams();
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
      EMatrixCodeReader(const Euresys::Open_eVision_1_2::EMatrixCodeReader& other);
    public:
      Euresys::Open_eVision_1_2::EMatrixCodeReader& operator=(const Euresys::Open_eVision_1_2::EMatrixCodeReader& other);
    public:
      virtual ~EMatrixCodeReader() throw();
    public:
      EMatrixCodeReader(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EMeasurementUnit
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EMeasurementUnit_;
    public:
      EMeasurementUnit(float magnitude, const std::string& name);
    public:
      EMeasurementUnit(Euresys::Open_eVision_1_2::EMeasurementUnit* pUnit);
    public:
      EMeasurementUnit();
    public:
      Euresys::Open_eVision_1_2::EMeasurementUnit& operator=(const Euresys::Open_eVision_1_2::EMeasurementUnit& other);
    public:
      std::string GetName() const;
    public:
      void SetName(const std::string& name);
    public:
      float GetMagnitude() const;
    public:
      void SetMagnitude(float f32Magnitude);
    public:
      float ConversionFactorTo(const Euresys::Open_eVision_1_2::EMeasurementUnit& Unit) const;
    public:
      static Euresys::Open_eVision_1_2::EMeasurementUnit* GetStockMeasurementUnit(Euresys::Open_eVision_1_2::EStockMeasurementUnit unit);
    public:
      virtual ~EMeasurementUnit() throw();
    public:
      EMeasurementUnit(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EMovingAverage
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EMovingAverage_;
    public:
      Euresys::Open_eVision_1_2::EMovingAverage& operator=(const Euresys::Open_eVision_1_2::EMovingAverage& other);
    public:
      EMovingAverage(const Euresys::Open_eVision_1_2::EMovingAverage& other);
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
      Euresys::Open_eVision_1_2::EImageBW8* GetSrcImage();
    public:
      void Average(Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      void Average(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      EMovingAverage(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      EMovingAverage(OEV_UINT32 period, OEV_INT32 width, OEV_INT32 height);
    public:
      void SetSize(OEV_UINT32 numberOfImages, OEV_INT32 imageWidth, OEV_INT32 imageHeight);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EOCR
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCR_;
    public:
      EOCR();
    public:
      EOCR(const Euresys::Open_eVision_1_2::EOCR& other);
    public:
      virtual ~EOCR() throw();
    public:
      Euresys::Open_eVision_1_2::EOCR& operator=(const Euresys::Open_eVision_1_2::EOCR& other);
    public:
      OEV_UINT32 GetPatternWidth();
    public:
      OEV_UINT32 GetPatternHeight();
    public:
      Euresys::Open_eVision_1_2::EMatchingMode GetMatchingMode();
    public:
      void SetMatchingMode(Euresys::Open_eVision_1_2::EMatchingMode eMatchingMode);
    public:
      Euresys::Open_eVision_1_2::EShiftingMode GetShiftingMode();
    public:
      void SetShiftingMode(Euresys::Open_eVision_1_2::EShiftingMode eShiftingMode);
    public:
      OEV_UINT32 GetShiftXTolerance();
    public:
      void SetShiftXTolerance(OEV_UINT32 un32ShiftXTolerance);
    public:
      OEV_UINT32 GetShiftYTolerance();
    public:
      void SetShiftYTolerance(OEV_UINT32 un32ShiftYTolerance);
    public:
      Euresys::Open_eVision_1_2::EOCRColor GetTextColor();
    public:
      void SetTextColor(Euresys::Open_eVision_1_2::EOCRColor eTextColor);
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
      Euresys::Open_eVision_1_2::ESegmentationMode GetSegmentationMode();
    public:
      void SetSegmentationMode(Euresys::Open_eVision_1_2::ESegmentationMode eSegmentationMode);
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
      void BuildObjects(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void FindAllChars(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MatchChar(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 classes, OEV_INT32 index, OEV_INT32 shiftX, OEV_INT32 shiftY);
    public:
      std::string ReadText(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes, BOOL autoSegmentation);
    public:
      std::string ReadText(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
    public:
      std::wstring ReadTextWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes, BOOL autoSegmentation);
    public:
      std::wstring ReadTextWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
    public:
      std::string Recognize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
    public:
      std::string Recognize(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
    public:
      std::wstring RecognizeWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
    public:
      std::wstring RecognizeWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
    public:
      BOOL HitChars(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32& charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      BOOL HitChar(OEV_INT32 cursorX, OEV_INT32 cursorY, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void LearnPattern(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code, OEV_UINT32 classes, BOOL autoSegmentation);
    public:
      void LearnPatterns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const std::string& text, OEV_UINT32 singleClass, BOOL autoSegmentation);
    public:
      void LearnPatterns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const std::string& text, const std::vector<OEV_UINT32>& classes, BOOL autoSegmentation);
    public:
      void AddPatternFromImage(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, OEV_INT32 code, OEV_UINT32 classes);
    public:
      void NewFont(OEV_UINT32 patternWidth, OEV_UINT32 patternHeight);
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
      Euresys::Open_eVision_1_2::EImageBW8* GetPatternBitmap(OEV_INT32 index);
    public:
      void* GetPatternBitmapUnTyped(OEV_INT32 index);
    public:
      void EmptyChars();
    public:
      void AddChar(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 endX, OEV_INT32 endY);
    public:
      void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawChar(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawChar(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawCharWithCurrentPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawChars(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawCharsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      OEV_UINT32 GetTrueThreshold();
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Dump();
    public:
      EOCR(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      std::string ReadText(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
    public:
      std::string ReadText(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
    public:
      std::wstring ReadTextWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, OEV_UINT32 classes);
    public:
      std::wstring ReadTextWide(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 maximumNumberOfCharacters, const std::vector<OEV_UINT32>& classes);
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
      void LearnPattern(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code, OEV_UINT32 classes);
    public:
      void LearnPattern(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 charIndex, OEV_INT32 code);
    public:
      void LearnPatterns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const std::string& text, OEV_UINT32 singleClass);
    public:
      void LearnPatterns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const std::string& text);
    public:
      void LearnPatterns(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, const std::string& text, const std::vector<OEV_UINT32>& classes);
    public:
      void AddPatternFromImage(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, OEV_INT32 code);
    public:
      void NewFont(OEV_UINT32 patternWidth);
    public:
      void NewFont();
    public:
      void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
    public:
      void DrawChar(HDC graphicContext, OEV_UINT32 charIndex, float zoomX);
    public:
      void DrawChar(HDC graphicContext, OEV_UINT32 charIndex);
    public:
      void DrawChar(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawChar(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 charIndex, float zoomX, float zoomY);
    public:
      void DrawChar(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 charIndex, float zoomX);
    public:
      void DrawChar(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, OEV_UINT32 charIndex);
    public:
      void DrawChar(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawChar(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
    public:
      void DrawChar(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 charIndex, float zoomX);
    public:
      void DrawChar(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, OEV_UINT32 charIndex);
    public:
      void DrawCharWithCurrentPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY, float panX);
    public:
      void DrawCharWithCurrentPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX, float zoomY);
    public:
      void DrawCharWithCurrentPen(HDC graphicContext, OEV_UINT32 charIndex, float zoomX);
    public:
      void DrawCharWithCurrentPen(HDC graphicContext, OEV_UINT32 charIndex);
    public:
      void DrawChars(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawChars(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawChars(HDC graphicContext, float zoomX);
    public:
      void DrawChars(HDC graphicContext);
    public:
      void DrawChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void DrawChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void DrawChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawCharsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawCharsWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawCharsWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawCharsWithCurrentPen(HDC graphicContext);
    public:
      void Load(FILE* stream);
    public:
      void Load(std::string stream);
    public:
      void Save(FILE* stream);
    public:
      void Save(std::string stream);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EOCVText
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCVText_;
    public:
      void SetIsotropicScaling(BOOL isotropicScaling);
    public:
      BOOL GetIsotropicScaling();
    public:
      EOCVText();
    public:
      EOCVText(const Euresys::Open_eVision_1_2::EOCVText& ocvText);
    public:
      virtual ~EOCVText() throw();
    public:
      Euresys::Open_eVision_1_2::EOCVText& operator=(const Euresys::Open_eVision_1_2::EOCVText& other);
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
      EOCVText(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EOCVChar
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCVChar_;
    public:
      EOCVChar();
    public:
      EOCVChar(const Euresys::Open_eVision_1_2::EOCVChar& other);
    public:
      virtual ~EOCVChar() throw();
    public:
      Euresys::Open_eVision_1_2::EOCVChar& operator=(const Euresys::Open_eVision_1_2::EOCVChar& other);
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
      EOCVChar(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EOCV
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EOCV_;
    public:
      Euresys::Open_eVision_1_2::EOCV& operator=(const Euresys::Open_eVision_1_2::EOCV& other);
    public:
      EOCV(const Euresys::Open_eVision_1_2::EOCV& other);
    public:
      void Dump();
    public:
      EOCV();
    public:
      virtual ~EOCV() throw();
    public:
      void ComputeDefaultTolerances(Euresys::Open_eVision_1_2::EROIBW8* roi, OEV_UINT32 threshold);
    public:
      void Save(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      void Load(Euresys::Open_eVision_1_2::ESerializer* serializer);
    public:
      BOOL AreAllFreeObjectsSelected();
    public:
      void DrawTemplateObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      Euresys::Open_eVision_1_2::EOCVChar& GetFreeChar(OEV_INT32 index);
    public:
      void SetFreeChar(OEV_INT32 index, Euresys::Open_eVision_1_2::EOCVChar& freeChar);
    public:
      OEV_UINT32 GetFreeCharCount();
    public:
      void DrawTemplateChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      Euresys::Open_eVision_1_2::EOCVText& GetText(OEV_INT32 index);
    public:
      void SetText(OEV_INT32 index, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTemplateTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void SetTemplateImage2(Euresys::Open_eVision_1_2::EROIBW8* templateImage, Euresys::Open_eVision_1_2::EROIBW8* objectsImage);
    public:
      void SetTemplateImage(Euresys::Open_eVision_1_2::EROIBW8* templateImage);
    public:
      Euresys::Open_eVision_1_2::EROIBW8* GetTemplateImage();
    public:
      void CreateTemplateObjects(Euresys::Open_eVision_1_2::ECodedImage* codedImage, Euresys::Open_eVision_1_2::ESelectionFlag codedObjectsSelectionFlag);
    public:
      void SelectTemplateObjects(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void DeleteTemplateObjects(Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void CreateTemplateChars(Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, Euresys::Open_eVision_1_2::ECharCreationMode creationMode);
    public:
      void SelectTemplateChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DeleteTemplateChars(Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void CreateTemplateTexts(Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void SelectTemplateTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DeleteTemplateTexts(Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void SelectSampleTexts(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void Learn(Euresys::Open_eVision_1_2::EROIBW8* image, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      BOOL GetWhiteOnBlack();
    public:
      void SetWhiteOnBlack(BOOL bWhiteOnBlack);
    public:
      Euresys::Open_eVision_1_2::EBW8 GetTemplateThreshold();
    public:
      void SetTemplateThreshold(Euresys::Open_eVision_1_2::EBW8 value);
    public:
      float GetTemplateBackground();
    public:
      void SetTemplateBackground(float value);
    public:
      float GetTemplateForeground();
    public:
      void SetTemplateForeground(float value);
    public:
      Euresys::Open_eVision_1_2::EBW8 GetSampleThreshold();
    public:
      void SetSampleThreshold(Euresys::Open_eVision_1_2::EBW8 value);
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
      Euresys::Open_eVision_1_2::ELocationMode GetLocationMode();
    public:
      void SetLocationMode(Euresys::Open_eVision_1_2::ELocationMode locationMode);
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
      void GetTextParameters(Euresys::Open_eVision_1_2::EOCVText& Text, OEV_UINT32 textIndex);
    public:
      void SetTextParameters(Euresys::Open_eVision_1_2::EOCVText& Text, OEV_UINT32 textIndex);
    public:
      void GatherTextsParameters(Euresys::Open_eVision_1_2::EOCVText& Text, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void ScatterTextsParameters(Euresys::Open_eVision_1_2::EOCVText& Text, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      OEV_UINT32 GetNumTextChars(OEV_UINT32 index);
    public:
      void GetTextCharParameters(Euresys::Open_eVision_1_2::EOCVChar& ocvChar, OEV_UINT32 textIndex, OEV_UINT32 charIndex);
    public:
      void SetTextCharParameters(Euresys::Open_eVision_1_2::EOCVChar& ocvChar, OEV_UINT32 textIndex, OEV_UINT32 charIndex);
    public:
      void GatherTextsCharsParameters(Euresys::Open_eVision_1_2::EOCVChar& ocvChar, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void ScatterTextsCharsParameters(Euresys::Open_eVision_1_2::EOCVChar& ocvChar, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawText(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawText(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawText(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void GetTextPoint(OEV_UINT32 textIndex, OEV_INT32& x, OEV_INT32& y, float reducedX, float reducedY, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX, float originY);
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
      void Inspect(Euresys::Open_eVision_1_2::EROIBW8* sampleImage, OEV_UINT32 threshold);
    public:
      OEV_UINT32 GetStatisticsCount();
    public:
      void ClearStatistics();
    public:
      void UpdateStatistics();
    public:
      void AdjustShiftTolerances(Euresys::Open_eVision_1_2::EROIBW8* roi);
    public:
      void AdjustTextsLocationRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag selection);
    public:
      void AdjustTextsQualityRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag selection);
    public:
      void AdjustCharsLocationRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag textSelection, Euresys::Open_eVision_1_2::ESelectionFlag charSelection);
    public:
      void AdjustCharsQualityRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag textSelection, Euresys::Open_eVision_1_2::ESelectionFlag charSelection);
    public:
      EOCV(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void ComputeDefaultTolerances(Euresys::Open_eVision_1_2::EROIBW8* roi);
    public:
      void DrawTemplateObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX);
    public:
      void DrawTemplateObjects(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void DrawTemplateObjects(HDC graphicContext);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void DrawTemplateObjects(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void DrawTemplateObjects(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag, float zoomX);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
    public:
      void DrawTemplateObjectsWithCurrentPen(HDC graphicContext);
    public:
      void DrawTemplateChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateChars(HDC graphicContext);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateCharsWithCurrentPen(HDC graphicContext);
    public:
      void DrawTemplateTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTexts(HDC graphicContext);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTextsWithCurrentPen(HDC graphicContext);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTextsChars(HDC graphicContext);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTemplateTextsCharsWithCurrentPen(HDC graphicContext);
    public:
      void CreateTemplateObjects(Euresys::Open_eVision_1_2::ECodedImage* codedImage);
    public:
      void SelectTemplateObjects(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
    public:
      void DeleteTemplateObjects();
    public:
      void CreateTemplateChars(Euresys::Open_eVision_1_2::ESelectionFlag objectsSelectionFlag);
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
      void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void SelectSampleTextsChars(OEV_INT32 originX, OEV_INT32 originY, OEV_INT32 width, OEV_INT32 height);
    public:
      void Learn(Euresys::Open_eVision_1_2::EROIBW8* image, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void Learn(Euresys::Open_eVision_1_2::EROIBW8* image);
    public:
      void DrawText(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX);
    public:
      void DrawText(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY);
    public:
      void DrawText(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX);
    public:
      void DrawText(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawText(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX);
    public:
      void DrawText(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY);
    public:
      void DrawText(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX);
    public:
      void DrawText(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawText(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX);
    public:
      void DrawText(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY);
    public:
      void DrawText(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX);
    public:
      void DrawText(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTextWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY, float originX);
    public:
      void DrawTextWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX, float zoomY);
    public:
      void DrawTextWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, float zoomX);
    public:
      void DrawTextWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTexts(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTexts(HDC graphicContext);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTexts(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTexts(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, float zoomX);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTextsWithCurrentPen(HDC graphicContext);
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
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextChars(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EOCVText& text);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextsChars(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTextsChars(HDC graphicContext);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTextsChars(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTextsChars(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY, float originX);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX, float zoomY);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag, float zoomX);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag, Euresys::Open_eVision_1_2::ESelectionFlag charsSelectionFlag);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::ESelectionFlag textsSelectionFlag);
    public:
      void DrawTextsCharsWithCurrentPen(HDC graphicContext);
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
      void AdjustCharsLocationRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag textSelection);
    public:
      void AdjustCharsLocationRanges(float factor);
    public:
      void AdjustCharsLocationRanges();
    public:
      void AdjustCharsQualityRanges(float factor, Euresys::Open_eVision_1_2::ESelectionFlag textSelection);
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
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPointShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPointShape_;
    public:
      EPointShape();
    public:
      EPointShape(const Euresys::Open_eVision_1_2::EPointShape& other);
    public:
      virtual ~EPointShape() throw();
    public:
      virtual void SetCenterXY(float centerX, float centerY);
    public:
      virtual void SetCenter(const Euresys::Open_eVision_1_2::EPoint& point);
    public:
      virtual Euresys::Open_eVision_1_2::EPoint GetCenter() const;
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
      BOOL operator==(const Euresys::Open_eVision_1_2::EPointShape& other) const;
    public:
      BOOL operator!=(const Euresys::Open_eVision_1_2::EPointShape& other);
    public:
      Euresys::Open_eVision_1_2::EPointShape& operator=(const Euresys::Open_eVision_1_2::EPointShape& other);
    public:
      Euresys::Open_eVision_1_2::EPointShape* CopyTo(Euresys::Open_eVision_1_2::EPointShape* dest, BOOL bRecursive) const;
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL bDaughters);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      EPointShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPatternFinder : public Euresys::Open_eVision_1_2::EPointShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPatternFinder_;
    public:
      EPatternFinder();
    public:
      EPatternFinder(const Euresys::Open_eVision_1_2::EPatternFinder& other);
    public:
      Euresys::Open_eVision_1_2::EPatternFinder& operator=(const Euresys::Open_eVision_1_2::EPatternFinder& other);
    public:
      void Learn(const Euresys::Open_eVision_1_2::EROIBW8* pattern, Euresys::Open_eVision_1_2::EROIBW8* dontCare);
    public:
      bool GetLearningDone() const;
    public:
      void CopyLearntPattern(Euresys::Open_eVision_1_2::EImageBW8& image);
    public:
      std::vector<Euresys::Open_eVision_1_2::EFoundPattern> Find(Euresys::Open_eVision_1_2::EROIBW8* source);
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
      Euresys::Open_eVision_1_2::EFindContrastMode GetContrastMode() const;
    public:
      void SetContrastMode(Euresys::Open_eVision_1_2::EFindContrastMode eContrastMode);
    public:
      Euresys::Open_eVision_1_2::EReductionMode GetReductionMode() const;
    public:
      void SetReductionMode(Euresys::Open_eVision_1_2::EReductionMode eReductionMode);
    public:
      void SetLocalSearchMode(Euresys::Open_eVision_1_2::ELocalSearchMode eLocalSearchMode);
    public:
      Euresys::Open_eVision_1_2::ELocalSearchMode GetLocalSearchMode() const;
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
      Euresys::Open_eVision_1_2::EPatternType GetPatternType() const;
    public:
      void SetPatternType(Euresys::Open_eVision_1_2::EPatternType patternType);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
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
      void SetThinStructureMode(Euresys::Open_eVision_1_2::EThinStructureMode thinStructureMode);
    public:
      Euresys::Open_eVision_1_2::EThinStructureMode GetThinStructureMode() const;
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModel(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModel(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawModelWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX, float panY);
    public:
      Euresys::Open_eVision_1_2::EPoint GetPivot() const;
    public:
      void SetPivot(const Euresys::Open_eVision_1_2::EPoint& pivot);
    public:
      const Euresys::Open_eVision_1_2::EPoint* GetCachedPivot() const;
    public:
      virtual ~EPatternFinder() throw();
    public:
      EPatternFinder(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void Learn(const Euresys::Open_eVision_1_2::EROIBW8* pattern);
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModel(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawModel(HDC graphicContext, float zoomX);
    public:
      void DrawModel(HDC graphicContext);
    public:
      void DrawModel(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY, float panX);
    public:
      void DrawModel(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX, float zoomY);
    public:
      void DrawModel(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float zoomX);
    public:
      void DrawModel(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawModel(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModel(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX, float zoomY);
    public:
      void DrawModel(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float zoomX);
    public:
      void DrawModel(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawModelWithCurrentPen(HDC graphicContext, float zoomX, float zoomY, float panX);
    public:
      void DrawModelWithCurrentPen(HDC graphicContext, float zoomX, float zoomY);
    public:
      void DrawModelWithCurrentPen(HDC graphicContext, float zoomX);
    public:
      void DrawModelWithCurrentPen(HDC graphicContext);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPeakVector : public Euresys::Open_eVision_1_2::EVector
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPeakVector_;
    public:
      void* GetRawDataPtr() const;
    public:
      void AddElement(Euresys::Open_eVision_1_2::EPeak element);
    public:
      Euresys::Open_eVision_1_2::EPeak& operator[](OEV_UINT32 index) const;
    public:
      Euresys::Open_eVision_1_2::EPeak GetElement(OEV_INT32 index);
    public:
      void SetElement(OEV_INT32 index, Euresys::Open_eVision_1_2::EPeak value);
    public:
      EPeakVector();
    public:
      EPeakVector(const Euresys::Open_eVision_1_2::EPeakVector& other);
    public:
      EPeakVector(OEV_UINT32 maxNumberOfElements);
    public:
      virtual ~EPeakVector() throw();
    public:
      Euresys::Open_eVision_1_2::EPeakVector& operator=(const Euresys::Open_eVision_1_2::EPeakVector& other);
    public:
      EPeakVector(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPointGauge : public Euresys::Open_eVision_1_2::EPointShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPointGauge_;
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
      void SetTransitionType(Euresys::Open_eVision_1_2::ETransitionType eTransitionType);
    public:
      Euresys::Open_eVision_1_2::ETransitionType GetTransitionType();
    public:
      void SetTransitionChoice(Euresys::Open_eVision_1_2::ETransitionChoice eTransitionChoice);
    public:
      Euresys::Open_eVision_1_2::ETransitionChoice GetTransitionChoice();
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
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak(OEV_UINT32 index);
    public:
      BOOL GetValid();
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      EPointGauge();
    public:
      EPointGauge(float centerX, float centerY);
    public:
      EPointGauge(const Euresys::Open_eVision_1_2::EPointGauge& other);
    public:
      virtual ~EPointGauge() throw();
    public:
      Euresys::Open_eVision_1_2::EPointGauge& operator=(const Euresys::Open_eVision_1_2::EPointGauge& other);
    public:
      Euresys::Open_eVision_1_2::EPointGauge* CopyTo(Euresys::Open_eVision_1_2::EPointGauge* other, BOOL recursive) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetShape();
    public:
      virtual void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
    public:
      virtual void SetCenterXY(float centerX, float centerY);
    public:
      virtual void SetActive(BOOL active);
    public:
      void SetRectangularSamplingArea(BOOL bRectangularSamplingArea);
    public:
      BOOL GetRectangularSamplingArea();
    public:
      void Measure(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL daughters);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint(OEV_UINT32 index);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      EPointGauge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetTolerances(float tolerance);
    public:
      Euresys::Open_eVision_1_2::EPeak GetMeasuredPeak();
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint();
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EPseudoColorLookup
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EPseudoColorLookup_;
    public:
      Euresys::Open_eVision_1_2::EPseudoColorLookup& operator=(const Euresys::Open_eVision_1_2::EPseudoColorLookup& other);
    public:
      EPseudoColorLookup(const Euresys::Open_eVision_1_2::EPseudoColorLookup& other);
    public:
      EPseudoColorLookup();
    public:
      void SetShading(Euresys::Open_eVision_1_2::EC24 black, Euresys::Open_eVision_1_2::EC24 white, Euresys::Open_eVision_1_2::EColorSystem colorSystem, BOOL wrap);
    public:
      virtual ~EPseudoColorLookup() throw();
    public:
      EPseudoColorLookup(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetShading(Euresys::Open_eVision_1_2::EC24 black, Euresys::Open_eVision_1_2::EC24 white, Euresys::Open_eVision_1_2::EColorSystem colorSystem);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQuadrilateral
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQuadrilateral_;
    public:
      EQuadrilateral();
    public:
      EQuadrilateral(const std::vector<Euresys::Open_eVision_1_2::EPoint>& corners);
    public:
      EQuadrilateral(const Euresys::Open_eVision_1_2::EQuadrilateral& other);
    public:
      std::vector<Euresys::Open_eVision_1_2::EPoint> GetCorners();
    public:
      Euresys::Open_eVision_1_2::EQuadrilateral& operator=(const Euresys::Open_eVision_1_2::EQuadrilateral& other);
    public:
      virtual ~EQuadrilateral() throw();
    public:
      EQuadrilateral(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQRCodeGeometry
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeGeometry_;
    public:
      EQRCodeGeometry();
    public:
      EQRCodeGeometry(const Euresys::Open_eVision_1_2::EQRCodeGeometry& other);
    public:
      EQRCodeGeometry(const Euresys::Open_eVision_1_2::EQuadrilateral& position, const std::vector<Euresys::Open_eVision_1_2::EPoint>& finderPatternCenters);
    public:
      Euresys::Open_eVision_1_2::EQuadrilateral GetPosition();
    public:
      std::vector<Euresys::Open_eVision_1_2::EPoint> GetFinderPatternCenters();
    public:
      void Draw(HDC hDC, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC hDC, float zoomX, float zoomY, float panX, float panY);
    public:
      Euresys::Open_eVision_1_2::EQRCodeGeometry& operator=(const Euresys::Open_eVision_1_2::EQRCodeGeometry& other);
    public:
      virtual ~EQRCodeGeometry() throw();
    public:
      EQRCodeGeometry(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQRCodeDecodedStreamPart
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeDecodedStreamPart_;
    public:
      EQRCodeDecodedStreamPart();
    public:
      EQRCodeDecodedStreamPart(const Euresys::Open_eVision_1_2::EQRCodeDecodedStreamPart& other);
    public:
      Euresys::Open_eVision_1_2::EQRCodeEncoding GetEncoding();
    public:
      std::vector<OEV_UINT8> GetDecodedData();
    public:
      Euresys::Open_eVision_1_2::EQRCodeDecodedStreamPart& operator=(const Euresys::Open_eVision_1_2::EQRCodeDecodedStreamPart& other);
    public:
      virtual ~EQRCodeDecodedStreamPart() throw();
    public:
      EQRCodeDecodedStreamPart(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQRCodeDecodedStream
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeDecodedStream_;
    public:
      EQRCodeDecodedStream();
    public:
      EQRCodeDecodedStream(const Euresys::Open_eVision_1_2::EQRCodeDecodedStream& other);
    public:
      Euresys::Open_eVision_1_2::EQRCodeCodingMode GetCodingMode();
    public:
      OEV_UINT32 GetApplicationIndicator();
    public:
      std::vector<OEV_UINT8> GetRawBitstream();
    public:
      std::vector<Euresys::Open_eVision_1_2::EQRCodeDecodedStreamPart> GetDecodedStreamParts();
    public:
      Euresys::Open_eVision_1_2::EQRCodeDecodedStream& operator=(const Euresys::Open_eVision_1_2::EQRCodeDecodedStream& other);
    public:
      virtual ~EQRCodeDecodedStream() throw();
    public:
      EQRCodeDecodedStream(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQRCode
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCode_;
    public:
      EQRCode();
    public:
      EQRCode(const Euresys::Open_eVision_1_2::EQRCode& other);
    public:
      Euresys::Open_eVision_1_2::EQRCodeModel GetModel();
    public:
      OEV_UINT32 GetVersion();
    public:
      Euresys::Open_eVision_1_2::EQRCodeLevel GetLevel();
    public:
      Euresys::Open_eVision_1_2::EQRCodeGeometry& GetGeometry();
    public:
      Euresys::Open_eVision_1_2::EQRCodeDecodedStream& GetDecodedStream();
    public:
      float GetUnusedErrorCorrection();
    public:
      bool GetIsDecodingReliable();
    public:
      void Draw(HDC hDC, float zoomX, float zoomY, float panX, float panY);
    public:
      void DrawWithCurrentPen(HDC hDC, float zoomX, float zoomY, float panX, float panY);
    public:
      Euresys::Open_eVision_1_2::EQRCode& operator=(const Euresys::Open_eVision_1_2::EQRCode& other);
    public:
      virtual ~EQRCode() throw();
    public:
      EQRCode(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EQRCodeReader
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EQRCodeReader_;
    public:
      EQRCodeReader();
    public:
      virtual ~EQRCodeReader() throw();
    public:
      void SetSearchField(Euresys::Open_eVision_1_2::EROIBW8& field);
    public:
      void SetScanPrecision(Euresys::Open_eVision_1_2::EQRCodeScanPrecision precision);
    public:
      Euresys::Open_eVision_1_2::EQRCodeScanPrecision GetScanPrecision();
    public:
      void SetMinimumScore(float minScore);
    public:
      float GetMinimumScore();
    public:
      void SetMinimumIsotropy(float isotropy);
    public:
      float GetMinimumIsotropy();
    public:
      void SetPerspectiveMode(Euresys::Open_eVision_1_2::EQRCodePerspectiveMode mode);
    public:
      Euresys::Open_eVision_1_2::EQRCodePerspectiveMode GetPerspectiveMode();
    public:
      void SetFilterOutUnreliablyDecodedQRCodes(bool filter);
    public:
      bool GetFilterOutUnreliablyDecodedQRCodes();
    public:
      void SetCellPolarityConfidenceThreshold(float threshold);
    public:
      float GetCellPolarityConfidenceThreshold();
    public:
      void SetSearchedModels(const std::vector<Euresys::Open_eVision_1_2::EQRCodeModel>& models);
    public:
      std::vector<Euresys::Open_eVision_1_2::EQRCodeModel> GetSearchedModels();
    public:
      void SetMinimumVersion(OEV_UINT32 version);
    public:
      OEV_UINT32 GetMinimumVersion();
    public:
      void SetMaximumVersion(OEV_UINT32 version);
    public:
      OEV_UINT32 GetMaximumVersion();
    public:
      std::vector<Euresys::Open_eVision_1_2::EQRCodeGeometry> Detect();
    public:
      Euresys::Open_eVision_1_2::EQRCode Decode(const Euresys::Open_eVision_1_2::EQRCodeGeometry& geometry);
    public:
      std::vector<Euresys::Open_eVision_1_2::EQRCode> Read();
    public:
      EQRCodeReader(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class ERectangleGauge : public Euresys::Open_eVision_1_2::ERectangleShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_ERectangleGauge_;
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
      Euresys::Open_eVision_1_2::ERectangleGauge* CopyTo(Euresys::Open_eVision_1_2::ERectangleGauge* other, BOOL recursive) const;
    public:
      ERectangleGauge(const Euresys::Open_eVision_1_2::ERectangleGauge& other);
    public:
      Euresys::Open_eVision_1_2::ERectangleGauge& operator=(const Euresys::Open_eVision_1_2::ERectangleGauge& other);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      Euresys::Open_eVision_1_2::ERectangle GetShape();
    public:
      virtual void SetActive(BOOL active);
    public:
      virtual void SetActiveRecursive(BOOL active, BOOL daughters);
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
      void SetTransitionType(Euresys::Open_eVision_1_2::ETransitionType eTransitionType);
    public:
      Euresys::Open_eVision_1_2::ETransitionType GetTransitionType();
    public:
      void SetTransitionChoice(Euresys::Open_eVision_1_2::ETransitionChoice eTransitionChoice);
    public:
      Euresys::Open_eVision_1_2::ETransitionChoice GetTransitionChoice();
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
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL daughters);
    public:
      BOOL GetKnownAngle();
    public:
      void SetKnownAngle(BOOL bKnownAngle);
    public:
      void Measure(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureWithoutFitting(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureSample(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 pathIndex);
    public:
      Euresys::Open_eVision_1_2::ERectangle GetMeasuredRectangle();
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint(OEV_UINT32 index);
    public:
      BOOL GetValid();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      BOOL GetSamplex(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSamplex(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSampley(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSampley(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSampleX(Euresys::Open_eVision_1_2::EPoint& point, OEV_UINT32 index);
    public:
      BOOL GetSampleX(Euresys::Open_eVision_1_2::EPeak& peak, OEV_UINT32 index);
    public:
      BOOL GetSampleY(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSampleY(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSample(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      ERectangleGauge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EUnwarpingLut
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EUnwarpingLut_;
    public:
      Euresys::Open_eVision_1_2::EUnwarpingLut& operator=(const Euresys::Open_eVision_1_2::EUnwarpingLut& other);
    public:
      EUnwarpingLut(const Euresys::Open_eVision_1_2::EUnwarpingLut& other);
    public:
      EUnwarpingLut();
    public:
      virtual ~EUnwarpingLut() throw();
    public:
      EUnwarpingLut(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EWedge : public Euresys::Open_eVision_1_2::EFrame
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedge_;
    public:
      EWedge();
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float breadth, float originAngle, BOOL direct);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float breadth, float originAngle, float amplitude);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth, BOOL fullCircle);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EWedge& other);
    public:
      Euresys::Open_eVision_1_2::EWedge& operator=(const Euresys::Open_eVision_1_2::EWedge& other);
    public:
      Euresys::Open_eVision_1_2::EWedge* CopyTo(Euresys::Open_eVision_1_2::EWedge* destinationImage) const;
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth, BOOL fullCircle);
    public:
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
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
      Euresys::Open_eVision_1_2::EPoint GetInnerOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerApex() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterApex() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerPoint(float fraction) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterPoint(float fraction) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float breadthFraction, float angleFraction) const;
    public:
      BOOL GetFullBreadth() const;
    public:
      BOOL GetFullCircle() const;
    public:
      BOOL GetDirect() const;
    public:
      void SetDirect(BOOL direct);
    public:
      void GetMidEdges(Euresys::Open_eVision_1_2::EPoint& a, Euresys::Open_eVision_1_2::EPoint& AA, Euresys::Open_eVision_1_2::EPoint& r, Euresys::Open_eVision_1_2::EPoint& RR);
    public:
      void GetCorners(Euresys::Open_eVision_1_2::EPoint& ar, Euresys::Open_eVision_1_2::EPoint& AAr, Euresys::Open_eVision_1_2::EPoint& aRR, Euresys::Open_eVision_1_2::EPoint& AARR);
    public:
      void GetEdges(Euresys::Open_eVision_1_2::ELine& a, Euresys::Open_eVision_1_2::ELine& AA, Euresys::Open_eVision_1_2::ECircle& r, Euresys::Open_eVision_1_2::ECircle& RR);
    public:
      virtual ~EWedge() throw();
    public:
      EWedge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float breadth, float originAngle);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, float diameter, float breadth);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, float diameter);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth);
    public:
      EWedge(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth);
    public:
      void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      void SetRadii(float radius);
    public:
      void SetDiameters(float diameter);
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EWedgeShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedgeShape_;
    public:
      EWedgeShape();
    public:
      EWedgeShape(const Euresys::Open_eVision_1_2::EWedgeShape& other);
    public:
      virtual ~EWedgeShape() throw();
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
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
      Euresys::Open_eVision_1_2::EWedgeShape& operator=(const Euresys::Open_eVision_1_2::EWedgeShape& other);
    public:
      Euresys::Open_eVision_1_2::EWedgeShape* CopyTo(Euresys::Open_eVision_1_2::EWedgeShape* dest, BOOL bRecursive) const;
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth, BOOL fullCircle);
    public:
      virtual void SetWedge(const Euresys::Open_eVision_1_2::EWedge& wedge);
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
      Euresys::Open_eVision_1_2::EPoint GetInnerOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerApex() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterOrg() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterApex() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterEnd() const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetInnerPoint(float fraction) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetOuterPoint(float fraction) const;
    public:
      Euresys::Open_eVision_1_2::EPoint GetPoint(float breadthFraction, float angleFraction) const;
    public:
      BOOL GetFullBreadth() const;
    public:
      BOOL GetFullCircle() const;
    public:
      BOOL GetDirect();
    public:
      void SetDirect(BOOL direct);
    public:
      void GetMidEdges(Euresys::Open_eVision_1_2::EPoint& a, Euresys::Open_eVision_1_2::EPoint& AA, Euresys::Open_eVision_1_2::EPoint& r, Euresys::Open_eVision_1_2::EPoint& RR);
    public:
      void GetCorners(Euresys::Open_eVision_1_2::EPoint& ar, Euresys::Open_eVision_1_2::EPoint& AAr, Euresys::Open_eVision_1_2::EPoint& aRR, Euresys::Open_eVision_1_2::EPoint& AARR);
    public:
      void GetEdges(Euresys::Open_eVision_1_2::ELine& a, Euresys::Open_eVision_1_2::ELine& AA, Euresys::Open_eVision_1_2::ECircle& r, Euresys::Open_eVision_1_2::ECircle& RR);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 cursorX, OEV_INT32 cursorY);
    public:
      EWedgeShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      void SetFromCenterAndOrigin(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      virtual void SetRadii(float outerRadius);
    public:
      virtual void SetDiameters(float diameter);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EWedgeGauge : public Euresys::Open_eVision_1_2::EWedgeShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EWedgeGauge_;
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
      Euresys::Open_eVision_1_2::EWedgeGauge* CopyTo(Euresys::Open_eVision_1_2::EWedgeGauge* other, BOOL recursive) const;
    public:
      EWedgeGauge(const Euresys::Open_eVision_1_2::EWedgeGauge& other);
    public:
      Euresys::Open_eVision_1_2::EWedgeGauge& operator=(const Euresys::Open_eVision_1_2::EWedgeGauge& other);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      Euresys::Open_eVision_1_2::EWedge GetShape();
    public:
      virtual void SetWedge(const Euresys::Open_eVision_1_2::EWedge& wedge);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth, BOOL direct);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth, BOOL full);
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
      void SetTransitionType(Euresys::Open_eVision_1_2::ETransitionType transitionType);
    public:
      Euresys::Open_eVision_1_2::ETransitionType GetTransitionType();
    public:
      void SetTransitionChoice(Euresys::Open_eVision_1_2::ETransitionChoice transitionChoice);
    public:
      Euresys::Open_eVision_1_2::ETransitionChoice GetTransitionChoice();
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
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL daughters);
    public:
      void Measure(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureWithoutFitting(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void MeasureSample(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, OEV_UINT32 pathIndex);
    public:
      Euresys::Open_eVision_1_2::EWedge GetMeasuredWedge();
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint(OEV_UINT32 index);
    public:
      BOOL GetValid();
    public:
      BOOL GetSamplea(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSamplea(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSampler(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSampler(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSampleA(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSampleA(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSampleR(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      BOOL GetSampleR(Euresys::Open_eVision_1_2::EPeak& pk, OEV_UINT32 index);
    public:
      BOOL GetSample(Euresys::Open_eVision_1_2::EPoint& pt, OEV_UINT32 index);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode, BOOL daughters);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX, float originY);
    public:
      virtual BOOL HitTest(BOOL daughters);
    public:
      virtual void Drag(OEV_INT32 x, OEV_INT32 y);
    public:
      EWedgeGauge(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1, OEV_INT32 side2);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0, OEV_INT32 side1);
    public:
      void SetMinNumFitSamples(OEV_INT32 side0);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin, float breadth);
    public:
      virtual void SetFromTwoPoints(const Euresys::Open_eVision_1_2::EPoint& center, const Euresys::Open_eVision_1_2::EPoint& origin);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end, float breadth);
    public:
      virtual void SetFromOriginMiddleEnd(const Euresys::Open_eVision_1_2::EPoint& origin, const Euresys::Open_eVision_1_2::EPoint& middle, const Euresys::Open_eVision_1_2::EPoint& end);
    public:
      virtual void Process(Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      Euresys::Open_eVision_1_2::EPoint GetMeasuredPoint();
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingMode);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void Plot(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height, float originX);
    public:
      void PlotWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EPlotItem drawItems, float width, float height);
    public:
      virtual BOOL HitTest();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class EWorldShape : public Euresys::Open_eVision_1_2::EShape
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_EWorldShape_;
    public:
      EWorldShape(const Euresys::Open_eVision_1_2::EWorldShape& other);
    public:
      EWorldShape();
    public:
      virtual ~EWorldShape() throw();
    public:
      Euresys::Open_eVision_1_2::EWorldShape& operator=(const Euresys::Open_eVision_1_2::EWorldShape& other);
    public:
      Euresys::Open_eVision_1_2::EPoint GetCenter() const;
    public:
      void SetCenter(const Euresys::Open_eVision_1_2::EPoint& center);
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
      void AddPoint(const Euresys::Open_eVision_1_2::EPoint& sensorPoint);
    public:
      void AddLandmark(const Euresys::Open_eVision_1_2::EPoint& sensorPoint, const Euresys::Open_eVision_1_2::EPoint& worldPoint);
    public:
      void RemoveLandmark(OEV_UINT32 index);
    public:
      void Calibrate(OEV_UINT32 calibrationModes);
    public:
      OEV_UINT32 AutoCalibrate(BOOL testEmpiricalModes);
    public:
      OEV_UINT32 AutoCalibrateLandmarks(BOOL testEmpiricalModes);
    public:
      OEV_UINT32 AutoCalibrateDotGrid(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float columnPitch, float rowPitch, BOOL testEmpiricalModes);
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
      OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const Euresys::Open_eVision_1_2::EPoint& worldCenter, OEV_UINT32 centerIndex, BOOL direct);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL interpolate);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL interpolate);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage, BOOL interpolate);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, BOOL interpolate);
    public:
      void SetupUnwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIBW8* sourceImage, BOOL interpolate);
    public:
      void SetupUnwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIC24* sourceImage, BOOL interpolate);
    public:
      void Invalidate();
    public:
      Euresys::Open_eVision_1_2::EPoint SensorToWorld(const Euresys::Open_eVision_1_2::EPoint& sensorPoint);
    public:
      Euresys::Open_eVision_1_2::EPoint WorldToSensor(const Euresys::Open_eVision_1_2::EPoint& worldPoint);
    public:
      OEV_UINT32 GetNumLandmarkElements() const;
    public:
      Euresys::Open_eVision_1_2::ELandmark& GetLandmarkElement(OEV_UINT32 i);
    public:
      const Euresys::Open_eVision_1_2::ELandmark& GetLandmarkElement(OEV_UINT32 i) const;
    public:
      float GetOpticalCenterX() const;
    public:
      float GetOpticalCenterY() const;
    public:
      void SetOpticalCenter(float centerX, float centerY);
    public:
      virtual Euresys::Open_eVision_1_2::EShapeType GetType();
    public:
      void SetSize(float sizeX, float sizeY);
    public:
      virtual void Closest();
    public:
      virtual BOOL HitTest(BOOL bDaughters);
    public:
      virtual void Drag(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes, BOOL daughters);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingModes, BOOL daughters);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes, BOOL daughters);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes, BOOL daughters);
    public:
      void DrawCrossGrid(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX, OEV_UINT32 numberOfIntervalsY);
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
      void DrawGrid(HDC graphicContext);
    public:
      void DrawGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawGridWithCurrentPen(HDC graphicContext);
    public:
      void DrawLandmarks(HDC graphicContext);
    public:
      void DrawLandmarks(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void HitLandmarks();
    public:
      OEV_UINT32 GetHitLandmark();
    public:
      void DragLandmark(OEV_INT32 n32CursorX, OEV_INT32 n32CursorY);
    public:
      virtual void EnableTypeFilter(OEV_UINT32 un32Types);
    public:
      virtual void DisableTypeFilter();
    public:
      EWorldShape(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
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
      OEV_UINT32 AutoCalibrateDotGrid(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, float columnPitch, float rowPitch);
    public:
      OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, OEV_UINT32 centerIndex);
    public:
      OEV_UINT32 RebuildGrid(float colPitch, float rowPitch);
    public:
      OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const Euresys::Open_eVision_1_2::EPoint& worldCenter, OEV_UINT32 centerIndex);
    public:
      OEV_UINT32 RebuildGrid(float colPitch, float rowPitch, const Euresys::Open_eVision_1_2::EPoint& worldCenter);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIBW8* sourceImage, Euresys::Open_eVision_1_2::EROIBW8* destinationImage);
    public:
      void Unwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage);
    public:
      void SetupUnwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIBW8* sourceImage);
    public:
      void SetupUnwarp(Euresys::Open_eVision_1_2::EUnwarpingLut* lookupTable, Euresys::Open_eVision_1_2::EROIC24* sourceImage);
    public:
      void SetSize(float sizeX);
    public:
      virtual BOOL HitTest();
    public:
      virtual void Draw(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes);
    public:
      virtual void Draw(HDC graphicContext);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, Euresys::Open_eVision_1_2::EDrawingMode drawingModes);
    public:
      virtual void Draw(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes);
    public:
      virtual void Draw(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext, Euresys::Open_eVision_1_2::EDrawingMode drawingModes);
    public:
      virtual void DrawWithCurrentPen(HDC graphicContext);
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
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX, float maximumX, float minimumY, float maximumY);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX, float maximumX, float minimumY);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX, float maximumX);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color, float minimumX);
    public:
      void DrawCrossGrid(HDC graphicContext, const Euresys::Open_eVision_1_2::ERGBColor& color);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY, float maximumY);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX, float maximumX, float minimumY);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX, float maximumX);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext, float minimumX);
    public:
      void DrawCrossGrid(Euresys::Open_eVision_1_2::EDrawAdapter* graphicContext);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY, OEV_UINT32 numberOfIntervalsX);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX, float maximumX, float minimumY, float maximumY);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX, float maximumX, float minimumY);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX, float maximumX);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext, float minimumX);
    public:
      void DrawCrossGridWithCurrentPen(HDC graphicContext);
    public:
      virtual void SetZoom(float zoomX);
    public:
      virtual void SetZoom();
    public:
      virtual void SetPan(float panX);
    public:
      virtual void SetPan();
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {
    class OcvObject
    {
    public:
      Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_OcvObject_;
    public:
      OcvObject();
    public:
      virtual ~OcvObject() throw();
    public:
      OcvObject(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
    };
  }
}


namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace Internal
    {
      class StringLegacyConvertion
      {
      public:
        Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_StringLegacyConvertion_;
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
        static Euresys::Open_eVision_1_2::ELogicalSize SearchParamsType_Get_LogicalSize_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_LogicalSize_Internal(void* ptr, int index, Euresys::Open_eVision_1_2::ELogicalSize val);
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
        static Euresys::Open_eVision_1_2::EPatternType PatternFinder_GetPatternType_Internal(void* ptr);
      public:
        static void PatternFinder_SetPatternType_Internal(void* ptr, Euresys::Open_eVision_1_2::EPatternType val);
      public:
        static Euresys::Open_eVision_1_2::ELocalSearchMode PatternFinder_GetLocalSearchMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetLocalSearchMode_Internal(void* ptr, Euresys::Open_eVision_1_2::ELocalSearchMode val);
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
        static Euresys::Open_eVision_1_2::EReductionMode PatternFinder_GetReductionMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetReductionMode_Internal(void* ptr, Euresys::Open_eVision_1_2::EReductionMode val);
      public:
        static Euresys::Open_eVision_1_2::EFindContrastMode PatternFinder_GetContrastMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetContrastMode_Internal(void* ptr, Euresys::Open_eVision_1_2::EFindContrastMode val);
      public:
        static Euresys::Open_eVision_1_2::EThinStructureMode PatternFinder_GetThinStructureMode_Internal(void* ptr);
      public:
        static void PatternFinder_SetThinStructureMode_Internal(void* ptr, Euresys::Open_eVision_1_2::EThinStructureMode val);
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
        static Euresys::Open_eVision_1_2::ELogicalSize MatrixCode_Get_LogicalSize_Internal(void* ptr);
      public:
        static Euresys::Open_eVision_1_2::EMatrixCodeContrastMode MatrixCode_Get_ContrastType_Internal(void* ptr);
      public:
        static Euresys::Open_eVision_1_2::EFlipping MatrixCode_Get_Flipping_Internal(void* ptr);
      public:
        static Euresys::Open_eVision_1_2::EFamily MatrixCode_Get_Family_Internal(void* ptr);
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
        static Euresys::Open_eVision_1_2::EMatrixCodeContrastMode SearchParamsType_Get_Contrast_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Contrast_Internal(void* ptr, int index, Euresys::Open_eVision_1_2::EMatrixCodeContrastMode val);
      public:
        static Euresys::Open_eVision_1_2::EFlipping SearchParamsType_Get_Flipping_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Flipping_Internal(void* ptr, int index, Euresys::Open_eVision_1_2::EFlipping val);
      public:
        static Euresys::Open_eVision_1_2::EFamily SearchParamsType_Get_Family_Internal(void* ptr, int index);
      public:
        static void SearchParamsType_Set_Family_Internal(void* ptr, int index, Euresys::Open_eVision_1_2::EFamily val);
      public:
        static float EOCV_Get_m_f32TemplateBackground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32TemplateBackground_Internal(void* ptr, float val);
      public:
        static float EOCV_Get_m_f32TemplateForeground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32TemplateForeground_Internal(void* ptr, float val);
      public:
        static Euresys::Open_eVision_1_2::EBW8 EOCV_Get_m_bw8TemplateThreshold_Internal(void* ptr);
      public:
        static void EOCV_Set_m_bw8TemplateThreshold_Internal(void* ptr, Euresys::Open_eVision_1_2::EBW8 val);
      public:
        static Euresys::Open_eVision_1_2::EBW8 EOCV_Get_m_bw8SampleThreshold_Internal(void* ptr);
      public:
        static void EOCV_Set_m_bw8SampleThreshold_Internal(void* ptr, Euresys::Open_eVision_1_2::EBW8 val);
      public:
        static float EOCV_Get_m_f32SampleBackground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32SampleBackground_Internal(void* ptr, float val);
      public:
        static float EOCV_Get_m_f32SampleForeground_Internal(void* ptr);
      public:
        static void EOCV_Set_m_f32SampleForeground_Internal(void* ptr, float val);
      public:
        static Euresys::Open_eVision_1_2::ELocationMode EOCV_Get_m_eLocationMode_Internal(void* ptr);
      public:
        static void EOCV_Set_m_eLocationMode_Internal(void* ptr, Euresys::Open_eVision_1_2::ELocationMode val);
      public:
        static void* ECodedImage_GetObjDataPtr(void* ptr, void* listItem);
      public:
        static void* ECodedImage_GetRunDataPtr(void* ptr, void* listItem);
      public:
        static const void* GetErrorText_Internal(Euresys::Open_eVision_1_2::EError error);
      public:
        static void* EVectorBW8_GetDataPtr(void* ptr);
      public:
        static void* EVectorBW16_GetDataPtr(void* ptr);
      public:
        static void* EVectorBW32_GetDataPtr(void* ptr);
      public:
        static void* EVectorC24_GetDataPtr(void* ptr);
      public:
        static void EColorLookup_SetTransform(void* ptr, void* fct, Euresys::Open_eVision_1_2::EColorSystem eSystemIn, Euresys::Open_eVision_1_2::EColorSystem eSystemOut);
      public:
        static void* EBarCode_GetSymbologyName(void* ptr, Euresys::Open_eVision_1_2::ESymbologies eSymbology);
      public:
        static void SetTlsValue(const std::string& key, void* value);
      public:
        static void* GetTlsValue(const std::string& key);
      public:
        static void ESwapImages(Euresys::Open_eVision_1_2::EImageBW8* img1, Euresys::Open_eVision_1_2::EImageBW8* img2);
      public:
        static void EasyImageTransformBW8(Euresys::Open_eVision_1_2::EROIBW8* pSrcImage, Euresys::Open_eVision_1_2::EROIBW8* pDstImage, void* transform, BOOL bUseLUT);
      public:
        static void EasyImageTransformBW16(Euresys::Open_eVision_1_2::EROIBW16* pSrcImage, Euresys::Open_eVision_1_2::EROIBW16* pDstImage, void* transform, BOOL bUseLUT);
      public:
        static void ClrTransform_Pixel(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, void* transform, Euresys::Open_eVision_1_2::EColorSystem colorSystemIn, Euresys::Open_eVision_1_2::EColorSystem colorSystemOut);
      public:
        static void ClrTransform_Color(Euresys::Open_eVision_1_2::EROIC24* sourceImage, Euresys::Open_eVision_1_2::EROIC24* destinationImage, void* transform, Euresys::Open_eVision_1_2::EColorSystem colorSystemIn, Euresys::Open_eVision_1_2::EColorSystem colorSystemOut);
      public:
        static Euresys::Open_eVision_1_2::EWorldShape* GetEasyWorld();
      public:
        static void* EChecker_Get_m_Registered_Internal(void* checker);
      public:
        static void* EChecker_Get_m_Low_Internal(void* checker);
      public:
        static void* EChecker_Get_m_High_Internal(void* checker);
      public:
        virtual ~StringLegacyConvertion() throw();
      public:
        StringLegacyConvertion(Wrapper::Internal_Open_eVision_1_2::InternalConstructor );
      };
    }
  }
}


namespace Internal_Open_eVision_1_2_1_2
{
  class LicensingHelpers
  {
  public:
    Wrapper::Internal_Open_eVision_1_2::WrappedClass wrappedFunctions_LicensingHelpers_;
  public:
    static void Invalidate();
  public:
    static void Validate();
  };
}


namespace Euresys
{

  namespace Open_eVision_1_2
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

  namespace Internal_Open_eVision_1_2
  {
    class Tools
    {
      public:
      static void Initialize();
      static void Terminate();
    };

  }
}

namespace Internal_Open_eVision_1_2_1_2
{
  class Tools
  {
    public:
    static void Initialize();
    static void Terminate();
  };

}
namespace Euresys
{
  namespace Open_eVision_1_2
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

#ifndef DO_NOT_USE_INLINE_OPEN_EVISION_1_2
#include "Open_eVision_1_2.cpp"
#endif // DO_NOT_USE_INLINE_OPEN_EVISION_1_2
#pragma warning(pop)
#pragma pack(pop)
#endif // __WRAPPER_WRAPPERCPP_MAINHEADER_OPEN_EVISION_1_2_1_2__
