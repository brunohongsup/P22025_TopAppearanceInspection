#ifndef __EVISION_API_CONVERSION__
#define __EVISION_API_CONVERSION__


#define OPEN_EVISION_NAMESPACE Euresys::Open_eVision_1_2
#define OPEN_EVISION_INTERNAL_NAMESPACE Wrapper::Internal_Open_eVision_1_2
#define LEGACY_EVISION_INTERNAL_NAMESPACE Wrapper::Internal_Legacy_Open_eVision_1_2

#define INTERNAL_CREATE_NEW_COPY_IMAGE__TO_LEGACY(type) inline EImage##type* CreateNewCopy(const OPEN_EVISION_NAMESPACE::EImage##type* src) \
{ \
  EImage##type* temp = new EImage##type(LEGACY_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_EImage##type##_.SetImpl(src->wrappedFunctions_EImage##type##_.GetImpl()); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(src->wrappedFunctions_EROI##type##_.GetImpl()); \
  temp->wrappedFunctions_EGenericROI_.SetImpl(src->wrappedFunctions_EBaseROI_.GetImpl()); \
  EImage##type* toReturn = new EImage##type(*temp); \
  temp->wrappedFunctions_EImage##type##_.SetImpl(0); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(0); \
  temp->wrappedFunctions_EGenericROI_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_IMAGE__FROM_LEGACY(type) inline OPEN_EVISION_NAMESPACE::EImage##type* CreateNewCopy(const EImage##type* src) \
{ \
  OPEN_EVISION_NAMESPACE::EImage##type* temp = new OPEN_EVISION_NAMESPACE::EImage##type(OPEN_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_EImage##type##_.SetImpl(src->wrappedFunctions_EImage##type##_.GetImpl()); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(src->wrappedFunctions_EROI##type##_.GetImpl()); \
  temp->wrappedFunctions_EBaseROI_.SetImpl(src->wrappedFunctions_EGenericROI_.GetImpl()); \
  OPEN_EVISION_NAMESPACE::EImage##type* toReturn = new OPEN_EVISION_NAMESPACE::EImage##type(*temp); \
  temp->wrappedFunctions_EImage##type##_.SetImpl(0); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(0); \
  temp->wrappedFunctions_EBaseROI_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_IMAGE(type) \
  INTERNAL_CREATE_NEW_COPY_IMAGE__TO_LEGACY(type) \
  INTERNAL_CREATE_NEW_COPY_IMAGE__FROM_LEGACY(type)

#define INTERNAL_CREATE_NEW_COPY_ROI__TO_LEGACY(type) inline EROI##type* CreateNewCopy(const OPEN_EVISION_NAMESPACE::EROI##type* src) \
{ \
  EROI##type* temp = new EROI##type(LEGACY_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(src->wrappedFunctions_EROI##type##_.GetImpl()); \
  temp->wrappedFunctions_EGenericROI_.SetImpl(src->wrappedFunctions_EBaseROI_.GetImpl()); \
  EROI##type* toReturn = new EROI##type(*temp); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(0); \
  temp->wrappedFunctions_EGenericROI_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_ROI__FROM_LEGACY(type) inline OPEN_EVISION_NAMESPACE::EROI##type* CreateNewCopy(const EROI##type* src) \
{ \
  OPEN_EVISION_NAMESPACE::EROI##type* temp = new OPEN_EVISION_NAMESPACE::EROI##type(OPEN_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(src->wrappedFunctions_EROI##type##_.GetImpl()); \
  temp->wrappedFunctions_EBaseROI_.SetImpl(src->wrappedFunctions_EGenericROI_.GetImpl()); \
  OPEN_EVISION_NAMESPACE::EROI##type* toReturn = new OPEN_EVISION_NAMESPACE::EROI##type(*temp); \
  temp->wrappedFunctions_EROI##type##_.SetImpl(0); \
  temp->wrappedFunctions_EBaseROI_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_ROI(type) \
  INTERNAL_CREATE_NEW_COPY_ROI__TO_LEGACY(type) \
  INTERNAL_CREATE_NEW_COPY_ROI__FROM_LEGACY(type)

#define INTERNAL_CREATE_NEW_COPY_VECTOR__TO_LEGACY(type) inline E##type##Vector* CreateNewCopy(const OPEN_EVISION_NAMESPACE::E##type##Vector* src) \
{ \
  E##type##Vector* temp = new E##type##Vector(LEGACY_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_E##type##Vector_.SetImpl(src->wrappedFunctions_E##type##Vector_.GetImpl()); \
  temp->wrappedFunctions_EVector_.SetImpl(src->wrappedFunctions_EVector_.GetImpl()); \
  E##type##Vector* toReturn = new E##type##Vector(*temp); \
  temp->wrappedFunctions_E##type##Vector_.SetImpl(0); \
  temp->wrappedFunctions_EVector_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_VECTOR__FROM_LEGACY(type) inline OPEN_EVISION_NAMESPACE::E##type##Vector* CreateNewCopy(const E##type##Vector* src) \
{ \
  OPEN_EVISION_NAMESPACE::E##type##Vector* temp = new OPEN_EVISION_NAMESPACE::E##type##Vector(OPEN_EVISION_INTERNAL_NAMESPACE::InternalConstructor_Dummy); \
  temp->wrappedFunctions_E##type##Vector_.SetImpl(src->wrappedFunctions_E##type##Vector_.GetImpl()); \
  temp->wrappedFunctions_EVector_.SetImpl(src->wrappedFunctions_EVector_.GetImpl()); \
  OPEN_EVISION_NAMESPACE::E##type##Vector* toReturn = new OPEN_EVISION_NAMESPACE::E##type##Vector(*temp); \
  temp->wrappedFunctions_E##type##Vector_.SetImpl(0); \
  temp->wrappedFunctions_EVector_.SetImpl(0); \
  delete temp; \
  return toReturn; \
}
#define INTERNAL_CREATE_NEW_COPY_VECTOR(type) \
  INTERNAL_CREATE_NEW_COPY_VECTOR__TO_LEGACY(type) \
  INTERNAL_CREATE_NEW_COPY_VECTOR__FROM_LEGACY(type)

INTERNAL_CREATE_NEW_COPY_IMAGE(BW1)
INTERNAL_CREATE_NEW_COPY_IMAGE(BW8)
INTERNAL_CREATE_NEW_COPY_IMAGE(BW16)
INTERNAL_CREATE_NEW_COPY_IMAGE(BW32)
INTERNAL_CREATE_NEW_COPY_IMAGE(C15)
INTERNAL_CREATE_NEW_COPY_IMAGE(C16)
INTERNAL_CREATE_NEW_COPY_IMAGE(C24)
INTERNAL_CREATE_NEW_COPY_IMAGE(C24A)

INTERNAL_CREATE_NEW_COPY_ROI(BW1)
INTERNAL_CREATE_NEW_COPY_ROI(BW8)
INTERNAL_CREATE_NEW_COPY_ROI(BW16)
INTERNAL_CREATE_NEW_COPY_ROI(BW32)
INTERNAL_CREATE_NEW_COPY_ROI(C15)
INTERNAL_CREATE_NEW_COPY_ROI(C16)
INTERNAL_CREATE_NEW_COPY_ROI(C24)
INTERNAL_CREATE_NEW_COPY_ROI(C24A)

INTERNAL_CREATE_NEW_COPY_VECTOR(BW16)
INTERNAL_CREATE_NEW_COPY_VECTOR(BW16Path)
INTERNAL_CREATE_NEW_COPY_VECTOR(BW32)
INTERNAL_CREATE_NEW_COPY_VECTOR(BW8Path)
INTERNAL_CREATE_NEW_COPY_VECTOR(BW8)
INTERNAL_CREATE_NEW_COPY_VECTOR(BWHistogram)
INTERNAL_CREATE_NEW_COPY_VECTOR(C24Path)
INTERNAL_CREATE_NEW_COPY_VECTOR(C24)
INTERNAL_CREATE_NEW_COPY_VECTOR(Path)
INTERNAL_CREATE_NEW_COPY_VECTOR(Color)
INTERNAL_CREATE_NEW_COPY_VECTOR(Peak)

#undef OPEN_EVISION_NAMESPACE
#undef OPEN_EVISION_INTERNAL_NAMESPACE
#undef LEGACY_EVISION_INTERNAL_NAMESPACE




#endif // __EVISION_API_CONVERSION__
