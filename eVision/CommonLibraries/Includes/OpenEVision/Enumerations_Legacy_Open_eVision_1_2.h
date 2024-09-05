#ifndef __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_ENUMERATIONS_LEGACY_OPEN_EVISION_1_2_1_2__
#define __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_ENUMERATIONS_LEGACY_OPEN_EVISION_1_2_1_2__
enum E_FRAME_POSITION
{
  EFramePosition_On,
  E_FRAME_ON = EFramePosition_On,
  EFramePosition_Inside,
  E_FRAME_INSIDE = EFramePosition_Inside,
  EFramePosition_Outside,
  E_FRAME_OUTSIDE = EFramePosition_Outside,
  E_FRAME_POSITION_reserved = (unsigned int)~0
};
enum E_HANDLES
{
  EDragHandle_NoHandle,
  E_HANDLE_NONE = EDragHandle_NoHandle,
  EDragHandle_Inside,
  E_HANDLE_INSIDE = EDragHandle_Inside,
  EDragHandle_North,
  E_HANDLE_NORTH = EDragHandle_North,
  EDragHandle_East,
  E_HANDLE_EAST = EDragHandle_East,
  EDragHandle_South,
  E_HANDLE_SOUTH = EDragHandle_South,
  EDragHandle_West,
  E_HANDLE_WEST = EDragHandle_West,
  EDragHandle_NorthWest,
  E_HANDLE_NORTH_WEST = EDragHandle_NorthWest,
  EDragHandle_SouthWest,
  E_HANDLE_SOUTH_WEST = EDragHandle_SouthWest,
  EDragHandle_NorthEast,
  E_HANDLE_NORTH_EAST = EDragHandle_NorthEast,
  EDragHandle_SouthEast,
  E_HANDLE_SOUTH_EAST = EDragHandle_SouthEast,
  EDragHandle_Center,
  INS_HANDLE_CENTER = EDragHandle_Center,
  E_HANDLES_reserved0,
  E_HANDLES_reserved1,
  EDragHandle_Org,
  INS_HANDLE_ORG = EDragHandle_Org,
  EDragHandle_Mid,
  INS_HANDLE_MID = EDragHandle_Mid,
  EDragHandle_End,
  INS_HANDLE_END = EDragHandle_End,
  E_HANDLES_reserved2,
  E_HANDLES_reserved3,
  E_HANDLES_reserved4,
  EDragHandle_Tol0,
  INS_HANDLE_TOL_0 = EDragHandle_Tol0,
  EDragHandle_Tol1,
  INS_HANDLE_TOL_1 = EDragHandle_Tol1,
  EDragHandle_Tol_x0,
  INS_HANDLE_TOL_x0 = EDragHandle_Tol_x0,
  EDragHandle_Tol_x1,
  INS_HANDLE_TOL_x1 = EDragHandle_Tol_x1,
  EDragHandle_Tol_y0,
  INS_HANDLE_TOL_y0 = EDragHandle_Tol_y0,
  EDragHandle_Tol_y1,
  INS_HANDLE_TOL_y1 = EDragHandle_Tol_y1,
  EDragHandle_Tol_XX0,
  INS_HANDLE_TOL_X0 = EDragHandle_Tol_XX0,
  EDragHandle_Tol_XX1,
  INS_HANDLE_TOL_X1 = EDragHandle_Tol_XX1,
  EDragHandle_Tol_YY0,
  INS_HANDLE_TOL_Y0 = EDragHandle_Tol_YY0,
  EDragHandle_Tol_YY1,
  INS_HANDLE_TOL_Y1 = EDragHandle_Tol_YY1,
  E_HANDLES_reserved5 =  EDragHandle_Org,
  E_HANDLES_reserved6 =  EDragHandle_Mid,
  E_HANDLES_reserved7 =  EDragHandle_End,
  EDragHandle_Tol_a0 =  EDragHandle_Tol_x0,
  INS_HANDLE_TOL_a0 =  EDragHandle_Tol_x0,
  EDragHandle_Tol_a1 =  EDragHandle_Tol_x1,
  INS_HANDLE_TOL_a1 =  EDragHandle_Tol_x1,
  EDragHandle_Tol_AA0 =  EDragHandle_Tol_y0,
  INS_HANDLE_TOL_A0 =  EDragHandle_Tol_y0,
  EDragHandle_Tol_AA1 =  EDragHandle_Tol_y1,
  INS_HANDLE_TOL_A1 =  EDragHandle_Tol_y1,
  EDragHandle_Tol_r0 =  EDragHandle_Tol_XX0,
  INS_HANDLE_TOL_r0 =  EDragHandle_Tol_XX0,
  EDragHandle_Tol_r1 =  EDragHandle_Tol_XX1,
  INS_HANDLE_TOL_r1 =  EDragHandle_Tol_XX1,
  EDragHandle_Tol_RR0 =  EDragHandle_Tol_YY0,
  INS_HANDLE_TOL_R0 =  EDragHandle_Tol_YY0,
  EDragHandle_Tol_RR1 =  EDragHandle_Tol_YY1,
  INS_HANDLE_TOL_R1 =  EDragHandle_Tol_YY1,
  EDragHandle_Edge_x =  0x100,
  INS_HANDLE_EDGE_x =  0x100,
  EDragHandle_Edge_XX =  0x200,
  INS_HANDLE_EDGE_X =  0x200,
  EDragHandle_Edge_y =  0x400,
  INS_HANDLE_EDGE_y =  0x400,
  EDragHandle_Edge_YY =  0x800,
  INS_HANDLE_EDGE_Y =  0x800,
  E_HANDLES_reserved8 =  0x1000,
  E_HANDLES_reserved9 =  0x2000,
  E_HANDLES_reserved10 =  0x4000,
  E_HANDLES_reserved11 =  0x8000,
  EDragHandle_Edge_a =  EDragHandle_Edge_x,
  INS_HANDLE_EDGE_a =  EDragHandle_Edge_x,
  EDragHandle_Edge_AA =  EDragHandle_Edge_XX,
  INS_HANDLE_EDGE_A =  EDragHandle_Edge_XX,
  EDragHandle_Edge_r =  EDragHandle_Edge_y,
  INS_HANDLE_EDGE_r =  EDragHandle_Edge_y,
  EDragHandle_Edge_RR =  EDragHandle_Edge_YY,
  INS_HANDLE_EDGE_R =  EDragHandle_Edge_YY,
  E_HANDLES_reserved = (unsigned int)~0
};
enum INS_SHAPE_TYPES
{
  EShapeType_NoShape =  1 << 0,
  INS_NO_SHAPE =  1 << 0,
  INS_SHAPE_TYPES_reserved0 =  1 << 2,
  INS_SHAPE_TYPES_reserved1 =  1 << 3,
  INS_SHAPE_TYPES_reserved2 =  1 << 4,
  INS_SHAPE_TYPES_reserved3 =  1 << 5,
  INS_SHAPE_TYPES_reserved4 =  1 << 6,
  EShapeType_FrameShape =  1 << 7,
  INS_FRAME_SHAPE =  1 << 7,
  EShapeType_WorldShape =  1 << 8,
  EShapeType_PointGauge =  1 << 9,
  INS_POINT_GAUGE =  1 << 9,
  EShapeType_PointGauge2 =  1 << 19,
  INS_SHAPE_TYPES_reserved5 =  1 << 19,
  EShapeType_LineGauge =  1 << 10,
  INS_LINE_GAUGE =  1 << 10,
  EShapeType_CircleGauge =  1 << 11,
  INS_CIRCLE_GAUGE =  1 << 11,
  EShapeType_RectangleGauge =  1 << 12,
  INS_RECTANGLE_GAUGE =  1 << 12,
  EShapeType_WedgeGauge =  1 << 17,
  INS_WEDGE_GAUGE =  1 << 17,
  INS_SHAPE_TYPES_reserved6 =  EShapeType_PointGauge | EShapeType_LineGauge | EShapeType_CircleGauge | EShapeType_WedgeGauge | EShapeType_RectangleGauge | EShapeType_FrameShape | EShapeType_WorldShape,
  INS_SHAPE_TYPES_reserved7 =  EShapeType_PointGauge | EShapeType_LineGauge | EShapeType_CircleGauge | EShapeType_WedgeGauge | EShapeType_RectangleGauge,
  INS_SHAPE_TYPES_reserved8 =  1 << 18,
  INS_SHAPE_TYPES_reserved9 =  -2,
  INS_SHAPE_TYPES_reserved10 =  0x7FFFFFFF,
  INS_SHAPE_TYPES_reserved = (unsigned int)~0
};
enum INS_DRAGGING_MODES
{
  EDraggingMode_Standard,
  INS_DRAG_STANDARD = EDraggingMode_Standard,
  EDraggingMode_ToEdges,
  INS_DRAG_TO_EDGES = EDraggingMode_ToEdges,
  INS_DRAGGING_MODES_reserved0 =  0x7FFFFFFF,
  INS_DRAGGING_MODES_reserved = (unsigned int)~0
};
enum INS_DRAWING_MODES
{
  EDrawingMode_Nominal,
  INS_DRAW_NOMINAL = EDrawingMode_Nominal,
  EDrawingMode_Actual,
  INS_DRAW_ACTUAL = EDrawingMode_Actual,
  EDrawingMode_SampledPaths,
  INS_DRAW_SAMPLED_PATHS = EDrawingMode_SampledPaths,
  EDrawingMode_SampledPath,
  INS_DRAW_SAMPLED_PATH = EDrawingMode_SampledPath,
  EDrawingMode_PointsInSkipRange,
  INS_DRAW_POINTS_IN_SKIP_RANGE = EDrawingMode_PointsInSkipRange,
  EDrawingMode_SampledPoints,
  INS_DRAW_SAMPLED_POINTS = EDrawingMode_SampledPoints,
  EDrawingMode_SampledPoint,
  INS_DRAW_SAMPLED_POINT = EDrawingMode_SampledPoint,
  EDrawingMode_InvalidSampledPoints,
  INS_DRAW_INVALID_SAMPLED_POINTS = EDrawingMode_InvalidSampledPoints,
  EDrawingMode_Learn,
  EDrawingMode_Match,
  EDrawingMode_Position,
  EDrawingMode_Inspected,
  EDrawingMode_MaxInspected,
  INS_DRAWING_MODES_reserved0 =  0x7FFFFFFF,
  INS_DRAWING_MODES_reserved1 =  0x7FFFFFFF,
  INS_DRAWING_MODES_reserved = (unsigned int)~0
};
enum INS_SHAPE_BEHAVIOR
{
  EShapeBehavior_Visible =  0x1,
  INS_VISIBLE =  0x1,
  EShapeBehavior_Selected =  0x2,
  INS_SELECTED =  0x2,
  EShapeBehavior_Selectable =  0x4,
  INS_SELECTABLE =  0x4,
  EShapeBehavior_Dragable =  0x8,
  INS_DRAGABLE =  0x8,
  EShapeBehavior_Rotatable =  0x10,
  INS_ROTATABLE =  0x10,
  EShapeBehavior_Resizable =  0x20,
  INS_RESIZABLE =  0x20,
  INS_SHAPE_BEHAVIOR_reserved0 =  0x40,
  INS_SHAPE_BEHAVIOR_reserved1 =  0x80,
  INS_SHAPE_BEHAVIOR_reserved2 =  0x100,
  EShapeBehavior_Labeled =  0x200,
  INS_LABELED =  0x200,
  EShapeBehavior_Active =  0x400,
  INS_ACTIVE =  0x400,
  INS_SHAPE_BEHAVIOR_reserved3 =  0x800,
  INS_SHAPE_BEHAVIOR_reserved4 =  0x1000,
  EShapeBehavior_Passed =  0x2000,
  INS_PASSED =  0x2000,
  INS_SHAPE_BEHAVIOR_reserved5 =  0x4000,
  INS_SHAPE_BEHAVIOR_reserved6 =  0x8000,
  INS_SHAPE_BEHAVIOR_reserved7 =  0x10000,
  INS_SHAPE_BEHAVIOR_reserved8 =  0x10000000,
  INS_SHAPE_BEHAVIOR_reserved9 =  0x20000000,
  INS_SHAPE_BEHAVIOR_reserved10 =  0x40000000,
  INS_SHAPE_BEHAVIOR_reserved11 =  0x7FFFFFFF,
  INS_SHAPE_BEHAVIOR_reserved = (unsigned int)~0
};
enum INS_CALIBRATION_MODES
{
  ECalibrationMode_Raw =  0x1,
  INS_CALIBRATION_RAW =  0x1,
  ECalibrationMode_Inverse =  0x2,
  INS_CALIBRATION_INVERSE =  0x2,
  ECalibrationMode_Scaled =  0x4,
  INS_CALIBRATION_SCALED =  0x4,
  ECalibrationMode_Anisotropic =  0x8,
  INS_CALIBRATION_ANISOTROPIC =  0x8,
  ECalibrationMode_Skewed =  0x10,
  INS_CALIBRATION_SKEWED =  0x10,
  ECalibrationMode_Tilted =  0x20,
  INS_CALIBRATION_TILTED =  0x20,
  ECalibrationMode_Radial =  0x40,
  INS_CALIBRATION_RADIAL =  0x40,
  INS_CALIBRATION_MODES_reserved0 =  ECalibrationMode_Inverse | ECalibrationMode_Scaled | ECalibrationMode_Anisotropic | ECalibrationMode_Skewed | ECalibrationMode_Tilted | ECalibrationMode_Radial | 0x80,
  ECalibrationMode_Bilinear =  0x100,
  INS_CALIBRATION_BILINEAR =  0x100,
  ECalibrationMode_Quadratic =  0x200,
  INS_CALIBRATION_QUADRATIC =  0x200,
  INS_CALIBRATION_MODES_reserved1 =  ECalibrationMode_Bilinear | ECalibrationMode_Quadratic | 0x800,
  INS_CALIBRATION_MODES_reserved2 =  0x1000,
  INS_CALIBRATION_MODES_reserved3 =  0x7FFFFFFF,
  INS_CALIBRATION_MODES_reserved = (unsigned int)~0
};
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
enum E_IMAGE_TYPES
{
  EImageType_BW1,
  E_BW1 = EImageType_BW1,
  EImageType_BW8,
  E_BW8 = EImageType_BW8,
  EImageType_BW16,
  E_BW16 = EImageType_BW16,
  EImageType_BW32,
  E_BW32 = EImageType_BW32,
  EImageType_C15,
  E_C15 = EImageType_C15,
  EImageType_C16,
  E_C16 = EImageType_C16,
  EImageType_C24,
  E_C24 = EImageType_C24,
  EImageType_C24A,
  E_C24A = EImageType_C24A,
  E_IMAGE_TYPES_reserved0,
  E_IMAGE_TYPES_reserved1,
  E_IMAGE_TYPES_reserved2,
  E_IMAGE_TYPES_reserved3,
  E_IMAGE_TYPES_reserved4,
  E_IMAGE_TYPES_reserved5,
  E_IMAGE_TYPES_reserved6 =  0x7FFFFFFF,
  E_IMAGE_TYPES_reserved = (unsigned int)~0
};
enum E_COLOR_SYSTEM
{
  EColorSystem_NoColor,
  E_COLOR_SYSTEM_NONE = EColorSystem_NoColor,
  EColorSystem_Bilevel,
  E_COLOR_SYSTEM_BILEVEL = EColorSystem_Bilevel,
  EColorSystem_GrayLevel,
  E_COLOR_SYSTEM_GRAY_LEVEL = EColorSystem_GrayLevel,
  EColorSystem_Xyz,
  E_COLOR_SYSTEM_XYZ = EColorSystem_Xyz,
  EColorSystem_Rgb,
  E_COLOR_SYSTEM_RGB = EColorSystem_Rgb,
  EColorSystem_Lab,
  E_COLOR_SYSTEM_LAB = EColorSystem_Lab,
  EColorSystem_Luv,
  E_COLOR_SYSTEM_LUV = EColorSystem_Luv,
  EColorSystem_Yuv,
  E_COLOR_SYSTEM_YUV = EColorSystem_Yuv,
  EColorSystem_Yiq,
  E_COLOR_SYSTEM_YIQ = EColorSystem_Yiq,
  EColorSystem_Lch,
  E_COLOR_SYSTEM_LCH = EColorSystem_Lch,
  EColorSystem_Ish,
  E_COLOR_SYSTEM_ISH = EColorSystem_Ish,
  EColorSystem_Lsh,
  E_COLOR_SYSTEM_LSH = EColorSystem_Lsh,
  EColorSystem_Vsh,
  E_COLOR_SYSTEM_VSH = EColorSystem_Vsh,
  EColorSystem_Ysh,
  E_COLOR_SYSTEM_YSH = EColorSystem_Ysh,
  E_COLOR_SYSTEM_reserved0 =  0x7FFFFFFF,
  E_COLOR_SYSTEM_reserved = (unsigned int)~0
};
enum E_ERRORS
{
  EError_Ok =  0,
  E_OK =  0,
  E_ERRORS_reserved0 =  100,
  EError_EndOfImageSequence =  104,
  E_INFO_END_OF_IMAGE_SEQUENCE =  104,
  EError_UserDialogFailed =  105,
  E_INFO_USER_DIALOG_FAILED =  105,
  EError_ImageLimitsReached =  106,
  E_INFO_IMAGE_LIMITS_REACHED =  106,
  EError_InvalidAsciiPadding =  107,
  E_INFO_INVALID_ASCII_PADDING =  107,
  E_ERRORS_reserved1 =  1000,
  EError_InvalidOperation =  1003,
  E_ERROR_INVALID_OPERATION =  1003,
  EError_InvalidBitsPerPixel =  1004,
  E_ERROR_INVALID_BITS_PER_PIXEL =  1004,
  EError_InvalidDataType =  1005,
  E_ERROR_INVALID_DATA_TYPE =  1005,
  EError_InvalidDataSize =  1006,
  E_ERROR_INVALID_DATA_SIZE =  1006,
  EError_ParametersOutOfRange =  1007,
  E_ERROR_PARAMETERS_OUT_OF_RANGE =  1007,
  EError_InvalidMode =  1009,
  E_ERROR_INVALID_MODE =  1009,
  EError_EndSmallerThanStart =  1010,
  E_ERROR_END_SMALLER_THAN_START =  1010,
  EError_Parameter1OutOfRange =  1011,
  E_ERROR_PARAMETER_1_OUT_OF_RANGE =  1011,
  EError_Parameter2OutOfRange =  1012,
  E_ERROR_PARAMETER_2_OUT_OF_RANGE =  1012,
  EError_Parameter3OutOfRange =  1013,
  E_ERROR_PARAMETER_3_OUT_OF_RANGE =  1013,
  EError_Parameter4OutOfRange =  1014,
  E_ERROR_PARAMETER_4_OUT_OF_RANGE =  1014,
  EError_Parameter5OutOfRange =  1015,
  E_ERROR_PARAMETER_5_OUT_OF_RANGE =  1015,
  EError_Parameter6OutOfRange =  1016,
  E_ERROR_PARAMETER_6_OUT_OF_RANGE =  1016,
  EError_Parameter7OutOfRange =  1017,
  E_ERROR_PARAMETER_7_OUT_OF_RANGE =  1017,
  EError_Parameter8OutOfRange =  1018,
  E_ERROR_PARAMETER_8_OUT_OF_RANGE =  1018,
  EError_WindowsError =  1021,
  E_ERROR_WINDOWS_ERROR =  1021,
  EError_InvalidPlanesPerPixel =  1022,
  E_ERROR_INVALID_PLANES_PER_PIXEL =  1022,
  EError_BW1ImageExpected =  1023,
  E_ERROR_BW1_IMAGE_EXPECTED =  1023,
  EError_BW8ImageExpected =  1024,
  E_ERROR_BW8_IMAGE_EXPECTED =  1024,
  EError_BW16ImageExpected =  1025,
  E_ERROR_BW16_IMAGE_EXPECTED =  1025,
  EError_BW32ImageExpected =  1026,
  E_ERROR_BW32_IMAGE_EXPECTED =  1026,
  EError_TemplateCallNeedsSpecialization =  1031,
  E_ERROR_TEMPLATE_CALL_NEEDS_SPECIALIZATION =  1031,
  EError_CannotCreateMutex =  1032,
  E_ERROR_CANNOT_CREATE_MUTEX =  1032,
  EError_CannotLockMutex =  1033,
  E_ERROR_CANNOT_LOCK_MUTEX =  1033,
  EError_CannotUnlockMutex =  1034,
  E_ERROR_CANNOT_UNLOCK_MUTEX =  1034,
  EError_CannotDeleteMutex =  1035,
  E_ERROR_CANNOT_DELETE_MUTEX =  1035,
  EError_TimeoutReached =  1036,
  E_ERROR_TIMEOUT_REACHED =  1036,
  EError_NotSupportedUnderLinux =  1037,
  E_ERRORS_reserved2 =  1037,
  EError_FunctionNotFound =  1038,
  E_ERROR_FUNCTION_NOT_FOUND =  1038,
  EError_CopyNotAllowed =  1040,
  EError_SingularMatrix =  1050,
  E_ERROR_SINGULAR_MATRIX =  1050,
  EError_DivisionByZero =  1051,
  E_ERROR_DIVISION_BY_ZERO =  1051,
  EError_ReadonlyProperty =  1052,
  E_ERROR_READONLY_PROPERTY =  1052,
  EError_UndefinedProperty =  1053,
  E_ERROR_UNDEFINED_PROPERTY =  1053,
  EError_ItemNotFound =  1054,
  EError_NextItemNotFound =  1055,
  E_ERRORS_reserved3 =  1056,
  E_ERRORS_reserved4 =  1057,
  E_ERRORS_reserved5 =  1058,
  EError_FileAccessProblems =  1100,
  E_ERROR_FILE_ACCESS_PROBLEMS =  1100,
  EError_FileCouldNotBeOpened =  1102,
  E_ERROR_FILE_COULD_NOT_BE_OPENED =  1102,
  EError_FilwhileReading =  1103,
  E_ERROR_FILE_ERROR_WHILE_READING =  1103,
  EError_FilwhileWriting =  1104,
  E_ERROR_FILE_ERROR_WHILE_WRITING =  1104,
  EError_BadFileFormat =  1105,
  E_ERROR_BAD_FILE_FORMAT =  1105,
  EError_FileCouldNotBeClosed =  1106,
  E_ERROR_FILE_COULD_NOT_BE_CLOSED =  1106,
  EError_UnsupportedFileFormatVersion =  1108,
  E_ERROR_UNSUPPORTED_FILE_FORMAT_VERSION =  1108,
  EError_MissingOrUnsupportedFileExtension =  1109,
  E_ERROR_MISSING_OR_UNSUPPORTED_FILE_EXTENSION =  1109,
  EError_FileIsReadOnly =  1110,
  E_ERROR_FILE_IS_READ_ONLY =  1110,
  EError_UnsupportedObjectTypeInArchive =  1111,
  E_ERROR_UNSUPPORTED_OBJECT_TYPE_IN_ARCHIVE =  1111,
  EError_UnknownArchiveError =  1112,
  E_ERROR_UNKNOWN_ARCHIVE_ERROR =  1112,
  EError_SerializerShouldBeInReadMode =  1113,
  E_ERROR_SERIALIZER_SHOULD_BE_IN_READ_MODE =  1113,
  EError_SerializerShouldBeInWriteMode =  1114,
  E_ERROR_SERIALIZER_SHOULD_BE_IN_WRITE_MODE =  1114,
  EError_FileExists =  1115,
  E_ERROR_FILE_EXISTS =  1115,
  EError_SerializerNotOpen =  1116,
  E_ERROR_SERIALIZER_NOT_OPEN =  1116,
  EError_UnrecognizedFileFormat =  1117,
  EError_WrongColorFormatFileFormatCombination =  1118,
  EError_FileDoesNotExist =  1119,
  EError_ObjectTooLargeToBeSerialized =  1120,
  EError_UnsupportedFileFormat =  1121,
  EError_UnsupportedTiffFormat =  1202,
  E_ERROR_UNSUPPORTED_TIFF_FORMAT =  1202,
  EError_UnsupportedBmpFormat =  1203,
  E_ERROR_UNSUPPORTED_BMP_FORMAT =  1203,
  EError_UnsupportedJpegFormat =  1207,
  E_ERROR_UNSUPPORTED_JPEG_FORMAT =  1207,
  EError_BilevelImageExpected =  1208,
  E_ERROR_BILEVEL_IMAGE_EXPECTED =  1208,
  EError_GrayLevelImageExpected =  1209,
  E_ERROR_GRAY_LEVEL_IMAGE_EXPECTED =  1209,
  EError_ColorImageExpected =  1210,
  E_ERROR_COLOR_IMAGE_EXPECTED =  1210,
  EError_BilevelFormatExpected =  1212,
  E_ERROR_BILEVEL_FORMAT_EXPECTED =  1212,
  EError_GrayLevelFormatExpected =  1213,
  E_ERROR_GRAY_LEVEL_FORMAT_EXPECTED =  1213,
  EError_ColorFormatExpected =  1214,
  E_ERROR_COLOR_FORMAT_EXPECTED =  1214,
  EError_CannotReadJpegFile =  1215,
  E_ERROR_CANNOT_READ_JPEG_FILE =  1215,
  EError_CannotWriteJpegFile =  1216,
  E_ERROR_CANNOT_WRITE_JPEG_FILE =  1216,
  EError_WrongFileExtension =  1217,
  EError_UnableToAllocateTemporaryMemory =  1301,
  E_ERROR_UNABLE_TO_ALLOCATE_TEMPORARY_MEMORY =  1301,
  EError_BufferTooSmall =  1302,
  E_ERROR_INSUFFICIENT_ALLOC_MEM =  1302,
  EError_UnableToAllocateMemory =  1303,
  E_ERROR_UNABLE_TO_ALLOCATE_MEMORY =  1303,
  EError_UnableToAccessImageMemory =  1400,
  E_ERROR_UNABLE_TO_ACCESS_IMAGE_MEMORY =  1400,
  EError_RoiTooLarge =  1401,
  E_ERROR_ROI_TOO_LARGE =  1401,
  EError_NotAValidImage =  1402,
  E_ERROR_NOT_A_VALID_IMAGE =  1402,
  EError_ImagesNotSameSize =  1403,
  E_ERROR_IMAGES_NOT_SAME_SIZE =  1403,
  EError_ImagesNotSameBitsPerPixel =  1404,
  E_ERROR_IMAGES_NOT_SAME_BITS_PER_PIXEL =  1404,
  EError_SourceImageTooSmall =  1405,
  E_ERROR_SOURCE_IMAGE_TOO_SMALL =  1405,
  EError_PixelsMustHaveFiniteSize =  1409,
  E_ERROR_PIXELS_MUST_HAVE_FINITE_SIZE =  1409,
  EError_ConstantIsNull =  1411,
  E_ERROR_CONSTANT_IS_NULL =  1411,
  EError_PixelNullEncountered =  1412,
  E_ERROR_PIXEL_NULL_ENCOUNTERED =  1412,
  EError_ImagesMayNotOverlap =  1413,
  E_ERROR_IMAGES_MAY_NOT_OVERLAP =  1413,
  EError_RoiOutOfImageLimits =  1414,
  E_ERROR_ROI_OUT_OF_PARENT_LIMITS =  1414,
  EError_RoiAlreadyHasAParent =  1415,
  E_ERROR_ROI_ALREADY_HAS_A_PARENT =  1415,
  EError_RoiHasNoParentImage =  1416,
  E_ERROR_ROI_HAS_NO_PARENT_IMAGE =  1416,
  EError_CannotApplyToAnImage =  1417,
  E_ERROR_CANNOT_APPLY_TO_AN_IMAGE =  1417,
  EError_UnsupportedImageType =  1418,
  E_ERROR_UNSUPPORTED_IMAGE_TYPE =  1418,
  EError_InvalidImageType =  1419,
  E_ERROR_INVALID_IMAGE_TYPE =  1419,
  EError_UnsupportedXserverDepth =  1420,
  E_ERROR_UNSUPPORTED_XSERVER_DEPTH =  1420,
  EError_InconsistentRoiHierarchy =  1421,
  E_ERROR_INCONSISTENT_ROI_HIERARCHY =  1421,
  EError_SourceImageTooBig =  1422,
  E_ERROR_SOURCE_IMAGE_TOO_BIG =  1422,
  EError_BW1RoiNotAligned =  1423,
  E_ERROR_BW1_ROI_NOT_ALIGNED =  1423,
  EError_WrongRoiType =  1424,
  EError_CyclingParenthoodNotAllowed =  1425,
  EError_WrongBitsPerRow =  1427,
  EError_MisalignedImagePtr =  1428,
  EError_UnsupportedImageTypeConversion =  1429,
  EError_ImageFromFileDoesNotFitIntoROI =  1430,
  EError_PixelCoordinatesOutOfROI =  1431,
  EError_PixelOutsidePerimeter =  1500,
  E_ERROR_PIXEL_OUTSIDE_PERIMETER =  1500,
  EError_PixelInsidePerimeter =  1501,
  E_ERROR_PIXEL_INSIDE_PERIMETER =  1501,
  EError_IsolatedPixel =  1502,
  E_ERROR_ISOLATED_PIXEL =  1502,
  EError_MaxPixelInContourReached =  1504,
  E_ERROR_MAX_PIXEL_IN_CONTOUR_REACHED =  1504,
  EError_NotAValidContour =  1505,
  E_ERROR_NOT_A_VALID_CONTOUR =  1505,
  EError_UnableToAccessVectorMemory =  1601,
  E_ERROR_UNABLE_TO_ACCESS_VECTOR_MEMORY =  1601,
  EError_NotAValidVectorDescriptor =  1602,
  E_ERROR_NOT_A_VALID_VECTOR_DESCRIPTOR =  1602,
  EError_VectorTypeIsNotHist =  1603,
  E_ERROR_VECTOR_TYPE_IS_NOT_HIST =  1603,
  EError_NotEnoughGroupsInVector =  1604,
  E_ERROR_NOT_ENOUGH_GROUPS_IN_VECTOR =  1604,
  EError_InvalidVectorDataSize =  1605,
  E_ERROR_INVALID_VECTOR_DATA_SIZE =  1605,
  EError_InvalidVectorDataType =  1606,
  E_ERROR_INVALID_VECTOR_DATA_TYPE =  1606,
  EError_InvalidVectorType =  1607,
  E_ERROR_INVALID_VECTOR_TYPE =  1607,
  EError_ResultTooBigToFitInVector =  1608,
  E_ERROR_RESULT_TOO_BIG_TO_FIT_IN_VECTOR =  1608,
  EError_GroupOutOfRange =  1609,
  E_ERROR_GROUP_OUT_OF_RANGE =  1609,
  EError_InvalidVectorGroupLength =  1611,
  E_ERROR_INVALID_VECTOR_GROUP_LENGTH =  1611,
  EError_InvalidNumberOfVectorElements =  1613,
  E_ERROR_INVALID_NUMBER_OF_VECTOR_ELEMENTS =  1613,
  EError_VectorsNotSameSize =  1615,
  E_ERROR_VECTORS_NOT_SAME_SIZE =  1615,
  EError_UnableToAccessKernelMemory =  1700,
  E_ERROR_UNABLE_TO_ACCESS_KERNEL_MEMORY =  1700,
  EError_NotAValidKernelDescriptor =  1701,
  E_ERROR_NOT_A_VALID_KERNEL_DESCRIPTOR =  1701,
  EError_InvalidKernel =  1702,
  E_ERROR_INVALID_KERNEL =  1702,
  EError_KernelInvalidSize =  1703,
  E_ERROR_KERNEL_INVALID_SIZE =  1703,
  EError_KernelNotAllocated =  1704,
  E_ERROR_KERNEL_NOT_ALLOCATED =  1704,
  EError_BadListPosition =  1802,
  E_ERROR_BAD_LIST_POSITION =  1802,
  EError_ListIsEmpty =  1803,
  E_ERROR_LIST_IS_EMPTY =  1803,
  EError_TopOfList =  1804,
  E_ERROR_TOP_OF_LIST =  1804,
  EError_BotOfList =  1805,
  E_ERROR_BOT_OF_LIST =  1805,
  EError_ListError =  1806,
  E_ERROR_LIST_ERROR =  1806,
  EError_LicenseMissing =  1900,
  E_ERROR_LICENSE_MISSING =  1900,
  E_ERRORS_reserved6 =  1904,
  EError_EasyImageLicenseMissing =  1905,
  E_ERROR_EASY_IMAGE_LICENSE_MISSING =  1905,
  EError_EasyColorLicenseMissing =  1906,
  E_ERROR_EASY_COLOR_LICENSE_MISSING =  1906,
  EError_EasyObjectLicenseMissing =  1907,
  E_ERROR_EASY_OBJECT_LICENSE_MISSING =  1907,
  EError_EasyMatchLicenseMissing =  1908,
  E_ERROR_EASY_MATCH_LICENSE_MISSING =  1908,
  EError_EasyGaugeLicenseMissing =  1909,
  E_ERROR_EASY_GAUGE_LICENSE_MISSING =  1909,
  EError_EasyFindLicenseMissing =  1910,
  E_ERROR_EASY_FIND_LICENSE_MISSING =  1910,
  EError_EasyOcrLicenseMissing =  1911,
  E_ERROR_EASY_OCR_LICENSE_MISSING =  1911,
  EError_EasyOcvLicenseMissing =  1912,
  E_ERROR_EASY_OCV_LICENSE_MISSING =  1912,
  EError_EasyBarCodeLicenseMissing =  1913,
  E_ERROR_EASY_BAR_CODE_LICENSE_MISSING =  1913,
  EError_EasyMatrixCodeLicenseMissing =  1914,
  E_ERROR_EASY_MATRIX_CODE_LICENSE_MISSING =  1914,
  EError_EasyMatchAlignementModeLicenseMissing =  1915,
  E_ERROR_EASY_MATCH_ALIGNEMENT_MODE_LICENSE_MISSING =  1915,
  EError_EvisionStudioLicenseMissing =  1916,
  E_ERROR_EVISION_STUDIO_LICENSE_MISSING =  1916,
  EError_CannotWriteOEMKey =  1960,
  EError_WarpImagesTooSmall =  2200,
  E_ERROR_WARP_IMAGES_TOO_SMALL =  2200,
  EError_UnsupportedImageSize =  2600,
  E_ERROR_UNSUPPORTED_IMAGE_SIZE =  2600,
  EError_UnknownFeature =  3003,
  E_ERROR_UNKNOWN_FEATURE =  3003,
  EError_InvalidSelectionArgument =  3004,
  E_ERROR_INVALID_SELECTION_ARGUMENT =  3004,
  EError_SortListTooLong =  3005,
  E_ERROR_SORT_LIST_TOO_LONG =  3005,
  EError_NotAValidOperationCode =  3006,
  E_ERROR_NOT_A_VALID_OPERATION_CODE =  3006,
  EError_TooManyObjectsDetected =  3008,
  E_ERROR_TOO_MANY_OBJECTS_DETECTED =  3008,
  EError_InvalidFeature =  3012,
  E_ERROR_INVALID_FEATURE =  3012,
  EError_FeatureNotCalculated =  3013,
  E_ERROR_FEATURE_NOT_CALCULATED =  3013,
  EError_BadObjectNumber =  3014,
  E_ERROR_BAD_OBJECT_NUMBER =  3014,
  EError_NoObjectSelected =  3015,
  E_ERROR_NO_OBJECT_SELECTED =  3015,
  EError_LowThresholdHigherThanHighThreshold =  3016,
  E_ERROR_LOW_THRESHOLD_HIGHER_THAN_HIGH_THRESHOLD =  3016,
  EError_InvalidThresholdMode =  3017,
  E_ERROR_INVALID_THRESHOLD_MODE =  3017,
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
  E_ERROR_NO_PATTERN_LEARNT =  6000,
  EError_PatternTooLarge =  6001,
  E_ERROR_PATTERN_TOO_LARGE =  6001,
  EError_PatternTooSmall =  6002,
  E_ERROR_PATTERN_TOO_SMALL =  6002,
  EError_NotAnEasyMatchFile =  6004,
  E_ERROR_NOT_AN_EASY_MATCH_FILE =  6004,
  EError_UnsupportedEasyMatchFileVersion =  6005,
  E_ERROR_UNSUPPORTED_EASY_MATCH_FILE_VERSION =  6005,
  EError_NoImageLearnt =  6006,
  E_ERROR_NO_IMAGE_LEARNT =  6006,
  EError_WrongNumberOfDegreesOfFreedom =  6007,
  E_ERROR_WRONG_NUMBER_OF_DEGREES_OF_FREEDOM =  6007,
  EError_InsufficientContrast =  6500,
  E_ERROR_INSUFFICIENT_CONTRAST =  6500,
  EError_PatternTooCloseToImageBorder =  6503,
  E_ERROR_PATTERN_TOO_CLOSE_TO_IMAGE_BORDER =  6503,
  EError_IncompatibleModes =  6505,
  E_ERROR_INCOMPATIBLE_MODES =  6505,
  EError_AllowancesAndPatterntypeNotCompatible =  6507,
  E_ERROR_ALLOWANCES_AND_PATTERNTYPE_NOT_COMPATIBLE =  6507,
  EError_ModelNotSuitedForContrastingregions =  6509,
  E_ERROR_MODEL_NOT_SUITED_FOR_CONTRASTINGREGIONS =  6509,
  EError_ModelNotSuitedForConsistentedges =  6510,
  E_ERROR_MODEL_NOT_SUITED_FOR_CONSISTENTEDGES =  6510,
  EError_NoPatternsLoaded =  7000,
  E_ERROR_NO_PATTERNS_LOADED =  7000,
  EError_NoPatternsInTheseClasses =  7001,
  E_ERROR_NO_PATTERNS_IN_THESE_CLASSES =  7001,
  EError_CharacterTooSmall =  7004,
  E_ERROR_CHARACTER_TOO_SMALL =  7004,
  EError_CharacterCodeTooBig8 =  7005,
  E_ERROR_CHARACTER_TOO_BIG_8 =  7005,
  EError_CharacterCodeTooBig16 =  7006,
  E_ERROR_CHARACTER_TOO_BIG_16 =  7006,
  EError_MismatchingColorSystem =  9000,
  E_ERROR_MISMATCHING_COLOR_SYSTEM =  9000,
  EError_ColorLookupMustBeInitialized =  9001,
  E_ERROR_COLOR_LOOKUP_MUST_BE_INITIALIZED =  9001,
  EError_UnsupportedColorTransform =  9002,
  E_ERROR_UNSUPPORTED_COLOR_TRANSFORM =  9002,
  EError_UnknownSymbolSize =  10008,
  E_ERROR_UNKNOWN_SYMBOL_SIZE =  10008,
  EError_UnknownEccFamily =  10009,
  E_ERROR_UNKNOWN_ECC_FAMILY =  10009,
  EError_UncorrectableErrors =  10011,
  E_ERROR_UNCORRECTABLE_ERRORS =  10011,
  EError_CouldNotLocateSymbol =  10012,
  E_ERROR_COULD_NOT_LOCATE_SYMBOL =  10012,
  EError_UnknownFormatId =  10013,
  E_ERROR_UNKNOWN_FORMAT_ID =  10013,
  EError_InvalidCrc =  10014,
  E_ERROR_INVALID_CRC =  10014,
  EError_CouldNotDecodeSymbol =  10021,
  E_ERROR_COULD_NOT_DECODE_SYMBOL =  10021,
  EError_CouldNotLocateBarcode =  10501,
  E_ERROR_COULD_NOT_LOCATE_BARCODE =  10501,
  EError_UnrecognizedSignature =  10503,
  E_ERROR_UNRECOGNIZED_SIGNATURE =  10503,
  EError_InvalidNumberOfBars =  10504,
  E_ERROR_INVALID_NUMBER_OF_BARS =  10504,
  EError_ExtraEdgesFound =  10505,
  E_ERROR_EXTRA_EDGES_FOUND =  10505,
  EError_IncoherentBarSpaceThickness =  10506,
  E_ERROR_INCOHERENT_BAR_SPACE_THICKNESS =  10506,
  EError_InvalidCheckCharacter =  10507,
  E_ERROR_INVALID_CHECK_CHARACTER =  10507,
  EError_SymbologyNotEnabled =  10508,
  E_ERROR_SYMBOLOGY_NOT_ENABLED =  10508,
  EError_NoEdgesFound =  10509,
  E_ERROR_NO_EDGES_FOUND =  10509,
  EError_NotAnEasyOcvFile =  11001,
  E_ERROR_NOT_AN_EASY_OCV_FILE =  11001,
  EError_UnsupportedEasyOcvFileVersion =  11002,
  E_ERROR_UNSUPPORTED_EASY_OCV_FILE_VERSION =  11002,
  EError_NotEnoughSampleImages =  11003,
  E_ERROR_NOT_ENOUGH_SAMPLE_IMAGES =  11003,
  EError_NotAnEcheckerFile =  11004,
  E_ERROR_NOT_AN_ECHECKER_FILE =  11004,
  EError_UnsupportedEcheckerFileVersion =  11005,
  E_ERROR_UNSUPPORTED_ECHECKER_FILE_VERSION =  11005,
  EError_NotEnoughSamplesLearnt =  11007,
  E_ERROR_NOT_ENOUGH_SAMPLES_LEARNT =  11007,
  EError_InvalidNormalizationMode =  11008,
  E_ERROR_INVALID_NORMALIZATION_MODE =  11008,
  EError_ImageNotRegistered =  11009,
  E_ERROR_IMAGE_NOT_REGISTERED =  11009,
  EError_InvalidLearningSequence =  11010,
  E_ERROR_INVALID_LEARNING_SEQUENCE =  11010,
  EError_E_ERROR_CONTRAST_TOO_LOW =  11011,
  EError_MotherAlreadyHasThisDaughter =  12002,
  E_ERROR_MOTHER_ALREADY_HAS_THIS_DAUGHTER =  12002,
  EError_ShapeAlreadyHasDaughters =  12005,
  E_ERROR_SHAPE_ALREADY_HAS_DAUGHTERS =  12005,
  EError_NoValidPointFound =  12007,
  E_ERROR_NO_VALID_POINT_FOUND =  12007,
  EError_NotInListAttachmentMode =  12008,
  E_ERROR_NOT_IN_LIST_ATTACHMENT_MODE =  12008,
  EError_NotInIndexedAttachmentMode =  12009,
  E_ERROR_NOT_IN_INDEXED_ATTACHMENT_MODE =  12009,
  EError_UnsupportedShapeVersion =  12010,
  E_ERROR_UNSUPPORTED_SHAPE_VERSION =  12010,
  EError_RawCalibrationMode =  12011,
  E_ERROR_RAW_CALIBRATION_MODE =  12011,
  EError_BadLandmarkLayout =  12012,
  E_ERROR_CANNOT_TESSELLATE_GRID =  12012,
  EError_IncompatibleCalibrationModes =  12013,
  E_ERROR_INCOMPATIBLE_CALIBRATION_MODES =  12013,
  EError_NotEnoughLandmarks =  12014,
  E_ERROR_NOT_ENOUGH_LANDMARKS =  12014,
  EError_UnexpectedShapeTypeInFile =  12015,
  E_ERROR_UNEXPECTED_SHAPE_TYPE_IN_FILE =  12015,
  EError_UnsupportedModelFileVersion =  12016,
  E_ERROR_UNSUPPORTED_MODEL_FILE_VERSION =  12016,
  EError_CannotAttachDetachWorldShapes =  12017,
  E_ERROR_CANNOT_ATTACH_DETACH_WORLD_SHAPES =  12017,
  EError_UnexpectedWorldShapeInFile =  12018,
  E_ERROR_UNEXPECTED_WORLD_SHAPE_IN_FILE =  12018,
  EError_UnexpectedFrameShapeInFile =  12019,
  E_ERROR_UNEXPECTED_FRAME_SHAPE_IN_FILE =  12019,
  EError_UnexpectedPointShapeInFile =  12020,
  E_ERROR_UNEXPECTED_POINT_SHAPE_IN_FILE =  12020,
  EError_UnexpectedLineShapeInFile =  12021,
  E_ERROR_UNEXPECTED_LINE_SHAPE_IN_FILE =  12021,
  EError_UnexpectedCircleShapeInFile =  12022,
  E_ERROR_UNEXPECTED_CIRCLE_SHAPE_IN_FILE =  12022,
  EError_UnexpectedRectangleShapeInFile =  12023,
  E_ERROR_UNEXPECTED_RECTANGLE_SHAPE_IN_FILE =  12023,
  EError_UnexpectedWedgeShapeInFile =  12024,
  E_ERROR_UNEXPECTED_WEDGE_SHAPE_IN_FILE =  12024,
  EError_UnexpectedPointGaugeInFile =  12025,
  E_ERROR_UNEXPECTED_POINT_GAUGE_IN_FILE =  12025,
  EError_UnexpectedLineGaugeInFile =  12026,
  E_ERROR_UNEXPECTED_LINE_GAUGE_IN_FILE =  12026,
  EError_UnexpectedCircleGaugeInFile =  12027,
  E_ERROR_UNEXPECTED_CIRCLE_GAUGE_IN_FILE =  12027,
  EError_UnexpectedRectangleGaugeInFile =  12028,
  E_ERROR_UNEXPECTED_RECTANGLE_GAUGE_IN_FILE =  12028,
  EError_UnexpectedWedgeGaugeInFile =  12029,
  E_ERROR_UNEXPECTED_WEDGE_GAUGE_IN_FILE =  12029,
  EError_UnexpectedBarCodeInFile =  12031,
  E_ERROR_UNEXPECTED_BAR_CODE_IN_FILE =  12031,
  EError_UnexpectedBgaComponentInFile =  12033,
  E_ERRORS_reserved7 =  12033,
  EError_UnexpectedBgaArrayInFile =  12034,
  E_ERRORS_reserved8 =  12034,
  EError_UnexpectedBgaBallInFile =  12035,
  E_ERRORS_reserved9 =  12035,
  EError_AnActiveCurvedEdgeIsRequired =  12100,
  E_ERROR_AN_ACTIVE_CURVED_EDGE_IS_REQUIRED =  12100,
  EError_BrokenWedgeShapeConstraints =  12200,
  E_ERROR_BROKEN_WEDGE_SHAPE_CONSTRAINTS =  12200,
  EError_FlexnetHandleInitializationFailed =  20000,
  E_ERROR_FLEXNET_HANDLE_INITIALIZATION_FAILED =  20000,
  EError_FlexnetLoadingActivationLibraryFailed =  20000+1,
  E_ERROR_FLEXNET_LOADING_ACTIVATION_LIBRARY_FAILED =  20000+1,
  EError_FlexnetInitializationActivationLibraryFailed =  20000+2,
  E_ERROR_FLEXNET_INITIALIZATION_ACTIVATION_LIBRARY_FAILED =  20000+2,
  EError_FlexnetActivationLibraryMismatch =  20000+3,
  E_ERROR_FLEXNET_ACTIVATION_LIBRARY_MISMATCH =  20000+3,
  EError_FlexnetActivationLibraryUnloaded =  20000+4,
  E_ERROR_FLEXNET_ACTIVATION_LIBRARY_UNLOADED =  20000+4,
  EError_FlexnetLicensingServiceNotInstalled =  20000+5,
  E_ERROR_FLEXNET_LICENSING_SERVICE_NOT_INSTALLED =  20000+5,
  EError_FlexnetNotEnoughRights =  20000+6,
  E_ERROR_FLEXNET_NOT_ENOUGH_RIGHTS =  20000+6,
  EError_FlexnetLicenseJobCreationFailed =  20000+7,
  E_ERROR_FLEXNET_LICENSE_JOB_CREATION_FAILED =  20000+7,
  EError_FLEXnetLicensePromptForFileFailed =  20000+8,
  E_ERROR_FLEXNET_LICENSE_PROMPT_FOR_FILE_FAILED =  20000+8,
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
  E_ERROR_INTERNAL_ERROR_000 =  30000,
  EError_InternalError_001 =  30001,
  E_ERROR_INTERNAL_ERROR_001 =  30001,
  EError_InternalError_002 =  30002,
  E_ERROR_INTERNAL_ERROR_002 =  30002,
  EError_InternalError_003 =  30003,
  E_ERROR_INTERNAL_ERROR_003 =  30003,
  EError_InternalError_004 =  30004,
  E_ERROR_INTERNAL_ERROR_004 =  30004,
  EError_InternalError_005 =  30005,
  E_ERROR_INTERNAL_ERROR_005 =  30005,
  EError_InternalError_006 =  30006,
  E_ERROR_INTERNAL_ERROR_006 =  30006,
  EError_InternalError_007 =  30007,
  E_ERROR_INTERNAL_ERROR_007 =  30007,
  EError_InternalError_008 =  30008,
  E_ERROR_INTERNAL_ERROR_008 =  30008,
  EError_InternalError_009 =  30009,
  E_ERROR_INTERNAL_ERROR_009 =  30009,
  EError_InternalError_010 =  30010,
  E_ERROR_INTERNAL_ERROR_010 =  30010,
  EError_InternalError_011 =  30011,
  E_ERROR_INTERNAL_ERROR_011 =  30011,
  EError_InternalError_012 =  30012,
  E_ERROR_INTERNAL_ERROR_012 =  30012,
  EError_InternalError_013 =  30013,
  E_ERROR_INTERNAL_ERROR_013 =  30013,
  EError_InternalError_014 =  30014,
  E_ERROR_INTERNAL_ERROR_014 =  30014,
  EError_InternalError_015 =  30015,
  E_ERROR_INTERNAL_ERROR_015 =  30015,
  EError_InternalError_016 =  30016,
  E_ERROR_INTERNAL_ERROR_016 =  30016,
  EError_InternalError_017 =  30017,
  E_ERROR_INTERNAL_ERROR_017 =  30017,
  EError_InternalError_018 =  30018,
  E_ERROR_INTERNAL_ERROR_018 =  30018,
  EError_InternalError_019 =  30019,
  E_ERROR_INTERNAL_ERROR_019 =  30019,
  EError_InternalError_020 =  30020,
  E_ERROR_INTERNAL_ERROR_020 =  30020,
  EError_InternalError_021 =  30021,
  E_ERROR_INTERNAL_ERROR_021 =  30021,
  EError_InternalError_022 =  30022,
  E_ERROR_INTERNAL_ERROR_022 =  30022,
  EError_InternalError_023 =  30023,
  E_ERROR_INTERNAL_ERROR_023 =  30023,
  EError_InternalError_024 =  30024,
  E_ERROR_INTERNAL_ERROR_024 =  30024,
  EError_InternalError_025 =  30025,
  E_ERROR_INTERNAL_ERROR_025 =  30025,
  EError_InternalError_026 =  30026,
  E_ERROR_INTERNAL_ERROR_026 =  30026,
  EError_InternalError_027 =  30027,
  E_ERROR_INTERNAL_ERROR_027 =  30027,
  EError_InternalError_028 =  30028,
  E_ERROR_INTERNAL_ERROR_028 =  30028,
  EError_InternalError_029 =  30029,
  E_ERROR_INTERNAL_ERROR_029 =  30029,
  EError_InternalError_030 =  30030,
  E_ERROR_INTERNAL_ERROR_030 =  30030,
  EError_InternalError_031 =  30031,
  E_ERROR_INTERNAL_ERROR_031 =  30031,
  EError_InternalError_032 =  30032,
  E_ERROR_INTERNAL_ERROR_032 =  30032,
  EError_InternalError_033 =  30033,
  E_ERROR_INTERNAL_ERROR_033 =  30033,
  EError_InternalError_034 =  30034,
  E_ERROR_INTERNAL_ERROR_034 =  30034,
  EError_InternalError_035 =  30035,
  E_ERROR_INTERNAL_ERROR_035 =  30035,
  EError_InternalError_036 =  30036,
  E_ERROR_INTERNAL_ERROR_036 =  30036,
  EError_InternalError_037 =  30037,
  E_ERROR_INTERNAL_ERROR_037 =  30037,
  EError_InternalError_038 =  30038,
  E_ERROR_INTERNAL_ERROR_038 =  30038,
  EError_InternalError_039 =  30039,
  E_ERROR_INTERNAL_ERROR_039 =  30039,
  EError_InternalError_040 =  30040,
  E_ERROR_INTERNAL_ERROR_040 =  30040,
  EError_InternalError_041 =  30041,
  E_ERROR_INTERNAL_ERROR_041 =  30041,
  EError_InternalError_042 =  30042,
  E_ERROR_INTERNAL_ERROR_042 =  30042,
  EError_InternalError_043 =  30043,
  E_ERROR_INTERNAL_ERROR_043 =  30043,
  EError_InternalError_044 =  30044,
  E_ERROR_INTERNAL_ERROR_044 =  30044,
  EError_InternalError_045 =  30045,
  E_ERROR_INTERNAL_ERROR_045 =  30045,
  EError_InternalError_046 =  30046,
  E_ERROR_INTERNAL_ERROR_046 =  30046,
  EError_InternalError_047 =  30047,
  E_ERROR_INTERNAL_ERROR_047 =  30047,
  EError_InternalError_048 =  30048,
  E_ERROR_INTERNAL_ERROR_048 =  30048,
  EError_InternalError_049 =  30049,
  E_ERROR_INTERNAL_ERROR_049 =  30049,
  EError_InternalError_050 =  30050,
  E_ERROR_INTERNAL_ERROR_050 =  30050,
  EError_InternalError_051 =  30051,
  E_ERROR_INTERNAL_ERROR_051 =  30051,
  EError_InternalError_052 =  30052,
  E_ERROR_INTERNAL_ERROR_052 =  30052,
  EError_InternalError_053 =  30053,
  E_ERROR_INTERNAL_ERROR_053 =  30053,
  EError_InternalError_054 =  30054,
  E_ERROR_INTERNAL_ERROR_054 =  30054,
  EError_InternalError_055 =  30055,
  E_ERROR_INTERNAL_ERROR_055 =  30055,
  EError_InternalError_056 =  30056,
  E_ERROR_INTERNAL_ERROR_056 =  30056,
  EError_InternalError_057 =  30057,
  E_ERROR_INTERNAL_ERROR_057 =  30057,
  EError_InternalError_058 =  30058,
  E_ERROR_INTERNAL_ERROR_058 =  30058,
  EError_InternalError_059 =  30059,
  E_ERROR_INTERNAL_ERROR_059 =  30059,
  EError_InternalError_060 =  30060,
  E_ERROR_INTERNAL_ERROR_060 =  30060,
  EError_InternalError_061 =  30061,
  E_ERROR_INTERNAL_ERROR_061 =  30061,
  EError_InternalError_062 =  30062,
  E_ERROR_INTERNAL_ERROR_062 =  30062,
  EError_InternalError_063 =  30063,
  E_ERROR_INTERNAL_ERROR_063 =  30063,
  EError_InternalError_064 =  30064,
  E_ERROR_INTERNAL_ERROR_064 =  30064,
  EError_InternalError_065 =  30065,
  E_ERROR_INTERNAL_ERROR_065 =  30065,
  EError_InternalError_066 =  30066,
  E_ERROR_INTERNAL_ERROR_066 =  30066,
  EError_InternalError_067 =  30067,
  E_ERROR_INTERNAL_ERROR_067 =  30067,
  EError_InternalError_068 =  30068,
  E_ERROR_INTERNAL_ERROR_068 =  30068,
  EError_InternalError_069 =  30069,
  E_ERROR_INTERNAL_ERROR_069 =  30069,
  EError_InternalError_070 =  30070,
  E_ERROR_INTERNAL_ERROR_070 =  30070,
  EError_InternalError_071 =  30071,
  E_ERROR_INTERNAL_ERROR_071 =  30071,
  EError_InternalError_072 =  30072,
  E_ERROR_INTERNAL_ERROR_072 =  30072,
  EError_InternalError_073 =  30073,
  E_ERROR_INTERNAL_ERROR_073 =  30073,
  EError_InternalError_074 =  30074,
  E_ERROR_INTERNAL_ERROR_074 =  30074,
  EError_InternalError_075 =  30075,
  E_ERROR_INTERNAL_ERROR_075 =  30075,
  EError_InternalError_076 =  30076,
  E_ERROR_INTERNAL_ERROR_076 =  30076,
  EError_InternalError_077 =  30077,
  E_ERROR_INTERNAL_ERROR_077 =  30077,
  EError_InternalError_078 =  30078,
  E_ERROR_INTERNAL_ERROR_078 =  30078,
  EError_InternalError_079 =  30079,
  E_ERROR_INTERNAL_ERROR_079 =  30079,
  EError_InternalError_080 =  30080,
  E_ERROR_INTERNAL_ERROR_080 =  30080,
  EError_InternalError_081 =  30081,
  E_ERROR_INTERNAL_ERROR_081 =  30081,
  EError_InternalError_082 =  30082,
  E_ERROR_INTERNAL_ERROR_082 =  30082,
  EError_InternalError_083 =  30083,
  E_ERROR_INTERNAL_ERROR_083 =  30083,
  EError_InternalError_084 =  30084,
  E_ERROR_INTERNAL_ERROR_084 =  30084,
  EError_InternalError_085 =  30085,
  E_ERROR_INTERNAL_ERROR_085 =  30085,
  EError_InternalError_086 =  30086,
  E_ERROR_INTERNAL_ERROR_086 =  30086,
  EError_InternalError_087 =  30087,
  E_ERROR_INTERNAL_ERROR_087 =  30087,
  EError_InternalError_088 =  30088,
  E_ERROR_INTERNAL_ERROR_088 =  30088,
  EError_InternalError_089 =  30089,
  E_ERROR_INTERNAL_ERROR_089 =  30089,
  EError_InternalError_090 =  30090,
  E_ERROR_INTERNAL_ERROR_090 =  30090,
  EError_InternalError_091 =  30091,
  E_ERROR_INTERNAL_ERROR_091 =  30091,
  EError_InternalError_092 =  30092,
  E_ERROR_INTERNAL_ERROR_092 =  30092,
  EError_InternalError_093 =  30093,
  E_ERROR_INTERNAL_ERROR_093 =  30093,
  EError_InternalError_094 =  30094,
  E_ERROR_INTERNAL_ERROR_094 =  30094,
  EError_InternalError_095 =  30095,
  E_ERROR_INTERNAL_ERROR_095 =  30095,
  EError_InternalError_096 =  30096,
  E_ERROR_INTERNAL_ERROR_096 =  30096,
  EError_InternalError_097 =  30097,
  E_ERROR_INTERNAL_ERROR_097 =  30097,
  EError_InternalError_098 =  30098,
  E_ERROR_INTERNAL_ERROR_098 =  30098,
  EError_InternalError_099 =  30099,
  E_ERROR_INTERNAL_ERROR_099 =  30099,
  EError_InternalError_100 =  30100,
  E_ERROR_INTERNAL_ERROR_100 =  30100,
  EError_CannotTraceErrors =  32765,
  E_ERROR_CANNOT_TRACE_ERRORS =  32765,
  EError_NotImplemented =  32766,
  E_ERROR_NOT_IMPLEMENTED =  32766,
  EError_NullPointer =  32768,
  EError_Unknown =  0x7FFFFFFF,
  E_ERROR_UNKNOWN =  0x7FFFFFFF,
  E_ERRORS_reserved = (unsigned int)~0
};
enum E_ANGLE_UNITS
{
  EAngleUnit_Revolutions,
  E_ANGLE_UNIT_REVOLUTIONS = EAngleUnit_Revolutions,
  EAngleUnit_Radians,
  E_ANGLE_UNIT_RADIANS = EAngleUnit_Radians,
  EAngleUnit_Degrees,
  E_ANGLE_UNIT_DEGREES = EAngleUnit_Degrees,
  EAngleUnit_Grades,
  E_ANGLE_UNIT_GRADES = EAngleUnit_Grades,
  E_ANGLE_UNITS_reserved0 =  0x7FFFFFFF,
  E_ANGLE_UNITS_reserved = (unsigned int)~0
};
enum E_SELECTION_MODE
{
  ESelectionFlag_Any,
  E_SELECTED_ANY = ESelectionFlag_Any,
  ESelectionFlag_True,
  E_SELECTED_TRUE = ESelectionFlag_True,
  ESelectionFlag_False,
  E_SELECTED_FALSE = ESelectionFlag_False,
  E_SELECTION_MODE_reserved0 =  0x7FFFFFFF,
  E_SELECTION_MODE_reserved = (unsigned int)~0
};
enum DATA_TYPE
{
  EDataType_UnsignedInt =  1,
  E_DATA_TYPE_UNSIGNED_INT =  1,
  EDataType_SignedInt =  2,
  E_DATA_TYPE_SIGNED_INT =  2,
  EDataType_Float =  4,
  E_DATA_TYPE_FLOAT =  4,
  DATA_TYPE_reserved0 =  0x7FFFFFFF,
  DATA_TYPE_reserved = (unsigned int)~0
};
enum DATA_SIZE
{
  EDataSize_BitsPerPixel1 =  0x01,
  E_1_BIT_PER_PIXEL =  0x01,
  EDataSize_BitsPerPixel8 =  0x02,
  E_8_BITS_PER_PIXEL =  0x02,
  EDataSize_BitsPerPixel16 =  0x04,
  E_16_BITS_PER_PIXEL =  0x04,
  EDataSize_BitsPerPixel32 =  0x08,
  E_32_BITS_PER_PIXEL =  0x08,
  EDataSize_BitsPerPixel64 =  0x10,
  E_64_BITS_PER_PIXEL =  0x10,
  EDataSize_BitsPerPixel24 =  0x20,
  E_24_BITS_PER_PIXEL =  0x20,
  EDataSize_BitsPerPixel96 =  0x40,
  DATA_SIZE_reserved0 =  0x80,
  DATA_SIZE_reserved1 =  EDataSize_BitsPerPixel1,
  DATA_SIZE_reserved2 =  EDataSize_BitsPerPixel8,
  DATA_SIZE_reserved3 =  EDataSize_BitsPerPixel16,
  DATA_SIZE_reserved4 =  EDataSize_BitsPerPixel32,
  DATA_SIZE_reserved5 =  EDataSize_BitsPerPixel64,
  DATA_SIZE_reserved6 =  EDataSize_BitsPerPixel24,
  DATA_SIZE_reserved7 =  EDataSize_BitsPerPixel96,
  DATA_SIZE_reserved8 =  0x7FFFFFFF,
  DATA_SIZE_reserved = (unsigned int)~0
};
enum E_RGB_STANDARD
{
  ERgbStandard_Ntsc,
  E_RGB_STANDARD_NTSC = ERgbStandard_Ntsc,
  ERgbStandard_Pal,
  E_RGB_STANDARD_PAL = ERgbStandard_Pal,
  ERgbStandard_Smpte,
  E_RGB_STANDARD_SMPTE = ERgbStandard_Smpte,
  E_RGB_STANDARD_reserved0 =  0x7FFFFFFF,
  E_RGB_STANDARD_reserved = (unsigned int)~0
};
enum E_COLOR_QUANTIZATION
{
  EColorQuantization_FullRange,
  E_COLOR_QUANTIZATION_FULL_RANGE = EColorQuantization_FullRange,
  EColorQuantization_Ccir601,
  E_COLOR_QUANTIZATION_CCIR_601 = EColorQuantization_Ccir601,
  E_COLOR_QUANTIZATION_reserved0 =  0x7FFFFFFF,
  E_COLOR_QUANTIZATION_reserved = (unsigned int)~0
};
enum FileWriterMode
{
  ESerializerFileWriterMode_Create,
  Create = ESerializerFileWriterMode_Create,
  ESerializerFileWriterMode_Overwrite,
  Overwrite = ESerializerFileWriterMode_Overwrite,
  ESerializerFileWriterMode_Append,
  Append = ESerializerFileWriterMode_Append,
  FileWriterMode_reserved = (unsigned int)~0
};
enum BRC_SYMBOLOGIES
{
  ESymbologies_Standard_Symbologies =  0x1,
  BRC_STANDARD_SYMBOLOGY =  0x1,
  ESymbologies_Additional_Symbologies =  0x2,
  BRC_ADDITIONAL_SYMBOLOGY =  0x2,
  BRC_SYMBOLOGIES_reserved0 =  ESymbologies_Standard_Symbologies,
  BRC_SYMBOLOGIES_reserved1 =  ESymbologies_Additional_Symbologies,
  ESymbologies_Codabar =  0x4 | ESymbologies_Standard_Symbologies,
  BRC_CODABAR =  0x4 | ESymbologies_Standard_Symbologies,
  ESymbologies_Code128 =  0x8 | ESymbologies_Standard_Symbologies,
  BRC_CODE_128 =  0x8 | ESymbologies_Standard_Symbologies,
  ESymbologies_Code25Interleaved =  0x10 | ESymbologies_Standard_Symbologies,
  BRC_CODE_25_INTERLEAVED =  0x10 | ESymbologies_Standard_Symbologies,
  ESymbologies_Code39 =  0x20 | ESymbologies_Standard_Symbologies,
  BRC_CODE_39 =  0x20 | ESymbologies_Standard_Symbologies,
  ESymbologies_Ean128 =  0x40 | ESymbologies_Standard_Symbologies,
  BRC_EAN_128 =  0x40 | ESymbologies_Standard_Symbologies,
  ESymbologies_Ean13 =  0x80 | ESymbologies_Standard_Symbologies,
  BRC_EAN_13 =  0x80 | ESymbologies_Standard_Symbologies,
  ESymbologies_Msi =  0x100 | ESymbologies_Standard_Symbologies,
  BRC_MSI =  0x100 | ESymbologies_Standard_Symbologies,
  ESymbologies_UpcA =  0x200 | ESymbologies_Standard_Symbologies,
  BRC_UPC_A =  0x200 | ESymbologies_Standard_Symbologies,
  ESymbologies_UpcE =  0x400 | ESymbologies_Standard_Symbologies,
  BRC_UPC_E =  0x400 | ESymbologies_Standard_Symbologies,
  BRC_SYMBOLOGIES_reserved2 =  ESymbologies_Codabar,
  BRC_SYMBOLOGIES_reserved3 =  ESymbologies_UpcE,
  ESymbologies_BinaryCode =  0x4 | ESymbologies_Additional_Symbologies,
  BRC_BINARY_CODE =  0x4 | ESymbologies_Additional_Symbologies,
  ESymbologies_AdsAnker =  0x8 | ESymbologies_Additional_Symbologies,
  BRC_ADS_ANKER =  0x8 | ESymbologies_Additional_Symbologies,
  ESymbologies_Bc412 =  0x10 | ESymbologies_Additional_Symbologies,
  BRC_BC_412 =  0x10 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code11 =  0x20 | ESymbologies_Additional_Symbologies,
  BRC_CODE_11 =  0x20 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code13 =  0x40 | ESymbologies_Additional_Symbologies,
  BRC_CODE_13 =  0x40 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Datalogic =  0x80 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_DATALOGIC =  0x80 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Matrix =  0x100 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_MATRIX =  0x100 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Iata =  0x200 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_IATA =  0x200 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Industry =  0x400 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_INDUSTRY =  0x400 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Compressed =  0x800 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_COMPRESSED =  0x800 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code25Inverted =  0x1000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_25_INVERTED =  0x1000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code32 =  0x2000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_32 =  0x2000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code39Extended =  0x4000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_39_EXTENDED =  0x4000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code39Reduced =  0x8000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_39_REDUCED =  0x8000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code93 =  0x10000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_93 =  0x10000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Code93Extended =  0x20000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_93_EXTENDED =  0x20000 | ESymbologies_Additional_Symbologies,
  ESymbologies_CodeBcdMatrix =  0x40000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_BCD_MATRIX =  0x40000 | ESymbologies_Additional_Symbologies,
  ESymbologies_CodeCip =  0x80000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_CIP =  0x80000 | ESymbologies_Additional_Symbologies,
  ESymbologies_CodeStk =  0x100000 | ESymbologies_Additional_Symbologies,
  BRC_CODE_STK =  0x100000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Ean8 =  0x200000 | ESymbologies_Additional_Symbologies,
  BRC_EAN_8 =  0x200000 | ESymbologies_Additional_Symbologies,
  ESymbologies_IbmDeltaDistanceA =  0x400000 | ESymbologies_Additional_Symbologies,
  BRC_IBM_DELTA_DISTANCE_A =  0x400000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Plessey =  0x800000 | ESymbologies_Additional_Symbologies,
  BRC_PLESSEY =  0x800000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Telepen =  0x1000000 | ESymbologies_Additional_Symbologies,
  BRC_TELEPEN =  0x1000000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Rss14 =  0x2000000 | ESymbologies_Additional_Symbologies,
  BRC_RSS_14 =  0x2000000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Rss14Limited =  0x4000000 | ESymbologies_Additional_Symbologies,
  BRC_RSS_14_LIMITED =  0x4000000 | ESymbologies_Additional_Symbologies,
  ESymbologies_Rss14Expanded =  0x8000000 | ESymbologies_Additional_Symbologies,
  BRC_RSS_14_EXPANDED =  0x8000000 | ESymbologies_Additional_Symbologies,
  BRC_SYMBOLOGIES_reserved4 =  ESymbologies_BinaryCode,
  BRC_SYMBOLOGIES_reserved5 =  ESymbologies_Rss14Expanded,
  ESymbologies_Standard =  ESymbologies_Codabar | ESymbologies_Code128 | ESymbologies_Code25Interleaved | ESymbologies_Code39 | ESymbologies_Ean128 | ESymbologies_Ean13 | ESymbologies_Msi | ESymbologies_UpcA | ESymbologies_UpcE,
  BRC_STANDARD =  ESymbologies_Codabar | ESymbologies_Code128 | ESymbologies_Code25Interleaved | ESymbologies_Code39 | ESymbologies_Ean128 | ESymbologies_Ean13 | ESymbologies_Msi | ESymbologies_UpcA | ESymbologies_UpcE,
  ESymbologies_Additional =  ESymbologies_BinaryCode | ESymbologies_AdsAnker | ESymbologies_Bc412 | ESymbologies_Code11 |
      ESymbologies_Code25Datalogic | ESymbologies_Code25Matrix | ESymbologies_Code25Iata | ESymbologies_Code25Industry |
      ESymbologies_Code25Compressed | ESymbologies_Code25Inverted | ESymbologies_Code32 | ESymbologies_Code39Extended |
      ESymbologies_Code39Reduced | ESymbologies_Code93 | ESymbologies_Code93Extended | ESymbologies_CodeBcdMatrix | ESymbologies_CodeCip |
      ESymbologies_CodeStk | ESymbologies_Ean8 | ESymbologies_IbmDeltaDistanceA | ESymbologies_Plessey | ESymbologies_Telepen | ESymbologies_Code13 |
      ESymbologies_Rss14| ESymbologies_Rss14Limited| ESymbologies_Rss14Expanded,
  BRC_ADDITIONAL =  ESymbologies_BinaryCode | ESymbologies_AdsAnker | ESymbologies_Bc412 | ESymbologies_Code11 |
      ESymbologies_Code25Datalogic | ESymbologies_Code25Matrix | ESymbologies_Code25Iata | ESymbologies_Code25Industry |
      ESymbologies_Code25Compressed | ESymbologies_Code25Inverted | ESymbologies_Code32 | ESymbologies_Code39Extended |
      ESymbologies_Code39Reduced | ESymbologies_Code93 | ESymbologies_Code93Extended | ESymbologies_CodeBcdMatrix | ESymbologies_CodeCip |
      ESymbologies_CodeStk | ESymbologies_Ean8 | ESymbologies_IbmDeltaDistanceA | ESymbologies_Plessey | ESymbologies_Telepen | ESymbologies_Code13 |
      ESymbologies_Rss14| ESymbologies_Rss14Limited| ESymbologies_Rss14Expanded,
  ESymbologies_Unknown =  0x7FFFFFFF,
  BRC_SYMBOLOGY_UNKNOWN =  0x7FFFFFFF,
  BRC_SYMBOLOGIES_reserved = (unsigned int)~0
};
enum GGE_TRANSITION_TYPE
{
  ETransitionType_Bw,
  GGE_BW = ETransitionType_Bw,
  ETransitionType_Wb,
  GGE_WB = ETransitionType_Wb,
  ETransitionType_BwOrWb,
  GGE_BW_OR_WB = ETransitionType_BwOrWb,
  ETransitionType_Bwb,
  GGE_BWB = ETransitionType_Bwb,
  ETransitionType_Wbw,
  GGE_WBW = ETransitionType_Wbw,
  GGE_TRANSITION_TYPE_reserved0 =  0x7FFFFFFF,
  GGE_TRANSITION_TYPE_reserved = (unsigned int)~0
};
enum GGE_TRANSITION_CHOICE
{
  ETransitionChoice_NthFromBegin,
  GGE_NTH_FROM_BEGIN = ETransitionChoice_NthFromBegin,
  ETransitionChoice_NthFromEnd,
  GGE_NTH_FROM_END = ETransitionChoice_NthFromEnd,
  ETransitionChoice_LargestAmplitude,
  GGE_LARGEST_AMPLITUDE = ETransitionChoice_LargestAmplitude,
  ETransitionChoice_LargestArea,
  GGE_LARGEST_AREA = ETransitionChoice_LargestArea,
  ETransitionChoice_Closest,
  GGE_CLOSEST = ETransitionChoice_Closest,
  ETransitionChoice_All,
  GGE_ALL = ETransitionChoice_All,
  GGE_TRANSITION_CHOICE_reserved0 =  0x7FFFFFFF,
  GGE_TRANSITION_CHOICE_reserved = (unsigned int)~0
};
enum GGE_PLOT_ITEMS
{
  EPlotItem_Transitions =  0x1,
  GGE_PLOT_TRANSITIONS =  0x1,
  EPlotItem_Peak =  0x2,
  GGE_PLOT_PEAKS =  0x2,
  EPlotItem_Thresholds =  0x4,
  GGE_PLOT_THRESHOLDS =  0x4,
  EPlotItem_Points =  0x8,
  GGE_PLOT_POINTS =  0x8,
  GGE_PLOT_ITEMS_reserved0 =  0x7FFFFFFF,
  GGE_PLOT_ITEMS_reserved = (unsigned int)~0
};
enum GGE_CLIPPING_MODE
{
  EClippingMode_CenteredNominal =  0x1,
  GGE_CLIPPING_CENTERED_NOMINAL =  0x1,
  EClippingMode_ClippedToValidSamples =  0x2,
  GGE_CLIPPING_CLIPPED_TO_VALID_SAMPLES =  0x2,
  EClippingMode_ClippedInNominalShape =  0x3,
  GGE_CLIPPING_CLIPPED_IN_NOMINAL_SHAPE =  0x3,
  GGE_CLIPPING_MODE_reserved0 =  0x7FFFFFFF,
  GGE_CLIPPING_MODE_reserved = (unsigned int)~0
};
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
enum ARITH_LOGIC_OPERATIONS
{
  EArithmeticLogicOperation_Copy,
  IMG_COPY = EArithmeticLogicOperation_Copy,
  EArithmeticLogicOperation_Invert,
  IMG_INVERT = EArithmeticLogicOperation_Invert,
  EArithmeticLogicOperation_Add,
  IMG_ADD = EArithmeticLogicOperation_Add,
  EArithmeticLogicOperation_Subtract,
  IMG_SUBTRACT = EArithmeticLogicOperation_Subtract,
  EArithmeticLogicOperation_Multiply,
  IMG_MULTIPLY = EArithmeticLogicOperation_Multiply,
  EArithmeticLogicOperation_Divide,
  IMG_DIVIDE = EArithmeticLogicOperation_Divide,
  EArithmeticLogicOperation_Modulo,
  IMG_MODULO = EArithmeticLogicOperation_Modulo,
  EArithmeticLogicOperation_ShiftLeft,
  IMG_SHIFT_LEFT = EArithmeticLogicOperation_ShiftLeft,
  EArithmeticLogicOperation_ShiftRight,
  IMG_SHIFT_RIGHT = EArithmeticLogicOperation_ShiftRight,
  EArithmeticLogicOperation_ScaledAdd,
  IMG_SCALED_ADD = EArithmeticLogicOperation_ScaledAdd,
  EArithmeticLogicOperation_ScaledSubtract,
  IMG_SCALED_SUBTRACT = EArithmeticLogicOperation_ScaledSubtract,
  EArithmeticLogicOperation_ScaledMultiply,
  IMG_SCALED_MULTIPLY = EArithmeticLogicOperation_ScaledMultiply,
  EArithmeticLogicOperation_ScaledDivide,
  IMG_SCALED_DIVIDE = EArithmeticLogicOperation_ScaledDivide,
  EArithmeticLogicOperation_BitwiseAnd,
  IMG_BITWISE_AND = EArithmeticLogicOperation_BitwiseAnd,
  EArithmeticLogicOperation_BitwiseOr,
  IMG_BITWISE_OR = EArithmeticLogicOperation_BitwiseOr,
  EArithmeticLogicOperation_BitwiseXor,
  IMG_BITWISE_XOR = EArithmeticLogicOperation_BitwiseXor,
  EArithmeticLogicOperation_LogicalAnd,
  IMG_LOGICAL_AND = EArithmeticLogicOperation_LogicalAnd,
  EArithmeticLogicOperation_LogicalOr,
  IMG_LOGICAL_OR = EArithmeticLogicOperation_LogicalOr,
  EArithmeticLogicOperation_LogicalXor,
  IMG_LOGICAL_XOR = EArithmeticLogicOperation_LogicalXor,
  EArithmeticLogicOperation_Min,
  IMG_MIN = EArithmeticLogicOperation_Min,
  EArithmeticLogicOperation_Max,
  IMG_MAX = EArithmeticLogicOperation_Max,
  EArithmeticLogicOperation_SetZero,
  IMG_SET_ZERO = EArithmeticLogicOperation_SetZero,
  EArithmeticLogicOperation_SetNonZero,
  IMG_SET_NON_ZERO = EArithmeticLogicOperation_SetNonZero,
  EArithmeticLogicOperation_Equal,
  IMG_EQUAL = EArithmeticLogicOperation_Equal,
  EArithmeticLogicOperation_NotEqual,
  IMG_NOT_EQUAL = EArithmeticLogicOperation_NotEqual,
  EArithmeticLogicOperation_GreaterOrEqual,
  IMG_GREATER_OR_EQUAL = EArithmeticLogicOperation_GreaterOrEqual,
  EArithmeticLogicOperation_LesserOrEqual,
  IMG_LESSER_OR_EQUAL = EArithmeticLogicOperation_LesserOrEqual,
  EArithmeticLogicOperation_Greater,
  IMG_GREATER = EArithmeticLogicOperation_Greater,
  EArithmeticLogicOperation_Lesser,
  IMG_LESSER = EArithmeticLogicOperation_Lesser,
  ARITH_LOGIC_OPERATIONS_reserved0,
  ARITH_LOGIC_OPERATIONS_reserved1,
  ARITH_LOGIC_OPERATIONS_reserved2,
  ARITH_LOGIC_OPERATIONS_reserved3,
  EArithmeticLogicOperation_Compare,
  IMG_COMPARE = EArithmeticLogicOperation_Compare,
  EArithmeticLogicOperation_Overlay,
  IMG_OVERLAY = EArithmeticLogicOperation_Overlay,
  EArithmeticLogicOperation_BitwiseNot =  EArithmeticLogicOperation_Invert,
  IMG_BITWISE_NOT =  EArithmeticLogicOperation_Invert,
  EArithmeticLogicOperation_Average =  EArithmeticLogicOperation_ScaledAdd,
  IMG_AVERAGE =  EArithmeticLogicOperation_ScaledAdd,
  ARITH_LOGIC_OPERATIONS_reserved4 =  0x7FFFFFFF,
  ARITH_LOGIC_OPERATIONS_reserved = (unsigned int)~0
};
enum IMG_HISTOGRAM_FEATURE
{
  EHistogramFeature_MostFrequentPixelValue,
  IMG_MOST_FREQUENT_PIXEL_VALUE = EHistogramFeature_MostFrequentPixelValue,
  EHistogramFeature_MostFrequentPixelFrequency,
  IMG_MOST_FREQUENT_PIXEL_FREQUENCY = EHistogramFeature_MostFrequentPixelFrequency,
  EHistogramFeature_LeastFrequentPixelValue,
  IMG_LEAST_FREQUENT_PIXEL_VALUE = EHistogramFeature_LeastFrequentPixelValue,
  EHistogramFeature_LeastFrequentPixelFrequency,
  IMG_LEAST_FREQUENT_PIXEL_FREQUENCY = EHistogramFeature_LeastFrequentPixelFrequency,
  EHistogramFeature_SmallestPixelValue,
  IMG_SMALLEST_PIXEL_VALUE = EHistogramFeature_SmallestPixelValue,
  EHistogramFeature_GreatestPixelValue,
  IMG_GREATEST_PIXEL_VALUE = EHistogramFeature_GreatestPixelValue,
  EHistogramFeature_PixelCount,
  IMG_PIXEL_COUNT = EHistogramFeature_PixelCount,
  EHistogramFeature_AveragePixelValue,
  IMG_AVERAGE_PIXEL_VALUE = EHistogramFeature_AveragePixelValue,
  EHistogramFeature_PixelValueStdDev,
  IMG_PIXEL_VALUE_STD_DEV = EHistogramFeature_PixelValueStdDev,
  IMG_HISTOGRAM_FEATURE_reserved0 =  0x7FFFFFFF,
  IMG_HISTOGRAM_FEATURE_reserved = (unsigned int)~0
};
enum CONTOUR_MODE
{
  EContourMode_Clockwise,
  IMG_CONTOUR_CLOCKWISE = EContourMode_Clockwise,
  EContourMode_ClockwiseAlwaysClosed,
  IMG_CONTOUR_CLOCKWISE_ALWAYS_CLOSED = EContourMode_ClockwiseAlwaysClosed,
  EContourMode_ClockwiseContinueIfBorder,
  IMG_CONTOUR_CLOCKWISE_CONTINUE_IF_BORDER = EContourMode_ClockwiseContinueIfBorder,
  EContourMode_Anticlockwise,
  IMG_CONTOUR_ANTICLOCKWISE = EContourMode_Anticlockwise,
  EContourMode_AnticlockwiseContinueIfBorder,
  IMG_CONTOUR_ANTICLOCKWISE_CONTINUE_IF_BORDER = EContourMode_AnticlockwiseContinueIfBorder,
  EContourMode_AnticlockwiseAlwaysClosed,
  IMG_CONTOUR_ANTICLOCKWISE_ALWAYS_CLOSED = EContourMode_AnticlockwiseAlwaysClosed,
  CONTOUR_MODE_reserved0 =  0x7FFFFFFF,
  CONTOUR_MODE_reserved = (unsigned int)~0
};
enum CONTOUR_THRESHOLD
{
  EContourThreshold_Above,
  IMG_CONTOUR_ABOVE_THRESHOLD = EContourThreshold_Above,
  EContourThreshold_Below,
  IMG_CONTOUR_BELOW_THRESHOLD = EContourThreshold_Below,
  CONTOUR_THRESHOLD_reserved0 =  0x7FFFFFFF,
  CONTOUR_THRESHOLD_reserved = (unsigned int)~0
};
enum KERNEL_TYPE
{
  EKernelType_WhiteSkelet =  1,
  E_WHITE_SKELET_KRNL =  1,
  EKernelType_BlackSkelet =  2,
  E_BLACK_SKELET_KRNL =  2,
  EKernelType_Edge =  3,
  E_EDGE_KRNL =  3,
  EKernelType_SobelX =  4,
  E_SOBELX_KRNL =  4,
  EKernelType_SobelY =  5,
  E_SOBELY_KRNL =  5,
  EKernelType_PrewittX =  6,
  E_PREWITX_KRNL =  6,
  EKernelType_PrewittY =  7,
  E_PREWITY_KRNL =  7,
  EKernelType_Laplacian4 =  8,
  E_LAPLACIAN4_KRNL =  8,
  EKernelType_Laplacian8 =  9,
  E_LAPLACIAN8_KRNL =  9,
  EKernelType_LowPass1 =  10,
  E_LOWPASS1_KRNL =  10,
  EKernelType_LowPass2 =  11,
  E_LOWPASS2_KRNL =  11,
  EKernelType_LowPass3 =  12,
  E_LOWPASS3_KRNL =  12,
  EKernelType_HighPass1 =  13,
  E_HIGHPASS1_KRNL =  13,
  EKernelType_HighPass2 =  14,
  E_HIGHPASS2_KRNL =  14,
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
  KERNEL_TYPE_reserved0 =  0x7FFFFFFF,
  KERNEL_TYPE_reserved = (unsigned int)~0
};
enum KERNEL_RECTIFIER
{
  EKernelRectifier_DoNotRectify,
  DO_NOT_RECTIFY = EKernelRectifier_DoNotRectify,
  EKernelRectifier_KeepNegative,
  RECTIFY_KEEP_NEGATIVE = EKernelRectifier_KeepNegative,
  EKernelRectifier_KeepPositive,
  RECTIFY_KEEP_POSITIVE = EKernelRectifier_KeepPositive,
  EKernelRectifier_Absolute,
  RECTIFY_ABSOLUTE = EKernelRectifier_Absolute,
  KERNEL_RECTIFIER_reserved0 =  0x7FFFFFFF,
  KERNEL_RECTIFIER_reserved = (unsigned int)~0
};
enum KERNEL_ROTATION
{
  EKernelRotation_NoRotation =  0,
  NO_ROTATION =  0,
  EKernelRotation_Clockwise =  1,
  CLOCKWISE_ROTATION =  1,
  EKernelRotation_Anticlockwise =  2,
  ANTICLOCKWISE_ROTATION =  2,
  KERNEL_ROTATION_reserved0 =  0x7FFFFFFF,
  KERNEL_ROTATION_reserved = (unsigned int)~0
};
enum IMG_THRESHOLD_MODES
{
  EThresholdMode_Absolute =  -2,
  IMG_ABSOLUTE_THRESHOLD =  -2,
  EThresholdMode_Relative =  -3,
  IMG_RELATIVE_THRESHOLD =  -3,
  EThresholdMode_MinResidue =  -4,
  IMG_MIN_RESIDUE_THRESHOLD =  -4,
  EThresholdMode_MaxEntropy =  -5,
  IMG_MAX_ENTROPY_THRESHOLD =  -5,
  EThresholdMode_Isodata =  -6,
  IMG_ISODATA_THRESHOLD =  -6,
  IMG_THRESHOLD_MODES_reserved0 =  -7,
  IMG_THRESHOLD_MODES_reserved1 =  -8,
  IMG_THRESHOLD_MODES_reserved2 =  0x7FFFFFFF,
  IMG_THRESHOLD_MODES_reserved = (unsigned int)~0
};
enum IMG_REFERENCE_NOISE
{
  EReferenceNoise_NoReference,
  IMG_NOISE_NONE = EReferenceNoise_NoReference,
  EReferenceNoise_SameAsImage,
  IMG_NOISE_SAME_AS_IMAGE = EReferenceNoise_SameAsImage,
  EReferenceNoise_SameAsImageInclusive,
  IMG_REFERENCE_NOISE_reserved0 = EReferenceNoise_SameAsImageInclusive,
  IMG_REFERENCE_NOISE_reserved1 =  0x7FFFFFFF,
  IMG_REFERENCE_NOISE_reserved = (unsigned int)~0
};
enum CONNEXITY
{
  EConnexity_Connexity4,
  IMG_CONTOUR_CONNEXITY_4 = EConnexity_Connexity4,
  EConnexity_Connexity8,
  IMG_CONTOUR_CONNEXITY_8 = EConnexity_Connexity8,
  CONNEXITY_reserved0 =  0x7FFFFFFF,
  CONNEXITY_reserved = (unsigned int)~0
};
enum SELECT_OPTIONS
{
  ESelectOption_InsertAll,
  OBJ_INSERT_ALL = ESelectOption_InsertAll,
  ESelectOption_InsertGreaterOrEqual,
  OBJ_INSERT_GREATER_OR_EQUAL = ESelectOption_InsertGreaterOrEqual,
  ESelectOption_InsertLesserOrEqual,
  OBJ_INSERT_LESSER_OR_EQUAL = ESelectOption_InsertLesserOrEqual,
  ESelectOption_InsertRange,
  OBJ_INSERT_RANGE = ESelectOption_InsertRange,
  ESelectOption_RemoveAll,
  OBJ_REMOVE_ALL = ESelectOption_RemoveAll,
  ESelectOption_RemoveGreaterOrEqual,
  OBJ_REMOVE_GREATER_OR_EQUAL = ESelectOption_RemoveGreaterOrEqual,
  ESelectOption_RemoveLesserOrEqual,
  OBJ_REMOVE_LESSER_OR_EQUAL = ESelectOption_RemoveLesserOrEqual,
  ESelectOption_RemoveRange,
  OBJ_REMOVE_RANGE = ESelectOption_RemoveRange,
  ESelectOption_InsertOutOfRange,
  OBJ_INSERT_OUT_OF_RANGE = ESelectOption_InsertOutOfRange,
  ESelectOption_RemoveOutOfRange,
  OBJ_REMOVE_OUT_OF_RANGE = ESelectOption_RemoveOutOfRange,
  SELECT_OPTIONS_reserved0 =  0x7FFFFFFF,
  SELECT_OPTIONS_reserved = (unsigned int)~0
};
enum SELECT_BY_POSITION
{
  ESelectByPosition_InsertIn,
  OBJ_INSERT_IN = ESelectByPosition_InsertIn,
  ESelectByPosition_InsertTouch,
  OBJ_INSERT_TOUCH = ESelectByPosition_InsertTouch,
  ESelectByPosition_InsertOut,
  OBJ_INSERT_OUT = ESelectByPosition_InsertOut,
  ESelectByPosition_RemoveIn,
  OBJ_REMOVE_IN = ESelectByPosition_RemoveIn,
  ESelectByPosition_RemoveTouch,
  OBJ_REMOVE_TOUCH = ESelectByPosition_RemoveTouch,
  ESelectByPosition_RemoveOut,
  OBJ_REMOVE_OUT = ESelectByPosition_RemoveOut,
  ESelectByPosition_RemoveBorder,
  OBJ_REMOVE_BORDER = ESelectByPosition_RemoveBorder,
  SELECT_BY_POSITION_reserved0 =  0x7FFFFFFF,
  SELECT_BY_POSITION_reserved = (unsigned int)~0
};
enum SORT_OPTIONS
{
  ESortOption_Ascending,
  OBJ_SORT_ASCENDING = ESortOption_Ascending,
  ESortOption_Descending,
  OBJ_SORT_DESCENDING = ESortOption_Descending,
  SORT_OPTIONS_reserved0 =  0x7FFFFFFF,
  SORT_OPTIONS_reserved = (unsigned int)~0
};
enum OBJECT_FEATURES
{
  ELegacyFeature_NoFeature =  0,
  OBJ_NONE =  0,
  ELegacyFeature_Class =  1,
  OBJ_CLASS =  1,
  ELegacyFeature_RunsNumber =  2,
  OBJ_RUNS_NUMBER =  2,
  ELegacyFeature_Area =  3,
  OBJ_AREA =  3,
  ELegacyFeature_LargestRun =  4,
  OBJ_LARGEST_RUN =  4,
  ELegacyFeature_GravityCenterX =  5,
  ELegacyFeature_GravityCenterY =  6,
  OBJ_GRAVITY_CENTER_Y =  6,
  ELegacyFeature_LimitCenterX =  7,
  ELegacyFeature_LimitCenterY =  8,
  OBJ_LIMIT_CENTER_Y =  8,
  ELegacyFeature_LimitWidth =  9,
  OBJ_LIMIT_WIDTH =  9,
  ELegacyFeature_LimitHeight =  10,
  OBJ_LIMIT_HEIGHT =  10,
  ELegacyFeature_Limit45CenterX =  11,
  ELegacyFeature_Limit45CenterY =  12,
  OBJ_LIMIT45_CENTER_Y =  12,
  ELegacyFeature_Limit45Width =  13,
  OBJ_LIMIT45_WIDTH =  13,
  ELegacyFeature_Limit45Height =  14,
  OBJ_LIMIT45_HEIGHT =  14,
  ELegacyFeature_ContourX =  15,
  OBJ_CONTOUR_X =  15,
  ELegacyFeature_ContourY =  16,
  OBJ_CONTOUR_Y =  16,
  ELegacyFeature_PixelMin =  17,
  OBJ_PIXEL_MIN =  17,
  ELegacyFeature_PixelMax =  18,
  OBJ_PIXEL_MAX =  18,
  ELegacyFeature_SigmaX =  19,
  OBJ_SIGMA_X =  19,
  ELegacyFeature_SigmaY =  20,
  OBJ_SIGMA_Y =  20,
  ELegacyFeature_SigmaXY =  21,
  OBJ_SIGMA_XY =  21,
  ELegacyFeature_SigmaXX =  22,
  OBJ_SIGMA_XX =  22,
  ELegacyFeature_SigmaYY =  23,
  OBJ_SIGMA_YY =  23,
  ELegacyFeature_EllipseWidth =  24,
  ELegacyFeature_EllipseHeight =  25,
  OBJ_ELLIPSE_HEIGHT =  25,
  ELegacyFeature_EllipseAngle =  26,
  OBJ_ELLIPSE_ANGLE =  26,
  ELegacyFeature_CentroidX =  27,
  OBJ_CENTROID_X =  27,
  ELegacyFeature_CentroidY =  28,
  OBJ_CENTROID_Y =  28,
  ELegacyFeature_PixelGrayAverage =  29,
  OBJ_PIXEL_GRAY_AVERAGE =  29,
  ELegacyFeature_PixelGrayVariance =  30,
  OBJ_PIXEL_GRAY_VARIANCE =  30,
  ELegacyFeature_Limit22CenterX =  31,
  ELegacyFeature_Limit22CenterY =  32,
  OBJ_LIMIT22_CENTER_Y =  32,
  ELegacyFeature_Limit22Width =  33,
  OBJ_LIMIT22_WIDTH =  33,
  ELegacyFeature_Limit22Height =  34,
  OBJ_LIMIT22_HEIGHT =  34,
  ELegacyFeature_Limit68CenterX =  35,
  ELegacyFeature_Limit68CenterY =  36,
  OBJ_LIMIT68_CENTER_Y =  36,
  ELegacyFeature_Limit68Width =  37,
  OBJ_LIMIT68_WIDTH =  37,
  ELegacyFeature_Limit68Height =  38,
  OBJ_LIMIT68_HEIGHT =  38,
  ELegacyFeature_LimitAngledCenterX =  39,
  ELegacyFeature_LimitAngledCenterY =  40,
  OBJ_LIMIT_ANGLED_CENTER_Y =  40,
  ELegacyFeature_LimitAngledWidth =  41,
  OBJ_LIMIT_ANGLED_WIDTH =  41,
  ELegacyFeature_LimitAngledHeight =  42,
  OBJ_LIMIT_ANGLED_HEIGHT =  42,
  ELegacyFeature_FeretCenterX =  43,
  OBJ_FERET_CENTER_X =  43,
  ELegacyFeature_FeretCenterY =  44,
  OBJ_FERET_CENTER_Y =  44,
  ELegacyFeature_FeretWidth =  45,
  OBJ_FERET_WIDTH =  45,
  ELegacyFeature_FeretHeight =  46,
  OBJ_FERET_HEIGHT =  46,
  ELegacyFeature_FeretAngle =  47,
  OBJ_FERET_ANGLE =  47,
  ELegacyFeature_ObjectNumber =  48,
  OBJ_OBJ_NUM =  48,
  ELegacyFeature_GravityCenter =  ELegacyFeature_GravityCenterX,
  OBJ_GRAVITY_CENTER_X =  ELegacyFeature_GravityCenterX,
  ELegacyFeature_Limit =  ELegacyFeature_LimitCenterX,
  OBJ_LIMIT_CENTER_X =  ELegacyFeature_LimitCenterX,
  ELegacyFeature_Limit22 =  ELegacyFeature_Limit22CenterX,
  OBJ_LIMIT22_CENTER_X =  ELegacyFeature_Limit22CenterX,
  ELegacyFeature_Limit45 =  ELegacyFeature_Limit45CenterX,
  OBJ_LIMIT45_CENTER_X =  ELegacyFeature_Limit45CenterX,
  ELegacyFeature_Limit68 =  ELegacyFeature_Limit68CenterX,
  OBJ_LIMIT68_CENTER_X =  ELegacyFeature_Limit68CenterX,
  ELegacyFeature_LimitAngled =  ELegacyFeature_LimitAngledCenterX,
  OBJ_LIMIT_ANGLED_CENTER_X =  ELegacyFeature_LimitAngledCenterX,
  ELegacyFeature_Ellipse =  ELegacyFeature_EllipseWidth,
  OBJ_ELLIPSE_WIDTH =  ELegacyFeature_EllipseWidth,
  ELegacyFeature_Centroid =  ELegacyFeature_CentroidX,
  ELegacyFeature_Feret =  ELegacyFeature_FeretCenterX,
  OBJECT_FEATURES_reserved0 =  0x7FFFFFFF,
  OBJECT_FEATURES_reserved = (unsigned int)~0
};
enum OCRClasses
{
  EOCRClass__0 =  0x1,
  OCR_CLASS_0 =  0x1,
  EOCRClass__1 =  0x2,
  OCR_CLASS_1 =  0x2,
  EOCRClass__2 =  0x4,
  OCR_CLASS_2 =  0x4,
  EOCRClass__3 =  0x8,
  OCR_CLASS_3 =  0x8,
  EOCRClass__4 =  0x10,
  OCR_CLASS_4 =  0x10,
  EOCRClass__5 =  0x20,
  OCR_CLASS_5 =  0x20,
  EOCRClass__6 =  0x40,
  OCR_CLASS_6 =  0x40,
  EOCRClass__7 =  0x80,
  OCR_CLASS_7 =  0x80,
  EOCRClass__8 =  0x100,
  OCR_CLASS_8 =  0x100,
  EOCRClass__9 =  0x200,
  OCR_CLASS_9 =  0x200,
  EOCRClass__10 =  0x400,
  OCR_CLASS_10 =  0x400,
  EOCRClass__11 =  0x800,
  OCR_CLASS_11 =  0x800,
  EOCRClass__12 =  0x1000,
  OCR_CLASS_12 =  0x1000,
  EOCRClass__13 =  0x2000,
  OCR_CLASS_13 =  0x2000,
  EOCRClass__14 =  0x4000,
  OCR_CLASS_14 =  0x4000,
  EOCRClass__15 =  0x8000,
  OCR_CLASS_15 =  0x8000,
  EOCRClass__16 =  0x10000,
  OCR_CLASS_16 =  0x10000,
  EOCRClass__17 =  0x20000,
  OCR_CLASS_17 =  0x20000,
  EOCRClass__18 =  0x40000,
  OCR_CLASS_18 =  0x40000,
  EOCRClass__19 =  0x80000,
  OCR_CLASS_19 =  0x80000,
  EOCRClass__20 =  0x100000,
  OCR_CLASS_20 =  0x100000,
  EOCRClass__21 =  0x200000,
  OCR_CLASS_21 =  0x200000,
  EOCRClass__22 =  0x400000,
  OCR_CLASS_22 =  0x400000,
  EOCRClass__23 =  0x800000,
  OCR_CLASS_23 =  0x800000,
  EOCRClass__24 =  0x1000000,
  OCR_CLASS_24 =  0x1000000,
  EOCRClass__25 =  0x2000000,
  OCR_CLASS_25 =  0x2000000,
  EOCRClass__26 =  0x4000000,
  OCR_CLASS_26 =  0x4000000,
  EOCRClass__27 =  0x8000000,
  OCR_CLASS_27 =  0x8000000,
  EOCRClass__28 =  0x10000000,
  OCR_CLASS_28 =  0x10000000,
  EOCRClass__29 =  0x20000000,
  OCR_CLASS_29 =  0x20000000,
  EOCRClass__30 =  0x40000000,
  OCR_CLASS_30 =  0x40000000,
  EOCRClass_Digit =  EOCRClass__0,
  OCR_DIGIT =  EOCRClass__0,
  EOCRClass_UpperCase =  EOCRClass__1,
  OCR_UPPERCASE =  EOCRClass__1,
  EOCRClass_LowerCase =  EOCRClass__2,
  OCR_LOWERCASE =  EOCRClass__2,
  EOCRClass_Special =  EOCRClass__3,
  OCR_SPECIAL =  EOCRClass__3,
  EOCRClass_Extended =  EOCRClass__4,
  OCR_EXTENDED =  EOCRClass__4,
  EOCRClass_AllClasses =  0x7FFFFFFF,
  OCR_ALL_CLASSES =  0x7FFFFFFF,
  OCRClasses_reserved = (unsigned int)~0
};
enum OCRColor
{
  EOCRColor_BlackOnWhite,
  OCR_BLACK_ON_WHITE = EOCRColor_BlackOnWhite,
  EOCRColor_WhiteOnBlack,
  OCR_WHITE_ON_BLACK = EOCRColor_WhiteOnBlack,
  EOCRColor_DarkOnLight,
  OCR_DARK_ON_LIGHT = EOCRColor_DarkOnLight,
  EOCRColor_LightOnDark,
  OCR_LIGHT_ON_DARK = EOCRColor_LightOnDark,
  OCRColor_reserved0 =  0x7FFFFFFF,
  OCRColor_reserved = (unsigned int)~0
};
enum OCRSegmentationMode
{
  ESegmentationMode_KeepObjects,
  OCR_KEEP_OBJECTS = ESegmentationMode_KeepObjects,
  ESegmentationMode_RepasteObjects,
  OCR_REPASTE_OBJECTS = ESegmentationMode_RepasteObjects,
  OCRSegmentationMode_reserved0 =  0x7FFFFFFF,
  OCRSegmentationMode_reserved = (unsigned int)~0
};
enum OCR_MATCHING_MODES
{
  EMatchingMode_Rms,
  OCR_MATCH_RMS = EMatchingMode_Rms,
  EMatchingMode_Standard,
  OCR_MATCH_STANDARD = EMatchingMode_Standard,
  EMatchingMode_Normalized,
  OCR_MATCH_NORMALIZED = EMatchingMode_Normalized,
  OCR_MATCHING_MODES_reserved0 =  0x7FFFFFFF,
  OCR_MATCHING_MODES_reserved = (unsigned int)~0
};
enum OCR_SHIFTING_MODES
{
  EShiftingMode_Chars,
  OCR_SHIFT_CHARS = EShiftingMode_Chars,
  EShiftingMode_Text,
  OCR_SHIFT_TEXT = EShiftingMode_Text,
  OCR_SHIFTING_MODES_reserved0 =  0x7FFFFFFF,
  OCR_SHIFTING_MODES_reserved = (unsigned int)~0
};
enum E_CORRELATION_MODE
{
  ECorrelationMode_Standard,
  E_MATCH_STANDARD = ECorrelationMode_Standard,
  ECorrelationMode_OffsetNormalized,
  E_MATCH_OFFSET_NORMALIZED = ECorrelationMode_OffsetNormalized,
  ECorrelationMode_GainNormalized,
  E_MATCH_GAIN_NORMALIZED = ECorrelationMode_GainNormalized,
  ECorrelationMode_Normalized,
  E_MATCH_NORMALIZED = ECorrelationMode_Normalized,
  E_CORRELATION_MODE_reserved0,
  E_CORRELATION_MODE_reserved1 =  0x7FFFFFFF,
  E_CORRELATION_MODE_reserved = (unsigned int)~0
};
enum MCH_FILTERING_MODE
{
  EFilteringMode_Uniform,
  MCH_UNIFORM = EFilteringMode_Uniform,
  EFilteringMode_LowPass,
  MCH_LOWPASS = EFilteringMode_LowPass,
  MCH_FILTERING_MODE_reserved0,
  MCH_FILTERING_MODE_reserved1 =  0x7FFFFFFF,
  MCH_FILTERING_MODE_reserved = (unsigned int)~0
};
enum OCV_CHAR_CREATION_MODES
{
  ECharCreationMode_Group,
  OCV_CREATE_CHAR_GROUP = ECharCreationMode_Group,
  ECharCreationMode_Overlap,
  OCV_CREATE_CHAR_OVERLAP = ECharCreationMode_Overlap,
  ECharCreationMode_Separate,
  OCV_CREATE_CHAR_SEPARATE = ECharCreationMode_Separate,
  OCV_CHAR_CREATION_MODES_reserved0 =  0x7FFFFFFF,
  OCV_CHAR_CREATION_MODES_reserved = (unsigned int)~0
};
enum OCV_QUALITY_INDICATORS
{
  EQualityIndicator_Location =  0x1,
  OCV_QUALITY_LOCATION =  0x1,
  EQualityIndicator_Area =  0x2,
  OCV_QUALITY_AREA =  0x2,
  EQualityIndicator_Sum =  0x4,
  OCV_QUALITY_SUM =  0x4,
  EQualityIndicator_Correlation =  0x8,
  OCV_QUALITY_CORRELATION =  0x8,
  EQualityIndicator_Contrast =  0x10,
  OCV_QUALITY_CONTRAST =  0x10,
  OCV_QUALITY_INDICATORS_reserved0 =  0x7FFFFFFF,
  OCV_QUALITY_INDICATORS_reserved = (unsigned int)~0
};
enum OCV_DIAGNOSTICS
{
  EDiagnostic_CharNotFound =  0x1,
  OCV_CHAR_NOT_FOUND =  0x1,
  EDiagnostic_CharOverprinting =  0x4,
  OCV_CHAR_OVERPRINTING =  0x4,
  EDiagnostic_CharUnderprinting =  0x8,
  OCV_CHAR_UNDERPRINTING =  0x8,
  EDiagnostic_CharMismatch =  0x10,
  OCV_CHAR_MISMATCH =  0x10,
  EDiagnostic_TextNotFound =  0x2,
  OCV_TEXT_NOT_FOUND =  0x2,
  EDiagnostic_TextOverprinting =  0x20,
  OCV_TEXT_OVERPRINTING =  0x20,
  EDiagnostic_TextUnderprinting =  0x40,
  OCV_TEXT_UNDERPRINTING =  0x40,
  EDiagnostic_TextMismatch =  0x80,
  OCV_TEXT_MISMATCH =  0x80,
  EDiagnostic_BadContrast =  0x100,
  OCV_BAD_CONTRAST =  0x100,
  OCV_DIAGNOSTICS_reserved0 =  0x200,
  OCV_DIAGNOSTICS_reserved1 =  0x400,
  EDiagnostic_Undefined =  0x7FFFFFFF,
  OCV_DIAGNOSTICS_UNKNOWN =  0x7FFFFFFF,
  OCV_DIAGNOSTICS_reserved = (unsigned int)~0
};
enum OCV_LOCATION_MODE
{
  ELocationMode_Raw,
  OCV_LOCATION_RAW = ELocationMode_Raw,
  ELocationMode_Binarized,
  OCV_LOCATION_BINARIZED = ELocationMode_Binarized,
  ELocationMode_Gradient,
  OCV_LOCATION_GRADIENT = ELocationMode_Gradient,
  ELocationMode_Laplacian,
  OCV_LOCATION_LAPLACIAN = ELocationMode_Laplacian,
  OCV_LOCATION_MODE_reserved0 =  0x7FFFFFFF,
  OCV_LOCATION_MODE_reserved = (unsigned int)~0
};
enum OCV_NORMALIZATION_MODE
{
  ENormalizationMode_NoNormalization,
  OCV_NORMALIZE_NONE = ENormalizationMode_NoNormalization,
  ENormalizationMode_Moments,
  OCV_NORMALIZE_MOMENTS = ENormalizationMode_Moments,
  ENormalizationMode_Threshold,
  OCV_NORMALIZE_THRESHOLD = ENormalizationMode_Threshold,
  OCV_NORMALIZATION_MODE_reserved0 =  0x7FFFFFFF,
  OCV_NORMALIZATION_MODE_reserved = (unsigned int)~0
};
enum OCV_LEARNING_MODES
{
  ELearningMode_Reset,
  OCV_RESET = ELearningMode_Reset,
  ELearningMode_Template,
  OCV_TEMPLATE = ELearningMode_Template,
  ELearningMode_Average,
  OCV_AVERAGE = ELearningMode_Average,
  ELearningMode_RmsDeviation,
  OCV_RMS_DEVIATION = ELearningMode_RmsDeviation,
  ELearningMode_AbsDeviation,
  OCV_ABS_DEVIATION = ELearningMode_AbsDeviation,
  ELearningMode_Ready,
  OCV_READY = ELearningMode_Ready,
  OCV_LEARNING_MODES_reserved0,
  OCV_LEARNING_MODES_reserved1,
  OCV_LEARNING_MODES_reserved2 =  0x7FFFFFFF,
  OCV_LEARNING_MODES_reserved = (unsigned int)~0
};
enum ROI_HIT
{
  ERoiHit_NoHit,
  ROI_NONE = ERoiHit_NoHit,
  ERoiHit_Learn_0,
  LEARN_0 = ERoiHit_Learn_0,
  ERoiHit_Learn_1,
  LEARN_1 = ERoiHit_Learn_1,
  ERoiHit_Match_0,
  MATCH_0 = ERoiHit_Match_0,
  ERoiHit_Match_1,
  MATCH_1 = ERoiHit_Match_1,
  ERoiHit_Inspect,
  INSPECT = ERoiHit_Inspect,
  ROI_HIT_reserved = (unsigned int)~0
};
enum OCV_DEGREES_OF_FREEDOM
{
  EDegreesOfFreedom_Translation =  0x1,
  OCV_TRANSLATION =  0x1,
  EDegreesOfFreedom_Rotation =  0x2,
  OCV_ROTATION =  0x2,
  EDegreesOfFreedom_Scaling =  0x4,
  OCV_SCALING =  0x4,
  OCV_DEGREES_OF_FREEDOM_reserved0 =  0x7FFFFFFF,
  OCV_DEGREES_OF_FREEDOM_reserved = (unsigned int)~0
};
enum MCH_CONTRAST_MODE
{
  EMatchContrastMode_Normal,
  MCH_CONTRAST_NORMAL = EMatchContrastMode_Normal,
  EMatchContrastMode_Inverse,
  MCH_CONTRAST_INVERSE = EMatchContrastMode_Inverse,
  EMatchContrastMode_Any,
  MCH_CONTRAST_ANY = EMatchContrastMode_Any,
  MCH_CONTRAST_MODE_reserved0 =  0x7FFFFFFF,
  MCH_CONTRAST_MODE_reserved = (unsigned int)~0
};
enum EHarrisThresholdingMode
{
  EHarrisThresholdingMode_Relative,
  EHarrisThresholdingMode_Absolute,
  EHarrisThresholdingMode_reserved = (unsigned int)~0
};
enum ECannyThresholdingMode
{
  ECannyThresholdingMode_Relative,
  ECannyThresholdingMode_Absolute,
  ECannyThresholdingMode_reserved = (unsigned int)~0
};
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
enum EDoubleThresholdMode
{
  EDoubleThresholdMode_Inside,
  EDoubleThresholdMode_Outside,
  EDoubleThresholdMode_reserved = (unsigned int)~0
};
enum ERectangleMode
{
  ERectangleMode_EntirelyInside,
  ERectangleMode_EntirelyOutside,
  ERectangleMode_InsideOrOnBorder,
  ERectangleMode_OutsideOrOnBorder,
  ERectangleMode_OnBorder,
  ERectangleMode_reserved = (unsigned int)~0
};
enum EGrayscaleSingleThreshold
{
  EGrayscaleSingleThreshold_Absolute,
  EGrayscaleSingleThreshold_Relative,
  EGrayscaleSingleThreshold_MinResidue,
  EGrayscaleSingleThreshold_MaxEntropy,
  EGrayscaleSingleThreshold_IsoData,
  EGrayscaleSingleThreshold_reserved = (unsigned int)~0
};
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
enum ESortDirection
{
  ESortDirection_Ascending,
  ESortDirection_Descending,
  ESortDirection_reserved = (unsigned int)~0
};
enum EEncodingConnexity
{
  EEncodingConnexity_Four,
  EEncodingConnexity_Eight,
  EEncodingConnexity_reserved = (unsigned int)~0
};
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
enum EHitAndMissValue
{
  EHitAndMissValue_Background,
  EHitAndMissValue_DontCare,
  EHitAndMissValue_Foreground,
  EHitAndMissValue_reserved = (unsigned int)~0
};
enum EQRCodeModel
{
  EQRCodeModel_Model1,
  EQRCodeModel_Model2,
  EQRCodeModel_MicroQR,
  EQRCodeModel_reserved = (unsigned int)~0
};
enum EQRCodeLevel
{
  EQRCodeLevel_L,
  EQRCodeLevel_M,
  EQRCodeLevel_Q,
  EQRCodeLevel_H,
  EQRCodeLevel_reserved = (unsigned int)~0
};
enum EQRCodeCodingMode
{
  EQRCodeCodingMode_Basic,
  EQRCodeCodingMode_Fnc1_Gs1,
  EQRCodeCodingMode_Fnc1_Aim,
  EQRCodeCodingMode_reserved = (unsigned int)~0
};
enum EQRCodeEncoding
{
  EQRCodeEncoding_Numeric,
  EQRCodeEncoding_Alphanumeric,
  EQRCodeEncoding_Byte,
  EQRCodeEncoding_Kanji,
  EQRCodeEncoding_reserved = (unsigned int)~0
};
enum EQRCodeScanPrecision
{
  EQRCodeScanPrecision_Automatic,
  EQRCodeScanPrecision_Fine,
  EQRCodeScanPrecision_Coarse,
  EQRCodeScanPrecision_reserved = (unsigned int)~0
};
enum EQRCodePerspectiveMode
{
  EQRCodePerspectiveMode_Basic,
  EQRCodePerspectiveMode_Improved,
  EQRCodePerspectiveMode_reserved = (unsigned int)~0
};
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

