  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ScaleRotate__Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIBW16Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7BBF7837B1551C2539F1242D6BD1F30551C233CB(extc_sourceImage, sourceImagePivotX, sourceImagePivotY, destinationImagePivotX, destinationImagePivotY, scaleX, scaleY, rotation, extc_destinationImage, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgScaleRotate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8426ACF7E56A8C2EBE93315E9FF931BBFECBB0C7(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A0AD622275B92E6E66EBAC2CEE9218AFAC4A7407(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A684AC39F116C2916EDDB976B82A17D34BBD7507(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32_CapitalizedBoolean*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_43B71CB825396A43090C061FB640D5AF61A06F81(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits, resize);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32_CapitalizedBoolean*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F5D394B6E1501C9ADF6EF7124F803B3F44983969(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits, resize);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits, BOOL resize)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32_CapitalizedBoolean*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9EFC4531D30966DAFD44DB091D1DFE1850F76ED8(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits, resize);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7BA2BCFBB53C50D1D51939F6384E22C2FECEBB73(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_08A3774AB2DF983EAD290B67011127799D502C1A(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A9F85C66D9AEB7F9D1D200068C358F5AAAED64CE(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgShrink(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Shrink__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D82E1F6028F48BD567F6457C389DA35DF61CC0D4(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgShrink");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgShrink(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Shrink__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B9278616196A4A283BFF8C5E8D1162E3AC1DA7E9(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgShrink");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgShrink(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Shrink__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D7083D5E2447A4B3DC0B4D1A34D029E46343AB93(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgShrink");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgAdaptiveThreshold(const EROIBW8* src, EROIBW8* dst, Euresys::eVision::EasyImage::AdaptiveThresholdMethod::Type method, int halfKernelSize, int constant)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(src != 0)
  {
    if(src->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_src;
  if (src == 0)
  {
    extc_src = 0;
  }
  
  else
  {
    extc_src = src->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(dst != 0)
  {
    if(dst->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_dst;
  if (dst == 0)
  {
    extc_dst = 0;
  }
  
  else
  {
    extc_dst = dst->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AdaptiveThreshold__Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EAdaptiveThresholdMethod_Integer32_Integer32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_22419D716B20F3FB3A57C46486A9FE1330AD7C57(extc_src, extc_dst, method, halfKernelSize, constant);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAdaptiveThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW32* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW32Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_36E8CF91621E45DDC3E57581C2451F80001AC34B(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW32* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW32Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DFA6810A7B57EB3BC46868E14A5E6BB55BDA9FAB(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW16* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_24D3E50F6D4AE9E2D7420AAAA6239E7E585C3F32(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW8* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D36F931C43AFAEF0EBF279268BBFE881A0843313(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW8* sourceImage, EROIBW32* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW32Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6B3263C8696E2716EC2722A91EB0F2DEF05E440A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvert(EROIBW16* sourceImage, EROIBW32* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Convert__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW32Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DBD114FF81B18D4AAA68273E9998B28B8B7743E8(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvert");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGainOffset(EROIBW8* sourceImage, EROIBW8* destinationImage, float gain)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GainOffset__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_02398671BCEE926DB2A21CF691D6988E28DFE521(extc_sourceImage, extc_destinationImage, gain);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGainOffset");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGainOffset(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GainOffset__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_CB48E1218FEB9237E77239F1B89BBEC8F59898F5(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGainOffset");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGainOffset(EROIBW16* sourceImage, EROIBW16* destinationImage, float gain)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GainOffset__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C1368114D16E374535E07D71BB276ABA3F7E2846(extc_sourceImage, extc_destinationImage, gain);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGainOffset");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGainOffset(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GainOffset__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_2BB0486F08E7A864B72180BA2625A923C16A5250(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGainOffset");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgLut(const EROIBW16* sourceImage, EROIBW8* destinationImage, EBW8Vector* lookupTable)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(lookupTable != 0)
  {
    if(lookupTable->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_lookupTable;
  if (lookupTable == 0)
  {
    extc_lookupTable = 0;
  }
  
  else
  {
    extc_lookupTable = lookupTable->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Lut__Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EBW8VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A6DEF1C74E688EC0A6AA1133D9230EAF4C23F2D0(extc_sourceImage, extc_destinationImage, extc_lookupTable);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgLut");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EROIBW8* imageReference, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(imageReference != 0)
  {
    if(imageReference->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_imageReference;
  if (imageReference == 0)
  {
    extc_imageReference = 0;
  }
  
  else
  {
    extc_imageReference = imageReference->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A718AB583F29ED4F14794A17A718F8FE7A39398F(extc_sourceImage, pixelReference, extc_imageReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EROIBW16* imageReference, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(imageReference != 0)
  {
    if(imageReference->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_imageReference;
  if (imageReference == 0)
  {
    extc_imageReference = 0;
  }
  
  else
  {
    extc_imageReference = imageReference->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B3C2691382D8A8BE9A5A78C95FAED6BD62D08C64(extc_sourceImage, pixelReference, extc_imageReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EROIC24* imageReference, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(imageReference != 0)
  {
    if(imageReference->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_imageReference;
  if (imageReference == 0)
  {
    extc_imageReference = 0;
  }
  
  else
  {
    extc_imageReference = imageReference->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EC24_Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_ABBB2AE1E02013237570F942EBBD856E0854903B(extc_sourceImage, pixelReference, extc_imageReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIBW8* sourceImage, EBW8 pixelReference, EBW8Vector* vectorOfPixelReference, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(vectorOfPixelReference != 0)
  {
    if(vectorOfPixelReference->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_vectorOfPixelReference;
  if (vectorOfPixelReference == 0)
  {
    extc_vectorOfPixelReference = 0;
  }
  
  else
  {
    extc_vectorOfPixelReference = vectorOfPixelReference->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_754F2E7CDF8693865DB5A1ADDFE0D2EFC8B2E33D(extc_sourceImage, pixelReference, extc_vectorOfPixelReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIBW16* sourceImage, EBW16 pixelReference, EBW16Vector* vectorOfPixelReference, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(vectorOfPixelReference != 0)
  {
    if(vectorOfPixelReference->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_vectorOfPixelReference;
  if (vectorOfPixelReference == 0)
  {
    extc_vectorOfPixelReference = 0;
  }
  
  else
  {
    extc_vectorOfPixelReference = vectorOfPixelReference->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6F6C77159A1141F520B22FCCF9B5EB7E9DE88266(extc_sourceImage, pixelReference, extc_vectorOfPixelReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgUniformize(EROIC24* sourceImage, EC24 pixelReference, EC24Vector* vectorOfPixelReference, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(vectorOfPixelReference != 0)
  {
    if(vectorOfPixelReference->wrappedFunctions_EC24Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_vectorOfPixelReference;
  if (vectorOfPixelReference == 0)
  {
    extc_vectorOfPixelReference = 0;
  }
  
  else
  {
    extc_vectorOfPixelReference = vectorOfPixelReference->wrappedFunctions_EC24Vector_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Uniformize__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EC24_Euresys_Open_eVision_EC24VectorPtr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_474F0A9C8BDBF0B9AF47C8A385A7593582FE0EFD(extc_sourceImage, pixelReference, extc_vectorOfPixelReference, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgUniformize");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgSetRecursiveAverageLUT(EBW16Vector* lookupTable, float reductionNoiseFactor)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(lookupTable != 0)
  {
    if(lookupTable->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_lookupTable;
  if (lookupTable == 0)
  {
    extc_lookupTable = 0;
  }
  
  else
  {
    extc_lookupTable = lookupTable->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SetRecursiveAverageLUT__Euresys_Open_eVision_EBW16VectorPtr_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E692FE28F812B7BB0540CFF2EABD76ACD4747D51(extc_lookupTable, reductionNoiseFactor);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSetRecursiveAverageLUT");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_50E5F0D470AFB1BDC2A74472B6689DA8EA478CA3(extc_sourceImage, extc_destinationImage, threshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B60C488EEAAC0501E9AF791EDCADA73F66C65AF3(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW16* sourceImage, EROIBW1* destinationImage, OEV_UINT32 threshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C0612630E0081704A9D19622E5054DA3BB39D66E(extc_sourceImage, extc_destinationImage, threshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW16* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_555AF1F8CAFA1B53D8BCCC093750B98160A69813(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue, OEV_UINT8 highValue)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32_UnsignedInteger8_UnsignedInteger8*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DC6F293A5E35AEF41ED718DE78E50AB326E5544F(extc_sourceImage, extc_destinationImage, threshold, lowValue, highValue);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold, OEV_UINT8 lowValue)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32_UnsignedInteger8*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_AA0C54C408ED6BDDDA07CEA8DDC34B2ECA69EC3F(extc_sourceImage, extc_destinationImage, threshold, lowValue);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 threshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_27E4412402045663FA625F930C1696A2FE6375CD(extc_sourceImage, extc_destinationImage, threshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Threshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_07F1F233A95CAA43BDDFF951259001A724585BAD(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue, OEV_UINT8 middleValue)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DoubleThreshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32_UnsignedInteger32_UnsignedInteger8_UnsignedInteger8*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_339DD9EEB26F58A35DEB86E278D1DF9120ACBF44(extc_sourceImage, extc_destinationImage, lowThreshold, highThreshold, lowValue, middleValue);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDoubleThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT8 lowValue)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DoubleThreshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32_UnsignedInteger32_UnsignedInteger8*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_48B91F6C4D945074D148AE1748DFA8BDC280E516(extc_sourceImage, extc_destinationImage, lowThreshold, highThreshold, lowValue);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDoubleThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDoubleThreshold(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DoubleThreshold__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_603CF8D1B7FAD1387B03E31B9A7DC115F1E87B30(extc_sourceImage, extc_destinationImage, lowThreshold, highThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDoubleThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, IMG_THRESHOLD_MODES thresholdMode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  EBW8 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AutoThreshold_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EThresholdMode*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0F58D62599296C53F9A5B1B69AD9724867341589(&toModify, extc_sourceImage, thresholdMode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAutoThreshold");
        return EBW8();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, IMG_THRESHOLD_MODES thresholdMode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  EBW16 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AutoThreshold_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EThresholdMode*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C6D9541CBEAC01785BC22CE37E985022B42D2847(&toModify, extc_sourceImage, thresholdMode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAutoThreshold");
        return EBW16();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW8 ImgAutoThreshold(const EROIBW8* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  EBW8 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AutoThreshold_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EThresholdMode*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_08FBF797F46AB486C27C9C2DC025CCF09988F75E(&toModify, extc_sourceImage, extc_mask, thresholdMode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAutoThreshold");
        return EBW8();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW16 ImgAutoThreshold(const EROIBW16* sourceImage, const EROIBW8* mask, IMG_THRESHOLD_MODES thresholdMode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  EBW16 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AutoThreshold_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EThresholdMode*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E7B61BADE6442FF548A9B1B615AF380928B5EA04(&toModify, extc_sourceImage, extc_mask, thresholdMode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAutoThreshold");
        return EBW16();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThreshold__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref_Float32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B1DD674732E11F6A26430B9949DCDE3F768F3CFF(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold, relativeThreshold, from);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThreshold__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EE35C35663658173B100BA0530B1AD1151CA5D36(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold, relativeThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThreshold(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThreshold__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D56CB63855F43E11931FBE403DBF9B9E5DB08A72(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold, OEV_UINT32 from)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThresholdBW16__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref_Float32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C35AF020031058149CB1AB834993E42AF6123378(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold, relativeThreshold, from);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThresholdBW16");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold, float relativeThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThresholdBW16__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BA586BC8D37832C6633CE18478F0DDB9A8BE2B94(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold, relativeThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThresholdBW16");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogramThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32& threshold, float& averageOfPixelsBelowThreshold, float& averageOfPixelsAboveThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_HistogramThresholdBW16__Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32Ref_Float32Ref_Float32Ref*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E96B1C7CEBBCA5104B53D6943907CAF11C3CDEFB(extc_histogram, &threshold, &averageOfPixelsBelowThreshold, &averageOfPixelsAboveThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogramThresholdBW16");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW8 ImgIsodataThreshold(EBWHistogramVector* histogram, OEV_UINT32 from)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  EBW8 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_IsodataThreshold_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_19383930020BA802969B17E7D2D04C7C4D5B8E69(&toModify, extc_histogram, from);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgIsodataThreshold");
        return EBW8();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW8 ImgIsodataThreshold(EBWHistogramVector* histogram)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  EBW8 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_IsodataThreshold_Euresys_Open_eVision_EBW8_Euresys_Open_eVision_EBWHistogramVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D190C474561B4DE5D59FDD6A2A03043777B709BC(&toModify, extc_histogram);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgIsodataThreshold");
        return EBW8();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW16 ImgIsodataThresholdBW16(EBWHistogramVector* histogram, OEV_UINT32 from)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  EBW16 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_IsodataThresholdBW16_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8F086E576BE89F5B6866B85D835C96BF88631125(&toModify, extc_histogram, from);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgIsodataThresholdBW16");
        return EBW16();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 EBW16 ImgIsodataThresholdBW16(EBWHistogramVector* histogram)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  EBW16 toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_IsodataThresholdBW16_Euresys_Open_eVision_EBW16_Euresys_Open_eVision_EBWHistogramVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_589AF568B54023932A1F3C56E53A2E85FFD8400F(&toModify, extc_histogram);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgIsodataThresholdBW16");
        return EBW16();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass1(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass1__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_631077E0849448DD34178AA355C230579DDBB690(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass1(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass1__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_93FCAB23E10AA38245655202AB80BAA2DCE153EF(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass1(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass1__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C15734D2CA83FB18F24FA89109251C20EF283D40(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass2(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass2__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_44021D1591C64E2A2E62BBC698FC49075E9EB134(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass2(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass2__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E179885CC4E6792CF8F40FAB6928368EE6CBF728(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass2(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass2__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EA9010A229F77E269E88C08D03AD7B2443CA6807(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass3(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass3__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1A59468CCDB09B4C9C59D90F4AB24755439A0A8C(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass3");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass3(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass3__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3570DE947FBEAC150EAE568DB9B66D79596DE786(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass3");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLowpass3(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLowpass3__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_509C5D58817234AA6356C9DB84CFBEEC65C5305C(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLowpass3");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_51F9BA757BED48775D3E958A3EF33DBF0899BBBC(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7279B3AA24A7FAA6B54FCB6952346FF5EA6F7D39(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8261677904A666C980CA4E7979099DBEC4DBC1A4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_182D651D2409C07309C4B2BBA9EA5CF328832559(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E0A1FD252B975E88A543E35A8A99F9949A2EFC5E(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_07AD1A9050FDCBA3E9C808AD682BE350C9ABF170(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EC32FB812FFF9E584140C2615ECA5815583A8B4A(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_32D064F9DE5BAA788271AAEC232CE24B369088F2(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A4A92416B2BC4D186A78398B44EBB701FAE2C745(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EBW8Vector* sourceVector, EBW8Vector* destinationVector)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceVector != 0)
  {
    if(sourceVector->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceVector;
  if (sourceVector == 0)
  {
    extc_sourceVector = 0;
  }
  
  else
  {
    extc_sourceVector = sourceVector->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(destinationVector != 0)
  {
    if(destinationVector->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationVector;
  if (destinationVector == 0)
  {
    extc_destinationVector = 0;
  }
  
  else
  {
    extc_destinationVector = destinationVector->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EBW8VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9807E682E8D434A0CCDA97FA944A0F2AF36829AD(extc_sourceVector, extc_destinationVector);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolUniform(EBW16Vector* sourceVector, EBW16Vector* destinationVector)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceVector != 0)
  {
    if(sourceVector->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceVector;
  if (sourceVector == 0)
  {
    extc_sourceVector = 0;
  }
  
  else
  {
    extc_sourceVector = sourceVector->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(destinationVector != 0)
  {
    if(destinationVector->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationVector;
  if (destinationVector == 0)
  {
    extc_destinationVector = 0;
  }
  
  else
  {
    extc_destinationVector = destinationVector->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolUniform__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EBW16VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E08ED70EDE25AC1D60F0B4C17299C7FBA24F4570(extc_sourceVector, extc_destinationVector);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolUniform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0CEC464656B25B797EAECC916403B248C6E30441(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6DB2073746E73DF1830A1BB7CC4F4E598292FCB5(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A2A62A4E24540B5986E0352059894020234A3396(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_381CF99D365718C41980B6A9BD070468AEA4B9ED(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D5A9F17A0BFFABA1B33E4342586F1EB3103C81B3(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1D15C6D05703875A223BD2E4F52A3B89396AA4AD(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_95B7DE8BB59EA8ADA1E49C62A053CB3C05A448AA(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FB80DC030103DA63614FEA7EBE2231E7838C4739(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A7C14000ECB7D580E927CFE1BFBFB0EF1F38FAC8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(const EBW8Vector* sourceImage, EBW8Vector* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EBW8VectorConstPtr_Euresys_Open_eVision_EBW8VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_35B71D53618AC999685E4EE48652F2B33B2ECE98(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGaussian(const EBW16Vector* sourceImage, EBW16Vector* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGaussian__Euresys_Open_eVision_EBW16VectorConstPtr_Euresys_Open_eVision_EBW16VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DEA4F46D2B723A4182FBE4ABFEF47DAE4DF5BD11(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGaussian");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass1(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass1__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_27AEAE355D7B02915C52497DF68EB5DD0FEEBE48(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass1(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass1__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7EE7DFF8DC0F9F20F7D3A0AB8054FA47D26D9B77(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass1(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass1__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8D0CAC8B98DE1FCE6F9667869602A870105EEC98(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass1");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass2(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass2__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5AAF5C330FEF35FE988EAB241D70043F03B8D633(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass2(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass2__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_47E65A5B05DA92C9E93648C7FECB72F13DEB1B91(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolHighpass2(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolHighpass2__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6D3A2DA3F7A16815E75A809B039C13CA0F629518(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolHighpass2");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientX(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientX__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9E371A75ADC412154D4B64DC624D0C9BFCF46742(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientX(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientX__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_70ECAAFA33CC4A2047A38D9A8C4E6F2543200312(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientX(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientX__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E63026F89E7553733EA2C12DADC02057F2573A41(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientY(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientY__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F5868B769A6C88E9044CF681C14D5AE316FC2182(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientY(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientY__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BAFEF5F4A77CD99DBB4968E7718EB2A3E4DE63D5(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradientY(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradientY__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C1B08E6D816E02B9826628678787D1A6ADDE871D(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradientY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradient(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradient__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FD5E8B9FEA15EA9B6A9EA4FC668916C74DC10EEB(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradient");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradient(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradient__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_56900CA29DD84C8908853CBAB868A8B1D900B05F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradient");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolGradient(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolGradient__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FD79344290396F8DE7AC88F7AC1C58B20EA06C04(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolGradient");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelX(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelX__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_227DA6BEF7C8D2E8D75216563051D3CB49D53308(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelX(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelX__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D8D7007762BCB61FEF1FE01802A2DF0D6EA76B5E(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelX(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelX__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1CFDEB6F93CAF4C454595A9E4965BB652DF3F3AA(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelY(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelY__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F747DD37B124DDAB115B11DBCCB259303DEB7A31(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelY(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelY__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_CDF7B6536E8F1047AB9D340A71EB6657A1A05F31(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobelY(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobelY__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_110272A1F62EAB8FB18C50DDEF66A502DB8F07B8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobelY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobel(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobel__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6E3495387140FB63D16B9C16828D44843D099B55(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobel");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobel(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobel__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EA174D2059501E51F8210E2CD18C72468A3E9E9C(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobel");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolSobel(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolSobel__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_284DDD2F0407B462525B6E27F71699552FFA172A(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolSobel");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittX(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittX__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1867A538F2A9DB4D4D4D0682D93EC2AFE1922A4B(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittX(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittX__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C5444AC00A59298AC42FCC648720C6A050259378(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittX(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittX__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3E7EF7891DBDF9A837D706F156B6B3FF3CFD1B7B(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittY(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittY__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A9A2464B29DFC909E9ACB0416C04D8D4836CAFE0(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittY(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittY__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E523E78D2AC709205C009FCF87BE305F862224D4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewittY(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewittY__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9008AB83138E3B5A5A5A8BE29CDBB1A6CCA61678(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewittY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewitt(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewitt__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_44E3E10025483A94343EFE32FACFE075628D462F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewitt");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewitt(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewitt__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F4B930B74EA63AD781D8C4400E237AEAF321B122(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewitt");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolPrewitt(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolPrewitt__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_205249D51DBCD71795535FACFFDA8ED159E0F621(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolPrewitt");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolRoberts(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolRoberts__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EFC6FB50672ED90410CC146A710FDB4235C9E8D7(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolRoberts");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolRoberts(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolRoberts__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9C7269A99C70CEA6F74F8A268781B79A8A52BD43(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolRoberts");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolRoberts(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolRoberts__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_06FBA1402F39C314AD4DA75BBAB7660C49102CAF(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolRoberts");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianX(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianX__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_37C0F611BB06CC41880C0DF9A915ADA8AF7A3008(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianX(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianX__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F7CCFAC3BF2160AED063EA32A8D36BC1773CAB38(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianX(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianX__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7EF62888C2D2DFCE8781C199D087C8BF4D1EEBC5(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianX");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianY(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianY__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3AF437660182BA397B1926B7051463E569F8A9BC(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianY(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianY__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9968B1AF561E2595D15CCB84A9C67E4ED0E7FE9E(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacianY(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacianY__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B7CC07EB6148A47D348D24B1A7516084394062B1(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacianY");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian4(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian4__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A2DA1728A45C702F18CA14FC5B8293B3FD406BBE(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian4");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian4(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian4__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_344B1D78F603C59C77AFC34E03D5E73D1ED8D597(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian4");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian4(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian4__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6AFFD3DFF93963F9F66DD9784209B45F88BE0BB9(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian4");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian8(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian8__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E512C74B55D40220AE111A6EA9B9135B3C30FF64(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian8");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian8(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian8__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F8FA7EEC97770243DEBCD88004628BC38E64EF46(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian8");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgConvolLaplacian8(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ConvolLaplacian8__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_882A31342F302DA1BF3E66CC49A2D03E4D06F9B7(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgConvolLaplacian8");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgModulusImage(EImageBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EImageBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EImageBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ModulusImage__Euresys_Open_eVision_EImageBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0B4A5D7A2C5973824DEEAD0B41A7C9DCD3E64882(extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgModulusImage");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1AF2800EEEE0C5EEA00C9AB81F231105A4B7FA29(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3581F0608BCDEBE10F4081047A4AB045A0329791(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_03F835B088F8460BDA884EE33D5ED645C96FFEA2(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D49AB21B7860E6970FC52237F19CFE33D3B46A88(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3744C6523A26D2EFB88F149C561114E3B474472C(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_438595826F9DFA27056B23498A2F29F86CB2901B(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1D81F12748B03D6693F660B788784650D8E8DB89(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3BFE67FE2BE3D9273C344E049895F437F89316B9(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DC14B0CFD22C8B889C92FF8F4E22BD9B2E43B0D6(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_22FAED3EDC0B8C8FE40B9E788DC3E02BB0545916(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C5624D795C9C8C37E895F4EB6383B5E878450BF8(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateBox(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateBox__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F1B8826DF05366342E43D2451F30F1272958464B(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B0859E2DCA13DEB9C5F2653EE6725243412122DF(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5EDC1050FA9D1FCF41294BFB7B6567CDF02AC6A4(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6B787000B8DF1B36067859022ACDAE2F72459E8F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_866A6004B811F1D4848C072BFFDA9D20D6A0DD03(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8476F42537B13118F1BFCC2203296751A6335E54(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_101123BBCAC44CA8D71B50383B05AA98D31BEC94(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1E667480E67003A4CE20B7A0A8F2EA4DB0CE1A09(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_43149346F465022000CC8D322652131FAD7F5BB5(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_867AFEF4E08B6BE8FD1360AE5AD93413585F4396(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_15DB5BDB41EB8F6C95DADF39421BD0AFA39C47CF(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4A18CDF21E2D8C613A1FEBB83AFC847328341637(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeBox(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeBox__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EB37280221A59C85224D530854A9B44814F53119(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9A575908FF3A4336D29C8E8B50A9B5C8F3F6979E(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B1DCB3A45E9C1B39ABF8DBA255090B350E4894FE(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E1F1FB586430F840A19A2E9C39CFFE7811880650(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F095D773A05FAAEF43D345771B0743B3A82FA339(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1EEDF563C14052C9871884D88CD4299ADA16CC7F(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F1A209448B701DEA13EF67F428308DD0DEA01E54(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C3EBF005FC009491BCFFF4EC53759979D6082AEF(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_729AB393AD831EE2E38FE8E2EC626DA7150E9CB4(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_693DF59A420A4F4EB807FDCB14E41B4CE278A1A8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7D072C62FD8C39645482499A277AB4B9B0EAC4C8(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_56F8DE0C9E33DB8079B132D2A7FE29F753C56B7E(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenBox(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenBox__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8FA2EF00BE17E49284D7AB846BEFD151B030B59B(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5C1542FE4CCAE97C1B41ADC851776BAB3016F0F3(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_530F454596E2F1F68CAC35A1392F1E7A0896A1A4(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_04F9B30679008E0DD463F5F272FA3DC5C2E66157(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_31037B29894036156165B5973450E4610DB95732(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8A63AD4B8F5033068922BD8A6D881FEAA7ED06FD(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B7ED8550AD6365F74F7EA910E9DE28AA5AC29EBA(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F33BE87903194B110CC20CF8E71F581B09F7F51F(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3993BA1128A5FC89030A1C7BAB72E183D4266C0B(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_943F0154AFA4D0BF06EDCC506532B80889B517E3(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5B73E0E6465004525CBCB30E7EA7389EED68E521(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F4A418536C87AC3272D3CA6E63FD81079ED04A8A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseBox(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseBox__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D30C069D7490403366132BBC0833CC2E1C3142B4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A45487C74886943D9DFE6FA5DB729ACD1388EC5D(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9A2DBAB72F3B6B6980D73589935F0B29E881CB4B(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E66C6785F99CC47E5308C439ED93BC55D8C8FDD5(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_908B6ECF31E7B2E50F7AB0DD3FD6600C93910321(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_88DEE93DD8420D2A17F405731114B0E52739D97F(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_126D8EB0F21A5B36632444497662F1AB4636AA52(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3AE7E70F0E5F57BA92847FA8FB68197F4643F8B4(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B8E7AC6648C1D4FA4B80B0512E2A30E16310A05D(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_2CD725EA96357FBEF8F70B1879FDCBDD43D55B08(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_369B4E85C57BAFAE61511EDC73B9AAC53085A355(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EDFC39B98E1DA6A428208EBFB63797EB5285163C(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FCD8BE5FE3FB568CD2A4945254F4AB6BE4AEFD2A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0CA0EB73229AB652857CFC00898DF5DF897295EB(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0294C42055F6F2E75DFF4D1B072223CC47CF3A79(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BA8CC389411CF1769AA9434AD8960C558F990524(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_928A916A34D4F40A24ED64C7E9988BF2AE2F8FDF(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW1* sourceImage, EROIBW1* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_52024EB14182B6FC9733E30BE737B17449A5EDCB(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7D79B215AFB90A5E07D7726FC22D12D796BF9707(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_128B855773506395112A38B0F66D5CAF344381C3(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A3B1B29A8452F524D81A8BB1EB76A0074F013CDC(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4C4B796276A32884D023DAAA7D61B0919205A652(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7F2456C6D4D6A6471AE397B2F32110F689EB57CC(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8138627B62C52ACA09FF5FF01360A164C199F39B(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C42503F848F3EDE1F35823C88B1B096FA26D5364(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FEFE53323DA68204DD60B5C8AAD6D2C0B162B8B4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIC24* sourceImage, EROIC24* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_CA8C14D66E9D8AFA8C007F8A93338D6FF045BF90(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EBC64F8174B7DBC50A16C51F7665DAA1F974331E(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientBox(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientBox__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C47D3471E7AC519C53318B83F8CB74CC292AEF1F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_206EDFA927CADBADB5217D54AD1B2AC0DEF5205E(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_669974B1D5920B6D5CB2061B33AC7F2484428727(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_2B8B27421436871837A813FEA2FD18D21B036517(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1E0938DC8D6D83436CC8BD73F3C00FE751AB9B40(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6BA8470FFFB876B6913CC57F9647419B95F50E1A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_72FD5F5D13A61AE6CD7DA41C6714366AEBF8B8C9(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8B586245DB069135447653BEF4CCCFC278EC6B69(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErodeDisk(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ErodeDisk__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_63A566CFBE8C2653B932633CDBB2BEF491ED702A(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8D20E5B3EEB06C9B333E5A3CE9175F4551630497(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C60B7B195731EF3620AF4A41748441345F3D415F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6AA3476DCBEC9AFB13542C778183CCE2FC4439EF(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9FD80A097F4903FC73DC4CCF6B48F95FCCFCC759(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E9B41EB18517B0FC2BFEFAE23AEC10484542AFB7(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6D8539ADE3B80002030A2A25EA666C283D670F36(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F264936131D446C080573C80092E6BA4567404C3(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilateDisk(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_DilateDisk__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_862F46B59907FD44B79760AF614FF477A0FB0766(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_50FED71C3C55AC4321B7B87E5988F1F174C22005(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_31C68DBCE182100D50B6D468FF4357D98C908897(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E955F03190C9A878C7979AADE03CB4AA2BA41B78(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_36082CF8BBE00F8CE129C218176EE06E240C5410(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_7148A0322514396528142BB33A88CF90751BF6CD(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A53628759644ED3414C7B5ABEAA6CD2BF3C15C00(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_25C7C6CC2045B08C8BE33B3B5C64E75DE0EDCC83(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpenDisk(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_OpenDisk__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_437E6DC501A3EB7C0798E268B4BB2F22BBEEA7EC(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6149A20F113BC50323B087FBA9DCDBFD03AB4054(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3F91DDDADCB3ED9D49EC015D4BBE93A9FB774E5A(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_96AFBE7D2CB33F380D7EE1F5F621919A116F98FC(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A464BE166C41E9DC71A734CB21838ABA627292E7(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_55F77E034B9A2F907370F867942D7D9CEAD1B741(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D5DED1B9D175787E99C815455F703AFF5B7077E8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BF22E83FCAA90E85D34B53384762B19428652A1F(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgCloseDisk(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_CloseDisk__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_AE5E889FF9F61878CFEFC1A223C2AF450A23BFB1(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C48D0C5707A3B6B87C08DD7402A0414256013005(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9E9E0EC46F9382F57E1F7F2FF8E2514EBF68B531(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6971D1B2C7205889EC8BCA91F50D4E009F0E6475(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHatDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DC42DFAFA2D7FBF0E4B24A899244EC2CE1786FB6(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0110CFCD86FE4FA3060CF68213F537F1E594ADAE(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FA5AFDF1FB635A2E2FD374D2FDFF07F7952612DB(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1DAD08C19372CB02F3430D436000C8194B6D3F64(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHatDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHatDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D1636141F67C5E756611A37DF9D304339BE2C0DF(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW1* sourceImage, EROIBW1* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW1Ptr_Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E556D3BD64F30DDBED745ECDCBE9C8730D939DC5(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW1* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW1_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW1_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW1Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_83A66CF4D2FC3E0C8BC5E4B566924E41B2E71B13(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0F1BB78F02DAC9B67ECB445D41274D1EAFCC3F34(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_88EE76B3C860168308D7B7FC6635199DFE890D3C(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E17DBE93352302C76E10A3DE89F4EFFCE723F16E(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIBW16* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D0F51EC976934C8911235859BEE5DD54481BF8E4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1EE0434102BC67152B0A0F24025393BC1C3FE42F(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgMorphoGradientDisk(EROIC24* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_MorphoGradientDisk__Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_90C70D1A09E39651BAD60C01ACE2E5659D43B194(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelErodeBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E0DDEF8DF91CE5DA5D6626715F4F0C6CAA5ACE8C(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelErodeBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelErodeBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B99E5E96624EDA46C3660703A549F3E9A52E2957(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelErodeBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelErodeBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C5AA64B3D780852B3817FA9248CCE4BDE8E54D2F(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelErodeBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelDilateBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0C48AE515A1DF5738FA66BFA97A8735B20258B6B(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelDilateBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelDilateBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6B7E8B4963D5D3BEA13A0DC899CB23DD20DDBE5A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelDilateBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelDilateBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_CAA21AB0161051F2AC20E9E9A9D63B30AD20B1A8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelDilateBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelOpenBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BEB0A718624DBB55CE28640B397E037B9557DD31(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelOpenBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelOpenBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_3AEEF7FD25B8580B4FEEE7D76877B161B916E2F3(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelOpenBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelOpenBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8BD390D5BFB25228986E62520DC344272C5E04C4(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelOpenBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelCloseBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_64375787ADE180BD73030B0E16BAA5A907BA8DEE(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelCloseBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelCloseBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_95ACA62C36AAF1C95B5D84B13CFF8914EF30249F(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelCloseBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelCloseBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E056EE10A494941B2E4F55B2E600A53F085E2292(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelCloseBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelWhiteTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_82EC43384762412C0521787F63B95B1CD5229BB1(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelWhiteTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelWhiteTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4C153403897E197289193968AC2A200029A83A7A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelWhiteTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelBlackTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4F5132D039D54AFA0CA60951087C76186083B558(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelBlackTopHatBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelBlackTopHatBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4CD918030B9D7B9AC50569EF418F83B89449768A(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelBlackTopHatBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_UINT32 halfOfKernelWidth)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelMorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_454925BC911EEAFBCA645817548C56ABCDA6E32F(extc_sourceImage, extc_destinationImage, halfOfKernelWidth);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelMorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5EA223B95F2BCD962CB687DE35473D9110D40ADD(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelMorphoGradientBox(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelMorphoGradientBox__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_345DAA22921360CDC2D6E63B22718C826A45F51E(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelMorphoGradientBox");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelErodeDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelErodeDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A53C3077C294EED360CA1EDF55A17443BDA060AF(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelErodeDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelErodeDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0B3514C47E191DAE65B35DA1312C9918D2809D9D(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelErodeDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelDilateDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelDilateDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A0C65E528AA0DB8C16AF2830DAF02BC27CA95DD3(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelDilateDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelDilateDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_54A509277B2F34B033DC6FEAC3D95162F3F8E9EB(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelDilateDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelOpenDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelOpenDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B0EB314DD8F88B19BEFCE62EEF34CEDEF2F457C4(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelOpenDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelOpenDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_263C6A8AEF9E9D328FB57945584FEF34562735CD(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelOpenDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelCloseDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelCloseDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A0549C10DD11205E283A8D78E0DEE8024E1F9260(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelCloseDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelCloseDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C2DE27070339CA5BDE0F9BC7278D45B9491A41AC(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelCloseDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelWhiteTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelWhiteTopHatDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FB0FF2F6AB2D8D6D43748FD88CAE2ABE01CE53BD(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelWhiteTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelBlackTopHatDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelBlackTopHatDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FFB578846EF82EDD8E77485E39DA63B5EF3221A6(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelBlackTopHatDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelMorphoGradientDisk(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelMorphoGradientDisk__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D36E96C56E9700F9E98F6E33FBFF544020878C99(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBiLevelMorphoGradientDisk(EROIBW8* sourceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BiLevelMorphoGradientDisk__Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_129D8C85A6242494E525B87DEE8F98AF969A85B8(extc_sourceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBiLevelMorphoGradientDisk");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpen(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Open__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6F292D5D9557C8A31752640459697EABA1BECE4E(extc_sourceImage, extc_destinationImage, n32Iter, n32ValOffErode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpen");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpen(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Open__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FA1B375A195E3C272A51F8097100CACFA62BC138(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpen");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpen(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Open__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32_Euresys_Open_eVision_EC24*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0D0C305AA50A52ADA5DDB60E814169E075D466AC(extc_sourceImage, extc_destinationImage, n32Iter, c24ColorOffErode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpen");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgOpen(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Open__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8300744919853734629F4C5F472E718209132A2D(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgOpen");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgClose(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Close__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E6CF92B7BD4082EC88B83008278EC33358C45605(extc_sourceImage, extc_destinationImage, n32Iter, n32ValOffDilate);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgClose");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgClose(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Close__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_211FA711189613C7FC9AB8C1BC31E57A5B8D96D0(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgClose");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgClose(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Close__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32_Euresys_Open_eVision_EC24*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8D8E792D5C629D9908964368BBE7A35ADC1C02F3(extc_sourceImage, extc_destinationImage, n32Iter, c24ColorOffDilate);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgClose");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgClose(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Close__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B118079E9C825730A78F3D27D26FD3D8846FBA72(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgClose");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErode(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Erode__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_469D5B83E4902134639709E6CF8F98B86E7E4F8D(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErode");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErode(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Erode__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C3E3A7CC244BFFD5629F2C34749224430D76B95A(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErode");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErode(EBW8Vector* pSrc, EBW8Vector* pDst)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pSrc != 0)
  {
    if(pSrc->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pSrc;
  if (pSrc == 0)
  {
    extc_pSrc = 0;
  }
  
  else
  {
    extc_pSrc = pSrc->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(pDst != 0)
  {
    if(pDst->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pDst;
  if (pDst == 0)
  {
    extc_pDst = 0;
  }
  
  else
  {
    extc_pDst = pDst->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Erode__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EBW8VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_14FB4593CED46D7203F4E5435BBAEE080F47665B(extc_pSrc, extc_pDst);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErode");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgErode(EBW16Vector* pSrc, EBW16Vector* pDst)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pSrc != 0)
  {
    if(pSrc->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pSrc;
  if (pSrc == 0)
  {
    extc_pSrc = 0;
  }
  
  else
  {
    extc_pSrc = pSrc->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(pDst != 0)
  {
    if(pDst->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pDst;
  if (pDst == 0)
  {
    extc_pDst = 0;
  }
  
  else
  {
    extc_pDst = pDst->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Erode__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EBW16VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A66AAA6F62CBE793EE14F8933838C2F762BF0171(extc_pSrc, extc_pDst);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgErode");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilate(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Dilate__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_04B9BFABB4C19C808823FAA84479E42463C856F1(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilate(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Dilate__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5777CB0D5A9C5123569C569641C329D47C48B36E(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilate(EBW8Vector* pSrc, EBW8Vector* pDst)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pSrc != 0)
  {
    if(pSrc->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pSrc;
  if (pSrc == 0)
  {
    extc_pSrc = 0;
  }
  
  else
  {
    extc_pSrc = pSrc->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(pDst != 0)
  {
    if(pDst->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pDst;
  if (pDst == 0)
  {
    extc_pDst = 0;
  }
  
  else
  {
    extc_pDst = pDst->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Dilate__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EBW8VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_97A5D3ECA585EECCEC6D999E20EBB81184E77B18(extc_pSrc, extc_pDst);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDilate(EBW16Vector* pSrc, EBW16Vector* pDst)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pSrc != 0)
  {
    if(pSrc->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pSrc;
  if (pSrc == 0)
  {
    extc_pSrc = 0;
  }
  
  else
  {
    extc_pSrc = pSrc->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(pDst != 0)
  {
    if(pDst->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pDst;
  if (pDst == 0)
  {
    extc_pDst = 0;
  }
  
  else
  {
    extc_pDst = pDst->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Dilate__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EBW16VectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BEDDBC0D273A1EAED904FB8A7720F70E34536772(extc_pSrc, extc_pDst);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDilate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffDilate)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHat__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A87DF72E11210EE786E3F5ED45F11A878CF9E1B9(extc_sourceImage, extc_destinationImage, n32Iter, n32ValOffDilate);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHat__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0EDF1087541E6CA0008066BCBB69F531C538AB72(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffDilate)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHat__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32_Euresys_Open_eVision_EC24*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_18BA7A915E5674D1AAEFF3F407BD6CFC6B28886E(extc_sourceImage, extc_destinationImage, n32Iter, c24ColorOffDilate);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgBlackTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_BlackTopHat__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_15643A6CF0709358BF4410F7EFD3F3A68B101124(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgBlackTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter, OEV_INT32 n32ValOffErode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHat__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DEA36F4D02F676C27DE8ABB33D728277DB27043C(extc_sourceImage, extc_destinationImage, n32Iter, n32ValOffErode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHat(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHat__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_50E0B4B34B8073EB9C6A35661454F7158A6431C3(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter, EC24 c24ColorOffErode)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHat__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32_Euresys_Open_eVision_EC24*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6C6821991DBDCF324E769DF3D4D31267032C4E46(extc_sourceImage, extc_destinationImage, n32Iter, c24ColorOffErode);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWhiteTopHat(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 n32Iter)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_WhiteTopHat__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_DCBE862950D392935BF02DE314853607BC967085(extc_sourceImage, extc_destinationImage, n32Iter);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWhiteTopHat");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgDistance(EROIBW8* sourceImage, EImageBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Distance__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EImageBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B97CAC3428126FA44901FF0D94EF775462845B62(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgDistance");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogram(const EROIBW16* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Histogram__Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_FE25B04A1177651CF4748C489DB882F8F2E2A92D(extc_sourceImage, extc_histogram, mostSignificantBit, numberOfSignificantBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogram");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogram(const EROIBW32* sourceImage, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Histogram__Euresys_Open_eVision_EROIBW32ConstPtr_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_32853A51D6768830EDAE5B91F53B946F5800C7C8(extc_sourceImage, extc_histogram, mostSignificantBit, numberOfSignificantBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogram");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogram(const EROIBW16* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Histogram__Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_80CC68C9BEDF37C26DF74901984D08D4EEBA8FE5(extc_sourceImage, extc_mask, extc_histogram, mostSignificantBit, numberOfSignificantBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogram");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgHistogram(const EROIBW32* sourceImage, const EROIBW8* mask, EBWHistogramVector* histogram, OEV_UINT32 mostSignificantBit, OEV_UINT32 numberOfSignificantBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW32_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW32_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Histogram__Euresys_Open_eVision_EROIBW32ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EBWHistogramVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_9A85D4F1FFE720CFBC6460229EEBE4A40786F91A(extc_sourceImage, extc_mask, extc_histogram, mostSignificantBit, numberOfSignificantBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgHistogram");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgAnalyseHistogram(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AnalyseHistogram_Float32_Euresys_Open_eVision_EBWHistogramVectorPtr_Euresys_Open_eVision_EHistogramFeature_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C2E1FA8B930CE0FAF9FF826C0ACA7817991F2642(&toModify, extc_histogram, operation, minimumIndex);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAnalyseHistogram");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgAnalyseHistogram(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AnalyseHistogram_Float32_Euresys_Open_eVision_EBWHistogramVectorPtr_Euresys_Open_eVision_EHistogramFeature*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0E8E8479E6B1B4077462D1B5DC4153B0D82532CA(&toModify, extc_histogram, operation);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAnalyseHistogram");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgAnalyseHistogramBW16(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation, OEV_INT32 minimumIndex)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AnalyseHistogramBW16_Float32_Euresys_Open_eVision_EBWHistogramVectorPtr_Euresys_Open_eVision_EHistogramFeature_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_E8A9E26F7DBDAC184565517FCB88B921236B1363(&toModify, extc_histogram, operation, minimumIndex);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAnalyseHistogramBW16");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgAnalyseHistogramBW16(EBWHistogramVector* histogram, IMG_HISTOGRAM_FEATURE operation)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(histogram != 0)
  {
    if(histogram->wrappedFunctions_EBWHistogramVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_histogram;
  if (histogram == 0)
  {
    extc_histogram = 0;
  }
  
  else
  {
    extc_histogram = histogram->wrappedFunctions_EBWHistogramVector_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AnalyseHistogramBW16_Float32_Euresys_Open_eVision_EBWHistogramVectorPtr_Euresys_Open_eVision_EHistogramFeature*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_341D486B3C29315B225576FDFFA5F13A51C66504(&toModify, extc_histogram, operation);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAnalyseHistogramBW16");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRebuildFrame(EROIBW8* sourceImage, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RebuildFrame__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B6600FB4061AAA8042D4566E2E9BFB8F25F1F272(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRebuildFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRebuildFrame(EROIBW16* sourceImage, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RebuildFrame__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F44309A7DE79AB0ABA87B13088A71C775154BE9F(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRebuildFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRebuildFrame(EROIC24* sourceImage, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RebuildFrame__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A0A43B344FCEDDB5171BECDE65C8A88A4EA85803(extc_sourceImage, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRebuildFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRealignFrame(EROIBW8* sourceImage, EROIBW8* destinationImage, OEV_INT32 offset)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RealignFrame__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_C4BB6B1CF8572B6B33463FA5651DBE6235009F25(extc_sourceImage, extc_destinationImage, offset);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRealignFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRealignFrame(EROIBW16* sourceImage, EROIBW16* destinationImage, OEV_INT32 offset)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RealignFrame__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1E72228139905755D916F15D7836FCE34E6A4955(extc_sourceImage, extc_destinationImage, offset);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRealignFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRealignFrame(EROIC24* sourceImage, EROIC24* destinationImage, OEV_INT32 offset)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RealignFrame__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EA30F4BA8082E8EE1872EAE989C479A3BE10361C(extc_sourceImage, extc_destinationImage, offset);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRealignFrame");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_8EA96A5A8AD782C35FB7DC4024AC1FA891673125(extc_profile, extc_peaks, lowThreshold, highThreshold, minimumAmplitude);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0C7E98E95F04E161A10DE639CA3486457ED1F4D7(extc_profile, extc_peaks, lowThreshold, highThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5B30DB750D6F7C6937A0461BB10A5714A29C1707(extc_profile, extc_peaks, lowThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW8Vector* profile, EPeakVector* peaks)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW8Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW8Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW8VectorPtr_Euresys_Open_eVision_EPeakVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_2D7BC00AE06143E38BAEA2440B1C79F9338EF8DB(extc_profile, extc_peaks);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold, OEV_UINT32 minimumAmplitude)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_25BC5521807D7A63B93CB717F750105A7A5BBD2D(extc_profile, extc_peaks, lowThreshold, highThreshold, minimumAmplitude);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold, OEV_UINT32 highThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_CA664FF453BB1DCD9A637051AF9C05C8E9B6D5D4(extc_profile, extc_peaks, lowThreshold, highThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks, OEV_UINT32 lowThreshold)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EPeakVectorPtr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_32FF72C264098E30272540415EF25A73677CBAA9(extc_profile, extc_peaks, lowThreshold);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgGetProfilePeaks(EBW16Vector* profile, EPeakVector* peaks)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(profile != 0)
  {
    if(profile->wrappedFunctions_EBW16Vector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_profile;
  if (profile == 0)
  {
    extc_profile = 0;
  }
  
  else
  {
    extc_profile = profile->wrappedFunctions_EBW16Vector_.GetImpl();
  }
  
  if(peaks != 0)
  {
    if(peaks->wrappedFunctions_EPeakVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_peaks;
  if (peaks == 0)
  {
    extc_peaks = 0;
  }
  
  else
  {
    extc_peaks = peaks->wrappedFunctions_EPeakVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_GetProfilePeaks__Euresys_Open_eVision_EBW16VectorPtr_Euresys_Open_eVision_EPeakVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_6DEDD4B0880AECD003FA7D5166360F982356E25B(extc_profile, extc_peaks);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgGetProfilePeaks");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4B6135C238BC19A7F9167A25A8E2B9B874F2103B(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW16ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_91839455D47CA4518ED2D2915EE6C905129C83FC(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIC24ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B44FB7E071FE442DF863CA181F96A706E550DDA1(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_64F0C585F19DF66995CC9E613E8B0C8477CB577C(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4FC395002BC8557AAF0321FE4C84A7EE339FF970(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5C01D0B245FE66D691780F4CDE3A0BFEC862EA4C(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgRmsNoise(const EROIBW8* sourceImage, const EROIBW16* referenceImage, OEV_UINT32 count)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_RmsNoise_Float32_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW16ConstPtr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5C6C2EDE034004E4B54B7340512504D168E454A5(&toModify, extc_sourceImage, extc_referenceImage, count);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRmsNoise");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F01A4F0DE90AD073486BC5F487CCF2531C9D1AB7(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW16ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_90E2C5CA866AFF4457A3310BEB490911CF41A7B3(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIC24ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_77D4B7BF4A61323723F8F34B5B41B98C5B22E788(&toModify, extc_sourceImage, extc_referenceImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIBW8* sourceImage, const EROIBW8* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_F0B8F3C8001B76D7CCD51E2DF66A89AAEDFB292D(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIBW16* sourceImage, const EROIBW16* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW16ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_AE3047E3CAF1EABCB644FE9C956CCAAB0817E211(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(const EROIC24* sourceImage, const EROIC24* referenceImage, const EROIBW8* mask)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(referenceImage != 0)
  {
    if(referenceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_referenceImage;
  if (referenceImage == 0)
  {
    extc_referenceImage = 0;
  }
  
  else
  {
    extc_referenceImage = referenceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(mask != 0)
  {
    if(mask->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_mask;
  if (mask == 0)
  {
    extc_mask = 0;
  }
  
  else
  {
    extc_mask = mask->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIC24ConstPtr_Euresys_Open_eVision_EROIBW8ConstPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A946A40B4AF05E8990DBF4B804C9E8BC6747E6EB(&toModify, extc_sourceImage, extc_referenceImage, extc_mask);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 float ImgSignalNoiseRatio(EROIBW8* pSrcImage, EROIBW16* pRefImage, OEV_UINT32 un32Count)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pSrcImage != 0)
  {
    if(pSrcImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pSrcImage;
  if (pSrcImage == 0)
  {
    extc_pSrcImage = 0;
  }
  
  else
  {
    extc_pSrcImage = pSrcImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(pRefImage != 0)
  {
    if(pRefImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pRefImage;
  if (pRefImage == 0)
  {
    extc_pRefImage = 0;
  }
  
  else
  {
    extc_pRefImage = pRefImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  // BasicForeignTypeReturnDeclarationGenerator
  float toModify;
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_SignalNoiseRatio_Float32_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW16Ptr_UnsignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_A9079AE5AD15CAFEE27AD2B840EE906FC9EE8473(&toModify, extc_pSrcImage, extc_pRefImage, un32Count);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgSignalNoiseRatio");
        return float();
      }
  
    }
  
  }
  
  return toModify;
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWarp(EROIBW8* sourceImage, EROIBW8* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(warpImageX != 0)
  {
    if(warpImageX->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageX;
  if (warpImageX == 0)
  {
    extc_warpImageX = 0;
  }
  
  else
  {
    extc_warpImageX = warpImageX->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  if(warpImageY != 0)
  {
    if(warpImageY->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageY;
  if (warpImageY == 0)
  {
    extc_warpImageY = 0;
  }
  
  else
  {
    extc_warpImageY = warpImageY->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Warp__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EImageBW16Ptr_Euresys_Open_eVision_EImageBW16Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_0D2F437384C642FBB22C4C7ECF33ABA2DF34B6B0(extc_sourceImage, extc_destinationImage, extc_warpImageX, extc_warpImageY, shiftX);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWarp");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWarp(EROIBW8* sourceImage, EROIBW8* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(warpImageX != 0)
  {
    if(warpImageX->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageX;
  if (warpImageX == 0)
  {
    extc_warpImageX = 0;
  }
  
  else
  {
    extc_warpImageX = warpImageX->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  if(warpImageY != 0)
  {
    if(warpImageY->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageY;
  if (warpImageY == 0)
  {
    extc_warpImageY = 0;
  }
  
  else
  {
    extc_warpImageY = warpImageY->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Warp__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EImageBW16Ptr_Euresys_Open_eVision_EImageBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_5AFBBC2EA51E12CB713AA9696835787C6E96B270(extc_sourceImage, extc_destinationImage, extc_warpImageX, extc_warpImageY);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWarp");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWarp(EROIC24* sourceImage, EROIC24* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY, OEV_INT32 shiftX)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(warpImageX != 0)
  {
    if(warpImageX->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageX;
  if (warpImageX == 0)
  {
    extc_warpImageX = 0;
  }
  
  else
  {
    extc_warpImageX = warpImageX->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  if(warpImageY != 0)
  {
    if(warpImageY->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageY;
  if (warpImageY == 0)
  {
    extc_warpImageY = 0;
  }
  
  else
  {
    extc_warpImageY = warpImageY->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Warp__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EImageBW16Ptr_Euresys_Open_eVision_EImageBW16Ptr_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_78455BF88FD40188308B68408303C132BFA27C17(extc_sourceImage, extc_destinationImage, extc_warpImageX, extc_warpImageY, shiftX);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWarp");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgWarp(EROIC24* sourceImage, EROIC24* destinationImage, EImageBW16* warpImageX, EImageBW16* warpImageY)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(warpImageX != 0)
  {
    if(warpImageX->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageX;
  if (warpImageX == 0)
  {
    extc_warpImageX = 0;
  }
  
  else
  {
    extc_warpImageX = warpImageX->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  if(warpImageY != 0)
  {
    if(warpImageY->wrappedFunctions_EImageBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_warpImageY;
  if (warpImageY == 0)
  {
    extc_warpImageY = 0;
  }
  
  else
  {
    extc_warpImageY = warpImageY->wrappedFunctions_EImageBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Warp__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EImageBW16Ptr_Euresys_Open_eVision_EImageBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_66E9054106B69E87184899061D1108B4608819FD(extc_sourceImage, extc_destinationImage, extc_warpImageX, extc_warpImageY);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgWarp");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgContour(EROIBW8* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW8PathVector* path)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(path != 0)
  {
    if(path->wrappedFunctions_EBW8PathVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_path;
  if (path == 0)
  {
    extc_path = 0;
  }
  
  else
  {
    extc_path = path->wrappedFunctions_EBW8PathVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Contour__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EContourMode_SignedInteger32_SignedInteger32_Euresys_Open_eVision_EContourThreshold_UnsignedInteger32_Euresys_Open_eVision_EConnexity_Euresys_Open_eVision_EBW8PathVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_AB089C23E76E5E470190905109089F2637F6A628(extc_sourceImage, contourMode, startX, startY, thresholdMode, threshold, connexity, extc_path);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgContour");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgContour(EROIBW16* sourceImage, CONTOUR_MODE contourMode, OEV_INT32 startX, OEV_INT32 startY, CONTOUR_THRESHOLD thresholdMode, OEV_UINT32 threshold, CONNEXITY connexity, EBW16PathVector* path)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(path != 0)
  {
    if(path->wrappedFunctions_EBW16PathVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_path;
  if (path == 0)
  {
    extc_path = 0;
  }
  
  else
  {
    extc_path = path->wrappedFunctions_EBW16PathVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Contour__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EContourMode_SignedInteger32_SignedInteger32_Euresys_Open_eVision_EContourThreshold_UnsignedInteger32_Euresys_Open_eVision_EConnexity_Euresys_Open_eVision_EBW16PathVectorPtr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_75F017A0D5B9FCE686E40443C328248D0931AB7D(extc_sourceImage, contourMode, startX, startY, thresholdMode, threshold, connexity, extc_path);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgContour");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgLinearTransform(EROIBW8* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_LinearTransform__Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_17AD4857BFFBCA985F8270607B675E211C46F429(extc_sourceImage, Axx, Axy, Ax, Ayx, Ayy, Ay, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgLinearTransform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgLinearTransform(EROIBW16* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_LinearTransform__Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EE0B52013BDE01F974E92B3F5D1EB6534B2CC350(extc_sourceImage, Axx, Axy, Ax, Ayx, Ayy, Ay, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgLinearTransform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgLinearTransform(EROIC24* sourceImage, float Axx, float Axy, float Ax, float Ayx, float Ayy, float Ay, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_LinearTransform__Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_26B325E328D1BB96F0631D5ADF9722679D2A68CC(extc_sourceImage, Axx, Axy, Ax, Ayx, Ayy, Ay, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgLinearTransform");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgScaleRotate(EROIBW8* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW8* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ScaleRotate__Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIBW8Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D432F7521A2F57EEDFC4E627C5CFC3F2ECA4FC61(extc_sourceImage, sourceImagePivotX, sourceImagePivotY, destinationImagePivotX, destinationImagePivotY, scaleX, scaleY, rotation, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgScaleRotate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgScaleRotate(EROIC24* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIC24* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ScaleRotate__Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIC24Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4A5BFA5FF2F73985C57D53D2EED79AE2A60A64F8(extc_sourceImage, sourceImagePivotX, sourceImagePivotY, destinationImagePivotX, destinationImagePivotY, scaleX, scaleY, rotation, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgScaleRotate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgScaleRotate(EROIBW16* sourceImage, float sourceImagePivotX, float sourceImagePivotY, float destinationImagePivotX, float destinationImagePivotY, float scaleX, float scaleY, float rotation, EROIBW16* destinationImage)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_ScaleRotate__Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Euresys_Open_eVision_EROIBW16Ptr*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_12D6F2EFF16E464800CD101D593944769E6F00CC(extc_sourceImage, sourceImagePivotX, sourceImagePivotY, destinationImagePivotX, destinationImagePivotY, scaleX, scaleY, rotation, extc_destinationImage);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgScaleRotate");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_52C05CE308A83B820C39C52E2F3E87B772BEECEE(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D7DA799F14434FE7B237E202D3F41B74E2ECF37C(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float destinationImagePivot0X, float destinationImagePivot0Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_1C24420483BA6A56E1AE707C113A15B532B30B6A(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, destinationImagePivot0X, destinationImagePivot0Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_626C85E32135A4403A1AE13A8526AEBA712148D9(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_463A45087B52FE0AC82F4344F487F2E34F7285E0(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_B3E7A45FDDD3559057FE01B2AD1650F9FA4FFE1B(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_AB13FFF631F60ED64DA6F6F6F5516AC624CE9BE2(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, OEV_INT32 interpolationBits)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_SignedInteger32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_29643AF49FD6B2D86233258B040030BC83E15786(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, interpolationBits);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_79CD5EE499A2C99E95610CFB75F29D514F8009EF(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW8* sourceImage, EROIBW8* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EROIBW8Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_EF3A9CF23AB5A996C4E818F0313E361704307C9E(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIBW16* sourceImage, EROIBW16* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIBW16_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIBW16_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIBW16Ptr_Euresys_Open_eVision_EROIBW16Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_D0BCFDE26BE9DA614D1D11EF44B71B1031223942(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgRegister(EROIC24* sourceImage, EROIC24* destinationImage, float sourceImagePivot0X, float sourceImagePivot0Y, float sourceImagePivot1X, float sourceImagePivot1Y, float sourceImagePivot2X, float sourceImagePivot2Y, float destinationImagePivot0X, float destinationImagePivot0Y, float destinationImagePivot1X, float destinationImagePivot1Y, float destinationImagePivot2X, float destinationImagePivot2Y)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(sourceImage != 0)
  {
    if(sourceImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_sourceImage;
  if (sourceImage == 0)
  {
    extc_sourceImage = 0;
  }
  
  else
  {
    extc_sourceImage = sourceImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  if(destinationImage != 0)
  {
    if(destinationImage->wrappedFunctions_EROIC24_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_destinationImage;
  if (destinationImage == 0)
  {
    extc_destinationImage = 0;
  }
  
  else
  {
    extc_destinationImage = destinationImage->wrappedFunctions_EROIC24_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_Register__Euresys_Open_eVision_EROIC24Ptr_Euresys_Open_eVision_EROIC24Ptr_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32_Float32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_2DE225327415A82D238A226462A9C0684B24ECBA(extc_sourceImage, extc_destinationImage, sourceImagePivot0X, sourceImagePivot0Y, sourceImagePivot1X, sourceImagePivot1Y, sourceImagePivot2X, sourceImagePivot2Y, destinationImagePivot0X, destinationImagePivot0Y, destinationImagePivot1X, destinationImagePivot1Y, destinationImagePivot2X, destinationImagePivot2Y);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgRegister");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ImgAdaptiveThreshold(const EROIBW8* src, EROIBW8* dst, Euresys::eVision::EasyImage::AdaptiveThresholdMethod::Type method, int halfKernelSize)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(src != 0)
  {
    if(src->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_src;
  if (src == 0)
  {
    extc_src = 0;
  }
  
  else
  {
    extc_src = src->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  if(dst != 0)
  {
    if(dst->wrappedFunctions_EROIBW8_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_dst;
  if (dst == 0)
  {
    extc_dst = 0;
  }
  
  else
  {
    extc_dst = dst->wrappedFunctions_EROIBW8_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyImage_AdaptiveThreshold__Euresys_Open_eVision_EROIBW8ConstPtr_Euresys_Open_eVision_EROIBW8Ptr_Euresys_Open_eVision_EAdaptiveThresholdMethod_Integer32*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_00F6D13AFDAE0F0498E34AB578A4E45058C7BAAA(extc_src, extc_dst, method, halfKernelSize);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ImgAdaptiveThreshold");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ObjContourArea(EPathVector* pPathVector, OEV_INT32& n32Area)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pPathVector != 0)
  {
    if(pPathVector->wrappedFunctions_EPathVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pPathVector;
  if (pPathVector == 0)
  {
    extc_pPathVector = 0;
  }
  
  else
  {
    extc_pPathVector = pPathVector->wrappedFunctions_EPathVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyObject_ContourArea__Euresys_Open_eVision_EPathVectorPtr_SignedInteger32Ref*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_64CF89B88DBB312D055DCD91D3A1D4DD235610BD(extc_pPathVector, &n32Area);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ObjContourArea");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ObjContourGravityCenter(EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pPathVector != 0)
  {
    if(pPathVector->wrappedFunctions_EPathVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pPathVector;
  if (pPathVector == 0)
  {
    extc_pPathVector = 0;
  }
  
  else
  {
    extc_pPathVector = pPathVector->wrappedFunctions_EPathVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyObject_ContourGravityCenter__Euresys_Open_eVision_EPathVectorPtr_SignedInteger32Ref_Float32Ref_Float32Ref*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_4CBE75BC606E3FAC5C9C5B490414FC0A0BE97531(extc_pPathVector, &n32Area, &f32GravityCenterX, &f32GravityCenterY);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ObjContourGravityCenter");
        return;
      }
  
    }
  
  }
  
}
INLINE_LEGACY_OPEN_EVISION_1_2 void ObjContourInertia(EPathVector* pPathVector, OEV_INT32& n32Area, float& f32GravityCenterX, float& f32GravityCenterY, float& f32SigmaX, float& f32SigmaY, float& f32SigmaXY)
{
  Wrapper::Internal_Legacy_Open_eVision_1_2::RabiDeleter rabi;
  if(pPathVector != 0)
  {
    if(pPathVector->wrappedFunctions_EPathVector_.GetImpl() == 0)
      throw "Argument validity check exception";
  }
  void* extc_pPathVector;
  if (pPathVector == 0)
  {
    extc_pPathVector = 0;
  }
  
  else
  {
    extc_pPathVector = pPathVector->wrappedFunctions_EPathVector_.GetImpl();
  }
  
  void* returnedException = 0;
  /*Euresys_Open_eVision_EasyObject_ContourInertia__Euresys_Open_eVision_EPathVectorPtr_SignedInteger32Ref_Float32Ref_Float32Ref_Float32Ref_Float32Ref_Float32Ref*/
  returnedException = Wrapper::Internal_Legacy_Open_eVision_1_2::_BDA4A5D7ECFD9D09FFF4D9BCF91B403EEE56CA78(extc_pPathVector, &n32Area, &f32GravityCenterX, &f32GravityCenterY, &f32SigmaX, &f32SigmaY, &f32SigmaXY);
  ESetError(E_OK);
  if(returnedException != 0)
  {
    Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces concrete_type = Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_GetConcreteTypeName(returnedException);
    switch(concrete_type)
    {
      case Wrapper::Internal_Legacy_Open_eVision_1_2::AllClassesOrInterfaces_Euresys_Open_eVision_EException:
      {
        Euresys::eVision::Exception returnedException_Euresys_Open_eVision_EException(Wrapper::Internal_Legacy_Open_eVision_1_2::InternalConstructor_Dummy);
        returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.SetImpl(returnedException);
        Wrapper::Internal_Legacy_Open_eVision_1_2::Euresys_Open_eVision_EException_SetExternalObject(returnedException_Euresys_Open_eVision_EException.wrappedFunctions_Exception_.GetImpl() , reinterpret_cast<void*>(&returnedException_Euresys_Open_eVision_EException), Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetDestructionCallbacks().Euresys_Open_eVision_EException, Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance()->moduleID_.c_str());
        ESetError(returnedException_Euresys_Open_eVision_EException);
        ETraceError("ObjContourInertia");
        return;
      }
  
    }
  
  }
  
}

namespace Euresys
{

  namespace eVision
  {
    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Initialize()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance();
    }

    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Terminate()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::UnLoad();
    }

  }
}

namespace Euresys
{

  namespace Color
  {
    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Initialize()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance();
    }

    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Terminate()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::UnLoad();
    }

  }
}

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
  {
    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Initialize()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance();
    }

    INLINE_LEGACY_OPEN_EVISION_1_2 void Tools::Terminate()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::UnLoad();
    }

  }
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPoint>::SetImpl(EPoint* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPoint_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPoint>::GetImpl(EPoint* wrapper)
{
  return wrapper->wrappedFunctions_EPoint_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EFrame>::SetImpl(EFrame* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EFrame_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EFrame>::GetImpl(EFrame* wrapper)
{
  return wrapper->wrappedFunctions_EFrame_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECircle>::SetImpl(ECircle* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECircle_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECircle>::GetImpl(ECircle* wrapper)
{
  return wrapper->wrappedFunctions_ECircle_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ELine>::SetImpl(ELine* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ELine_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ELine>::GetImpl(ELine* wrapper)
{
  return wrapper->wrappedFunctions_ELine_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EVector>::SetImpl(EVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EVector>::GetImpl(EVector* wrapper)
{
  return wrapper->wrappedFunctions_EVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBW32Vector>::SetImpl(EBW32Vector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBW32Vector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBW32Vector>::GetImpl(EBW32Vector* wrapper)
{
  return wrapper->wrappedFunctions_EBW32Vector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<DimensionalValue>::SetImpl(DimensionalValue* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_DimensionalValue_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<DimensionalValue>::GetImpl(DimensionalValue* wrapper)
{
  return wrapper->wrappedFunctions_DimensionalValue_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EGenericROI>::SetImpl(EGenericROI* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EGenericROI_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EGenericROI>::GetImpl(EGenericROI* wrapper)
{
  return wrapper->wrappedFunctions_EGenericROI_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIBW8>::SetImpl(EROIBW8* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIBW8_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIBW8>::GetImpl(EROIBW8* wrapper)
{
  return wrapper->wrappedFunctions_EROIBW8_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageBW8>::SetImpl(EImageBW8* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageBW8_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageBW8>::GetImpl(EImageBW8* wrapper)
{
  return wrapper->wrappedFunctions_EImageBW8_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIBW32>::SetImpl(EROIBW32* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIBW32_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIBW32>::GetImpl(EROIBW32* wrapper)
{
  return wrapper->wrappedFunctions_EROIBW32_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageBW32>::SetImpl(EImageBW32* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageBW32_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageBW32>::GetImpl(EImageBW32* wrapper)
{
  return wrapper->wrappedFunctions_EImageBW32_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EHitAndMissKernel>::SetImpl(EHitAndMissKernel* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EHitAndMissKernel_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EHitAndMissKernel>::GetImpl(EHitAndMissKernel* wrapper)
{
  return wrapper->wrappedFunctions_EHitAndMissKernel_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EShape>::SetImpl(EShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EShape>::GetImpl(EShape* wrapper)
{
  return wrapper->wrappedFunctions_EShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ERectangle>::SetImpl(ERectangle* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ERectangle_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ERectangle>::GetImpl(ERectangle* wrapper)
{
  return wrapper->wrappedFunctions_ERectangle_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ERectangleShape>::SetImpl(ERectangleShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ERectangleShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ERectangleShape>::GetImpl(ERectangleShape* wrapper)
{
  return wrapper->wrappedFunctions_ERectangleShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBarCode>::SetImpl(EBarCode* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBarCode_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBarCode>::GetImpl(EBarCode* wrapper)
{
  return wrapper->wrappedFunctions_EBarCode_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBW16PathVector>::SetImpl(EBW16PathVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBW16PathVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBW16PathVector>::GetImpl(EBW16PathVector* wrapper)
{
  return wrapper->wrappedFunctions_EBW16PathVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBW16Vector>::SetImpl(EBW16Vector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBW16Vector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBW16Vector>::GetImpl(EBW16Vector* wrapper)
{
  return wrapper->wrappedFunctions_EBW16Vector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBW8PathVector>::SetImpl(EBW8PathVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBW8PathVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBW8PathVector>::GetImpl(EBW8PathVector* wrapper)
{
  return wrapper->wrappedFunctions_EBW8PathVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBW8Vector>::SetImpl(EBW8Vector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBW8Vector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBW8Vector>::GetImpl(EBW8Vector* wrapper)
{
  return wrapper->wrappedFunctions_EBW8Vector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBWHistogramVector>::SetImpl(EBWHistogramVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBWHistogramVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBWHistogramVector>::GetImpl(EBWHistogramVector* wrapper)
{
  return wrapper->wrappedFunctions_EBWHistogramVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EC24PathVector>::SetImpl(EC24PathVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EC24PathVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EC24PathVector>::GetImpl(EC24PathVector* wrapper)
{
  return wrapper->wrappedFunctions_EC24PathVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EC24Vector>::SetImpl(EC24Vector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EC24Vector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EC24Vector>::GetImpl(EC24Vector* wrapper)
{
  return wrapper->wrappedFunctions_EC24Vector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ESerializer>::SetImpl(ESerializer* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ESerializer_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ESerializer>::GetImpl(ESerializer* wrapper)
{
  return wrapper->wrappedFunctions_ESerializer_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECallbackSerializer>::SetImpl(ECallbackSerializer* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECallbackSerializer_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECallbackSerializer>::GetImpl(ECallbackSerializer* wrapper)
{
  return wrapper->wrappedFunctions_ECallbackSerializer_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECannyEdgeDetector>::SetImpl(ECannyEdgeDetector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECannyEdgeDetector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECannyEdgeDetector>::GetImpl(ECannyEdgeDetector* wrapper)
{
  return wrapper->wrappedFunctions_ECannyEdgeDetector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EChecker>::SetImpl(EChecker* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EChecker_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EChecker>::GetImpl(EChecker* wrapper)
{
  return wrapper->wrappedFunctions_EChecker_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECircleShape>::SetImpl(ECircleShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECircleShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECircleShape>::GetImpl(ECircleShape* wrapper)
{
  return wrapper->wrappedFunctions_ECircleShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECircleGauge>::SetImpl(ECircleGauge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECircleGauge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECircleGauge>::GetImpl(ECircleGauge* wrapper)
{
  return wrapper->wrappedFunctions_ECircleGauge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQuadrangle>::SetImpl(EQuadrangle* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQuadrangle_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQuadrangle>::GetImpl(EQuadrangle* wrapper)
{
  return wrapper->wrappedFunctions_EQuadrangle_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ERotatedBoundingBox>::SetImpl(ERotatedBoundingBox* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ERotatedBoundingBox_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ERotatedBoundingBox>::GetImpl(ERotatedBoundingBox* wrapper)
{
  return wrapper->wrappedFunctions_ERotatedBoundingBox_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPathVector>::SetImpl(EPathVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPathVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPathVector>::GetImpl(EPathVector* wrapper)
{
  return wrapper->wrappedFunctions_EPathVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECodedElement>::SetImpl(ECodedElement* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECodedElement_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECodedElement>::GetImpl(ECodedElement* wrapper)
{
  return wrapper->wrappedFunctions_ECodedElement_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EObject>::SetImpl(EObject* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EObject_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EObject>::GetImpl(EObject* wrapper)
{
  return wrapper->wrappedFunctions_EObject_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EHole>::SetImpl(EHole* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EHole_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EHole>::GetImpl(EHole* wrapper)
{
  return wrapper->wrappedFunctions_EHole_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EObjectRunsIterator>::SetImpl(EObjectRunsIterator* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EObjectRunsIterator_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EObjectRunsIterator>::GetImpl(EObjectRunsIterator* wrapper)
{
  return wrapper->wrappedFunctions_EObjectRunsIterator_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECodedImage>::SetImpl(ECodedImage* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECodedImage_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECodedImage>::GetImpl(ECodedImage* wrapper)
{
  return wrapper->wrappedFunctions_ECodedImage_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ECodedImage2>::SetImpl(ECodedImage2* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ECodedImage2_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ECodedImage2>::GetImpl(ECodedImage2* wrapper)
{
  return wrapper->wrappedFunctions_ECodedImage2_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EObjectSelection>::SetImpl(EObjectSelection* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EObjectSelection_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EObjectSelection>::GetImpl(EObjectSelection* wrapper)
{
  return wrapper->wrappedFunctions_EObjectSelection_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EColorLookup>::SetImpl(EColorLookup* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EColorLookup_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EColorLookup>::GetImpl(EColorLookup* wrapper)
{
  return wrapper->wrappedFunctions_EColorLookup_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EColorVector>::SetImpl(EColorVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EColorVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EColorVector>::GetImpl(EColorVector* wrapper)
{
  return wrapper->wrappedFunctions_EColorVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EDrawAdapter>::SetImpl(EDrawAdapter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EDrawAdapter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EDrawAdapter>::GetImpl(EDrawAdapter* wrapper)
{
  return wrapper->wrappedFunctions_EDrawAdapter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EFilePointerSerializer>::SetImpl(EFilePointerSerializer* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EFilePointerSerializer_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EFilePointerSerializer>::GetImpl(EFilePointerSerializer* wrapper)
{
  return wrapper->wrappedFunctions_EFilePointerSerializer_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EFileSerializer>::SetImpl(EFileSerializer* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EFileSerializer_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EFileSerializer>::GetImpl(EFileSerializer* wrapper)
{
  return wrapper->wrappedFunctions_EFileSerializer_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EFrameShape>::SetImpl(EFrameShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EFrameShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EFrameShape>::GetImpl(EFrameShape* wrapper)
{
  return wrapper->wrappedFunctions_EFrameShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIC24>::SetImpl(EROIC24* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIC24_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIC24>::GetImpl(EROIC24* wrapper)
{
  return wrapper->wrappedFunctions_EROIC24_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EGDIDrawAdapter>::SetImpl(EGDIDrawAdapter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EGDIDrawAdapter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EGDIDrawAdapter>::GetImpl(EGDIDrawAdapter* wrapper)
{
  return wrapper->wrappedFunctions_EGDIDrawAdapter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EHarrisInterestPoints>::SetImpl(EHarrisInterestPoints* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EHarrisInterestPoints_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EHarrisInterestPoints>::GetImpl(EHarrisInterestPoints* wrapper)
{
  return wrapper->wrappedFunctions_EHarrisInterestPoints_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EHarrisCornerDetector>::SetImpl(EHarrisCornerDetector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EHarrisCornerDetector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EHarrisCornerDetector>::GetImpl(EHarrisCornerDetector* wrapper)
{
  return wrapper->wrappedFunctions_EHarrisCornerDetector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIBW1>::SetImpl(EROIBW1* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIBW1_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIBW1>::GetImpl(EROIBW1* wrapper)
{
  return wrapper->wrappedFunctions_EROIBW1_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageBW1>::SetImpl(EImageBW1* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageBW1_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageBW1>::GetImpl(EImageBW1* wrapper)
{
  return wrapper->wrappedFunctions_EImageBW1_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIBW16>::SetImpl(EROIBW16* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIBW16_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIBW16>::GetImpl(EROIBW16* wrapper)
{
  return wrapper->wrappedFunctions_EROIBW16_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageBW16>::SetImpl(EImageBW16* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageBW16_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageBW16>::GetImpl(EImageBW16* wrapper)
{
  return wrapper->wrappedFunctions_EImageBW16_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIC15>::SetImpl(EROIC15* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIC15_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIC15>::GetImpl(EROIC15* wrapper)
{
  return wrapper->wrappedFunctions_EROIC15_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageC15>::SetImpl(EImageC15* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageC15_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageC15>::GetImpl(EImageC15* wrapper)
{
  return wrapper->wrappedFunctions_EImageC15_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIC16>::SetImpl(EROIC16* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIC16_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIC16>::GetImpl(EROIC16* wrapper)
{
  return wrapper->wrappedFunctions_EROIC16_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageC16>::SetImpl(EImageC16* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageC16_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageC16>::GetImpl(EImageC16* wrapper)
{
  return wrapper->wrappedFunctions_EImageC16_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageC24>::SetImpl(EImageC24* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageC24_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageC24>::GetImpl(EImageC24* wrapper)
{
  return wrapper->wrappedFunctions_EImageC24_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EROIC24A>::SetImpl(EROIC24A* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EROIC24A_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EROIC24A>::GetImpl(EROIC24A* wrapper)
{
  return wrapper->wrappedFunctions_EROIC24A_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageC24A>::SetImpl(EImageC24A* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageC24A_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageC24A>::GetImpl(EImageC24A* wrapper)
{
  return wrapper->wrappedFunctions_EImageC24A_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageEncoder>::SetImpl(EImageEncoder* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageEncoder_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageEncoder>::GetImpl(EImageEncoder* wrapper)
{
  return wrapper->wrappedFunctions_EImageEncoder_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EKernel>::SetImpl(EKernel* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EKernel_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EKernel>::GetImpl(EKernel* wrapper)
{
  return wrapper->wrappedFunctions_EKernel_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ELandmark>::SetImpl(ELandmark* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ELandmark_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ELandmark>::GetImpl(ELandmark* wrapper)
{
  return wrapper->wrappedFunctions_ELandmark_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ELineShape>::SetImpl(ELineShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ELineShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ELineShape>::GetImpl(ELineShape* wrapper)
{
  return wrapper->wrappedFunctions_ELineShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ELineGauge>::SetImpl(ELineGauge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ELineGauge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ELineGauge>::GetImpl(ELineGauge* wrapper)
{
  return wrapper->wrappedFunctions_ELineGauge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EListItem>::SetImpl(EListItem* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EListItem_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EListItem>::GetImpl(EListItem* wrapper)
{
  return wrapper->wrappedFunctions_EListItem_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EMatch>::SetImpl(EMatch* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EMatch_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EMatch>::GetImpl(EMatch* wrapper)
{
  return wrapper->wrappedFunctions_EMatch_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EMeasurementUnit>::SetImpl(EMeasurementUnit* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EMeasurementUnit_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EMeasurementUnit>::GetImpl(EMeasurementUnit* wrapper)
{
  return wrapper->wrappedFunctions_EMeasurementUnit_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EMovingAverage>::SetImpl(EMovingAverage* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EMovingAverage_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EMovingAverage>::GetImpl(EMovingAverage* wrapper)
{
  return wrapper->wrappedFunctions_EMovingAverage_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EOCR>::SetImpl(EOCR* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EOCR_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EOCR>::GetImpl(EOCR* wrapper)
{
  return wrapper->wrappedFunctions_EOCR_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EOCVText>::SetImpl(EOCVText* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EOCVText_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EOCVText>::GetImpl(EOCVText* wrapper)
{
  return wrapper->wrappedFunctions_EOCVText_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EOCVChar>::SetImpl(EOCVChar* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EOCVChar_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EOCVChar>::GetImpl(EOCVChar* wrapper)
{
  return wrapper->wrappedFunctions_EOCVChar_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EOCV>::SetImpl(EOCV* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EOCV_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EOCV>::GetImpl(EOCV* wrapper)
{
  return wrapper->wrappedFunctions_EOCV_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPointShape>::SetImpl(EPointShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPointShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPointShape>::GetImpl(EPointShape* wrapper)
{
  return wrapper->wrappedFunctions_EPointShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPeakVector>::SetImpl(EPeakVector* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPeakVector_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPeakVector>::GetImpl(EPeakVector* wrapper)
{
  return wrapper->wrappedFunctions_EPeakVector_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPointGauge>::SetImpl(EPointGauge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPointGauge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPointGauge>::GetImpl(EPointGauge* wrapper)
{
  return wrapper->wrappedFunctions_EPointGauge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EPseudoColorLookup>::SetImpl(EPseudoColorLookup* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EPseudoColorLookup_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EPseudoColorLookup>::GetImpl(EPseudoColorLookup* wrapper)
{
  return wrapper->wrappedFunctions_EPseudoColorLookup_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQuadrilateral>::SetImpl(EQuadrilateral* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQuadrilateral_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQuadrilateral>::GetImpl(EQuadrilateral* wrapper)
{
  return wrapper->wrappedFunctions_EQuadrilateral_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQRCodeGeometry>::SetImpl(EQRCodeGeometry* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQRCodeGeometry_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQRCodeGeometry>::GetImpl(EQRCodeGeometry* wrapper)
{
  return wrapper->wrappedFunctions_EQRCodeGeometry_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQRCodeDecodedStreamPart>::SetImpl(EQRCodeDecodedStreamPart* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQRCodeDecodedStreamPart_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQRCodeDecodedStreamPart>::GetImpl(EQRCodeDecodedStreamPart* wrapper)
{
  return wrapper->wrappedFunctions_EQRCodeDecodedStreamPart_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQRCodeDecodedStream>::SetImpl(EQRCodeDecodedStream* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQRCodeDecodedStream_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQRCodeDecodedStream>::GetImpl(EQRCodeDecodedStream* wrapper)
{
  return wrapper->wrappedFunctions_EQRCodeDecodedStream_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQRCode>::SetImpl(EQRCode* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQRCode_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQRCode>::GetImpl(EQRCode* wrapper)
{
  return wrapper->wrappedFunctions_EQRCode_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EQRCodeReader>::SetImpl(EQRCodeReader* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EQRCodeReader_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EQRCodeReader>::GetImpl(EQRCodeReader* wrapper)
{
  return wrapper->wrappedFunctions_EQRCodeReader_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ERectangleGauge>::SetImpl(ERectangleGauge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ERectangleGauge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ERectangleGauge>::GetImpl(ERectangleGauge* wrapper)
{
  return wrapper->wrappedFunctions_ERectangleGauge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EUnwarpingLut>::SetImpl(EUnwarpingLut* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EUnwarpingLut_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EUnwarpingLut>::GetImpl(EUnwarpingLut* wrapper)
{
  return wrapper->wrappedFunctions_EUnwarpingLut_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EWedge>::SetImpl(EWedge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EWedge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EWedge>::GetImpl(EWedge* wrapper)
{
  return wrapper->wrappedFunctions_EWedge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EWedgeShape>::SetImpl(EWedgeShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EWedgeShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EWedgeShape>::GetImpl(EWedgeShape* wrapper)
{
  return wrapper->wrappedFunctions_EWedgeShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EWedgeGauge>::SetImpl(EWedgeGauge* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EWedgeGauge_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EWedgeGauge>::GetImpl(EWedgeGauge* wrapper)
{
  return wrapper->wrappedFunctions_EWedgeGauge_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EWorldShape>::SetImpl(EWorldShape* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EWorldShape_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EWorldShape>::GetImpl(EWorldShape* wrapper)
{
  return wrapper->wrappedFunctions_EWorldShape_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EOCVObject>::SetImpl(EOCVObject* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EOCVObject_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EOCVObject>::GetImpl(EOCVObject* wrapper)
{
  return wrapper->wrappedFunctions_EOCVObject_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageSegmenter>::SetImpl(EImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageSegmenter>::GetImpl(EImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ETwoLayersImageSegmenter>::SetImpl(ETwoLayersImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ETwoLayersImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ETwoLayersImageSegmenter>::GetImpl(ETwoLayersImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_ETwoLayersImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EBinaryImageSegmenter>::SetImpl(EBinaryImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EBinaryImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EBinaryImageSegmenter>::GetImpl(EBinaryImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EBinaryImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EColorRangeThresholdSegmenter>::SetImpl(EColorRangeThresholdSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EColorRangeThresholdSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EColorRangeThresholdSegmenter>::GetImpl(EColorRangeThresholdSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EColorRangeThresholdSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EColorSingleThresholdSegmenter>::SetImpl(EColorSingleThresholdSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EColorSingleThresholdSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EColorSingleThresholdSegmenter>::GetImpl(EColorSingleThresholdSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EColorSingleThresholdSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EThreeLayersImageSegmenter>::SetImpl(EThreeLayersImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EThreeLayersImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EThreeLayersImageSegmenter>::GetImpl(EThreeLayersImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EThreeLayersImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EGrayscaleDoubleThresholdSegmenter>::SetImpl(EGrayscaleDoubleThresholdSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EGrayscaleDoubleThresholdSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EGrayscaleDoubleThresholdSegmenter>::GetImpl(EGrayscaleDoubleThresholdSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EGrayscaleDoubleThresholdSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EGrayscaleSingleThresholdSegmenter>::SetImpl(EGrayscaleSingleThresholdSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EGrayscaleSingleThresholdSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EGrayscaleSingleThresholdSegmenter>::GetImpl(EGrayscaleSingleThresholdSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EGrayscaleSingleThresholdSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EImageRangeSegmenter>::SetImpl(EImageRangeSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EImageRangeSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EImageRangeSegmenter>::GetImpl(EImageRangeSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EImageRangeSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<ELabeledImageSegmenter>::SetImpl(ELabeledImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_ELabeledImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<ELabeledImageSegmenter>::GetImpl(ELabeledImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_ELabeledImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<EReferenceImageSegmenter>::SetImpl(EReferenceImageSegmenter* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_EReferenceImageSegmenter_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<EReferenceImageSegmenter>::GetImpl(EReferenceImageSegmenter* wrapper)
{
  return wrapper->wrappedFunctions_EReferenceImageSegmenter_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::Exception>::SetImpl(Euresys::eVision::Exception* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_Exception_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::Exception>::GetImpl(Euresys::eVision::Exception* wrapper)
{
  return wrapper->wrappedFunctions_Exception_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::FoundPattern>::SetImpl(Euresys::eVision::FoundPattern* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_FoundPattern_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::FoundPattern>::GetImpl(Euresys::eVision::FoundPattern* wrapper)
{
  return wrapper->wrappedFunctions_FoundPattern_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::MatrixCode>::SetImpl(Euresys::eVision::MatrixCode* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_MatrixCode_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::MatrixCode>::GetImpl(Euresys::eVision::MatrixCode* wrapper)
{
  return wrapper->wrappedFunctions_MatrixCode_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::MatrixCodeReader>::SetImpl(Euresys::eVision::MatrixCodeReader* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_MatrixCodeReader_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::MatrixCodeReader>::GetImpl(Euresys::eVision::MatrixCodeReader* wrapper)
{
  return wrapper->wrappedFunctions_MatrixCodeReader_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::PatternFinder>::SetImpl(Euresys::eVision::PatternFinder* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_PatternFinder_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::PatternFinder>::GetImpl(Euresys::eVision::PatternFinder* wrapper)
{
  return wrapper->wrappedFunctions_PatternFinder_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::EasyMatrixCode::SearchParamsType>::SetImpl(Euresys::eVision::EasyMatrixCode::SearchParamsType* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_SearchParamsType_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::EasyMatrixCode::SearchParamsType>::GetImpl(Euresys::eVision::EasyMatrixCode::SearchParamsType* wrapper)
{
  return wrapper->wrappedFunctions_SearchParamsType_.GetImpl();
}
template<>
inline void Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::Internal::StringLegacyConvertion>::SetImpl(Euresys::eVision::Internal::StringLegacyConvertion* wrapper, void* internalObject)
{
  wrapper->wrappedFunctions_StringLegacyConvertion_.SetImpl(internalObject);
}
template<>
inline void* Euresys::eVision::Internal::Properties::Helpers<Euresys::eVision::Internal::StringLegacyConvertion>::GetImpl(Euresys::eVision::Internal::StringLegacyConvertion* wrapper)
{
  return wrapper->wrappedFunctions_StringLegacyConvertion_.GetImpl();
}
namespace Euresys
{
  namespace eVision
  {
    inline void Initialize()
    {
      Wrapper::Internal_Legacy_Open_eVision_1_2::ExternC::GetInstance();
    }

    inline void Terminate()
    {
    }

  }

}

#ifdef INTERNAL_WRAPPER_NAMESPACE
#undef INTERNAL_WRAPPER_NAMESPACE
#endif
