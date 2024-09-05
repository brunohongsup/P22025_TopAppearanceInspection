#ifndef __WRAPPER_INTERNAL_OPEN_EVISION_1_2_ENUMERATIONS_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_OPEN_EVISION_1_2_ENUMERATIONS_OPEN_EVISION_1_2_1_2__

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFramePosition
    {
      EFramePosition_On,
      EFramePosition_Inside,
      EFramePosition_Outside,
      EFramePosition_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDragHandle
    {
      EDragHandle_NoHandle,
      EDragHandle_Inside,
      EDragHandle_North,
      EDragHandle_East,
      EDragHandle_South,
      EDragHandle_West,
      EDragHandle_NorthWest,
      EDragHandle_SouthWest,
      EDragHandle_NorthEast,
      EDragHandle_SouthEast,
      EDragHandle_Center,
      EDragHandle_reserved0,
      EDragHandle_reserved1,
      EDragHandle_Org,
      EDragHandle_Mid,
      EDragHandle_End,
      EDragHandle_reserved2,
      EDragHandle_reserved3,
      EDragHandle_reserved4,
      EDragHandle_Tol0,
      EDragHandle_Tol1,
      EDragHandle_Tol_x0,
      EDragHandle_Tol_x1,
      EDragHandle_Tol_y0,
      EDragHandle_Tol_y1,
      EDragHandle_Tol_XX0,
      EDragHandle_Tol_XX1,
      EDragHandle_Tol_YY0,
      EDragHandle_Tol_YY1,
      EDragHandle_reserved5 =  EDragHandle_Org,
      EDragHandle_reserved6 =  EDragHandle_Mid,
      EDragHandle_reserved7 =  EDragHandle_End,
      EDragHandle_Tol_a0 =  EDragHandle_Tol_x0,
      EDragHandle_Tol_a1 =  EDragHandle_Tol_x1,
      EDragHandle_Tol_AA0 =  EDragHandle_Tol_y0,
      EDragHandle_Tol_AA1 =  EDragHandle_Tol_y1,
      EDragHandle_Tol_r0 =  EDragHandle_Tol_XX0,
      EDragHandle_Tol_r1 =  EDragHandle_Tol_XX1,
      EDragHandle_Tol_RR0 =  EDragHandle_Tol_YY0,
      EDragHandle_Tol_RR1 =  EDragHandle_Tol_YY1,
      EDragHandle_Edge_x =  0x100,
      EDragHandle_Edge_XX =  0x200,
      EDragHandle_Edge_y =  0x400,
      EDragHandle_Edge_YY =  0x800,
      EDragHandle_reserved8 =  0x1000,
      EDragHandle_reserved9 =  0x2000,
      EDragHandle_reserved10 =  0x4000,
      EDragHandle_reserved11 =  0x8000,
      EDragHandle_Edge_a =  EDragHandle_Edge_x,
      EDragHandle_Edge_AA =  EDragHandle_Edge_XX,
      EDragHandle_Edge_r =  EDragHandle_Edge_y,
      EDragHandle_Edge_RR =  EDragHandle_Edge_YY,
      EDragHandle_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EShapeType
    {
      EShapeType_NoShape =  1 << 0,
      EShapeType_reserved0 =  1 << 2,
      EShapeType_reserved1 =  1 << 3,
      EShapeType_reserved2 =  1 << 4,
      EShapeType_reserved3 =  1 << 5,
      EShapeType_reserved4 =  1 << 6,
      EShapeType_FrameShape =  1 << 7,
      EShapeType_WorldShape =  1 << 8,
      EShapeType_PointGauge =  1 << 9,
      EShapeType_reserved5 =  1 << 19,
      EShapeType_LineGauge =  1 << 10,
      EShapeType_CircleGauge =  1 << 11,
      EShapeType_RectangleGauge =  1 << 12,
      EShapeType_WedgeGauge =  1 << 17,
      EShapeType_reserved6 =  EShapeType_PointGauge | EShapeType_LineGauge | EShapeType_CircleGauge | EShapeType_WedgeGauge | EShapeType_RectangleGauge | EShapeType_FrameShape | EShapeType_WorldShape,
      EShapeType_reserved7 =  EShapeType_PointGauge | EShapeType_LineGauge | EShapeType_CircleGauge | EShapeType_WedgeGauge | EShapeType_RectangleGauge,
      EShapeType_reserved8 =  1 << 18,
      EShapeType_reserved9 =  -2,
      EShapeType_reserved10 =  0x7FFFFFFF,
      EShapeType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDraggingMode
    {
      EDraggingMode_Standard,
      EDraggingMode_ToEdges,
      EDraggingMode_reserved0 =  0x7FFFFFFF,
      EDraggingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDrawingMode
    {
      EDrawingMode_Nominal,
      EDrawingMode_Actual,
      EDrawingMode_SampledPaths,
      EDrawingMode_SampledPath,
      EDrawingMode_PointsInSkipRange,
      EDrawingMode_SampledPoints,
      EDrawingMode_SampledPoint,
      EDrawingMode_InvalidSampledPoints,
      EDrawingMode_Learn,
      EDrawingMode_Match,
      EDrawingMode_Position,
      EDrawingMode_Inspected,
      EDrawingMode_MaxInspected,
      EDrawingMode_reserved0 =  0x7FFFFFFF,
      EDrawingMode_reserved1 =  0x7FFFFFFF,
      EDrawingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EShapeBehavior
    {
      EShapeBehavior_Visible =  0x1,
      EShapeBehavior_Selected =  0x2,
      EShapeBehavior_Selectable =  0x4,
      EShapeBehavior_Dragable =  0x8,
      EShapeBehavior_Rotatable =  0x10,
      EShapeBehavior_Resizable =  0x20,
      EShapeBehavior_reserved0 =  0x40,
      EShapeBehavior_reserved1 =  0x80,
      EShapeBehavior_reserved2 =  0x100,
      EShapeBehavior_Labeled =  0x200,
      EShapeBehavior_Active =  0x400,
      EShapeBehavior_reserved3 =  0x800,
      EShapeBehavior_reserved4 =  0x1000,
      EShapeBehavior_Passed =  0x2000,
      EShapeBehavior_reserved5 =  0x4000,
      EShapeBehavior_reserved6 =  0x8000,
      EShapeBehavior_reserved7 =  0x10000,
      EShapeBehavior_reserved8 =  0x10000000,
      EShapeBehavior_reserved9 =  0x20000000,
      EShapeBehavior_reserved10 =  0x40000000,
      EShapeBehavior_reserved11 =  0x7FFFFFFF,
      EShapeBehavior_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ECalibrationMode
    {
      ECalibrationMode_Raw =  0x1,
      ECalibrationMode_Inverse =  0x2,
      ECalibrationMode_Scaled =  0x4,
      ECalibrationMode_Anisotropic =  0x8,
      ECalibrationMode_Skewed =  0x10,
      ECalibrationMode_Tilted =  0x20,
      ECalibrationMode_Radial =  0x40,
      ECalibrationMode_reserved0 =  ECalibrationMode_Inverse | ECalibrationMode_Scaled | ECalibrationMode_Anisotropic | ECalibrationMode_Skewed | ECalibrationMode_Tilted | ECalibrationMode_Radial | 0x80,
      ECalibrationMode_Bilinear =  0x100,
      ECalibrationMode_Quadratic =  0x200,
      ECalibrationMode_reserved1 =  ECalibrationMode_Bilinear | ECalibrationMode_Quadratic | 0x800,
      ECalibrationMode_reserved2 =  0x1000,
      ECalibrationMode_reserved3 =  0x7FFFFFFF,
      ECalibrationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EImageFileType
    {
      EImageFileType_Bmp,
      EImageFileType_Jpeg2000,
      EImageFileType_Jpeg,
      EImageFileType_Png,
      EImageFileType_Tiff,
      EImageFileType_Auto,
      EImageFileType_Euresys,
      EImageFileType_Unknown =  0x7FFFFFFF,
      EImageFileType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EImageType
    {
      EImageType_BW1,
      EImageType_BW8,
      EImageType_BW16,
      EImageType_BW32,
      EImageType_C15,
      EImageType_C16,
      EImageType_C24,
      EImageType_C24A,
      EImageType_reserved0,
      EImageType_reserved1,
      EImageType_reserved2,
      EImageType_reserved3,
      EImageType_reserved4,
      EImageType_reserved5,
      EImageType_reserved6 =  0x7FFFFFFF,
      EImageType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EColorSystem
    {
      EColorSystem_NoColor,
      EColorSystem_Bilevel,
      EColorSystem_GrayLevel,
      EColorSystem_Xyz,
      EColorSystem_Rgb,
      EColorSystem_Lab,
      EColorSystem_Luv,
      EColorSystem_Yuv,
      EColorSystem_Yiq,
      EColorSystem_Lch,
      EColorSystem_Ish,
      EColorSystem_Lsh,
      EColorSystem_Vsh,
      EColorSystem_Ysh,
      EColorSystem_reserved0 =  0x7FFFFFFF,
      EColorSystem_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EError
    {
      EError_Ok =  0,
      EError_reserved0 =  100,
      EError_EndOfImageSequence =  104,
      EError_UserDialogFailed =  105,
      EError_ImageLimitsReached =  106,
      EError_InvalidAsciiPadding =  107,
      EError_reserved1 =  1000,
      EError_InvalidOperation =  1003,
      EError_InvalidBitsPerPixel =  1004,
      EError_InvalidDataType =  1005,
      EError_InvalidDataSize =  1006,
      EError_ParametersOutOfRange =  1007,
      EError_InvalidMode =  1009,
      EError_EndSmallerThanStart =  1010,
      EError_Parameter1OutOfRange =  1011,
      EError_Parameter2OutOfRange =  1012,
      EError_Parameter3OutOfRange =  1013,
      EError_Parameter4OutOfRange =  1014,
      EError_Parameter5OutOfRange =  1015,
      EError_Parameter6OutOfRange =  1016,
      EError_Parameter7OutOfRange =  1017,
      EError_Parameter8OutOfRange =  1018,
      EError_WindowsError =  1021,
      EError_InvalidPlanesPerPixel =  1022,
      EError_BW1ImageExpected =  1023,
      EError_BW8ImageExpected =  1024,
      EError_BW16ImageExpected =  1025,
      EError_BW32ImageExpected =  1026,
      EError_TemplateCallNeedsSpecialization =  1031,
      EError_CannotCreateMutex =  1032,
      EError_CannotLockMutex =  1033,
      EError_CannotUnlockMutex =  1034,
      EError_CannotDeleteMutex =  1035,
      EError_TimeoutReached =  1036,
      EError_reserved2 =  1037,
      EError_FunctionNotFound =  1038,
      EError_CopyNotAllowed =  1040,
      EError_SingularMatrix =  1050,
      EError_DivisionByZero =  1051,
      EError_ReadonlyProperty =  1052,
      EError_UndefinedProperty =  1053,
      EError_ItemNotFound =  1054,
      EError_NextItemNotFound =  1055,
      EError_reserved3 =  1056,
      EError_reserved4 =  1057,
      EError_reserved5 =  1058,
      EError_FileAccessProblems =  1100,
      EError_FileCouldNotBeOpened =  1102,
      EError_FilwhileReading =  1103,
      EError_FilwhileWriting =  1104,
      EError_BadFileFormat =  1105,
      EError_FileCouldNotBeClosed =  1106,
      EError_UnsupportedFileFormatVersion =  1108,
      EError_MissingOrUnsupportedFileExtension =  1109,
      EError_FileIsReadOnly =  1110,
      EError_UnsupportedObjectTypeInArchive =  1111,
      EError_UnknownArchiveError =  1112,
      EError_SerializerShouldBeInReadMode =  1113,
      EError_SerializerShouldBeInWriteMode =  1114,
      EError_FileExists =  1115,
      EError_SerializerNotOpen =  1116,
      EError_UnrecognizedFileFormat =  1117,
      EError_WrongColorFormatFileFormatCombination =  1118,
      EError_FileDoesNotExist =  1119,
      EError_ObjectTooLargeToBeSerialized =  1120,
      EError_UnsupportedFileFormat =  1121,
      EError_UnsupportedTiffFormat =  1202,
      EError_UnsupportedBmpFormat =  1203,
      EError_UnsupportedJpegFormat =  1207,
      EError_BilevelImageExpected =  1208,
      EError_GrayLevelImageExpected =  1209,
      EError_ColorImageExpected =  1210,
      EError_BilevelFormatExpected =  1212,
      EError_GrayLevelFormatExpected =  1213,
      EError_ColorFormatExpected =  1214,
      EError_CannotReadJpegFile =  1215,
      EError_CannotWriteJpegFile =  1216,
      EError_WrongFileExtension =  1217,
      EError_UnableToAllocateTemporaryMemory =  1301,
      EError_BufferTooSmall =  1302,
      EError_UnableToAllocateMemory =  1303,
      EError_UnableToAccessImageMemory =  1400,
      EError_RoiTooLarge =  1401,
      EError_NotAValidImage =  1402,
      EError_ImagesNotSameSize =  1403,
      EError_ImagesNotSameBitsPerPixel =  1404,
      EError_SourceImageTooSmall =  1405,
      EError_PixelsMustHaveFiniteSize =  1409,
      EError_ConstantIsNull =  1411,
      EError_PixelNullEncountered =  1412,
      EError_ImagesMayNotOverlap =  1413,
      EError_RoiOutOfImageLimits =  1414,
      EError_RoiAlreadyHasAParent =  1415,
      EError_RoiHasNoParentImage =  1416,
      EError_CannotApplyToAnImage =  1417,
      EError_UnsupportedImageType =  1418,
      EError_InvalidImageType =  1419,
      EError_UnsupportedXserverDepth =  1420,
      EError_InconsistentRoiHierarchy =  1421,
      EError_SourceImageTooBig =  1422,
      EError_BW1RoiNotAligned =  1423,
      EError_WrongRoiType =  1424,
      EError_CyclingParenthoodNotAllowed =  1425,
      EError_WrongBitsPerRow =  1427,
      EError_MisalignedImagePtr =  1428,
      EError_UnsupportedImageTypeConversion =  1429,
      EError_ImageFromFileDoesNotFitIntoROI =  1430,
      EError_PixelCoordinatesOutOfROI =  1431,
      EError_PixelOutsidePerimeter =  1500,
      EError_PixelInsidePerimeter =  1501,
      EError_IsolatedPixel =  1502,
      EError_MaxPixelInContourReached =  1504,
      EError_NotAValidContour =  1505,
      EError_UnableToAccessVectorMemory =  1601,
      EError_NotAValidVectorDescriptor =  1602,
      EError_VectorTypeIsNotHist =  1603,
      EError_NotEnoughGroupsInVector =  1604,
      EError_InvalidVectorDataSize =  1605,
      EError_InvalidVectorDataType =  1606,
      EError_InvalidVectorType =  1607,
      EError_ResultTooBigToFitInVector =  1608,
      EError_GroupOutOfRange =  1609,
      EError_InvalidVectorGroupLength =  1611,
      EError_InvalidNumberOfVectorElements =  1613,
      EError_VectorsNotSameSize =  1615,
      EError_UnableToAccessKernelMemory =  1700,
      EError_NotAValidKernelDescriptor =  1701,
      EError_InvalidKernel =  1702,
      EError_KernelInvalidSize =  1703,
      EError_KernelNotAllocated =  1704,
      EError_BadListPosition =  1802,
      EError_ListIsEmpty =  1803,
      EError_TopOfList =  1804,
      EError_BotOfList =  1805,
      EError_ListError =  1806,
      EError_LicenseMissing =  1900,
      EError_reserved6 =  1904,
      EError_EasyImageLicenseMissing =  1905,
      EError_EasyColorLicenseMissing =  1906,
      EError_EasyObjectLicenseMissing =  1907,
      EError_EasyMatchLicenseMissing =  1908,
      EError_EasyGaugeLicenseMissing =  1909,
      EError_EasyFindLicenseMissing =  1910,
      EError_EasyOcrLicenseMissing =  1911,
      EError_EasyOcvLicenseMissing =  1912,
      EError_EasyBarCodeLicenseMissing =  1913,
      EError_EasyMatrixCodeLicenseMissing =  1914,
      EError_EasyMatchAlignementModeLicenseMissing =  1915,
      EError_EvisionStudioLicenseMissing =  1916,
      EError_CannotWriteOEMKey =  1960,
      EError_WarpImagesTooSmall =  2200,
      EError_UnsupportedImageSize =  2600,
      EError_UnknownFeature =  3003,
      EError_InvalidSelectionArgument =  3004,
      EError_SortListTooLong =  3005,
      EError_NotAValidOperationCode =  3006,
      EError_TooManyObjectsDetected =  3008,
      EError_InvalidFeature =  3012,
      EError_FeatureNotCalculated =  3013,
      EError_BadObjectNumber =  3014,
      EError_NoObjectSelected =  3015,
      EError_LowThresholdHigherThanHighThreshold =  3016,
      EError_InvalidThresholdMode =  3017,
      EError_NoImageAttached =  3100,
      EError_OutOfContinuousMode =  3101,
      EError_InvalidImageTypeForSegmenter =  3102,
      EError_LayersOverlapping =  3103,
      EError_EndOfIterator =  3104,
      EError_NoThresholdComputedYet =  3105,
      EError_FeatureNotDrawable =  3106,
      EError_OnlyApplicableToObjectSelection =  3107,
      EError_MoreThanOneLayerEncoded =  3108,
      EError_CodedElementNotSelected =  3109,
      EError_NoPatternLearnt =  6000,
      EError_PatternTooLarge =  6001,
      EError_PatternTooSmall =  6002,
      EError_NotAnEasyMatchFile =  6004,
      EError_UnsupportedEasyMatchFileVersion =  6005,
      EError_NoImageLearnt =  6006,
      EError_WrongNumberOfDegreesOfFreedom =  6007,
      EError_InsufficientContrast =  6500,
      EError_PatternTooCloseToImageBorder =  6503,
      EError_IncompatibleModes =  6505,
      EError_AllowancesAndPatterntypeNotCompatible =  6507,
      EError_ModelNotSuitedForContrastingregions =  6509,
      EError_ModelNotSuitedForConsistentedges =  6510,
      EError_NoPatternsLoaded =  7000,
      EError_NoPatternsInTheseClasses =  7001,
      EError_CharacterTooSmall =  7004,
      EError_CharacterCodeTooBig8 =  7005,
      EError_CharacterCodeTooBig16 =  7006,
      EError_MismatchingColorSystem =  9000,
      EError_ColorLookupMustBeInitialized =  9001,
      EError_UnsupportedColorTransform =  9002,
      EError_UnknownSymbolSize =  10008,
      EError_UnknownEccFamily =  10009,
      EError_UncorrectableErrors =  10011,
      EError_CouldNotLocateSymbol =  10012,
      EError_UnknownFormatId =  10013,
      EError_InvalidCrc =  10014,
      EError_CouldNotDecodeSymbol =  10021,
      EError_CouldNotLocateBarcode =  10501,
      EError_UnrecognizedSignature =  10503,
      EError_InvalidNumberOfBars =  10504,
      EError_ExtraEdgesFound =  10505,
      EError_IncoherentBarSpaceThickness =  10506,
      EError_InvalidCheckCharacter =  10507,
      EError_SymbologyNotEnabled =  10508,
      EError_NoEdgesFound =  10509,
      EError_NotAnEasyOcvFile =  11001,
      EError_UnsupportedEasyOcvFileVersion =  11002,
      EError_NotEnoughSampleImages =  11003,
      EError_NotAnEcheckerFile =  11004,
      EError_UnsupportedEcheckerFileVersion =  11005,
      EError_NotEnoughSamplesLearnt =  11007,
      EError_InvalidNormalizationMode =  11008,
      EError_ImageNotRegistered =  11009,
      EError_InvalidLearningSequence =  11010,
      EError_E_ERROR_CONTRAST_TOO_LOW =  11011,
      EError_MotherAlreadyHasThisDaughter =  12002,
      EError_ShapeAlreadyHasDaughters =  12005,
      EError_NoValidPointFound =  12007,
      EError_NotInListAttachmentMode =  12008,
      EError_NotInIndexedAttachmentMode =  12009,
      EError_UnsupportedShapeVersion =  12010,
      EError_RawCalibrationMode =  12011,
      EError_BadLandmarkLayout =  12012,
      EError_IncompatibleCalibrationModes =  12013,
      EError_NotEnoughLandmarks =  12014,
      EError_UnexpectedShapeTypeInFile =  12015,
      EError_UnsupportedModelFileVersion =  12016,
      EError_CannotAttachDetachWorldShapes =  12017,
      EError_UnexpectedWorldShapeInFile =  12018,
      EError_UnexpectedFrameShapeInFile =  12019,
      EError_UnexpectedPointShapeInFile =  12020,
      EError_UnexpectedLineShapeInFile =  12021,
      EError_UnexpectedCircleShapeInFile =  12022,
      EError_UnexpectedRectangleShapeInFile =  12023,
      EError_UnexpectedWedgeShapeInFile =  12024,
      EError_UnexpectedPointGaugeInFile =  12025,
      EError_UnexpectedLineGaugeInFile =  12026,
      EError_UnexpectedCircleGaugeInFile =  12027,
      EError_UnexpectedRectangleGaugeInFile =  12028,
      EError_UnexpectedWedgeGaugeInFile =  12029,
      EError_UnexpectedBarCodeInFile =  12031,
      EError_reserved7 =  12033,
      EError_reserved8 =  12034,
      EError_reserved9 =  12035,
      EError_AnActiveCurvedEdgeIsRequired =  12100,
      EError_BrokenWedgeShapeConstraints =  12200,
      EError_FlexnetHandleInitializationFailed =  20000,
      EError_FlexnetLoadingActivationLibraryFailed =  20000+1,
      EError_FlexnetInitializationActivationLibraryFailed =  20000+2,
      EError_FlexnetActivationLibraryMismatch =  20000+3,
      EError_FlexnetActivationLibraryUnloaded =  20000+4,
      EError_FlexnetLicensingServiceNotInstalled =  20000+5,
      EError_FlexnetNotEnoughRights =  20000+6,
      EError_FlexnetLicenseJobCreationFailed =  20000+7,
      EError_FLEXnetLicensePromptForFileFailed =  20000+8,
      EError_PixelHandling =  21000,
      EError_EmptyMorphologicalKernel =  21001,
      EError_MatrixOperation =  22000,
      EError_NonSquareMatrix =  22001,
      EError_IncompatibleMatrixSizes =  22002,
      EError_UnderdeterminedMatrix =  22003,
      EError_OverdeterminedMatrix =  22004,
      EError_PointAtInfinity =  22005,
      EError_NotEnoughCalibrationPoints =  22006,
      EError_LineAtInfinity =  22007,
      EError_UndeterminedGeometricEntity =  22008,
      EError_InternalError_000 =  30000,
      EError_InternalError_001 =  30001,
      EError_InternalError_002 =  30002,
      EError_InternalError_003 =  30003,
      EError_InternalError_004 =  30004,
      EError_InternalError_005 =  30005,
      EError_InternalError_006 =  30006,
      EError_InternalError_007 =  30007,
      EError_InternalError_008 =  30008,
      EError_InternalError_009 =  30009,
      EError_InternalError_010 =  30010,
      EError_InternalError_011 =  30011,
      EError_InternalError_012 =  30012,
      EError_InternalError_013 =  30013,
      EError_InternalError_014 =  30014,
      EError_InternalError_015 =  30015,
      EError_InternalError_016 =  30016,
      EError_InternalError_017 =  30017,
      EError_InternalError_018 =  30018,
      EError_InternalError_019 =  30019,
      EError_InternalError_020 =  30020,
      EError_InternalError_021 =  30021,
      EError_InternalError_022 =  30022,
      EError_InternalError_023 =  30023,
      EError_InternalError_024 =  30024,
      EError_InternalError_025 =  30025,
      EError_InternalError_026 =  30026,
      EError_InternalError_027 =  30027,
      EError_InternalError_028 =  30028,
      EError_InternalError_029 =  30029,
      EError_InternalError_030 =  30030,
      EError_InternalError_031 =  30031,
      EError_InternalError_032 =  30032,
      EError_InternalError_033 =  30033,
      EError_InternalError_034 =  30034,
      EError_InternalError_035 =  30035,
      EError_InternalError_036 =  30036,
      EError_InternalError_037 =  30037,
      EError_InternalError_038 =  30038,
      EError_InternalError_039 =  30039,
      EError_InternalError_040 =  30040,
      EError_InternalError_041 =  30041,
      EError_InternalError_042 =  30042,
      EError_InternalError_043 =  30043,
      EError_InternalError_044 =  30044,
      EError_InternalError_045 =  30045,
      EError_InternalError_046 =  30046,
      EError_InternalError_047 =  30047,
      EError_InternalError_048 =  30048,
      EError_InternalError_049 =  30049,
      EError_InternalError_050 =  30050,
      EError_InternalError_051 =  30051,
      EError_InternalError_052 =  30052,
      EError_InternalError_053 =  30053,
      EError_InternalError_054 =  30054,
      EError_InternalError_055 =  30055,
      EError_InternalError_056 =  30056,
      EError_InternalError_057 =  30057,
      EError_InternalError_058 =  30058,
      EError_InternalError_059 =  30059,
      EError_InternalError_060 =  30060,
      EError_InternalError_061 =  30061,
      EError_InternalError_062 =  30062,
      EError_InternalError_063 =  30063,
      EError_InternalError_064 =  30064,
      EError_InternalError_065 =  30065,
      EError_InternalError_066 =  30066,
      EError_InternalError_067 =  30067,
      EError_InternalError_068 =  30068,
      EError_InternalError_069 =  30069,
      EError_InternalError_070 =  30070,
      EError_InternalError_071 =  30071,
      EError_InternalError_072 =  30072,
      EError_InternalError_073 =  30073,
      EError_InternalError_074 =  30074,
      EError_InternalError_075 =  30075,
      EError_InternalError_076 =  30076,
      EError_InternalError_077 =  30077,
      EError_InternalError_078 =  30078,
      EError_InternalError_079 =  30079,
      EError_InternalError_080 =  30080,
      EError_InternalError_081 =  30081,
      EError_InternalError_082 =  30082,
      EError_InternalError_083 =  30083,
      EError_InternalError_084 =  30084,
      EError_InternalError_085 =  30085,
      EError_InternalError_086 =  30086,
      EError_InternalError_087 =  30087,
      EError_InternalError_088 =  30088,
      EError_InternalError_089 =  30089,
      EError_InternalError_090 =  30090,
      EError_InternalError_091 =  30091,
      EError_InternalError_092 =  30092,
      EError_InternalError_093 =  30093,
      EError_InternalError_094 =  30094,
      EError_InternalError_095 =  30095,
      EError_InternalError_096 =  30096,
      EError_InternalError_097 =  30097,
      EError_InternalError_098 =  30098,
      EError_InternalError_099 =  30099,
      EError_InternalError_100 =  30100,
      EError_CannotTraceErrors =  32765,
      EError_NotImplemented =  32766,
      EError_NullPointer =  32768,
      EError_Unknown =  0x7FFFFFFF,
      EError_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EAngleUnit
    {
      EAngleUnit_Revolutions,
      EAngleUnit_Radians,
      EAngleUnit_Degrees,
      EAngleUnit_Grades,
      EAngleUnit_reserved0 =  0x7FFFFFFF,
      EAngleUnit_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESelectionFlag
    {
      ESelectionFlag_Any,
      ESelectionFlag_True,
      ESelectionFlag_False,
      ESelectionFlag_reserved0 =  0x7FFFFFFF,
      ESelectionFlag_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDataType
    {
      EDataType_UnsignedInt =  1,
      EDataType_SignedInt =  2,
      EDataType_Float =  4,
      EDataType_reserved0 =  0x7FFFFFFF,
      EDataType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDataSize
    {
      EDataSize_BitsPerPixel1 =  0x01,
      EDataSize_BitsPerPixel8 =  0x02,
      EDataSize_BitsPerPixel16 =  0x04,
      EDataSize_BitsPerPixel32 =  0x08,
      EDataSize_BitsPerPixel64 =  0x10,
      EDataSize_BitsPerPixel24 =  0x20,
      EDataSize_BitsPerPixel96 =  0x40,
      EDataSize_reserved0 =  0x80,
      EDataSize_reserved1 =  EDataSize_BitsPerPixel1,
      EDataSize_reserved2 =  EDataSize_BitsPerPixel8,
      EDataSize_reserved3 =  EDataSize_BitsPerPixel16,
      EDataSize_reserved4 =  EDataSize_BitsPerPixel32,
      EDataSize_reserved5 =  EDataSize_BitsPerPixel64,
      EDataSize_reserved6 =  EDataSize_BitsPerPixel24,
      EDataSize_reserved7 =  EDataSize_BitsPerPixel96,
      EDataSize_reserved8 =  0x7FFFFFFF,
      EDataSize_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ERgbStandard
    {
      ERgbStandard_Ntsc,
      ERgbStandard_Pal,
      ERgbStandard_Smpte,
      ERgbStandard_reserved0 =  0x7FFFFFFF,
      ERgbStandard_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EColorQuantization
    {
      EColorQuantization_FullRange,
      EColorQuantization_Ccir601,
      EColorQuantization_reserved0 =  0x7FFFFFFF,
      EColorQuantization_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESerializerFileWriterMode
    {
      ESerializerFileWriterMode_Create,
      ESerializerFileWriterMode_Overwrite,
      ESerializerFileWriterMode_Append,
      ESerializerFileWriterMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESymbologies
    {
      ESymbologies_Standard_Symbologies =  0x1,
      ESymbologies_Additional_Symbologies =  0x2,
      ESymbologies_reserved0 =  ESymbologies_Standard_Symbologies,
      ESymbologies_reserved1 =  ESymbologies_Additional_Symbologies,
      ESymbologies_Codabar =  0x4 | ESymbologies_Standard_Symbologies,
      ESymbologies_Code128 =  0x8 | ESymbologies_Standard_Symbologies,
      ESymbologies_Code25Interleaved =  0x10 | ESymbologies_Standard_Symbologies,
      ESymbologies_Code39 =  0x20 | ESymbologies_Standard_Symbologies,
      ESymbologies_Ean128 =  0x40 | ESymbologies_Standard_Symbologies,
      ESymbologies_Ean13 =  0x80 | ESymbologies_Standard_Symbologies,
      ESymbologies_Msi =  0x100 | ESymbologies_Standard_Symbologies,
      ESymbologies_UpcA =  0x200 | ESymbologies_Standard_Symbologies,
      ESymbologies_UpcE =  0x400 | ESymbologies_Standard_Symbologies,
      ESymbologies_reserved2 =  ESymbologies_Codabar,
      ESymbologies_reserved3 =  ESymbologies_UpcE,
      ESymbologies_BinaryCode =  0x4 | ESymbologies_Additional_Symbologies,
      ESymbologies_AdsAnker =  0x8 | ESymbologies_Additional_Symbologies,
      ESymbologies_Bc412 =  0x10 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code11 =  0x20 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code13 =  0x40 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Datalogic =  0x80 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Matrix =  0x100 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Iata =  0x200 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Industry =  0x400 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Compressed =  0x800 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code25Inverted =  0x1000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code32 =  0x2000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code39Extended =  0x4000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code39Reduced =  0x8000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code93 =  0x10000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Code93Extended =  0x20000 | ESymbologies_Additional_Symbologies,
      ESymbologies_CodeBcdMatrix =  0x40000 | ESymbologies_Additional_Symbologies,
      ESymbologies_CodeCip =  0x80000 | ESymbologies_Additional_Symbologies,
      ESymbologies_CodeStk =  0x100000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Ean8 =  0x200000 | ESymbologies_Additional_Symbologies,
      ESymbologies_IbmDeltaDistanceA =  0x400000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Plessey =  0x800000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Telepen =  0x1000000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Rss14 =  0x2000000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Rss14Limited =  0x4000000 | ESymbologies_Additional_Symbologies,
      ESymbologies_Rss14Expanded =  0x8000000 | ESymbologies_Additional_Symbologies,
      ESymbologies_reserved4 =  ESymbologies_BinaryCode,
      ESymbologies_reserved5 =  ESymbologies_Rss14Expanded,
      ESymbologies_Standard =  ESymbologies_Codabar | ESymbologies_Code128 | ESymbologies_Code25Interleaved | ESymbologies_Code39 | ESymbologies_Ean128 | ESymbologies_Ean13 | ESymbologies_Msi | ESymbologies_UpcA | ESymbologies_UpcE,
      ESymbologies_Additional =  ESymbologies_BinaryCode | ESymbologies_AdsAnker | ESymbologies_Bc412 | ESymbologies_Code11 |
      ESymbologies_Code25Datalogic | ESymbologies_Code25Matrix | ESymbologies_Code25Iata | ESymbologies_Code25Industry |
      ESymbologies_Code25Compressed | ESymbologies_Code25Inverted | ESymbologies_Code32 | ESymbologies_Code39Extended |
      ESymbologies_Code39Reduced | ESymbologies_Code93 | ESymbologies_Code93Extended | ESymbologies_CodeBcdMatrix | ESymbologies_CodeCip |
      ESymbologies_CodeStk | ESymbologies_Ean8 | ESymbologies_IbmDeltaDistanceA | ESymbologies_Plessey | ESymbologies_Telepen | ESymbologies_Code13 |
      ESymbologies_Rss14| ESymbologies_Rss14Limited| ESymbologies_Rss14Expanded,
      ESymbologies_Unknown =  0x7FFFFFFF,
      ESymbologies_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ETransitionType
    {
      ETransitionType_Bw,
      ETransitionType_Wb,
      ETransitionType_BwOrWb,
      ETransitionType_Bwb,
      ETransitionType_Wbw,
      ETransitionType_reserved0 =  0x7FFFFFFF,
      ETransitionType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ETransitionChoice
    {
      ETransitionChoice_NthFromBegin,
      ETransitionChoice_NthFromEnd,
      ETransitionChoice_LargestAmplitude,
      ETransitionChoice_LargestArea,
      ETransitionChoice_Closest,
      ETransitionChoice_All,
      ETransitionChoice_reserved0 =  0x7FFFFFFF,
      ETransitionChoice_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EPlotItem
    {
      EPlotItem_Transitions =  0x1,
      EPlotItem_Peak =  0x2,
      EPlotItem_Thresholds =  0x4,
      EPlotItem_Points =  0x8,
      EPlotItem_reserved0 =  0x7FFFFFFF,
      EPlotItem_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EClippingMode
    {
      EClippingMode_CenteredNominal =  0x1,
      EClippingMode_ClippedToValidSamples =  0x2,
      EClippingMode_ClippedInNominalShape =  0x3,
      EClippingMode_reserved0 =  0x7FFFFFFF,
      EClippingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EPickingMode
    {
      EPickingMode_All,
      EPickingMode_Begin,
      EPickingMode_End,
      EPickingMode_Central,
      EPickingMode_Score,
      EPickingMode_reserved0 =  0x7FFFFFFF,
      EPickingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EArithmeticLogicOperation
    {
      EArithmeticLogicOperation_Copy,
      EArithmeticLogicOperation_Invert,
      EArithmeticLogicOperation_Add,
      EArithmeticLogicOperation_Subtract,
      EArithmeticLogicOperation_Multiply,
      EArithmeticLogicOperation_Divide,
      EArithmeticLogicOperation_Modulo,
      EArithmeticLogicOperation_ShiftLeft,
      EArithmeticLogicOperation_ShiftRight,
      EArithmeticLogicOperation_ScaledAdd,
      EArithmeticLogicOperation_ScaledSubtract,
      EArithmeticLogicOperation_ScaledMultiply,
      EArithmeticLogicOperation_ScaledDivide,
      EArithmeticLogicOperation_BitwiseAnd,
      EArithmeticLogicOperation_BitwiseOr,
      EArithmeticLogicOperation_BitwiseXor,
      EArithmeticLogicOperation_LogicalAnd,
      EArithmeticLogicOperation_LogicalOr,
      EArithmeticLogicOperation_LogicalXor,
      EArithmeticLogicOperation_Min,
      EArithmeticLogicOperation_Max,
      EArithmeticLogicOperation_SetZero,
      EArithmeticLogicOperation_SetNonZero,
      EArithmeticLogicOperation_Equal,
      EArithmeticLogicOperation_NotEqual,
      EArithmeticLogicOperation_GreaterOrEqual,
      EArithmeticLogicOperation_LesserOrEqual,
      EArithmeticLogicOperation_Greater,
      EArithmeticLogicOperation_Lesser,
      EArithmeticLogicOperation_reserved0,
      EArithmeticLogicOperation_reserved1,
      EArithmeticLogicOperation_reserved2,
      EArithmeticLogicOperation_reserved3,
      EArithmeticLogicOperation_Compare,
      EArithmeticLogicOperation_Overlay,
      EArithmeticLogicOperation_BitwiseNot =  EArithmeticLogicOperation_Invert,
      EArithmeticLogicOperation_Average =  EArithmeticLogicOperation_ScaledAdd,
      EArithmeticLogicOperation_reserved4 =  0x7FFFFFFF,
      EArithmeticLogicOperation_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EHistogramFeature
    {
      EHistogramFeature_MostFrequentPixelValue,
      EHistogramFeature_MostFrequentPixelFrequency,
      EHistogramFeature_LeastFrequentPixelValue,
      EHistogramFeature_LeastFrequentPixelFrequency,
      EHistogramFeature_SmallestPixelValue,
      EHistogramFeature_GreatestPixelValue,
      EHistogramFeature_PixelCount,
      EHistogramFeature_AveragePixelValue,
      EHistogramFeature_PixelValueStdDev,
      EHistogramFeature_reserved0 =  0x7FFFFFFF,
      EHistogramFeature_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EContourMode
    {
      EContourMode_Clockwise,
      EContourMode_ClockwiseAlwaysClosed,
      EContourMode_ClockwiseContinueIfBorder,
      EContourMode_Anticlockwise,
      EContourMode_AnticlockwiseContinueIfBorder,
      EContourMode_AnticlockwiseAlwaysClosed,
      EContourMode_reserved0 =  0x7FFFFFFF,
      EContourMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EContourThreshold
    {
      EContourThreshold_Above,
      EContourThreshold_Below,
      EContourThreshold_reserved0 =  0x7FFFFFFF,
      EContourThreshold_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EKernelType
    {
      EKernelType_WhiteSkelet =  1,
      EKernelType_BlackSkelet =  2,
      EKernelType_Edge =  3,
      EKernelType_SobelX =  4,
      EKernelType_SobelY =  5,
      EKernelType_PrewittX =  6,
      EKernelType_PrewittY =  7,
      EKernelType_Laplacian4 =  8,
      EKernelType_Laplacian8 =  9,
      EKernelType_LowPass1 =  10,
      EKernelType_LowPass2 =  11,
      EKernelType_LowPass3 =  12,
      EKernelType_HighPass1 =  13,
      EKernelType_HighPass2 =  14,
      EKernelType_Sobel =  15,
      EKernelType_Prewitt =  16,
      EKernelType_Roberts =  17,
      EKernelType_Uniform3x3 =  18,
      EKernelType_Gaussian3x3 =  19,
      EKernelType_Uniform5x5 =  20,
      EKernelType_Gaussian5x5 =  21,
      EKernelType_Gaussian7x7 =  22,
      EKernelType_Uniform7x7 =  23,
      EKernelType_LaplacianX =  24,
      EKernelType_LaplacianY =  25,
      EKernelType_Gradient =  26,
      EKernelType_GradientX =  27,
      EKernelType_GradientY =  28,
      EKernelType_Uniform =  29,
      EKernelType_Gaussian =  30,
      EKernelType_reserved0 =  0x7FFFFFFF,
      EKernelType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EKernelRectifier
    {
      EKernelRectifier_DoNotRectify,
      EKernelRectifier_KeepNegative,
      EKernelRectifier_KeepPositive,
      EKernelRectifier_Absolute,
      EKernelRectifier_reserved0 =  0x7FFFFFFF,
      EKernelRectifier_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EKernelRotation
    {
      EKernelRotation_NoRotation =  0,
      EKernelRotation_Clockwise =  1,
      EKernelRotation_Anticlockwise =  2,
      EKernelRotation_reserved0 =  0x7FFFFFFF,
      EKernelRotation_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EThresholdMode
    {
      EThresholdMode_Absolute =  -2,
      EThresholdMode_Relative =  -3,
      EThresholdMode_MinResidue =  -4,
      EThresholdMode_MaxEntropy =  -5,
      EThresholdMode_Isodata =  -6,
      EThresholdMode_reserved0 =  -7,
      EThresholdMode_reserved1 =  -8,
      EThresholdMode_reserved2 =  0x7FFFFFFF,
      EThresholdMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EReferenceNoise
    {
      EReferenceNoise_NoReference,
      EReferenceNoise_SameAsImage,
      EReferenceNoise_reserved0,
      EReferenceNoise_reserved1 =  0x7FFFFFFF,
      EReferenceNoise_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EConnexity
    {
      EConnexity_Connexity4,
      EConnexity_Connexity8,
      EConnexity_reserved0 =  0x7FFFFFFF,
      EConnexity_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESelectOption
    {
      ESelectOption_InsertAll,
      ESelectOption_InsertGreaterOrEqual,
      ESelectOption_InsertLesserOrEqual,
      ESelectOption_InsertRange,
      ESelectOption_RemoveAll,
      ESelectOption_RemoveGreaterOrEqual,
      ESelectOption_RemoveLesserOrEqual,
      ESelectOption_RemoveRange,
      ESelectOption_InsertOutOfRange,
      ESelectOption_RemoveOutOfRange,
      ESelectOption_reserved0 =  0x7FFFFFFF,
      ESelectOption_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESelectByPosition
    {
      ESelectByPosition_InsertIn,
      ESelectByPosition_InsertTouch,
      ESelectByPosition_InsertOut,
      ESelectByPosition_RemoveIn,
      ESelectByPosition_RemoveTouch,
      ESelectByPosition_RemoveOut,
      ESelectByPosition_RemoveBorder,
      ESelectByPosition_reserved0 =  0x7FFFFFFF,
      ESelectByPosition_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESortOption
    {
      ESortOption_Ascending,
      ESortOption_Descending,
      ESortOption_reserved0 =  0x7FFFFFFF,
      ESortOption_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELegacyFeature
    {
      ELegacyFeature_NoFeature =  0,
      ELegacyFeature_Class =  1,
      ELegacyFeature_RunsNumber =  2,
      ELegacyFeature_Area =  3,
      ELegacyFeature_LargestRun =  4,
      ELegacyFeature_GravityCenterX =  5,
      ELegacyFeature_GravityCenterY =  6,
      ELegacyFeature_LimitCenterX =  7,
      ELegacyFeature_LimitCenterY =  8,
      ELegacyFeature_LimitWidth =  9,
      ELegacyFeature_LimitHeight =  10,
      ELegacyFeature_Limit45CenterX =  11,
      ELegacyFeature_Limit45CenterY =  12,
      ELegacyFeature_Limit45Width =  13,
      ELegacyFeature_Limit45Height =  14,
      ELegacyFeature_ContourX =  15,
      ELegacyFeature_ContourY =  16,
      ELegacyFeature_PixelMin =  17,
      ELegacyFeature_PixelMax =  18,
      ELegacyFeature_SigmaX =  19,
      ELegacyFeature_SigmaY =  20,
      ELegacyFeature_SigmaXY =  21,
      ELegacyFeature_SigmaXX =  22,
      ELegacyFeature_SigmaYY =  23,
      ELegacyFeature_EllipseWidth =  24,
      ELegacyFeature_EllipseHeight =  25,
      ELegacyFeature_EllipseAngle =  26,
      ELegacyFeature_CentroidX =  27,
      ELegacyFeature_CentroidY =  28,
      ELegacyFeature_PixelGrayAverage =  29,
      ELegacyFeature_PixelGrayVariance =  30,
      ELegacyFeature_Limit22CenterX =  31,
      ELegacyFeature_Limit22CenterY =  32,
      ELegacyFeature_Limit22Width =  33,
      ELegacyFeature_Limit22Height =  34,
      ELegacyFeature_Limit68CenterX =  35,
      ELegacyFeature_Limit68CenterY =  36,
      ELegacyFeature_Limit68Width =  37,
      ELegacyFeature_Limit68Height =  38,
      ELegacyFeature_LimitAngledCenterX =  39,
      ELegacyFeature_LimitAngledCenterY =  40,
      ELegacyFeature_LimitAngledWidth =  41,
      ELegacyFeature_LimitAngledHeight =  42,
      ELegacyFeature_FeretCenterX =  43,
      ELegacyFeature_FeretCenterY =  44,
      ELegacyFeature_FeretWidth =  45,
      ELegacyFeature_FeretHeight =  46,
      ELegacyFeature_FeretAngle =  47,
      ELegacyFeature_ObjectNumber =  48,
      ELegacyFeature_GravityCenter =  ELegacyFeature_GravityCenterX,
      ELegacyFeature_Limit =  ELegacyFeature_LimitCenterX,
      ELegacyFeature_Limit22 =  ELegacyFeature_Limit22CenterX,
      ELegacyFeature_Limit45 =  ELegacyFeature_Limit45CenterX,
      ELegacyFeature_Limit68 =  ELegacyFeature_Limit68CenterX,
      ELegacyFeature_LimitAngled =  ELegacyFeature_LimitAngledCenterX,
      ELegacyFeature_Ellipse =  ELegacyFeature_EllipseWidth,
      ELegacyFeature_Centroid =  ELegacyFeature_CentroidX,
      ELegacyFeature_Feret =  ELegacyFeature_FeretCenterX,
      ELegacyFeature_reserved0 =  0x7FFFFFFF,
      ELegacyFeature_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EOCRClass
    {
      EOCRClass__0 =  0x1,
      EOCRClass__1 =  0x2,
      EOCRClass__2 =  0x4,
      EOCRClass__3 =  0x8,
      EOCRClass__4 =  0x10,
      EOCRClass__5 =  0x20,
      EOCRClass__6 =  0x40,
      EOCRClass__7 =  0x80,
      EOCRClass__8 =  0x100,
      EOCRClass__9 =  0x200,
      EOCRClass__10 =  0x400,
      EOCRClass__11 =  0x800,
      EOCRClass__12 =  0x1000,
      EOCRClass__13 =  0x2000,
      EOCRClass__14 =  0x4000,
      EOCRClass__15 =  0x8000,
      EOCRClass__16 =  0x10000,
      EOCRClass__17 =  0x20000,
      EOCRClass__18 =  0x40000,
      EOCRClass__19 =  0x80000,
      EOCRClass__20 =  0x100000,
      EOCRClass__21 =  0x200000,
      EOCRClass__22 =  0x400000,
      EOCRClass__23 =  0x800000,
      EOCRClass__24 =  0x1000000,
      EOCRClass__25 =  0x2000000,
      EOCRClass__26 =  0x4000000,
      EOCRClass__27 =  0x8000000,
      EOCRClass__28 =  0x10000000,
      EOCRClass__29 =  0x20000000,
      EOCRClass__30 =  0x40000000,
      EOCRClass_Digit =  EOCRClass__0,
      EOCRClass_UpperCase =  EOCRClass__1,
      EOCRClass_LowerCase =  EOCRClass__2,
      EOCRClass_Special =  EOCRClass__3,
      EOCRClass_Extended =  EOCRClass__4,
      EOCRClass_AllClasses =  0x7FFFFFFF,
      EOCRClass_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EOCRColor
    {
      EOCRColor_BlackOnWhite,
      EOCRColor_WhiteOnBlack,
      EOCRColor_DarkOnLight,
      EOCRColor_LightOnDark,
      EOCRColor_reserved0 =  0x7FFFFFFF,
      EOCRColor_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESegmentationMode
    {
      ESegmentationMode_KeepObjects,
      ESegmentationMode_RepasteObjects,
      ESegmentationMode_reserved0 =  0x7FFFFFFF,
      ESegmentationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EMatchingMode
    {
      EMatchingMode_Rms,
      EMatchingMode_Standard,
      EMatchingMode_Normalized,
      EMatchingMode_reserved0 =  0x7FFFFFFF,
      EMatchingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EShiftingMode
    {
      EShiftingMode_Chars,
      EShiftingMode_Text,
      EShiftingMode_reserved0 =  0x7FFFFFFF,
      EShiftingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ECorrelationMode
    {
      ECorrelationMode_Standard,
      ECorrelationMode_OffsetNormalized,
      ECorrelationMode_GainNormalized,
      ECorrelationMode_Normalized,
      ECorrelationMode_reserved0,
      ECorrelationMode_reserved1 =  0x7FFFFFFF,
      ECorrelationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFilteringMode
    {
      EFilteringMode_Uniform,
      EFilteringMode_LowPass,
      EFilteringMode_reserved0,
      EFilteringMode_reserved1 =  0x7FFFFFFF,
      EFilteringMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ECharCreationMode
    {
      ECharCreationMode_Group,
      ECharCreationMode_Overlap,
      ECharCreationMode_Separate,
      ECharCreationMode_reserved0 =  0x7FFFFFFF,
      ECharCreationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQualityIndicator
    {
      EQualityIndicator_Location =  0x1,
      EQualityIndicator_Area =  0x2,
      EQualityIndicator_Sum =  0x4,
      EQualityIndicator_Correlation =  0x8,
      EQualityIndicator_Contrast =  0x10,
      EQualityIndicator_reserved0 =  0x7FFFFFFF,
      EQualityIndicator_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDiagnostic
    {
      EDiagnostic_CharNotFound =  0x1,
      EDiagnostic_CharOverprinting =  0x4,
      EDiagnostic_CharUnderprinting =  0x8,
      EDiagnostic_CharMismatch =  0x10,
      EDiagnostic_TextNotFound =  0x2,
      EDiagnostic_TextOverprinting =  0x20,
      EDiagnostic_TextUnderprinting =  0x40,
      EDiagnostic_TextMismatch =  0x80,
      EDiagnostic_BadContrast =  0x100,
      EDiagnostic_reserved0 =  0x200,
      EDiagnostic_reserved1 =  0x400,
      EDiagnostic_Undefined =  0x7FFFFFFF,
      EDiagnostic_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELocationMode
    {
      ELocationMode_Raw,
      ELocationMode_Binarized,
      ELocationMode_Gradient,
      ELocationMode_Laplacian,
      ELocationMode_reserved0 =  0x7FFFFFFF,
      ELocationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ENormalizationMode
    {
      ENormalizationMode_NoNormalization,
      ENormalizationMode_Moments,
      ENormalizationMode_Threshold,
      ENormalizationMode_reserved0 =  0x7FFFFFFF,
      ENormalizationMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELearningMode
    {
      ELearningMode_Reset,
      ELearningMode_Template,
      ELearningMode_Average,
      ELearningMode_RmsDeviation,
      ELearningMode_AbsDeviation,
      ELearningMode_Ready,
      ELearningMode_reserved0,
      ELearningMode_reserved1,
      ELearningMode_reserved2 =  0x7FFFFFFF,
      ELearningMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ERoiHit
    {
      ERoiHit_NoHit,
      ERoiHit_Learn_0,
      ERoiHit_Learn_1,
      ERoiHit_Match_0,
      ERoiHit_Match_1,
      ERoiHit_Inspect,
      ERoiHit_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDegreesOfFreedom
    {
      EDegreesOfFreedom_Translation =  0x1,
      EDegreesOfFreedom_Rotation =  0x2,
      EDegreesOfFreedom_Scaling =  0x4,
      EDegreesOfFreedom_reserved0 =  0x7FFFFFFF,
      EDegreesOfFreedom_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELearnParam
    {
      ELearnParam_LogicalSize =  0x0,
      ELearnParam_ContrastType =  0x1,
      ELearnParam_Flipping =  0x2,
      ELearnParam_Family =  0x3,
      ELearnParam_NumItems =  0x4,
      ELearnParam_reserved0 =  0x7FFFFFFF,
      ELearnParam_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELogicalSize
    {
      ELogicalSize__9x9,
      ELogicalSize__11x11,
      ELogicalSize__13x13,
      ELogicalSize__15x15,
      ELogicalSize__17x17,
      ELogicalSize__19x19,
      ELogicalSize__21x21,
      ELogicalSize__23x23,
      ELogicalSize__25x25,
      ELogicalSize__27x27,
      ELogicalSize__29x29,
      ELogicalSize__31x31,
      ELogicalSize__33x33,
      ELogicalSize__35x35,
      ELogicalSize__37x37,
      ELogicalSize__39x39,
      ELogicalSize__41x41,
      ELogicalSize__43x43,
      ELogicalSize__45x45,
      ELogicalSize__47x47,
      ELogicalSize__49x49,
      ELogicalSize__10x10,
      ELogicalSize__12x12,
      ELogicalSize__14x14,
      ELogicalSize__16x16,
      ELogicalSize__18x18,
      ELogicalSize__20x20,
      ELogicalSize__22x22,
      ELogicalSize__24x24,
      ELogicalSize__26x26,
      ELogicalSize__32x32,
      ELogicalSize__36x36,
      ELogicalSize__40x40,
      ELogicalSize__44x44,
      ELogicalSize__48x48,
      ELogicalSize__52x52,
      ELogicalSize__64x64,
      ELogicalSize__72x72,
      ELogicalSize__80x80,
      ELogicalSize__88x88,
      ELogicalSize__96x96,
      ELogicalSize__104x104,
      ELogicalSize__120x120,
      ELogicalSize__132x132,
      ELogicalSize__144x144,
      ELogicalSize__8x18,
      ELogicalSize__8x32,
      ELogicalSize__12x26,
      ELogicalSize__12x36,
      ELogicalSize__16x36,
      ELogicalSize__16x48,
      ELogicalSize_Unknown =  0x7FFFFFFF,
      ELogicalSize_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFamily
    {
      EFamily_ECC000,
      EFamily_ECC050,
      EFamily_ECC080,
      EFamily_ECC100,
      EFamily_ECC140,
      EFamily_ECC200,
      EFamily_Unknown =  0x7FFFFFFF,
      EFamily_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EMatchContrastMode
    {
      EMatchContrastMode_Normal,
      EMatchContrastMode_Inverse,
      EMatchContrastMode_Any,
      EMatchContrastMode_reserved0 =  0x7FFFFFFF,
      EMatchContrastMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EMatrixCodeContrastMode
    {
      EMatrixCodeContrastMode_BlackOnWhite =  0,
      EMatrixCodeContrastMode_WhiteOnBlack =  1,
      EMatrixCodeContrastMode_reserved0 =  0x7FFFFFFF,
      EMatrixCodeContrastMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFindContrastMode
    {
      EFindContrastMode_Normal =  0,
      EFindContrastMode_Inverse =  1,
      EFindContrastMode_Any =  2,
      EFindContrastMode_PointByPointNormal =  3,
      EFindContrastMode_PointByPointInverse =  4,
      EFindContrastMode_PointByPointAny =  5,
      EFindContrastMode_reserved0 =  EFindContrastMode_PointByPointAny,
      EFindContrastMode_Unknown =  0x7FFFFFFF,
      EFindContrastMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFlipping
    {
      EFlipping_Yes,
      EFlipping_No,
      EFlipping_Unknown =  0x7FFFFFFF,
      EFlipping_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EAdaptiveThresholdMethod
    {
      EAdaptiveThresholdMethod_Mean =  0,
      EAdaptiveThresholdMethod_Median =  1,
      EAdaptiveThresholdMethod_Middle =  2,
      EAdaptiveThresholdMethod_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EHarrisThresholdingMode
    {
      EHarrisThresholdingMode_Relative,
      EHarrisThresholdingMode_Absolute,
      EHarrisThresholdingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ECannyThresholdingMode
    {
      ECannyThresholdingMode_Relative,
      ECannyThresholdingMode_Absolute,
      ECannyThresholdingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EReductionMode
    {
      EReductionMode_Auto,
      EReductionMode_Manual,
      EReductionMode_Unknown =  0x7FFFFFFF,
      EReductionMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EPatternType
    {
      EPatternType_ConsistentEdges,
      EPatternType_ContrastingRegions,
      EPatternType_ThinStructure,
      EPatternType_Unknown =  0x7FFFFFFF,
      EPatternType_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EThinStructureMode
    {
      EThinStructureMode_Auto,
      EThinStructureMode_Dark,
      EThinStructureMode_Bright,
      EThinStructureMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ELocalSearchMode
    {
      ELocalSearchMode_Basic,
      ELocalSearchMode_ExtendedTranslation,
      ELocalSearchMode_ExtendedAll,
      ELocalSearchMode_ExtendedMore,
      ELocalSearchMode_Reserved =  0x7FFFFFFF,
      ELocalSearchMode_reserved0 =  ELocalSearchMode_Reserved,
      ELocalSearchMode_Custom =  ELocalSearchMode_Reserved,
      ELocalSearchMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EFeature
    {
      EFeature_ElementIndex,
      EFeature_LayerIndex,
      EFeature_RunCount,
      EFeature_Area,
      EFeature_LargestRun,
      EFeature_ContourX,
      EFeature_ContourY,
      EFeature_LeftLimit,
      EFeature_RightLimit,
      EFeature_TopLimit,
      EFeature_BottomLimit,
      EFeature_GravityCenterX,
      EFeature_GravityCenterY,
      EFeature_BoundingBoxCenterX,
      EFeature_BoundingBoxCenterY,
      EFeature_BoundingBoxWidth,
      EFeature_BoundingBoxHeight,
      EFeature_FeretBox22CenterX,
      EFeature_FeretBox22CenterY,
      EFeature_FeretBox22Width,
      EFeature_FeretBox22Height,
      EFeature_FeretBox45CenterX,
      EFeature_FeretBox45CenterY,
      EFeature_FeretBox45Width,
      EFeature_FeretBox45Height,
      EFeature_FeretBox68CenterX,
      EFeature_FeretBox68CenterY,
      EFeature_FeretBox68Width,
      EFeature_FeretBox68Height,
      EFeature_MinimumEnclosingRectangleCenterX,
      EFeature_MinimumEnclosingRectangleCenterY,
      EFeature_MinimumEnclosingRectangleWidth,
      EFeature_MinimumEnclosingRectangleHeight,
      EFeature_MinimumEnclosingRectangleAngle,
      EFeature_SigmaX,
      EFeature_SigmaY,
      EFeature_SigmaXX,
      EFeature_SigmaXY,
      EFeature_SigmaYY,
      EFeature_EllipseWidth,
      EFeature_EllipseHeight,
      EFeature_EllipseAngle,
      EFeature_Eccentricity,
      EFeature_FeretBoxCenterX,
      EFeature_FeretBoxCenterY,
      EFeature_FeretBoxWidth,
      EFeature_FeretBoxHeight,
      EFeature_PixelMin,
      EFeature_PixelMax,
      EFeature_WeightedGravityCenterX,
      EFeature_WeightedGravityCenterY,
      EFeature_PixelGrayAverage,
      EFeature_PixelGrayVariance,
      EFeature_PixelGrayDeviation,
      EFeature_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESingleThresholdMode
    {
      ESingleThresholdMode_Less,
      ESingleThresholdMode_LessEqual,
      ESingleThresholdMode_Equal,
      ESingleThresholdMode_GreaterEqual,
      ESingleThresholdMode_Greater,
      ESingleThresholdMode_Different,
      ESingleThresholdMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDoubleThresholdMode
    {
      EDoubleThresholdMode_Inside,
      EDoubleThresholdMode_Outside,
      EDoubleThresholdMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ERectangleMode
    {
      ERectangleMode_EntirelyInside,
      ERectangleMode_EntirelyOutside,
      ERectangleMode_InsideOrOnBorder,
      ERectangleMode_OutsideOrOnBorder,
      ERectangleMode_OnBorder,
      ERectangleMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EGrayscaleSingleThreshold
    {
      EGrayscaleSingleThreshold_Absolute,
      EGrayscaleSingleThreshold_Relative,
      EGrayscaleSingleThreshold_MinResidue,
      EGrayscaleSingleThreshold_MaxEntropy,
      EGrayscaleSingleThreshold_IsoData,
      EGrayscaleSingleThreshold_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESegmentationMethod
    {
      ESegmentationMethod_Custom =  0,
      ESegmentationMethod_BinaryImage =  1,
      ESegmentationMethod_ColorRangeThreshold =  2,
      ESegmentationMethod_ColorSingleThreshold =  3,
      ESegmentationMethod_GrayscaleDoubleThreshold =  4,
      ESegmentationMethod_GrayscaleSingleThreshold =  5,
      ESegmentationMethod_ImageRange =  6,
      ESegmentationMethod_ReferenceImage =  7,
      ESegmentationMethod_LabeledImage =  8,
      ESegmentationMethod_reserved0 =  9,
      ESegmentationMethod_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum ESortDirection
    {
      ESortDirection_Ascending,
      ESortDirection_Descending,
      ESortDirection_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EEncodingConnexity
    {
      EEncodingConnexity_Four,
      EEncodingConnexity_Eight,
      EEncodingConnexity_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EDrawableFeature
    {
      EDrawableFeature_BoundingBox,
      EDrawableFeature_ConvexHull,
      EDrawableFeature_Ellipse,
      EDrawableFeature_FeretBox22,
      EDrawableFeature_FeretBox45,
      EDrawableFeature_FeretBox68,
      EDrawableFeature_GravityCenter,
      EDrawableFeature_MinimumEnclosingRectangle,
      EDrawableFeature_FeretBox,
      EDrawableFeature_WeightedGravityCenter,
      EDrawableFeature_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EHitAndMissValue
    {
      EHitAndMissValue_Background,
      EHitAndMissValue_DontCare,
      EHitAndMissValue_Foreground,
      EHitAndMissValue_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodeModel
    {
      EQRCodeModel_Model1,
      EQRCodeModel_Model2,
      EQRCodeModel_MicroQR,
      EQRCodeModel_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodeLevel
    {
      EQRCodeLevel_L,
      EQRCodeLevel_M,
      EQRCodeLevel_Q,
      EQRCodeLevel_H,
      EQRCodeLevel_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodeCodingMode
    {
      EQRCodeCodingMode_Basic,
      EQRCodeCodingMode_Fnc1_Gs1,
      EQRCodeCodingMode_Fnc1_Aim,
      EQRCodeCodingMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodeEncoding
    {
      EQRCodeEncoding_Numeric,
      EQRCodeEncoding_Alphanumeric,
      EQRCodeEncoding_Byte,
      EQRCodeEncoding_Kanji,
      EQRCodeEncoding_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodeScanPrecision
    {
      EQRCodeScanPrecision_Automatic,
      EQRCodeScanPrecision_Fine,
      EQRCodeScanPrecision_Coarse,
      EQRCodeScanPrecision_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EQRCodePerspectiveMode
    {
      EQRCodePerspectiveMode_Basic,
      EQRCodePerspectiveMode_Improved,
      EQRCodePerspectiveMode_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {
    enum EStockMeasurementUnit
    {
      EStockMeasurementUnit_None,
      EStockMeasurementUnit_um,
      EStockMeasurementUnit_mm,
      EStockMeasurementUnit_cm,
      EStockMeasurementUnit_dm,
      EStockMeasurementUnit_m,
      EStockMeasurementUnit_dam,
      EStockMeasurementUnit_hm,
      EStockMeasurementUnit_km,
      EStockMeasurementUnit_mil,
      EStockMeasurementUnit_inch,
      EStockMeasurementUnit_foot,
      EStockMeasurementUnit_yard,
      EStockMeasurementUnit_mile,
      EStockMeasurementUnit_reserved = (unsigned int)~0
    };
  }
}

namespace Wrapper
{

  namespace Internal_Open_eVision_1_2
  {
    enum InternalConstructor
    {
      InternalConstructor_Dummy,
      InternalConstructor_reserved = (unsigned int)~0
    };
  }
}

namespace Euresys
{

  namespace Open_eVision_1_2
  {

    namespace LicenseFeatures
    {
      enum Features
      {
        EasyGauge =  1,
        EasyColor =  2,
        EasyImage =  4,
        EasyObject =  8,
        EasyBarCode =  16,
        EasyMatch =  32,
        eVisionStudio =  64,
        EasyFind =  128,
        EasyMatrixCode =  256,
        EasyOCR =  512,
        EasyOCV =  1024,
        EasyQRCode =  2048,
        Features_reserved = (unsigned int)~0
      };
    }
  }
}
#endif // __WRAPPER_INTERNAL_OPEN_EVISION_1_2_ENUMERATIONS_OPEN_EVISION_1_2_1_2__