namespace Wrapper
{

  namespace Internal_Legacy_Open_eVision_1_2
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

  namespace eVision
  {

    namespace EasyMatrixCode
    {

      namespace LogicalSize
      {
        enum Type
        {
          ELogicalSize__9x9,
          _9x9 = ELogicalSize__9x9,
          ELogicalSize__11x11,
          _11x11 = ELogicalSize__11x11,
          ELogicalSize__13x13,
          _13x13 = ELogicalSize__13x13,
          ELogicalSize__15x15,
          _15x15 = ELogicalSize__15x15,
          ELogicalSize__17x17,
          _17x17 = ELogicalSize__17x17,
          ELogicalSize__19x19,
          _19x19 = ELogicalSize__19x19,
          ELogicalSize__21x21,
          _21x21 = ELogicalSize__21x21,
          ELogicalSize__23x23,
          _23x23 = ELogicalSize__23x23,
          ELogicalSize__25x25,
          _25x25 = ELogicalSize__25x25,
          ELogicalSize__27x27,
          _27x27 = ELogicalSize__27x27,
          ELogicalSize__29x29,
          _29x29 = ELogicalSize__29x29,
          ELogicalSize__31x31,
          _31x31 = ELogicalSize__31x31,
          ELogicalSize__33x33,
          _33x33 = ELogicalSize__33x33,
          ELogicalSize__35x35,
          _35x35 = ELogicalSize__35x35,
          ELogicalSize__37x37,
          _37x37 = ELogicalSize__37x37,
          ELogicalSize__39x39,
          _39x39 = ELogicalSize__39x39,
          ELogicalSize__41x41,
          _41x41 = ELogicalSize__41x41,
          ELogicalSize__43x43,
          _43x43 = ELogicalSize__43x43,
          ELogicalSize__45x45,
          _45x45 = ELogicalSize__45x45,
          ELogicalSize__47x47,
          _47x47 = ELogicalSize__47x47,
          ELogicalSize__49x49,
          _49x49 = ELogicalSize__49x49,
          ELogicalSize__10x10,
          _10x10 = ELogicalSize__10x10,
          ELogicalSize__12x12,
          _12x12 = ELogicalSize__12x12,
          ELogicalSize__14x14,
          _14x14 = ELogicalSize__14x14,
          ELogicalSize__16x16,
          _16x16 = ELogicalSize__16x16,
          ELogicalSize__18x18,
          _18x18 = ELogicalSize__18x18,
          ELogicalSize__20x20,
          _20x20 = ELogicalSize__20x20,
          ELogicalSize__22x22,
          _22x22 = ELogicalSize__22x22,
          ELogicalSize__24x24,
          _24x24 = ELogicalSize__24x24,
          ELogicalSize__26x26,
          _26x26 = ELogicalSize__26x26,
          ELogicalSize__32x32,
          _32x32 = ELogicalSize__32x32,
          ELogicalSize__36x36,
          _36x36 = ELogicalSize__36x36,
          ELogicalSize__40x40,
          _40x40 = ELogicalSize__40x40,
          ELogicalSize__44x44,
          _44x44 = ELogicalSize__44x44,
          ELogicalSize__48x48,
          _48x48 = ELogicalSize__48x48,
          ELogicalSize__52x52,
          _52x52 = ELogicalSize__52x52,
          ELogicalSize__64x64,
          _64x64 = ELogicalSize__64x64,
          ELogicalSize__72x72,
          _72x72 = ELogicalSize__72x72,
          ELogicalSize__80x80,
          _80x80 = ELogicalSize__80x80,
          ELogicalSize__88x88,
          _88x88 = ELogicalSize__88x88,
          ELogicalSize__96x96,
          _96x96 = ELogicalSize__96x96,
          ELogicalSize__104x104,
          _104x104 = ELogicalSize__104x104,
          ELogicalSize__120x120,
          _120x120 = ELogicalSize__120x120,
          ELogicalSize__132x132,
          _132x132 = ELogicalSize__132x132,
          ELogicalSize__144x144,
          _144x144 = ELogicalSize__144x144,
          ELogicalSize__8x18,
          _8x18 = ELogicalSize__8x18,
          ELogicalSize__8x32,
          _8x32 = ELogicalSize__8x32,
          ELogicalSize__12x26,
          _12x26 = ELogicalSize__12x26,
          ELogicalSize__12x36,
          _12x36 = ELogicalSize__12x36,
          ELogicalSize__16x36,
          _16x36 = ELogicalSize__16x36,
          ELogicalSize__16x48,
          _16x48 = ELogicalSize__16x48,
          ELogicalSize_Unknown =  0x7FFFFFFF,
          Unknown =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyMatrixCode
    {

      namespace Contrast
      {
        enum Type
        {
          EMatrixCodeContrastMode_BlackOnWhite =  0,
          BlackOnWhite =  0,
          EMatrixCodeContrastMode_WhiteOnBlack =  1,
          WhiteOnBlack =  1,
          Type_reserved0 =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyMatrixCode
    {

      namespace Flipping
      {
        enum Type
        {
          EFlipping_Yes,
          Yes = EFlipping_Yes,
          EFlipping_No,
          No = EFlipping_No,
          EFlipping_Unknown =  0x7FFFFFFF,
          Unknown =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyMatrixCode
    {

      namespace Family
      {
        enum Type
        {
          EFamily_ECC000,
          ECC000 = EFamily_ECC000,
          EFamily_ECC050,
          ECC050 = EFamily_ECC050,
          EFamily_ECC080,
          ECC080 = EFamily_ECC080,
          EFamily_ECC100,
          ECC100 = EFamily_ECC100,
          EFamily_ECC140,
          ECC140 = EFamily_ECC140,
          EFamily_ECC200,
          ECC200 = EFamily_ECC200,
          EFamily_Unknown =  0x7FFFFFFF,
          Unknown =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyMatrixCode
    {

      namespace LearnParams
      {
        enum Type
        {
          ELearnParam_LogicalSize =  0x0,
          LogicalSize =  0x0,
          ELearnParam_ContrastType =  0x1,
          ContrastType =  0x1,
          ELearnParam_Flipping =  0x2,
          Flipping =  0x2,
          ELearnParam_Family =  0x3,
          Family =  0x3,
          ELearnParam_NumItems =  0x4,
          NumItems =  0x4,
          Type_reserved0 =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyFind
    {

      namespace Contrast
      {
        enum Type
        {
          EFindContrastMode_Normal =  0,
          Normal =  0,
          EFindContrastMode_Inverse =  1,
          Inverse =  1,
          EFindContrastMode_Any =  2,
          Any =  2,
          EFindContrastMode_PointByPointNormal =  3,
          EFindContrastMode_PointByPointInverse =  4,
          EFindContrastMode_PointByPointAny =  5,
          Type_reserved0 =  EFindContrastMode_PointByPointAny,
          EFindContrastMode_Unknown =  0x7FFFFFFF,
          MCH_CONTRAST_UNKNOWN =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyFind
    {

      namespace ReductionMode
      {
        enum Type
        {
          EReductionMode_Auto,
          Auto = EReductionMode_Auto,
          EReductionMode_Manual,
          Manual = EReductionMode_Manual,
          EReductionMode_Unknown =  0x7FFFFFFF,
          Unknown =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyFind
    {

      namespace LocalSearchMode
      {
        enum Type
        {
          ELocalSearchMode_Basic,
          Basic = ELocalSearchMode_Basic,
          ELocalSearchMode_ExtendedTranslation,
          ExtendedTranslation = ELocalSearchMode_ExtendedTranslation,
          ELocalSearchMode_ExtendedAll,
          ExtendedAll = ELocalSearchMode_ExtendedAll,
          ELocalSearchMode_ExtendedMore,
          ExtendedMore = ELocalSearchMode_ExtendedMore,
          ELocalSearchMode_Reserved =  0x7FFFFFFF,
          Type_reserved0 =  ELocalSearchMode_Reserved,
          ELocalSearchMode_Custom =  ELocalSearchMode_Reserved,
          Custom =  ELocalSearchMode_Reserved,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyFind
    {

      namespace PatternType
      {
        enum Type
        {
          EPatternType_ConsistentEdges,
          ConsistentEdges = EPatternType_ConsistentEdges,
          EPatternType_ContrastingRegions,
          ContrastingRegions = EPatternType_ContrastingRegions,
          EPatternType_ThinStructure,
          ThinStructure = EPatternType_ThinStructure,
          EPatternType_Unknown =  0x7FFFFFFF,
          Unknown =  0x7FFFFFFF,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyFind
    {

      namespace ThinStructureMode
      {
        enum Type
        {
          EThinStructureMode_Auto,
          Auto = EThinStructureMode_Auto,
          EThinStructureMode_Dark,
          Dark = EThinStructureMode_Dark,
          EThinStructureMode_Bright,
          Bright = EThinStructureMode_Bright,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}

namespace Euresys
{

  namespace eVision
  {

    namespace EasyImage
    {

      namespace AdaptiveThresholdMethod
      {
        enum Type
        {
          EAdaptiveThresholdMethod_Mean =  0,
          Mean =  0,
          EAdaptiveThresholdMethod_Median =  1,
          Median =  1,
          EAdaptiveThresholdMethod_Middle =  2,
          Middle =  2,
          Type_reserved = (unsigned int)~0
        };
      }
    }
  }
}
#endif // __WRAPPER_INTERNAL_LEGACY_OPEN_EVISION_1_2_ENUMERATIONS_LEGACY_OPEN_EVISION_1_2_1_2__
