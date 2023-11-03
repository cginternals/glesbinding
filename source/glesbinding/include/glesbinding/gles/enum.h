
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/glesbinding_features.h>


namespace gles
{


enum class GLenum : unsigned int
{
    // AlphaFunction

    GL_NEVER                                                                   = 0x0200,
    GL_LESS                                                                    = 0x0201,
    GL_EQUAL                                                                   = 0x0202,
    GL_LEQUAL                                                                  = 0x0203,
    GL_GREATER                                                                 = 0x0204,
    GL_NOTEQUAL                                                                = 0x0205,
    GL_GEQUAL                                                                  = 0x0206,
    GL_ALWAYS                                                                  = 0x0207,

    // AtomicCounterBufferPName

    GL_ATOMIC_COUNTER_BUFFER_BINDING                                           = 0x92C1,

    // AttributeType

    GL_INT                                                                     = 0x1404,
    GL_UNSIGNED_INT                                                            = 0x1405,
    GL_FLOAT                                                                   = 0x1406,
    GL_INT64_NV                                                                = 0x140E,
    GL_UNSIGNED_INT64_NV                                                       = 0x140F,
    GL_FLOAT_VEC2                                                              = 0x8B50,
    GL_FLOAT_VEC3                                                              = 0x8B51,
    GL_FLOAT_VEC4                                                              = 0x8B52,
    GL_INT_VEC2                                                                = 0x8B53,
    GL_INT_VEC3                                                                = 0x8B54,
    GL_INT_VEC4                                                                = 0x8B55,
    GL_BOOL                                                                    = 0x8B56,
    GL_BOOL_VEC2                                                               = 0x8B57,
    GL_BOOL_VEC3                                                               = 0x8B58,
    GL_BOOL_VEC4                                                               = 0x8B59,
    GL_FLOAT_MAT2                                                              = 0x8B5A,
    GL_FLOAT_MAT3                                                              = 0x8B5B,
    GL_FLOAT_MAT4                                                              = 0x8B5C,
    GL_SAMPLER_2D                                                              = 0x8B5E,
    GL_SAMPLER_3D                                                              = 0x8B5F,
    GL_SAMPLER_3D_OES                                                          = 0x8B5F,
    GL_SAMPLER_CUBE                                                            = 0x8B60,
    GL_SAMPLER_2D_SHADOW                                                       = 0x8B62,
    GL_SAMPLER_2D_SHADOW_EXT                                                   = 0x8B62,
    GL_FLOAT_MAT2x3                                                            = 0x8B65,
    GL_FLOAT_MAT2x3_NV                                                         = 0x8B65,
    GL_FLOAT_MAT2x4                                                            = 0x8B66,
    GL_FLOAT_MAT2x4_NV                                                         = 0x8B66,
    GL_FLOAT_MAT3x2                                                            = 0x8B67,
    GL_FLOAT_MAT3x2_NV                                                         = 0x8B67,
    GL_FLOAT_MAT3x4                                                            = 0x8B68,
    GL_FLOAT_MAT3x4_NV                                                         = 0x8B68,
    GL_FLOAT_MAT4x2                                                            = 0x8B69,
    GL_FLOAT_MAT4x2_NV                                                         = 0x8B69,
    GL_FLOAT_MAT4x3                                                            = 0x8B6A,
    GL_FLOAT_MAT4x3_NV                                                         = 0x8B6A,
    GL_SAMPLER_BUFFER                                                          = 0x8DC2,
    GL_SAMPLER_2D_ARRAY_SHADOW                                                 = 0x8DC4,
    GL_SAMPLER_CUBE_SHADOW                                                     = 0x8DC5,
    GL_UNSIGNED_INT_VEC2                                                       = 0x8DC6,
    GL_UNSIGNED_INT_VEC3                                                       = 0x8DC7,
    GL_UNSIGNED_INT_VEC4                                                       = 0x8DC8,
    GL_INT_SAMPLER_2D                                                          = 0x8DCA,
    GL_INT_SAMPLER_3D                                                          = 0x8DCB,
    GL_INT_SAMPLER_CUBE                                                        = 0x8DCC,
    GL_INT_SAMPLER_2D_ARRAY                                                    = 0x8DCF,
    GL_INT_SAMPLER_BUFFER                                                      = 0x8DD0,
    GL_UNSIGNED_INT_SAMPLER_2D                                                 = 0x8DD2,
    GL_UNSIGNED_INT_SAMPLER_3D                                                 = 0x8DD3,
    GL_UNSIGNED_INT_SAMPLER_CUBE                                               = 0x8DD4,
    GL_UNSIGNED_INT_SAMPLER_2D_ARRAY                                           = 0x8DD7,
    GL_UNSIGNED_INT_SAMPLER_BUFFER                                             = 0x8DD8,
    GL_SAMPLER_CUBE_MAP_ARRAY                                                  = 0x900C,
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW                                           = 0x900D,
    GL_INT_SAMPLER_CUBE_MAP_ARRAY                                              = 0x900E,
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY                                     = 0x900F,
    GL_IMAGE_2D                                                                = 0x904D,
    GL_IMAGE_3D                                                                = 0x904E,
    GL_IMAGE_CUBE                                                              = 0x9050,
    GL_IMAGE_BUFFER                                                            = 0x9051,
    GL_IMAGE_2D_ARRAY                                                          = 0x9053,
    GL_IMAGE_CUBE_MAP_ARRAY                                                    = 0x9054,
    GL_INT_IMAGE_2D                                                            = 0x9058,
    GL_INT_IMAGE_3D                                                            = 0x9059,
    GL_INT_IMAGE_CUBE                                                          = 0x905B,
    GL_INT_IMAGE_BUFFER                                                        = 0x905C,
    GL_INT_IMAGE_2D_ARRAY                                                      = 0x905E,
    GL_INT_IMAGE_CUBE_MAP_ARRAY                                                = 0x905F,
    GL_UNSIGNED_INT_IMAGE_2D                                                   = 0x9063,
    GL_UNSIGNED_INT_IMAGE_3D                                                   = 0x9064,
    GL_UNSIGNED_INT_IMAGE_CUBE                                                 = 0x9066,
    GL_UNSIGNED_INT_IMAGE_BUFFER                                               = 0x9067,
    GL_UNSIGNED_INT_IMAGE_2D_ARRAY                                             = 0x9069,
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY                                       = 0x906A,
    GL_SAMPLER_2D_MULTISAMPLE                                                  = 0x9108,
    GL_INT_SAMPLER_2D_MULTISAMPLE                                              = 0x9109,
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE                                     = 0x910A,
    GL_SAMPLER_2D_MULTISAMPLE_ARRAY                                            = 0x910B,
    GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                                        = 0x910C,
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                               = 0x910D,

    // BindTransformFeedbackTarget

    GL_TRANSFORM_FEEDBACK                                                      = 0x8E22,

    // BinormalPointerTypeEXT

    GL_BYTE                                                                    = 0x1400,
    GL_SHORT                                                                   = 0x1402,
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // BlendEquationModeEXT

    GL_FUNC_ADD                                                                = 0x8006,
    GL_FUNC_ADD_EXT                                                            = 0x8006,
    GL_MIN                                                                     = 0x8007,
    GL_MIN_EXT                                                                 = 0x8007,
    GL_MAX                                                                     = 0x8008,
    GL_MAX_EXT                                                                 = 0x8008,
    GL_FUNC_SUBTRACT                                                           = 0x800A,
    GL_FUNC_REVERSE_SUBTRACT                                                   = 0x800B,

    // BlendingFactor

    GL_ZERO                                                                    = 0,
    GL_SRC_COLOR                                                               = 0x0300,
    GL_ONE_MINUS_SRC_COLOR                                                     = 0x0301,
    GL_SRC_ALPHA                                                               = 0x0302,
    GL_ONE_MINUS_SRC_ALPHA                                                     = 0x0303,
    GL_DST_ALPHA                                                               = 0x0304,
    GL_ONE_MINUS_DST_ALPHA                                                     = 0x0305,
    GL_DST_COLOR                                                               = 0x0306,
    GL_ONE_MINUS_DST_COLOR                                                     = 0x0307,
    GL_SRC_ALPHA_SATURATE                                                      = 0x0308,
    GL_CONSTANT_COLOR                                                          = 0x8001,
    GL_ONE_MINUS_CONSTANT_COLOR                                                = 0x8002,
    GL_CONSTANT_ALPHA                                                          = 0x8003,
    GL_ONE_MINUS_CONSTANT_ALPHA                                                = 0x8004,
    GL_ONE                                                                     = 1,

    // BlitFramebufferFilter

    GL_NEAREST                                                                 = 0x2600,
    GL_LINEAR                                                                  = 0x2601,

    // Buffer

    GL_COLOR                                                                   = 0x1800,
    GL_DEPTH                                                                   = 0x1801,
    GL_STENCIL                                                                 = 0x1802,

    // BufferAccessARB

    GL_READ_ONLY                                                               = 0x88B8,
    GL_WRITE_ONLY                                                              = 0x88B9,
    GL_READ_WRITE                                                              = 0x88BA,

    // BufferBitQCOM

    GL_COLOR_BUFFER_BIT0_QCOM                                                  = 0x00000001,
    GL_COLOR_BUFFER_BIT1_QCOM                                                  = 0x00000002,
    GL_COLOR_BUFFER_BIT2_QCOM                                                  = 0x00000004,
    GL_COLOR_BUFFER_BIT3_QCOM                                                  = 0x00000008,
    GL_COLOR_BUFFER_BIT4_QCOM                                                  = 0x00000010,
    GL_COLOR_BUFFER_BIT5_QCOM                                                  = 0x00000020,
    GL_COLOR_BUFFER_BIT6_QCOM                                                  = 0x00000040,
    GL_COLOR_BUFFER_BIT7_QCOM                                                  = 0x00000080,
    GL_DEPTH_BUFFER_BIT0_QCOM                                                  = 0x00000100,
    GL_DEPTH_BUFFER_BIT1_QCOM                                                  = 0x00000200,
    GL_DEPTH_BUFFER_BIT2_QCOM                                                  = 0x00000400,
    GL_DEPTH_BUFFER_BIT3_QCOM                                                  = 0x00000800,
    GL_DEPTH_BUFFER_BIT4_QCOM                                                  = 0x00001000,
    GL_DEPTH_BUFFER_BIT5_QCOM                                                  = 0x00002000,
    GL_DEPTH_BUFFER_BIT6_QCOM                                                  = 0x00004000,
    GL_DEPTH_BUFFER_BIT7_QCOM                                                  = 0x00008000,
    GL_STENCIL_BUFFER_BIT0_QCOM                                                = 0x00010000,
    GL_STENCIL_BUFFER_BIT1_QCOM                                                = 0x00020000,
    GL_STENCIL_BUFFER_BIT2_QCOM                                                = 0x00040000,
    GL_STENCIL_BUFFER_BIT3_QCOM                                                = 0x00080000,
    GL_STENCIL_BUFFER_BIT4_QCOM                                                = 0x00100000,
    GL_STENCIL_BUFFER_BIT5_QCOM                                                = 0x00200000,
    GL_STENCIL_BUFFER_BIT6_QCOM                                                = 0x00400000,
    GL_STENCIL_BUFFER_BIT7_QCOM                                                = 0x00800000,
    GL_MULTISAMPLE_BUFFER_BIT0_QCOM                                            = 0x01000000,
    GL_MULTISAMPLE_BUFFER_BIT1_QCOM                                            = 0x02000000,
    GL_MULTISAMPLE_BUFFER_BIT2_QCOM                                            = 0x04000000,
    GL_MULTISAMPLE_BUFFER_BIT3_QCOM                                            = 0x08000000,
    GL_MULTISAMPLE_BUFFER_BIT4_QCOM                                            = 0x10000000,
    GL_MULTISAMPLE_BUFFER_BIT5_QCOM                                            = 0x20000000,
    GL_MULTISAMPLE_BUFFER_BIT6_QCOM                                            = 0x40000000,
    GL_MULTISAMPLE_BUFFER_BIT7_QCOM                                            = 0x80000000,

    // BufferPNameARB

    GL_BUFFER_SIZE                                                             = 0x8764,
    GL_BUFFER_USAGE                                                            = 0x8765,
    GL_BUFFER_MAPPED                                                           = 0x88BC,
    GL_BUFFER_ACCESS_FLAGS                                                     = 0x911F,
    GL_BUFFER_MAP_LENGTH                                                       = 0x9120,
    GL_BUFFER_MAP_OFFSET                                                       = 0x9121,

    // BufferPointerNameARB

    GL_BUFFER_MAP_POINTER                                                      = 0x88BD,

    // BufferStorageTarget

    GL_ARRAY_BUFFER                                                            = 0x8892,
    GL_ELEMENT_ARRAY_BUFFER                                                    = 0x8893,
    GL_PIXEL_PACK_BUFFER                                                       = 0x88EB,
    GL_PIXEL_UNPACK_BUFFER                                                     = 0x88EC,
    GL_UNIFORM_BUFFER                                                          = 0x8A11,
    GL_TEXTURE_BUFFER                                                          = 0x8C2A,
    GL_TRANSFORM_FEEDBACK_BUFFER                                               = 0x8C8E,
    GL_COPY_READ_BUFFER                                                        = 0x8F36,
    GL_COPY_WRITE_BUFFER                                                       = 0x8F37,
    GL_DRAW_INDIRECT_BUFFER                                                    = 0x8F3F,
    GL_SHADER_STORAGE_BUFFER                                                   = 0x90D2,
    GL_DISPATCH_INDIRECT_BUFFER                                                = 0x90EE,
    GL_ATOMIC_COUNTER_BUFFER                                                   = 0x92C0,

    // BufferTargetARB

//  GL_ARRAY_BUFFER                                                            = 0x8892, // reuse BufferStorageTarget
//  GL_ELEMENT_ARRAY_BUFFER                                                    = 0x8893, // reuse BufferStorageTarget
//  GL_PIXEL_PACK_BUFFER                                                       = 0x88EB, // reuse BufferStorageTarget
//  GL_PIXEL_UNPACK_BUFFER                                                     = 0x88EC, // reuse BufferStorageTarget
//  GL_UNIFORM_BUFFER                                                          = 0x8A11, // reuse BufferStorageTarget
//  GL_TEXTURE_BUFFER                                                          = 0x8C2A, // reuse BufferStorageTarget
//  GL_TRANSFORM_FEEDBACK_BUFFER                                               = 0x8C8E, // reuse BufferStorageTarget
//  GL_COPY_READ_BUFFER                                                        = 0x8F36, // reuse BufferStorageTarget
//  GL_COPY_WRITE_BUFFER                                                       = 0x8F37, // reuse BufferStorageTarget
//  GL_DRAW_INDIRECT_BUFFER                                                    = 0x8F3F, // reuse BufferStorageTarget
//  GL_SHADER_STORAGE_BUFFER                                                   = 0x90D2, // reuse BufferStorageTarget
//  GL_DISPATCH_INDIRECT_BUFFER                                                = 0x90EE, // reuse BufferStorageTarget
//  GL_ATOMIC_COUNTER_BUFFER                                                   = 0x92C0, // reuse BufferStorageTarget

    // BufferUsageARB

    GL_STREAM_DRAW                                                             = 0x88E0,
    GL_STREAM_READ                                                             = 0x88E1,
    GL_STREAM_COPY                                                             = 0x88E2,
    GL_STATIC_DRAW                                                             = 0x88E4,
    GL_STATIC_READ                                                             = 0x88E5,
    GL_STATIC_COPY                                                             = 0x88E6,
    GL_DYNAMIC_DRAW                                                            = 0x88E8,
    GL_DYNAMIC_READ                                                            = 0x88E9,
    GL_DYNAMIC_COPY                                                            = 0x88EA,

    // ClampColorModeARB


    // ColorBuffer

    GL_NONE                                                                    = 0,
    GL_FRONT                                                                   = 0x0404,
    GL_BACK                                                                    = 0x0405,
    GL_FRONT_AND_BACK                                                          = 0x0408,
    GL_COLOR_ATTACHMENT0                                                       = 0x8CE0,
    GL_COLOR_ATTACHMENT1                                                       = 0x8CE1,
    GL_COLOR_ATTACHMENT2                                                       = 0x8CE2,
    GL_COLOR_ATTACHMENT3                                                       = 0x8CE3,
    GL_COLOR_ATTACHMENT4                                                       = 0x8CE4,
    GL_COLOR_ATTACHMENT5                                                       = 0x8CE5,
    GL_COLOR_ATTACHMENT6                                                       = 0x8CE6,
    GL_COLOR_ATTACHMENT7                                                       = 0x8CE7,
    GL_COLOR_ATTACHMENT8                                                       = 0x8CE8,
    GL_COLOR_ATTACHMENT9                                                       = 0x8CE9,
    GL_COLOR_ATTACHMENT10                                                      = 0x8CEA,
    GL_COLOR_ATTACHMENT11                                                      = 0x8CEB,
    GL_COLOR_ATTACHMENT12                                                      = 0x8CEC,
    GL_COLOR_ATTACHMENT13                                                      = 0x8CED,
    GL_COLOR_ATTACHMENT14                                                      = 0x8CEE,
    GL_COLOR_ATTACHMENT15                                                      = 0x8CEF,
    GL_COLOR_ATTACHMENT16                                                      = 0x8CF0,
    GL_COLOR_ATTACHMENT17                                                      = 0x8CF1,
    GL_COLOR_ATTACHMENT18                                                      = 0x8CF2,
    GL_COLOR_ATTACHMENT19                                                      = 0x8CF3,
    GL_COLOR_ATTACHMENT20                                                      = 0x8CF4,
    GL_COLOR_ATTACHMENT21                                                      = 0x8CF5,
    GL_COLOR_ATTACHMENT22                                                      = 0x8CF6,
    GL_COLOR_ATTACHMENT23                                                      = 0x8CF7,
    GL_COLOR_ATTACHMENT24                                                      = 0x8CF8,
    GL_COLOR_ATTACHMENT25                                                      = 0x8CF9,
    GL_COLOR_ATTACHMENT26                                                      = 0x8CFA,
    GL_COLOR_ATTACHMENT27                                                      = 0x8CFB,
    GL_COLOR_ATTACHMENT28                                                      = 0x8CFC,
    GL_COLOR_ATTACHMENT29                                                      = 0x8CFD,
    GL_COLOR_ATTACHMENT30                                                      = 0x8CFE,
    GL_COLOR_ATTACHMENT31                                                      = 0x8CFF,

    // ColorPointerType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
    GL_UNSIGNED_BYTE                                                           = 0x1401,
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
    GL_UNSIGNED_SHORT                                                          = 0x1403,
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // CombinerBiasNV

//  GL_NONE                                                                    = 0, // reuse ColorBuffer

    // CombinerComponentUsageNV

    GL_BLUE                                                                    = 0x1905,
    GL_ALPHA                                                                   = 0x1906,
    GL_RGB                                                                     = 0x1907,

    // CombinerPortionNV

//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV
//  GL_RGB                                                                     = 0x1907, // reuse CombinerComponentUsageNV

    // CombinerRegisterNV

    GL_PRIMARY_COLOR_NV                                                        = 0x852C,
    GL_SECONDARY_COLOR_NV                                                      = 0x852D,

    // CombinerScaleNV

//  GL_NONE                                                                    = 0, // reuse ColorBuffer

    // ContainerType

    GL_PROGRAM_OBJECT_EXT                                                      = 0x8B40,

    // CopyBufferSubDataTarget

//  GL_ARRAY_BUFFER                                                            = 0x8892, // reuse BufferStorageTarget
//  GL_ELEMENT_ARRAY_BUFFER                                                    = 0x8893, // reuse BufferStorageTarget
//  GL_PIXEL_PACK_BUFFER                                                       = 0x88EB, // reuse BufferStorageTarget
//  GL_PIXEL_UNPACK_BUFFER                                                     = 0x88EC, // reuse BufferStorageTarget
//  GL_UNIFORM_BUFFER                                                          = 0x8A11, // reuse BufferStorageTarget
//  GL_TEXTURE_BUFFER                                                          = 0x8C2A, // reuse BufferStorageTarget
//  GL_TRANSFORM_FEEDBACK_BUFFER                                               = 0x8C8E, // reuse BufferStorageTarget
//  GL_COPY_READ_BUFFER                                                        = 0x8F36, // reuse BufferStorageTarget
//  GL_COPY_WRITE_BUFFER                                                       = 0x8F37, // reuse BufferStorageTarget
//  GL_DRAW_INDIRECT_BUFFER                                                    = 0x8F3F, // reuse BufferStorageTarget
//  GL_SHADER_STORAGE_BUFFER                                                   = 0x90D2, // reuse BufferStorageTarget
//  GL_DISPATCH_INDIRECT_BUFFER                                                = 0x90EE, // reuse BufferStorageTarget
//  GL_ATOMIC_COUNTER_BUFFER                                                   = 0x92C0, // reuse BufferStorageTarget

    // CopyImageSubDataTarget

    GL_TEXTURE_2D                                                              = 0x0DE1,
    GL_TEXTURE_3D                                                              = 0x806F,
    GL_TEXTURE_CUBE_MAP                                                        = 0x8513,
    GL_TEXTURE_2D_ARRAY                                                        = 0x8C1A,
    GL_RENDERBUFFER                                                            = 0x8D41,
    GL_TEXTURE_CUBE_MAP_ARRAY                                                  = 0x9009,
    GL_TEXTURE_2D_MULTISAMPLE                                                  = 0x9100,
    GL_TEXTURE_2D_MULTISAMPLE_ARRAY                                            = 0x9102,

    // DebugSeverity

    GL_DONT_CARE                                                               = 0x1100,
    GL_DEBUG_SEVERITY_NOTIFICATION                                             = 0x826B,
    GL_DEBUG_SEVERITY_HIGH                                                     = 0x9146,
    GL_DEBUG_SEVERITY_MEDIUM                                                   = 0x9147,
    GL_DEBUG_SEVERITY_LOW                                                      = 0x9148,

    // DebugSource

//  GL_DONT_CARE                                                               = 0x1100, // reuse DebugSeverity
    GL_DEBUG_SOURCE_API                                                        = 0x8246,
    GL_DEBUG_SOURCE_WINDOW_SYSTEM                                              = 0x8247,
    GL_DEBUG_SOURCE_SHADER_COMPILER                                            = 0x8248,
    GL_DEBUG_SOURCE_THIRD_PARTY                                                = 0x8249,
    GL_DEBUG_SOURCE_APPLICATION                                                = 0x824A,
    GL_DEBUG_SOURCE_OTHER                                                      = 0x824B,

    // DebugType

//  GL_DONT_CARE                                                               = 0x1100, // reuse DebugSeverity
    GL_DEBUG_TYPE_ERROR                                                        = 0x824C,
    GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR                                          = 0x824D,
    GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR                                           = 0x824E,
    GL_DEBUG_TYPE_PORTABILITY                                                  = 0x824F,
    GL_DEBUG_TYPE_PERFORMANCE                                                  = 0x8250,
    GL_DEBUG_TYPE_OTHER                                                        = 0x8251,
    GL_DEBUG_TYPE_MARKER                                                       = 0x8268,
    GL_DEBUG_TYPE_PUSH_GROUP                                                   = 0x8269,
    GL_DEBUG_TYPE_POP_GROUP                                                    = 0x826A,

    // DepthFunction

//  GL_NEVER                                                                   = 0x0200, // reuse AlphaFunction
//  GL_LESS                                                                    = 0x0201, // reuse AlphaFunction
//  GL_EQUAL                                                                   = 0x0202, // reuse AlphaFunction
//  GL_LEQUAL                                                                  = 0x0203, // reuse AlphaFunction
//  GL_GREATER                                                                 = 0x0204, // reuse AlphaFunction
//  GL_NOTEQUAL                                                                = 0x0205, // reuse AlphaFunction
//  GL_GEQUAL                                                                  = 0x0206, // reuse AlphaFunction
//  GL_ALWAYS                                                                  = 0x0207, // reuse AlphaFunction

    // DepthStencilTextureMode

    GL_STENCIL_INDEX                                                           = 0x1901,
    GL_DEPTH_COMPONENT                                                         = 0x1902,

    // DrawBufferMode

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
//  GL_FRONT                                                                   = 0x0404, // reuse ColorBuffer
//  GL_BACK                                                                    = 0x0405, // reuse ColorBuffer
//  GL_FRONT_AND_BACK                                                          = 0x0408, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT0                                                       = 0x8CE0, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT0_NV                                                    = 0x8CE0,
//  GL_COLOR_ATTACHMENT1                                                       = 0x8CE1, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT1_NV                                                    = 0x8CE1,
//  GL_COLOR_ATTACHMENT2                                                       = 0x8CE2, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT2_NV                                                    = 0x8CE2,
//  GL_COLOR_ATTACHMENT3                                                       = 0x8CE3, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT3_NV                                                    = 0x8CE3,
//  GL_COLOR_ATTACHMENT4                                                       = 0x8CE4, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT4_NV                                                    = 0x8CE4,
//  GL_COLOR_ATTACHMENT5                                                       = 0x8CE5, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT5_NV                                                    = 0x8CE5,
//  GL_COLOR_ATTACHMENT6                                                       = 0x8CE6, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT6_NV                                                    = 0x8CE6,
//  GL_COLOR_ATTACHMENT7                                                       = 0x8CE7, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT7_NV                                                    = 0x8CE7,
//  GL_COLOR_ATTACHMENT8                                                       = 0x8CE8, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT8_NV                                                    = 0x8CE8,
//  GL_COLOR_ATTACHMENT9                                                       = 0x8CE9, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT9_NV                                                    = 0x8CE9,
//  GL_COLOR_ATTACHMENT10                                                      = 0x8CEA, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT10_NV                                                   = 0x8CEA,
//  GL_COLOR_ATTACHMENT11                                                      = 0x8CEB, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT11_NV                                                   = 0x8CEB,
//  GL_COLOR_ATTACHMENT12                                                      = 0x8CEC, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT12_NV                                                   = 0x8CEC,
//  GL_COLOR_ATTACHMENT13                                                      = 0x8CED, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT13_NV                                                   = 0x8CED,
//  GL_COLOR_ATTACHMENT14                                                      = 0x8CEE, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT14_NV                                                   = 0x8CEE,
//  GL_COLOR_ATTACHMENT15                                                      = 0x8CEF, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT15_NV                                                   = 0x8CEF,
//  GL_COLOR_ATTACHMENT16                                                      = 0x8CF0, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT17                                                      = 0x8CF1, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT18                                                      = 0x8CF2, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT19                                                      = 0x8CF3, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT20                                                      = 0x8CF4, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT21                                                      = 0x8CF5, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT22                                                      = 0x8CF6, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT23                                                      = 0x8CF7, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT24                                                      = 0x8CF8, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT25                                                      = 0x8CF9, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT26                                                      = 0x8CFA, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT27                                                      = 0x8CFB, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT28                                                      = 0x8CFC, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT29                                                      = 0x8CFD, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT30                                                      = 0x8CFE, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT31                                                      = 0x8CFF, // reuse ColorBuffer

    // DrawElementsType

//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // ElementPointerTypeATI

//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // EnableCap

    GL_CULL_FACE                                                               = 0x0B44,
    GL_DEPTH_TEST                                                              = 0x0B71,
    GL_STENCIL_TEST                                                            = 0x0B90,
    GL_DITHER                                                                  = 0x0BD0,
    GL_BLEND                                                                   = 0x0BE2,
    GL_SCISSOR_TEST                                                            = 0x0C11,
//  GL_TEXTURE_2D                                                              = 0x0DE1, // reuse CopyImageSubDataTarget
    GL_POLYGON_OFFSET_FILL                                                     = 0x8037,
    GL_VERTEX_ARRAY                                                            = 0x8074,
    GL_SAMPLE_ALPHA_TO_COVERAGE                                                = 0x809E,
    GL_SAMPLE_COVERAGE                                                         = 0x80A0,
    GL_DEBUG_OUTPUT_SYNCHRONOUS                                                = 0x8242,
//  GL_TEXTURE_CUBE_MAP                                                        = 0x8513, // reuse CopyImageSubDataTarget
    GL_SAMPLE_SHADING                                                          = 0x8C36,
    GL_RASTERIZER_DISCARD                                                      = 0x8C89,
    GL_PRIMITIVE_RESTART_FIXED_INDEX                                           = 0x8D69,
    GL_SAMPLE_MASK                                                             = 0x8E51,
    GL_FETCH_PER_SAMPLE_ARM                                                    = 0x8F65,
    GL_DEBUG_OUTPUT                                                            = 0x92E0,
    GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV                                     = 0x95B1,
    GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM                                      = 0x96A2,
    GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM                                 = 0x96A5,

    // ErrorCode

    GL_NO_ERROR                                                                = 0,
    GL_INVALID_ENUM                                                            = 0x0500,
    GL_INVALID_VALUE                                                           = 0x0501,
    GL_INVALID_OPERATION                                                       = 0x0502,
    GL_STACK_OVERFLOW                                                          = 0x0503,
    GL_STACK_UNDERFLOW                                                         = 0x0504,
    GL_OUT_OF_MEMORY                                                           = 0x0505,
    GL_INVALID_FRAMEBUFFER_OPERATION                                           = 0x0506,

    // EvalMapsModeNV

    GL_FILL_NV                                                                 = 0x1B02,

    // ExternalHandleType

    GL_HANDLE_TYPE_OPAQUE_FD_EXT                                               = 0x9586,
    GL_HANDLE_TYPE_OPAQUE_WIN32_EXT                                            = 0x9587,
    GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT                                        = 0x9588,
    GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT                                          = 0x9589,
    GL_HANDLE_TYPE_D3D12_RESOURCE_EXT                                          = 0x958A,
    GL_HANDLE_TYPE_D3D11_IMAGE_EXT                                             = 0x958B,
    GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT                                         = 0x958C,
    GL_HANDLE_TYPE_D3D12_FENCE_EXT                                             = 0x9594,

    // FenceConditionNV

    GL_ALL_COMPLETED_NV                                                        = 0x84F2,

    // FenceParameterNameNV

    GL_FENCE_STATUS_NV                                                         = 0x84F3,
    GL_FENCE_CONDITION_NV                                                      = 0x84F4,

    // FogCoordinatePointerType

//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // FogMode

//  GL_LINEAR                                                                  = 0x2601, // reuse BlitFramebufferFilter

    // FogPointerTypeEXT

//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // FogPointerTypeIBM

//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // FoveationConfigBitQCOM

    GL_FOVEATION_ENABLE_BIT_QCOM                                               = 0x00000001,
    GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM                                    = 0x00000002,
    GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM                             = 0x00000004,

    // FragmentShaderGenericSourceATI

//  GL_ZERO                                                                    = 0, // reuse BlendingFactor
    GL_PRIMARY_COLOR                                                           = 0x8577,
//  GL_ONE                                                                     = 1, // reuse BlendingFactor

    // FragmentShaderTextureSourceATI

    GL_TEXTURE0                                                                = 0x84C0,
    GL_TEXTURE1                                                                = 0x84C1,
    GL_TEXTURE2                                                                = 0x84C2,
    GL_TEXTURE3                                                                = 0x84C3,
    GL_TEXTURE4                                                                = 0x84C4,
    GL_TEXTURE5                                                                = 0x84C5,
    GL_TEXTURE6                                                                = 0x84C6,
    GL_TEXTURE7                                                                = 0x84C7,
    GL_TEXTURE8                                                                = 0x84C8,
    GL_TEXTURE9                                                                = 0x84C9,
    GL_TEXTURE10                                                               = 0x84CA,
    GL_TEXTURE11                                                               = 0x84CB,
    GL_TEXTURE12                                                               = 0x84CC,
    GL_TEXTURE13                                                               = 0x84CD,
    GL_TEXTURE14                                                               = 0x84CE,
    GL_TEXTURE15                                                               = 0x84CF,
    GL_TEXTURE16                                                               = 0x84D0,
    GL_TEXTURE17                                                               = 0x84D1,
    GL_TEXTURE18                                                               = 0x84D2,
    GL_TEXTURE19                                                               = 0x84D3,
    GL_TEXTURE20                                                               = 0x84D4,
    GL_TEXTURE21                                                               = 0x84D5,
    GL_TEXTURE22                                                               = 0x84D6,
    GL_TEXTURE23                                                               = 0x84D7,
    GL_TEXTURE24                                                               = 0x84D8,
    GL_TEXTURE25                                                               = 0x84D9,
    GL_TEXTURE26                                                               = 0x84DA,
    GL_TEXTURE27                                                               = 0x84DB,
    GL_TEXTURE28                                                               = 0x84DC,
    GL_TEXTURE29                                                               = 0x84DD,
    GL_TEXTURE30                                                               = 0x84DE,
    GL_TEXTURE31                                                               = 0x84DF,

    // FragmentShaderValueRepATI

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
    GL_RED                                                                     = 0x1903,
    GL_GREEN                                                                   = 0x1904,
//  GL_BLUE                                                                    = 0x1905, // reuse CombinerComponentUsageNV
//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV

    // FramebufferAttachment

    GL_DEPTH_STENCIL_ATTACHMENT                                                = 0x821A,
//  GL_COLOR_ATTACHMENT0                                                       = 0x8CE0, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT1                                                       = 0x8CE1, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT2                                                       = 0x8CE2, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT3                                                       = 0x8CE3, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT4                                                       = 0x8CE4, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT5                                                       = 0x8CE5, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT6                                                       = 0x8CE6, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT7                                                       = 0x8CE7, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT8                                                       = 0x8CE8, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT9                                                       = 0x8CE9, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT10                                                      = 0x8CEA, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT11                                                      = 0x8CEB, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT12                                                      = 0x8CEC, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT13                                                      = 0x8CED, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT14                                                      = 0x8CEE, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT15                                                      = 0x8CEF, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT16                                                      = 0x8CF0, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT17                                                      = 0x8CF1, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT18                                                      = 0x8CF2, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT19                                                      = 0x8CF3, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT20                                                      = 0x8CF4, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT21                                                      = 0x8CF5, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT22                                                      = 0x8CF6, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT23                                                      = 0x8CF7, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT24                                                      = 0x8CF8, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT25                                                      = 0x8CF9, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT26                                                      = 0x8CFA, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT27                                                      = 0x8CFB, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT28                                                      = 0x8CFC, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT29                                                      = 0x8CFD, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT30                                                      = 0x8CFE, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT31                                                      = 0x8CFF, // reuse ColorBuffer
    GL_DEPTH_ATTACHMENT                                                        = 0x8D00,
    GL_STENCIL_ATTACHMENT                                                      = 0x8D20,
    GL_SHADING_RATE_ATTACHMENT_EXT                                             = 0x96D1,

    // FramebufferAttachmentParameterName

    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING                                   = 0x8210,
    GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT                               = 0x8210,
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE                                   = 0x8211,
    GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT                               = 0x8211,
    GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE                                         = 0x8212,
    GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE                                       = 0x8213,
    GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE                                        = 0x8214,
    GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE                                       = 0x8215,
    GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE                                       = 0x8216,
    GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE                                     = 0x8217,
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE                                      = 0x8CD0,
    GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME                                      = 0x8CD1,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL                                    = 0x8CD2,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE                            = 0x8CD3,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES                           = 0x8CD4,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER                                    = 0x8CD4,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT                              = 0x8D6C,
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED                                          = 0x8DA7,
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT                                      = 0x8DA7,
    GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES                                      = 0x8DA7,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG                                = 0x913F,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR                            = 0x9630,
    GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR                      = 0x9632,

    // FramebufferParameterName

    GL_FRAMEBUFFER_DEFAULT_WIDTH                                               = 0x9310,
    GL_FRAMEBUFFER_DEFAULT_HEIGHT                                              = 0x9311,
    GL_FRAMEBUFFER_DEFAULT_LAYERS                                              = 0x9312,
    GL_FRAMEBUFFER_DEFAULT_SAMPLES                                             = 0x9313,
    GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS                              = 0x9314,

    // FramebufferStatus

    GL_FRAMEBUFFER_UNDEFINED                                                   = 0x8219,
    GL_FRAMEBUFFER_COMPLETE                                                    = 0x8CD5,
    GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT                                       = 0x8CD6,
    GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT                               = 0x8CD7,
    GL_FRAMEBUFFER_UNSUPPORTED                                                 = 0x8CDD,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE                                      = 0x8D56,
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS                                    = 0x8DA8,

    // FramebufferTarget

    GL_READ_FRAMEBUFFER                                                        = 0x8CA8,
    GL_DRAW_FRAMEBUFFER                                                        = 0x8CA9,
    GL_FRAMEBUFFER                                                             = 0x8D40,

    // FrontFaceDirection

    GL_CW                                                                      = 0x0900,
    GL_CCW                                                                     = 0x0901,

    // GetFramebufferParameter

    GL_SAMPLE_BUFFERS                                                          = 0x80A8,
    GL_SAMPLES                                                                 = 0x80A9,
    GL_IMPLEMENTATION_COLOR_READ_TYPE                                          = 0x8B9A,
    GL_IMPLEMENTATION_COLOR_READ_FORMAT                                        = 0x8B9B,
//  GL_FRAMEBUFFER_DEFAULT_WIDTH                                               = 0x9310, // reuse FramebufferParameterName
//  GL_FRAMEBUFFER_DEFAULT_HEIGHT                                              = 0x9311, // reuse FramebufferParameterName
//  GL_FRAMEBUFFER_DEFAULT_LAYERS                                              = 0x9312, // reuse FramebufferParameterName
//  GL_FRAMEBUFFER_DEFAULT_SAMPLES                                             = 0x9313, // reuse FramebufferParameterName
//  GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS                              = 0x9314, // reuse FramebufferParameterName

    // GetMultisamplePNameNV

    GL_SAMPLE_POSITION                                                         = 0x8E50,

    // GetPName

    GL_LINE_WIDTH                                                              = 0x0B21,
//  GL_CULL_FACE                                                               = 0x0B44, // reuse EnableCap
    GL_CULL_FACE_MODE                                                          = 0x0B45,
    GL_FRONT_FACE                                                              = 0x0B46,
    GL_DEPTH_RANGE                                                             = 0x0B70,
//  GL_DEPTH_TEST                                                              = 0x0B71, // reuse EnableCap
    GL_DEPTH_WRITEMASK                                                         = 0x0B72,
    GL_DEPTH_CLEAR_VALUE                                                       = 0x0B73,
    GL_DEPTH_FUNC                                                              = 0x0B74,
//  GL_STENCIL_TEST                                                            = 0x0B90, // reuse EnableCap
    GL_STENCIL_CLEAR_VALUE                                                     = 0x0B91,
    GL_STENCIL_FUNC                                                            = 0x0B92,
    GL_STENCIL_VALUE_MASK                                                      = 0x0B93,
    GL_STENCIL_FAIL                                                            = 0x0B94,
    GL_STENCIL_PASS_DEPTH_FAIL                                                 = 0x0B95,
    GL_STENCIL_PASS_DEPTH_PASS                                                 = 0x0B96,
    GL_STENCIL_REF                                                             = 0x0B97,
    GL_STENCIL_WRITEMASK                                                       = 0x0B98,
    GL_VIEWPORT                                                                = 0x0BA2,
    GL_ALPHA_TEST_QCOM                                                         = 0x0BC0,
    GL_ALPHA_TEST_FUNC_QCOM                                                    = 0x0BC1,
    GL_ALPHA_TEST_REF_QCOM                                                     = 0x0BC2,
//  GL_DITHER                                                                  = 0x0BD0, // reuse EnableCap
//  GL_BLEND                                                                   = 0x0BE2, // reuse EnableCap
    GL_DRAW_BUFFER_EXT                                                         = 0x0C01,
    GL_READ_BUFFER                                                             = 0x0C02,
    GL_READ_BUFFER_EXT                                                         = 0x0C02,
    GL_READ_BUFFER_NV                                                          = 0x0C02,
    GL_SCISSOR_BOX                                                             = 0x0C10,
//  GL_SCISSOR_TEST                                                            = 0x0C11, // reuse EnableCap
    GL_COLOR_CLEAR_VALUE                                                       = 0x0C22,
    GL_COLOR_WRITEMASK                                                         = 0x0C23,
    GL_UNPACK_ROW_LENGTH                                                       = 0x0CF2,
    GL_UNPACK_SKIP_ROWS                                                        = 0x0CF3,
    GL_UNPACK_SKIP_PIXELS                                                      = 0x0CF4,
    GL_UNPACK_ALIGNMENT                                                        = 0x0CF5,
    GL_PACK_ROW_LENGTH                                                         = 0x0D02,
    GL_PACK_ROW_LENGTH_NV                                                      = 0x0D02,
    GL_PACK_SKIP_ROWS                                                          = 0x0D03,
    GL_PACK_SKIP_ROWS_NV                                                       = 0x0D03,
    GL_PACK_SKIP_PIXELS                                                        = 0x0D04,
    GL_PACK_SKIP_PIXELS_NV                                                     = 0x0D04,
    GL_PACK_ALIGNMENT                                                          = 0x0D05,
    GL_MAX_TEXTURE_SIZE                                                        = 0x0D33,
    GL_MAX_VIEWPORT_DIMS                                                       = 0x0D3A,
    GL_SUBPIXEL_BITS                                                           = 0x0D50,
    GL_RED_BITS                                                                = 0x0D52,
    GL_GREEN_BITS                                                              = 0x0D53,
    GL_BLUE_BITS                                                               = 0x0D54,
    GL_ALPHA_BITS                                                              = 0x0D55,
    GL_DEPTH_BITS                                                              = 0x0D56,
    GL_STENCIL_BITS                                                            = 0x0D57,
//  GL_TEXTURE_2D                                                              = 0x0DE1, // reuse CopyImageSubDataTarget
    GL_POLYGON_OFFSET_UNITS                                                    = 0x2A00,
    GL_BLEND_COLOR                                                             = 0x8005,
    GL_BLEND_EQUATION                                                          = 0x8009,
    GL_BLEND_EQUATION_EXT                                                      = 0x8009,
    GL_BLEND_EQUATION_RGB                                                      = 0x8009,
//  GL_POLYGON_OFFSET_FILL                                                     = 0x8037, // reuse EnableCap
    GL_POLYGON_OFFSET_FACTOR                                                   = 0x8038,
    GL_TEXTURE_BINDING_2D                                                      = 0x8069,
    GL_TEXTURE_BINDING_3D                                                      = 0x806A,
    GL_UNPACK_SKIP_IMAGES                                                      = 0x806D,
    GL_UNPACK_IMAGE_HEIGHT                                                     = 0x806E,
    GL_MAX_3D_TEXTURE_SIZE                                                     = 0x8073,
//  GL_VERTEX_ARRAY                                                            = 0x8074, // reuse EnableCap
//  GL_SAMPLE_BUFFERS                                                          = 0x80A8, // reuse GetFramebufferParameter
//  GL_SAMPLES                                                                 = 0x80A9, // reuse GetFramebufferParameter
    GL_SAMPLE_COVERAGE_VALUE                                                   = 0x80AA,
    GL_SAMPLE_COVERAGE_INVERT                                                  = 0x80AB,
    GL_BLEND_DST_RGB                                                           = 0x80C8,
    GL_BLEND_SRC_RGB                                                           = 0x80C9,
    GL_BLEND_DST_ALPHA                                                         = 0x80CA,
    GL_BLEND_SRC_ALPHA                                                         = 0x80CB,
    GL_MAX_ELEMENTS_VERTICES                                                   = 0x80E8,
    GL_MAX_ELEMENTS_INDICES                                                    = 0x80E9,
    GL_MAJOR_VERSION                                                           = 0x821B,
    GL_MINOR_VERSION                                                           = 0x821C,
    GL_NUM_EXTENSIONS                                                          = 0x821D,
    GL_CONTEXT_FLAGS                                                           = 0x821E,
    GL_PROGRAM_PIPELINE_BINDING                                                = 0x825A,
    GL_LAYER_PROVOKING_VERTEX                                                  = 0x825E,
    GL_MAX_COMPUTE_UNIFORM_COMPONENTS                                          = 0x8263,
    GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS                                      = 0x8264,
    GL_MAX_COMPUTE_ATOMIC_COUNTERS                                             = 0x8265,
    GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS                                 = 0x8266,
    GL_MAX_DEBUG_GROUP_STACK_DEPTH                                             = 0x826C,
    GL_DEBUG_GROUP_STACK_DEPTH                                                 = 0x826D,
    GL_MAX_UNIFORM_LOCATIONS                                                   = 0x826E,
    GL_VERTEX_BINDING_DIVISOR                                                  = 0x82D6,
    GL_VERTEX_BINDING_OFFSET                                                   = 0x82D7,
    GL_VERTEX_BINDING_STRIDE                                                   = 0x82D8,
    GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET                                       = 0x82D9,
    GL_MAX_VERTEX_ATTRIB_BINDINGS                                              = 0x82DA,
    GL_MAX_LABEL_LENGTH                                                        = 0x82E8,
    GL_ALIASED_POINT_SIZE_RANGE                                                = 0x846D,
    GL_ALIASED_LINE_WIDTH_RANGE                                                = 0x846E,
    GL_ACTIVE_TEXTURE                                                          = 0x84E0,
    GL_MAX_RENDERBUFFER_SIZE                                                   = 0x84E8,
    GL_MAX_TEXTURE_LOD_BIAS                                                    = 0x84FD,
    GL_TEXTURE_BINDING_CUBE_MAP                                                = 0x8514,
    GL_MAX_CUBE_MAP_TEXTURE_SIZE                                               = 0x851C,
    GL_VERTEX_ARRAY_BINDING                                                    = 0x85B5,
    GL_NUM_COMPRESSED_TEXTURE_FORMATS                                          = 0x86A2,
    GL_COMPRESSED_TEXTURE_FORMATS                                              = 0x86A3,
    GL_NUM_PROGRAM_BINARY_FORMATS                                              = 0x87FE,
    GL_PROGRAM_BINARY_FORMATS                                                  = 0x87FF,
    GL_STENCIL_BACK_FUNC                                                       = 0x8800,
    GL_STENCIL_BACK_FAIL                                                       = 0x8801,
    GL_STENCIL_BACK_PASS_DEPTH_FAIL                                            = 0x8802,
    GL_STENCIL_BACK_PASS_DEPTH_PASS                                            = 0x8803,
    GL_MAX_DRAW_BUFFERS                                                        = 0x8824,
    GL_BLEND_EQUATION_ALPHA                                                    = 0x883D,
    GL_MAX_VERTEX_ATTRIBS                                                      = 0x8869,
    GL_MAX_TEXTURE_IMAGE_UNITS                                                 = 0x8872,
    GL_ARRAY_BUFFER_BINDING                                                    = 0x8894,
    GL_ELEMENT_ARRAY_BUFFER_BINDING                                            = 0x8895,
    GL_PIXEL_PACK_BUFFER_BINDING                                               = 0x88ED,
    GL_PIXEL_UNPACK_BUFFER_BINDING                                             = 0x88EF,
    GL_MAX_ARRAY_TEXTURE_LAYERS                                                = 0x88FF,
    GL_MIN_PROGRAM_TEXEL_OFFSET                                                = 0x8904,
    GL_MAX_PROGRAM_TEXEL_OFFSET                                                = 0x8905,
    GL_SAMPLER_BINDING                                                         = 0x8919,
    GL_UNIFORM_BUFFER_BINDING                                                  = 0x8A28,
    GL_UNIFORM_BUFFER_START                                                    = 0x8A29,
    GL_UNIFORM_BUFFER_SIZE                                                     = 0x8A2A,
    GL_MAX_VERTEX_UNIFORM_BLOCKS                                               = 0x8A2B,
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS                                             = 0x8A2C,
    GL_MAX_FRAGMENT_UNIFORM_BLOCKS                                             = 0x8A2D,
    GL_MAX_COMBINED_UNIFORM_BLOCKS                                             = 0x8A2E,
    GL_MAX_UNIFORM_BUFFER_BINDINGS                                             = 0x8A2F,
    GL_MAX_UNIFORM_BLOCK_SIZE                                                  = 0x8A30,
    GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS                                  = 0x8A31,
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS                                = 0x8A32,
    GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS                                = 0x8A33,
    GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT                                         = 0x8A34,
    GL_MAX_FRAGMENT_UNIFORM_COMPONENTS                                         = 0x8B49,
    GL_MAX_VERTEX_UNIFORM_COMPONENTS                                           = 0x8B4A,
    GL_MAX_VARYING_COMPONENTS                                                  = 0x8B4B,
    GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS                                          = 0x8B4C,
    GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS                                        = 0x8B4D,
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT                                         = 0x8B8B,
    GL_CURRENT_PROGRAM                                                         = 0x8B8D,
//  GL_IMPLEMENTATION_COLOR_READ_TYPE                                          = 0x8B9A, // reuse GetFramebufferParameter
//  GL_IMPLEMENTATION_COLOR_READ_FORMAT                                        = 0x8B9B, // reuse GetFramebufferParameter
    GL_TEXTURE_BINDING_2D_ARRAY                                                = 0x8C1D,
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS                                        = 0x8C29,
    GL_MAX_TEXTURE_BUFFER_SIZE                                                 = 0x8C2B,
    GL_TEXTURE_BINDING_BUFFER                                                  = 0x8C2C,
    GL_TRANSFORM_FEEDBACK_BUFFER_START                                         = 0x8C84,
    GL_TRANSFORM_FEEDBACK_BUFFER_SIZE                                          = 0x8C85,
    GL_TRANSFORM_FEEDBACK_BUFFER_BINDING                                       = 0x8C8F,
    GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM                                   = 0x8C90,
    GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM                                   = 0x8C91,
    GL_STENCIL_BACK_REF                                                        = 0x8CA3,
    GL_STENCIL_BACK_VALUE_MASK                                                 = 0x8CA4,
    GL_STENCIL_BACK_WRITEMASK                                                  = 0x8CA5,
    GL_DRAW_FRAMEBUFFER_BINDING                                                = 0x8CA6,
    GL_RENDERBUFFER_BINDING                                                    = 0x8CA7,
    GL_READ_FRAMEBUFFER_BINDING                                                = 0x8CAA,
    GL_MAX_COLOR_ATTACHMENTS                                                   = 0x8CDF,
    GL_MAX_COLOR_ATTACHMENTS_EXT                                               = 0x8CDF,
    GL_MAX_COLOR_ATTACHMENTS_NV                                                = 0x8CDF,
    GL_MAX_ELEMENT_INDEX                                                       = 0x8D6B,
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS                                         = 0x8DDF,
    GL_SHADER_BINARY_FORMATS                                                   = 0x8DF8,
    GL_NUM_SHADER_BINARY_FORMATS                                               = 0x8DF9,
    GL_SHADER_COMPILER                                                         = 0x8DFA,
    GL_MAX_VERTEX_UNIFORM_VECTORS                                              = 0x8DFB,
    GL_MAX_VARYING_VECTORS                                                     = 0x8DFC,
    GL_MAX_FRAGMENT_UNIFORM_VECTORS                                            = 0x8DFD,
    GL_TIMESTAMP_EXT                                                           = 0x8E28,
    GL_MAX_SAMPLE_MASK_WORDS                                                   = 0x8E59,
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS                                         = 0x8E89,
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS                                      = 0x8E8A,
//  GL_FETCH_PER_SAMPLE_ARM                                                    = 0x8F65, // reuse EnableCap
    GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM                               = 0x8F66,
    GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT               = 0x8F6F,
    GL_SHADER_STORAGE_BUFFER_BINDING                                           = 0x90D3,
    GL_SHADER_STORAGE_BUFFER_START                                             = 0x90D4,
    GL_SHADER_STORAGE_BUFFER_SIZE                                              = 0x90D5,
    GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS                                        = 0x90D6,
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS                                      = 0x90D7,
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS                                  = 0x90D8,
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS                               = 0x90D9,
    GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS                                      = 0x90DA,
    GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS                                       = 0x90DB,
    GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS                                      = 0x90DC,
    GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS                                      = 0x90DD,
    GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT                                  = 0x90DF,
    GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS                                      = 0x90EB,
    GL_DISPATCH_INDIRECT_BUFFER_BINDING                                        = 0x90EF,
    GL_TEXTURE_BINDING_2D_MULTISAMPLE                                          = 0x9104,
    GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY                                    = 0x9105,
    GL_MAX_COLOR_TEXTURE_SAMPLES                                               = 0x910E,
    GL_MAX_DEPTH_TEXTURE_SAMPLES                                               = 0x910F,
    GL_MAX_INTEGER_SAMPLES                                                     = 0x9110,
    GL_MAX_SERVER_WAIT_TIMEOUT                                                 = 0x9111,
    GL_MAX_VERTEX_OUTPUT_COMPONENTS                                            = 0x9122,
    GL_MAX_GEOMETRY_INPUT_COMPONENTS                                           = 0x9123,
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS                                          = 0x9124,
    GL_MAX_FRAGMENT_INPUT_COMPONENTS                                           = 0x9125,
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT                                         = 0x919F,
    GL_MAX_COMPUTE_UNIFORM_BLOCKS                                              = 0x91BB,
    GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS                                         = 0x91BC,
    GL_MAX_COMPUTE_WORK_GROUP_COUNT                                            = 0x91BE,
    GL_MAX_COMPUTE_WORK_GROUP_SIZE                                             = 0x91BF,
    GL_MAX_VERTEX_ATOMIC_COUNTERS                                              = 0x92D2,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS                                        = 0x92D3,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS                                     = 0x92D4,
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS                                            = 0x92D5,
    GL_MAX_FRAGMENT_ATOMIC_COUNTERS                                            = 0x92D6,
    GL_MAX_COMBINED_ATOMIC_COUNTERS                                            = 0x92D7,
    GL_MAX_FRAMEBUFFER_WIDTH                                                   = 0x9315,
    GL_MAX_FRAMEBUFFER_HEIGHT                                                  = 0x9316,
    GL_MAX_FRAMEBUFFER_LAYERS                                                  = 0x9317,
    GL_MAX_FRAMEBUFFER_SAMPLES                                                 = 0x9318,
    GL_NUM_DEVICE_UUIDS_EXT                                                    = 0x9596,
    GL_DEVICE_UUID_EXT                                                         = 0x9597,
    GL_DRIVER_UUID_EXT                                                         = 0x9598,
    GL_DEVICE_LUID_EXT                                                         = 0x9599,
    GL_DEVICE_NODE_MASK_EXT                                                    = 0x959A,
//  GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV                                     = 0x95B1, // reuse EnableCap
    GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV                                     = 0x95B2,
    GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV                              = 0x95B6,
//  GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM                                      = 0x96A2, // reuse EnableCap
    GL_SHADING_RATE_QCOM                                                       = 0x96A4,
    GL_SHADING_RATE_EXT                                                        = 0x96D0,
    GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT                    = 0x96D7,
    GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT                    = 0x96D8,
    GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT                   = 0x96D9,
    GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT                   = 0x96DA,
    GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT             = 0x96DB,
    GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT                         = 0x96DC,
    GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT    = 0x96DD,
    GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT                    = 0x96DE,
    GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT = 0x96DF,

    // GetPointervPName

    GL_DEBUG_CALLBACK_FUNCTION                                                 = 0x8244,
    GL_DEBUG_CALLBACK_USER_PARAM                                               = 0x8245,

    // GetTextureParameter

    GL_TEXTURE_WIDTH                                                           = 0x1000,
    GL_TEXTURE_HEIGHT                                                          = 0x1001,
    GL_TEXTURE_INTERNAL_FORMAT                                                 = 0x1003,
    GL_TEXTURE_BORDER_COLOR                                                    = 0x1004,
    GL_TEXTURE_BORDER_COLOR_NV                                                 = 0x1004,
    GL_TEXTURE_MAG_FILTER                                                      = 0x2800,
    GL_TEXTURE_MIN_FILTER                                                      = 0x2801,
    GL_TEXTURE_WRAP_S                                                          = 0x2802,
    GL_TEXTURE_WRAP_T                                                          = 0x2803,
    GL_TEXTURE_RED_SIZE                                                        = 0x805C,
    GL_TEXTURE_GREEN_SIZE                                                      = 0x805D,
    GL_TEXTURE_BLUE_SIZE                                                       = 0x805E,
    GL_TEXTURE_ALPHA_SIZE                                                      = 0x805F,
    GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM                                    = 0x8F6A,
    GL_SURFACE_COMPRESSION_EXT                                                 = 0x96C0,

    // GraphicsResetStatus

//  GL_NO_ERROR                                                                = 0, // reuse ErrorCode
    GL_GUILTY_CONTEXT_RESET                                                    = 0x8253,
    GL_INNOCENT_CONTEXT_RESET                                                  = 0x8254,
    GL_UNKNOWN_CONTEXT_RESET                                                   = 0x8255,

    // HintMode

//  GL_DONT_CARE                                                               = 0x1100, // reuse DebugSeverity
    GL_FASTEST                                                                 = 0x1101,
    GL_NICEST                                                                  = 0x1102,

    // HintTarget

    GL_GENERATE_MIPMAP_HINT                                                    = 0x8192,
    GL_PROGRAM_BINARY_RETRIEVABLE_HINT                                         = 0x8257,
//  GL_FRAGMENT_SHADER_DERIVATIVE_HINT                                         = 0x8B8B, // reuse GetPName
    GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES                                     = 0x8B8B,
    GL_BINNING_CONTROL_HINT_QCOM                                               = 0x8FB0,

    // IndexFunctionEXT

//  GL_NEVER                                                                   = 0x0200, // reuse AlphaFunction
//  GL_LESS                                                                    = 0x0201, // reuse AlphaFunction
//  GL_EQUAL                                                                   = 0x0202, // reuse AlphaFunction
//  GL_LEQUAL                                                                  = 0x0203, // reuse AlphaFunction
//  GL_GREATER                                                                 = 0x0204, // reuse AlphaFunction
//  GL_NOTEQUAL                                                                = 0x0205, // reuse AlphaFunction
//  GL_GEQUAL                                                                  = 0x0206, // reuse AlphaFunction
//  GL_ALWAYS                                                                  = 0x0207, // reuse AlphaFunction

    // IndexPointerType

//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // InstancedPathCoverMode

    GL_PATH_FILL_COVER_MODE_NV                                                 = 0x9082,
    GL_CONVEX_HULL_NV                                                          = 0x908B,
    GL_BOUNDING_BOX_NV                                                         = 0x908D,
    GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV                                       = 0x909C,

    // InternalFormat

//  GL_STENCIL_INDEX                                                           = 0x1901, // reuse DepthStencilTextureMode
    GL_STENCIL_INDEX_OES                                                       = 0x1901,
//  GL_DEPTH_COMPONENT                                                         = 0x1902, // reuse DepthStencilTextureMode
//  GL_RED                                                                     = 0x1903, // reuse FragmentShaderValueRepATI
    GL_RED_EXT                                                                 = 0x1903,
//  GL_RGB                                                                     = 0x1907, // reuse CombinerComponentUsageNV
    GL_RGBA                                                                    = 0x1908,
    GL_ALPHA8_EXT                                                              = 0x803C,
    GL_ALPHA8_OES                                                              = 0x803C,
    GL_LUMINANCE8_EXT                                                          = 0x8040,
    GL_LUMINANCE8_OES                                                          = 0x8040,
    GL_LUMINANCE4_ALPHA4_OES                                                   = 0x8043,
    GL_LUMINANCE8_ALPHA8_EXT                                                   = 0x8045,
    GL_LUMINANCE8_ALPHA8_OES                                                   = 0x8045,
    GL_RGB8                                                                    = 0x8051,
    GL_RGB8_OES                                                                = 0x8051,
    GL_RGB10_EXT                                                               = 0x8052,
    GL_RGB16_EXT                                                               = 0x8054,
    GL_RGBA4                                                                   = 0x8056,
    GL_RGBA4_OES                                                               = 0x8056,
    GL_RGB5_A1                                                                 = 0x8057,
    GL_RGB5_A1_OES                                                             = 0x8057,
    GL_RGBA8                                                                   = 0x8058,
    GL_RGBA8_OES                                                               = 0x8058,
    GL_RGB10_A2                                                                = 0x8059,
    GL_RGB10_A2_EXT                                                            = 0x8059,
    GL_RGBA16_EXT                                                              = 0x805B,
    GL_DEPTH_COMPONENT16                                                       = 0x81A5,
    GL_DEPTH_COMPONENT16_OES                                                   = 0x81A5,
    GL_DEPTH_COMPONENT24                                                       = 0x81A6,
    GL_DEPTH_COMPONENT24_OES                                                   = 0x81A6,
    GL_DEPTH_COMPONENT32_OES                                                   = 0x81A7,
    GL_RG                                                                      = 0x8227,
    GL_R8                                                                      = 0x8229,
    GL_R8_EXT                                                                  = 0x8229,
    GL_R16_EXT                                                                 = 0x822A,
    GL_RG8                                                                     = 0x822B,
    GL_RG8_EXT                                                                 = 0x822B,
    GL_RG16_EXT                                                                = 0x822C,
    GL_R16F                                                                    = 0x822D,
    GL_R16F_EXT                                                                = 0x822D,
    GL_R32F                                                                    = 0x822E,
    GL_R32F_EXT                                                                = 0x822E,
    GL_RG16F                                                                   = 0x822F,
    GL_RG16F_EXT                                                               = 0x822F,
    GL_RG32F                                                                   = 0x8230,
    GL_RG32F_EXT                                                               = 0x8230,
    GL_R8I                                                                     = 0x8231,
    GL_R8UI                                                                    = 0x8232,
    GL_R16I                                                                    = 0x8233,
    GL_R16UI                                                                   = 0x8234,
    GL_R32I                                                                    = 0x8235,
    GL_R32UI                                                                   = 0x8236,
    GL_RG8I                                                                    = 0x8237,
    GL_RG8UI                                                                   = 0x8238,
    GL_RG16I                                                                   = 0x8239,
    GL_RG16UI                                                                  = 0x823A,
    GL_RG32I                                                                   = 0x823B,
    GL_RG32UI                                                                  = 0x823C,
    GL_COMPRESSED_RGB_S3TC_DXT1_EXT                                            = 0x83F0,
    GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                                           = 0x83F1,
    GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE                                         = 0x83F2,
    GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                                           = 0x83F2,
    GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE                                         = 0x83F3,
    GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                                           = 0x83F3,
    GL_DEPTH_STENCIL                                                           = 0x84F9,
    GL_DEPTH_STENCIL_OES                                                       = 0x84F9,
    GL_RGBA32F                                                                 = 0x8814,
    GL_RGBA32F_EXT                                                             = 0x8814,
    GL_RGB32F                                                                  = 0x8815,
    GL_RGB32F_EXT                                                              = 0x8815,
    GL_RGBA16F                                                                 = 0x881A,
    GL_RGBA16F_EXT                                                             = 0x881A,
    GL_RGB16F                                                                  = 0x881B,
    GL_RGB16F_EXT                                                              = 0x881B,
    GL_DEPTH24_STENCIL8                                                        = 0x88F0,
    GL_DEPTH24_STENCIL8_OES                                                    = 0x88F0,
    GL_R11F_G11F_B10F                                                          = 0x8C3A,
    GL_R11F_G11F_B10F_APPLE                                                    = 0x8C3A,
    GL_RGB9_E5                                                                 = 0x8C3D,
    GL_RGB9_E5_APPLE                                                           = 0x8C3D,
    GL_SRGB                                                                    = 0x8C40,
    GL_SRGB_EXT                                                                = 0x8C40,
    GL_SRGB8                                                                   = 0x8C41,
    GL_SRGB8_NV                                                                = 0x8C41,
    GL_SRGB_ALPHA_EXT                                                          = 0x8C42,
    GL_SRGB8_ALPHA8                                                            = 0x8C43,
    GL_SRGB8_ALPHA8_EXT                                                        = 0x8C43,
    GL_COMPRESSED_SRGB_S3TC_DXT1_EXT                                           = 0x8C4C,
    GL_COMPRESSED_SRGB_S3TC_DXT1_NV                                            = 0x8C4C,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT                                     = 0x8C4D,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV                                      = 0x8C4D,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT                                     = 0x8C4E,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV                                      = 0x8C4E,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT                                     = 0x8C4F,
    GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV                                      = 0x8C4F,
    GL_DEPTH_COMPONENT32F                                                      = 0x8CAC,
    GL_DEPTH32F_STENCIL8                                                       = 0x8CAD,
    GL_STENCIL_INDEX1_OES                                                      = 0x8D46,
    GL_STENCIL_INDEX4_OES                                                      = 0x8D47,
    GL_STENCIL_INDEX8                                                          = 0x8D48,
    GL_STENCIL_INDEX8_OES                                                      = 0x8D48,
    GL_RGB565_OES                                                              = 0x8D62,
    GL_RGB565                                                                  = 0x8D62,
    GL_ETC1_RGB8_OES                                                           = 0x8D64,
    GL_RGBA32UI                                                                = 0x8D70,
    GL_RGB32UI                                                                 = 0x8D71,
    GL_RGBA16UI                                                                = 0x8D76,
    GL_RGB16UI                                                                 = 0x8D77,
    GL_RGBA8UI                                                                 = 0x8D7C,
    GL_RGB8UI                                                                  = 0x8D7D,
    GL_RGBA32I                                                                 = 0x8D82,
    GL_RGB32I                                                                  = 0x8D83,
    GL_RGBA16I                                                                 = 0x8D88,
    GL_RGB16I                                                                  = 0x8D89,
    GL_RGBA8I                                                                  = 0x8D8E,
    GL_RGB8I                                                                   = 0x8D8F,
    GL_COMPRESSED_RED_RGTC1_EXT                                                = 0x8DBB,
    GL_COMPRESSED_SIGNED_RED_RGTC1_EXT                                         = 0x8DBC,
    GL_COMPRESSED_RED_GREEN_RGTC2_EXT                                          = 0x8DBD,
    GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT                                   = 0x8DBE,
    GL_COMPRESSED_RGBA_BPTC_UNORM_EXT                                          = 0x8E8C,
    GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT                                    = 0x8E8D,
    GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT                                    = 0x8E8E,
    GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT                                  = 0x8E8F,
    GL_R8_SNORM                                                                = 0x8F94,
    GL_RG8_SNORM                                                               = 0x8F95,
    GL_RGB8_SNORM                                                              = 0x8F96,
    GL_RGBA8_SNORM                                                             = 0x8F97,
    GL_R16_SNORM_EXT                                                           = 0x8F98,
    GL_RG16_SNORM_EXT                                                          = 0x8F99,
    GL_RGB16_SNORM_EXT                                                         = 0x8F9A,
    GL_RGBA16_SNORM_EXT                                                        = 0x8F9B,
    GL_SR8_EXT                                                                 = 0x8FBD,
    GL_SRG8_EXT                                                                = 0x8FBE,
    GL_RGB10_A2UI                                                              = 0x906F,
    GL_COMPRESSED_R11_EAC                                                      = 0x9270,
    GL_COMPRESSED_SIGNED_R11_EAC                                               = 0x9271,
    GL_COMPRESSED_RG11_EAC                                                     = 0x9272,
    GL_COMPRESSED_SIGNED_RG11_EAC                                              = 0x9273,
    GL_COMPRESSED_RGB8_ETC2                                                    = 0x9274,
    GL_COMPRESSED_SRGB8_ETC2                                                   = 0x9275,
    GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2                                = 0x9276,
    GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2                               = 0x9277,
    GL_COMPRESSED_RGBA8_ETC2_EAC                                               = 0x9278,
    GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC                                        = 0x9279,
    GL_COMPRESSED_RGBA_ASTC_4x4                                                = 0x93B0,
    GL_COMPRESSED_RGBA_ASTC_4x4_KHR                                            = 0x93B0,
    GL_COMPRESSED_RGBA_ASTC_5x4                                                = 0x93B1,
    GL_COMPRESSED_RGBA_ASTC_5x4_KHR                                            = 0x93B1,
    GL_COMPRESSED_RGBA_ASTC_5x5                                                = 0x93B2,
    GL_COMPRESSED_RGBA_ASTC_5x5_KHR                                            = 0x93B2,
    GL_COMPRESSED_RGBA_ASTC_6x5                                                = 0x93B3,
    GL_COMPRESSED_RGBA_ASTC_6x5_KHR                                            = 0x93B3,
    GL_COMPRESSED_RGBA_ASTC_6x6                                                = 0x93B4,
    GL_COMPRESSED_RGBA_ASTC_6x6_KHR                                            = 0x93B4,
    GL_COMPRESSED_RGBA_ASTC_8x5                                                = 0x93B5,
    GL_COMPRESSED_RGBA_ASTC_8x5_KHR                                            = 0x93B5,
    GL_COMPRESSED_RGBA_ASTC_8x6                                                = 0x93B6,
    GL_COMPRESSED_RGBA_ASTC_8x6_KHR                                            = 0x93B6,
    GL_COMPRESSED_RGBA_ASTC_8x8                                                = 0x93B7,
    GL_COMPRESSED_RGBA_ASTC_8x8_KHR                                            = 0x93B7,
    GL_COMPRESSED_RGBA_ASTC_10x5                                               = 0x93B8,
    GL_COMPRESSED_RGBA_ASTC_10x5_KHR                                           = 0x93B8,
    GL_COMPRESSED_RGBA_ASTC_10x6                                               = 0x93B9,
    GL_COMPRESSED_RGBA_ASTC_10x6_KHR                                           = 0x93B9,
    GL_COMPRESSED_RGBA_ASTC_10x8                                               = 0x93BA,
    GL_COMPRESSED_RGBA_ASTC_10x8_KHR                                           = 0x93BA,
    GL_COMPRESSED_RGBA_ASTC_10x10                                              = 0x93BB,
    GL_COMPRESSED_RGBA_ASTC_10x10_KHR                                          = 0x93BB,
    GL_COMPRESSED_RGBA_ASTC_12x10                                              = 0x93BC,
    GL_COMPRESSED_RGBA_ASTC_12x10_KHR                                          = 0x93BC,
    GL_COMPRESSED_RGBA_ASTC_12x12                                              = 0x93BD,
    GL_COMPRESSED_RGBA_ASTC_12x12_KHR                                          = 0x93BD,
    GL_COMPRESSED_RGBA_ASTC_3x3x3_OES                                          = 0x93C0,
    GL_COMPRESSED_RGBA_ASTC_4x3x3_OES                                          = 0x93C1,
    GL_COMPRESSED_RGBA_ASTC_4x4x3_OES                                          = 0x93C2,
    GL_COMPRESSED_RGBA_ASTC_4x4x4_OES                                          = 0x93C3,
    GL_COMPRESSED_RGBA_ASTC_5x4x4_OES                                          = 0x93C4,
    GL_COMPRESSED_RGBA_ASTC_5x5x4_OES                                          = 0x93C5,
    GL_COMPRESSED_RGBA_ASTC_5x5x5_OES                                          = 0x93C6,
    GL_COMPRESSED_RGBA_ASTC_6x5x5_OES                                          = 0x93C7,
    GL_COMPRESSED_RGBA_ASTC_6x6x5_OES                                          = 0x93C8,
    GL_COMPRESSED_RGBA_ASTC_6x6x6_OES                                          = 0x93C9,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4                                        = 0x93D0,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR                                    = 0x93D0,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4                                        = 0x93D1,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR                                    = 0x93D1,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5                                        = 0x93D2,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR                                    = 0x93D2,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5                                        = 0x93D3,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR                                    = 0x93D3,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6                                        = 0x93D4,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR                                    = 0x93D4,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5                                        = 0x93D5,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR                                    = 0x93D5,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6                                        = 0x93D6,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR                                    = 0x93D6,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8                                        = 0x93D7,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR                                    = 0x93D7,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5                                       = 0x93D8,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR                                   = 0x93D8,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6                                       = 0x93D9,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR                                   = 0x93D9,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8                                       = 0x93DA,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR                                   = 0x93DA,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10                                      = 0x93DB,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR                                  = 0x93DB,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10                                      = 0x93DC,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR                                  = 0x93DC,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12                                      = 0x93DD,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR                                  = 0x93DD,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES                                  = 0x93E0,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES                                  = 0x93E1,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES                                  = 0x93E2,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES                                  = 0x93E3,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES                                  = 0x93E4,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES                                  = 0x93E5,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES                                  = 0x93E6,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES                                  = 0x93E7,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES                                  = 0x93E8,
    GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES                                  = 0x93E9,

    // InternalFormatPName

//  GL_SAMPLES                                                                 = 0x80A9, // reuse GetFramebufferParameter
    GL_TEXTURE_COMPRESSED                                                      = 0x86A1,
    GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT                                 = 0x8F6E,
    GL_IMAGE_FORMAT_COMPATIBILITY_TYPE                                         = 0x90C7,
    GL_NUM_SAMPLE_COUNTS                                                       = 0x9380,

    // InvalidateFramebufferAttachment

//  GL_COLOR                                                                   = 0x1800, // reuse Buffer
//  GL_DEPTH                                                                   = 0x1801, // reuse Buffer
//  GL_STENCIL                                                                 = 0x1802, // reuse Buffer
//  GL_DEPTH_STENCIL_ATTACHMENT                                                = 0x821A, // reuse FramebufferAttachment
//  GL_COLOR_ATTACHMENT0                                                       = 0x8CE0, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT0_EXT                                                   = 0x8CE0,
//  GL_COLOR_ATTACHMENT0_NV                                                    = 0x8CE0, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT1                                                       = 0x8CE1, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT1_EXT                                                   = 0x8CE1,
//  GL_COLOR_ATTACHMENT1_NV                                                    = 0x8CE1, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT2                                                       = 0x8CE2, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT2_EXT                                                   = 0x8CE2,
//  GL_COLOR_ATTACHMENT2_NV                                                    = 0x8CE2, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT3                                                       = 0x8CE3, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT3_EXT                                                   = 0x8CE3,
//  GL_COLOR_ATTACHMENT3_NV                                                    = 0x8CE3, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT4                                                       = 0x8CE4, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT4_EXT                                                   = 0x8CE4,
//  GL_COLOR_ATTACHMENT4_NV                                                    = 0x8CE4, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT5                                                       = 0x8CE5, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT5_EXT                                                   = 0x8CE5,
//  GL_COLOR_ATTACHMENT5_NV                                                    = 0x8CE5, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT6                                                       = 0x8CE6, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT6_EXT                                                   = 0x8CE6,
//  GL_COLOR_ATTACHMENT6_NV                                                    = 0x8CE6, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT7                                                       = 0x8CE7, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT7_EXT                                                   = 0x8CE7,
//  GL_COLOR_ATTACHMENT7_NV                                                    = 0x8CE7, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT8                                                       = 0x8CE8, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT8_EXT                                                   = 0x8CE8,
//  GL_COLOR_ATTACHMENT8_NV                                                    = 0x8CE8, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT9                                                       = 0x8CE9, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT9_EXT                                                   = 0x8CE9,
//  GL_COLOR_ATTACHMENT9_NV                                                    = 0x8CE9, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT10                                                      = 0x8CEA, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT10_EXT                                                  = 0x8CEA,
//  GL_COLOR_ATTACHMENT10_NV                                                   = 0x8CEA, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT11                                                      = 0x8CEB, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT11_EXT                                                  = 0x8CEB,
//  GL_COLOR_ATTACHMENT11_NV                                                   = 0x8CEB, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT12                                                      = 0x8CEC, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT12_EXT                                                  = 0x8CEC,
//  GL_COLOR_ATTACHMENT12_NV                                                   = 0x8CEC, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT13                                                      = 0x8CED, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT13_EXT                                                  = 0x8CED,
//  GL_COLOR_ATTACHMENT13_NV                                                   = 0x8CED, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT14                                                      = 0x8CEE, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT14_EXT                                                  = 0x8CEE,
//  GL_COLOR_ATTACHMENT14_NV                                                   = 0x8CEE, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT15                                                      = 0x8CEF, // reuse ColorBuffer
    GL_COLOR_ATTACHMENT15_EXT                                                  = 0x8CEF,
//  GL_COLOR_ATTACHMENT15_NV                                                   = 0x8CEF, // reuse DrawBufferMode
//  GL_COLOR_ATTACHMENT16                                                      = 0x8CF0, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT17                                                      = 0x8CF1, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT18                                                      = 0x8CF2, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT19                                                      = 0x8CF3, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT20                                                      = 0x8CF4, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT21                                                      = 0x8CF5, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT22                                                      = 0x8CF6, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT23                                                      = 0x8CF7, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT24                                                      = 0x8CF8, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT25                                                      = 0x8CF9, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT26                                                      = 0x8CFA, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT27                                                      = 0x8CFB, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT28                                                      = 0x8CFC, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT29                                                      = 0x8CFD, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT30                                                      = 0x8CFE, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT31                                                      = 0x8CFF, // reuse ColorBuffer
//  GL_DEPTH_ATTACHMENT                                                        = 0x8D00, // reuse FramebufferAttachment

    // LightEnvModeSGIX

    GL_REPLACE                                                                 = 0x1E01,

    // ListNameType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // LogicOp

    GL_INVERT                                                                  = 0x150A,

    // MapTypeNV

//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // MatrixIndexPointerTypeARB

//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // MatrixMode

    GL_TEXTURE                                                                 = 0x1702,

    // MemoryObjectParameterName

    GL_DEDICATED_MEMORY_OBJECT_EXT                                             = 0x9581,
    GL_PROTECTED_MEMORY_OBJECT_EXT                                             = 0x959B,

    // NormalPointerType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // ObjectIdentifier

//  GL_TEXTURE                                                                 = 0x1702, // reuse MatrixMode
//  GL_VERTEX_ARRAY                                                            = 0x8074, // reuse EnableCap
    GL_BUFFER                                                                  = 0x82E0,
    GL_SHADER                                                                  = 0x82E1,
    GL_PROGRAM                                                                 = 0x82E2,
    GL_QUERY                                                                   = 0x82E3,
    GL_PROGRAM_PIPELINE                                                        = 0x82E4,
    GL_SAMPLER                                                                 = 0x82E6,
//  GL_FRAMEBUFFER                                                             = 0x8D40, // reuse FramebufferTarget
//  GL_RENDERBUFFER                                                            = 0x8D41, // reuse CopyImageSubDataTarget
//  GL_TRANSFORM_FEEDBACK                                                      = 0x8E22, // reuse BindTransformFeedbackTarget

    // PatchParameterName

    GL_PATCH_VERTICES                                                          = 0x8E72,

    // PathColor

//  GL_PRIMARY_COLOR_NV                                                        = 0x852C, // reuse CombinerRegisterNV
//  GL_SECONDARY_COLOR_NV                                                      = 0x852D, // reuse CombinerRegisterNV
//  GL_PRIMARY_COLOR                                                           = 0x8577, // reuse FragmentShaderGenericSourceATI

    // PathColorFormat

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV
//  GL_RGB                                                                     = 0x1907, // reuse CombinerComponentUsageNV
//  GL_RGBA                                                                    = 0x1908, // reuse InternalFormat
    GL_LUMINANCE                                                               = 0x1909,
    GL_LUMINANCE_ALPHA                                                         = 0x190A,

    // PathCoordType

    GL_CLOSE_PATH_NV                                                           = 0x00,
    GL_MOVE_TO_NV                                                              = 0x02,
    GL_RELATIVE_MOVE_TO_NV                                                     = 0x03,
    GL_LINE_TO_NV                                                              = 0x04,
    GL_RELATIVE_LINE_TO_NV                                                     = 0x05,
    GL_HORIZONTAL_LINE_TO_NV                                                   = 0x06,
    GL_RELATIVE_HORIZONTAL_LINE_TO_NV                                          = 0x07,
    GL_VERTICAL_LINE_TO_NV                                                     = 0x08,
    GL_RELATIVE_VERTICAL_LINE_TO_NV                                            = 0x09,
    GL_QUADRATIC_CURVE_TO_NV                                                   = 0x0A,
    GL_RELATIVE_QUADRATIC_CURVE_TO_NV                                          = 0x0B,
    GL_CUBIC_CURVE_TO_NV                                                       = 0x0C,
    GL_RELATIVE_CUBIC_CURVE_TO_NV                                              = 0x0D,
    GL_SMOOTH_QUADRATIC_CURVE_TO_NV                                            = 0x0E,
    GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV                                   = 0x0F,
    GL_SMOOTH_CUBIC_CURVE_TO_NV                                                = 0x10,
    GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV                                       = 0x11,
    GL_SMALL_CCW_ARC_TO_NV                                                     = 0x12,
    GL_RELATIVE_SMALL_CCW_ARC_TO_NV                                            = 0x13,
    GL_SMALL_CW_ARC_TO_NV                                                      = 0x14,
    GL_RELATIVE_SMALL_CW_ARC_TO_NV                                             = 0x15,
    GL_LARGE_CCW_ARC_TO_NV                                                     = 0x16,
    GL_RELATIVE_LARGE_CCW_ARC_TO_NV                                            = 0x17,
    GL_LARGE_CW_ARC_TO_NV                                                      = 0x18,
    GL_RELATIVE_LARGE_CW_ARC_TO_NV                                             = 0x19,
    GL_CONIC_CURVE_TO_NV                                                       = 0x1A,
    GL_RELATIVE_CONIC_CURVE_TO_NV                                              = 0x1B,
    GL_ROUNDED_RECT_NV                                                         = 0xE8,
    GL_RELATIVE_ROUNDED_RECT_NV                                                = 0xE9,
    GL_ROUNDED_RECT2_NV                                                        = 0xEA,
    GL_RELATIVE_ROUNDED_RECT2_NV                                               = 0xEB,
    GL_ROUNDED_RECT4_NV                                                        = 0xEC,
    GL_RELATIVE_ROUNDED_RECT4_NV                                               = 0xED,
    GL_ROUNDED_RECT8_NV                                                        = 0xEE,
    GL_RELATIVE_ROUNDED_RECT8_NV                                               = 0xEF,
    GL_RESTART_PATH_NV                                                         = 0xF0,
    GL_DUP_FIRST_CUBIC_CURVE_TO_NV                                             = 0xF2,
    GL_DUP_LAST_CUBIC_CURVE_TO_NV                                              = 0xF4,
    GL_RECT_NV                                                                 = 0xF6,
    GL_RELATIVE_RECT_NV                                                        = 0xF7,
    GL_CIRCULAR_CCW_ARC_TO_NV                                                  = 0xF8,
    GL_CIRCULAR_CW_ARC_TO_NV                                                   = 0xFA,
    GL_CIRCULAR_TANGENT_ARC_TO_NV                                              = 0xFC,
    GL_ARC_TO_NV                                                               = 0xFE,
    GL_RELATIVE_ARC_TO_NV                                                      = 0xFF,

    // PathCoverMode

//  GL_PATH_FILL_COVER_MODE_NV                                                 = 0x9082, // reuse InstancedPathCoverMode
//  GL_CONVEX_HULL_NV                                                          = 0x908B, // reuse InstancedPathCoverMode
//  GL_BOUNDING_BOX_NV                                                         = 0x908D, // reuse InstancedPathCoverMode

    // PathElementType

    GL_UTF8_NV                                                                 = 0x909A,
    GL_UTF16_NV                                                                = 0x909B,

    // PathFillMode

//  GL_INVERT                                                                  = 0x150A, // reuse LogicOp
    GL_PATH_FILL_MODE_NV                                                       = 0x9080,
    GL_COUNT_UP_NV                                                             = 0x9088,
    GL_COUNT_DOWN_NV                                                           = 0x9089,

    // PathFontTarget

    GL_STANDARD_FONT_NAME_NV                                                   = 0x9072,
    GL_SYSTEM_FONT_NAME_NV                                                     = 0x9073,
    GL_FILE_NAME_NV                                                            = 0x9074,

    // PathGenMode

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
    GL_PATH_OBJECT_BOUNDING_BOX_NV                                             = 0x908A,

    // PathHandleMissingGlyphs

    GL_SKIP_MISSING_GLYPH_NV                                                   = 0x90A9,
    GL_USE_MISSING_GLYPH_NV                                                    = 0x90AA,

    // PathListMode

    GL_ACCUM_ADJACENT_PAIRS_NV                                                 = 0x90AD,
    GL_ADJACENT_PAIRS_NV                                                       = 0x90AE,
    GL_FIRST_TO_REST_NV                                                        = 0x90AF,

    // PathParameter

    GL_PATH_STROKE_WIDTH_NV                                                    = 0x9075,
    GL_PATH_END_CAPS_NV                                                        = 0x9076,
    GL_PATH_INITIAL_END_CAP_NV                                                 = 0x9077,
    GL_PATH_TERMINAL_END_CAP_NV                                                = 0x9078,
    GL_PATH_JOIN_STYLE_NV                                                      = 0x9079,
    GL_PATH_MITER_LIMIT_NV                                                     = 0x907A,
    GL_PATH_DASH_CAPS_NV                                                       = 0x907B,
    GL_PATH_INITIAL_DASH_CAP_NV                                                = 0x907C,
    GL_PATH_TERMINAL_DASH_CAP_NV                                               = 0x907D,
    GL_PATH_DASH_OFFSET_NV                                                     = 0x907E,
    GL_PATH_CLIENT_LENGTH_NV                                                   = 0x907F,
//  GL_PATH_FILL_MODE_NV                                                       = 0x9080, // reuse PathFillMode
    GL_PATH_FILL_MASK_NV                                                       = 0x9081,
//  GL_PATH_FILL_COVER_MODE_NV                                                 = 0x9082, // reuse InstancedPathCoverMode
    GL_PATH_STROKE_COVER_MODE_NV                                               = 0x9083,
    GL_PATH_STROKE_MASK_NV                                                     = 0x9084,
//  GL_PATH_OBJECT_BOUNDING_BOX_NV                                             = 0x908A, // reuse PathGenMode
    GL_PATH_COMMAND_COUNT_NV                                                   = 0x909D,
    GL_PATH_COORD_COUNT_NV                                                     = 0x909E,
    GL_PATH_DASH_ARRAY_COUNT_NV                                                = 0x909F,
    GL_PATH_COMPUTED_LENGTH_NV                                                 = 0x90A0,
    GL_PATH_FILL_BOUNDING_BOX_NV                                               = 0x90A1,
    GL_PATH_STROKE_BOUNDING_BOX_NV                                             = 0x90A2,
    GL_PATH_DASH_OFFSET_RESET_NV                                               = 0x90B4,

    // PathRenderingTokenNV

//  GL_CLOSE_PATH_NV                                                           = 0x00, // reuse PathCoordType
//  GL_MOVE_TO_NV                                                              = 0x02, // reuse PathCoordType
//  GL_RELATIVE_MOVE_TO_NV                                                     = 0x03, // reuse PathCoordType
//  GL_LINE_TO_NV                                                              = 0x04, // reuse PathCoordType
//  GL_RELATIVE_LINE_TO_NV                                                     = 0x05, // reuse PathCoordType
//  GL_HORIZONTAL_LINE_TO_NV                                                   = 0x06, // reuse PathCoordType
//  GL_RELATIVE_HORIZONTAL_LINE_TO_NV                                          = 0x07, // reuse PathCoordType
//  GL_VERTICAL_LINE_TO_NV                                                     = 0x08, // reuse PathCoordType
//  GL_RELATIVE_VERTICAL_LINE_TO_NV                                            = 0x09, // reuse PathCoordType
//  GL_QUADRATIC_CURVE_TO_NV                                                   = 0x0A, // reuse PathCoordType
//  GL_RELATIVE_QUADRATIC_CURVE_TO_NV                                          = 0x0B, // reuse PathCoordType
//  GL_CUBIC_CURVE_TO_NV                                                       = 0x0C, // reuse PathCoordType
//  GL_RELATIVE_CUBIC_CURVE_TO_NV                                              = 0x0D, // reuse PathCoordType
//  GL_SMOOTH_QUADRATIC_CURVE_TO_NV                                            = 0x0E, // reuse PathCoordType
//  GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV                                   = 0x0F, // reuse PathCoordType
//  GL_SMOOTH_CUBIC_CURVE_TO_NV                                                = 0x10, // reuse PathCoordType
//  GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV                                       = 0x11, // reuse PathCoordType
//  GL_SMALL_CCW_ARC_TO_NV                                                     = 0x12, // reuse PathCoordType
//  GL_RELATIVE_SMALL_CCW_ARC_TO_NV                                            = 0x13, // reuse PathCoordType
//  GL_SMALL_CW_ARC_TO_NV                                                      = 0x14, // reuse PathCoordType
//  GL_RELATIVE_SMALL_CW_ARC_TO_NV                                             = 0x15, // reuse PathCoordType
//  GL_LARGE_CCW_ARC_TO_NV                                                     = 0x16, // reuse PathCoordType
//  GL_RELATIVE_LARGE_CCW_ARC_TO_NV                                            = 0x17, // reuse PathCoordType
//  GL_LARGE_CW_ARC_TO_NV                                                      = 0x18, // reuse PathCoordType
//  GL_RELATIVE_LARGE_CW_ARC_TO_NV                                             = 0x19, // reuse PathCoordType
//  GL_CONIC_CURVE_TO_NV                                                       = 0x1A, // reuse PathCoordType
//  GL_RELATIVE_CONIC_CURVE_TO_NV                                              = 0x1B, // reuse PathCoordType
    GL_SHARED_EDGE_NV                                                          = 0xC0,
//  GL_ROUNDED_RECT_NV                                                         = 0xE8, // reuse PathCoordType
//  GL_RELATIVE_ROUNDED_RECT_NV                                                = 0xE9, // reuse PathCoordType
//  GL_ROUNDED_RECT2_NV                                                        = 0xEA, // reuse PathCoordType
//  GL_RELATIVE_ROUNDED_RECT2_NV                                               = 0xEB, // reuse PathCoordType
//  GL_ROUNDED_RECT4_NV                                                        = 0xEC, // reuse PathCoordType
//  GL_RELATIVE_ROUNDED_RECT4_NV                                               = 0xED, // reuse PathCoordType
//  GL_ROUNDED_RECT8_NV                                                        = 0xEE, // reuse PathCoordType
//  GL_RELATIVE_ROUNDED_RECT8_NV                                               = 0xEF, // reuse PathCoordType
//  GL_RESTART_PATH_NV                                                         = 0xF0, // reuse PathCoordType
//  GL_DUP_FIRST_CUBIC_CURVE_TO_NV                                             = 0xF2, // reuse PathCoordType
//  GL_DUP_LAST_CUBIC_CURVE_TO_NV                                              = 0xF4, // reuse PathCoordType
//  GL_RECT_NV                                                                 = 0xF6, // reuse PathCoordType
//  GL_RELATIVE_RECT_NV                                                        = 0xF7, // reuse PathCoordType
//  GL_CIRCULAR_CCW_ARC_TO_NV                                                  = 0xF8, // reuse PathCoordType
//  GL_CIRCULAR_CW_ARC_TO_NV                                                   = 0xFA, // reuse PathCoordType
//  GL_CIRCULAR_TANGENT_ARC_TO_NV                                              = 0xFC, // reuse PathCoordType
//  GL_ARC_TO_NV                                                               = 0xFE, // reuse PathCoordType
//  GL_RELATIVE_ARC_TO_NV                                                      = 0xFF, // reuse PathCoordType

    // PathStringFormat

    GL_PATH_FORMAT_SVG_NV                                                      = 0x9070,
    GL_PATH_FORMAT_PS_NV                                                       = 0x9071,

    // PathTransformType

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
    GL_TRANSLATE_X_NV                                                          = 0x908E,
    GL_TRANSLATE_Y_NV                                                          = 0x908F,
    GL_TRANSLATE_2D_NV                                                         = 0x9090,
    GL_TRANSLATE_3D_NV                                                         = 0x9091,
    GL_AFFINE_2D_NV                                                            = 0x9092,
    GL_AFFINE_3D_NV                                                            = 0x9094,
    GL_TRANSPOSE_AFFINE_2D_NV                                                  = 0x9096,
    GL_TRANSPOSE_AFFINE_3D_NV                                                  = 0x9098,

    // PerfQueryDataFlags

    GL_PERFQUERY_DONOT_FLUSH_INTEL                                             = 0x83F9,
    GL_PERFQUERY_FLUSH_INTEL                                                   = 0x83FA,
    GL_PERFQUERY_WAIT_INTEL                                                    = 0x83FB,

    // PipelineParameterName

    GL_ACTIVE_PROGRAM                                                          = 0x8259,
    GL_FRAGMENT_SHADER                                                         = 0x8B30,
    GL_VERTEX_SHADER                                                           = 0x8B31,
    GL_INFO_LOG_LENGTH                                                         = 0x8B84,
    GL_GEOMETRY_SHADER                                                         = 0x8DD9,
    GL_TESS_EVALUATION_SHADER                                                  = 0x8E87,
    GL_TESS_CONTROL_SHADER                                                     = 0x8E88,

    // PixelCopyType

//  GL_COLOR                                                                   = 0x1800, // reuse Buffer
    GL_COLOR_EXT                                                               = 0x1800,
//  GL_DEPTH                                                                   = 0x1801, // reuse Buffer
    GL_DEPTH_EXT                                                               = 0x1801,
//  GL_STENCIL                                                                 = 0x1802, // reuse Buffer
    GL_STENCIL_EXT                                                             = 0x1802,

    // PixelFormat

//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_STENCIL_INDEX                                                           = 0x1901, // reuse DepthStencilTextureMode
//  GL_DEPTH_COMPONENT                                                         = 0x1902, // reuse DepthStencilTextureMode
//  GL_RED                                                                     = 0x1903, // reuse FragmentShaderValueRepATI
//  GL_RED_EXT                                                                 = 0x1903, // reuse InternalFormat
//  GL_GREEN                                                                   = 0x1904, // reuse FragmentShaderValueRepATI
//  GL_BLUE                                                                    = 0x1905, // reuse CombinerComponentUsageNV
//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV
//  GL_RGB                                                                     = 0x1907, // reuse CombinerComponentUsageNV
//  GL_RGBA                                                                    = 0x1908, // reuse InternalFormat
//  GL_LUMINANCE                                                               = 0x1909, // reuse PathColorFormat
//  GL_LUMINANCE_ALPHA                                                         = 0x190A, // reuse PathColorFormat
    GL_BGR_EXT                                                                 = 0x80E0,
    GL_BGRA_EXT                                                                = 0x80E1,
    GL_BGRA_IMG                                                                = 0x80E1,
//  GL_RG                                                                      = 0x8227, // reuse InternalFormat
    GL_RG_INTEGER                                                              = 0x8228,
//  GL_DEPTH_STENCIL                                                           = 0x84F9, // reuse InternalFormat
    GL_RED_INTEGER                                                             = 0x8D94,
    GL_RGB_INTEGER                                                             = 0x8D98,
    GL_RGBA_INTEGER                                                            = 0x8D99,

    // PixelStoreParameter

//  GL_UNPACK_ROW_LENGTH                                                       = 0x0CF2, // reuse GetPName
    GL_UNPACK_ROW_LENGTH_EXT                                                   = 0x0CF2,
//  GL_UNPACK_SKIP_ROWS                                                        = 0x0CF3, // reuse GetPName
    GL_UNPACK_SKIP_ROWS_EXT                                                    = 0x0CF3,
//  GL_UNPACK_SKIP_PIXELS                                                      = 0x0CF4, // reuse GetPName
    GL_UNPACK_SKIP_PIXELS_EXT                                                  = 0x0CF4,
//  GL_UNPACK_ALIGNMENT                                                        = 0x0CF5, // reuse GetPName
//  GL_PACK_ROW_LENGTH                                                         = 0x0D02, // reuse GetPName
//  GL_PACK_ROW_LENGTH_NV                                                      = 0x0D02, // reuse GetPName
//  GL_PACK_SKIP_ROWS                                                          = 0x0D03, // reuse GetPName
//  GL_PACK_SKIP_ROWS_NV                                                       = 0x0D03, // reuse GetPName
//  GL_PACK_SKIP_PIXELS                                                        = 0x0D04, // reuse GetPName
//  GL_PACK_SKIP_PIXELS_NV                                                     = 0x0D04, // reuse GetPName
//  GL_PACK_ALIGNMENT                                                          = 0x0D05, // reuse GetPName
//  GL_UNPACK_SKIP_IMAGES                                                      = 0x806D, // reuse GetPName
//  GL_UNPACK_IMAGE_HEIGHT                                                     = 0x806E, // reuse GetPName

    // PixelTexGenModeSGIX

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV
//  GL_RGB                                                                     = 0x1907, // reuse CombinerComponentUsageNV
//  GL_RGBA                                                                    = 0x1908, // reuse InternalFormat

    // PixelType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType
    GL_HALF_FLOAT                                                              = 0x140B,
    GL_UNSIGNED_SHORT_4_4_4_4                                                  = 0x8033,
    GL_UNSIGNED_SHORT_5_5_5_1                                                  = 0x8034,
    GL_UNSIGNED_SHORT_5_6_5                                                    = 0x8363,
    GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT                                          = 0x8365,
    GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG                                          = 0x8365,
    GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT                                          = 0x8366,
    GL_UNSIGNED_INT_2_10_10_10_REV                                             = 0x8368,
    GL_UNSIGNED_INT_2_10_10_10_REV_EXT                                         = 0x8368,
    GL_UNSIGNED_INT_24_8                                                       = 0x84FA,
    GL_UNSIGNED_INT_24_8_OES                                                   = 0x84FA,
    GL_UNSIGNED_INT_10F_11F_11F_REV                                            = 0x8C3B,
    GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE                                      = 0x8C3B,
    GL_UNSIGNED_INT_5_9_9_9_REV                                                = 0x8C3E,
    GL_UNSIGNED_INT_5_9_9_9_REV_APPLE                                          = 0x8C3E,
    GL_FLOAT_32_UNSIGNED_INT_24_8_REV                                          = 0x8DAD,

    // PrecisionType

    GL_LOW_FLOAT                                                               = 0x8DF0,
    GL_MEDIUM_FLOAT                                                            = 0x8DF1,
    GL_HIGH_FLOAT                                                              = 0x8DF2,
    GL_LOW_INT                                                                 = 0x8DF3,
    GL_MEDIUM_INT                                                              = 0x8DF4,
    GL_HIGH_INT                                                                = 0x8DF5,

    // PrimitiveType

    GL_POINTS                                                                  = 0x0000,
    GL_LINES                                                                   = 0x0001,
    GL_LINE_LOOP                                                               = 0x0002,
    GL_LINE_STRIP                                                              = 0x0003,
    GL_TRIANGLES                                                               = 0x0004,
    GL_TRIANGLE_STRIP                                                          = 0x0005,
    GL_TRIANGLE_FAN                                                            = 0x0006,
    GL_QUADS                                                                   = 0x0007,
    GL_QUADS_EXT                                                               = 0x0007,
    GL_LINES_ADJACENCY                                                         = 0x000A,
    GL_LINES_ADJACENCY_EXT                                                     = 0x000A,
    GL_LINE_STRIP_ADJACENCY                                                    = 0x000B,
    GL_LINE_STRIP_ADJACENCY_EXT                                                = 0x000B,
    GL_TRIANGLES_ADJACENCY                                                     = 0x000C,
    GL_TRIANGLES_ADJACENCY_EXT                                                 = 0x000C,
    GL_TRIANGLE_STRIP_ADJACENCY                                                = 0x000D,
    GL_TRIANGLE_STRIP_ADJACENCY_EXT                                            = 0x000D,
    GL_PATCHES                                                                 = 0x000E,
    GL_PATCHES_EXT                                                             = 0x000E,

    // ProgramInterface

//  GL_TRANSFORM_FEEDBACK_BUFFER                                               = 0x8C8E, // reuse BufferStorageTarget
    GL_UNIFORM                                                                 = 0x92E1,
    GL_UNIFORM_BLOCK                                                           = 0x92E2,
    GL_PROGRAM_INPUT                                                           = 0x92E3,
    GL_PROGRAM_OUTPUT                                                          = 0x92E4,
    GL_BUFFER_VARIABLE                                                         = 0x92E5,
    GL_SHADER_STORAGE_BLOCK                                                    = 0x92E6,
    GL_TRANSFORM_FEEDBACK_VARYING                                              = 0x92F4,

    // ProgramInterfacePName

    GL_ACTIVE_RESOURCES                                                        = 0x92F5,
    GL_MAX_NAME_LENGTH                                                         = 0x92F6,
    GL_MAX_NUM_ACTIVE_VARIABLES                                                = 0x92F7,

    // ProgramParameterPName

//  GL_PROGRAM_BINARY_RETRIEVABLE_HINT                                         = 0x8257, // reuse HintTarget
    GL_PROGRAM_SEPARABLE                                                       = 0x8258,

    // ProgramPropertyARB

    GL_COMPUTE_WORK_GROUP_SIZE                                                 = 0x8267,
    GL_PROGRAM_BINARY_LENGTH                                                   = 0x8741,
    GL_GEOMETRY_VERTICES_OUT                                                   = 0x8916,
    GL_GEOMETRY_INPUT_TYPE                                                     = 0x8917,
    GL_GEOMETRY_OUTPUT_TYPE                                                    = 0x8918,
    GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH                                    = 0x8A35,
    GL_ACTIVE_UNIFORM_BLOCKS                                                   = 0x8A36,
    GL_DELETE_STATUS                                                           = 0x8B80,
    GL_LINK_STATUS                                                             = 0x8B82,
    GL_VALIDATE_STATUS                                                         = 0x8B83,
//  GL_INFO_LOG_LENGTH                                                         = 0x8B84, // reuse PipelineParameterName
    GL_ATTACHED_SHADERS                                                        = 0x8B85,
    GL_ACTIVE_UNIFORMS                                                         = 0x8B86,
    GL_ACTIVE_UNIFORM_MAX_LENGTH                                               = 0x8B87,
    GL_ACTIVE_ATTRIBUTES                                                       = 0x8B89,
    GL_ACTIVE_ATTRIBUTE_MAX_LENGTH                                             = 0x8B8A,
    GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH                                   = 0x8C76,
    GL_TRANSFORM_FEEDBACK_BUFFER_MODE                                          = 0x8C7F,
    GL_TRANSFORM_FEEDBACK_VARYINGS                                             = 0x8C83,
    GL_ACTIVE_ATOMIC_COUNTER_BUFFERS                                           = 0x92D9,

    // ProgramResourceProperty

//  GL_UNIFORM                                                                 = 0x92E1, // reuse ProgramInterface
    GL_IS_PER_PATCH                                                            = 0x92E7,
    GL_NAME_LENGTH                                                             = 0x92F9,
    GL_TYPE                                                                    = 0x92FA,
    GL_ARRAY_SIZE                                                              = 0x92FB,
    GL_OFFSET                                                                  = 0x92FC,
    GL_BLOCK_INDEX                                                             = 0x92FD,
    GL_ARRAY_STRIDE                                                            = 0x92FE,
    GL_MATRIX_STRIDE                                                           = 0x92FF,
    GL_IS_ROW_MAJOR                                                            = 0x9300,
    GL_ATOMIC_COUNTER_BUFFER_INDEX                                             = 0x9301,
    GL_BUFFER_BINDING                                                          = 0x9302,
    GL_BUFFER_DATA_SIZE                                                        = 0x9303,
    GL_NUM_ACTIVE_VARIABLES                                                    = 0x9304,
    GL_ACTIVE_VARIABLES                                                        = 0x9305,
    GL_REFERENCED_BY_VERTEX_SHADER                                             = 0x9306,
    GL_REFERENCED_BY_TESS_CONTROL_SHADER                                       = 0x9307,
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER                                    = 0x9308,
    GL_REFERENCED_BY_GEOMETRY_SHADER                                           = 0x9309,
    GL_REFERENCED_BY_FRAGMENT_SHADER                                           = 0x930A,
    GL_REFERENCED_BY_COMPUTE_SHADER                                            = 0x930B,
    GL_TOP_LEVEL_ARRAY_SIZE                                                    = 0x930C,
    GL_TOP_LEVEL_ARRAY_STRIDE                                                  = 0x930D,
    GL_LOCATION                                                                = 0x930E,

    // QueryCounterTarget

//  GL_TIMESTAMP_EXT                                                           = 0x8E28, // reuse GetPName

    // QueryObjectParameterName

    GL_QUERY_RESULT                                                            = 0x8866,
    GL_QUERY_RESULT_AVAILABLE                                                  = 0x8867,

    // QueryParameterName

    GL_CURRENT_QUERY                                                           = 0x8865,

    // QueryTarget

    GL_ANY_SAMPLES_PASSED                                                      = 0x8C2F,
    GL_PRIMITIVES_GENERATED                                                    = 0x8C87,
    GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN                                   = 0x8C88,
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE                                         = 0x8D6A,

    // ReadBufferMode

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
//  GL_FRONT                                                                   = 0x0404, // reuse ColorBuffer
//  GL_BACK                                                                    = 0x0405, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT0                                                       = 0x8CE0, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT1                                                       = 0x8CE1, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT2                                                       = 0x8CE2, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT3                                                       = 0x8CE3, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT4                                                       = 0x8CE4, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT5                                                       = 0x8CE5, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT6                                                       = 0x8CE6, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT7                                                       = 0x8CE7, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT8                                                       = 0x8CE8, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT9                                                       = 0x8CE9, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT10                                                      = 0x8CEA, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT11                                                      = 0x8CEB, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT12                                                      = 0x8CEC, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT13                                                      = 0x8CED, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT14                                                      = 0x8CEE, // reuse ColorBuffer
//  GL_COLOR_ATTACHMENT15                                                      = 0x8CEF, // reuse ColorBuffer

    // RenderbufferParameterName

    GL_RENDERBUFFER_SAMPLES                                                    = 0x8CAB,
    GL_RENDERBUFFER_SAMPLES_ANGLE                                              = 0x8CAB,
    GL_RENDERBUFFER_SAMPLES_APPLE                                              = 0x8CAB,
    GL_RENDERBUFFER_SAMPLES_EXT                                                = 0x8CAB,
    GL_RENDERBUFFER_SAMPLES_NV                                                 = 0x8CAB,
    GL_RENDERBUFFER_WIDTH                                                      = 0x8D42,
    GL_RENDERBUFFER_HEIGHT                                                     = 0x8D43,
    GL_RENDERBUFFER_INTERNAL_FORMAT                                            = 0x8D44,
    GL_RENDERBUFFER_RED_SIZE                                                   = 0x8D50,
    GL_RENDERBUFFER_GREEN_SIZE                                                 = 0x8D51,
    GL_RENDERBUFFER_BLUE_SIZE                                                  = 0x8D52,
    GL_RENDERBUFFER_ALPHA_SIZE                                                 = 0x8D53,
    GL_RENDERBUFFER_DEPTH_SIZE                                                 = 0x8D54,
    GL_RENDERBUFFER_STENCIL_SIZE                                               = 0x8D55,
    GL_RENDERBUFFER_SAMPLES_IMG                                                = 0x9133,
    GL_RENDERBUFFER_STORAGE_SAMPLES_AMD                                        = 0x91B2,

    // RenderbufferTarget

//  GL_RENDERBUFFER                                                            = 0x8D41, // reuse CopyImageSubDataTarget

    // ReplacementCodeTypeSUN

//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // SamplerParameterF

//  GL_TEXTURE_BORDER_COLOR                                                    = 0x1004, // reuse GetTextureParameter
    GL_TEXTURE_MIN_LOD                                                         = 0x813A,
    GL_TEXTURE_MAX_LOD                                                         = 0x813B,
//  GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM                                    = 0x8F6A, // reuse GetTextureParameter

    // SamplerParameterI

//  GL_TEXTURE_MAG_FILTER                                                      = 0x2800, // reuse GetTextureParameter
//  GL_TEXTURE_MIN_FILTER                                                      = 0x2801, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_S                                                          = 0x2802, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_T                                                          = 0x2803, // reuse GetTextureParameter
    GL_TEXTURE_WRAP_R                                                          = 0x8072,
    GL_TEXTURE_COMPARE_MODE                                                    = 0x884C,
    GL_TEXTURE_COMPARE_FUNC                                                    = 0x884D,
//  GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM                                    = 0x8F6A, // reuse GetTextureParameter

    // ScalarType

//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // SecondaryColorPointerTypeIBM

//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // SemaphoreParameterName

    GL_D3D12_FENCE_VALUE_EXT                                                   = 0x9595,
    GL_TIMELINE_SEMAPHORE_VALUE_NV                                             = 0x9595,
    GL_SEMAPHORE_TYPE_NV                                                       = 0x95B3,
    GL_SEMAPHORE_TYPE_BINARY_NV                                                = 0x95B4,
    GL_SEMAPHORE_TYPE_TIMELINE_NV                                              = 0x95B5,

    // ShaderBinaryFormat

    GL_SGX_BINARY_IMG                                                          = 0x8C0A,
    GL_MALI_SHADER_BINARY_ARM                                                  = 0x8F60,
    GL_SHADER_BINARY_VIV                                                       = 0x8FC4,
    GL_SHADER_BINARY_DMP                                                       = 0x9250,
    GL_GCCSO_SHADER_BINARY_FJ                                                  = 0x9260,

    // ShaderParameterName

    GL_SHADER_TYPE                                                             = 0x8B4F,
//  GL_DELETE_STATUS                                                           = 0x8B80, // reuse ProgramPropertyARB
    GL_COMPILE_STATUS                                                          = 0x8B81,
//  GL_INFO_LOG_LENGTH                                                         = 0x8B84, // reuse PipelineParameterName
    GL_SHADER_SOURCE_LENGTH                                                    = 0x8B88,

    // ShaderType

//  GL_FRAGMENT_SHADER                                                         = 0x8B30, // reuse PipelineParameterName
//  GL_VERTEX_SHADER                                                           = 0x8B31, // reuse PipelineParameterName
//  GL_GEOMETRY_SHADER                                                         = 0x8DD9, // reuse PipelineParameterName
//  GL_TESS_EVALUATION_SHADER                                                  = 0x8E87, // reuse PipelineParameterName
//  GL_TESS_CONTROL_SHADER                                                     = 0x8E88, // reuse PipelineParameterName
    GL_COMPUTE_SHADER                                                          = 0x91B9,

    // ShadingRate

    GL_SHADING_RATE_1X1_PIXELS_EXT                                             = 0x96A6,
    GL_SHADING_RATE_1X2_PIXELS_EXT                                             = 0x96A7,
    GL_SHADING_RATE_2X1_PIXELS_EXT                                             = 0x96A8,
    GL_SHADING_RATE_2X2_PIXELS_EXT                                             = 0x96A9,
    GL_SHADING_RATE_1X4_PIXELS_EXT                                             = 0x96AA,
    GL_SHADING_RATE_4X1_PIXELS_EXT                                             = 0x96AB,
    GL_SHADING_RATE_4X2_PIXELS_EXT                                             = 0x96AC,
    GL_SHADING_RATE_2X4_PIXELS_EXT                                             = 0x96AD,
    GL_SHADING_RATE_4X4_PIXELS_EXT                                             = 0x96AE,

    // ShadingRateCombinerOp

    GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT                              = 0x96D2,
    GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT                           = 0x96D3,
    GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT                               = 0x96D4,
    GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT                               = 0x96D5,
    GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT                               = 0x96D6,

    // ShadingRateQCOM

    GL_SHADING_RATE_1X1_PIXELS_QCOM                                            = 0x96A6,
    GL_SHADING_RATE_1X2_PIXELS_QCOM                                            = 0x96A7,
    GL_SHADING_RATE_2X1_PIXELS_QCOM                                            = 0x96A8,
    GL_SHADING_RATE_2X2_PIXELS_QCOM                                            = 0x96A9,
    GL_SHADING_RATE_4X2_PIXELS_QCOM                                            = 0x96AC,
    GL_SHADING_RATE_4X4_PIXELS_QCOM                                            = 0x96AE,

    // SizedInternalFormat

//  GL_ALPHA8_EXT                                                              = 0x803C, // reuse InternalFormat
//  GL_ALPHA8_OES                                                              = 0x803C, // reuse InternalFormat
//  GL_LUMINANCE8_EXT                                                          = 0x8040, // reuse InternalFormat
//  GL_LUMINANCE8_OES                                                          = 0x8040, // reuse InternalFormat
//  GL_LUMINANCE4_ALPHA4_OES                                                   = 0x8043, // reuse InternalFormat
//  GL_LUMINANCE8_ALPHA8_EXT                                                   = 0x8045, // reuse InternalFormat
//  GL_LUMINANCE8_ALPHA8_OES                                                   = 0x8045, // reuse InternalFormat
//  GL_RGB8                                                                    = 0x8051, // reuse InternalFormat
//  GL_RGB8_OES                                                                = 0x8051, // reuse InternalFormat
//  GL_RGB10_EXT                                                               = 0x8052, // reuse InternalFormat
//  GL_RGB16_EXT                                                               = 0x8054, // reuse InternalFormat
//  GL_RGBA4                                                                   = 0x8056, // reuse InternalFormat
//  GL_RGBA4_OES                                                               = 0x8056, // reuse InternalFormat
//  GL_RGB5_A1                                                                 = 0x8057, // reuse InternalFormat
//  GL_RGB5_A1_OES                                                             = 0x8057, // reuse InternalFormat
//  GL_RGBA8                                                                   = 0x8058, // reuse InternalFormat
//  GL_RGBA8_OES                                                               = 0x8058, // reuse InternalFormat
//  GL_RGB10_A2                                                                = 0x8059, // reuse InternalFormat
//  GL_RGB10_A2_EXT                                                            = 0x8059, // reuse InternalFormat
//  GL_RGBA16_EXT                                                              = 0x805B, // reuse InternalFormat
//  GL_DEPTH_COMPONENT16                                                       = 0x81A5, // reuse InternalFormat
//  GL_DEPTH_COMPONENT16_OES                                                   = 0x81A5, // reuse InternalFormat
//  GL_DEPTH_COMPONENT24                                                       = 0x81A6, // reuse InternalFormat
//  GL_DEPTH_COMPONENT24_OES                                                   = 0x81A6, // reuse InternalFormat
//  GL_DEPTH_COMPONENT32_OES                                                   = 0x81A7, // reuse InternalFormat
//  GL_R8                                                                      = 0x8229, // reuse InternalFormat
//  GL_R8_EXT                                                                  = 0x8229, // reuse InternalFormat
//  GL_R16_EXT                                                                 = 0x822A, // reuse InternalFormat
//  GL_RG8                                                                     = 0x822B, // reuse InternalFormat
//  GL_RG8_EXT                                                                 = 0x822B, // reuse InternalFormat
//  GL_RG16_EXT                                                                = 0x822C, // reuse InternalFormat
//  GL_R16F                                                                    = 0x822D, // reuse InternalFormat
//  GL_R16F_EXT                                                                = 0x822D, // reuse InternalFormat
//  GL_R32F                                                                    = 0x822E, // reuse InternalFormat
//  GL_R32F_EXT                                                                = 0x822E, // reuse InternalFormat
//  GL_RG16F                                                                   = 0x822F, // reuse InternalFormat
//  GL_RG16F_EXT                                                               = 0x822F, // reuse InternalFormat
//  GL_RG32F                                                                   = 0x8230, // reuse InternalFormat
//  GL_RG32F_EXT                                                               = 0x8230, // reuse InternalFormat
//  GL_R8I                                                                     = 0x8231, // reuse InternalFormat
//  GL_R8UI                                                                    = 0x8232, // reuse InternalFormat
//  GL_R16I                                                                    = 0x8233, // reuse InternalFormat
//  GL_R16UI                                                                   = 0x8234, // reuse InternalFormat
//  GL_R32I                                                                    = 0x8235, // reuse InternalFormat
//  GL_R32UI                                                                   = 0x8236, // reuse InternalFormat
//  GL_RG8I                                                                    = 0x8237, // reuse InternalFormat
//  GL_RG8UI                                                                   = 0x8238, // reuse InternalFormat
//  GL_RG16I                                                                   = 0x8239, // reuse InternalFormat
//  GL_RG16UI                                                                  = 0x823A, // reuse InternalFormat
//  GL_RG32I                                                                   = 0x823B, // reuse InternalFormat
//  GL_RG32UI                                                                  = 0x823C, // reuse InternalFormat
//  GL_COMPRESSED_RGB_S3TC_DXT1_EXT                                            = 0x83F0, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_S3TC_DXT1_EXT                                           = 0x83F1, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE                                         = 0x83F2, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_S3TC_DXT3_EXT                                           = 0x83F2, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE                                         = 0x83F3, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_S3TC_DXT5_EXT                                           = 0x83F3, // reuse InternalFormat
//  GL_RGBA32F                                                                 = 0x8814, // reuse InternalFormat
//  GL_RGBA32F_EXT                                                             = 0x8814, // reuse InternalFormat
//  GL_RGB32F                                                                  = 0x8815, // reuse InternalFormat
//  GL_RGB32F_EXT                                                              = 0x8815, // reuse InternalFormat
//  GL_RGBA16F                                                                 = 0x881A, // reuse InternalFormat
//  GL_RGBA16F_EXT                                                             = 0x881A, // reuse InternalFormat
//  GL_RGB16F                                                                  = 0x881B, // reuse InternalFormat
//  GL_RGB16F_EXT                                                              = 0x881B, // reuse InternalFormat
//  GL_DEPTH24_STENCIL8                                                        = 0x88F0, // reuse InternalFormat
//  GL_DEPTH24_STENCIL8_OES                                                    = 0x88F0, // reuse InternalFormat
//  GL_R11F_G11F_B10F                                                          = 0x8C3A, // reuse InternalFormat
//  GL_R11F_G11F_B10F_APPLE                                                    = 0x8C3A, // reuse InternalFormat
//  GL_RGB9_E5                                                                 = 0x8C3D, // reuse InternalFormat
//  GL_RGB9_E5_APPLE                                                           = 0x8C3D, // reuse InternalFormat
//  GL_SRGB8                                                                   = 0x8C41, // reuse InternalFormat
//  GL_SRGB8_NV                                                                = 0x8C41, // reuse InternalFormat
//  GL_SRGB8_ALPHA8                                                            = 0x8C43, // reuse InternalFormat
//  GL_SRGB8_ALPHA8_EXT                                                        = 0x8C43, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_S3TC_DXT1_EXT                                           = 0x8C4C, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_S3TC_DXT1_NV                                            = 0x8C4C, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT                                     = 0x8C4D, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV                                      = 0x8C4D, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT                                     = 0x8C4E, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV                                      = 0x8C4E, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT                                     = 0x8C4F, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV                                      = 0x8C4F, // reuse InternalFormat
//  GL_DEPTH_COMPONENT32F                                                      = 0x8CAC, // reuse InternalFormat
//  GL_DEPTH32F_STENCIL8                                                       = 0x8CAD, // reuse InternalFormat
//  GL_STENCIL_INDEX1_OES                                                      = 0x8D46, // reuse InternalFormat
//  GL_STENCIL_INDEX4_OES                                                      = 0x8D47, // reuse InternalFormat
//  GL_STENCIL_INDEX8                                                          = 0x8D48, // reuse InternalFormat
//  GL_STENCIL_INDEX8_OES                                                      = 0x8D48, // reuse InternalFormat
//  GL_RGB565_OES                                                              = 0x8D62, // reuse InternalFormat
//  GL_RGB565                                                                  = 0x8D62, // reuse InternalFormat
//  GL_ETC1_RGB8_OES                                                           = 0x8D64, // reuse InternalFormat
//  GL_RGBA32UI                                                                = 0x8D70, // reuse InternalFormat
//  GL_RGB32UI                                                                 = 0x8D71, // reuse InternalFormat
//  GL_RGBA16UI                                                                = 0x8D76, // reuse InternalFormat
//  GL_RGB16UI                                                                 = 0x8D77, // reuse InternalFormat
//  GL_RGBA8UI                                                                 = 0x8D7C, // reuse InternalFormat
//  GL_RGB8UI                                                                  = 0x8D7D, // reuse InternalFormat
//  GL_RGBA32I                                                                 = 0x8D82, // reuse InternalFormat
//  GL_RGB32I                                                                  = 0x8D83, // reuse InternalFormat
//  GL_RGBA16I                                                                 = 0x8D88, // reuse InternalFormat
//  GL_RGB16I                                                                  = 0x8D89, // reuse InternalFormat
//  GL_RGBA8I                                                                  = 0x8D8E, // reuse InternalFormat
//  GL_RGB8I                                                                   = 0x8D8F, // reuse InternalFormat
//  GL_COMPRESSED_RED_RGTC1_EXT                                                = 0x8DBB, // reuse InternalFormat
//  GL_COMPRESSED_SIGNED_RED_RGTC1_EXT                                         = 0x8DBC, // reuse InternalFormat
//  GL_COMPRESSED_RED_GREEN_RGTC2_EXT                                          = 0x8DBD, // reuse InternalFormat
//  GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT                                   = 0x8DBE, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_BPTC_UNORM_EXT                                          = 0x8E8C, // reuse InternalFormat
//  GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT                                    = 0x8E8D, // reuse InternalFormat
//  GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT                                    = 0x8E8E, // reuse InternalFormat
//  GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT                                  = 0x8E8F, // reuse InternalFormat
//  GL_R8_SNORM                                                                = 0x8F94, // reuse InternalFormat
//  GL_RG8_SNORM                                                               = 0x8F95, // reuse InternalFormat
//  GL_RGB8_SNORM                                                              = 0x8F96, // reuse InternalFormat
//  GL_RGBA8_SNORM                                                             = 0x8F97, // reuse InternalFormat
//  GL_R16_SNORM_EXT                                                           = 0x8F98, // reuse InternalFormat
//  GL_RG16_SNORM_EXT                                                          = 0x8F99, // reuse InternalFormat
//  GL_RGB16_SNORM_EXT                                                         = 0x8F9A, // reuse InternalFormat
//  GL_RGBA16_SNORM_EXT                                                        = 0x8F9B, // reuse InternalFormat
//  GL_RGB10_A2UI                                                              = 0x906F, // reuse InternalFormat
//  GL_COMPRESSED_R11_EAC                                                      = 0x9270, // reuse InternalFormat
//  GL_COMPRESSED_SIGNED_R11_EAC                                               = 0x9271, // reuse InternalFormat
//  GL_COMPRESSED_RG11_EAC                                                     = 0x9272, // reuse InternalFormat
//  GL_COMPRESSED_SIGNED_RG11_EAC                                              = 0x9273, // reuse InternalFormat
//  GL_COMPRESSED_RGB8_ETC2                                                    = 0x9274, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ETC2                                                   = 0x9275, // reuse InternalFormat
//  GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2                                = 0x9276, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2                               = 0x9277, // reuse InternalFormat
//  GL_COMPRESSED_RGBA8_ETC2_EAC                                               = 0x9278, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC                                        = 0x9279, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_4x4                                                = 0x93B0, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_4x4_KHR                                            = 0x93B0, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x4                                                = 0x93B1, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x4_KHR                                            = 0x93B1, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x5                                                = 0x93B2, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x5_KHR                                            = 0x93B2, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x5                                                = 0x93B3, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x5_KHR                                            = 0x93B3, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x6                                                = 0x93B4, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x6_KHR                                            = 0x93B4, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x5                                                = 0x93B5, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x5_KHR                                            = 0x93B5, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x6                                                = 0x93B6, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x6_KHR                                            = 0x93B6, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x8                                                = 0x93B7, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_8x8_KHR                                            = 0x93B7, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x5                                               = 0x93B8, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x5_KHR                                           = 0x93B8, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x6                                               = 0x93B9, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x6_KHR                                           = 0x93B9, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x8                                               = 0x93BA, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x8_KHR                                           = 0x93BA, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x10                                              = 0x93BB, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_10x10_KHR                                          = 0x93BB, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_12x10                                              = 0x93BC, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_12x10_KHR                                          = 0x93BC, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_12x12                                              = 0x93BD, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_12x12_KHR                                          = 0x93BD, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_3x3x3_OES                                          = 0x93C0, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_4x3x3_OES                                          = 0x93C1, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_4x4x3_OES                                          = 0x93C2, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_4x4x4_OES                                          = 0x93C3, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x4x4_OES                                          = 0x93C4, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x5x4_OES                                          = 0x93C5, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_5x5x5_OES                                          = 0x93C6, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x5x5_OES                                          = 0x93C7, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x6x5_OES                                          = 0x93C8, // reuse InternalFormat
//  GL_COMPRESSED_RGBA_ASTC_6x6x6_OES                                          = 0x93C9, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4                                        = 0x93D0, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR                                    = 0x93D0, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4                                        = 0x93D1, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR                                    = 0x93D1, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5                                        = 0x93D2, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR                                    = 0x93D2, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5                                        = 0x93D3, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR                                    = 0x93D3, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6                                        = 0x93D4, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR                                    = 0x93D4, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5                                        = 0x93D5, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR                                    = 0x93D5, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6                                        = 0x93D6, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR                                    = 0x93D6, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8                                        = 0x93D7, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR                                    = 0x93D7, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5                                       = 0x93D8, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR                                   = 0x93D8, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6                                       = 0x93D9, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR                                   = 0x93D9, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8                                       = 0x93DA, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR                                   = 0x93DA, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10                                      = 0x93DB, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR                                  = 0x93DB, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10                                      = 0x93DC, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR                                  = 0x93DC, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12                                      = 0x93DD, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR                                  = 0x93DD, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES                                  = 0x93E0, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES                                  = 0x93E1, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES                                  = 0x93E2, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES                                  = 0x93E3, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES                                  = 0x93E4, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES                                  = 0x93E5, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES                                  = 0x93E6, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES                                  = 0x93E7, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES                                  = 0x93E8, // reuse InternalFormat
//  GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES                                  = 0x93E9, // reuse InternalFormat

    // StencilFunction

//  GL_NEVER                                                                   = 0x0200, // reuse AlphaFunction
//  GL_LESS                                                                    = 0x0201, // reuse AlphaFunction
//  GL_EQUAL                                                                   = 0x0202, // reuse AlphaFunction
//  GL_LEQUAL                                                                  = 0x0203, // reuse AlphaFunction
//  GL_GREATER                                                                 = 0x0204, // reuse AlphaFunction
//  GL_NOTEQUAL                                                                = 0x0205, // reuse AlphaFunction
//  GL_GEQUAL                                                                  = 0x0206, // reuse AlphaFunction
//  GL_ALWAYS                                                                  = 0x0207, // reuse AlphaFunction

    // StencilOp

//  GL_ZERO                                                                    = 0, // reuse BlendingFactor
//  GL_INVERT                                                                  = 0x150A, // reuse LogicOp
    GL_KEEP                                                                    = 0x1E00,
//  GL_REPLACE                                                                 = 0x1E01, // reuse LightEnvModeSGIX
    GL_INCR                                                                    = 0x1E02,
    GL_DECR                                                                    = 0x1E03,
    GL_INCR_WRAP                                                               = 0x8507,
    GL_DECR_WRAP                                                               = 0x8508,

    // StringName

    GL_VENDOR                                                                  = 0x1F00,
    GL_RENDERER                                                                = 0x1F01,
    GL_VERSION                                                                 = 0x1F02,
    GL_EXTENSIONS                                                              = 0x1F03,
    GL_SHADING_LANGUAGE_VERSION                                                = 0x8B8C,

    // SubgroupSupportedFeatures

    GL_SUBGROUP_FEATURE_BASIC_BIT_KHR                                          = 0x00000001,
    GL_SUBGROUP_FEATURE_VOTE_BIT_KHR                                           = 0x00000002,
    GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR                                     = 0x00000004,
    GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR                                         = 0x00000008,
    GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR                                        = 0x00000010,
    GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR                               = 0x00000020,
    GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR                                      = 0x00000040,
    GL_SUBGROUP_FEATURE_QUAD_BIT_KHR                                           = 0x00000080,
    GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV                                     = 0x00000100,

    // SubroutineParameterName

    GL_UNIFORM_SIZE                                                            = 0x8A38,
    GL_UNIFORM_NAME_LENGTH                                                     = 0x8A39,

    // SyncBehaviorFlags

//  GL_NONE                                                                    = 0, // reuse ColorBuffer

    // SyncCondition

    GL_SYNC_GPU_COMMANDS_COMPLETE                                              = 0x9117,

    // SyncParameterName

    GL_OBJECT_TYPE                                                             = 0x9112,
    GL_SYNC_CONDITION                                                          = 0x9113,
    GL_SYNC_STATUS                                                             = 0x9114,
    GL_SYNC_FLAGS                                                              = 0x9115,

    // SyncStatus

    GL_ALREADY_SIGNALED                                                        = 0x911A,
    GL_TIMEOUT_EXPIRED                                                         = 0x911B,
    GL_CONDITION_SATISFIED                                                     = 0x911C,
    GL_WAIT_FAILED                                                             = 0x911D,

    // TangentPointerTypeEXT

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // TexCoordPointerType

//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // TexStorageAttribs

//  GL_SURFACE_COMPRESSION_EXT                                                 = 0x96C0, // reuse GetTextureParameter
    GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT                                 = 0x96C1,
    GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT                              = 0x96C2,
    GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT                                 = 0x96C4,
    GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT                                 = 0x96C5,
    GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT                                 = 0x96C6,
    GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT                                 = 0x96C7,
    GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT                                 = 0x96C8,
    GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT                                 = 0x96C9,
    GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT                                 = 0x96CA,
    GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT                                 = 0x96CB,
    GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT                                 = 0x96CC,
    GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT                                = 0x96CD,
    GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT                                = 0x96CE,
    GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT                                = 0x96CF,

    // TextureCompareMode

//  GL_NONE                                                                    = 0, // reuse ColorBuffer
    GL_COMPARE_REF_TO_TEXTURE                                                  = 0x884E,

    // TextureEnvMode

//  GL_BLEND                                                                   = 0x0BE2, // reuse EnableCap
//  GL_REPLACE                                                                 = 0x1E01, // reuse LightEnvModeSGIX

    // TextureEnvParameter

    GL_CONSTANT_NV                                                             = 0x8576,
//  GL_PRIMARY_COLOR                                                           = 0x8577, // reuse FragmentShaderGenericSourceATI
    GL_SRC1_ALPHA_EXT                                                          = 0x8589,

    // TextureLayout

    GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT                           = 0x9530,
    GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT                           = 0x9531,
    GL_LAYOUT_GENERAL_EXT                                                      = 0x958D,
    GL_LAYOUT_COLOR_ATTACHMENT_EXT                                             = 0x958E,
    GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT                                     = 0x958F,
    GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT                                      = 0x9590,
    GL_LAYOUT_SHADER_READ_ONLY_EXT                                             = 0x9591,
    GL_LAYOUT_TRANSFER_SRC_EXT                                                 = 0x9592,
    GL_LAYOUT_TRANSFER_DST_EXT                                                 = 0x9593,

    // TextureMagFilter

//  GL_NEAREST                                                                 = 0x2600, // reuse BlitFramebufferFilter
//  GL_LINEAR                                                                  = 0x2601, // reuse BlitFramebufferFilter

    // TextureMinFilter

//  GL_NEAREST                                                                 = 0x2600, // reuse BlitFramebufferFilter
//  GL_LINEAR                                                                  = 0x2601, // reuse BlitFramebufferFilter
    GL_NEAREST_MIPMAP_NEAREST                                                  = 0x2700,
    GL_LINEAR_MIPMAP_NEAREST                                                   = 0x2701,
    GL_NEAREST_MIPMAP_LINEAR                                                   = 0x2702,
    GL_LINEAR_MIPMAP_LINEAR                                                    = 0x2703,

    // TextureParameterName

//  GL_TEXTURE_WIDTH                                                           = 0x1000, // reuse GetTextureParameter
//  GL_TEXTURE_HEIGHT                                                          = 0x1001, // reuse GetTextureParameter
//  GL_TEXTURE_INTERNAL_FORMAT                                                 = 0x1003, // reuse GetTextureParameter
//  GL_TEXTURE_BORDER_COLOR                                                    = 0x1004, // reuse GetTextureParameter
//  GL_TEXTURE_BORDER_COLOR_NV                                                 = 0x1004, // reuse GetTextureParameter
//  GL_TEXTURE_MAG_FILTER                                                      = 0x2800, // reuse GetTextureParameter
//  GL_TEXTURE_MIN_FILTER                                                      = 0x2801, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_S                                                          = 0x2802, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_T                                                          = 0x2803, // reuse GetTextureParameter
//  GL_TEXTURE_RED_SIZE                                                        = 0x805C, // reuse GetTextureParameter
//  GL_TEXTURE_GREEN_SIZE                                                      = 0x805D, // reuse GetTextureParameter
//  GL_TEXTURE_BLUE_SIZE                                                       = 0x805E, // reuse GetTextureParameter
//  GL_TEXTURE_ALPHA_SIZE                                                      = 0x805F, // reuse GetTextureParameter
//  GL_TEXTURE_WRAP_R                                                          = 0x8072, // reuse SamplerParameterI
    GL_TEXTURE_WRAP_R_OES                                                      = 0x8072,
//  GL_TEXTURE_MIN_LOD                                                         = 0x813A, // reuse SamplerParameterF
//  GL_TEXTURE_MAX_LOD                                                         = 0x813B, // reuse SamplerParameterF
    GL_TEXTURE_BASE_LEVEL                                                      = 0x813C,
    GL_TEXTURE_MAX_LEVEL                                                       = 0x813D,
//  GL_TEXTURE_COMPARE_MODE                                                    = 0x884C, // reuse SamplerParameterI
//  GL_TEXTURE_COMPARE_FUNC                                                    = 0x884D, // reuse SamplerParameterI
    GL_TEXTURE_SWIZZLE_R                                                       = 0x8E42,
    GL_TEXTURE_SWIZZLE_G                                                       = 0x8E43,
    GL_TEXTURE_SWIZZLE_B                                                       = 0x8E44,
    GL_TEXTURE_SWIZZLE_A                                                       = 0x8E45,
//  GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM                                    = 0x8F6A, // reuse GetTextureParameter
    GL_DEPTH_STENCIL_TEXTURE_MODE                                              = 0x90EA,
    GL_TEXTURE_TILING_EXT                                                      = 0x9580,
    GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM                                    = 0x96A0,

    // TextureSwizzle

//  GL_ZERO                                                                    = 0, // reuse BlendingFactor
//  GL_RED                                                                     = 0x1903, // reuse FragmentShaderValueRepATI
//  GL_GREEN                                                                   = 0x1904, // reuse FragmentShaderValueRepATI
//  GL_BLUE                                                                    = 0x1905, // reuse CombinerComponentUsageNV
//  GL_ALPHA                                                                   = 0x1906, // reuse CombinerComponentUsageNV
//  GL_ONE                                                                     = 1, // reuse BlendingFactor

    // TextureTarget

//  GL_TEXTURE_2D                                                              = 0x0DE1, // reuse CopyImageSubDataTarget
//  GL_TEXTURE_3D                                                              = 0x806F, // reuse CopyImageSubDataTarget
    GL_TEXTURE_3D_OES                                                          = 0x806F,
//  GL_TEXTURE_CUBE_MAP                                                        = 0x8513, // reuse CopyImageSubDataTarget
    GL_TEXTURE_CUBE_MAP_POSITIVE_X                                             = 0x8515,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_X                                             = 0x8516,
    GL_TEXTURE_CUBE_MAP_POSITIVE_Y                                             = 0x8517,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Y                                             = 0x8518,
    GL_TEXTURE_CUBE_MAP_POSITIVE_Z                                             = 0x8519,
    GL_TEXTURE_CUBE_MAP_NEGATIVE_Z                                             = 0x851A,
//  GL_TEXTURE_2D_ARRAY                                                        = 0x8C1A, // reuse CopyImageSubDataTarget
//  GL_TEXTURE_BUFFER                                                          = 0x8C2A, // reuse BufferStorageTarget
//  GL_RENDERBUFFER                                                            = 0x8D41, // reuse CopyImageSubDataTarget
//  GL_TEXTURE_CUBE_MAP_ARRAY                                                  = 0x9009, // reuse CopyImageSubDataTarget
    GL_TEXTURE_CUBE_MAP_ARRAY_EXT                                              = 0x9009,
    GL_TEXTURE_CUBE_MAP_ARRAY_OES                                              = 0x9009,
//  GL_TEXTURE_2D_MULTISAMPLE                                                  = 0x9100, // reuse CopyImageSubDataTarget
//  GL_TEXTURE_2D_MULTISAMPLE_ARRAY                                            = 0x9102, // reuse CopyImageSubDataTarget

    // TextureUnit

//  GL_TEXTURE0                                                                = 0x84C0, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE1                                                                = 0x84C1, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE2                                                                = 0x84C2, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE3                                                                = 0x84C3, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE4                                                                = 0x84C4, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE5                                                                = 0x84C5, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE6                                                                = 0x84C6, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE7                                                                = 0x84C7, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE8                                                                = 0x84C8, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE9                                                                = 0x84C9, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE10                                                               = 0x84CA, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE11                                                               = 0x84CB, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE12                                                               = 0x84CC, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE13                                                               = 0x84CD, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE14                                                               = 0x84CE, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE15                                                               = 0x84CF, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE16                                                               = 0x84D0, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE17                                                               = 0x84D1, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE18                                                               = 0x84D2, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE19                                                               = 0x84D3, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE20                                                               = 0x84D4, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE21                                                               = 0x84D5, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE22                                                               = 0x84D6, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE23                                                               = 0x84D7, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE24                                                               = 0x84D8, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE25                                                               = 0x84D9, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE26                                                               = 0x84DA, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE27                                                               = 0x84DB, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE28                                                               = 0x84DC, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE29                                                               = 0x84DD, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE30                                                               = 0x84DE, // reuse FragmentShaderTextureSourceATI
//  GL_TEXTURE31                                                               = 0x84DF, // reuse FragmentShaderTextureSourceATI

    // TextureWrapMode

//  GL_LINEAR_MIPMAP_LINEAR                                                    = 0x2703, // reuse TextureMinFilter
    GL_REPEAT                                                                  = 0x2901,
    GL_CLAMP_TO_BORDER                                                         = 0x812D,
    GL_CLAMP_TO_BORDER_NV                                                      = 0x812D,
    GL_CLAMP_TO_EDGE                                                           = 0x812F,
    GL_MIRRORED_REPEAT                                                         = 0x8370,

    // TransformFeedbackBufferMode

    GL_INTERLEAVED_ATTRIBS                                                     = 0x8C8C,
    GL_SEPARATE_ATTRIBS                                                        = 0x8C8D,

    // TransformFeedbackPName

//  GL_TRANSFORM_FEEDBACK_BUFFER_START                                         = 0x8C84, // reuse GetPName
//  GL_TRANSFORM_FEEDBACK_BUFFER_SIZE                                          = 0x8C85, // reuse GetPName
//  GL_TRANSFORM_FEEDBACK_BUFFER_BINDING                                       = 0x8C8F, // reuse GetPName
    GL_TRANSFORM_FEEDBACK_PAUSED                                               = 0x8E23,
    GL_TRANSFORM_FEEDBACK_ACTIVE                                               = 0x8E24,

    // TriangleFace

//  GL_FRONT                                                                   = 0x0404, // reuse ColorBuffer
//  GL_BACK                                                                    = 0x0405, // reuse ColorBuffer
//  GL_FRONT_AND_BACK                                                          = 0x0408, // reuse ColorBuffer

    // UNGROUPED

    GL_QUADS_OES                                                               = 0x0007,
    GL_LINES_ADJACENCY_OES                                                     = 0x000A,
    GL_LINE_STRIP_ADJACENCY_OES                                                = 0x000B,
    GL_TRIANGLES_ADJACENCY_OES                                                 = 0x000C,
    GL_TRIANGLE_STRIP_ADJACENCY_OES                                            = 0x000D,
    GL_PATCHES_OES                                                             = 0x000E,
    GL_SRC_ALPHA_SATURATE_EXT                                                  = 0x0308,
    GL_STACK_OVERFLOW_KHR                                                      = 0x0503,
    GL_STACK_UNDERFLOW_KHR                                                     = 0x0504,
    GL_CONTEXT_LOST                                                            = 0x0507,
    GL_CONTEXT_LOST_KHR                                                        = 0x0507,
    GL_POLYGON_MODE_NV                                                         = 0x0B40,
    GL_PATH_MODELVIEW_STACK_DEPTH_NV                                           = 0x0BA3,
    GL_PATH_PROJECTION_STACK_DEPTH_NV                                          = 0x0BA4,
    GL_PATH_MODELVIEW_MATRIX_NV                                                = 0x0BA6,
    GL_PATH_PROJECTION_MATRIX_NV                                               = 0x0BA7,
    GL_MAX_CLIP_DISTANCES_EXT                                                  = 0x0D32,
    GL_MAX_CLIP_DISTANCES_APPLE                                                = 0x0D32,
    GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV                                       = 0x0D36,
    GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV                                      = 0x0D38,
    GL_TEXTURE_BORDER_COLOR_EXT                                                = 0x1004,
    GL_TEXTURE_BORDER_COLOR_OES                                                = 0x1004,
    GL_2_BYTES_NV                                                              = 0x1407,
    GL_3_BYTES_NV                                                              = 0x1408,
    GL_4_BYTES_NV                                                              = 0x1409,
    GL_XOR_NV                                                                  = 0x1506,
    GL_PATH_MODELVIEW_NV                                                       = 0x1700,
    GL_PATH_PROJECTION_NV                                                      = 0x1701,
    GL_RED_NV                                                                  = 0x1903,
    GL_GREEN_NV                                                                = 0x1904,
    GL_BLUE_NV                                                                 = 0x1905,
    GL_POINT_NV                                                                = 0x1B00,
    GL_LINE_NV                                                                 = 0x1B01,
    GL_EYE_LINEAR_NV                                                           = 0x2400,
    GL_OBJECT_LINEAR_NV                                                        = 0x2401,
    GL_POLYGON_OFFSET_POINT_NV                                                 = 0x2A01,
    GL_POLYGON_OFFSET_LINE_NV                                                  = 0x2A02,
    GL_CLIP_DISTANCE0_EXT                                                      = 0x3000,
    GL_CLIP_DISTANCE0_APPLE                                                    = 0x3000,
    GL_CLIP_DISTANCE1_EXT                                                      = 0x3001,
    GL_CLIP_DISTANCE1_APPLE                                                    = 0x3001,
    GL_CLIP_DISTANCE2_EXT                                                      = 0x3002,
    GL_CLIP_DISTANCE2_APPLE                                                    = 0x3002,
    GL_CLIP_DISTANCE3_EXT                                                      = 0x3003,
    GL_CLIP_DISTANCE3_APPLE                                                    = 0x3003,
    GL_CLIP_DISTANCE4_EXT                                                      = 0x3004,
    GL_CLIP_DISTANCE4_APPLE                                                    = 0x3004,
    GL_CLIP_DISTANCE5_EXT                                                      = 0x3005,
    GL_CLIP_DISTANCE5_APPLE                                                    = 0x3005,
    GL_CLIP_DISTANCE6_EXT                                                      = 0x3006,
    GL_CLIP_DISTANCE6_APPLE                                                    = 0x3006,
    GL_CLIP_DISTANCE7_EXT                                                      = 0x3007,
    GL_CLIP_DISTANCE7_APPLE                                                    = 0x3007,
    GL_TEXTURE_BINDING_3D_OES                                                  = 0x806A,
    GL_TEXTURE_DEPTH                                                           = 0x8071,
    GL_MAX_3D_TEXTURE_SIZE_OES                                                 = 0x8073,
    GL_VERTEX_ARRAY_KHR                                                        = 0x8074,
    GL_MULTISAMPLE_EXT                                                         = 0x809D,
    GL_SAMPLE_ALPHA_TO_ONE_EXT                                                 = 0x809F,
    GL_CLAMP_TO_BORDER_EXT                                                     = 0x812D,
    GL_CLAMP_TO_BORDER_OES                                                     = 0x812D,
    GL_TEXTURE_MAX_LEVEL_APPLE                                                 = 0x813D,
    GL_FRAMEBUFFER_DEFAULT                                                     = 0x8218,
    GL_FRAMEBUFFER_UNDEFINED_OES                                               = 0x8219,
    GL_BUFFER_IMMUTABLE_STORAGE_EXT                                            = 0x821F,
    GL_BUFFER_STORAGE_FLAGS_EXT                                                = 0x8220,
    GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED                                 = 0x8221,
    GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES                             = 0x8221,
    GL_RG_EXT                                                                  = 0x8227,
    GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR                                            = 0x8242,
    GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH                                        = 0x8243,
    GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR                                    = 0x8243,
    GL_DEBUG_CALLBACK_FUNCTION_KHR                                             = 0x8244,
    GL_DEBUG_CALLBACK_USER_PARAM_KHR                                           = 0x8245,
    GL_DEBUG_SOURCE_API_KHR                                                    = 0x8246,
    GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR                                          = 0x8247,
    GL_DEBUG_SOURCE_SHADER_COMPILER_KHR                                        = 0x8248,
    GL_DEBUG_SOURCE_THIRD_PARTY_KHR                                            = 0x8249,
    GL_DEBUG_SOURCE_APPLICATION_KHR                                            = 0x824A,
    GL_DEBUG_SOURCE_OTHER_KHR                                                  = 0x824B,
    GL_DEBUG_TYPE_ERROR_KHR                                                    = 0x824C,
    GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR                                      = 0x824D,
    GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR                                       = 0x824E,
    GL_DEBUG_TYPE_PORTABILITY_KHR                                              = 0x824F,
    GL_DEBUG_TYPE_PERFORMANCE_KHR                                              = 0x8250,
    GL_DEBUG_TYPE_OTHER_KHR                                                    = 0x8251,
    GL_LOSE_CONTEXT_ON_RESET                                                   = 0x8252,
    GL_LOSE_CONTEXT_ON_RESET_EXT                                               = 0x8252,
    GL_LOSE_CONTEXT_ON_RESET_KHR                                               = 0x8252,
    GL_GUILTY_CONTEXT_RESET_EXT                                                = 0x8253,
    GL_GUILTY_CONTEXT_RESET_KHR                                                = 0x8253,
    GL_INNOCENT_CONTEXT_RESET_EXT                                              = 0x8254,
    GL_INNOCENT_CONTEXT_RESET_KHR                                              = 0x8254,
    GL_UNKNOWN_CONTEXT_RESET_EXT                                               = 0x8255,
    GL_UNKNOWN_CONTEXT_RESET_KHR                                               = 0x8255,
    GL_RESET_NOTIFICATION_STRATEGY                                             = 0x8256,
    GL_RESET_NOTIFICATION_STRATEGY_EXT                                         = 0x8256,
    GL_RESET_NOTIFICATION_STRATEGY_KHR                                         = 0x8256,
    GL_PROGRAM_SEPARABLE_EXT                                                   = 0x8258,
    GL_ACTIVE_PROGRAM_EXT                                                      = 0x8259,
    GL_PROGRAM_PIPELINE_BINDING_EXT                                            = 0x825A,
    GL_MAX_VIEWPORTS_NV                                                        = 0x825B,
    GL_MAX_VIEWPORTS_OES                                                       = 0x825B,
    GL_VIEWPORT_SUBPIXEL_BITS_NV                                               = 0x825C,
    GL_VIEWPORT_SUBPIXEL_BITS_OES                                              = 0x825C,
    GL_VIEWPORT_BOUNDS_RANGE_NV                                                = 0x825D,
    GL_VIEWPORT_BOUNDS_RANGE_OES                                               = 0x825D,
    GL_LAYER_PROVOKING_VERTEX_EXT                                              = 0x825E,
    GL_LAYER_PROVOKING_VERTEX_OES                                              = 0x825E,
    GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV                                      = 0x825F,
    GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES                                     = 0x825F,
    GL_UNDEFINED_VERTEX                                                        = 0x8260,
    GL_UNDEFINED_VERTEX_EXT                                                    = 0x8260,
    GL_UNDEFINED_VERTEX_OES                                                    = 0x8260,
    GL_NO_RESET_NOTIFICATION                                                   = 0x8261,
    GL_NO_RESET_NOTIFICATION_EXT                                               = 0x8261,
    GL_NO_RESET_NOTIFICATION_KHR                                               = 0x8261,
    GL_MAX_COMPUTE_SHARED_MEMORY_SIZE                                          = 0x8262,
    GL_DEBUG_TYPE_MARKER_KHR                                                   = 0x8268,
    GL_DEBUG_TYPE_PUSH_GROUP_KHR                                               = 0x8269,
    GL_DEBUG_TYPE_POP_GROUP_KHR                                                = 0x826A,
    GL_DEBUG_SEVERITY_NOTIFICATION_KHR                                         = 0x826B,
    GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR                                         = 0x826C,
    GL_DEBUG_GROUP_STACK_DEPTH_KHR                                             = 0x826D,
    GL_TEXTURE_VIEW_MIN_LEVEL_EXT                                              = 0x82DB,
    GL_TEXTURE_VIEW_MIN_LEVEL_OES                                              = 0x82DB,
    GL_TEXTURE_VIEW_NUM_LEVELS_EXT                                             = 0x82DC,
    GL_TEXTURE_VIEW_NUM_LEVELS_OES                                             = 0x82DC,
    GL_TEXTURE_VIEW_MIN_LAYER_EXT                                              = 0x82DD,
    GL_TEXTURE_VIEW_MIN_LAYER_OES                                              = 0x82DD,
    GL_TEXTURE_VIEW_NUM_LAYERS_EXT                                             = 0x82DE,
    GL_TEXTURE_VIEW_NUM_LAYERS_OES                                             = 0x82DE,
    GL_TEXTURE_IMMUTABLE_LEVELS                                                = 0x82DF,
    GL_BUFFER_KHR                                                              = 0x82E0,
    GL_SHADER_KHR                                                              = 0x82E1,
    GL_PROGRAM_KHR                                                             = 0x82E2,
    GL_QUERY_KHR                                                               = 0x82E3,
    GL_PROGRAM_PIPELINE_KHR                                                    = 0x82E4,
    GL_MAX_VERTEX_ATTRIB_STRIDE                                                = 0x82E5,
    GL_SAMPLER_KHR                                                             = 0x82E6,
    GL_DISPLAY_LIST                                                            = 0x82E7,
    GL_MAX_LABEL_LENGTH_KHR                                                    = 0x82E8,
    GL_MAX_CULL_DISTANCES_EXT                                                  = 0x82F9,
    GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT                                = 0x82FA,
    GL_CONTEXT_RELEASE_BEHAVIOR                                                = 0x82FB,
    GL_CONTEXT_RELEASE_BEHAVIOR_KHR                                            = 0x82FB,
    GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH                                          = 0x82FC,
    GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR                                      = 0x82FC,
    GL_BLACKHOLE_RENDER_INTEL                                                  = 0x83FC,
    GL_CONSERVATIVE_RASTERIZATION_INTEL                                        = 0x83FE,
    GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV                                      = 0x84E3,
    GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV                                     = 0x84E4,
    GL_TEXTURE_MAX_ANISOTROPY_EXT                                              = 0x84FE,
    GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT                                          = 0x84FF,
    GL_VERTEX_ARRAY_BINDING_OES                                                = 0x85B5,
    GL_UNSIGNED_SHORT_8_8_APPLE                                                = 0x85BA,
    GL_UNSIGNED_SHORT_8_8_REV_APPLE                                            = 0x85BB,
    GL_DEPTH_CLAMP_EXT                                                         = 0x864F,
    GL_Z400_BINARY_AMD                                                         = 0x8740,
    GL_PROGRAM_BINARY_LENGTH_OES                                               = 0x8741,
    GL_MIRROR_CLAMP_TO_EDGE_EXT                                                = 0x8743,
    GL_PROGRAM_BINARY_FORMAT_MESA                                              = 0x875F,
    GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD                                         = 0x87EE,
    GL_3DC_X_AMD                                                               = 0x87F9,
    GL_3DC_XY_AMD                                                              = 0x87FA,
    GL_NUM_PROGRAM_BINARY_FORMATS_OES                                          = 0x87FE,
    GL_PROGRAM_BINARY_FORMATS_OES                                              = 0x87FF,
    GL_ALPHA32F_EXT                                                            = 0x8816,
    GL_LUMINANCE32F_EXT                                                        = 0x8818,
    GL_LUMINANCE_ALPHA32F_EXT                                                  = 0x8819,
    GL_ALPHA16F_EXT                                                            = 0x881C,
    GL_LUMINANCE16F_EXT                                                        = 0x881E,
    GL_LUMINANCE_ALPHA16F_EXT                                                  = 0x881F,
    GL_WRITEONLY_RENDERING_QCOM                                                = 0x8823,
    GL_MAX_DRAW_BUFFERS_EXT                                                    = 0x8824,
    GL_MAX_DRAW_BUFFERS_NV                                                     = 0x8824,
    GL_DRAW_BUFFER0                                                            = 0x8825,
    GL_DRAW_BUFFER0_EXT                                                        = 0x8825,
    GL_DRAW_BUFFER0_NV                                                         = 0x8825,
    GL_DRAW_BUFFER1                                                            = 0x8826,
    GL_DRAW_BUFFER1_EXT                                                        = 0x8826,
    GL_DRAW_BUFFER1_NV                                                         = 0x8826,
    GL_DRAW_BUFFER2                                                            = 0x8827,
    GL_DRAW_BUFFER2_EXT                                                        = 0x8827,
    GL_DRAW_BUFFER2_NV                                                         = 0x8827,
    GL_DRAW_BUFFER3                                                            = 0x8828,
    GL_DRAW_BUFFER3_EXT                                                        = 0x8828,
    GL_DRAW_BUFFER3_NV                                                         = 0x8828,
    GL_DRAW_BUFFER4                                                            = 0x8829,
    GL_DRAW_BUFFER4_EXT                                                        = 0x8829,
    GL_DRAW_BUFFER4_NV                                                         = 0x8829,
    GL_DRAW_BUFFER5                                                            = 0x882A,
    GL_DRAW_BUFFER5_EXT                                                        = 0x882A,
    GL_DRAW_BUFFER5_NV                                                         = 0x882A,
    GL_DRAW_BUFFER6                                                            = 0x882B,
    GL_DRAW_BUFFER6_EXT                                                        = 0x882B,
    GL_DRAW_BUFFER6_NV                                                         = 0x882B,
    GL_DRAW_BUFFER7                                                            = 0x882C,
    GL_DRAW_BUFFER7_EXT                                                        = 0x882C,
    GL_DRAW_BUFFER7_NV                                                         = 0x882C,
    GL_DRAW_BUFFER8                                                            = 0x882D,
    GL_DRAW_BUFFER8_EXT                                                        = 0x882D,
    GL_DRAW_BUFFER8_NV                                                         = 0x882D,
    GL_DRAW_BUFFER9                                                            = 0x882E,
    GL_DRAW_BUFFER9_EXT                                                        = 0x882E,
    GL_DRAW_BUFFER9_NV                                                         = 0x882E,
    GL_DRAW_BUFFER10                                                           = 0x882F,
    GL_DRAW_BUFFER10_EXT                                                       = 0x882F,
    GL_DRAW_BUFFER10_NV                                                        = 0x882F,
    GL_DRAW_BUFFER11                                                           = 0x8830,
    GL_DRAW_BUFFER11_EXT                                                       = 0x8830,
    GL_DRAW_BUFFER11_NV                                                        = 0x8830,
    GL_DRAW_BUFFER12                                                           = 0x8831,
    GL_DRAW_BUFFER12_EXT                                                       = 0x8831,
    GL_DRAW_BUFFER12_NV                                                        = 0x8831,
    GL_DRAW_BUFFER13                                                           = 0x8832,
    GL_DRAW_BUFFER13_EXT                                                       = 0x8832,
    GL_DRAW_BUFFER13_NV                                                        = 0x8832,
    GL_DRAW_BUFFER14                                                           = 0x8833,
    GL_DRAW_BUFFER14_EXT                                                       = 0x8833,
    GL_DRAW_BUFFER14_NV                                                        = 0x8833,
    GL_DRAW_BUFFER15                                                           = 0x8834,
    GL_DRAW_BUFFER15_EXT                                                       = 0x8834,
    GL_DRAW_BUFFER15_NV                                                        = 0x8834,
    GL_TEXTURE_DEPTH_SIZE                                                      = 0x884A,
    GL_TEXTURE_COMPARE_MODE_EXT                                                = 0x884C,
    GL_TEXTURE_COMPARE_FUNC_EXT                                                = 0x884D,
    GL_COMPARE_REF_TO_TEXTURE_EXT                                              = 0x884E,
    GL_QUERY_COUNTER_BITS_EXT                                                  = 0x8864,
    GL_CURRENT_QUERY_EXT                                                       = 0x8865,
    GL_QUERY_RESULT_EXT                                                        = 0x8866,
    GL_QUERY_RESULT_AVAILABLE_EXT                                              = 0x8867,
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS                                       = 0x886C,
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT                                   = 0x886C,
    GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES                                   = 0x886C,
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS                                    = 0x886D,
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT                                = 0x886D,
    GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES                                = 0x886D,
    GL_GEOMETRY_SHADER_INVOCATIONS                                             = 0x887F,
    GL_GEOMETRY_SHADER_INVOCATIONS_EXT                                         = 0x887F,
    GL_GEOMETRY_SHADER_INVOCATIONS_OES                                         = 0x887F,
    GL_WRITE_ONLY_OES                                                          = 0x88B9,
    GL_BUFFER_ACCESS_OES                                                       = 0x88BB,
    GL_BUFFER_MAPPED_OES                                                       = 0x88BC,
    GL_BUFFER_MAP_POINTER_OES                                                  = 0x88BD,
    GL_TIME_ELAPSED_EXT                                                        = 0x88BF,
    GL_PIXEL_PACK_BUFFER_NV                                                    = 0x88EB,
    GL_PIXEL_UNPACK_BUFFER_NV                                                  = 0x88EC,
    GL_PIXEL_PACK_BUFFER_BINDING_NV                                            = 0x88ED,
    GL_ETC1_SRGB8_NV                                                           = 0x88EE,
    GL_PIXEL_UNPACK_BUFFER_BINDING_NV                                          = 0x88EF,
    GL_TEXTURE_STENCIL_SIZE                                                    = 0x88F1,
    GL_SRC1_COLOR_EXT                                                          = 0x88F9,
    GL_ONE_MINUS_SRC1_COLOR_EXT                                                = 0x88FA,
    GL_ONE_MINUS_SRC1_ALPHA_EXT                                                = 0x88FB,
    GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT                                        = 0x88FC,
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE                                       = 0x88FE,
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT                                         = 0x88FE,
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV                                          = 0x88FE,
    GL_GEOMETRY_LINKED_VERTICES_OUT_EXT                                        = 0x8916,
    GL_GEOMETRY_LINKED_VERTICES_OUT_OES                                        = 0x8916,
    GL_GEOMETRY_LINKED_INPUT_TYPE_EXT                                          = 0x8917,
    GL_GEOMETRY_LINKED_INPUT_TYPE_OES                                          = 0x8917,
    GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT                                         = 0x8918,
    GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES                                         = 0x8918,
    GL_RGB_422_APPLE                                                           = 0x8A1F,
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT                                         = 0x8A2C,
    GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES                                         = 0x8A2C,
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT                            = 0x8A32,
    GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES                            = 0x8A32,
    GL_TEXTURE_SRGB_DECODE_EXT                                                 = 0x8A48,
    GL_DECODE_EXT                                                              = 0x8A49,
    GL_SKIP_DECODE_EXT                                                         = 0x8A4A,
    GL_PROGRAM_PIPELINE_OBJECT_EXT                                             = 0x8A4F,
    GL_RGB_RAW_422_APPLE                                                       = 0x8A51,
    GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT                                    = 0x8A52,
    GL_SYNC_OBJECT_APPLE                                                       = 0x8A53,
    GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT                                        = 0x8A54,
    GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT                                        = 0x8A55,
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT                                  = 0x8A56,
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT                                  = 0x8A57,
    GL_SHADER_OBJECT_EXT                                                       = 0x8B48,
    GL_PALETTE4_RGB8_OES                                                       = 0x8B90,
    GL_PALETTE4_RGBA8_OES                                                      = 0x8B91,
    GL_PALETTE4_R5_G6_B5_OES                                                   = 0x8B92,
    GL_PALETTE4_RGBA4_OES                                                      = 0x8B93,
    GL_PALETTE4_RGB5_A1_OES                                                    = 0x8B94,
    GL_PALETTE8_RGB8_OES                                                       = 0x8B95,
    GL_PALETTE8_RGBA8_OES                                                      = 0x8B96,
    GL_PALETTE8_R5_G6_B5_OES                                                   = 0x8B97,
    GL_PALETTE8_RGBA4_OES                                                      = 0x8B98,
    GL_PALETTE8_RGB5_A1_OES                                                    = 0x8B99,
    GL_FRAMEBUFFER_FLIP_Y_MESA                                                 = 0x8BBB,
    GL_FRAMEBUFFER_FLIP_X_MESA                                                 = 0x8BBC,
    GL_FRAMEBUFFER_SWAP_XY_MESA                                                = 0x8BBD,
    GL_COUNTER_TYPE_AMD                                                        = 0x8BC0,
    GL_COUNTER_RANGE_AMD                                                       = 0x8BC1,
    GL_UNSIGNED_INT64_AMD                                                      = 0x8BC2,
    GL_PERCENTAGE_AMD                                                          = 0x8BC3,
    GL_PERFMON_RESULT_AVAILABLE_AMD                                            = 0x8BC4,
    GL_PERFMON_RESULT_SIZE_AMD                                                 = 0x8BC5,
    GL_PERFMON_RESULT_AMD                                                      = 0x8BC6,
    GL_TEXTURE_WIDTH_QCOM                                                      = 0x8BD2,
    GL_TEXTURE_HEIGHT_QCOM                                                     = 0x8BD3,
    GL_TEXTURE_DEPTH_QCOM                                                      = 0x8BD4,
    GL_TEXTURE_INTERNAL_FORMAT_QCOM                                            = 0x8BD5,
    GL_TEXTURE_FORMAT_QCOM                                                     = 0x8BD6,
    GL_TEXTURE_TYPE_QCOM                                                       = 0x8BD7,
    GL_TEXTURE_IMAGE_VALID_QCOM                                                = 0x8BD8,
    GL_TEXTURE_NUM_LEVELS_QCOM                                                 = 0x8BD9,
    GL_TEXTURE_TARGET_QCOM                                                     = 0x8BDA,
    GL_TEXTURE_OBJECT_VALID_QCOM                                               = 0x8BDB,
    GL_STATE_RESTORE                                                           = 0x8BDC,
    GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT                                             = 0x8BE7,
    GL_TEXTURE_PROTECTED_EXT                                                   = 0x8BFA,
    GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM                                      = 0x8BFB,
    GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM                                 = 0x8BFC,
    GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM                                     = 0x8BFD,
    GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM                            = 0x8BFE,
    GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM                                   = 0x8BFF,
    GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG                                         = 0x8C00,
    GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG                                         = 0x8C01,
    GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG                                        = 0x8C02,
    GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG                                        = 0x8C03,
    GL_TEXTURE_RED_TYPE                                                        = 0x8C10,
    GL_TEXTURE_GREEN_TYPE                                                      = 0x8C11,
    GL_TEXTURE_BLUE_TYPE                                                       = 0x8C12,
    GL_TEXTURE_ALPHA_TYPE                                                      = 0x8C13,
    GL_TEXTURE_DEPTH_TYPE                                                      = 0x8C16,
    GL_UNSIGNED_NORMALIZED                                                     = 0x8C17,
    GL_UNSIGNED_NORMALIZED_EXT                                                 = 0x8C17,
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT                                    = 0x8C29,
    GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES                                    = 0x8C29,
    GL_TEXTURE_BUFFER_EXT                                                      = 0x8C2A,
    GL_TEXTURE_BUFFER_OES                                                      = 0x8C2A,
    GL_TEXTURE_BUFFER_BINDING                                                  = 0x8C2A,
    GL_TEXTURE_BUFFER_BINDING_EXT                                              = 0x8C2A,
    GL_TEXTURE_BUFFER_BINDING_OES                                              = 0x8C2A,
    GL_MAX_TEXTURE_BUFFER_SIZE_EXT                                             = 0x8C2B,
    GL_MAX_TEXTURE_BUFFER_SIZE_OES                                             = 0x8C2B,
    GL_TEXTURE_BINDING_BUFFER_EXT                                              = 0x8C2C,
    GL_TEXTURE_BINDING_BUFFER_OES                                              = 0x8C2C,
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING                                       = 0x8C2D,
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT                                   = 0x8C2D,
    GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES                                   = 0x8C2D,
    GL_ANY_SAMPLES_PASSED_EXT                                                  = 0x8C2F,
    GL_SAMPLE_SHADING_OES                                                      = 0x8C36,
    GL_MIN_SAMPLE_SHADING_VALUE                                                = 0x8C37,
    GL_MIN_SAMPLE_SHADING_VALUE_OES                                            = 0x8C37,
    GL_TEXTURE_SHARED_SIZE                                                     = 0x8C3F,
    GL_SLUMINANCE_ALPHA_NV                                                     = 0x8C44,
    GL_SLUMINANCE8_ALPHA8_NV                                                   = 0x8C45,
    GL_SLUMINANCE_NV                                                           = 0x8C46,
    GL_SLUMINANCE8_NV                                                          = 0x8C47,
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS                              = 0x8C80,
    GL_PRIMITIVES_GENERATED_EXT                                                = 0x8C87,
    GL_PRIMITIVES_GENERATED_OES                                                = 0x8C87,
    GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS                           = 0x8C8A,
    GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS                                 = 0x8C8B,
    GL_ATC_RGB_AMD                                                             = 0x8C92,
    GL_ATC_RGBA_EXPLICIT_ALPHA_AMD                                             = 0x8C93,
    GL_TEXTURE_LOD_BIAS_QCOM                                                   = 0x8C96,
    GL_LOWER_LEFT_EXT                                                          = 0x8CA1,
    GL_UPPER_LEFT_EXT                                                          = 0x8CA2,
    GL_DRAW_FRAMEBUFFER_BINDING_ANGLE                                          = 0x8CA6,
    GL_DRAW_FRAMEBUFFER_BINDING_APPLE                                          = 0x8CA6,
    GL_DRAW_FRAMEBUFFER_BINDING_NV                                             = 0x8CA6,
    GL_FRAMEBUFFER_BINDING                                                     = 0x8CA6,
    GL_READ_FRAMEBUFFER_ANGLE                                                  = 0x8CA8,
    GL_READ_FRAMEBUFFER_APPLE                                                  = 0x8CA8,
    GL_READ_FRAMEBUFFER_NV                                                     = 0x8CA8,
    GL_DRAW_FRAMEBUFFER_ANGLE                                                  = 0x8CA9,
    GL_DRAW_FRAMEBUFFER_APPLE                                                  = 0x8CA9,
    GL_DRAW_FRAMEBUFFER_NV                                                     = 0x8CA9,
    GL_READ_FRAMEBUFFER_BINDING_ANGLE                                          = 0x8CAA,
    GL_READ_FRAMEBUFFER_BINDING_APPLE                                          = 0x8CAA,
    GL_READ_FRAMEBUFFER_BINDING_NV                                             = 0x8CAA,
    GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS                                       = 0x8CD9,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE                                = 0x8D56,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE                                = 0x8D56,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT                                  = 0x8D56,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV                                   = 0x8D56,
    GL_MAX_SAMPLES                                                             = 0x8D57,
    GL_MAX_SAMPLES_ANGLE                                                       = 0x8D57,
    GL_MAX_SAMPLES_APPLE                                                       = 0x8D57,
    GL_MAX_SAMPLES_EXT                                                         = 0x8D57,
    GL_MAX_SAMPLES_NV                                                          = 0x8D57,
    GL_HALF_FLOAT_OES                                                          = 0x8D61,
    GL_TEXTURE_EXTERNAL_OES                                                    = 0x8D65,
    GL_SAMPLER_EXTERNAL_OES                                                    = 0x8D66,
    GL_TEXTURE_BINDING_EXTERNAL_OES                                            = 0x8D67,
    GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES                                        = 0x8D68,
    GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT                                     = 0x8D6A,
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT                                = 0x8DA8,
    GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES                                = 0x8DA8,
    GL_FRAMEBUFFER_SRGB_EXT                                                    = 0x8DB9,
    GL_SAMPLER_BUFFER_EXT                                                      = 0x8DC2,
    GL_SAMPLER_BUFFER_OES                                                      = 0x8DC2,
    GL_SAMPLER_2D_ARRAY_SHADOW_NV                                              = 0x8DC4,
    GL_SAMPLER_CUBE_SHADOW_NV                                                  = 0x8DC5,
    GL_INT_SAMPLER_BUFFER_EXT                                                  = 0x8DD0,
    GL_INT_SAMPLER_BUFFER_OES                                                  = 0x8DD0,
    GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT                                         = 0x8DD8,
    GL_UNSIGNED_INT_SAMPLER_BUFFER_OES                                         = 0x8DD8,
    GL_GEOMETRY_SHADER_EXT                                                     = 0x8DD9,
    GL_GEOMETRY_SHADER_OES                                                     = 0x8DD9,
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT                                     = 0x8DDF,
    GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES                                     = 0x8DDF,
    GL_MAX_GEOMETRY_OUTPUT_VERTICES                                            = 0x8DE0,
    GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT                                        = 0x8DE0,
    GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES                                        = 0x8DE0,
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS                                    = 0x8DE1,
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT                                = 0x8DE1,
    GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES                                = 0x8DE1,
    GL_UNSIGNED_INT_10_10_10_2_OES                                             = 0x8DF6,
    GL_INT_10_10_10_2_OES                                                      = 0x8DF7,
    GL_QUERY_WAIT_NV                                                           = 0x8E13,
    GL_QUERY_NO_WAIT_NV                                                        = 0x8E14,
    GL_QUERY_BY_REGION_WAIT_NV                                                 = 0x8E15,
    GL_QUERY_BY_REGION_NO_WAIT_NV                                              = 0x8E16,
    GL_POLYGON_OFFSET_CLAMP_EXT                                                = 0x8E1B,
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS                            = 0x8E1E,
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                        = 0x8E1E,
    GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES                        = 0x8E1E,
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS                         = 0x8E1F,
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                     = 0x8E1F,
    GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                     = 0x8E1F,
    GL_COLOR_SAMPLES_NV                                                        = 0x8E20,
    GL_TRANSFORM_FEEDBACK_BINDING                                              = 0x8E25,
    GL_DEPTH_COMPONENT16_NONLINEAR_NV                                          = 0x8E2C,
    GL_FIRST_VERTEX_CONVENTION_EXT                                             = 0x8E4D,
    GL_FIRST_VERTEX_CONVENTION_OES                                             = 0x8E4D,
    GL_LAST_VERTEX_CONVENTION_EXT                                              = 0x8E4E,
    GL_LAST_VERTEX_CONVENTION_OES                                              = 0x8E4E,
    GL_SAMPLE_LOCATION_NV                                                      = 0x8E50,
    GL_SAMPLE_MASK_VALUE                                                       = 0x8E52,
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS                                         = 0x8E5A,
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT                                     = 0x8E5A,
    GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES                                     = 0x8E5A,
    GL_MIN_FRAGMENT_INTERPOLATION_OFFSET                                       = 0x8E5B,
    GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES                                   = 0x8E5B,
    GL_MAX_FRAGMENT_INTERPOLATION_OFFSET                                       = 0x8E5C,
    GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES                                   = 0x8E5C,
    GL_FRAGMENT_INTERPOLATION_OFFSET_BITS                                      = 0x8E5D,
    GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES                                  = 0x8E5D,
    GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET                                       = 0x8E5E,
    GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET                                       = 0x8E5F,
    GL_MAX_MESH_UNIFORM_BLOCKS_NV                                              = 0x8E60,
    GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV                                         = 0x8E61,
    GL_MAX_MESH_IMAGE_UNIFORMS_NV                                              = 0x8E62,
    GL_MAX_MESH_UNIFORM_COMPONENTS_NV                                          = 0x8E63,
    GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV                                      = 0x8E64,
    GL_MAX_MESH_ATOMIC_COUNTERS_NV                                             = 0x8E65,
    GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV                                       = 0x8E66,
    GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV                                 = 0x8E67,
    GL_MAX_TASK_UNIFORM_BLOCKS_NV                                              = 0x8E68,
    GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV                                         = 0x8E69,
    GL_MAX_TASK_IMAGE_UNIFORMS_NV                                              = 0x8E6A,
    GL_MAX_TASK_UNIFORM_COMPONENTS_NV                                          = 0x8E6B,
    GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV                                      = 0x8E6C,
    GL_MAX_TASK_ATOMIC_COUNTERS_NV                                             = 0x8E6D,
    GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV                                       = 0x8E6E,
    GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV                                 = 0x8E6F,
    GL_PATCH_VERTICES_EXT                                                      = 0x8E72,
    GL_PATCH_VERTICES_OES                                                      = 0x8E72,
    GL_TESS_CONTROL_OUTPUT_VERTICES                                            = 0x8E75,
    GL_TESS_CONTROL_OUTPUT_VERTICES_EXT                                        = 0x8E75,
    GL_TESS_CONTROL_OUTPUT_VERTICES_OES                                        = 0x8E75,
    GL_TESS_GEN_MODE                                                           = 0x8E76,
    GL_TESS_GEN_MODE_EXT                                                       = 0x8E76,
    GL_TESS_GEN_MODE_OES                                                       = 0x8E76,
    GL_TESS_GEN_SPACING                                                        = 0x8E77,
    GL_TESS_GEN_SPACING_EXT                                                    = 0x8E77,
    GL_TESS_GEN_SPACING_OES                                                    = 0x8E77,
    GL_TESS_GEN_VERTEX_ORDER                                                   = 0x8E78,
    GL_TESS_GEN_VERTEX_ORDER_EXT                                               = 0x8E78,
    GL_TESS_GEN_VERTEX_ORDER_OES                                               = 0x8E78,
    GL_TESS_GEN_POINT_MODE                                                     = 0x8E79,
    GL_TESS_GEN_POINT_MODE_EXT                                                 = 0x8E79,
    GL_TESS_GEN_POINT_MODE_OES                                                 = 0x8E79,
    GL_ISOLINES                                                                = 0x8E7A,
    GL_ISOLINES_EXT                                                            = 0x8E7A,
    GL_ISOLINES_OES                                                            = 0x8E7A,
    GL_FRACTIONAL_ODD                                                          = 0x8E7B,
    GL_FRACTIONAL_ODD_EXT                                                      = 0x8E7B,
    GL_FRACTIONAL_ODD_OES                                                      = 0x8E7B,
    GL_FRACTIONAL_EVEN                                                         = 0x8E7C,
    GL_FRACTIONAL_EVEN_EXT                                                     = 0x8E7C,
    GL_FRACTIONAL_EVEN_OES                                                     = 0x8E7C,
    GL_MAX_PATCH_VERTICES                                                      = 0x8E7D,
    GL_MAX_PATCH_VERTICES_EXT                                                  = 0x8E7D,
    GL_MAX_PATCH_VERTICES_OES                                                  = 0x8E7D,
    GL_MAX_TESS_GEN_LEVEL                                                      = 0x8E7E,
    GL_MAX_TESS_GEN_LEVEL_EXT                                                  = 0x8E7E,
    GL_MAX_TESS_GEN_LEVEL_OES                                                  = 0x8E7E,
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS                                     = 0x8E7F,
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT                                 = 0x8E7F,
    GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES                                 = 0x8E7F,
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS                                  = 0x8E80,
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT                              = 0x8E80,
    GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES                              = 0x8E80,
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS                                    = 0x8E81,
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT                                = 0x8E81,
    GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES                                = 0x8E81,
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS                                 = 0x8E82,
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT                             = 0x8E82,
    GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES                             = 0x8E82,
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS                                      = 0x8E83,
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT                                  = 0x8E83,
    GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES                                  = 0x8E83,
    GL_MAX_TESS_PATCH_COMPONENTS                                               = 0x8E84,
    GL_MAX_TESS_PATCH_COMPONENTS_EXT                                           = 0x8E84,
    GL_MAX_TESS_PATCH_COMPONENTS_OES                                           = 0x8E84,
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS                                = 0x8E85,
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT                            = 0x8E85,
    GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES                            = 0x8E85,
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS                                   = 0x8E86,
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT                               = 0x8E86,
    GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES                               = 0x8E86,
    GL_TESS_EVALUATION_SHADER_EXT                                              = 0x8E87,
    GL_TESS_EVALUATION_SHADER_OES                                              = 0x8E87,
    GL_TESS_CONTROL_SHADER_EXT                                                 = 0x8E88,
    GL_TESS_CONTROL_SHADER_OES                                                 = 0x8E88,
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT                                     = 0x8E89,
    GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES                                     = 0x8E89,
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT                                  = 0x8E8A,
    GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES                                  = 0x8E8A,
    GL_COVERAGE_COMPONENT_NV                                                   = 0x8ED0,
    GL_COVERAGE_COMPONENT4_NV                                                  = 0x8ED1,
    GL_COVERAGE_ATTACHMENT_NV                                                  = 0x8ED2,
    GL_COVERAGE_BUFFERS_NV                                                     = 0x8ED3,
    GL_COVERAGE_SAMPLES_NV                                                     = 0x8ED4,
    GL_COVERAGE_ALL_FRAGMENTS_NV                                               = 0x8ED5,
    GL_COVERAGE_EDGE_FRAGMENTS_NV                                              = 0x8ED6,
    GL_COVERAGE_AUTOMATIC_NV                                                   = 0x8ED7,
    GL_INCLUSIVE_EXT                                                           = 0x8F10,
    GL_EXCLUSIVE_EXT                                                           = 0x8F11,
    GL_WINDOW_RECTANGLE_EXT                                                    = 0x8F12,
    GL_WINDOW_RECTANGLE_MODE_EXT                                               = 0x8F13,
    GL_MAX_WINDOW_RECTANGLES_EXT                                               = 0x8F14,
    GL_NUM_WINDOW_RECTANGLES_EXT                                               = 0x8F15,
    GL_COPY_READ_BUFFER_NV                                                     = 0x8F36,
    GL_COPY_READ_BUFFER_BINDING                                                = 0x8F36,
    GL_COPY_WRITE_BUFFER_NV                                                    = 0x8F37,
    GL_COPY_WRITE_BUFFER_BINDING                                               = 0x8F37,
    GL_MAX_IMAGE_UNITS                                                         = 0x8F38,
    GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES                                    = 0x8F39,
    GL_IMAGE_BINDING_NAME                                                      = 0x8F3A,
    GL_IMAGE_BINDING_LEVEL                                                     = 0x8F3B,
    GL_IMAGE_BINDING_LAYERED                                                   = 0x8F3C,
    GL_IMAGE_BINDING_LAYER                                                     = 0x8F3D,
    GL_IMAGE_BINDING_ACCESS                                                    = 0x8F3E,
    GL_DRAW_INDIRECT_BUFFER_BINDING                                            = 0x8F43,
    GL_VERTEX_BINDING_BUFFER                                                   = 0x8F4F,
    GL_MALI_PROGRAM_BINARY_ARM                                                 = 0x8F61,
    GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT                            = 0x8F63,
    GL_SHADER_PIXEL_LOCAL_STORAGE_EXT                                          = 0x8F64,
    GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT                                 = 0x8F67,
    GL_TEXTURE_ASTC_DECODE_PRECISION_EXT                                       = 0x8F69,
    GL_SIGNED_NORMALIZED                                                       = 0x8F9C,
    GL_PERFMON_GLOBAL_MODE_QCOM                                                = 0x8FA0,
    GL_MAX_SHADER_SUBSAMPLED_IMAGE_UNITS_QCOM                                  = 0x8FA1,
    GL_CPU_OPTIMIZED_QCOM                                                      = 0x8FB1,
    GL_GPU_OPTIMIZED_QCOM                                                      = 0x8FB2,
    GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM                                       = 0x8FB3,
    GL_GPU_DISJOINT_EXT                                                        = 0x8FBB,
    GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT                                        = 0x8FBF,
    GL_INT8_NV                                                                 = 0x8FE0,
    GL_INT8_VEC2_NV                                                            = 0x8FE1,
    GL_INT8_VEC3_NV                                                            = 0x8FE2,
    GL_INT8_VEC4_NV                                                            = 0x8FE3,
    GL_INT16_NV                                                                = 0x8FE4,
    GL_INT16_VEC2_NV                                                           = 0x8FE5,
    GL_INT16_VEC3_NV                                                           = 0x8FE6,
    GL_INT16_VEC4_NV                                                           = 0x8FE7,
    GL_INT64_VEC2_NV                                                           = 0x8FE9,
    GL_INT64_VEC3_NV                                                           = 0x8FEA,
    GL_INT64_VEC4_NV                                                           = 0x8FEB,
    GL_UNSIGNED_INT8_NV                                                        = 0x8FEC,
    GL_UNSIGNED_INT8_VEC2_NV                                                   = 0x8FED,
    GL_UNSIGNED_INT8_VEC3_NV                                                   = 0x8FEE,
    GL_UNSIGNED_INT8_VEC4_NV                                                   = 0x8FEF,
    GL_UNSIGNED_INT16_NV                                                       = 0x8FF0,
    GL_UNSIGNED_INT16_VEC2_NV                                                  = 0x8FF1,
    GL_UNSIGNED_INT16_VEC3_NV                                                  = 0x8FF2,
    GL_UNSIGNED_INT16_VEC4_NV                                                  = 0x8FF3,
    GL_UNSIGNED_INT64_VEC2_NV                                                  = 0x8FF5,
    GL_UNSIGNED_INT64_VEC3_NV                                                  = 0x8FF6,
    GL_UNSIGNED_INT64_VEC4_NV                                                  = 0x8FF7,
    GL_FLOAT16_NV                                                              = 0x8FF8,
    GL_FLOAT16_VEC2_NV                                                         = 0x8FF9,
    GL_FLOAT16_VEC3_NV                                                         = 0x8FFA,
    GL_FLOAT16_VEC4_NV                                                         = 0x8FFB,
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY                                          = 0x900A,
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT                                      = 0x900A,
    GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES                                      = 0x900A,
    GL_SAMPLER_CUBE_MAP_ARRAY_EXT                                              = 0x900C,
    GL_SAMPLER_CUBE_MAP_ARRAY_OES                                              = 0x900C,
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT                                       = 0x900D,
    GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES                                       = 0x900D,
    GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                                          = 0x900E,
    GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES                                          = 0x900E,
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT                                 = 0x900F,
    GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES                                 = 0x900F,
    GL_FACTOR_MIN_AMD                                                          = 0x901C,
    GL_FACTOR_MAX_AMD                                                          = 0x901D,
    GL_IMAGE_BUFFER_EXT                                                        = 0x9051,
    GL_IMAGE_BUFFER_OES                                                        = 0x9051,
    GL_IMAGE_CUBE_MAP_ARRAY_EXT                                                = 0x9054,
    GL_IMAGE_CUBE_MAP_ARRAY_OES                                                = 0x9054,
    GL_INT_IMAGE_BUFFER_EXT                                                    = 0x905C,
    GL_INT_IMAGE_BUFFER_OES                                                    = 0x905C,
    GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                            = 0x905F,
    GL_INT_IMAGE_CUBE_MAP_ARRAY_OES                                            = 0x905F,
    GL_UNSIGNED_INT_IMAGE_BUFFER_EXT                                           = 0x9067,
    GL_UNSIGNED_INT_IMAGE_BUFFER_OES                                           = 0x9067,
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT                                   = 0x906A,
    GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES                                   = 0x906A,
    GL_IMAGE_BINDING_FORMAT                                                    = 0x906E,
    GL_SQUARE_NV                                                               = 0x90A3,
    GL_ROUND_NV                                                                = 0x90A4,
    GL_TRIANGULAR_NV                                                           = 0x90A5,
    GL_BEVEL_NV                                                                = 0x90A6,
    GL_MITER_REVERT_NV                                                         = 0x90A7,
    GL_MITER_TRUNCATE_NV                                                       = 0x90A8,
    GL_PATH_ERROR_POSITION_NV                                                  = 0x90AB,
    GL_PATH_FOG_GEN_MODE_NV                                                    = 0x90AC,
    GL_PATH_GEN_MODE_NV                                                        = 0x90B0,
    GL_PATH_GEN_COEFF_NV                                                       = 0x90B1,
    GL_PATH_GEN_COLOR_FORMAT_NV                                                = 0x90B2,
    GL_PATH_GEN_COMPONENTS_NV                                                  = 0x90B3,
    GL_MOVE_TO_RESETS_NV                                                       = 0x90B5,
    GL_MOVE_TO_CONTINUES_NV                                                    = 0x90B6,
    GL_PATH_STENCIL_FUNC_NV                                                    = 0x90B7,
    GL_PATH_STENCIL_REF_NV                                                     = 0x90B8,
    GL_PATH_STENCIL_VALUE_MASK_NV                                              = 0x90B9,
    GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV                                     = 0x90BD,
    GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV                                      = 0x90BE,
    GL_PATH_COVER_DEPTH_FUNC_NV                                                = 0x90BF,
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE                                      = 0x90C8,
    GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS                                     = 0x90C9,
    GL_MAX_VERTEX_IMAGE_UNIFORMS                                               = 0x90CA,
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS                                         = 0x90CB,
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT                                     = 0x90CB,
    GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES                                     = 0x90CB,
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS                                      = 0x90CC,
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT                                  = 0x90CC,
    GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES                                  = 0x90CC,
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS                                             = 0x90CD,
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT                                         = 0x90CD,
    GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES                                         = 0x90CD,
    GL_MAX_FRAGMENT_IMAGE_UNIFORMS                                             = 0x90CE,
    GL_MAX_COMBINED_IMAGE_UNIFORMS                                             = 0x90CF,
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT                                  = 0x90D7,
    GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES                                  = 0x90D7,
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT                              = 0x90D8,
    GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES                              = 0x90D8,
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT                           = 0x90D9,
    GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES                           = 0x90D9,
    GL_MAX_SHADER_STORAGE_BLOCK_SIZE                                           = 0x90DE,
    GL_COLOR_ATTACHMENT_EXT                                                    = 0x90F0,
    GL_MULTIVIEW_EXT                                                           = 0x90F1,
    GL_MAX_MULTIVIEW_BUFFERS_EXT                                               = 0x90F2,
    GL_CONTEXT_ROBUST_ACCESS                                                   = 0x90F3,
    GL_CONTEXT_ROBUST_ACCESS_EXT                                               = 0x90F3,
    GL_CONTEXT_ROBUST_ACCESS_KHR                                               = 0x90F3,
    GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES                                        = 0x9102,
    GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES                                = 0x9105,
    GL_TEXTURE_SAMPLES                                                         = 0x9106,
    GL_TEXTURE_FIXED_SAMPLE_LOCATIONS                                          = 0x9107,
    GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                        = 0x910B,
    GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                                    = 0x910C,
    GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES                           = 0x910D,
    GL_MAX_SERVER_WAIT_TIMEOUT_APPLE                                           = 0x9111,
    GL_OBJECT_TYPE_APPLE                                                       = 0x9112,
    GL_SYNC_CONDITION_APPLE                                                    = 0x9113,
    GL_SYNC_STATUS_APPLE                                                       = 0x9114,
    GL_SYNC_FLAGS_APPLE                                                        = 0x9115,
    GL_SYNC_FENCE                                                              = 0x9116,
    GL_SYNC_FENCE_APPLE                                                        = 0x9116,
    GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE                                        = 0x9117,
    GL_UNSIGNALED                                                              = 0x9118,
    GL_UNSIGNALED_APPLE                                                        = 0x9118,
    GL_SIGNALED                                                                = 0x9119,
    GL_SIGNALED_APPLE                                                          = 0x9119,
    GL_ALREADY_SIGNALED_APPLE                                                  = 0x911A,
    GL_TIMEOUT_EXPIRED_APPLE                                                   = 0x911B,
    GL_CONDITION_SATISFIED_APPLE                                               = 0x911C,
    GL_WAIT_FAILED_APPLE                                                       = 0x911D,
    GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT                                       = 0x9123,
    GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES                                       = 0x9123,
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT                                      = 0x9124,
    GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES                                      = 0x9124,
    GL_TEXTURE_IMMUTABLE_FORMAT                                                = 0x912F,
    GL_TEXTURE_IMMUTABLE_FORMAT_EXT                                            = 0x912F,
    GL_SGX_PROGRAM_BINARY_IMG                                                  = 0x9130,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG                                  = 0x9134,
    GL_MAX_SAMPLES_IMG                                                         = 0x9135,
    GL_TEXTURE_SAMPLES_IMG                                                     = 0x9136,
    GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG                                        = 0x9137,
    GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG                                        = 0x9138,
    GL_CUBIC_IMG                                                               = 0x9139,
    GL_CUBIC_MIPMAP_NEAREST_IMG                                                = 0x913A,
    GL_CUBIC_MIPMAP_LINEAR_IMG                                                 = 0x913B,
    GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG                   = 0x913C,
    GL_NUM_DOWNSAMPLE_SCALES_IMG                                               = 0x913D,
    GL_DOWNSAMPLE_SCALES_IMG                                                   = 0x913E,
    GL_MAX_DEBUG_MESSAGE_LENGTH                                                = 0x9143,
    GL_MAX_DEBUG_MESSAGE_LENGTH_KHR                                            = 0x9143,
    GL_MAX_DEBUG_LOGGED_MESSAGES                                               = 0x9144,
    GL_MAX_DEBUG_LOGGED_MESSAGES_KHR                                           = 0x9144,
    GL_DEBUG_LOGGED_MESSAGES                                                   = 0x9145,
    GL_DEBUG_LOGGED_MESSAGES_KHR                                               = 0x9145,
    GL_DEBUG_SEVERITY_HIGH_KHR                                                 = 0x9146,
    GL_DEBUG_SEVERITY_MEDIUM_KHR                                               = 0x9147,
    GL_DEBUG_SEVERITY_LOW_KHR                                                  = 0x9148,
    GL_BUFFER_OBJECT_EXT                                                       = 0x9151,
    GL_QUERY_OBJECT_EXT                                                        = 0x9153,
    GL_VERTEX_ARRAY_OBJECT_EXT                                                 = 0x9154,
    GL_VIRTUAL_PAGE_SIZE_X_EXT                                                 = 0x9195,
    GL_VIRTUAL_PAGE_SIZE_Y_EXT                                                 = 0x9196,
    GL_VIRTUAL_PAGE_SIZE_Z_EXT                                                 = 0x9197,
    GL_MAX_SPARSE_TEXTURE_SIZE_EXT                                             = 0x9198,
    GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT                                          = 0x9199,
    GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT                                     = 0x919A,
    GL_TEXTURE_BUFFER_OFFSET                                                   = 0x919D,
    GL_TEXTURE_BUFFER_OFFSET_EXT                                               = 0x919D,
    GL_TEXTURE_BUFFER_OFFSET_OES                                               = 0x919D,
    GL_TEXTURE_BUFFER_SIZE                                                     = 0x919E,
    GL_TEXTURE_BUFFER_SIZE_EXT                                                 = 0x919E,
    GL_TEXTURE_BUFFER_SIZE_OES                                                 = 0x919E,
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT                                     = 0x919F,
    GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES                                     = 0x919F,
    GL_TEXTURE_SPARSE_EXT                                                      = 0x91A6,
    GL_VIRTUAL_PAGE_SIZE_INDEX_EXT                                             = 0x91A7,
    GL_NUM_VIRTUAL_PAGE_SIZES_EXT                                              = 0x91A8,
    GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT                              = 0x91A9,
    GL_NUM_SPARSE_LEVELS_EXT                                                   = 0x91AA,
    GL_MAX_SHADER_COMPILER_THREADS_KHR                                         = 0x91B0,
    GL_COMPLETION_STATUS_KHR                                                   = 0x91B1,
    GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD                                       = 0x91B3,
    GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD                               = 0x91B4,
    GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD                               = 0x91B5,
    GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD                                     = 0x91B6,
    GL_SUPPORTED_MULTISAMPLE_MODES_AMD                                         = 0x91B7,
    GL_MAX_COMPUTE_IMAGE_UNIFORMS                                              = 0x91BD,
    GL_SMAPHS30_PROGRAM_BINARY_DMP                                             = 0x9251,
    GL_SMAPHS_PROGRAM_BINARY_DMP                                               = 0x9252,
    GL_DMP_PROGRAM_BINARY_DMP                                                  = 0x9253,
    GL_BLEND_PREMULTIPLIED_SRC_NV                                              = 0x9280,
    GL_BLEND_OVERLAP_NV                                                        = 0x9281,
    GL_UNCORRELATED_NV                                                         = 0x9282,
    GL_DISJOINT_NV                                                             = 0x9283,
    GL_CONJOINT_NV                                                             = 0x9284,
    GL_BLEND_ADVANCED_COHERENT_KHR                                             = 0x9285,
    GL_BLEND_ADVANCED_COHERENT_NV                                              = 0x9285,
    GL_SRC_NV                                                                  = 0x9286,
    GL_DST_NV                                                                  = 0x9287,
    GL_SRC_OVER_NV                                                             = 0x9288,
    GL_DST_OVER_NV                                                             = 0x9289,
    GL_SRC_IN_NV                                                               = 0x928A,
    GL_DST_IN_NV                                                               = 0x928B,
    GL_SRC_OUT_NV                                                              = 0x928C,
    GL_DST_OUT_NV                                                              = 0x928D,
    GL_SRC_ATOP_NV                                                             = 0x928E,
    GL_DST_ATOP_NV                                                             = 0x928F,
    GL_PLUS_NV                                                                 = 0x9291,
    GL_PLUS_DARKER_NV                                                          = 0x9292,
    GL_MULTIPLY                                                                = 0x9294,
    GL_MULTIPLY_KHR                                                            = 0x9294,
    GL_MULTIPLY_NV                                                             = 0x9294,
    GL_SCREEN                                                                  = 0x9295,
    GL_SCREEN_KHR                                                              = 0x9295,
    GL_SCREEN_NV                                                               = 0x9295,
    GL_OVERLAY                                                                 = 0x9296,
    GL_OVERLAY_KHR                                                             = 0x9296,
    GL_OVERLAY_NV                                                              = 0x9296,
    GL_DARKEN                                                                  = 0x9297,
    GL_DARKEN_KHR                                                              = 0x9297,
    GL_DARKEN_NV                                                               = 0x9297,
    GL_LIGHTEN                                                                 = 0x9298,
    GL_LIGHTEN_KHR                                                             = 0x9298,
    GL_LIGHTEN_NV                                                              = 0x9298,
    GL_COLORDODGE                                                              = 0x9299,
    GL_COLORDODGE_KHR                                                          = 0x9299,
    GL_COLORDODGE_NV                                                           = 0x9299,
    GL_COLORBURN                                                               = 0x929A,
    GL_COLORBURN_KHR                                                           = 0x929A,
    GL_COLORBURN_NV                                                            = 0x929A,
    GL_HARDLIGHT                                                               = 0x929B,
    GL_HARDLIGHT_KHR                                                           = 0x929B,
    GL_HARDLIGHT_NV                                                            = 0x929B,
    GL_SOFTLIGHT                                                               = 0x929C,
    GL_SOFTLIGHT_KHR                                                           = 0x929C,
    GL_SOFTLIGHT_NV                                                            = 0x929C,
    GL_DIFFERENCE                                                              = 0x929E,
    GL_DIFFERENCE_KHR                                                          = 0x929E,
    GL_DIFFERENCE_NV                                                           = 0x929E,
    GL_MINUS_NV                                                                = 0x929F,
    GL_EXCLUSION                                                               = 0x92A0,
    GL_EXCLUSION_KHR                                                           = 0x92A0,
    GL_EXCLUSION_NV                                                            = 0x92A0,
    GL_CONTRAST_NV                                                             = 0x92A1,
    GL_INVERT_RGB_NV                                                           = 0x92A3,
    GL_LINEARDODGE_NV                                                          = 0x92A4,
    GL_LINEARBURN_NV                                                           = 0x92A5,
    GL_VIVIDLIGHT_NV                                                           = 0x92A6,
    GL_LINEARLIGHT_NV                                                          = 0x92A7,
    GL_PINLIGHT_NV                                                             = 0x92A8,
    GL_HARDMIX_NV                                                              = 0x92A9,
    GL_HSL_HUE                                                                 = 0x92AD,
    GL_HSL_HUE_KHR                                                             = 0x92AD,
    GL_HSL_HUE_NV                                                              = 0x92AD,
    GL_HSL_SATURATION                                                          = 0x92AE,
    GL_HSL_SATURATION_KHR                                                      = 0x92AE,
    GL_HSL_SATURATION_NV                                                       = 0x92AE,
    GL_HSL_COLOR                                                               = 0x92AF,
    GL_HSL_COLOR_KHR                                                           = 0x92AF,
    GL_HSL_COLOR_NV                                                            = 0x92AF,
    GL_HSL_LUMINOSITY                                                          = 0x92B0,
    GL_HSL_LUMINOSITY_KHR                                                      = 0x92B0,
    GL_HSL_LUMINOSITY_NV                                                       = 0x92B0,
    GL_PLUS_CLAMPED_NV                                                         = 0x92B1,
    GL_PLUS_CLAMPED_ALPHA_NV                                                   = 0x92B2,
    GL_MINUS_CLAMPED_NV                                                        = 0x92B3,
    GL_INVERT_OVG_NV                                                           = 0x92B4,
    GL_PRIMITIVE_BOUNDING_BOX                                                  = 0x92BE,
    GL_PRIMITIVE_BOUNDING_BOX_EXT                                              = 0x92BE,
    GL_PRIMITIVE_BOUNDING_BOX_OES                                              = 0x92BE,
    GL_ATOMIC_COUNTER_BUFFER_START                                             = 0x92C2,
    GL_ATOMIC_COUNTER_BUFFER_SIZE                                              = 0x92C3,
    GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS                                       = 0x92CC,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS                                 = 0x92CD,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT                             = 0x92CD,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES                             = 0x92CD,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS                              = 0x92CE,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT                          = 0x92CE,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES                          = 0x92CE,
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS                                     = 0x92CF,
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT                                 = 0x92CF,
    GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES                                 = 0x92CF,
    GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS                                     = 0x92D0,
    GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS                                     = 0x92D1,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT                                    = 0x92D3,
    GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES                                    = 0x92D3,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT                                 = 0x92D4,
    GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES                                 = 0x92D4,
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT                                        = 0x92D5,
    GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES                                        = 0x92D5,
    GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE                                          = 0x92D8,
    GL_UNSIGNED_INT_ATOMIC_COUNTER                                             = 0x92DB,
    GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS                                      = 0x92DC,
    GL_FRAGMENT_COVERAGE_TO_COLOR_NV                                           = 0x92DD,
    GL_FRAGMENT_COVERAGE_COLOR_NV                                              = 0x92DE,
    GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV                                   = 0x92DF,
    GL_DEBUG_OUTPUT_KHR                                                        = 0x92E0,
    GL_IS_PER_PATCH_EXT                                                        = 0x92E7,
    GL_IS_PER_PATCH_OES                                                        = 0x92E7,
    GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT                                   = 0x9307,
    GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES                                   = 0x9307,
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT                                = 0x9308,
    GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES                                = 0x9308,
    GL_REFERENCED_BY_GEOMETRY_SHADER_EXT                                       = 0x9309,
    GL_REFERENCED_BY_GEOMETRY_SHADER_OES                                       = 0x9309,
    GL_LOCATION_INDEX_EXT                                                      = 0x930F,
    GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT                                          = 0x9312,
    GL_FRAMEBUFFER_DEFAULT_LAYERS_OES                                          = 0x9312,
    GL_MAX_FRAMEBUFFER_LAYERS_EXT                                              = 0x9317,
    GL_MAX_FRAMEBUFFER_LAYERS_OES                                              = 0x9317,
    GL_RASTER_MULTISAMPLE_EXT                                                  = 0x9327,
    GL_RASTER_SAMPLES_EXT                                                      = 0x9328,
    GL_MAX_RASTER_SAMPLES_EXT                                                  = 0x9329,
    GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT                                       = 0x932A,
    GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT                                   = 0x932B,
    GL_EFFECTIVE_RASTER_SAMPLES_EXT                                            = 0x932C,
    GL_DEPTH_SAMPLES_NV                                                        = 0x932D,
    GL_STENCIL_SAMPLES_NV                                                      = 0x932E,
    GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV                                        = 0x932F,
    GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV                                      = 0x9330,
    GL_COVERAGE_MODULATION_TABLE_NV                                            = 0x9331,
    GL_COVERAGE_MODULATION_NV                                                  = 0x9332,
    GL_COVERAGE_MODULATION_TABLE_SIZE_NV                                       = 0x9333,
    GL_FILL_RECTANGLE_NV                                                       = 0x933C,
    GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV                                        = 0x933D,
    GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV                                     = 0x933E,
    GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV                                    = 0x933F,
    GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV                              = 0x9340,
    GL_PROGRAMMABLE_SAMPLE_LOCATION_NV                                         = 0x9341,
    GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV                            = 0x9342,
    GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV                               = 0x9343,
    GL_CONSERVATIVE_RASTERIZATION_NV                                           = 0x9346,
    GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV                                       = 0x9347,
    GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV                                       = 0x9348,
    GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV                                     = 0x9349,
    GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV                                          = 0x9350,
    GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV                                          = 0x9351,
    GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV                                          = 0x9352,
    GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV                                          = 0x9353,
    GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV                                          = 0x9354,
    GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV                                          = 0x9355,
    GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV                                          = 0x9356,
    GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV                                          = 0x9357,
    GL_VIEWPORT_SWIZZLE_X_NV                                                   = 0x9358,
    GL_VIEWPORT_SWIZZLE_Y_NV                                                   = 0x9359,
    GL_VIEWPORT_SWIZZLE_Z_NV                                                   = 0x935A,
    GL_VIEWPORT_SWIZZLE_W_NV                                                   = 0x935B,
    GL_CLIP_ORIGIN_EXT                                                         = 0x935C,
    GL_CLIP_DEPTH_MODE_EXT                                                     = 0x935D,
    GL_NEGATIVE_ONE_TO_ONE_EXT                                                 = 0x935E,
    GL_ZERO_TO_ONE_EXT                                                         = 0x935F,
    GL_TEXTURE_REDUCTION_MODE_EXT                                              = 0x9366,
    GL_WEIGHTED_AVERAGE_EXT                                                    = 0x9367,
    GL_FONT_GLYPHS_AVAILABLE_NV                                                = 0x9368,
    GL_FONT_TARGET_UNAVAILABLE_NV                                              = 0x9369,
    GL_FONT_UNAVAILABLE_NV                                                     = 0x936A,
    GL_FONT_UNINTELLIGIBLE_NV                                                  = 0x936B,
    GL_STANDARD_FONT_FORMAT_NV                                                 = 0x936C,
    GL_FRAGMENT_INPUT_NV                                                       = 0x936D,
    GL_MULTISAMPLES_NV                                                         = 0x9371,
    GL_SUPERSAMPLE_SCALE_X_NV                                                  = 0x9372,
    GL_SUPERSAMPLE_SCALE_Y_NV                                                  = 0x9373,
    GL_CONFORMANT_NV                                                           = 0x9374,
    GL_VIEWPORT_POSITION_W_SCALE_NV                                            = 0x937C,
    GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV                                    = 0x937D,
    GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV                                    = 0x937E,
    GL_REPRESENTATIVE_FRAGMENT_TEST_NV                                         = 0x937F,
    GL_MULTISAMPLE_LINE_WIDTH_RANGE                                            = 0x9381,
    GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY                                      = 0x9382,
    GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE                                   = 0x93A0,
    GL_BGRA8_EXT                                                               = 0x93A1,
    GL_TEXTURE_USAGE_ANGLE                                                     = 0x93A2,
    GL_FRAMEBUFFER_ATTACHMENT_ANGLE                                            = 0x93A3,
    GL_PACK_REVERSE_ROW_ORDER_ANGLE                                            = 0x93A4,
    GL_PROGRAM_BINARY_ANGLE                                                    = 0x93A6,
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG                                  = 0x93F0,
    GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG                                  = 0x93F1,
    GL_PERFQUERY_COUNTER_EVENT_INTEL                                           = 0x94F0,
    GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL                                   = 0x94F1,
    GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL                                    = 0x94F2,
    GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL                                      = 0x94F3,
    GL_PERFQUERY_COUNTER_RAW_INTEL                                             = 0x94F4,
    GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL                                       = 0x94F5,
    GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL                                     = 0x94F8,
    GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL                                     = 0x94F9,
    GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL                                      = 0x94FA,
    GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL                                     = 0x94FB,
    GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL                                     = 0x94FC,
    GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL                                   = 0x94FD,
    GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL                                 = 0x94FE,
    GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL                                 = 0x94FF,
    GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL                                   = 0x9500,
    GL_SUBGROUP_SIZE_KHR                                                       = 0x9532,
    GL_SUBGROUP_SUPPORTED_STAGES_KHR                                           = 0x9533,
    GL_SUBGROUP_SUPPORTED_FEATURES_KHR                                         = 0x9534,
    GL_SUBGROUP_QUAD_ALL_STAGES_KHR                                            = 0x9535,
    GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV                                           = 0x9536,
    GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV                                           = 0x9537,
    GL_MAX_MESH_OUTPUT_VERTICES_NV                                             = 0x9538,
    GL_MAX_MESH_OUTPUT_PRIMITIVES_NV                                           = 0x9539,
    GL_MAX_TASK_OUTPUT_COUNT_NV                                                = 0x953A,
    GL_MAX_MESH_WORK_GROUP_SIZE_NV                                             = 0x953B,
    GL_MAX_TASK_WORK_GROUP_SIZE_NV                                             = 0x953C,
    GL_MAX_DRAW_MESH_TASKS_COUNT_NV                                            = 0x953D,
    GL_MESH_WORK_GROUP_SIZE_NV                                                 = 0x953E,
    GL_TASK_WORK_GROUP_SIZE_NV                                                 = 0x953F,
    GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV                                = 0x9543,
    GL_CONSERVATIVE_RASTER_MODE_NV                                             = 0x954D,
    GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV                                   = 0x954E,
    GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV                          = 0x954F,
    GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV                                    = 0x9550,
    GL_SCISSOR_TEST_EXCLUSIVE_NV                                               = 0x9555,
    GL_SCISSOR_BOX_EXCLUSIVE_NV                                                = 0x9556,
    GL_MAX_MESH_VIEWS_NV                                                       = 0x9557,
    GL_MESH_SHADER_NV                                                          = 0x9559,
    GL_TASK_SHADER_NV                                                          = 0x955A,
    GL_SHADING_RATE_IMAGE_BINDING_NV                                           = 0x955B,
    GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV                                       = 0x955C,
    GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV                                      = 0x955D,
    GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV                                      = 0x955E,
    GL_MAX_COARSE_FRAGMENT_SAMPLES_NV                                          = 0x955F,
    GL_SHADING_RATE_IMAGE_NV                                                   = 0x9563,
    GL_SHADING_RATE_NO_INVOCATIONS_NV                                          = 0x9564,
    GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV                                  = 0x9565,
    GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV                             = 0x9566,
    GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV                             = 0x9567,
    GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV                             = 0x9568,
    GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV                             = 0x9569,
    GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV                             = 0x956A,
    GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV                             = 0x956B,
    GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV                                 = 0x956C,
    GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV                                 = 0x956D,
    GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV                                 = 0x956E,
    GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV                                = 0x956F,
    GL_MESH_VERTICES_OUT_NV                                                    = 0x9579,
    GL_MESH_PRIMITIVES_OUT_NV                                                  = 0x957A,
    GL_MESH_OUTPUT_TYPE_NV                                                     = 0x957B,
    GL_MESH_SUBROUTINE_NV                                                      = 0x957C,
    GL_TASK_SUBROUTINE_NV                                                      = 0x957D,
    GL_MESH_SUBROUTINE_UNIFORM_NV                                              = 0x957E,
    GL_TASK_SUBROUTINE_UNIFORM_NV                                              = 0x957F,
    GL_NUM_TILING_TYPES_EXT                                                    = 0x9582,
    GL_TILING_TYPES_EXT                                                        = 0x9583,
    GL_OPTIMAL_TILING_EXT                                                      = 0x9584,
    GL_LINEAR_TILING_EXT                                                       = 0x9585,
    GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV                              = 0x959C,
    GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV                              = 0x959D,
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV                      = 0x959E,
    GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV                      = 0x959F,
    GL_REFERENCED_BY_MESH_SHADER_NV                                            = 0x95A0,
    GL_REFERENCED_BY_TASK_SHADER_NV                                            = 0x95A1,
    GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV                                      = 0x95A2,
    GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV                                      = 0x95A3,
    GL_ATTACHED_MEMORY_OBJECT_NV                                               = 0x95A4,
    GL_ATTACHED_MEMORY_OFFSET_NV                                               = 0x95A5,
    GL_MEMORY_ATTACHABLE_ALIGNMENT_NV                                          = 0x95A6,
    GL_MEMORY_ATTACHABLE_SIZE_NV                                               = 0x95A7,
    GL_MEMORY_ATTACHABLE_NV                                                    = 0x95A8,
    GL_DETACHED_MEMORY_INCARNATION_NV                                          = 0x95A9,
    GL_DETACHED_TEXTURES_NV                                                    = 0x95AA,
    GL_DETACHED_BUFFERS_NV                                                     = 0x95AB,
    GL_MAX_DETACHED_TEXTURES_NV                                                = 0x95AC,
    GL_MAX_DETACHED_BUFFERS_NV                                                 = 0x95AD,
    GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV                                    = 0x95AE,
    GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV                                = 0x95AF,
    GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV                               = 0x95B0,
    GL_MAX_VIEWS_OVR                                                           = 0x9631,
    GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR                                 = 0x9633,
    GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT                         = 0x9650,
    GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT                              = 0x9651,
    GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT   = 0x9652,

    // UniformBlockPName

    GL_UNIFORM_BLOCK_BINDING                                                   = 0x8A3F,
    GL_UNIFORM_BLOCK_DATA_SIZE                                                 = 0x8A40,
    GL_UNIFORM_BLOCK_NAME_LENGTH                                               = 0x8A41,
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS                                           = 0x8A42,
    GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES                                    = 0x8A43,
    GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER                               = 0x8A44,
    GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER                             = 0x8A46,

    // UniformPName

    GL_UNIFORM_TYPE                                                            = 0x8A37,
//  GL_UNIFORM_SIZE                                                            = 0x8A38, // reuse SubroutineParameterName
//  GL_UNIFORM_NAME_LENGTH                                                     = 0x8A39, // reuse SubroutineParameterName
    GL_UNIFORM_BLOCK_INDEX                                                     = 0x8A3A,
    GL_UNIFORM_OFFSET                                                          = 0x8A3B,
    GL_UNIFORM_ARRAY_STRIDE                                                    = 0x8A3C,
    GL_UNIFORM_MATRIX_STRIDE                                                   = 0x8A3D,
    GL_UNIFORM_IS_ROW_MAJOR                                                    = 0x8A3E,

    // UniformType

//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType
//  GL_FLOAT_VEC2                                                              = 0x8B50, // reuse AttributeType
//  GL_FLOAT_VEC3                                                              = 0x8B51, // reuse AttributeType
//  GL_FLOAT_VEC4                                                              = 0x8B52, // reuse AttributeType
//  GL_INT_VEC2                                                                = 0x8B53, // reuse AttributeType
//  GL_INT_VEC3                                                                = 0x8B54, // reuse AttributeType
//  GL_INT_VEC4                                                                = 0x8B55, // reuse AttributeType
//  GL_BOOL                                                                    = 0x8B56, // reuse AttributeType
//  GL_BOOL_VEC2                                                               = 0x8B57, // reuse AttributeType
//  GL_BOOL_VEC3                                                               = 0x8B58, // reuse AttributeType
//  GL_BOOL_VEC4                                                               = 0x8B59, // reuse AttributeType
//  GL_FLOAT_MAT2                                                              = 0x8B5A, // reuse AttributeType
//  GL_FLOAT_MAT3                                                              = 0x8B5B, // reuse AttributeType
//  GL_FLOAT_MAT4                                                              = 0x8B5C, // reuse AttributeType
//  GL_SAMPLER_2D                                                              = 0x8B5E, // reuse AttributeType
//  GL_SAMPLER_3D                                                              = 0x8B5F, // reuse AttributeType
//  GL_SAMPLER_CUBE                                                            = 0x8B60, // reuse AttributeType
//  GL_SAMPLER_2D_SHADOW                                                       = 0x8B62, // reuse AttributeType
//  GL_FLOAT_MAT2x3                                                            = 0x8B65, // reuse AttributeType
//  GL_FLOAT_MAT2x4                                                            = 0x8B66, // reuse AttributeType
//  GL_FLOAT_MAT3x2                                                            = 0x8B67, // reuse AttributeType
//  GL_FLOAT_MAT3x4                                                            = 0x8B68, // reuse AttributeType
//  GL_FLOAT_MAT4x2                                                            = 0x8B69, // reuse AttributeType
//  GL_FLOAT_MAT4x3                                                            = 0x8B6A, // reuse AttributeType
    GL_SAMPLER_2D_ARRAY                                                        = 0x8DC1,
//  GL_SAMPLER_BUFFER                                                          = 0x8DC2, // reuse AttributeType
//  GL_SAMPLER_2D_ARRAY_SHADOW                                                 = 0x8DC4, // reuse AttributeType
//  GL_SAMPLER_CUBE_SHADOW                                                     = 0x8DC5, // reuse AttributeType
//  GL_UNSIGNED_INT_VEC2                                                       = 0x8DC6, // reuse AttributeType
//  GL_UNSIGNED_INT_VEC3                                                       = 0x8DC7, // reuse AttributeType
//  GL_UNSIGNED_INT_VEC4                                                       = 0x8DC8, // reuse AttributeType
//  GL_INT_SAMPLER_2D                                                          = 0x8DCA, // reuse AttributeType
//  GL_INT_SAMPLER_3D                                                          = 0x8DCB, // reuse AttributeType
//  GL_INT_SAMPLER_CUBE                                                        = 0x8DCC, // reuse AttributeType
//  GL_INT_SAMPLER_2D_ARRAY                                                    = 0x8DCF, // reuse AttributeType
//  GL_INT_SAMPLER_BUFFER                                                      = 0x8DD0, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_2D                                                 = 0x8DD2, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_3D                                                 = 0x8DD3, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_CUBE                                               = 0x8DD4, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_2D_ARRAY                                           = 0x8DD7, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_BUFFER                                             = 0x8DD8, // reuse AttributeType
//  GL_SAMPLER_CUBE_MAP_ARRAY                                                  = 0x900C, // reuse AttributeType
//  GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW                                           = 0x900D, // reuse AttributeType
//  GL_INT_SAMPLER_CUBE_MAP_ARRAY                                              = 0x900E, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY                                     = 0x900F, // reuse AttributeType
//  GL_SAMPLER_2D_MULTISAMPLE                                                  = 0x9108, // reuse AttributeType
//  GL_INT_SAMPLER_2D_MULTISAMPLE                                              = 0x9109, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE                                     = 0x910A, // reuse AttributeType
//  GL_SAMPLER_2D_MULTISAMPLE_ARRAY                                            = 0x910B, // reuse AttributeType
//  GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                                        = 0x910C, // reuse AttributeType
//  GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY                               = 0x910D, // reuse AttributeType

    // VertexArrayPName

    GL_VERTEX_ATTRIB_RELATIVE_OFFSET                                           = 0x82D5,
    GL_VERTEX_ATTRIB_ARRAY_ENABLED                                             = 0x8622,
    GL_VERTEX_ATTRIB_ARRAY_SIZE                                                = 0x8623,
    GL_VERTEX_ATTRIB_ARRAY_STRIDE                                              = 0x8624,
    GL_VERTEX_ATTRIB_ARRAY_TYPE                                                = 0x8625,
    GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                          = 0x886A,
    GL_VERTEX_ATTRIB_ARRAY_INTEGER                                             = 0x88FD,
    GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                             = 0x88FE,

    // VertexAttribEnum

//  GL_VERTEX_ATTRIB_ARRAY_ENABLED                                             = 0x8622, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                                                = 0x8623, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                                              = 0x8624, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                                                = 0x8625, // reuse VertexArrayPName
    GL_CURRENT_VERTEX_ATTRIB                                                   = 0x8626,
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                          = 0x886A, // reuse VertexArrayPName
    GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING                                      = 0x889F,
//  GL_VERTEX_ATTRIB_ARRAY_INTEGER                                             = 0x88FD, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                             = 0x88FE, // reuse VertexArrayPName

    // VertexAttribIType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType

    // VertexAttribPointerPropertyARB

    GL_VERTEX_ATTRIB_ARRAY_POINTER                                             = 0x8645,

    // VertexAttribPointerType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType
//  GL_HALF_FLOAT                                                              = 0x140B, // reuse PixelType
    GL_FIXED                                                                   = 0x140C,
//  GL_INT64_NV                                                                = 0x140E, // reuse AttributeType
//  GL_UNSIGNED_INT64_NV                                                       = 0x140F, // reuse AttributeType
//  GL_UNSIGNED_INT_2_10_10_10_REV                                             = 0x8368, // reuse PixelType
//  GL_UNSIGNED_INT_2_10_10_10_REV_EXT                                         = 0x8368, // reuse PixelType
//  GL_UNSIGNED_INT_10F_11F_11F_REV                                            = 0x8C3B, // reuse PixelType
    GL_INT_2_10_10_10_REV                                                      = 0x8D9F,

    // VertexAttribPropertyARB

    GL_VERTEX_ATTRIB_BINDING                                                   = 0x82D4,
//  GL_VERTEX_ATTRIB_RELATIVE_OFFSET                                           = 0x82D5, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_ENABLED                                             = 0x8622, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_SIZE                                                = 0x8623, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_STRIDE                                              = 0x8624, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_TYPE                                                = 0x8625, // reuse VertexArrayPName
//  GL_CURRENT_VERTEX_ATTRIB                                                   = 0x8626, // reuse VertexAttribEnum
//  GL_VERTEX_ATTRIB_ARRAY_NORMALIZED                                          = 0x886A, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING                                      = 0x889F, // reuse VertexAttribEnum
//  GL_VERTEX_ATTRIB_ARRAY_INTEGER                                             = 0x88FD, // reuse VertexArrayPName
//  GL_VERTEX_ATTRIB_ARRAY_DIVISOR                                             = 0x88FE, // reuse VertexArrayPName

    // VertexAttribType

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType
//  GL_HALF_FLOAT                                                              = 0x140B, // reuse PixelType
//  GL_FIXED                                                                   = 0x140C, // reuse VertexAttribPointerType
//  GL_UNSIGNED_INT_2_10_10_10_REV                                             = 0x8368, // reuse PixelType
//  GL_UNSIGNED_INT_2_10_10_10_REV_EXT                                         = 0x8368, // reuse PixelType
//  GL_UNSIGNED_INT_10F_11F_11F_REV                                            = 0x8C3B, // reuse PixelType
//  GL_INT_2_10_10_10_REV                                                      = 0x8D9F, // reuse VertexAttribPointerType

    // VertexBufferObjectUsage

//  GL_STREAM_DRAW                                                             = 0x88E0, // reuse BufferUsageARB
//  GL_STREAM_READ                                                             = 0x88E1, // reuse BufferUsageARB
//  GL_STREAM_COPY                                                             = 0x88E2, // reuse BufferUsageARB
//  GL_STATIC_DRAW                                                             = 0x88E4, // reuse BufferUsageARB
//  GL_STATIC_READ                                                             = 0x88E5, // reuse BufferUsageARB
//  GL_STATIC_COPY                                                             = 0x88E6, // reuse BufferUsageARB
//  GL_DYNAMIC_DRAW                                                            = 0x88E8, // reuse BufferUsageARB
//  GL_DYNAMIC_READ                                                            = 0x88E9, // reuse BufferUsageARB
//  GL_DYNAMIC_COPY                                                            = 0x88EA, // reuse BufferUsageARB

    // VertexPointerType

//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // VertexProvokingMode

    GL_FIRST_VERTEX_CONVENTION                                                 = 0x8E4D,
    GL_LAST_VERTEX_CONVENTION                                                  = 0x8E4E,

    // VertexWeightPointerTypeEXT

//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

    // WeightPointerTypeARB

//  GL_BYTE                                                                    = 0x1400, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_BYTE                                                           = 0x1401, // reuse ColorPointerType
//  GL_SHORT                                                                   = 0x1402, // reuse BinormalPointerTypeEXT
//  GL_UNSIGNED_SHORT                                                          = 0x1403, // reuse ColorPointerType
//  GL_INT                                                                     = 0x1404, // reuse AttributeType
//  GL_UNSIGNED_INT                                                            = 0x1405, // reuse AttributeType
//  GL_FLOAT                                                                   = 0x1406, // reuse AttributeType

};


// import enums to namespace

// AlphaFunction

GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER;
GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS;
GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER;
GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL;
GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS;

// AtomicCounterBufferPName

GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_BINDING = GLenum::GL_ATOMIC_COUNTER_BUFFER_BINDING;

// AttributeType

GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_NV = GLenum::GL_INT64_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_NV = GLenum::GL_UNSIGNED_INT64_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC2 = GLenum::GL_FLOAT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC3 = GLenum::GL_FLOAT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC4 = GLenum::GL_FLOAT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC2 = GLenum::GL_INT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC3 = GLenum::GL_INT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC4 = GLenum::GL_INT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL = GLenum::GL_BOOL;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC2 = GLenum::GL_BOOL_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC3 = GLenum::GL_BOOL_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC4 = GLenum::GL_BOOL_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2 = GLenum::GL_FLOAT_MAT2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3 = GLenum::GL_FLOAT_MAT3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4 = GLenum::GL_FLOAT_MAT4;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D = GLenum::GL_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D_OES = GLenum::GL_SAMPLER_3D_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE = GLenum::GL_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW = GLenum::GL_SAMPLER_2D_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW_EXT = GLenum::GL_SAMPLER_2D_SHADOW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x3 = GLenum::GL_FLOAT_MAT2x3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x3_NV = GLenum::GL_FLOAT_MAT2x3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x4 = GLenum::GL_FLOAT_MAT2x4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x4_NV = GLenum::GL_FLOAT_MAT2x4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x2 = GLenum::GL_FLOAT_MAT3x2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x2_NV = GLenum::GL_FLOAT_MAT3x2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x4 = GLenum::GL_FLOAT_MAT3x4;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x4_NV = GLenum::GL_FLOAT_MAT3x4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x2 = GLenum::GL_FLOAT_MAT4x2;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x2_NV = GLenum::GL_FLOAT_MAT4x2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x3 = GLenum::GL_FLOAT_MAT4x3;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x3_NV = GLenum::GL_FLOAT_MAT4x3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER = GLenum::GL_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_SHADOW = GLenum::GL_SAMPLER_CUBE_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC2 = GLenum::GL_UNSIGNED_INT_VEC2;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC3 = GLenum::GL_UNSIGNED_INT_VEC3;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC4 = GLenum::GL_UNSIGNED_INT_VEC4;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D = GLenum::GL_INT_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_3D = GLenum::GL_INT_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE = GLenum::GL_INT_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_ARRAY = GLenum::GL_INT_SAMPLER_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER = GLenum::GL_INT_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D = GLenum::GL_UNSIGNED_INT_SAMPLER_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_3D = GLenum::GL_UNSIGNED_INT_SAMPLER_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_2D = GLenum::GL_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_3D = GLenum::GL_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE = GLenum::GL_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER = GLenum::GL_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_2D_ARRAY = GLenum::GL_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_2D = GLenum::GL_INT_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_3D = GLenum::GL_INT_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE = GLenum::GL_INT_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER = GLenum::GL_INT_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_2D_ARRAY = GLenum::GL_INT_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_2D = GLenum::GL_UNSIGNED_INT_IMAGE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_3D = GLenum::GL_UNSIGNED_INT_IMAGE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_2D_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE = GLenum::GL_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;

// BindTransformFeedbackTarget

GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK = GLenum::GL_TRANSFORM_FEEDBACK;

// BinormalPointerTypeEXT

GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT;
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// BlendEquationModeEXT

GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_ADD = GLenum::GL_FUNC_ADD;
GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_ADD_EXT = GLenum::GL_FUNC_ADD_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN = GLenum::GL_MIN;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_EXT = GLenum::GL_MIN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX = GLenum::GL_MAX;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_EXT = GLenum::GL_MAX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_SUBTRACT = GLenum::GL_FUNC_SUBTRACT;
GLESBINDING_CONSTEXPR static const GLenum GL_FUNC_REVERSE_SUBTRACT = GLenum::GL_FUNC_REVERSE_SUBTRACT;

// BlendingFactor

GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_COLOR = GLenum::GL_SRC_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_COLOR = GLenum::GL_ONE_MINUS_SRC_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA = GLenum::GL_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC_ALPHA = GLenum::GL_ONE_MINUS_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_ALPHA = GLenum::GL_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_ALPHA = GLenum::GL_ONE_MINUS_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_COLOR = GLenum::GL_DST_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_DST_COLOR = GLenum::GL_ONE_MINUS_DST_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE = GLenum::GL_SRC_ALPHA_SATURATE;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSTANT_COLOR = GLenum::GL_CONSTANT_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_COLOR = GLenum::GL_ONE_MINUS_CONSTANT_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSTANT_ALPHA = GLenum::GL_CONSTANT_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_CONSTANT_ALPHA = GLenum::GL_ONE_MINUS_CONSTANT_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE;

// BlitFramebufferFilter

GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR;

// Buffer

GLESBINDING_CONSTEXPR static const GLenum GL_COLOR = GLenum::GL_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH = GLenum::GL_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL = GLenum::GL_STENCIL;

// BufferAccessARB

GLESBINDING_CONSTEXPR static const GLenum GL_READ_ONLY = GLenum::GL_READ_ONLY;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITE_ONLY = GLenum::GL_WRITE_ONLY;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_WRITE = GLenum::GL_READ_WRITE;

// BufferBitQCOM

GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT0_QCOM = GLenum::GL_COLOR_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT1_QCOM = GLenum::GL_COLOR_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT2_QCOM = GLenum::GL_COLOR_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT3_QCOM = GLenum::GL_COLOR_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT4_QCOM = GLenum::GL_COLOR_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT5_QCOM = GLenum::GL_COLOR_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT6_QCOM = GLenum::GL_COLOR_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_BUFFER_BIT7_QCOM = GLenum::GL_COLOR_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT0_QCOM = GLenum::GL_DEPTH_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT1_QCOM = GLenum::GL_DEPTH_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT2_QCOM = GLenum::GL_DEPTH_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT3_QCOM = GLenum::GL_DEPTH_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT4_QCOM = GLenum::GL_DEPTH_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT5_QCOM = GLenum::GL_DEPTH_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT6_QCOM = GLenum::GL_DEPTH_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BUFFER_BIT7_QCOM = GLenum::GL_DEPTH_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT0_QCOM = GLenum::GL_STENCIL_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT1_QCOM = GLenum::GL_STENCIL_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT2_QCOM = GLenum::GL_STENCIL_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT3_QCOM = GLenum::GL_STENCIL_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT4_QCOM = GLenum::GL_STENCIL_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT5_QCOM = GLenum::GL_STENCIL_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT6_QCOM = GLenum::GL_STENCIL_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BUFFER_BIT7_QCOM = GLenum::GL_STENCIL_BUFFER_BIT7_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT0_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT0_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT1_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT1_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT2_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT2_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT3_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT3_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT4_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT4_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT5_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT5_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT6_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT6_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_BUFFER_BIT7_QCOM = GLenum::GL_MULTISAMPLE_BUFFER_BIT7_QCOM;

// BufferPNameARB

GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_SIZE = GLenum::GL_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_USAGE = GLenum::GL_BUFFER_USAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAPPED = GLenum::GL_BUFFER_MAPPED;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_ACCESS_FLAGS = GLenum::GL_BUFFER_ACCESS_FLAGS;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_LENGTH = GLenum::GL_BUFFER_MAP_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_OFFSET = GLenum::GL_BUFFER_MAP_OFFSET;

// BufferPointerNameARB

GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_POINTER = GLenum::GL_BUFFER_MAP_POINTER;

// BufferStorageTarget

GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER;

// BufferTargetARB

// GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_READ = GLenum::GL_STREAM_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_COPY = GLenum::GL_STREAM_COPY;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_READ = GLenum::GL_STATIC_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_COPY = GLenum::GL_STATIC_COPY;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_READ = GLenum::GL_DYNAMIC_READ;
GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_COPY = GLenum::GL_DYNAMIC_COPY;

// ClampColorModeARB


// ColorBuffer

GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT;
GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31;

// ColorPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT;
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// CombinerBiasNV

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// CombinerComponentUsageNV

GLESBINDING_CONSTEXPR static const GLenum GL_BLUE = GLenum::GL_BLUE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB;

// CombinerPortionNV

// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse CombinerComponentUsageNV

// CombinerRegisterNV

GLESBINDING_CONSTEXPR static const GLenum GL_PRIMARY_COLOR_NV = GLenum::GL_PRIMARY_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SECONDARY_COLOR_NV = GLenum::GL_SECONDARY_COLOR_NV;

// CombinerScaleNV

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// ContainerType

GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_OBJECT_EXT = GLenum::GL_PROGRAM_OBJECT_EXT;

// CopyBufferSubDataTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER = GLenum::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER = GLenum::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER = GLenum::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER = GLenum::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER = GLenum::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER = GLenum::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER = GLenum::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER = GLenum::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER = GLenum::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// CopyImageSubDataTarget

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_3D = GLenum::GL_TEXTURE_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_ARRAY = GLenum::GL_TEXTURE_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE = GLenum::GL_TEXTURE_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;

// DebugSeverity

GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_NOTIFICATION = GLenum::GL_DEBUG_SEVERITY_NOTIFICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_HIGH = GLenum::GL_DEBUG_SEVERITY_HIGH;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_MEDIUM = GLenum::GL_DEBUG_SEVERITY_MEDIUM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_LOW = GLenum::GL_DEBUG_SEVERITY_LOW;

// DebugSource

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_API = GLenum::GL_DEBUG_SOURCE_API;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_WINDOW_SYSTEM = GLenum::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_SHADER_COMPILER = GLenum::GL_DEBUG_SOURCE_SHADER_COMPILER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_THIRD_PARTY = GLenum::GL_DEBUG_SOURCE_THIRD_PARTY;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_APPLICATION = GLenum::GL_DEBUG_SOURCE_APPLICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_OTHER = GLenum::GL_DEBUG_SOURCE_OTHER;

// DebugType

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_ERROR = GLenum::GL_DEBUG_TYPE_ERROR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR = GLenum::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PORTABILITY = GLenum::GL_DEBUG_TYPE_PORTABILITY;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PERFORMANCE = GLenum::GL_DEBUG_TYPE_PERFORMANCE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_OTHER = GLenum::GL_DEBUG_TYPE_OTHER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_MARKER = GLenum::GL_DEBUG_TYPE_MARKER;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PUSH_GROUP = GLenum::GL_DEBUG_TYPE_PUSH_GROUP;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_POP_GROUP = GLenum::GL_DEBUG_TYPE_POP_GROUP;

// DepthFunction

// GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// DepthStencilTextureMode

GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;

// DrawBufferMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0_NV = GLenum::GL_COLOR_ATTACHMENT0_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1_NV = GLenum::GL_COLOR_ATTACHMENT1_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2_NV = GLenum::GL_COLOR_ATTACHMENT2_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3_NV = GLenum::GL_COLOR_ATTACHMENT3_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4_NV = GLenum::GL_COLOR_ATTACHMENT4_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5_NV = GLenum::GL_COLOR_ATTACHMENT5_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6_NV = GLenum::GL_COLOR_ATTACHMENT6_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7_NV = GLenum::GL_COLOR_ATTACHMENT7_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8_NV = GLenum::GL_COLOR_ATTACHMENT8_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9_NV = GLenum::GL_COLOR_ATTACHMENT9_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10_NV = GLenum::GL_COLOR_ATTACHMENT10_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11_NV = GLenum::GL_COLOR_ATTACHMENT11_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12_NV = GLenum::GL_COLOR_ATTACHMENT12_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13_NV = GLenum::GL_COLOR_ATTACHMENT13_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14_NV = GLenum::GL_COLOR_ATTACHMENT14_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15_NV = GLenum::GL_COLOR_ATTACHMENT15_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer

// DrawElementsType

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// ElementPointerTypeATI

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// EnableCap

GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST;
GLESBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_COVERAGE = GLenum::GL_SAMPLE_ALPHA_TO_COVERAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE = GLenum::GL_SAMPLE_COVERAGE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT_SYNCHRONOUS = GLenum::GL_DEBUG_OUTPUT_SYNCHRONOUS;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_SHADING = GLenum::GL_SAMPLE_SHADING;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTERIZER_DISCARD = GLenum::GL_RASTERIZER_DISCARD;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FIXED_INDEX = GLenum::GL_PRIMITIVE_RESTART_FIXED_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_MASK = GLenum::GL_SAMPLE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_FETCH_PER_SAMPLE_ARM = GLenum::GL_FETCH_PER_SAMPLE_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT = GLenum::GL_DEBUG_OUTPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV = GLenum::GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM = GLenum::GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM = GLenum::GL_SHADING_RATE_PRESERVE_ASPECT_RATIO_QCOM;

// ErrorCode

GLESBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_OVERFLOW = GLenum::GL_STACK_OVERFLOW;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_UNDERFLOW = GLenum::GL_STACK_UNDERFLOW;
GLESBINDING_CONSTEXPR static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
GLESBINDING_CONSTEXPR static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

// EvalMapsModeNV

GLESBINDING_CONSTEXPR static const GLenum GL_FILL_NV = GLenum::GL_FILL_NV;

// ExternalHandleType

GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_FD_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_FD_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_WIN32_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_WIN32_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT = GLenum::GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT = GLenum::GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_RESOURCE_EXT = GLenum::GL_HANDLE_TYPE_D3D12_RESOURCE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D11_IMAGE_EXT = GLenum::GL_HANDLE_TYPE_D3D11_IMAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT = GLenum::GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_HANDLE_TYPE_D3D12_FENCE_EXT = GLenum::GL_HANDLE_TYPE_D3D12_FENCE_EXT;

// FenceConditionNV

GLESBINDING_CONSTEXPR static const GLenum GL_ALL_COMPLETED_NV = GLenum::GL_ALL_COMPLETED_NV;

// FenceParameterNameNV

GLESBINDING_CONSTEXPR static const GLenum GL_FENCE_STATUS_NV = GLenum::GL_FENCE_STATUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FENCE_CONDITION_NV = GLenum::GL_FENCE_CONDITION_NV;

// FogCoordinatePointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// FogMode

// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// FogPointerTypeEXT

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// FogPointerTypeIBM

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// FoveationConfigBitQCOM

GLESBINDING_CONSTEXPR static const GLenum GL_FOVEATION_ENABLE_BIT_QCOM = GLenum::GL_FOVEATION_ENABLE_BIT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM = GLenum::GL_FOVEATION_SCALED_BIN_METHOD_BIT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM = GLenum::GL_FOVEATION_SUBSAMPLED_LAYOUT_METHOD_BIT_QCOM;

// FragmentShaderGenericSourceATI

// GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactor
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMARY_COLOR = GLenum::GL_PRIMARY_COLOR;
// GLESBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE; // reuse BlendingFactor

// FragmentShaderTextureSourceATI

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31;

// FragmentShaderValueRepATI

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED;
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN = GLenum::GL_GREEN;
// GLESBINDING_CONSTEXPR static const GLenum GL_BLUE = GLenum::GL_BLUE; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV

// FramebufferAttachment

GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_ATTACHMENT = GLenum::GL_DEPTH_STENCIL_ATTACHMENT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_ATTACHMENT = GLenum::GL_STENCIL_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_ATTACHMENT_EXT = GLenum::GL_SHADING_RATE_ATTACHMENT_EXT;

// FramebufferAttachmentParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = GLenum::GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES = GLenum::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR = GLenum::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR;

// FramebufferParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;

// FramebufferStatus

GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED = GLenum::GL_FRAMEBUFFER_UNDEFINED;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_COMPLETE = GLenum::GL_FRAMEBUFFER_COMPLETE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNSUPPORTED = GLenum::GL_FRAMEBUFFER_UNSUPPORTED;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;

// FramebufferTarget

GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER = GLenum::GL_READ_FRAMEBUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER = GLenum::GL_DRAW_FRAMEBUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER;

// FrontFaceDirection

GLESBINDING_CONSTEXPR static const GLenum GL_CW = GLenum::GL_CW;
GLESBINDING_CONSTEXPR static const GLenum GL_CCW = GLenum::GL_CCW;

// GetFramebufferParameter

GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_WIDTH = GLenum::GL_FRAMEBUFFER_DEFAULT_WIDTH; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_HEIGHT = GLenum::GL_FRAMEBUFFER_DEFAULT_HEIGHT; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_SAMPLES = GLenum::GL_FRAMEBUFFER_DEFAULT_SAMPLES; // reuse FramebufferParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS = GLenum::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS; // reuse FramebufferParameterName

// GetMultisamplePNameNV

GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_POSITION = GLenum::GL_SAMPLE_POSITION;

// GetPName

GLESBINDING_CONSTEXPR static const GLenum GL_LINE_WIDTH = GLenum::GL_LINE_WIDTH;
// GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE = GLenum::GL_CULL_FACE; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_CULL_FACE_MODE = GLenum::GL_CULL_FACE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_FACE = GLenum::GL_FRONT_FACE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_RANGE = GLenum::GL_DEPTH_RANGE;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_WRITEMASK = GLenum::GL_DEPTH_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_CLEAR_VALUE = GLenum::GL_DEPTH_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_FUNC = GLenum::GL_DEPTH_FUNC;
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_TEST = GLenum::GL_STENCIL_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_CLEAR_VALUE = GLenum::GL_STENCIL_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_FUNC = GLenum::GL_STENCIL_FUNC;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_VALUE_MASK = GLenum::GL_STENCIL_VALUE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_FAIL = GLenum::GL_STENCIL_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_PASS_DEPTH_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_PASS_DEPTH_PASS = GLenum::GL_STENCIL_PASS_DEPTH_PASS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_REF = GLenum::GL_STENCIL_REF;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_WRITEMASK = GLenum::GL_STENCIL_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT = GLenum::GL_VIEWPORT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_QCOM = GLenum::GL_ALPHA_TEST_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_FUNC_QCOM = GLenum::GL_ALPHA_TEST_FUNC_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_TEST_REF_QCOM = GLenum::GL_ALPHA_TEST_REF_QCOM;
// GLESBINDING_CONSTEXPR static const GLenum GL_DITHER = GLenum::GL_DITHER; // reuse EnableCap
// GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER_EXT = GLenum::GL_DRAW_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER = GLenum::GL_READ_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER_EXT = GLenum::GL_READ_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_BUFFER_NV = GLenum::GL_READ_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_BOX = GLenum::GL_SCISSOR_BOX;
// GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST = GLenum::GL_SCISSOR_TEST; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_CLEAR_VALUE = GLenum::GL_COLOR_CLEAR_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_WRITEMASK = GLenum::GL_COLOR_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH_NV = GLenum::GL_PACK_ROW_LENGTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS_NV = GLenum::GL_PACK_SKIP_ROWS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS_NV = GLenum::GL_PACK_SKIP_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_SIZE = GLenum::GL_MAX_TEXTURE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORT_DIMS = GLenum::GL_MAX_VIEWPORT_DIMS;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_BITS = GLenum::GL_SUBPIXEL_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_BITS = GLenum::GL_RED_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN_BITS = GLenum::GL_GREEN_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_BLUE_BITS = GLenum::GL_BLUE_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA_BITS = GLenum::GL_ALPHA_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_BITS = GLenum::GL_DEPTH_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BITS = GLenum::GL_STENCIL_BITS;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_UNITS = GLenum::GL_POLYGON_OFFSET_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_COLOR = GLenum::GL_BLEND_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION = GLenum::GL_BLEND_EQUATION;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_EXT = GLenum::GL_BLEND_EQUATION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_RGB = GLenum::GL_BLEND_EQUATION_RGB;
// GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FILL = GLenum::GL_POLYGON_OFFSET_FILL; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_FACTOR = GLenum::GL_POLYGON_OFFSET_FACTOR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D = GLenum::GL_TEXTURE_BINDING_2D;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_3D = GLenum::GL_TEXTURE_BINDING_3D;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_IMAGES = GLenum::GL_UNPACK_SKIP_IMAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_IMAGE_HEIGHT = GLenum::GL_UNPACK_IMAGE_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_3D_TEXTURE_SIZE = GLenum::GL_MAX_3D_TEXTURE_SIZE;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_BUFFERS = GLenum::GL_SAMPLE_BUFFERS; // reuse GetFramebufferParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetFramebufferParameter
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_VALUE = GLenum::GL_SAMPLE_COVERAGE_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_COVERAGE_INVERT = GLenum::GL_SAMPLE_COVERAGE_INVERT;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_RGB = GLenum::GL_BLEND_DST_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_RGB = GLenum::GL_BLEND_SRC_RGB;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_DST_ALPHA = GLenum::GL_BLEND_DST_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_SRC_ALPHA = GLenum::GL_BLEND_SRC_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENTS_VERTICES = GLenum::GL_MAX_ELEMENTS_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENTS_INDICES = GLenum::GL_MAX_ELEMENTS_INDICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAJOR_VERSION = GLenum::GL_MAJOR_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_MINOR_VERSION = GLenum::GL_MINOR_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_EXTENSIONS = GLenum::GL_NUM_EXTENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_FLAGS = GLenum::GL_CONTEXT_FLAGS;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_BINDING = GLenum::GL_PROGRAM_PIPELINE_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX = GLenum::GL_LAYER_PROVOKING_VERTEX;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_ATOMIC_COUNTERS = GLenum::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_GROUP_STACK_DEPTH = GLenum::GL_DEBUG_GROUP_STACK_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_LOCATIONS = GLenum::GL_MAX_UNIFORM_LOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_DIVISOR = GLenum::GL_VERTEX_BINDING_DIVISOR;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_OFFSET = GLenum::GL_VERTEX_BINDING_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_STRIDE = GLenum::GL_VERTEX_BINDING_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_BINDINGS = GLenum::GL_MAX_VERTEX_ATTRIB_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_LABEL_LENGTH = GLenum::GL_MAX_LABEL_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_ALIASED_POINT_SIZE_RANGE = GLenum::GL_ALIASED_POINT_SIZE_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALIASED_LINE_WIDTH_RANGE = GLenum::GL_ALIASED_LINE_WIDTH_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_TEXTURE = GLenum::GL_ACTIVE_TEXTURE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_RENDERBUFFER_SIZE = GLenum::GL_MAX_RENDERBUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_LOD_BIAS = GLenum::GL_MAX_TEXTURE_LOD_BIAS;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP = GLenum::GL_TEXTURE_BINDING_CUBE_MAP;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CUBE_MAP_TEXTURE_SIZE = GLenum::GL_MAX_CUBE_MAP_TEXTURE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_BINDING = GLenum::GL_VERTEX_ARRAY_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_NUM_COMPRESSED_TEXTURE_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_TEXTURE_FORMATS = GLenum::GL_COMPRESSED_TEXTURE_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS = GLenum::GL_PROGRAM_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FUNC = GLenum::GL_STENCIL_BACK_FUNC;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_FAIL = GLenum::GL_STENCIL_BACK_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_FAIL = GLenum::GL_STENCIL_BACK_PASS_DEPTH_FAIL;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_PASS_DEPTH_PASS = GLenum::GL_STENCIL_BACK_PASS_DEPTH_PASS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS = GLenum::GL_MAX_DRAW_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_EQUATION_ALPHA = GLenum::GL_BLEND_EQUATION_ALPHA;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIBS = GLenum::GL_MAX_VERTEX_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_BUFFER_BINDING = GLenum::GL_ARRAY_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_ELEMENT_ARRAY_BUFFER_BINDING = GLenum::GL_ELEMENT_ARRAY_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_BINDING = GLenum::GL_PIXEL_PACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING = GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ARRAY_TEXTURE_LAYERS = GLenum::GL_MAX_ARRAY_TEXTURE_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_PROGRAM_TEXEL_OFFSET = GLenum::GL_MIN_PROGRAM_TEXEL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PROGRAM_TEXEL_OFFSET = GLenum::GL_MAX_PROGRAM_TEXEL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BINDING = GLenum::GL_SAMPLER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_BINDING = GLenum::GL_UNIFORM_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_START = GLenum::GL_UNIFORM_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_SIZE = GLenum::GL_UNIFORM_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_BLOCKS = GLenum::GL_MAX_VERTEX_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_BLOCKS = GLenum::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_UNIFORM_BLOCKS = GLenum::GL_MAX_COMBINED_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_BUFFER_BINDINGS = GLenum::GL_MAX_UNIFORM_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_UNIFORM_BLOCK_SIZE = GLenum::GL_MAX_UNIFORM_BLOCK_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_COMPONENTS = GLenum::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_COMPONENTS = GLenum::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_COMPONENTS = GLenum::GL_MAX_VARYING_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_PROGRAM = GLenum::GL_CURRENT_PROGRAM;
// GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_TYPE = GLenum::GL_IMPLEMENTATION_COLOR_READ_TYPE; // reuse GetFramebufferParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_IMPLEMENTATION_COLOR_READ_FORMAT = GLenum::GL_IMPLEMENTATION_COLOR_READ_FORMAT; // reuse GetFramebufferParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER = GLenum::GL_TEXTURE_BINDING_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM = GLenum::GL_MOTION_ESTIMATION_SEARCH_BLOCK_X_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM = GLenum::GL_MOTION_ESTIMATION_SEARCH_BLOCK_Y_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_REF = GLenum::GL_STENCIL_BACK_REF;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_VALUE_MASK = GLenum::GL_STENCIL_BACK_VALUE_MASK;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_BACK_WRITEMASK = GLenum::GL_STENCIL_BACK_WRITEMASK;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING = GLenum::GL_DRAW_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BINDING = GLenum::GL_RENDERBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING = GLenum::GL_READ_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS = GLenum::GL_MAX_COLOR_ATTACHMENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS_EXT = GLenum::GL_MAX_COLOR_ATTACHMENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_ATTACHMENTS_NV = GLenum::GL_MAX_COLOR_ATTACHMENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ELEMENT_INDEX = GLenum::GL_MAX_ELEMENT_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_FORMATS = GLenum::GL_SHADER_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SHADER_BINARY_FORMATS = GLenum::GL_NUM_SHADER_BINARY_FORMATS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_COMPILER = GLenum::GL_SHADER_COMPILER;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_UNIFORM_VECTORS = GLenum::GL_MAX_VERTEX_UNIFORM_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VARYING_VECTORS = GLenum::GL_MAX_VARYING_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_UNIFORM_VECTORS = GLenum::GL_MAX_FRAGMENT_UNIFORM_VECTORS;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMESTAMP_EXT = GLenum::GL_TIMESTAMP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLE_MASK_WORDS = GLenum::GL_MAX_SAMPLE_MASK_WORDS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
// GLESBINDING_CONSTEXPR static const GLenum GL_FETCH_PER_SAMPLE_ARM = GLenum::GL_FETCH_PER_SAMPLE_ARM; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM = GLenum::GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_NON_TRIVIAL_COMBINERS_SUPPORTED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_BINDING = GLenum::GL_SHADER_STORAGE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_START = GLenum::GL_SHADER_STORAGE_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_SIZE = GLenum::GL_SHADER_STORAGE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS = GLenum::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS = GLenum::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS = GLenum::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_DISPATCH_INDIRECT_BUFFER_BINDING = GLenum::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_TEXTURE_SAMPLES = GLenum::GL_MAX_COLOR_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEPTH_TEXTURE_SAMPLES = GLenum::GL_MAX_DEPTH_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_INTEGER_SAMPLES = GLenum::GL_MAX_INTEGER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT = GLenum::GL_MAX_SERVER_WAIT_TIMEOUT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_OUTPUT_COMPONENTS = GLenum::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INPUT_COMPONENTS = GLenum::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_UNIFORM_BLOCKS = GLenum::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_COUNT = GLenum::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_WIDTH = GLenum::GL_MAX_FRAMEBUFFER_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_HEIGHT = GLenum::GL_MAX_FRAMEBUFFER_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS = GLenum::GL_MAX_FRAMEBUFFER_LAYERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_SAMPLES = GLenum::GL_MAX_FRAMEBUFFER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_DEVICE_UUIDS_EXT = GLenum::GL_NUM_DEVICE_UUIDS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_UUID_EXT = GLenum::GL_DEVICE_UUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRIVER_UUID_EXT = GLenum::GL_DRIVER_UUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_LUID_EXT = GLenum::GL_DEVICE_LUID_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEVICE_NODE_MASK_EXT = GLenum::GL_DEVICE_NODE_MASK_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV = GLenum::GL_SHADING_RATE_IMAGE_PER_PRIMITIVE_NV; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV = GLenum::GL_SHADING_RATE_IMAGE_PALETTE_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV = GLenum::GL_MAX_TIMELINE_SEMAPHORE_VALUE_DIFFERENCE_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM = GLenum::GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_QCOM = GLenum::GL_SHADING_RATE_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_EXT = GLenum::GL_SHADING_RATE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT = GLenum::GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT = GLenum::GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_WIDTH_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT = GLenum::GL_MIN_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT = GLenum::GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_HEIGHT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT = GLenum::GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_TEXEL_ASPECT_RATIO_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT = GLenum::GL_MAX_FRAGMENT_SHADING_RATE_ATTACHMENT_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_WITH_SHADER_DEPTH_STENCIL_WRITES_SUPPORTED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_WITH_SAMPLE_MASK_SUPPORTED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_ATTACHMENT_WITH_DEFAULT_FRAMEBUFFER_SUPPORTED_EXT;

// GetPointervPName

GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_FUNCTION = GLenum::GL_DEBUG_CALLBACK_FUNCTION;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_USER_PARAM = GLenum::GL_DEBUG_CALLBACK_USER_PARAM;

// GetTextureParameter

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_NV = GLenum::GL_TEXTURE_BORDER_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM = GLenum::GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_EXT = GLenum::GL_SURFACE_COMPRESSION_EXT;

// GraphicsResetStatus

// GLESBINDING_CONSTEXPR static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR; // reuse ErrorCode
GLESBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET = GLenum::GL_GUILTY_CONTEXT_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET = GLenum::GL_INNOCENT_CONTEXT_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET = GLenum::GL_UNKNOWN_CONTEXT_RESET;

// HintMode

// GLESBINDING_CONSTEXPR static const GLenum GL_DONT_CARE = GLenum::GL_DONT_CARE; // reuse DebugSeverity
GLESBINDING_CONSTEXPR static const GLenum GL_FASTEST = GLenum::GL_FASTEST;
GLESBINDING_CONSTEXPR static const GLenum GL_NICEST = GLenum::GL_NICEST;

// HintTarget

GLESBINDING_CONSTEXPR static const GLenum GL_GENERATE_MIPMAP_HINT = GLenum::GL_GENERATE_MIPMAP_HINT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES = GLenum::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BINNING_CONTROL_HINT_QCOM = GLenum::GL_BINNING_CONTROL_HINT_QCOM;

// IndexFunctionEXT

// GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// IndexPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// InstancedPathCoverMode

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_COVER_MODE_NV = GLenum::GL_PATH_FILL_COVER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONVEX_HULL_NV = GLenum::GL_CONVEX_HULL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BOUNDING_BOX_NV = GLenum::GL_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV = GLenum::GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV;

// InternalFormat

// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX; // reuse DepthStencilTextureMode
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX_OES = GLenum::GL_STENCIL_INDEX_OES;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT; // reuse DepthStencilTextureMode
// GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse FragmentShaderValueRepATI
GLESBINDING_CONSTEXPR static const GLenum GL_RED_EXT = GLenum::GL_RED_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse CombinerComponentUsageNV
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_EXT = GLenum::GL_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_OES = GLenum::GL_ALPHA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_EXT = GLenum::GL_LUMINANCE8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_OES = GLenum::GL_LUMINANCE8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE4_ALPHA4_OES = GLenum::GL_LUMINANCE4_ALPHA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_EXT = GLenum::GL_LUMINANCE8_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_OES = GLenum::GL_LUMINANCE8_ALPHA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8 = GLenum::GL_RGB8;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_OES = GLenum::GL_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_EXT = GLenum::GL_RGB10_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_EXT = GLenum::GL_RGB16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4 = GLenum::GL_RGBA4;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4_OES = GLenum::GL_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1_OES = GLenum::GL_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8 = GLenum::GL_RGBA8;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_OES = GLenum::GL_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2 = GLenum::GL_RGB10_A2;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2_EXT = GLenum::GL_RGB10_A2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_EXT = GLenum::GL_RGBA16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16_OES = GLenum::GL_DEPTH_COMPONENT16_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24 = GLenum::GL_DEPTH_COMPONENT24;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24_OES = GLenum::GL_DEPTH_COMPONENT24_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32_OES = GLenum::GL_DEPTH_COMPONENT32_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG;
GLESBINDING_CONSTEXPR static const GLenum GL_R8 = GLenum::GL_R8;
GLESBINDING_CONSTEXPR static const GLenum GL_R8_EXT = GLenum::GL_R8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R16_EXT = GLenum::GL_R16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8 = GLenum::GL_RG8;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8_EXT = GLenum::GL_RG8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16_EXT = GLenum::GL_RG16_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R16F = GLenum::GL_R16F;
GLESBINDING_CONSTEXPR static const GLenum GL_R16F_EXT = GLenum::GL_R16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R32F = GLenum::GL_R32F;
GLESBINDING_CONSTEXPR static const GLenum GL_R32F_EXT = GLenum::GL_R32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16F = GLenum::GL_RG16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16F_EXT = GLenum::GL_RG16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32F = GLenum::GL_RG32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32F_EXT = GLenum::GL_RG32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R8I = GLenum::GL_R8I;
GLESBINDING_CONSTEXPR static const GLenum GL_R8UI = GLenum::GL_R8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_R16I = GLenum::GL_R16I;
GLESBINDING_CONSTEXPR static const GLenum GL_R16UI = GLenum::GL_R16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_R32I = GLenum::GL_R32I;
GLESBINDING_CONSTEXPR static const GLenum GL_R32UI = GLenum::GL_R32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8I = GLenum::GL_RG8I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8UI = GLenum::GL_RG8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16I = GLenum::GL_RG16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16UI = GLenum::GL_RG16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32I = GLenum::GL_RG32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RG32UI = GLenum::GL_RG32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL = GLenum::GL_DEPTH_STENCIL;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_OES = GLenum::GL_DEPTH_STENCIL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F = GLenum::GL_RGBA32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F_EXT = GLenum::GL_RGBA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F = GLenum::GL_RGB32F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F_EXT = GLenum::GL_RGB32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F = GLenum::GL_RGBA16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F_EXT = GLenum::GL_RGBA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F = GLenum::GL_RGB16F;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F_EXT = GLenum::GL_RGB16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8 = GLenum::GL_DEPTH24_STENCIL8;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8_OES = GLenum::GL_DEPTH24_STENCIL8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F = GLenum::GL_R11F_G11F_B10F;
GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F_APPLE = GLenum::GL_R11F_G11F_B10F_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5 = GLenum::GL_RGB9_E5;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5_APPLE = GLenum::GL_RGB9_E5_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB = GLenum::GL_SRGB;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB_EXT = GLenum::GL_SRGB_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8 = GLenum::GL_SRGB8;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_NV = GLenum::GL_SRGB8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB_ALPHA_EXT = GLenum::GL_SRGB_ALPHA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8 = GLenum::GL_SRGB8_ALPHA8;
GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8_EXT = GLenum::GL_SRGB8_ALPHA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32F = GLenum::GL_DEPTH_COMPONENT32F;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH32F_STENCIL8 = GLenum::GL_DEPTH32F_STENCIL8;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX1_OES = GLenum::GL_STENCIL_INDEX1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX4_OES = GLenum::GL_STENCIL_INDEX4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8_OES = GLenum::GL_STENCIL_INDEX8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB565_OES = GLenum::GL_RGB565_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB565 = GLenum::GL_RGB565;
GLESBINDING_CONSTEXPR static const GLenum GL_ETC1_RGB8_OES = GLenum::GL_ETC1_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32UI = GLenum::GL_RGBA32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32UI = GLenum::GL_RGB32UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16UI = GLenum::GL_RGBA16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16UI = GLenum::GL_RGB16UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8UI = GLenum::GL_RGBA8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8UI = GLenum::GL_RGB8UI;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32I = GLenum::GL_RGBA32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB32I = GLenum::GL_RGB32I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16I = GLenum::GL_RGBA16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16I = GLenum::GL_RGB16I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8I = GLenum::GL_RGBA8I;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8I = GLenum::GL_RGB8I;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_RED_RGTC1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_RGTC1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_RED_GREEN_RGTC2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_RGBA_BPTC_UNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_R8_SNORM = GLenum::GL_R8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RG8_SNORM = GLenum::GL_RG8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_SNORM = GLenum::GL_RGB8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_SNORM = GLenum::GL_RGBA8_SNORM;
GLESBINDING_CONSTEXPR static const GLenum GL_R16_SNORM_EXT = GLenum::GL_R16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RG16_SNORM_EXT = GLenum::GL_RG16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_SNORM_EXT = GLenum::GL_RGB16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_SNORM_EXT = GLenum::GL_RGBA16_SNORM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SR8_EXT = GLenum::GL_SR8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SRG8_EXT = GLenum::GL_SRG8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2UI = GLenum::GL_RGB10_A2UI;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_R11_EAC = GLenum::GL_COMPRESSED_R11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_R11_EAC = GLenum::GL_COMPRESSED_SIGNED_R11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RG11_EAC = GLenum::GL_COMPRESSED_RG11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RG11_EAC = GLenum::GL_COMPRESSED_SIGNED_RG11_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_ETC2 = GLenum::GL_COMPRESSED_RGB8_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ETC2 = GLenum::GL_COMPRESSED_SRGB8_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = GLenum::GL_COMPRESSED_RGBA8_ETC2_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_3x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x6_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES;

// InternalFormatPName

// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLES = GLenum::GL_SAMPLES; // reuse GetFramebufferParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPRESSED = GLenum::GL_TEXTURE_COMPRESSED;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT = GLenum::GL_NUM_SURFACE_COMPRESSION_FIXED_RATES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_TYPE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SAMPLE_COUNTS = GLenum::GL_NUM_SAMPLE_COUNTS;

// InvalidateFramebufferAttachment

// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR = GLenum::GL_COLOR; // reuse Buffer
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH = GLenum::GL_DEPTH; // reuse Buffer
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL = GLenum::GL_STENCIL; // reuse Buffer
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_ATTACHMENT = GLenum::GL_DEPTH_STENCIL_ATTACHMENT; // reuse FramebufferAttachment
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0_EXT = GLenum::GL_COLOR_ATTACHMENT0_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0_NV = GLenum::GL_COLOR_ATTACHMENT0_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1_EXT = GLenum::GL_COLOR_ATTACHMENT1_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1_NV = GLenum::GL_COLOR_ATTACHMENT1_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2_EXT = GLenum::GL_COLOR_ATTACHMENT2_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2_NV = GLenum::GL_COLOR_ATTACHMENT2_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3_EXT = GLenum::GL_COLOR_ATTACHMENT3_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3_NV = GLenum::GL_COLOR_ATTACHMENT3_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4_EXT = GLenum::GL_COLOR_ATTACHMENT4_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4_NV = GLenum::GL_COLOR_ATTACHMENT4_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5_EXT = GLenum::GL_COLOR_ATTACHMENT5_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5_NV = GLenum::GL_COLOR_ATTACHMENT5_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6_EXT = GLenum::GL_COLOR_ATTACHMENT6_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6_NV = GLenum::GL_COLOR_ATTACHMENT6_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7_EXT = GLenum::GL_COLOR_ATTACHMENT7_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7_NV = GLenum::GL_COLOR_ATTACHMENT7_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8_EXT = GLenum::GL_COLOR_ATTACHMENT8_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8_NV = GLenum::GL_COLOR_ATTACHMENT8_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9_EXT = GLenum::GL_COLOR_ATTACHMENT9_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9_NV = GLenum::GL_COLOR_ATTACHMENT9_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10_EXT = GLenum::GL_COLOR_ATTACHMENT10_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10_NV = GLenum::GL_COLOR_ATTACHMENT10_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11_EXT = GLenum::GL_COLOR_ATTACHMENT11_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11_NV = GLenum::GL_COLOR_ATTACHMENT11_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12_EXT = GLenum::GL_COLOR_ATTACHMENT12_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12_NV = GLenum::GL_COLOR_ATTACHMENT12_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13_EXT = GLenum::GL_COLOR_ATTACHMENT13_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13_NV = GLenum::GL_COLOR_ATTACHMENT13_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14_EXT = GLenum::GL_COLOR_ATTACHMENT14_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14_NV = GLenum::GL_COLOR_ATTACHMENT14_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15_EXT = GLenum::GL_COLOR_ATTACHMENT15_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15_NV = GLenum::GL_COLOR_ATTACHMENT15_NV; // reuse DrawBufferMode
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT16 = GLenum::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT17 = GLenum::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT18 = GLenum::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT19 = GLenum::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT20 = GLenum::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT21 = GLenum::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT22 = GLenum::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT23 = GLenum::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT24 = GLenum::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT25 = GLenum::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT26 = GLenum::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT27 = GLenum::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT28 = GLenum::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT29 = GLenum::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT30 = GLenum::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT31 = GLenum::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_ATTACHMENT = GLenum::GL_DEPTH_ATTACHMENT; // reuse FramebufferAttachment

// LightEnvModeSGIX

GLESBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE;

// ListNameType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// LogicOp

GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT;

// MapTypeNV

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// MatrixIndexPointerTypeARB

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// MatrixMode

GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE;

// MemoryObjectParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_DEDICATED_MEMORY_OBJECT_EXT = GLenum::GL_DEDICATED_MEMORY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROTECTED_MEMORY_OBJECT_EXT = GLenum::GL_PROTECTED_MEMORY_OBJECT_EXT;

// NormalPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// ObjectIdentifier

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE = GLenum::GL_TEXTURE; // reuse MatrixMode
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY = GLenum::GL_VERTEX_ARRAY; // reuse EnableCap
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER = GLenum::GL_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER = GLenum::GL_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM = GLenum::GL_PROGRAM;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY = GLenum::GL_QUERY;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE = GLenum::GL_PROGRAM_PIPELINE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER = GLenum::GL_SAMPLER;
// GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER = GLenum::GL_FRAMEBUFFER; // reuse FramebufferTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse CopyImageSubDataTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK = GLenum::GL_TRANSFORM_FEEDBACK; // reuse BindTransformFeedbackTarget

// PatchParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES = GLenum::GL_PATCH_VERTICES;

// PathColor

// GLESBINDING_CONSTEXPR static const GLenum GL_PRIMARY_COLOR_NV = GLenum::GL_PRIMARY_COLOR_NV; // reuse CombinerRegisterNV
// GLESBINDING_CONSTEXPR static const GLenum GL_SECONDARY_COLOR_NV = GLenum::GL_SECONDARY_COLOR_NV; // reuse CombinerRegisterNV
// GLESBINDING_CONSTEXPR static const GLenum GL_PRIMARY_COLOR = GLenum::GL_PRIMARY_COLOR; // reuse FragmentShaderGenericSourceATI

// PathColorFormat

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA;

// PathCoordType

GLESBINDING_CONSTEXPR static const GLenum GL_CLOSE_PATH_NV = GLenum::GL_CLOSE_PATH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_NV = GLenum::GL_MOVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_MOVE_TO_NV = GLenum::GL_RELATIVE_MOVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_TO_NV = GLenum::GL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LINE_TO_NV = GLenum::GL_RELATIVE_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HORIZONTAL_LINE_TO_NV = GLenum::GL_HORIZONTAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_HORIZONTAL_LINE_TO_NV = GLenum::GL_RELATIVE_HORIZONTAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTICAL_LINE_TO_NV = GLenum::GL_VERTICAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_VERTICAL_LINE_TO_NV = GLenum::GL_RELATIVE_VERTICAL_LINE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADRATIC_CURVE_TO_NV = GLenum::GL_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_CURVE_TO_NV = GLenum::GL_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_SMOOTH_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_SMOOTH_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CCW_ARC_TO_NV = GLenum::GL_SMALL_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CW_ARC_TO_NV = GLenum::GL_SMALL_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CCW_ARC_TO_NV = GLenum::GL_LARGE_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CW_ARC_TO_NV = GLenum::GL_LARGE_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONIC_CURVE_TO_NV = GLenum::GL_CONIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CONIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CONIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT_NV = GLenum::GL_ROUNDED_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT_NV = GLenum::GL_RELATIVE_ROUNDED_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT2_NV = GLenum::GL_ROUNDED_RECT2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT2_NV = GLenum::GL_RELATIVE_ROUNDED_RECT2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT4_NV = GLenum::GL_ROUNDED_RECT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT4_NV = GLenum::GL_RELATIVE_ROUNDED_RECT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT8_NV = GLenum::GL_ROUNDED_RECT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT8_NV = GLenum::GL_RELATIVE_ROUNDED_RECT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RESTART_PATH_NV = GLenum::GL_RESTART_PATH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DUP_FIRST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_FIRST_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DUP_LAST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_LAST_CUBIC_CURVE_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RECT_NV = GLenum::GL_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_RECT_NV = GLenum::GL_RELATIVE_RECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CCW_ARC_TO_NV = GLenum::GL_CIRCULAR_CCW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CW_ARC_TO_NV = GLenum::GL_CIRCULAR_CW_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_TANGENT_ARC_TO_NV = GLenum::GL_CIRCULAR_TANGENT_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ARC_TO_NV = GLenum::GL_ARC_TO_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ARC_TO_NV = GLenum::GL_RELATIVE_ARC_TO_NV;

// PathCoverMode

// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_COVER_MODE_NV = GLenum::GL_PATH_FILL_COVER_MODE_NV; // reuse InstancedPathCoverMode
// GLESBINDING_CONSTEXPR static const GLenum GL_CONVEX_HULL_NV = GLenum::GL_CONVEX_HULL_NV; // reuse InstancedPathCoverMode
// GLESBINDING_CONSTEXPR static const GLenum GL_BOUNDING_BOX_NV = GLenum::GL_BOUNDING_BOX_NV; // reuse InstancedPathCoverMode

// PathElementType

GLESBINDING_CONSTEXPR static const GLenum GL_UTF8_NV = GLenum::GL_UTF8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UTF16_NV = GLenum::GL_UTF16_NV;

// PathFillMode

// GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MODE_NV = GLenum::GL_PATH_FILL_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNT_UP_NV = GLenum::GL_COUNT_UP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNT_DOWN_NV = GLenum::GL_COUNT_DOWN_NV;

// PathFontTarget

GLESBINDING_CONSTEXPR static const GLenum GL_STANDARD_FONT_NAME_NV = GLenum::GL_STANDARD_FONT_NAME_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SYSTEM_FONT_NAME_NV = GLenum::GL_SYSTEM_FONT_NAME_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FILE_NAME_NV = GLenum::GL_FILE_NAME_NV;

// PathGenMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_OBJECT_BOUNDING_BOX_NV = GLenum::GL_PATH_OBJECT_BOUNDING_BOX_NV;

// PathHandleMissingGlyphs

GLESBINDING_CONSTEXPR static const GLenum GL_SKIP_MISSING_GLYPH_NV = GLenum::GL_SKIP_MISSING_GLYPH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_USE_MISSING_GLYPH_NV = GLenum::GL_USE_MISSING_GLYPH_NV;

// PathListMode

GLESBINDING_CONSTEXPR static const GLenum GL_ACCUM_ADJACENT_PAIRS_NV = GLenum::GL_ACCUM_ADJACENT_PAIRS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ADJACENT_PAIRS_NV = GLenum::GL_ADJACENT_PAIRS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_TO_REST_NV = GLenum::GL_FIRST_TO_REST_NV;

// PathParameter

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_WIDTH_NV = GLenum::GL_PATH_STROKE_WIDTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_END_CAPS_NV = GLenum::GL_PATH_END_CAPS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_INITIAL_END_CAP_NV = GLenum::GL_PATH_INITIAL_END_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TERMINAL_END_CAP_NV = GLenum::GL_PATH_TERMINAL_END_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_JOIN_STYLE_NV = GLenum::GL_PATH_JOIN_STYLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MITER_LIMIT_NV = GLenum::GL_PATH_MITER_LIMIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_CAPS_NV = GLenum::GL_PATH_DASH_CAPS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_INITIAL_DASH_CAP_NV = GLenum::GL_PATH_INITIAL_DASH_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TERMINAL_DASH_CAP_NV = GLenum::GL_PATH_TERMINAL_DASH_CAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_OFFSET_NV = GLenum::GL_PATH_DASH_OFFSET_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_CLIENT_LENGTH_NV = GLenum::GL_PATH_CLIENT_LENGTH_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MODE_NV = GLenum::GL_PATH_FILL_MODE_NV; // reuse PathFillMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_MASK_NV = GLenum::GL_PATH_FILL_MASK_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_COVER_MODE_NV = GLenum::GL_PATH_FILL_COVER_MODE_NV; // reuse InstancedPathCoverMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_COVER_MODE_NV = GLenum::GL_PATH_STROKE_COVER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_MASK_NV = GLenum::GL_PATH_STROKE_MASK_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PATH_OBJECT_BOUNDING_BOX_NV = GLenum::GL_PATH_OBJECT_BOUNDING_BOX_NV; // reuse PathGenMode
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COMMAND_COUNT_NV = GLenum::GL_PATH_COMMAND_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COORD_COUNT_NV = GLenum::GL_PATH_COORD_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_ARRAY_COUNT_NV = GLenum::GL_PATH_DASH_ARRAY_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COMPUTED_LENGTH_NV = GLenum::GL_PATH_COMPUTED_LENGTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FILL_BOUNDING_BOX_NV = GLenum::GL_PATH_FILL_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STROKE_BOUNDING_BOX_NV = GLenum::GL_PATH_STROKE_BOUNDING_BOX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_DASH_OFFSET_RESET_NV = GLenum::GL_PATH_DASH_OFFSET_RESET_NV;

// PathRenderingTokenNV

// GLESBINDING_CONSTEXPR static const GLenum GL_CLOSE_PATH_NV = GLenum::GL_CLOSE_PATH_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_NV = GLenum::GL_MOVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_MOVE_TO_NV = GLenum::GL_RELATIVE_MOVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_LINE_TO_NV = GLenum::GL_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LINE_TO_NV = GLenum::GL_RELATIVE_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_HORIZONTAL_LINE_TO_NV = GLenum::GL_HORIZONTAL_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_HORIZONTAL_LINE_TO_NV = GLenum::GL_RELATIVE_HORIZONTAL_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTICAL_LINE_TO_NV = GLenum::GL_VERTICAL_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_VERTICAL_LINE_TO_NV = GLenum::GL_RELATIVE_VERTICAL_LINE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_QUADRATIC_CURVE_TO_NV = GLenum::GL_QUADRATIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_QUADRATIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_CURVE_TO_NV = GLenum::GL_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_SMOOTH_QUADRATIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_SMOOTH_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV = GLenum::GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CCW_ARC_TO_NV = GLenum::GL_SMALL_CCW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CCW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_SMALL_CW_ARC_TO_NV = GLenum::GL_SMALL_CW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_SMALL_CW_ARC_TO_NV = GLenum::GL_RELATIVE_SMALL_CW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CCW_ARC_TO_NV = GLenum::GL_LARGE_CCW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CCW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CCW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_LARGE_CW_ARC_TO_NV = GLenum::GL_LARGE_CW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_LARGE_CW_ARC_TO_NV = GLenum::GL_RELATIVE_LARGE_CW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_CONIC_CURVE_TO_NV = GLenum::GL_CONIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_CONIC_CURVE_TO_NV = GLenum::GL_RELATIVE_CONIC_CURVE_TO_NV; // reuse PathCoordType
GLESBINDING_CONSTEXPR static const GLenum GL_SHARED_EDGE_NV = GLenum::GL_SHARED_EDGE_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT_NV = GLenum::GL_ROUNDED_RECT_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT_NV = GLenum::GL_RELATIVE_ROUNDED_RECT_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT2_NV = GLenum::GL_ROUNDED_RECT2_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT2_NV = GLenum::GL_RELATIVE_ROUNDED_RECT2_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT4_NV = GLenum::GL_ROUNDED_RECT4_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT4_NV = GLenum::GL_RELATIVE_ROUNDED_RECT4_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_ROUNDED_RECT8_NV = GLenum::GL_ROUNDED_RECT8_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ROUNDED_RECT8_NV = GLenum::GL_RELATIVE_ROUNDED_RECT8_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RESTART_PATH_NV = GLenum::GL_RESTART_PATH_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_DUP_FIRST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_FIRST_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_DUP_LAST_CUBIC_CURVE_TO_NV = GLenum::GL_DUP_LAST_CUBIC_CURVE_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RECT_NV = GLenum::GL_RECT_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_RECT_NV = GLenum::GL_RELATIVE_RECT_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CCW_ARC_TO_NV = GLenum::GL_CIRCULAR_CCW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_CW_ARC_TO_NV = GLenum::GL_CIRCULAR_CW_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_CIRCULAR_TANGENT_ARC_TO_NV = GLenum::GL_CIRCULAR_TANGENT_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_ARC_TO_NV = GLenum::GL_ARC_TO_NV; // reuse PathCoordType
// GLESBINDING_CONSTEXPR static const GLenum GL_RELATIVE_ARC_TO_NV = GLenum::GL_RELATIVE_ARC_TO_NV; // reuse PathCoordType

// PathStringFormat

GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FORMAT_SVG_NV = GLenum::GL_PATH_FORMAT_SVG_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FORMAT_PS_NV = GLenum::GL_PATH_FORMAT_PS_NV;

// PathTransformType

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_X_NV = GLenum::GL_TRANSLATE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_Y_NV = GLenum::GL_TRANSLATE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_2D_NV = GLenum::GL_TRANSLATE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATE_3D_NV = GLenum::GL_TRANSLATE_3D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_AFFINE_2D_NV = GLenum::GL_AFFINE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_AFFINE_3D_NV = GLenum::GL_AFFINE_3D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSPOSE_AFFINE_2D_NV = GLenum::GL_TRANSPOSE_AFFINE_2D_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSPOSE_AFFINE_3D_NV = GLenum::GL_TRANSPOSE_AFFINE_3D_NV;

// PerfQueryDataFlags

GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_DONOT_FLUSH_INTEL = GLenum::GL_PERFQUERY_DONOT_FLUSH_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_FLUSH_INTEL = GLenum::GL_PERFQUERY_FLUSH_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_WAIT_INTEL = GLenum::GL_PERFQUERY_WAIT_INTEL;

// PipelineParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_PROGRAM = GLenum::GL_ACTIVE_PROGRAM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER = GLenum::GL_TESS_EVALUATION_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER = GLenum::GL_TESS_CONTROL_SHADER;

// PixelCopyType

// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR = GLenum::GL_COLOR; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_EXT = GLenum::GL_COLOR_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH = GLenum::GL_DEPTH; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_EXT = GLenum::GL_DEPTH_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL = GLenum::GL_STENCIL; // reuse Buffer
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_EXT = GLenum::GL_STENCIL_EXT;

// PixelFormat

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX = GLenum::GL_STENCIL_INDEX; // reuse DepthStencilTextureMode
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT; // reuse DepthStencilTextureMode
// GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse FragmentShaderValueRepATI
// GLESBINDING_CONSTEXPR static const GLenum GL_RED_EXT = GLenum::GL_RED_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_GREEN = GLenum::GL_GREEN; // reuse FragmentShaderValueRepATI
// GLESBINDING_CONSTEXPR static const GLenum GL_BLUE = GLenum::GL_BLUE; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE; // reuse PathColorFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA = GLenum::GL_LUMINANCE_ALPHA; // reuse PathColorFormat
GLESBINDING_CONSTEXPR static const GLenum GL_BGR_EXT = GLenum::GL_BGR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA_EXT = GLenum::GL_BGRA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA_IMG = GLenum::GL_BGRA_IMG;
// GLESBINDING_CONSTEXPR static const GLenum GL_RG = GLenum::GL_RG; // reuse InternalFormat
GLESBINDING_CONSTEXPR static const GLenum GL_RG_INTEGER = GLenum::GL_RG_INTEGER;
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL = GLenum::GL_DEPTH_STENCIL; // reuse InternalFormat
GLESBINDING_CONSTEXPR static const GLenum GL_RED_INTEGER = GLenum::GL_RED_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_INTEGER = GLenum::GL_RGB_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_RGBA_INTEGER = GLenum::GL_RGBA_INTEGER;

// PixelStoreParameter

// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH = GLenum::GL_UNPACK_ROW_LENGTH; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ROW_LENGTH_EXT = GLenum::GL_UNPACK_ROW_LENGTH_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS = GLenum::GL_UNPACK_SKIP_ROWS; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_ROWS_EXT = GLenum::GL_UNPACK_SKIP_ROWS_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS = GLenum::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_PIXELS_EXT = GLenum::GL_UNPACK_SKIP_PIXELS_EXT;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_ALIGNMENT = GLenum::GL_UNPACK_ALIGNMENT; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH = GLenum::GL_PACK_ROW_LENGTH; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ROW_LENGTH_NV = GLenum::GL_PACK_ROW_LENGTH_NV; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS = GLenum::GL_PACK_SKIP_ROWS; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_ROWS_NV = GLenum::GL_PACK_SKIP_ROWS_NV; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS = GLenum::GL_PACK_SKIP_PIXELS; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_SKIP_PIXELS_NV = GLenum::GL_PACK_SKIP_PIXELS_NV; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_PACK_ALIGNMENT = GLenum::GL_PACK_ALIGNMENT; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_SKIP_IMAGES = GLenum::GL_UNPACK_SKIP_IMAGES; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_UNPACK_IMAGE_HEIGHT = GLenum::GL_UNPACK_IMAGE_HEIGHT; // reuse GetPName

// PixelTexGenModeSGIX

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB = GLenum::GL_RGB; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA = GLenum::GL_RGBA; // reuse InternalFormat

// PixelType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType
GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4 = GLenum::GL_UNSIGNED_SHORT_4_4_4_4;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_5_5_1 = GLenum::GL_UNSIGNED_SHORT_5_5_5_1;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_5_6_5 = GLenum::GL_UNSIGNED_SHORT_5_6_5;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG = GLenum::GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT = GLenum::GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV_EXT = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_24_8 = GLenum::GL_UNSIGNED_INT_24_8;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_24_8_OES = GLenum::GL_UNSIGNED_INT_24_8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_5_9_9_9_REV_APPLE = GLenum::GL_UNSIGNED_INT_5_9_9_9_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_32_UNSIGNED_INT_24_8_REV = GLenum::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;

// PrecisionType

GLESBINDING_CONSTEXPR static const GLenum GL_LOW_FLOAT = GLenum::GL_LOW_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_MEDIUM_FLOAT = GLenum::GL_MEDIUM_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_HIGH_FLOAT = GLenum::GL_HIGH_FLOAT;
GLESBINDING_CONSTEXPR static const GLenum GL_LOW_INT = GLenum::GL_LOW_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_MEDIUM_INT = GLenum::GL_MEDIUM_INT;
GLESBINDING_CONSTEXPR static const GLenum GL_HIGH_INT = GLenum::GL_HIGH_INT;

// PrimitiveType

GLESBINDING_CONSTEXPR static const GLenum GL_POINTS = GLenum::GL_POINTS;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES = GLenum::GL_LINES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_LOOP = GLenum::GL_LINE_LOOP;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP = GLenum::GL_LINE_STRIP;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP = GLenum::GL_TRIANGLE_STRIP;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_FAN = GLenum::GL_TRIANGLE_FAN;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADS = GLenum::GL_QUADS;
GLESBINDING_CONSTEXPR static const GLenum GL_QUADS_EXT = GLenum::GL_QUADS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY = GLenum::GL_LINES_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY_EXT = GLenum::GL_LINES_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY = GLenum::GL_LINE_STRIP_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY_EXT = GLenum::GL_LINE_STRIP_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY = GLenum::GL_TRIANGLES_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY_EXT = GLenum::GL_TRIANGLES_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY = GLenum::GL_TRIANGLE_STRIP_ADJACENCY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY_EXT = GLenum::GL_TRIANGLE_STRIP_ADJACENCY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES = GLenum::GL_PATCHES;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES_EXT = GLenum::GL_PATCHES_EXT;

// ProgramInterface

// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM = GLenum::GL_UNIFORM;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK = GLenum::GL_UNIFORM_BLOCK;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_INPUT = GLenum::GL_PROGRAM_INPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_OUTPUT = GLenum::GL_PROGRAM_OUTPUT;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_VARIABLE = GLenum::GL_BUFFER_VARIABLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_STORAGE_BLOCK = GLenum::GL_SHADER_STORAGE_BLOCK;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYING = GLenum::GL_TRANSFORM_FEEDBACK_VARYING;

// ProgramInterfacePName

GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_RESOURCES = GLenum::GL_ACTIVE_RESOURCES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_NAME_LENGTH = GLenum::GL_MAX_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_NUM_ACTIVE_VARIABLES = GLenum::GL_MAX_NUM_ACTIVE_VARIABLES;

// ProgramParameterPName

// GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_RETRIEVABLE_HINT = GLenum::GL_PROGRAM_BINARY_RETRIEVABLE_HINT; // reuse HintTarget
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_SEPARABLE = GLenum::GL_PROGRAM_SEPARABLE;

// ProgramPropertyARB

GLESBINDING_CONSTEXPR static const GLenum GL_COMPUTE_WORK_GROUP_SIZE = GLenum::GL_COMPUTE_WORK_GROUP_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_LENGTH = GLenum::GL_PROGRAM_BINARY_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_VERTICES_OUT = GLenum::GL_GEOMETRY_VERTICES_OUT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_INPUT_TYPE = GLenum::GL_GEOMETRY_INPUT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_OUTPUT_TYPE = GLenum::GL_GEOMETRY_OUTPUT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH = GLenum::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_BLOCKS = GLenum::GL_ACTIVE_UNIFORM_BLOCKS;
GLESBINDING_CONSTEXPR static const GLenum GL_DELETE_STATUS = GLenum::GL_DELETE_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_VALIDATE_STATUS = GLenum::GL_VALIDATE_STATUS;
// GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_ATTACHED_SHADERS = GLenum::GL_ATTACHED_SHADERS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORMS = GLenum::GL_ACTIVE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_UNIFORM_MAX_LENGTH = GLenum::GL_ACTIVE_UNIFORM_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATTRIBUTES = GLenum::GL_ACTIVE_ATTRIBUTES;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = GLenum::GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH = GLenum::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_MODE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_VARYINGS = GLenum::GL_TRANSFORM_FEEDBACK_VARYINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_ATOMIC_COUNTER_BUFFERS = GLenum::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;

// ProgramResourceProperty

// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM = GLenum::GL_UNIFORM; // reuse ProgramInterface
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH = GLenum::GL_IS_PER_PATCH;
GLESBINDING_CONSTEXPR static const GLenum GL_NAME_LENGTH = GLenum::GL_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_TYPE = GLenum::GL_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_SIZE = GLenum::GL_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_OFFSET = GLenum::GL_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_BLOCK_INDEX = GLenum::GL_BLOCK_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_ARRAY_STRIDE = GLenum::GL_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_MATRIX_STRIDE = GLenum::GL_MATRIX_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_ROW_MAJOR = GLenum::GL_IS_ROW_MAJOR;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_INDEX = GLenum::GL_ATOMIC_COUNTER_BUFFER_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_BINDING = GLenum::GL_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_DATA_SIZE = GLenum::GL_BUFFER_DATA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_ACTIVE_VARIABLES = GLenum::GL_NUM_ACTIVE_VARIABLES;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_VARIABLES = GLenum::GL_ACTIVE_VARIABLES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_REFERENCED_BY_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_REFERENCED_BY_FRAGMENT_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_COMPUTE_SHADER = GLenum::GL_REFERENCED_BY_COMPUTE_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_TOP_LEVEL_ARRAY_SIZE = GLenum::GL_TOP_LEVEL_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TOP_LEVEL_ARRAY_STRIDE = GLenum::GL_TOP_LEVEL_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_LOCATION = GLenum::GL_LOCATION;

// QueryCounterTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_TIMESTAMP_EXT = GLenum::GL_TIMESTAMP_EXT; // reuse GetPName

// QueryObjectParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT = GLenum::GL_QUERY_RESULT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_AVAILABLE = GLenum::GL_QUERY_RESULT_AVAILABLE;

// QueryParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_QUERY = GLenum::GL_CURRENT_QUERY;

// QueryTarget

GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED = GLenum::GL_ANY_SAMPLES_PASSED;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED = GLenum::GL_PRIMITIVES_GENERATED;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN = GLenum::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE = GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;

// ReadBufferMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT0 = GLenum::GL_COLOR_ATTACHMENT0; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT1 = GLenum::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT2 = GLenum::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT3 = GLenum::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT4 = GLenum::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT5 = GLenum::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT6 = GLenum::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT7 = GLenum::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT8 = GLenum::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT9 = GLenum::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT10 = GLenum::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT11 = GLenum::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT12 = GLenum::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT13 = GLenum::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT14 = GLenum::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT15 = GLenum::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer

// RenderbufferParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES = GLenum::GL_RENDERBUFFER_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_ANGLE = GLenum::GL_RENDERBUFFER_SAMPLES_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_APPLE = GLenum::GL_RENDERBUFFER_SAMPLES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_EXT = GLenum::GL_RENDERBUFFER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_NV = GLenum::GL_RENDERBUFFER_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_WIDTH = GLenum::GL_RENDERBUFFER_WIDTH;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_HEIGHT = GLenum::GL_RENDERBUFFER_HEIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_INTERNAL_FORMAT = GLenum::GL_RENDERBUFFER_INTERNAL_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_RED_SIZE = GLenum::GL_RENDERBUFFER_RED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_GREEN_SIZE = GLenum::GL_RENDERBUFFER_GREEN_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_BLUE_SIZE = GLenum::GL_RENDERBUFFER_BLUE_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_ALPHA_SIZE = GLenum::GL_RENDERBUFFER_ALPHA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_DEPTH_SIZE = GLenum::GL_RENDERBUFFER_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_STENCIL_SIZE = GLenum::GL_RENDERBUFFER_STENCIL_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_SAMPLES_IMG = GLenum::GL_RENDERBUFFER_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER_STORAGE_SAMPLES_AMD = GLenum::GL_RENDERBUFFER_STORAGE_SAMPLES_AMD;

// RenderbufferTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse CopyImageSubDataTarget

// ReplacementCodeTypeSUN

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// SamplerParameterF

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM = GLenum::GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM; // reuse GetTextureParameter

// SamplerParameterI

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM = GLenum::GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM; // reuse GetTextureParameter

// ScalarType

// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// SecondaryColorPointerTypeIBM

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// SemaphoreParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_D3D12_FENCE_VALUE_EXT = GLenum::GL_D3D12_FENCE_VALUE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMELINE_SEMAPHORE_VALUE_NV = GLenum::GL_TIMELINE_SEMAPHORE_VALUE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SEMAPHORE_TYPE_NV = GLenum::GL_SEMAPHORE_TYPE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SEMAPHORE_TYPE_BINARY_NV = GLenum::GL_SEMAPHORE_TYPE_BINARY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SEMAPHORE_TYPE_TIMELINE_NV = GLenum::GL_SEMAPHORE_TYPE_TIMELINE_NV;

// ShaderBinaryFormat

GLESBINDING_CONSTEXPR static const GLenum GL_SGX_BINARY_IMG = GLenum::GL_SGX_BINARY_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MALI_SHADER_BINARY_ARM = GLenum::GL_MALI_SHADER_BINARY_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_VIV = GLenum::GL_SHADER_BINARY_VIV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_BINARY_DMP = GLenum::GL_SHADER_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_GCCSO_SHADER_BINARY_FJ = GLenum::GL_GCCSO_SHADER_BINARY_FJ;

// ShaderParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_TYPE = GLenum::GL_SHADER_TYPE;
// GLESBINDING_CONSTEXPR static const GLenum GL_DELETE_STATUS = GLenum::GL_DELETE_STATUS; // reuse ProgramPropertyARB
GLESBINDING_CONSTEXPR static const GLenum GL_COMPILE_STATUS = GLenum::GL_COMPILE_STATUS;
// GLESBINDING_CONSTEXPR static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_SOURCE_LENGTH = GLenum::GL_SHADER_SOURCE_LENGTH;

// ShaderType

// GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER = GLenum::GL_TESS_EVALUATION_SHADER; // reuse PipelineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER = GLenum::GL_TESS_CONTROL_SHADER; // reuse PipelineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_COMPUTE_SHADER = GLenum::GL_COMPUTE_SHADER;

// ShadingRate

GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1X1_PIXELS_EXT = GLenum::GL_SHADING_RATE_1X1_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1X2_PIXELS_EXT = GLenum::GL_SHADING_RATE_1X2_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2X1_PIXELS_EXT = GLenum::GL_SHADING_RATE_2X1_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2X2_PIXELS_EXT = GLenum::GL_SHADING_RATE_2X2_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1X4_PIXELS_EXT = GLenum::GL_SHADING_RATE_1X4_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4X1_PIXELS_EXT = GLenum::GL_SHADING_RATE_4X1_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4X2_PIXELS_EXT = GLenum::GL_SHADING_RATE_4X2_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2X4_PIXELS_EXT = GLenum::GL_SHADING_RATE_2X4_PIXELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4X4_PIXELS_EXT = GLenum::GL_SHADING_RATE_4X4_PIXELS_EXT;

// ShadingRateCombinerOp

GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_COMBINER_OP_KEEP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_COMBINER_OP_REPLACE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MIN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MAX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT = GLenum::GL_FRAGMENT_SHADING_RATE_COMBINER_OP_MUL_EXT;

// ShadingRateQCOM

GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1X1_PIXELS_QCOM = GLenum::GL_SHADING_RATE_1X1_PIXELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1X2_PIXELS_QCOM = GLenum::GL_SHADING_RATE_1X2_PIXELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2X1_PIXELS_QCOM = GLenum::GL_SHADING_RATE_2X1_PIXELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2X2_PIXELS_QCOM = GLenum::GL_SHADING_RATE_2X2_PIXELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4X2_PIXELS_QCOM = GLenum::GL_SHADING_RATE_4X2_PIXELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4X4_PIXELS_QCOM = GLenum::GL_SHADING_RATE_4X4_PIXELS_QCOM;

// SizedInternalFormat

// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_EXT = GLenum::GL_ALPHA8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA8_OES = GLenum::GL_ALPHA8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_EXT = GLenum::GL_LUMINANCE8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_OES = GLenum::GL_LUMINANCE8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE4_ALPHA4_OES = GLenum::GL_LUMINANCE4_ALPHA4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_EXT = GLenum::GL_LUMINANCE8_ALPHA8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE8_ALPHA8_OES = GLenum::GL_LUMINANCE8_ALPHA8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB8 = GLenum::GL_RGB8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_OES = GLenum::GL_RGB8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_EXT = GLenum::GL_RGB10_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_EXT = GLenum::GL_RGB16_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4 = GLenum::GL_RGBA4; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA4_OES = GLenum::GL_RGBA4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1 = GLenum::GL_RGB5_A1; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB5_A1_OES = GLenum::GL_RGB5_A1_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8 = GLenum::GL_RGBA8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_OES = GLenum::GL_RGBA8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2 = GLenum::GL_RGB10_A2; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2_EXT = GLenum::GL_RGB10_A2_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_EXT = GLenum::GL_RGBA16_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16 = GLenum::GL_DEPTH_COMPONENT16; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16_OES = GLenum::GL_DEPTH_COMPONENT16_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24 = GLenum::GL_DEPTH_COMPONENT24; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT24_OES = GLenum::GL_DEPTH_COMPONENT24_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32_OES = GLenum::GL_DEPTH_COMPONENT32_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R8 = GLenum::GL_R8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R8_EXT = GLenum::GL_R8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16_EXT = GLenum::GL_R16_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG8 = GLenum::GL_RG8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG8_EXT = GLenum::GL_RG8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16_EXT = GLenum::GL_RG16_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16F = GLenum::GL_R16F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16F_EXT = GLenum::GL_R16F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R32F = GLenum::GL_R32F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R32F_EXT = GLenum::GL_R32F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16F = GLenum::GL_RG16F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16F_EXT = GLenum::GL_RG16F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG32F = GLenum::GL_RG32F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG32F_EXT = GLenum::GL_RG32F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R8I = GLenum::GL_R8I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R8UI = GLenum::GL_R8UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16I = GLenum::GL_R16I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16UI = GLenum::GL_R16UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R32I = GLenum::GL_R32I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R32UI = GLenum::GL_R32UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG8I = GLenum::GL_RG8I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG8UI = GLenum::GL_RG8UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16I = GLenum::GL_RG16I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16UI = GLenum::GL_RG16UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG32I = GLenum::GL_RG32I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG32UI = GLenum::GL_RG32UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGB_S3TC_DXT1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F = GLenum::GL_RGBA32F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32F_EXT = GLenum::GL_RGBA32F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F = GLenum::GL_RGB32F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB32F_EXT = GLenum::GL_RGB32F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F = GLenum::GL_RGBA16F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16F_EXT = GLenum::GL_RGBA16F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F = GLenum::GL_RGB16F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16F_EXT = GLenum::GL_RGB16F_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8 = GLenum::GL_DEPTH24_STENCIL8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH24_STENCIL8_OES = GLenum::GL_DEPTH24_STENCIL8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F = GLenum::GL_R11F_G11F_B10F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R11F_G11F_B10F_APPLE = GLenum::GL_R11F_G11F_B10F_APPLE; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5 = GLenum::GL_RGB9_E5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB9_E5_APPLE = GLenum::GL_RGB9_E5_APPLE; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8 = GLenum::GL_SRGB8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_NV = GLenum::GL_SRGB8_NV; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8 = GLenum::GL_SRGB8_ALPHA8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_SRGB8_ALPHA8_EXT = GLenum::GL_SRGB8_ALPHA8_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_S3TC_DXT1_NV; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV = GLenum::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT32F = GLenum::GL_DEPTH_COMPONENT32F; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH32F_STENCIL8 = GLenum::GL_DEPTH32F_STENCIL8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX1_OES = GLenum::GL_STENCIL_INDEX1_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX4_OES = GLenum::GL_STENCIL_INDEX4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8 = GLenum::GL_STENCIL_INDEX8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_INDEX8_OES = GLenum::GL_STENCIL_INDEX8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB565_OES = GLenum::GL_RGB565_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB565 = GLenum::GL_RGB565; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_ETC1_RGB8_OES = GLenum::GL_ETC1_RGB8_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32UI = GLenum::GL_RGBA32UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB32UI = GLenum::GL_RGB32UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16UI = GLenum::GL_RGBA16UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16UI = GLenum::GL_RGB16UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8UI = GLenum::GL_RGBA8UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB8UI = GLenum::GL_RGB8UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA32I = GLenum::GL_RGBA32I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB32I = GLenum::GL_RGB32I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16I = GLenum::GL_RGBA16I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16I = GLenum::GL_RGB16I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8I = GLenum::GL_RGBA8I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB8I = GLenum::GL_RGB8I; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_RED_RGTC1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_RGTC1_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_RGTC1_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_RED_GREEN_RGTC2_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT = GLenum::GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_RGBA_BPTC_UNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT = GLenum::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R8_SNORM = GLenum::GL_R8_SNORM; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG8_SNORM = GLenum::GL_RG8_SNORM; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB8_SNORM = GLenum::GL_RGB8_SNORM; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA8_SNORM = GLenum::GL_RGBA8_SNORM; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_R16_SNORM_EXT = GLenum::GL_R16_SNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RG16_SNORM_EXT = GLenum::GL_RG16_SNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB16_SNORM_EXT = GLenum::GL_RGB16_SNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGBA16_SNORM_EXT = GLenum::GL_RGBA16_SNORM_EXT; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_RGB10_A2UI = GLenum::GL_RGB10_A2UI; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_R11_EAC = GLenum::GL_COMPRESSED_R11_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_R11_EAC = GLenum::GL_COMPRESSED_SIGNED_R11_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RG11_EAC = GLenum::GL_COMPRESSED_RG11_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SIGNED_RG11_EAC = GLenum::GL_COMPRESSED_SIGNED_RG11_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_ETC2 = GLenum::GL_COMPRESSED_RGB8_ETC2; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ETC2 = GLenum::GL_COMPRESSED_SRGB8_ETC2; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 = GLenum::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA8_ETC2_EAC = GLenum::GL_COMPRESSED_RGBA8_ETC2_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_8x8_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x8_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_10x10_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x10_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12 = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_RGBA_ASTC_12x12_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_3x3x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x3x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_4x4x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x4x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_5x5x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x5x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_RGBA_ASTC_6x6x6_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12 = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES; // reuse InternalFormat
// GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES = GLenum::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES; // reuse InternalFormat

// StencilFunction

// GLESBINDING_CONSTEXPR static const GLenum GL_NEVER = GLenum::GL_NEVER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LESS = GLenum::GL_LESS; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_EQUAL = GLenum::GL_EQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_LEQUAL = GLenum::GL_LEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GREATER = GLenum::GL_GREATER; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_NOTEQUAL = GLenum::GL_NOTEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_GEQUAL = GLenum::GL_GEQUAL; // reuse AlphaFunction
// GLESBINDING_CONSTEXPR static const GLenum GL_ALWAYS = GLenum::GL_ALWAYS; // reuse AlphaFunction

// StencilOp

// GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactor
// GLESBINDING_CONSTEXPR static const GLenum GL_INVERT = GLenum::GL_INVERT; // reuse LogicOp
GLESBINDING_CONSTEXPR static const GLenum GL_KEEP = GLenum::GL_KEEP;
// GLESBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX
GLESBINDING_CONSTEXPR static const GLenum GL_INCR = GLenum::GL_INCR;
GLESBINDING_CONSTEXPR static const GLenum GL_DECR = GLenum::GL_DECR;
GLESBINDING_CONSTEXPR static const GLenum GL_INCR_WRAP = GLenum::GL_INCR_WRAP;
GLESBINDING_CONSTEXPR static const GLenum GL_DECR_WRAP = GLenum::GL_DECR_WRAP;

// StringName

GLESBINDING_CONSTEXPR static const GLenum GL_VENDOR = GLenum::GL_VENDOR;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDERER = GLenum::GL_RENDERER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERSION = GLenum::GL_VERSION;
GLESBINDING_CONSTEXPR static const GLenum GL_EXTENSIONS = GLenum::GL_EXTENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_LANGUAGE_VERSION = GLenum::GL_SHADING_LANGUAGE_VERSION;

// SubgroupSupportedFeatures

GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_BASIC_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_BASIC_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_VOTE_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_VOTE_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_ARITHMETIC_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_BALLOT_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_SHUFFLE_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_CLUSTERED_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_QUAD_BIT_KHR = GLenum::GL_SUBGROUP_FEATURE_QUAD_BIT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV = GLenum::GL_SUBGROUP_FEATURE_PARTITIONED_BIT_NV;

// SubroutineParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_SIZE = GLenum::GL_UNIFORM_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_NAME_LENGTH = GLenum::GL_UNIFORM_NAME_LENGTH;

// SyncBehaviorFlags

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer

// SyncCondition

GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE = GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE;

// SyncParameterName

GLESBINDING_CONSTEXPR static const GLenum GL_OBJECT_TYPE = GLenum::GL_OBJECT_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_CONDITION = GLenum::GL_SYNC_CONDITION;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_STATUS = GLenum::GL_SYNC_STATUS;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FLAGS = GLenum::GL_SYNC_FLAGS;

// SyncStatus

GLESBINDING_CONSTEXPR static const GLenum GL_ALREADY_SIGNALED = GLenum::GL_ALREADY_SIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMEOUT_EXPIRED = GLenum::GL_TIMEOUT_EXPIRED;
GLESBINDING_CONSTEXPR static const GLenum GL_CONDITION_SATISFIED = GLenum::GL_CONDITION_SATISFIED;
GLESBINDING_CONSTEXPR static const GLenum GL_WAIT_FAILED = GLenum::GL_WAIT_FAILED;

// TangentPointerTypeEXT

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// TexCoordPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// TexStorageAttribs

// GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_EXT = GLenum::GL_SURFACE_COMPRESSION_EXT; // reuse GetTextureParameter
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_NONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_DEFAULT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_1BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_2BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_3BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_4BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_5BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_6BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_7BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_8BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_9BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_10BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_11BPC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT = GLenum::GL_SURFACE_COMPRESSION_FIXED_RATE_12BPC_EXT;

// TextureCompareMode

// GLESBINDING_CONSTEXPR static const GLenum GL_NONE = GLenum::GL_NONE; // reuse ColorBuffer
GLESBINDING_CONSTEXPR static const GLenum GL_COMPARE_REF_TO_TEXTURE = GLenum::GL_COMPARE_REF_TO_TEXTURE;

// TextureEnvMode

// GLESBINDING_CONSTEXPR static const GLenum GL_BLEND = GLenum::GL_BLEND; // reuse EnableCap
// GLESBINDING_CONSTEXPR static const GLenum GL_REPLACE = GLenum::GL_REPLACE; // reuse LightEnvModeSGIX

// TextureEnvParameter

GLESBINDING_CONSTEXPR static const GLenum GL_CONSTANT_NV = GLenum::GL_CONSTANT_NV;
// GLESBINDING_CONSTEXPR static const GLenum GL_PRIMARY_COLOR = GLenum::GL_PRIMARY_COLOR; // reuse FragmentShaderGenericSourceATI
GLESBINDING_CONSTEXPR static const GLenum GL_SRC1_ALPHA_EXT = GLenum::GL_SRC1_ALPHA_EXT;

// TextureLayout

GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT = GLenum::GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT = GLenum::GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_GENERAL_EXT = GLenum::GL_LAYOUT_GENERAL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_COLOR_ATTACHMENT_EXT = GLenum::GL_LAYOUT_COLOR_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT = GLenum::GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT = GLenum::GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_SHADER_READ_ONLY_EXT = GLenum::GL_LAYOUT_SHADER_READ_ONLY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_TRANSFER_SRC_EXT = GLenum::GL_LAYOUT_TRANSFER_SRC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYOUT_TRANSFER_DST_EXT = GLenum::GL_LAYOUT_TRANSFER_DST_EXT;

// TextureMagFilter

// GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter

// TextureMinFilter

// GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST = GLenum::GL_NEAREST; // reuse BlitFramebufferFilter
// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR = GLenum::GL_LINEAR; // reuse BlitFramebufferFilter
GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_NEAREST = GLenum::GL_NEAREST_MIPMAP_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_NEAREST = GLenum::GL_LINEAR_MIPMAP_NEAREST;
GLESBINDING_CONSTEXPR static const GLenum GL_NEAREST_MIPMAP_LINEAR = GLenum::GL_NEAREST_MIPMAP_LINEAR;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR;

// TextureParameterName

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH = GLenum::GL_TEXTURE_WIDTH; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT = GLenum::GL_TEXTURE_HEIGHT; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT = GLenum::GL_TEXTURE_INTERNAL_FORMAT; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR = GLenum::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_NV = GLenum::GL_TEXTURE_BORDER_COLOR_NV; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_SIZE = GLenum::GL_TEXTURE_RED_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_SIZE = GLenum::GL_TEXTURE_GREEN_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_SIZE = GLenum::GL_TEXTURE_BLUE_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_SIZE = GLenum::GL_TEXTURE_ALPHA_SIZE; // reuse GetTextureParameter
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R = GLenum::GL_TEXTURE_WRAP_R; // reuse SamplerParameterI
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WRAP_R_OES = GLenum::GL_TEXTURE_WRAP_R_OES;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MIN_LOD = GLenum::GL_TEXTURE_MIN_LOD; // reuse SamplerParameterF
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LOD = GLenum::GL_TEXTURE_MAX_LOD; // reuse SamplerParameterF
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BASE_LEVEL = GLenum::GL_TEXTURE_BASE_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LEVEL = GLenum::GL_TEXTURE_MAX_LEVEL;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE = GLenum::GL_TEXTURE_COMPARE_MODE; // reuse SamplerParameterI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC = GLenum::GL_TEXTURE_COMPARE_FUNC; // reuse SamplerParameterI
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_R = GLenum::GL_TEXTURE_SWIZZLE_R;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_G = GLenum::GL_TEXTURE_SWIZZLE_G;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_B = GLenum::GL_TEXTURE_SWIZZLE_B;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SWIZZLE_A = GLenum::GL_TEXTURE_SWIZZLE_A;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM = GLenum::GL_TEXTURE_UNNORMALIZED_COORDINATES_ARM; // reuse GetTextureParameter
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_STENCIL_TEXTURE_MODE = GLenum::GL_DEPTH_STENCIL_TEXTURE_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TILING_EXT = GLenum::GL_TEXTURE_TILING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM = GLenum::GL_TEXTURE_FOVEATED_CUTOFF_DENSITY_QCOM;

// TextureSwizzle

// GLESBINDING_CONSTEXPR static const GLenum GL_ZERO = GLenum::GL_ZERO; // reuse BlendingFactor
// GLESBINDING_CONSTEXPR static const GLenum GL_RED = GLenum::GL_RED; // reuse FragmentShaderValueRepATI
// GLESBINDING_CONSTEXPR static const GLenum GL_GREEN = GLenum::GL_GREEN; // reuse FragmentShaderValueRepATI
// GLESBINDING_CONSTEXPR static const GLenum GL_BLUE = GLenum::GL_BLUE; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA = GLenum::GL_ALPHA; // reuse CombinerComponentUsageNV
// GLESBINDING_CONSTEXPR static const GLenum GL_ONE = GLenum::GL_ONE; // reuse BlendingFactor

// TextureTarget

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D; // reuse CopyImageSubDataTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_3D = GLenum::GL_TEXTURE_3D; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_3D_OES = GLenum::GL_TEXTURE_3D_OES;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP = GLenum::GL_TEXTURE_CUBE_MAP; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_X;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_X = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_POSITIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = GLenum::GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_ARRAY = GLenum::GL_TEXTURE_2D_ARRAY; // reuse CopyImageSubDataTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER = GLenum::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_RENDERBUFFER = GLenum::GL_RENDERBUFFER; // reuse CopyImageSubDataTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY; // reuse CopyImageSubDataTarget
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY_EXT = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_CUBE_MAP_ARRAY_OES = GLenum::GL_TEXTURE_CUBE_MAP_ARRAY_OES;
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE = GLenum::GL_TEXTURE_2D_MULTISAMPLE; // reuse CopyImageSubDataTarget
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY; // reuse CopyImageSubDataTarget

// TextureUnit

// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE2 = GLenum::GL_TEXTURE2; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE3 = GLenum::GL_TEXTURE3; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE4 = GLenum::GL_TEXTURE4; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE5 = GLenum::GL_TEXTURE5; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE6 = GLenum::GL_TEXTURE6; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE7 = GLenum::GL_TEXTURE7; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE8 = GLenum::GL_TEXTURE8; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE9 = GLenum::GL_TEXTURE9; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE10 = GLenum::GL_TEXTURE10; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE11 = GLenum::GL_TEXTURE11; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE12 = GLenum::GL_TEXTURE12; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE13 = GLenum::GL_TEXTURE13; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE14 = GLenum::GL_TEXTURE14; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE15 = GLenum::GL_TEXTURE15; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE16 = GLenum::GL_TEXTURE16; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE17 = GLenum::GL_TEXTURE17; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE18 = GLenum::GL_TEXTURE18; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE19 = GLenum::GL_TEXTURE19; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE20 = GLenum::GL_TEXTURE20; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE21 = GLenum::GL_TEXTURE21; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE22 = GLenum::GL_TEXTURE22; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE23 = GLenum::GL_TEXTURE23; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE24 = GLenum::GL_TEXTURE24; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE25 = GLenum::GL_TEXTURE25; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE26 = GLenum::GL_TEXTURE26; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE27 = GLenum::GL_TEXTURE27; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE28 = GLenum::GL_TEXTURE28; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE29 = GLenum::GL_TEXTURE29; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE30 = GLenum::GL_TEXTURE30; // reuse FragmentShaderTextureSourceATI
// GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE31 = GLenum::GL_TEXTURE31; // reuse FragmentShaderTextureSourceATI

// TextureWrapMode

// GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_MIPMAP_LINEAR = GLenum::GL_LINEAR_MIPMAP_LINEAR; // reuse TextureMinFilter
GLESBINDING_CONSTEXPR static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER = GLenum::GL_CLAMP_TO_BORDER;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_NV = GLenum::GL_CLAMP_TO_BORDER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;
GLESBINDING_CONSTEXPR static const GLenum GL_MIRRORED_REPEAT = GLenum::GL_MIRRORED_REPEAT;

// TransformFeedbackBufferMode

GLESBINDING_CONSTEXPR static const GLenum GL_INTERLEAVED_ATTRIBS = GLenum::GL_INTERLEAVED_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_SEPARATE_ATTRIBS = GLenum::GL_SEPARATE_ATTRIBS;

// TransformFeedbackPName

// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_START = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_START; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_SIZE = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE; // reuse GetPName
// GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BUFFER_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING; // reuse GetPName
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_PAUSED = GLenum::GL_TRANSFORM_FEEDBACK_PAUSED;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_ACTIVE = GLenum::GL_TRANSFORM_FEEDBACK_ACTIVE;

// TriangleFace

// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT = GLenum::GL_FRONT; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_BACK = GLenum::GL_BACK; // reuse ColorBuffer
// GLESBINDING_CONSTEXPR static const GLenum GL_FRONT_AND_BACK = GLenum::GL_FRONT_AND_BACK; // reuse ColorBuffer

// UNGROUPED

GLESBINDING_CONSTEXPR static const GLenum GL_QUADS_OES = GLenum::GL_QUADS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINES_ADJACENCY_OES = GLenum::GL_LINES_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_STRIP_ADJACENCY_OES = GLenum::GL_LINE_STRIP_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLES_ADJACENCY_OES = GLenum::GL_TRIANGLES_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGLE_STRIP_ADJACENCY_OES = GLenum::GL_TRIANGLE_STRIP_ADJACENCY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCHES_OES = GLenum::GL_PATCHES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ALPHA_SATURATE_EXT = GLenum::GL_SRC_ALPHA_SATURATE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_OVERFLOW_KHR = GLenum::GL_STACK_OVERFLOW_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_STACK_UNDERFLOW_KHR = GLenum::GL_STACK_UNDERFLOW_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_LOST = GLenum::GL_CONTEXT_LOST;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_LOST_KHR = GLenum::GL_CONTEXT_LOST_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_MODE_NV = GLenum::GL_POLYGON_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_STACK_DEPTH_NV = GLenum::GL_PATH_MODELVIEW_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_STACK_DEPTH_NV = GLenum::GL_PATH_PROJECTION_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_MATRIX_NV = GLenum::GL_PATH_MODELVIEW_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_MATRIX_NV = GLenum::GL_PATH_PROJECTION_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CLIP_DISTANCES_EXT = GLenum::GL_MAX_CLIP_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CLIP_DISTANCES_APPLE = GLenum::GL_MAX_CLIP_DISTANCES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV = GLenum::GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV = GLenum::GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_EXT = GLenum::GL_TEXTURE_BORDER_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BORDER_COLOR_OES = GLenum::GL_TEXTURE_BORDER_COLOR_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_2_BYTES_NV = GLenum::GL_2_BYTES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_3_BYTES_NV = GLenum::GL_3_BYTES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_4_BYTES_NV = GLenum::GL_4_BYTES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_XOR_NV = GLenum::GL_XOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_MODELVIEW_NV = GLenum::GL_PATH_MODELVIEW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_PROJECTION_NV = GLenum::GL_PATH_PROJECTION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_RED_NV = GLenum::GL_RED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_GREEN_NV = GLenum::GL_GREEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLUE_NV = GLenum::GL_BLUE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POINT_NV = GLenum::GL_POINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINE_NV = GLenum::GL_LINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_EYE_LINEAR_NV = GLenum::GL_EYE_LINEAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_OBJECT_LINEAR_NV = GLenum::GL_OBJECT_LINEAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_POINT_NV = GLenum::GL_POLYGON_OFFSET_POINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_LINE_NV = GLenum::GL_POLYGON_OFFSET_LINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE0_EXT = GLenum::GL_CLIP_DISTANCE0_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE0_APPLE = GLenum::GL_CLIP_DISTANCE0_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE1_EXT = GLenum::GL_CLIP_DISTANCE1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE1_APPLE = GLenum::GL_CLIP_DISTANCE1_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE2_EXT = GLenum::GL_CLIP_DISTANCE2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE2_APPLE = GLenum::GL_CLIP_DISTANCE2_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE3_EXT = GLenum::GL_CLIP_DISTANCE3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE3_APPLE = GLenum::GL_CLIP_DISTANCE3_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE4_EXT = GLenum::GL_CLIP_DISTANCE4_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE4_APPLE = GLenum::GL_CLIP_DISTANCE4_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE5_EXT = GLenum::GL_CLIP_DISTANCE5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE5_APPLE = GLenum::GL_CLIP_DISTANCE5_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE6_EXT = GLenum::GL_CLIP_DISTANCE6_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE6_APPLE = GLenum::GL_CLIP_DISTANCE6_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE7_EXT = GLenum::GL_CLIP_DISTANCE7_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DISTANCE7_APPLE = GLenum::GL_CLIP_DISTANCE7_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_3D_OES = GLenum::GL_TEXTURE_BINDING_3D_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH = GLenum::GL_TEXTURE_DEPTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_3D_TEXTURE_SIZE_OES = GLenum::GL_MAX_3D_TEXTURE_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_KHR = GLenum::GL_VERTEX_ARRAY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_EXT = GLenum::GL_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_ALPHA_TO_ONE_EXT = GLenum::GL_SAMPLE_ALPHA_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_EXT = GLenum::GL_CLAMP_TO_BORDER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLAMP_TO_BORDER_OES = GLenum::GL_CLAMP_TO_BORDER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_LEVEL_APPLE = GLenum::GL_TEXTURE_MAX_LEVEL_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT = GLenum::GL_FRAMEBUFFER_DEFAULT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_UNDEFINED_OES = GLenum::GL_FRAMEBUFFER_UNDEFINED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_IMMUTABLE_STORAGE_EXT = GLenum::GL_BUFFER_IMMUTABLE_STORAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_STORAGE_FLAGS_EXT = GLenum::GL_BUFFER_STORAGE_FLAGS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED = GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES = GLenum::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RG_EXT = GLenum::GL_RG_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR = GLenum::GL_DEBUG_OUTPUT_SYNCHRONOUS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH = GLenum::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR = GLenum::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_FUNCTION_KHR = GLenum::GL_DEBUG_CALLBACK_FUNCTION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_CALLBACK_USER_PARAM_KHR = GLenum::GL_DEBUG_CALLBACK_USER_PARAM_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_API_KHR = GLenum::GL_DEBUG_SOURCE_API_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR = GLenum::GL_DEBUG_SOURCE_WINDOW_SYSTEM_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_SHADER_COMPILER_KHR = GLenum::GL_DEBUG_SOURCE_SHADER_COMPILER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_THIRD_PARTY_KHR = GLenum::GL_DEBUG_SOURCE_THIRD_PARTY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_APPLICATION_KHR = GLenum::GL_DEBUG_SOURCE_APPLICATION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SOURCE_OTHER_KHR = GLenum::GL_DEBUG_SOURCE_OTHER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_ERROR_KHR = GLenum::GL_DEBUG_TYPE_ERROR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR = GLenum::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR = GLenum::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PORTABILITY_KHR = GLenum::GL_DEBUG_TYPE_PORTABILITY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PERFORMANCE_KHR = GLenum::GL_DEBUG_TYPE_PERFORMANCE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_OTHER_KHR = GLenum::GL_DEBUG_TYPE_OTHER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET = GLenum::GL_LOSE_CONTEXT_ON_RESET;
GLESBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET_EXT = GLenum::GL_LOSE_CONTEXT_ON_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LOSE_CONTEXT_ON_RESET_KHR = GLenum::GL_LOSE_CONTEXT_ON_RESET_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET_EXT = GLenum::GL_GUILTY_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GUILTY_CONTEXT_RESET_KHR = GLenum::GL_GUILTY_CONTEXT_RESET_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET_EXT = GLenum::GL_INNOCENT_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INNOCENT_CONTEXT_RESET_KHR = GLenum::GL_INNOCENT_CONTEXT_RESET_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET_EXT = GLenum::GL_UNKNOWN_CONTEXT_RESET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNKNOWN_CONTEXT_RESET_KHR = GLenum::GL_UNKNOWN_CONTEXT_RESET_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY = GLenum::GL_RESET_NOTIFICATION_STRATEGY;
GLESBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY_EXT = GLenum::GL_RESET_NOTIFICATION_STRATEGY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RESET_NOTIFICATION_STRATEGY_KHR = GLenum::GL_RESET_NOTIFICATION_STRATEGY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_SEPARABLE_EXT = GLenum::GL_PROGRAM_SEPARABLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ACTIVE_PROGRAM_EXT = GLenum::GL_ACTIVE_PROGRAM_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_BINDING_EXT = GLenum::GL_PROGRAM_PIPELINE_BINDING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORTS_NV = GLenum::GL_MAX_VIEWPORTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWPORTS_OES = GLenum::GL_MAX_VIEWPORTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SUBPIXEL_BITS_NV = GLenum::GL_VIEWPORT_SUBPIXEL_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SUBPIXEL_BITS_OES = GLenum::GL_VIEWPORT_SUBPIXEL_BITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_BOUNDS_RANGE_NV = GLenum::GL_VIEWPORT_BOUNDS_RANGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_BOUNDS_RANGE_OES = GLenum::GL_VIEWPORT_BOUNDS_RANGE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX_EXT = GLenum::GL_LAYER_PROVOKING_VERTEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAYER_PROVOKING_VERTEX_OES = GLenum::GL_LAYER_PROVOKING_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV = GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES = GLenum::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX = GLenum::GL_UNDEFINED_VERTEX;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX_EXT = GLenum::GL_UNDEFINED_VERTEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNDEFINED_VERTEX_OES = GLenum::GL_UNDEFINED_VERTEX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_NO_RESET_NOTIFICATION = GLenum::GL_NO_RESET_NOTIFICATION;
GLESBINDING_CONSTEXPR static const GLenum GL_NO_RESET_NOTIFICATION_EXT = GLenum::GL_NO_RESET_NOTIFICATION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NO_RESET_NOTIFICATION_KHR = GLenum::GL_NO_RESET_NOTIFICATION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_SHARED_MEMORY_SIZE = GLenum::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_MARKER_KHR = GLenum::GL_DEBUG_TYPE_MARKER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_PUSH_GROUP_KHR = GLenum::GL_DEBUG_TYPE_PUSH_GROUP_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_TYPE_POP_GROUP_KHR = GLenum::GL_DEBUG_TYPE_POP_GROUP_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_NOTIFICATION_KHR = GLenum::GL_DEBUG_SEVERITY_NOTIFICATION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR = GLenum::GL_MAX_DEBUG_GROUP_STACK_DEPTH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_GROUP_STACK_DEPTH_KHR = GLenum::GL_DEBUG_GROUP_STACK_DEPTH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LEVEL_EXT = GLenum::GL_TEXTURE_VIEW_MIN_LEVEL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LEVEL_OES = GLenum::GL_TEXTURE_VIEW_MIN_LEVEL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LEVELS_EXT = GLenum::GL_TEXTURE_VIEW_NUM_LEVELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LEVELS_OES = GLenum::GL_TEXTURE_VIEW_NUM_LEVELS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LAYER_EXT = GLenum::GL_TEXTURE_VIEW_MIN_LAYER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_MIN_LAYER_OES = GLenum::GL_TEXTURE_VIEW_MIN_LAYER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LAYERS_EXT = GLenum::GL_TEXTURE_VIEW_NUM_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_VIEW_NUM_LAYERS_OES = GLenum::GL_TEXTURE_VIEW_NUM_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_LEVELS = GLenum::GL_TEXTURE_IMMUTABLE_LEVELS;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_KHR = GLenum::GL_BUFFER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_KHR = GLenum::GL_SHADER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_KHR = GLenum::GL_PROGRAM_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_KHR = GLenum::GL_QUERY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_KHR = GLenum::GL_PROGRAM_PIPELINE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATTRIB_STRIDE = GLenum::GL_MAX_VERTEX_ATTRIB_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_KHR = GLenum::GL_SAMPLER_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DISPLAY_LIST = GLenum::GL_DISPLAY_LIST;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_LABEL_LENGTH_KHR = GLenum::GL_MAX_LABEL_LENGTH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_CULL_DISTANCES_EXT = GLenum::GL_MAX_CULL_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT = GLenum::GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_RELEASE_BEHAVIOR = GLenum::GL_CONTEXT_RELEASE_BEHAVIOR;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_RELEASE_BEHAVIOR_KHR = GLenum::GL_CONTEXT_RELEASE_BEHAVIOR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH = GLenum::GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR = GLenum::GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_BLACKHOLE_RENDER_INTEL = GLenum::GL_BLACKHOLE_RENDER_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTERIZATION_INTEL = GLenum::GL_CONSERVATIVE_RASTERIZATION_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV = GLenum::GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV = GLenum::GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_MAX_ANISOTROPY_EXT = GLenum::GL_TEXTURE_MAX_ANISOTROPY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT = GLenum::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_BINDING_OES = GLenum::GL_VERTEX_ARRAY_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_8_8_APPLE = GLenum::GL_UNSIGNED_SHORT_8_8_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT_8_8_REV_APPLE = GLenum::GL_UNSIGNED_SHORT_8_8_REV_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_CLAMP_EXT = GLenum::GL_DEPTH_CLAMP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_Z400_BINARY_AMD = GLenum::GL_Z400_BINARY_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_LENGTH_OES = GLenum::GL_PROGRAM_BINARY_LENGTH_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIRROR_CLAMP_TO_EDGE_EXT = GLenum::GL_MIRROR_CLAMP_TO_EDGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMAT_MESA = GLenum::GL_PROGRAM_BINARY_FORMAT_MESA;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD = GLenum::GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_3DC_X_AMD = GLenum::GL_3DC_X_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_3DC_XY_AMD = GLenum::GL_3DC_XY_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_PROGRAM_BINARY_FORMATS_OES = GLenum::GL_NUM_PROGRAM_BINARY_FORMATS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_FORMATS_OES = GLenum::GL_PROGRAM_BINARY_FORMATS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA32F_EXT = GLenum::GL_ALPHA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE32F_EXT = GLenum::GL_LUMINANCE32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA32F_EXT = GLenum::GL_LUMINANCE_ALPHA32F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ALPHA16F_EXT = GLenum::GL_ALPHA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE16F_EXT = GLenum::GL_LUMINANCE16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LUMINANCE_ALPHA16F_EXT = GLenum::GL_LUMINANCE_ALPHA16F_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITEONLY_RENDERING_QCOM = GLenum::GL_WRITEONLY_RENDERING_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS_EXT = GLenum::GL_MAX_DRAW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_BUFFERS_NV = GLenum::GL_MAX_DRAW_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0 = GLenum::GL_DRAW_BUFFER0;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0_EXT = GLenum::GL_DRAW_BUFFER0_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER0_NV = GLenum::GL_DRAW_BUFFER0_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1 = GLenum::GL_DRAW_BUFFER1;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1_EXT = GLenum::GL_DRAW_BUFFER1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER1_NV = GLenum::GL_DRAW_BUFFER1_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2 = GLenum::GL_DRAW_BUFFER2;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2_EXT = GLenum::GL_DRAW_BUFFER2_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER2_NV = GLenum::GL_DRAW_BUFFER2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3 = GLenum::GL_DRAW_BUFFER3;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3_EXT = GLenum::GL_DRAW_BUFFER3_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER3_NV = GLenum::GL_DRAW_BUFFER3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4 = GLenum::GL_DRAW_BUFFER4;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4_EXT = GLenum::GL_DRAW_BUFFER4_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER4_NV = GLenum::GL_DRAW_BUFFER4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5 = GLenum::GL_DRAW_BUFFER5;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5_EXT = GLenum::GL_DRAW_BUFFER5_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER5_NV = GLenum::GL_DRAW_BUFFER5_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6 = GLenum::GL_DRAW_BUFFER6;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6_EXT = GLenum::GL_DRAW_BUFFER6_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER6_NV = GLenum::GL_DRAW_BUFFER6_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7 = GLenum::GL_DRAW_BUFFER7;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7_EXT = GLenum::GL_DRAW_BUFFER7_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER7_NV = GLenum::GL_DRAW_BUFFER7_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8 = GLenum::GL_DRAW_BUFFER8;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8_EXT = GLenum::GL_DRAW_BUFFER8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER8_NV = GLenum::GL_DRAW_BUFFER8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9 = GLenum::GL_DRAW_BUFFER9;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9_EXT = GLenum::GL_DRAW_BUFFER9_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER9_NV = GLenum::GL_DRAW_BUFFER9_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10 = GLenum::GL_DRAW_BUFFER10;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10_EXT = GLenum::GL_DRAW_BUFFER10_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER10_NV = GLenum::GL_DRAW_BUFFER10_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11 = GLenum::GL_DRAW_BUFFER11;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11_EXT = GLenum::GL_DRAW_BUFFER11_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER11_NV = GLenum::GL_DRAW_BUFFER11_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12 = GLenum::GL_DRAW_BUFFER12;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12_EXT = GLenum::GL_DRAW_BUFFER12_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER12_NV = GLenum::GL_DRAW_BUFFER12_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13 = GLenum::GL_DRAW_BUFFER13;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13_EXT = GLenum::GL_DRAW_BUFFER13_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER13_NV = GLenum::GL_DRAW_BUFFER13_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14 = GLenum::GL_DRAW_BUFFER14;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14_EXT = GLenum::GL_DRAW_BUFFER14_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER14_NV = GLenum::GL_DRAW_BUFFER14_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15 = GLenum::GL_DRAW_BUFFER15;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15_EXT = GLenum::GL_DRAW_BUFFER15_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_BUFFER15_NV = GLenum::GL_DRAW_BUFFER15_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_SIZE = GLenum::GL_TEXTURE_DEPTH_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_MODE_EXT = GLenum::GL_TEXTURE_COMPARE_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_COMPARE_FUNC_EXT = GLenum::GL_TEXTURE_COMPARE_FUNC_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPARE_REF_TO_TEXTURE_EXT = GLenum::GL_COMPARE_REF_TO_TEXTURE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_COUNTER_BITS_EXT = GLenum::GL_QUERY_COUNTER_BITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_QUERY_EXT = GLenum::GL_CURRENT_QUERY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_EXT = GLenum::GL_QUERY_RESULT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_RESULT_AVAILABLE_EXT = GLenum::GL_QUERY_RESULT_AVAILABLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS_EXT = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_INVOCATIONS_OES = GLenum::GL_GEOMETRY_SHADER_INVOCATIONS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_WRITE_ONLY_OES = GLenum::GL_WRITE_ONLY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_ACCESS_OES = GLenum::GL_BUFFER_ACCESS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAPPED_OES = GLenum::GL_BUFFER_MAPPED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_MAP_POINTER_OES = GLenum::GL_BUFFER_MAP_POINTER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TIME_ELAPSED_EXT = GLenum::GL_TIME_ELAPSED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_NV = GLenum::GL_PIXEL_PACK_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_NV = GLenum::GL_PIXEL_UNPACK_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_PACK_BUFFER_BINDING_NV = GLenum::GL_PIXEL_PACK_BUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ETC1_SRGB8_NV = GLenum::GL_ETC1_SRGB8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PIXEL_UNPACK_BUFFER_BINDING_NV = GLenum::GL_PIXEL_UNPACK_BUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_STENCIL_SIZE = GLenum::GL_TEXTURE_STENCIL_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC1_COLOR_EXT = GLenum::GL_SRC1_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC1_COLOR_EXT = GLenum::GL_ONE_MINUS_SRC1_COLOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ONE_MINUS_SRC1_ALPHA_EXT = GLenum::GL_ONE_MINUS_SRC1_ALPHA_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT = GLenum::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_VERTICES_OUT_EXT = GLenum::GL_GEOMETRY_LINKED_VERTICES_OUT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_VERTICES_OUT_OES = GLenum::GL_GEOMETRY_LINKED_VERTICES_OUT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_INPUT_TYPE_EXT = GLenum::GL_GEOMETRY_LINKED_INPUT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_INPUT_TYPE_OES = GLenum::GL_GEOMETRY_LINKED_INPUT_TYPE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT = GLenum::GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES = GLenum::GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_422_APPLE = GLenum::GL_RGB_422_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SRGB_DECODE_EXT = GLenum::GL_TEXTURE_SRGB_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DECODE_EXT = GLenum::GL_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SKIP_DECODE_EXT = GLenum::GL_SKIP_DECODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_PIPELINE_OBJECT_EXT = GLenum::GL_PROGRAM_PIPELINE_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RGB_RAW_422_APPLE = GLenum::GL_RGB_RAW_422_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT = GLenum::GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_OBJECT_APPLE = GLenum::GL_SYNC_OBJECT_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_OBJECT_EXT = GLenum::GL_SHADER_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGB8_OES = GLenum::GL_PALETTE4_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGBA8_OES = GLenum::GL_PALETTE4_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_R5_G6_B5_OES = GLenum::GL_PALETTE4_R5_G6_B5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGBA4_OES = GLenum::GL_PALETTE4_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE4_RGB5_A1_OES = GLenum::GL_PALETTE4_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGB8_OES = GLenum::GL_PALETTE8_RGB8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGBA8_OES = GLenum::GL_PALETTE8_RGBA8_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_R5_G6_B5_OES = GLenum::GL_PALETTE8_R5_G6_B5_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGBA4_OES = GLenum::GL_PALETTE8_RGBA4_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_PALETTE8_RGB5_A1_OES = GLenum::GL_PALETTE8_RGB5_A1_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_FLIP_Y_MESA = GLenum::GL_FRAMEBUFFER_FLIP_Y_MESA;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_FLIP_X_MESA = GLenum::GL_FRAMEBUFFER_FLIP_X_MESA;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_SWAP_XY_MESA = GLenum::GL_FRAMEBUFFER_SWAP_XY_MESA;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNTER_TYPE_AMD = GLenum::GL_COUNTER_TYPE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_COUNTER_RANGE_AMD = GLenum::GL_COUNTER_RANGE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_AMD = GLenum::GL_UNSIGNED_INT64_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERCENTAGE_AMD = GLenum::GL_PERCENTAGE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_AVAILABLE_AMD = GLenum::GL_PERFMON_RESULT_AVAILABLE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_SIZE_AMD = GLenum::GL_PERFMON_RESULT_SIZE_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_RESULT_AMD = GLenum::GL_PERFMON_RESULT_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_WIDTH_QCOM = GLenum::GL_TEXTURE_WIDTH_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_HEIGHT_QCOM = GLenum::GL_TEXTURE_HEIGHT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_QCOM = GLenum::GL_TEXTURE_DEPTH_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_INTERNAL_FORMAT_QCOM = GLenum::GL_TEXTURE_INTERNAL_FORMAT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FORMAT_QCOM = GLenum::GL_TEXTURE_FORMAT_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TYPE_QCOM = GLenum::GL_TEXTURE_TYPE_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMAGE_VALID_QCOM = GLenum::GL_TEXTURE_IMAGE_VALID_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_NUM_LEVELS_QCOM = GLenum::GL_TEXTURE_NUM_LEVELS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_TARGET_QCOM = GLenum::GL_TEXTURE_TARGET_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_OBJECT_VALID_QCOM = GLenum::GL_TEXTURE_OBJECT_VALID_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_STATE_RESTORE = GLenum::GL_STATE_RESTORE;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT = GLenum::GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_PROTECTED_EXT = GLenum::GL_TEXTURE_PROTECTED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM = GLenum::GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM = GLenum::GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM = GLenum::GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM = GLenum::GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM = GLenum::GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG = GLenum::GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG = GLenum::GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_RED_TYPE = GLenum::GL_TEXTURE_RED_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_GREEN_TYPE = GLenum::GL_TEXTURE_GREEN_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BLUE_TYPE = GLenum::GL_TEXTURE_BLUE_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ALPHA_TYPE = GLenum::GL_TEXTURE_ALPHA_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_DEPTH_TYPE = GLenum::GL_TEXTURE_DEPTH_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_NORMALIZED = GLenum::GL_UNSIGNED_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_NORMALIZED_EXT = GLenum::GL_UNSIGNED_NORMALIZED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_EXT = GLenum::GL_TEXTURE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OES = GLenum::GL_TEXTURE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING = GLenum::GL_TEXTURE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING_EXT = GLenum::GL_TEXTURE_BUFFER_BINDING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_BINDING_OES = GLenum::GL_TEXTURE_BUFFER_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE_EXT = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TEXTURE_BUFFER_SIZE_OES = GLenum::GL_MAX_TEXTURE_BUFFER_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER_EXT = GLenum::GL_TEXTURE_BINDING_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_BUFFER_OES = GLenum::GL_TEXTURE_BINDING_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES = GLenum::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_EXT = GLenum::GL_ANY_SAMPLES_PASSED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_SHADING_OES = GLenum::GL_SAMPLE_SHADING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_SAMPLE_SHADING_VALUE = GLenum::GL_MIN_SAMPLE_SHADING_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_SAMPLE_SHADING_VALUE_OES = GLenum::GL_MIN_SAMPLE_SHADING_VALUE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SHARED_SIZE = GLenum::GL_TEXTURE_SHARED_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE_ALPHA_NV = GLenum::GL_SLUMINANCE_ALPHA_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE8_ALPHA8_NV = GLenum::GL_SLUMINANCE8_ALPHA8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE_NV = GLenum::GL_SLUMINANCE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SLUMINANCE8_NV = GLenum::GL_SLUMINANCE8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED_EXT = GLenum::GL_PRIMITIVES_GENERATED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVES_GENERATED_OES = GLenum::GL_PRIMITIVES_GENERATED_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS = GLenum::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGB_AMD = GLenum::GL_ATC_RGB_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_ATC_RGBA_EXPLICIT_ALPHA_AMD = GLenum::GL_ATC_RGBA_EXPLICIT_ALPHA_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_LOD_BIAS_QCOM = GLenum::GL_TEXTURE_LOD_BIAS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_LOWER_LEFT_EXT = GLenum::GL_LOWER_LEFT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UPPER_LEFT_EXT = GLenum::GL_UPPER_LEFT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_ANGLE = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_APPLE = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_BINDING_NV = GLenum::GL_DRAW_FRAMEBUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_BINDING = GLenum::GL_FRAMEBUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_ANGLE = GLenum::GL_READ_FRAMEBUFFER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_APPLE = GLenum::GL_READ_FRAMEBUFFER_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_NV = GLenum::GL_READ_FRAMEBUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_ANGLE = GLenum::GL_DRAW_FRAMEBUFFER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_APPLE = GLenum::GL_DRAW_FRAMEBUFFER_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_FRAMEBUFFER_NV = GLenum::GL_DRAW_FRAMEBUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_ANGLE = GLenum::GL_READ_FRAMEBUFFER_BINDING_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_APPLE = GLenum::GL_READ_FRAMEBUFFER_BINDING_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_READ_FRAMEBUFFER_BINDING_NV = GLenum::GL_READ_FRAMEBUFFER_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = GLenum::GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES = GLenum::GL_MAX_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_ANGLE = GLenum::GL_MAX_SAMPLES_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_APPLE = GLenum::GL_MAX_SAMPLES_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_EXT = GLenum::GL_MAX_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_NV = GLenum::GL_MAX_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT_OES = GLenum::GL_HALF_FLOAT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_EXTERNAL_OES = GLenum::GL_TEXTURE_EXTERNAL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_EXTERNAL_OES = GLenum::GL_SAMPLER_EXTERNAL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_EXTERNAL_OES = GLenum::GL_TEXTURE_BINDING_EXTERNAL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT = GLenum::GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES = GLenum::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_SRGB_EXT = GLenum::GL_FRAMEBUFFER_SRGB_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER_EXT = GLenum::GL_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER_OES = GLenum::GL_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW_NV = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_SHADOW_NV = GLenum::GL_SAMPLER_CUBE_SHADOW_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER_EXT = GLenum::GL_INT_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER_OES = GLenum::GL_INT_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_EXT = GLenum::GL_GEOMETRY_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_GEOMETRY_SHADER_OES = GLenum::GL_GEOMETRY_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES = GLenum::GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10_10_10_2_OES = GLenum::GL_UNSIGNED_INT_10_10_10_2_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_10_10_10_2_OES = GLenum::GL_INT_10_10_10_2_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_WAIT_NV = GLenum::GL_QUERY_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_NO_WAIT_NV = GLenum::GL_QUERY_NO_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_BY_REGION_WAIT_NV = GLenum::GL_QUERY_BY_REGION_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_BY_REGION_NO_WAIT_NV = GLenum::GL_QUERY_BY_REGION_NO_WAIT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_POLYGON_OFFSET_CLAMP_EXT = GLenum::GL_POLYGON_OFFSET_CLAMP_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_SAMPLES_NV = GLenum::GL_COLOR_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSFORM_FEEDBACK_BINDING = GLenum::GL_TRANSFORM_FEEDBACK_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_COMPONENT16_NONLINEAR_NV = GLenum::GL_DEPTH_COMPONENT16_NONLINEAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION_EXT = GLenum::GL_FIRST_VERTEX_CONVENTION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION_OES = GLenum::GL_FIRST_VERTEX_CONVENTION_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION_EXT = GLenum::GL_LAST_VERTEX_CONVENTION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION_OES = GLenum::GL_LAST_VERTEX_CONVENTION_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_NV = GLenum::GL_SAMPLE_LOCATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_MASK_VALUE = GLenum::GL_SAMPLE_MASK_VALUE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES = GLenum::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES = GLenum::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET = GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES = GLenum::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS = GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES = GLenum::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET = GLenum::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_UNIFORM_BLOCKS_NV = GLenum::GL_MAX_MESH_UNIFORM_BLOCKS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV = GLenum::GL_MAX_MESH_TEXTURE_IMAGE_UNITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_IMAGE_UNIFORMS_NV = GLenum::GL_MAX_MESH_IMAGE_UNIFORMS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_UNIFORM_COMPONENTS_NV = GLenum::GL_MAX_MESH_UNIFORM_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV = GLenum::GL_MAX_MESH_ATOMIC_COUNTER_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_ATOMIC_COUNTERS_NV = GLenum::GL_MAX_MESH_ATOMIC_COUNTERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV = GLenum::GL_MAX_MESH_SHADER_STORAGE_BLOCKS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV = GLenum::GL_MAX_COMBINED_MESH_UNIFORM_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_UNIFORM_BLOCKS_NV = GLenum::GL_MAX_TASK_UNIFORM_BLOCKS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV = GLenum::GL_MAX_TASK_TEXTURE_IMAGE_UNITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_IMAGE_UNIFORMS_NV = GLenum::GL_MAX_TASK_IMAGE_UNIFORMS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_UNIFORM_COMPONENTS_NV = GLenum::GL_MAX_TASK_UNIFORM_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV = GLenum::GL_MAX_TASK_ATOMIC_COUNTER_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_ATOMIC_COUNTERS_NV = GLenum::GL_MAX_TASK_ATOMIC_COUNTERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV = GLenum::GL_MAX_TASK_SHADER_STORAGE_BLOCKS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV = GLenum::GL_MAX_COMBINED_TASK_UNIFORM_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES_EXT = GLenum::GL_PATCH_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PATCH_VERTICES_OES = GLenum::GL_PATCH_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES_EXT = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_OUTPUT_VERTICES_OES = GLenum::GL_TESS_CONTROL_OUTPUT_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE = GLenum::GL_TESS_GEN_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE_EXT = GLenum::GL_TESS_GEN_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_MODE_OES = GLenum::GL_TESS_GEN_MODE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING = GLenum::GL_TESS_GEN_SPACING;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING_EXT = GLenum::GL_TESS_GEN_SPACING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_SPACING_OES = GLenum::GL_TESS_GEN_SPACING_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER = GLenum::GL_TESS_GEN_VERTEX_ORDER;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER_EXT = GLenum::GL_TESS_GEN_VERTEX_ORDER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_VERTEX_ORDER_OES = GLenum::GL_TESS_GEN_VERTEX_ORDER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE = GLenum::GL_TESS_GEN_POINT_MODE;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE_EXT = GLenum::GL_TESS_GEN_POINT_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_GEN_POINT_MODE_OES = GLenum::GL_TESS_GEN_POINT_MODE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES = GLenum::GL_ISOLINES;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES_EXT = GLenum::GL_ISOLINES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ISOLINES_OES = GLenum::GL_ISOLINES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD = GLenum::GL_FRACTIONAL_ODD;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD_EXT = GLenum::GL_FRACTIONAL_ODD_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_ODD_OES = GLenum::GL_FRACTIONAL_ODD_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN = GLenum::GL_FRACTIONAL_EVEN;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN_EXT = GLenum::GL_FRACTIONAL_EVEN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRACTIONAL_EVEN_OES = GLenum::GL_FRACTIONAL_EVEN_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES = GLenum::GL_MAX_PATCH_VERTICES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES_EXT = GLenum::GL_MAX_PATCH_VERTICES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_PATCH_VERTICES_OES = GLenum::GL_MAX_PATCH_VERTICES_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL = GLenum::GL_MAX_TESS_GEN_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL_EXT = GLenum::GL_MAX_TESS_GEN_LEVEL_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_GEN_LEVEL_OES = GLenum::GL_MAX_TESS_GEN_LEVEL_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES = GLenum::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS = GLenum::GL_MAX_TESS_PATCH_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS_EXT = GLenum::GL_MAX_TESS_PATCH_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_PATCH_COMPONENTS_OES = GLenum::GL_MAX_TESS_PATCH_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER_EXT = GLenum::GL_TESS_EVALUATION_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_EVALUATION_SHADER_OES = GLenum::GL_TESS_EVALUATION_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER_EXT = GLenum::GL_TESS_CONTROL_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TESS_CONTROL_SHADER_OES = GLenum::GL_TESS_CONTROL_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES = GLenum::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_COMPONENT_NV = GLenum::GL_COVERAGE_COMPONENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_COMPONENT4_NV = GLenum::GL_COVERAGE_COMPONENT4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_ATTACHMENT_NV = GLenum::GL_COVERAGE_ATTACHMENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_BUFFERS_NV = GLenum::GL_COVERAGE_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_SAMPLES_NV = GLenum::GL_COVERAGE_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_ALL_FRAGMENTS_NV = GLenum::GL_COVERAGE_ALL_FRAGMENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_EDGE_FRAGMENTS_NV = GLenum::GL_COVERAGE_EDGE_FRAGMENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_AUTOMATIC_NV = GLenum::GL_COVERAGE_AUTOMATIC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INCLUSIVE_EXT = GLenum::GL_INCLUSIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSIVE_EXT = GLenum::GL_EXCLUSIVE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WINDOW_RECTANGLE_EXT = GLenum::GL_WINDOW_RECTANGLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WINDOW_RECTANGLE_MODE_EXT = GLenum::GL_WINDOW_RECTANGLE_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_WINDOW_RECTANGLES_EXT = GLenum::GL_MAX_WINDOW_RECTANGLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_WINDOW_RECTANGLES_EXT = GLenum::GL_NUM_WINDOW_RECTANGLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER_NV = GLenum::GL_COPY_READ_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_READ_BUFFER_BINDING = GLenum::GL_COPY_READ_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER_NV = GLenum::GL_COPY_WRITE_BUFFER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COPY_WRITE_BUFFER_BINDING = GLenum::GL_COPY_WRITE_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_IMAGE_UNITS = GLenum::GL_MAX_IMAGE_UNITS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES = GLenum::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_NAME = GLenum::GL_IMAGE_BINDING_NAME;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LEVEL = GLenum::GL_IMAGE_BINDING_LEVEL;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LAYERED = GLenum::GL_IMAGE_BINDING_LAYERED;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_LAYER = GLenum::GL_IMAGE_BINDING_LAYER;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_ACCESS = GLenum::GL_IMAGE_BINDING_ACCESS;
GLESBINDING_CONSTEXPR static const GLenum GL_DRAW_INDIRECT_BUFFER_BINDING = GLenum::GL_DRAW_INDIRECT_BUFFER_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_BINDING_BUFFER = GLenum::GL_VERTEX_BINDING_BUFFER;
GLESBINDING_CONSTEXPR static const GLenum GL_MALI_PROGRAM_BINARY_ARM = GLenum::GL_MALI_PROGRAM_BINARY_ARM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT = GLenum::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADER_PIXEL_LOCAL_STORAGE_EXT = GLenum::GL_SHADER_PIXEL_LOCAL_STORAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT = GLenum::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_ASTC_DECODE_PRECISION_EXT = GLenum::GL_TEXTURE_ASTC_DECODE_PRECISION_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNED_NORMALIZED = GLenum::GL_SIGNED_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFMON_GLOBAL_MODE_QCOM = GLenum::GL_PERFMON_GLOBAL_MODE_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_SUBSAMPLED_IMAGE_UNITS_QCOM = GLenum::GL_MAX_SHADER_SUBSAMPLED_IMAGE_UNITS_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_CPU_OPTIMIZED_QCOM = GLenum::GL_CPU_OPTIMIZED_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_GPU_OPTIMIZED_QCOM = GLenum::GL_GPU_OPTIMIZED_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM = GLenum::GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM;
GLESBINDING_CONSTEXPR static const GLenum GL_GPU_DISJOINT_EXT = GLenum::GL_GPU_DISJOINT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT = GLenum::GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_NV = GLenum::GL_INT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC2_NV = GLenum::GL_INT8_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC3_NV = GLenum::GL_INT8_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT8_VEC4_NV = GLenum::GL_INT8_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_NV = GLenum::GL_INT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC2_NV = GLenum::GL_INT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC3_NV = GLenum::GL_INT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT16_VEC4_NV = GLenum::GL_INT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC2_NV = GLenum::GL_INT64_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC3_NV = GLenum::GL_INT64_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INT64_VEC4_NV = GLenum::GL_INT64_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_NV = GLenum::GL_UNSIGNED_INT8_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC2_NV = GLenum::GL_UNSIGNED_INT8_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC3_NV = GLenum::GL_UNSIGNED_INT8_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT8_VEC4_NV = GLenum::GL_UNSIGNED_INT8_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_NV = GLenum::GL_UNSIGNED_INT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC2_NV = GLenum::GL_UNSIGNED_INT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC3_NV = GLenum::GL_UNSIGNED_INT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT16_VEC4_NV = GLenum::GL_UNSIGNED_INT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC2_NV = GLenum::GL_UNSIGNED_INT64_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC3_NV = GLenum::GL_UNSIGNED_INT64_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_VEC4_NV = GLenum::GL_UNSIGNED_INT64_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_NV = GLenum::GL_FLOAT16_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC2_NV = GLenum::GL_FLOAT16_VEC2_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC3_NV = GLenum::GL_FLOAT16_VEC3_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT16_VEC4_NV = GLenum::GL_FLOAT16_VEC4_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES = GLenum::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_FACTOR_MIN_AMD = GLenum::GL_FACTOR_MIN_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_FACTOR_MAX_AMD = GLenum::GL_FACTOR_MAX_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER_EXT = GLenum::GL_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BUFFER_OES = GLenum::GL_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER_EXT = GLenum::GL_INT_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_BUFFER_OES = GLenum::GL_INT_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_INT_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER_EXT = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_BUFFER_OES = GLenum::GL_UNSIGNED_INT_IMAGE_BUFFER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES = GLenum::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_BINDING_FORMAT = GLenum::GL_IMAGE_BINDING_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_SQUARE_NV = GLenum::GL_SQUARE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ROUND_NV = GLenum::GL_ROUND_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TRIANGULAR_NV = GLenum::GL_TRIANGULAR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BEVEL_NV = GLenum::GL_BEVEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MITER_REVERT_NV = GLenum::GL_MITER_REVERT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MITER_TRUNCATE_NV = GLenum::GL_MITER_TRUNCATE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_ERROR_POSITION_NV = GLenum::GL_PATH_ERROR_POSITION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_FOG_GEN_MODE_NV = GLenum::GL_PATH_FOG_GEN_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_MODE_NV = GLenum::GL_PATH_GEN_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_COEFF_NV = GLenum::GL_PATH_GEN_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_COLOR_FORMAT_NV = GLenum::GL_PATH_GEN_COLOR_FORMAT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_GEN_COMPONENTS_NV = GLenum::GL_PATH_GEN_COMPONENTS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_RESETS_NV = GLenum::GL_MOVE_TO_RESETS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MOVE_TO_CONTINUES_NV = GLenum::GL_MOVE_TO_CONTINUES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_FUNC_NV = GLenum::GL_PATH_STENCIL_FUNC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_REF_NV = GLenum::GL_PATH_STENCIL_REF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_VALUE_MASK_NV = GLenum::GL_PATH_STENCIL_VALUE_MASK_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV = GLenum::GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV = GLenum::GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PATH_COVER_DEPTH_FUNC_NV = GLenum::GL_PATH_COVER_DEPTH_FUNC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS = GLenum::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_IMAGE_UNIFORMS = GLenum::GL_MAX_VERTEX_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES = GLenum::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_IMAGE_UNIFORMS = GLenum::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_IMAGE_UNIFORMS = GLenum::GL_MAX_COMBINED_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES = GLenum::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_STORAGE_BLOCK_SIZE = GLenum::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_COLOR_ATTACHMENT_EXT = GLenum::GL_COLOR_ATTACHMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIVIEW_EXT = GLenum::GL_MULTIVIEW_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MULTIVIEW_BUFFERS_EXT = GLenum::GL_MAX_MULTIVIEW_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS = GLenum::GL_CONTEXT_ROBUST_ACCESS;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS_EXT = GLenum::GL_CONTEXT_ROBUST_ACCESS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTEXT_ROBUST_ACCESS_KHR = GLenum::GL_CONTEXT_ROBUST_ACCESS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SAMPLES = GLenum::GL_TEXTURE_SAMPLES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_FIXED_SAMPLE_LOCATIONS = GLenum::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SERVER_WAIT_TIMEOUT_APPLE = GLenum::GL_MAX_SERVER_WAIT_TIMEOUT_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_OBJECT_TYPE_APPLE = GLenum::GL_OBJECT_TYPE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_CONDITION_APPLE = GLenum::GL_SYNC_CONDITION_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_STATUS_APPLE = GLenum::GL_SYNC_STATUS_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FLAGS_APPLE = GLenum::GL_SYNC_FLAGS_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FENCE = GLenum::GL_SYNC_FENCE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_FENCE_APPLE = GLenum::GL_SYNC_FENCE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE = GLenum::GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNALED = GLenum::GL_UNSIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNALED_APPLE = GLenum::GL_UNSIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNALED = GLenum::GL_SIGNALED;
GLESBINDING_CONSTEXPR static const GLenum GL_SIGNALED_APPLE = GLenum::GL_SIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_ALREADY_SIGNALED_APPLE = GLenum::GL_ALREADY_SIGNALED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_TIMEOUT_EXPIRED_APPLE = GLenum::GL_TIMEOUT_EXPIRED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_CONDITION_SATISFIED_APPLE = GLenum::GL_CONDITION_SATISFIED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_WAIT_FAILED_APPLE = GLenum::GL_WAIT_FAILED_APPLE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES = GLenum::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_IMMUTABLE_FORMAT_EXT = GLenum::GL_TEXTURE_IMMUTABLE_FORMAT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SGX_PROGRAM_BINARY_IMG = GLenum::GL_SGX_PROGRAM_BINARY_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SAMPLES_IMG = GLenum::GL_MAX_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SAMPLES_IMG = GLenum::GL_TEXTURE_SAMPLES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG = GLenum::GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_IMG = GLenum::GL_CUBIC_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_MIPMAP_NEAREST_IMG = GLenum::GL_CUBIC_MIPMAP_NEAREST_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_CUBIC_MIPMAP_LINEAR_IMG = GLenum::GL_CUBIC_MIPMAP_LINEAR_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG = GLenum::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_DOWNSAMPLE_SCALES_IMG = GLenum::GL_NUM_DOWNSAMPLE_SCALES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_DOWNSAMPLE_SCALES_IMG = GLenum::GL_DOWNSAMPLE_SCALES_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_MESSAGE_LENGTH = GLenum::GL_MAX_DEBUG_MESSAGE_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_MESSAGE_LENGTH_KHR = GLenum::GL_MAX_DEBUG_MESSAGE_LENGTH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_LOGGED_MESSAGES = GLenum::GL_MAX_DEBUG_LOGGED_MESSAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEBUG_LOGGED_MESSAGES_KHR = GLenum::GL_MAX_DEBUG_LOGGED_MESSAGES_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_LOGGED_MESSAGES = GLenum::GL_DEBUG_LOGGED_MESSAGES;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_LOGGED_MESSAGES_KHR = GLenum::GL_DEBUG_LOGGED_MESSAGES_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_HIGH_KHR = GLenum::GL_DEBUG_SEVERITY_HIGH_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_MEDIUM_KHR = GLenum::GL_DEBUG_SEVERITY_MEDIUM_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_SEVERITY_LOW_KHR = GLenum::GL_DEBUG_SEVERITY_LOW_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_BUFFER_OBJECT_EXT = GLenum::GL_BUFFER_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_QUERY_OBJECT_EXT = GLenum::GL_QUERY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ARRAY_OBJECT_EXT = GLenum::GL_VERTEX_ARRAY_OBJECT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_X_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_X_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_Y_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_Y_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_Z_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_Z_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_TEXTURE_SIZE_EXT = GLenum::GL_MAX_SPARSE_TEXTURE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT = GLenum::GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT = GLenum::GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET = GLenum::GL_TEXTURE_BUFFER_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_EXT = GLenum::GL_TEXTURE_BUFFER_OFFSET_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_OES = GLenum::GL_TEXTURE_BUFFER_OFFSET_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE = GLenum::GL_TEXTURE_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE_EXT = GLenum::GL_TEXTURE_BUFFER_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_SIZE_OES = GLenum::GL_TEXTURE_BUFFER_SIZE_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES = GLenum::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_SPARSE_EXT = GLenum::GL_TEXTURE_SPARSE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_VIRTUAL_PAGE_SIZE_INDEX_EXT = GLenum::GL_VIRTUAL_PAGE_SIZE_INDEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_VIRTUAL_PAGE_SIZES_EXT = GLenum::GL_NUM_VIRTUAL_PAGE_SIZES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT = GLenum::GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SPARSE_LEVELS_EXT = GLenum::GL_NUM_SPARSE_LEVELS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMPILER_THREADS_KHR = GLenum::GL_MAX_SHADER_COMPILER_THREADS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPLETION_STATUS_KHR = GLenum::GL_COMPLETION_STATUS_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD = GLenum::GL_MAX_COLOR_FRAMEBUFFER_SAMPLES_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD = GLenum::GL_MAX_COLOR_FRAMEBUFFER_STORAGE_SAMPLES_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD = GLenum::GL_MAX_DEPTH_STENCIL_FRAMEBUFFER_SAMPLES_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD = GLenum::GL_NUM_SUPPORTED_MULTISAMPLE_MODES_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_SUPPORTED_MULTISAMPLE_MODES_AMD = GLenum::GL_SUPPORTED_MULTISAMPLE_MODES_AMD;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMPUTE_IMAGE_UNIFORMS = GLenum::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_SMAPHS30_PROGRAM_BINARY_DMP = GLenum::GL_SMAPHS30_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_SMAPHS_PROGRAM_BINARY_DMP = GLenum::GL_SMAPHS_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_DMP_PROGRAM_BINARY_DMP = GLenum::GL_DMP_PROGRAM_BINARY_DMP;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_PREMULTIPLIED_SRC_NV = GLenum::GL_BLEND_PREMULTIPLIED_SRC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_OVERLAP_NV = GLenum::GL_BLEND_OVERLAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNCORRELATED_NV = GLenum::GL_UNCORRELATED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DISJOINT_NV = GLenum::GL_DISJOINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONJOINT_NV = GLenum::GL_CONJOINT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_ADVANCED_COHERENT_KHR = GLenum::GL_BLEND_ADVANCED_COHERENT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_BLEND_ADVANCED_COHERENT_NV = GLenum::GL_BLEND_ADVANCED_COHERENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_NV = GLenum::GL_SRC_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_NV = GLenum::GL_DST_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_OVER_NV = GLenum::GL_SRC_OVER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_OVER_NV = GLenum::GL_DST_OVER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_IN_NV = GLenum::GL_SRC_IN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_IN_NV = GLenum::GL_DST_IN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_OUT_NV = GLenum::GL_SRC_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_OUT_NV = GLenum::GL_DST_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SRC_ATOP_NV = GLenum::GL_SRC_ATOP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DST_ATOP_NV = GLenum::GL_DST_ATOP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_NV = GLenum::GL_PLUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_DARKER_NV = GLenum::GL_PLUS_DARKER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY = GLenum::GL_MULTIPLY;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY_KHR = GLenum::GL_MULTIPLY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTIPLY_NV = GLenum::GL_MULTIPLY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN = GLenum::GL_SCREEN;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN_KHR = GLenum::GL_SCREEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SCREEN_NV = GLenum::GL_SCREEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY = GLenum::GL_OVERLAY;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY_KHR = GLenum::GL_OVERLAY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_OVERLAY_NV = GLenum::GL_OVERLAY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN = GLenum::GL_DARKEN;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN_KHR = GLenum::GL_DARKEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DARKEN_NV = GLenum::GL_DARKEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN = GLenum::GL_LIGHTEN;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN_KHR = GLenum::GL_LIGHTEN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_LIGHTEN_NV = GLenum::GL_LIGHTEN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE = GLenum::GL_COLORDODGE;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE_KHR = GLenum::GL_COLORDODGE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORDODGE_NV = GLenum::GL_COLORDODGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN = GLenum::GL_COLORBURN;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN_KHR = GLenum::GL_COLORBURN_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_COLORBURN_NV = GLenum::GL_COLORBURN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT = GLenum::GL_HARDLIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT_KHR = GLenum::GL_HARDLIGHT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDLIGHT_NV = GLenum::GL_HARDLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT = GLenum::GL_SOFTLIGHT;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT_KHR = GLenum::GL_SOFTLIGHT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SOFTLIGHT_NV = GLenum::GL_SOFTLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE = GLenum::GL_DIFFERENCE;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE_KHR = GLenum::GL_DIFFERENCE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_DIFFERENCE_NV = GLenum::GL_DIFFERENCE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MINUS_NV = GLenum::GL_MINUS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION = GLenum::GL_EXCLUSION;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION_KHR = GLenum::GL_EXCLUSION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_EXCLUSION_NV = GLenum::GL_EXCLUSION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONTRAST_NV = GLenum::GL_CONTRAST_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INVERT_RGB_NV = GLenum::GL_INVERT_RGB_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARDODGE_NV = GLenum::GL_LINEARDODGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARBURN_NV = GLenum::GL_LINEARBURN_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIVIDLIGHT_NV = GLenum::GL_VIVIDLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEARLIGHT_NV = GLenum::GL_LINEARLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PINLIGHT_NV = GLenum::GL_PINLIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HARDMIX_NV = GLenum::GL_HARDMIX_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE = GLenum::GL_HSL_HUE;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE_KHR = GLenum::GL_HSL_HUE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_HUE_NV = GLenum::GL_HSL_HUE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION = GLenum::GL_HSL_SATURATION;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION_KHR = GLenum::GL_HSL_SATURATION_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_SATURATION_NV = GLenum::GL_HSL_SATURATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR = GLenum::GL_HSL_COLOR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR_KHR = GLenum::GL_HSL_COLOR_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_COLOR_NV = GLenum::GL_HSL_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY = GLenum::GL_HSL_LUMINOSITY;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY_KHR = GLenum::GL_HSL_LUMINOSITY_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_HSL_LUMINOSITY_NV = GLenum::GL_HSL_LUMINOSITY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_CLAMPED_NV = GLenum::GL_PLUS_CLAMPED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PLUS_CLAMPED_ALPHA_NV = GLenum::GL_PLUS_CLAMPED_ALPHA_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MINUS_CLAMPED_NV = GLenum::GL_MINUS_CLAMPED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_INVERT_OVG_NV = GLenum::GL_INVERT_OVG_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX = GLenum::GL_PRIMITIVE_BOUNDING_BOX;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX_EXT = GLenum::GL_PRIMITIVE_BOUNDING_BOX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_PRIMITIVE_BOUNDING_BOX_OES = GLenum::GL_PRIMITIVE_BOUNDING_BOX_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_START = GLenum::GL_ATOMIC_COUNTER_BUFFER_START;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_ATOMIC_COUNTER_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS = GLenum::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES = GLenum::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_ATOMIC_COUNTER = GLenum::GL_UNSIGNED_INT_ATOMIC_COUNTER;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS = GLenum::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_COVERAGE_TO_COLOR_NV = GLenum::GL_FRAGMENT_COVERAGE_TO_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_COVERAGE_COLOR_NV = GLenum::GL_FRAGMENT_COVERAGE_COLOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV = GLenum::GL_MESH_OUTPUT_PER_VERTEX_GRANULARITY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DEBUG_OUTPUT_KHR = GLenum::GL_DEBUG_OUTPUT_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH_EXT = GLenum::GL_IS_PER_PATCH_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_IS_PER_PATCH_OES = GLenum::GL_IS_PER_PATCH_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES = GLenum::GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES = GLenum::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER_EXT = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_GEOMETRY_SHADER_OES = GLenum::GL_REFERENCED_BY_GEOMETRY_SHADER_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_LOCATION_INDEX_EXT = GLenum::GL_LOCATION_INDEX_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_DEFAULT_LAYERS_OES = GLenum::GL_FRAMEBUFFER_DEFAULT_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS_EXT = GLenum::GL_MAX_FRAMEBUFFER_LAYERS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_FRAMEBUFFER_LAYERS_OES = GLenum::GL_MAX_FRAMEBUFFER_LAYERS_OES;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_MULTISAMPLE_EXT = GLenum::GL_RASTER_MULTISAMPLE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_SAMPLES_EXT = GLenum::GL_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_RASTER_SAMPLES_EXT = GLenum::GL_MAX_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT = GLenum::GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT = GLenum::GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_EFFECTIVE_RASTER_SAMPLES_EXT = GLenum::GL_EFFECTIVE_RASTER_SAMPLES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_DEPTH_SAMPLES_NV = GLenum::GL_DEPTH_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_STENCIL_SAMPLES_NV = GLenum::GL_STENCIL_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV = GLenum::GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV = GLenum::GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_TABLE_NV = GLenum::GL_COVERAGE_MODULATION_TABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_NV = GLenum::GL_COVERAGE_MODULATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_COVERAGE_MODULATION_TABLE_SIZE_NV = GLenum::GL_COVERAGE_MODULATION_TABLE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FILL_RECTANGLE_NV = GLenum::GL_FILL_RECTANGLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV = GLenum::GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV = GLenum::GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV = GLenum::GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV = GLenum::GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAMMABLE_SAMPLE_LOCATION_NV = GLenum::GL_PROGRAMMABLE_SAMPLE_LOCATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV = GLenum::GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV = GLenum::GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTERIZATION_NV = GLenum::GL_CONSERVATIVE_RASTERIZATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV = GLenum::GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV = GLenum::GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV = GLenum::GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_X_NV = GLenum::GL_VIEWPORT_SWIZZLE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_Y_NV = GLenum::GL_VIEWPORT_SWIZZLE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_Z_NV = GLenum::GL_VIEWPORT_SWIZZLE_Z_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_SWIZZLE_W_NV = GLenum::GL_VIEWPORT_SWIZZLE_W_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_ORIGIN_EXT = GLenum::GL_CLIP_ORIGIN_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_CLIP_DEPTH_MODE_EXT = GLenum::GL_CLIP_DEPTH_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_NEGATIVE_ONE_TO_ONE_EXT = GLenum::GL_NEGATIVE_ONE_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_ZERO_TO_ONE_EXT = GLenum::GL_ZERO_TO_ONE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_REDUCTION_MODE_EXT = GLenum::GL_TEXTURE_REDUCTION_MODE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_WEIGHTED_AVERAGE_EXT = GLenum::GL_WEIGHTED_AVERAGE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_GLYPHS_AVAILABLE_NV = GLenum::GL_FONT_GLYPHS_AVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_TARGET_UNAVAILABLE_NV = GLenum::GL_FONT_TARGET_UNAVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_UNAVAILABLE_NV = GLenum::GL_FONT_UNAVAILABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FONT_UNINTELLIGIBLE_NV = GLenum::GL_FONT_UNINTELLIGIBLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_STANDARD_FONT_FORMAT_NV = GLenum::GL_STANDARD_FONT_FORMAT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAGMENT_INPUT_NV = GLenum::GL_FRAGMENT_INPUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLES_NV = GLenum::GL_MULTISAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUPERSAMPLE_SCALE_X_NV = GLenum::GL_SUPERSAMPLE_SCALE_X_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SUPERSAMPLE_SCALE_Y_NV = GLenum::GL_SUPERSAMPLE_SCALE_Y_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONFORMANT_NV = GLenum::GL_CONFORMANT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV = GLenum::GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_REPRESENTATIVE_FRAGMENT_TEST_NV = GLenum::GL_REPRESENTATIVE_FRAGMENT_TEST_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_LINE_WIDTH_RANGE = GLenum::GL_MULTISAMPLE_LINE_WIDTH_RANGE;
GLESBINDING_CONSTEXPR static const GLenum GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY = GLenum::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY;
GLESBINDING_CONSTEXPR static const GLenum GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE = GLenum::GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_BGRA8_EXT = GLenum::GL_BGRA8_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TEXTURE_USAGE_ANGLE = GLenum::GL_TEXTURE_USAGE_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_ATTACHMENT_ANGLE = GLenum::GL_FRAMEBUFFER_ATTACHMENT_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PACK_REVERSE_ROW_ORDER_ANGLE = GLenum::GL_PACK_REVERSE_ROW_ORDER_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_PROGRAM_BINARY_ANGLE = GLenum::GL_PROGRAM_BINARY_ANGLE;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG = GLenum::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_EVENT_INTEL = GLenum::GL_PERFQUERY_COUNTER_EVENT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL = GLenum::GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL = GLenum::GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL = GLenum::GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_RAW_INTEL = GLenum::GL_PERFQUERY_COUNTER_RAW_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL = GLenum::GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL = GLenum::GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL = GLenum::GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL = GLenum::GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_SIZE_KHR = GLenum::GL_SUBGROUP_SIZE_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_SUPPORTED_STAGES_KHR = GLenum::GL_SUBGROUP_SUPPORTED_STAGES_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_SUPPORTED_FEATURES_KHR = GLenum::GL_SUBGROUP_SUPPORTED_FEATURES_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_SUBGROUP_QUAD_ALL_STAGES_KHR = GLenum::GL_SUBGROUP_QUAD_ALL_STAGES_KHR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV = GLenum::GL_MAX_MESH_TOTAL_MEMORY_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV = GLenum::GL_MAX_TASK_TOTAL_MEMORY_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_OUTPUT_VERTICES_NV = GLenum::GL_MAX_MESH_OUTPUT_VERTICES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_OUTPUT_PRIMITIVES_NV = GLenum::GL_MAX_MESH_OUTPUT_PRIMITIVES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_OUTPUT_COUNT_NV = GLenum::GL_MAX_TASK_OUTPUT_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_WORK_GROUP_SIZE_NV = GLenum::GL_MAX_MESH_WORK_GROUP_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_WORK_GROUP_SIZE_NV = GLenum::GL_MAX_TASK_WORK_GROUP_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DRAW_MESH_TASKS_COUNT_NV = GLenum::GL_MAX_DRAW_MESH_TASKS_COUNT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_WORK_GROUP_SIZE_NV = GLenum::GL_MESH_WORK_GROUP_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TASK_WORK_GROUP_SIZE_NV = GLenum::GL_TASK_WORK_GROUP_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV = GLenum::GL_MESH_OUTPUT_PER_PRIMITIVE_GRANULARITY_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV = GLenum::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_TEST_EXCLUSIVE_NV = GLenum::GL_SCISSOR_TEST_EXCLUSIVE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SCISSOR_BOX_EXCLUSIVE_NV = GLenum::GL_SCISSOR_BOX_EXCLUSIVE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_VIEWS_NV = GLenum::GL_MAX_MESH_VIEWS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_SHADER_NV = GLenum::GL_MESH_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TASK_SHADER_NV = GLenum::GL_TASK_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_BINDING_NV = GLenum::GL_SHADING_RATE_IMAGE_BINDING_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV = GLenum::GL_SHADING_RATE_IMAGE_TEXEL_WIDTH_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV = GLenum::GL_SHADING_RATE_IMAGE_TEXEL_HEIGHT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV = GLenum::GL_SHADING_RATE_IMAGE_PALETTE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_COARSE_FRAGMENT_SAMPLES_NV = GLenum::GL_MAX_COARSE_FRAGMENT_SAMPLES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_IMAGE_NV = GLenum::GL_SHADING_RATE_IMAGE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_NO_INVOCATIONS_NV = GLenum::GL_SHADING_RATE_NO_INVOCATIONS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_PIXEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_1X2_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_2X1_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_2X2_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_2X4_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_4X2_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV = GLenum::GL_SHADING_RATE_1_INVOCATION_PER_4X4_PIXELS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV = GLenum::GL_SHADING_RATE_2_INVOCATIONS_PER_PIXEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV = GLenum::GL_SHADING_RATE_4_INVOCATIONS_PER_PIXEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV = GLenum::GL_SHADING_RATE_8_INVOCATIONS_PER_PIXEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV = GLenum::GL_SHADING_RATE_16_INVOCATIONS_PER_PIXEL_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_VERTICES_OUT_NV = GLenum::GL_MESH_VERTICES_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_PRIMITIVES_OUT_NV = GLenum::GL_MESH_PRIMITIVES_OUT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_OUTPUT_TYPE_NV = GLenum::GL_MESH_OUTPUT_TYPE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_SUBROUTINE_NV = GLenum::GL_MESH_SUBROUTINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TASK_SUBROUTINE_NV = GLenum::GL_TASK_SUBROUTINE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MESH_SUBROUTINE_UNIFORM_NV = GLenum::GL_MESH_SUBROUTINE_UNIFORM_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_TASK_SUBROUTINE_UNIFORM_NV = GLenum::GL_TASK_SUBROUTINE_UNIFORM_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_NUM_TILING_TYPES_EXT = GLenum::GL_NUM_TILING_TYPES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_TILING_TYPES_EXT = GLenum::GL_TILING_TYPES_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_OPTIMAL_TILING_EXT = GLenum::GL_OPTIMAL_TILING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_LINEAR_TILING_EXT = GLenum::GL_LINEAR_TILING_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_MESH_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_TASK_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_MESH_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV = GLenum::GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TASK_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_MESH_SHADER_NV = GLenum::GL_REFERENCED_BY_MESH_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_REFERENCED_BY_TASK_SHADER_NV = GLenum::GL_REFERENCED_BY_TASK_SHADER_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV = GLenum::GL_MAX_MESH_WORK_GROUP_INVOCATIONS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV = GLenum::GL_MAX_TASK_WORK_GROUP_INVOCATIONS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ATTACHED_MEMORY_OBJECT_NV = GLenum::GL_ATTACHED_MEMORY_OBJECT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_ATTACHED_MEMORY_OFFSET_NV = GLenum::GL_ATTACHED_MEMORY_OFFSET_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MEMORY_ATTACHABLE_ALIGNMENT_NV = GLenum::GL_MEMORY_ATTACHABLE_ALIGNMENT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MEMORY_ATTACHABLE_SIZE_NV = GLenum::GL_MEMORY_ATTACHABLE_SIZE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MEMORY_ATTACHABLE_NV = GLenum::GL_MEMORY_ATTACHABLE_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DETACHED_MEMORY_INCARNATION_NV = GLenum::GL_DETACHED_MEMORY_INCARNATION_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DETACHED_TEXTURES_NV = GLenum::GL_DETACHED_TEXTURES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_DETACHED_BUFFERS_NV = GLenum::GL_DETACHED_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DETACHED_TEXTURES_NV = GLenum::GL_MAX_DETACHED_TEXTURES_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_DETACHED_BUFFERS_NV = GLenum::GL_MAX_DETACHED_BUFFERS_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV = GLenum::GL_SHADING_RATE_SAMPLE_ORDER_DEFAULT_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV = GLenum::GL_SHADING_RATE_SAMPLE_ORDER_PIXEL_MAJOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV = GLenum::GL_SHADING_RATE_SAMPLE_ORDER_SAMPLE_MAJOR_NV;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_VIEWS_OVR = GLenum::GL_MAX_VIEWS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR = GLenum::GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT = GLenum::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT = GLenum::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT;
GLESBINDING_CONSTEXPR static const GLenum GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT = GLenum::GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT;

// UniformBlockPName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_BINDING = GLenum::GL_UNIFORM_BLOCK_BINDING;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_DATA_SIZE = GLenum::GL_UNIFORM_BLOCK_DATA_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_NAME_LENGTH = GLenum::GL_UNIFORM_BLOCK_NAME_LENGTH;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES = GLenum::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER = GLenum::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

// UniformPName

GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_TYPE = GLenum::GL_UNIFORM_TYPE;
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_SIZE = GLenum::GL_UNIFORM_SIZE; // reuse SubroutineParameterName
// GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_NAME_LENGTH = GLenum::GL_UNIFORM_NAME_LENGTH; // reuse SubroutineParameterName
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_BLOCK_INDEX = GLenum::GL_UNIFORM_BLOCK_INDEX;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_OFFSET = GLenum::GL_UNIFORM_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_ARRAY_STRIDE = GLenum::GL_UNIFORM_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_MATRIX_STRIDE = GLenum::GL_UNIFORM_MATRIX_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_UNIFORM_IS_ROW_MAJOR = GLenum::GL_UNIFORM_IS_ROW_MAJOR;

// UniformType

// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC2 = GLenum::GL_FLOAT_VEC2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC3 = GLenum::GL_FLOAT_VEC3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_VEC4 = GLenum::GL_FLOAT_VEC4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC2 = GLenum::GL_INT_VEC2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC3 = GLenum::GL_INT_VEC3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_VEC4 = GLenum::GL_INT_VEC4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_BOOL = GLenum::GL_BOOL; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC2 = GLenum::GL_BOOL_VEC2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC3 = GLenum::GL_BOOL_VEC3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_BOOL_VEC4 = GLenum::GL_BOOL_VEC4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2 = GLenum::GL_FLOAT_MAT2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3 = GLenum::GL_FLOAT_MAT3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4 = GLenum::GL_FLOAT_MAT4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D = GLenum::GL_SAMPLER_2D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_3D = GLenum::GL_SAMPLER_3D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE = GLenum::GL_SAMPLER_CUBE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_SHADOW = GLenum::GL_SAMPLER_2D_SHADOW; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x3 = GLenum::GL_FLOAT_MAT2x3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT2x4 = GLenum::GL_FLOAT_MAT2x4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x2 = GLenum::GL_FLOAT_MAT3x2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT3x4 = GLenum::GL_FLOAT_MAT3x4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x2 = GLenum::GL_FLOAT_MAT4x2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT_MAT4x3 = GLenum::GL_FLOAT_MAT4x3; // reuse AttributeType
GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY = GLenum::GL_SAMPLER_2D_ARRAY;
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_BUFFER = GLenum::GL_SAMPLER_BUFFER; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_ARRAY_SHADOW = GLenum::GL_SAMPLER_2D_ARRAY_SHADOW; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_SHADOW = GLenum::GL_SAMPLER_CUBE_SHADOW; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC2 = GLenum::GL_UNSIGNED_INT_VEC2; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC3 = GLenum::GL_UNSIGNED_INT_VEC3; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_VEC4 = GLenum::GL_UNSIGNED_INT_VEC4; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D = GLenum::GL_INT_SAMPLER_2D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_3D = GLenum::GL_INT_SAMPLER_3D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE = GLenum::GL_INT_SAMPLER_CUBE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_ARRAY = GLenum::GL_INT_SAMPLER_2D_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_BUFFER = GLenum::GL_INT_SAMPLER_BUFFER; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D = GLenum::GL_UNSIGNED_INT_SAMPLER_2D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_3D = GLenum::GL_UNSIGNED_INT_SAMPLER_3D; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_BUFFER = GLenum::GL_UNSIGNED_INT_SAMPLER_BUFFER; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW = GLenum::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_INT_SAMPLER_CUBE_MAP_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE = GLenum::GL_SAMPLER_2D_MULTISAMPLE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY = GLenum::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY; // reuse AttributeType

// VertexArrayPName

GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;

// VertexAttribEnum

// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribIType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType

// VertexAttribPointerPropertyARB

GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_POINTER = GLenum::GL_VERTEX_ATTRIB_ARRAY_POINTER;

// VertexAttribPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT; // reuse PixelType
GLESBINDING_CONSTEXPR static const GLenum GL_FIXED = GLenum::GL_FIXED;
// GLESBINDING_CONSTEXPR static const GLenum GL_INT64_NV = GLenum::GL_INT64_NV; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT64_NV = GLenum::GL_UNSIGNED_INT64_NV; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV_EXT = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV_EXT; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse PixelType
GLESBINDING_CONSTEXPR static const GLenum GL_INT_2_10_10_10_REV = GLenum::GL_INT_2_10_10_10_REV;

// VertexAttribPropertyARB

GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_BINDING = GLenum::GL_VERTEX_ATTRIB_BINDING;
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_RELATIVE_OFFSET = GLenum::GL_VERTEX_ATTRIB_RELATIVE_OFFSET; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_ENABLED = GLenum::GL_VERTEX_ATTRIB_ARRAY_ENABLED; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_SIZE = GLenum::GL_VERTEX_ATTRIB_ARRAY_SIZE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_STRIDE = GLenum::GL_VERTEX_ATTRIB_ARRAY_STRIDE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_TYPE = GLenum::GL_VERTEX_ATTRIB_ARRAY_TYPE; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_CURRENT_VERTEX_ATTRIB = GLenum::GL_CURRENT_VERTEX_ATTRIB; // reuse VertexAttribEnum
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = GLenum::GL_VERTEX_ATTRIB_ARRAY_NORMALIZED; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = GLenum::GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; // reuse VertexAttribEnum
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_INTEGER = GLenum::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// GLESBINDING_CONSTEXPR static const GLenum GL_VERTEX_ATTRIB_ARRAY_DIVISOR = GLenum::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribType

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_HALF_FLOAT = GLenum::GL_HALF_FLOAT; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_FIXED = GLenum::GL_FIXED; // reuse VertexAttribPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_2_10_10_10_REV_EXT = GLenum::GL_UNSIGNED_INT_2_10_10_10_REV_EXT; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT_10F_11F_11F_REV = GLenum::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse PixelType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT_2_10_10_10_REV = GLenum::GL_INT_2_10_10_10_REV; // reuse VertexAttribPointerType

// VertexBufferObjectUsage

// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_DRAW = GLenum::GL_STREAM_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_READ = GLenum::GL_STREAM_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STREAM_COPY = GLenum::GL_STREAM_COPY; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_READ = GLenum::GL_STATIC_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_STATIC_COPY = GLenum::GL_STATIC_COPY; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_DRAW = GLenum::GL_DYNAMIC_DRAW; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_READ = GLenum::GL_DYNAMIC_READ; // reuse BufferUsageARB
// GLESBINDING_CONSTEXPR static const GLenum GL_DYNAMIC_COPY = GLenum::GL_DYNAMIC_COPY; // reuse BufferUsageARB

// VertexPointerType

// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// VertexProvokingMode

GLESBINDING_CONSTEXPR static const GLenum GL_FIRST_VERTEX_CONVENTION = GLenum::GL_FIRST_VERTEX_CONVENTION;
GLESBINDING_CONSTEXPR static const GLenum GL_LAST_VERTEX_CONVENTION = GLenum::GL_LAST_VERTEX_CONVENTION;

// VertexWeightPointerTypeEXT

// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType

// WeightPointerTypeARB

// GLESBINDING_CONSTEXPR static const GLenum GL_BYTE = GLenum::GL_BYTE; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_SHORT = GLenum::GL_SHORT; // reuse BinormalPointerTypeEXT
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_SHORT = GLenum::GL_UNSIGNED_SHORT; // reuse ColorPointerType
// GLESBINDING_CONSTEXPR static const GLenum GL_INT = GLenum::GL_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_UNSIGNED_INT = GLenum::GL_UNSIGNED_INT; // reuse AttributeType
// GLESBINDING_CONSTEXPR static const GLenum GL_FLOAT = GLenum::GL_FLOAT; // reuse AttributeType



} // namespace gles