
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/gles/enum.h>


namespace gles20ext
{


// import enums to namespace


// AtomicCounterBufferPName

using gles::GL_ATOMIC_COUNTER_BUFFER_BINDING;

// AttributeType

using gles::GL_FLOAT_VEC2_ARB;
using gles::GL_FLOAT_VEC3_ARB;
using gles::GL_FLOAT_VEC4_ARB;
using gles::GL_INT_VEC2_ARB;
using gles::GL_INT_VEC3_ARB;
using gles::GL_INT_VEC4_ARB;
using gles::GL_BOOL_ARB;
using gles::GL_BOOL_VEC2_ARB;
using gles::GL_BOOL_VEC3_ARB;
using gles::GL_BOOL_VEC4_ARB;
using gles::GL_FLOAT_MAT2_ARB;
using gles::GL_FLOAT_MAT3_ARB;
using gles::GL_FLOAT_MAT4_ARB;
using gles::GL_SAMPLER_1D;
using gles::GL_SAMPLER_1D_ARB;
using gles::GL_SAMPLER_2D_ARB;
using gles::GL_SAMPLER_3D;
using gles::GL_SAMPLER_3D_ARB;
using gles::GL_SAMPLER_3D_OES;
using gles::GL_SAMPLER_CUBE_ARB;
using gles::GL_SAMPLER_1D_SHADOW;
using gles::GL_SAMPLER_1D_SHADOW_ARB;
using gles::GL_SAMPLER_2D_SHADOW;
using gles::GL_SAMPLER_2D_SHADOW_ARB;
using gles::GL_SAMPLER_2D_SHADOW_EXT;
using gles::GL_SAMPLER_2D_RECT;
using gles::GL_SAMPLER_2D_RECT_ARB;
using gles::GL_SAMPLER_2D_RECT_SHADOW;
using gles::GL_SAMPLER_2D_RECT_SHADOW_ARB;
using gles::GL_FLOAT_MAT2x3;
using gles::GL_FLOAT_MAT2x3_NV;
using gles::GL_FLOAT_MAT2x4;
using gles::GL_FLOAT_MAT2x4_NV;
using gles::GL_FLOAT_MAT3x2;
using gles::GL_FLOAT_MAT3x2_NV;
using gles::GL_FLOAT_MAT3x4;
using gles::GL_FLOAT_MAT3x4_NV;
using gles::GL_FLOAT_MAT4x2;
using gles::GL_FLOAT_MAT4x2_NV;
using gles::GL_FLOAT_MAT4x3;
using gles::GL_FLOAT_MAT4x3_NV;

// BindTransformFeedbackTarget

using gles::GL_TRANSFORM_FEEDBACK;

// BlendEquationModeEXT

using gles::GL_MIN_EXT;
using gles::GL_MAX_EXT;

// Buffer

using gles::GL_COLOR;
using gles::GL_DEPTH;
using gles::GL_STENCIL;

// BufferAccessARB

using gles::GL_READ_ONLY;
using gles::GL_WRITE_ONLY;
using gles::GL_READ_WRITE;

// BufferStorageTarget

using gles::GL_PIXEL_PACK_BUFFER;
using gles::GL_PIXEL_UNPACK_BUFFER;
using gles::GL_UNIFORM_BUFFER;
using gles::GL_TEXTURE_BUFFER;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER;
using gles::GL_COPY_READ_BUFFER;
using gles::GL_COPY_WRITE_BUFFER;
using gles::GL_DRAW_INDIRECT_BUFFER;
using gles::GL_SHADER_STORAGE_BUFFER;
using gles::GL_DISPATCH_INDIRECT_BUFFER;
using gles::GL_ATOMIC_COUNTER_BUFFER;

// BufferTargetARB

// using gles::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// BufferUsageARB

using gles::GL_STREAM_READ;
using gles::GL_STREAM_COPY;
using gles::GL_STATIC_READ;
using gles::GL_STATIC_COPY;
using gles::GL_DYNAMIC_READ;
using gles::GL_DYNAMIC_COPY;

// CheckFramebufferStatusTarget

using gles::GL_READ_FRAMEBUFFER;
using gles::GL_DRAW_FRAMEBUFFER;

// ColorBuffer

using gles::GL_COLOR_ATTACHMENT1;
using gles::GL_COLOR_ATTACHMENT2;
using gles::GL_COLOR_ATTACHMENT3;
using gles::GL_COLOR_ATTACHMENT4;
using gles::GL_COLOR_ATTACHMENT5;
using gles::GL_COLOR_ATTACHMENT6;
using gles::GL_COLOR_ATTACHMENT7;
using gles::GL_COLOR_ATTACHMENT8;
using gles::GL_COLOR_ATTACHMENT9;
using gles::GL_COLOR_ATTACHMENT10;
using gles::GL_COLOR_ATTACHMENT11;
using gles::GL_COLOR_ATTACHMENT12;
using gles::GL_COLOR_ATTACHMENT13;
using gles::GL_COLOR_ATTACHMENT14;
using gles::GL_COLOR_ATTACHMENT15;
using gles::GL_COLOR_ATTACHMENT16;
using gles::GL_COLOR_ATTACHMENT17;
using gles::GL_COLOR_ATTACHMENT18;
using gles::GL_COLOR_ATTACHMENT19;
using gles::GL_COLOR_ATTACHMENT20;
using gles::GL_COLOR_ATTACHMENT21;
using gles::GL_COLOR_ATTACHMENT22;
using gles::GL_COLOR_ATTACHMENT23;
using gles::GL_COLOR_ATTACHMENT24;
using gles::GL_COLOR_ATTACHMENT25;
using gles::GL_COLOR_ATTACHMENT26;
using gles::GL_COLOR_ATTACHMENT27;
using gles::GL_COLOR_ATTACHMENT28;
using gles::GL_COLOR_ATTACHMENT29;
using gles::GL_COLOR_ATTACHMENT30;
using gles::GL_COLOR_ATTACHMENT31;

// CopyBufferSubDataTarget

// using gles::GL_PIXEL_PACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_PIXEL_UNPACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_UNIFORM_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TEXTURE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_READ_BUFFER; // reuse BufferStorageTarget
// using gles::GL_COPY_WRITE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DRAW_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_SHADER_STORAGE_BUFFER; // reuse BufferStorageTarget
// using gles::GL_DISPATCH_INDIRECT_BUFFER; // reuse BufferStorageTarget
// using gles::GL_ATOMIC_COUNTER_BUFFER; // reuse BufferStorageTarget

// DebugSeverity

using gles::GL_DEBUG_SEVERITY_HIGH;
using gles::GL_DEBUG_SEVERITY_MEDIUM;
using gles::GL_DEBUG_SEVERITY_LOW;

// DebugSource

using gles::GL_DEBUG_SOURCE_API;
using gles::GL_DEBUG_SOURCE_WINDOW_SYSTEM;
using gles::GL_DEBUG_SOURCE_SHADER_COMPILER;
using gles::GL_DEBUG_SOURCE_THIRD_PARTY;
using gles::GL_DEBUG_SOURCE_APPLICATION;
using gles::GL_DEBUG_SOURCE_OTHER;

// DebugType

using gles::GL_DEBUG_TYPE_ERROR;
using gles::GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR;
using gles::GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR;
using gles::GL_DEBUG_TYPE_PORTABILITY;
using gles::GL_DEBUG_TYPE_PERFORMANCE;
using gles::GL_DEBUG_TYPE_OTHER;
using gles::GL_DEBUG_TYPE_MARKER;
using gles::GL_DEBUG_TYPE_PUSH_GROUP;
using gles::GL_DEBUG_TYPE_POP_GROUP;

// EnableCap

using gles::GL_VERTEX_ARRAY;

// ErrorCode

using gles::GL_STACK_OVERFLOW;
using gles::GL_STACK_UNDERFLOW;

// ExternalHandleType

using gles::GL_HANDLE_TYPE_OPAQUE_FD_EXT;
using gles::GL_HANDLE_TYPE_OPAQUE_WIN32_EXT;
using gles::GL_HANDLE_TYPE_OPAQUE_WIN32_KMT_EXT;
using gles::GL_HANDLE_TYPE_D3D12_TILEPOOL_EXT;
using gles::GL_HANDLE_TYPE_D3D12_RESOURCE_EXT;
using gles::GL_HANDLE_TYPE_D3D11_IMAGE_EXT;
using gles::GL_HANDLE_TYPE_D3D11_IMAGE_KMT_EXT;
using gles::GL_HANDLE_TYPE_D3D12_FENCE_EXT;

// FramebufferAttachment

using gles::GL_MAX_COLOR_ATTACHMENTS;
using gles::GL_MAX_COLOR_ATTACHMENTS_EXT;
using gles::GL_MAX_COLOR_ATTACHMENTS_NV;
using gles::GL_COLOR_ATTACHMENT0_EXT;
using gles::GL_COLOR_ATTACHMENT0_NV;
// using gles::GL_COLOR_ATTACHMENT1; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT1_EXT;
using gles::GL_COLOR_ATTACHMENT1_NV;
// using gles::GL_COLOR_ATTACHMENT2; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT2_EXT;
using gles::GL_COLOR_ATTACHMENT2_NV;
// using gles::GL_COLOR_ATTACHMENT3; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT3_EXT;
using gles::GL_COLOR_ATTACHMENT3_NV;
// using gles::GL_COLOR_ATTACHMENT4; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT4_EXT;
using gles::GL_COLOR_ATTACHMENT4_NV;
// using gles::GL_COLOR_ATTACHMENT5; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT5_EXT;
using gles::GL_COLOR_ATTACHMENT5_NV;
// using gles::GL_COLOR_ATTACHMENT6; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT6_EXT;
using gles::GL_COLOR_ATTACHMENT6_NV;
// using gles::GL_COLOR_ATTACHMENT7; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT7_EXT;
using gles::GL_COLOR_ATTACHMENT7_NV;
// using gles::GL_COLOR_ATTACHMENT8; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT8_EXT;
using gles::GL_COLOR_ATTACHMENT8_NV;
// using gles::GL_COLOR_ATTACHMENT9; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT9_EXT;
using gles::GL_COLOR_ATTACHMENT9_NV;
// using gles::GL_COLOR_ATTACHMENT10; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT10_EXT;
using gles::GL_COLOR_ATTACHMENT10_NV;
// using gles::GL_COLOR_ATTACHMENT11; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT11_EXT;
using gles::GL_COLOR_ATTACHMENT11_NV;
// using gles::GL_COLOR_ATTACHMENT12; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT12_EXT;
using gles::GL_COLOR_ATTACHMENT12_NV;
// using gles::GL_COLOR_ATTACHMENT13; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT13_EXT;
using gles::GL_COLOR_ATTACHMENT13_NV;
// using gles::GL_COLOR_ATTACHMENT14; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT14_EXT;
using gles::GL_COLOR_ATTACHMENT14_NV;
// using gles::GL_COLOR_ATTACHMENT15; // reuse ColorBuffer
using gles::GL_COLOR_ATTACHMENT15_EXT;
using gles::GL_COLOR_ATTACHMENT15_NV;
// using gles::GL_COLOR_ATTACHMENT16; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT17; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT18; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT19; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT20; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT21; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT22; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT23; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT24; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT25; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT26; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT27; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT28; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT29; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT30; // reuse ColorBuffer
// using gles::GL_COLOR_ATTACHMENT31; // reuse ColorBuffer

// FramebufferAttachmentParameterName

using gles::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
using gles::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
using gles::GL_FRAMEBUFFER_ATTACHMENT_LAYERED;

// FramebufferFetchNoncoherent

using gles::GL_FRAMEBUFFER_FETCH_NONCOHERENT_QCOM;

// FramebufferParameterName

using gles::GL_FRAMEBUFFER_DEFAULT_WIDTH;
using gles::GL_FRAMEBUFFER_DEFAULT_HEIGHT;
using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS;
using gles::GL_FRAMEBUFFER_DEFAULT_SAMPLES;
using gles::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS;

// FramebufferStatus

using gles::GL_FRAMEBUFFER_UNDEFINED;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;

// FramebufferTarget

// using gles::GL_READ_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget
// using gles::GL_DRAW_FRAMEBUFFER; // reuse CheckFramebufferStatusTarget

// GetFramebufferParameter

// using gles::GL_FRAMEBUFFER_DEFAULT_WIDTH; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_HEIGHT; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_SAMPLES; // reuse FramebufferParameterName
// using gles::GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS; // reuse FramebufferParameterName

// GetPName

using gles::GL_ALPHA_TEST_QCOM;
using gles::GL_ALPHA_TEST_FUNC_QCOM;
using gles::GL_ALPHA_TEST_REF_QCOM;
using gles::GL_DRAW_BUFFER_EXT;
using gles::GL_READ_BUFFER;
using gles::GL_READ_BUFFER_EXT;
using gles::GL_READ_BUFFER_NV;
using gles::GL_UNPACK_ROW_LENGTH;
using gles::GL_UNPACK_SKIP_ROWS;
using gles::GL_UNPACK_SKIP_PIXELS;
using gles::GL_PACK_ROW_LENGTH;
using gles::GL_PACK_SKIP_ROWS;
using gles::GL_PACK_SKIP_PIXELS;
using gles::GL_TEXTURE_BINDING_3D;
// using gles::GL_VERTEX_ARRAY; // reuse EnableCap
using gles::GL_NUM_DEVICE_UUIDS_EXT;
using gles::GL_DEVICE_UUID_EXT;
using gles::GL_DRIVER_UUID_EXT;
using gles::GL_DEVICE_LUID_EXT;
using gles::GL_DEVICE_NODE_MASK_EXT;

// GetPointervPName

using gles::GL_DEBUG_CALLBACK_FUNCTION;
using gles::GL_DEBUG_CALLBACK_USER_PARAM;

// GetTextureParameter

using gles::GL_TEXTURE_WIDTH;
using gles::GL_TEXTURE_HEIGHT;
using gles::GL_TEXTURE_INTERNAL_FORMAT;
using gles::GL_TEXTURE_BORDER_COLOR;
using gles::GL_TEXTURE_BORDER_COLOR_NV;
using gles::GL_TEXTURE_RED_SIZE;
using gles::GL_TEXTURE_GREEN_SIZE;
using gles::GL_TEXTURE_BLUE_SIZE;
using gles::GL_TEXTURE_ALPHA_SIZE;

// GraphicsResetStatus

using gles::GL_GUILTY_CONTEXT_RESET;
using gles::GL_INNOCENT_CONTEXT_RESET;
using gles::GL_UNKNOWN_CONTEXT_RESET;

// HintTarget

using gles::GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
using gles::GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
using gles::GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
using gles::GL_BINNING_CONTROL_HINT_QCOM;

// InternalFormat

using gles::GL_RED;
using gles::GL_RED_EXT;
using gles::GL_RGB8;
using gles::GL_RGB8_OES;
using gles::GL_RGB10_EXT;
using gles::GL_RGB16_EXT;
using gles::GL_RGBA4_OES;
using gles::GL_RGB5_A1_OES;
using gles::GL_RGBA8;
using gles::GL_RGBA8_OES;
using gles::GL_RGB10_A2;
using gles::GL_RGB10_A2_EXT;
using gles::GL_RGBA16_EXT;
using gles::GL_DEPTH_COMPONENT16_OES;
using gles::GL_DEPTH_COMPONENT24_OES;
using gles::GL_DEPTH_COMPONENT32_OES;
using gles::GL_RG;
using gles::GL_R8;
using gles::GL_R8_EXT;
using gles::GL_R16_EXT;
using gles::GL_RG8;
using gles::GL_RG8_EXT;
using gles::GL_RG16_EXT;
using gles::GL_R16F;
using gles::GL_R16F_EXT;
using gles::GL_R32F;
using gles::GL_R32F_EXT;
using gles::GL_RG16F;
using gles::GL_RG16F_EXT;
using gles::GL_RG32F;
using gles::GL_RG32F_EXT;
using gles::GL_R8I;
using gles::GL_R8UI;
using gles::GL_R16I;
using gles::GL_R16UI;
using gles::GL_R32I;
using gles::GL_R32UI;
using gles::GL_RG8I;
using gles::GL_RG8UI;
using gles::GL_RG16I;
using gles::GL_RG16UI;
using gles::GL_RG32I;
using gles::GL_RG32UI;
using gles::GL_COMPRESSED_RGB_S3TC_DXT1_EXT;
using gles::GL_COMPRESSED_RGBA_S3TC_DXT1_EXT;
using gles::GL_COMPRESSED_RGBA_S3TC_DXT3_EXT;
using gles::GL_COMPRESSED_RGBA_S3TC_DXT5_EXT;
using gles::GL_DEPTH_STENCIL;
using gles::GL_DEPTH_STENCIL_OES;
using gles::GL_RGBA32F;
using gles::GL_RGBA32F_EXT;
using gles::GL_RGBA16F;
using gles::GL_RGBA16F_EXT;
using gles::GL_RGB16F;
using gles::GL_RGB16F_EXT;
using gles::GL_DEPTH24_STENCIL8;
using gles::GL_DEPTH24_STENCIL8_OES;
using gles::GL_R11F_G11F_B10F;
using gles::GL_R11F_G11F_B10F_APPLE;
using gles::GL_RGB9_E5;
using gles::GL_RGB9_E5_APPLE;
using gles::GL_SRGB;
using gles::GL_SRGB_EXT;
using gles::GL_SRGB8;
using gles::GL_SRGB8_NV;
using gles::GL_SRGB_ALPHA_EXT;
using gles::GL_SRGB8_ALPHA8;
using gles::GL_SRGB8_ALPHA8_EXT;
using gles::GL_COMPRESSED_SRGB_S3TC_DXT1_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT;
using gles::GL_DEPTH_COMPONENT32F;
using gles::GL_DEPTH32F_STENCIL8;
using gles::GL_RGBA32UI;
using gles::GL_RGB32UI;
using gles::GL_RGBA16UI;
using gles::GL_RGB16UI;
using gles::GL_RGBA8UI;
using gles::GL_RGB8UI;
using gles::GL_RGBA32I;
using gles::GL_RGB32I;
using gles::GL_RGBA16I;
using gles::GL_RGB16I;
using gles::GL_RGBA8I;
using gles::GL_RGB8I;
using gles::GL_COMPRESSED_RED_RGTC1_EXT;
using gles::GL_COMPRESSED_SIGNED_RED_RGTC1_EXT;
using gles::GL_R8_SNORM;
using gles::GL_RG8_SNORM;
using gles::GL_RGB8_SNORM;
using gles::GL_RGBA8_SNORM;
using gles::GL_R16_SNORM_EXT;
using gles::GL_RG16_SNORM_EXT;
using gles::GL_RGB16_SNORM_EXT;
using gles::GL_RGB10_A2UI;
using gles::GL_COMPRESSED_R11_EAC;
using gles::GL_COMPRESSED_SIGNED_R11_EAC;
using gles::GL_COMPRESSED_RG11_EAC;
using gles::GL_COMPRESSED_SIGNED_RG11_EAC;
using gles::GL_COMPRESSED_RGB8_ETC2;
using gles::GL_COMPRESSED_SRGB8_ETC2;
using gles::GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles::GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2;
using gles::GL_COMPRESSED_RGBA8_ETC2_EAC;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC;

// InternalFormatPName

using gles::GL_TEXTURE_COMPRESSED;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
using gles::GL_NUM_SAMPLE_COUNTS;

// MemoryObjectParameterName

using gles::GL_DEDICATED_MEMORY_OBJECT_EXT;
using gles::GL_PROTECTED_MEMORY_OBJECT_EXT;

// ObjectIdentifier

// using gles::GL_VERTEX_ARRAY; // reuse EnableCap
using gles::GL_BUFFER;
using gles::GL_SHADER;
using gles::GL_PROGRAM;
using gles::GL_QUERY;
using gles::GL_PROGRAM_PIPELINE;
using gles::GL_SAMPLER;
// using gles::GL_TRANSFORM_FEEDBACK; // reuse BindTransformFeedbackTarget

// PatchParameterName

using gles::GL_PATCH_VERTICES;

// PathCoverMode

using gles::GL_PATH_FILL_COVER_MODE_NV;
using gles::GL_CONVEX_HULL_NV;
using gles::GL_BOUNDING_BOX_NV;
using gles::GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV;

// PathElementType

using gles::GL_UTF8_NV;
using gles::GL_UTF16_NV;

// PathFillMode

using gles::GL_PATH_FILL_MODE_NV;
using gles::GL_COUNT_UP_NV;
using gles::GL_COUNT_DOWN_NV;

// PathFontTarget

using gles::GL_STANDARD_FONT_NAME_NV;
using gles::GL_SYSTEM_FONT_NAME_NV;
using gles::GL_FILE_NAME_NV;

// PathGenMode

using gles::GL_PATH_OBJECT_BOUNDING_BOX_NV;

// PathHandleMissingGlyphs

using gles::GL_SKIP_MISSING_GLYPH_NV;
using gles::GL_USE_MISSING_GLYPH_NV;

// PathListMode

using gles::GL_ACCUM_ADJACENT_PAIRS_NV;
using gles::GL_ADJACENT_PAIRS_NV;
using gles::GL_FIRST_TO_REST_NV;

// PathParameter

using gles::GL_PATH_STROKE_WIDTH_NV;
using gles::GL_PATH_END_CAPS_NV;
using gles::GL_PATH_INITIAL_END_CAP_NV;
using gles::GL_PATH_TERMINAL_END_CAP_NV;
using gles::GL_PATH_JOIN_STYLE_NV;
using gles::GL_PATH_MITER_LIMIT_NV;
using gles::GL_PATH_DASH_CAPS_NV;
using gles::GL_PATH_INITIAL_DASH_CAP_NV;
using gles::GL_PATH_TERMINAL_DASH_CAP_NV;
using gles::GL_PATH_DASH_OFFSET_NV;
using gles::GL_PATH_CLIENT_LENGTH_NV;
// using gles::GL_PATH_FILL_MODE_NV; // reuse PathFillMode
using gles::GL_PATH_FILL_MASK_NV;
// using gles::GL_PATH_FILL_COVER_MODE_NV; // reuse PathCoverMode
using gles::GL_PATH_STROKE_COVER_MODE_NV;
using gles::GL_PATH_STROKE_MASK_NV;
// using gles::GL_PATH_OBJECT_BOUNDING_BOX_NV; // reuse PathGenMode
using gles::GL_PATH_COMMAND_COUNT_NV;
using gles::GL_PATH_COORD_COUNT_NV;
using gles::GL_PATH_DASH_ARRAY_COUNT_NV;
using gles::GL_PATH_COMPUTED_LENGTH_NV;
using gles::GL_PATH_FILL_BOUNDING_BOX_NV;
using gles::GL_PATH_STROKE_BOUNDING_BOX_NV;
using gles::GL_PATH_DASH_OFFSET_RESET_NV;

// PathStringFormat

using gles::GL_PATH_FORMAT_SVG_NV;
using gles::GL_PATH_FORMAT_PS_NV;

// PathTransformType

using gles::GL_TRANSLATE_X_NV;
using gles::GL_TRANSLATE_Y_NV;
using gles::GL_TRANSLATE_2D_NV;
using gles::GL_TRANSLATE_3D_NV;
using gles::GL_AFFINE_2D_NV;
using gles::GL_AFFINE_3D_NV;
using gles::GL_TRANSPOSE_AFFINE_2D_NV;
using gles::GL_TRANSPOSE_AFFINE_3D_NV;

// PipelineParameterName

using gles::GL_ACTIVE_PROGRAM;
using gles::GL_GEOMETRY_SHADER;
using gles::GL_TESS_EVALUATION_SHADER;
using gles::GL_TESS_CONTROL_SHADER;

// PixelCopyType

// using gles::GL_COLOR; // reuse Buffer
using gles::GL_COLOR_EXT;
// using gles::GL_DEPTH; // reuse Buffer
using gles::GL_DEPTH_EXT;
// using gles::GL_STENCIL; // reuse Buffer
using gles::GL_STENCIL_EXT;

// PixelFormat

using gles::GL_STENCIL_INDEX;
// using gles::GL_RED; // reuse InternalFormat
// using gles::GL_RED_EXT; // reuse InternalFormat
using gles::GL_GREEN;
using gles::GL_BLUE;

// PixelStoreParameter

// using gles::GL_UNPACK_ROW_LENGTH; // reuse GetPName
using gles::GL_UNPACK_ROW_LENGTH_EXT;
// using gles::GL_UNPACK_SKIP_ROWS; // reuse GetPName
using gles::GL_UNPACK_SKIP_ROWS_EXT;
// using gles::GL_UNPACK_SKIP_PIXELS; // reuse GetPName
using gles::GL_UNPACK_SKIP_PIXELS_EXT;
// using gles::GL_PACK_ROW_LENGTH; // reuse GetPName
// using gles::GL_PACK_SKIP_ROWS; // reuse GetPName
// using gles::GL_PACK_SKIP_PIXELS; // reuse GetPName
using gles::GL_UNPACK_SKIP_IMAGES;
using gles::GL_UNPACK_IMAGE_HEIGHT;

// PrimitiveType

using gles::GL_QUADS;
using gles::GL_QUADS_EXT;
using gles::GL_LINES_ADJACENCY;
using gles::GL_LINES_ADJACENCY_EXT;
using gles::GL_LINE_STRIP_ADJACENCY;
using gles::GL_LINE_STRIP_ADJACENCY_EXT;
using gles::GL_TRIANGLES_ADJACENCY;
using gles::GL_TRIANGLES_ADJACENCY_EXT;
using gles::GL_TRIANGLE_STRIP_ADJACENCY;
using gles::GL_TRIANGLE_STRIP_ADJACENCY_EXT;
using gles::GL_PATCHES;
using gles::GL_PATCHES_EXT;

// ProgramInterface

// using gles::GL_TRANSFORM_FEEDBACK_BUFFER; // reuse BufferStorageTarget
using gles::GL_UNIFORM;
using gles::GL_UNIFORM_BLOCK;
using gles::GL_PROGRAM_INPUT;
using gles::GL_PROGRAM_OUTPUT;
using gles::GL_BUFFER_VARIABLE;
using gles::GL_SHADER_STORAGE_BLOCK;
using gles::GL_TRANSFORM_FEEDBACK_VARYING;

// ProgramInterfacePName

using gles::GL_ACTIVE_RESOURCES;
using gles::GL_MAX_NAME_LENGTH;
using gles::GL_MAX_NUM_ACTIVE_VARIABLES;

// ProgramParameterPName

// using gles::GL_PROGRAM_BINARY_RETRIEVABLE_HINT; // reuse HintTarget
using gles::GL_PROGRAM_SEPARABLE;

// ProgramPropertyARB

using gles::GL_COMPUTE_WORK_GROUP_SIZE;
using gles::GL_PROGRAM_BINARY_LENGTH;
using gles::GL_GEOMETRY_VERTICES_OUT;
using gles::GL_GEOMETRY_INPUT_TYPE;
using gles::GL_GEOMETRY_OUTPUT_TYPE;
using gles::GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
using gles::GL_ACTIVE_UNIFORM_BLOCKS;
using gles::GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
using gles::GL_TRANSFORM_FEEDBACK_VARYINGS;
using gles::GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;

// QueryObjectParameterName

using gles::GL_QUERY_RESULT;
using gles::GL_QUERY_RESULT_AVAILABLE;

// QueryParameterName

using gles::GL_CURRENT_QUERY;

// QueryTarget

using gles::GL_ANY_SAMPLES_PASSED;
using gles::GL_PRIMITIVES_GENERATED;
using gles::GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
using gles::GL_ANY_SAMPLES_PASSED_CONSERVATIVE;

// RenderbufferParameterName

using gles::GL_RENDERBUFFER_SAMPLES;

// SamplerParameterName

// using gles::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
using gles::GL_TEXTURE_WRAP_R;
using gles::GL_TEXTURE_MIN_LOD;
using gles::GL_TEXTURE_MAX_LOD;
using gles::GL_TEXTURE_COMPARE_MODE;
using gles::GL_TEXTURE_COMPARE_FUNC;

// SemaphoreParameterName

using gles::GL_D3D12_FENCE_VALUE_EXT;

// ShaderType

using gles::GL_FRAGMENT_SHADER_ARB;
using gles::GL_VERTEX_SHADER_ARB;
// using gles::GL_GEOMETRY_SHADER; // reuse PipelineParameterName
// using gles::GL_TESS_EVALUATION_SHADER; // reuse PipelineParameterName
// using gles::GL_TESS_CONTROL_SHADER; // reuse PipelineParameterName
using gles::GL_COMPUTE_SHADER;

// SubroutineParameterName

using gles::GL_UNIFORM_SIZE;
using gles::GL_UNIFORM_NAME_LENGTH;

// SyncCondition

using gles::GL_SYNC_GPU_COMMANDS_COMPLETE;

// SyncParameterName

using gles::GL_OBJECT_TYPE;
using gles::GL_SYNC_CONDITION;
using gles::GL_SYNC_STATUS;
using gles::GL_SYNC_FLAGS;

// SyncStatus

using gles::GL_ALREADY_SIGNALED;
using gles::GL_TIMEOUT_EXPIRED;
using gles::GL_CONDITION_SATISFIED;
using gles::GL_WAIT_FAILED;

// TextureLayout

using gles::GL_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_EXT;
using gles::GL_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_EXT;
using gles::GL_LAYOUT_GENERAL_EXT;
using gles::GL_LAYOUT_COLOR_ATTACHMENT_EXT;
using gles::GL_LAYOUT_DEPTH_STENCIL_ATTACHMENT_EXT;
using gles::GL_LAYOUT_DEPTH_STENCIL_READ_ONLY_EXT;
using gles::GL_LAYOUT_SHADER_READ_ONLY_EXT;
using gles::GL_LAYOUT_TRANSFER_SRC_EXT;
using gles::GL_LAYOUT_TRANSFER_DST_EXT;

// TextureParameterName

// using gles::GL_TEXTURE_WIDTH; // reuse GetTextureParameter
// using gles::GL_TEXTURE_HEIGHT; // reuse GetTextureParameter
// using gles::GL_TEXTURE_INTERNAL_FORMAT; // reuse GetTextureParameter
// using gles::GL_TEXTURE_BORDER_COLOR; // reuse GetTextureParameter
// using gles::GL_TEXTURE_BORDER_COLOR_NV; // reuse GetTextureParameter
// using gles::GL_TEXTURE_RED_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_GREEN_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_BLUE_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_ALPHA_SIZE; // reuse GetTextureParameter
// using gles::GL_TEXTURE_WRAP_R; // reuse SamplerParameterName
using gles::GL_TEXTURE_WRAP_R_OES;
// using gles::GL_TEXTURE_MIN_LOD; // reuse SamplerParameterName
// using gles::GL_TEXTURE_MAX_LOD; // reuse SamplerParameterName
using gles::GL_TEXTURE_BASE_LEVEL;
using gles::GL_TEXTURE_MAX_LEVEL;
// using gles::GL_TEXTURE_COMPARE_MODE; // reuse SamplerParameterName
// using gles::GL_TEXTURE_COMPARE_FUNC; // reuse SamplerParameterName
using gles::GL_TEXTURE_SWIZZLE_R;
using gles::GL_TEXTURE_SWIZZLE_G;
using gles::GL_TEXTURE_SWIZZLE_B;
using gles::GL_TEXTURE_SWIZZLE_A;
using gles::GL_DEPTH_STENCIL_TEXTURE_MODE;
using gles::GL_TEXTURE_TILING_EXT;

// TextureTarget

using gles::GL_TEXTURE_3D;
using gles::GL_TEXTURE_3D_OES;
using gles::GL_TEXTURE_2D_ARRAY;
using gles::GL_TEXTURE_CUBE_MAP_ARRAY;
using gles::GL_TEXTURE_CUBE_MAP_ARRAY_EXT;
using gles::GL_TEXTURE_CUBE_MAP_ARRAY_OES;
using gles::GL_TEXTURE_2D_MULTISAMPLE;
using gles::GL_TEXTURE_2D_MULTISAMPLE_ARRAY;

// TextureWrapMode

using gles::GL_CLAMP_TO_BORDER;
using gles::GL_CLAMP_TO_BORDER_NV;

// TransformFeedbackPName

using gles::GL_TRANSFORM_FEEDBACK_BUFFER_START;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
using gles::GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
using gles::GL_TRANSFORM_FEEDBACK_PAUSED;
using gles::GL_TRANSFORM_FEEDBACK_ACTIVE;

// UniformBlockPName

using gles::GL_UNIFORM_BLOCK_BINDING;
using gles::GL_UNIFORM_BLOCK_DATA_SIZE;
using gles::GL_UNIFORM_BLOCK_NAME_LENGTH;
using gles::GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
using gles::GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
using gles::GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
using gles::GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;

// UniformPName

using gles::GL_UNIFORM_TYPE;
// using gles::GL_UNIFORM_SIZE; // reuse SubroutineParameterName
// using gles::GL_UNIFORM_NAME_LENGTH; // reuse SubroutineParameterName
using gles::GL_UNIFORM_BLOCK_INDEX;
using gles::GL_UNIFORM_OFFSET;
using gles::GL_UNIFORM_ARRAY_STRIDE;
using gles::GL_UNIFORM_MATRIX_STRIDE;
using gles::GL_UNIFORM_IS_ROW_MAJOR;

// VertexArrayPName

using gles::GL_VERTEX_ATTRIB_RELATIVE_OFFSET;
using gles::GL_VERTEX_ATTRIB_ARRAY_INTEGER;
using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR;

// VertexAttribEnum

// using gles::GL_VERTEX_ATTRIB_ARRAY_INTEGER; // reuse VertexArrayPName
// using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR; // reuse VertexArrayPName

// VertexAttribPointerType

using gles::GL_HALF_FLOAT;
using gles::GL_UNSIGNED_INT_2_10_10_10_REV;
using gles::GL_UNSIGNED_INT_10F_11F_11F_REV;
using gles::GL_INT_2_10_10_10_REV;

// VertexAttribType

// using gles::GL_HALF_FLOAT; // reuse VertexAttribPointerType
// using gles::GL_UNSIGNED_INT_2_10_10_10_REV; // reuse VertexAttribPointerType
// using gles::GL_UNSIGNED_INT_10F_11F_11F_REV; // reuse VertexAttribPointerType
// using gles::GL_INT_2_10_10_10_REV; // reuse VertexAttribPointerType

// VertexBufferObjectParameter

using gles::GL_BUFFER_MAPPED;
using gles::GL_BUFFER_ACCESS_FLAGS;
using gles::GL_BUFFER_MAP_LENGTH;
using gles::GL_BUFFER_MAP_OFFSET;

// VertexBufferObjectUsage

// using gles::GL_STREAM_READ; // reuse BufferUsageARB
// using gles::GL_STREAM_COPY; // reuse BufferUsageARB
// using gles::GL_STATIC_READ; // reuse BufferUsageARB
// using gles::GL_STATIC_COPY; // reuse BufferUsageARB
// using gles::GL_DYNAMIC_READ; // reuse BufferUsageARB
// using gles::GL_DYNAMIC_COPY; // reuse BufferUsageARB

// VertexProvokingMode

using gles::GL_FIRST_VERTEX_CONVENTION;
using gles::GL_LAST_VERTEX_CONVENTION;

// __UNGROUPED__

using gles::GL_CLOSE_PATH_NV;
using gles::GL_QUADS_OES;
using gles::GL_LINES_ADJACENCY_OES;
using gles::GL_LINE_STRIP_ADJACENCY_OES;
using gles::GL_TRIANGLES_ADJACENCY_OES;
using gles::GL_TRIANGLE_STRIP_ADJACENCY_OES;
using gles::GL_PATCHES_OES;
using gles::GL_MOVE_TO_NV;
using gles::GL_RELATIVE_MOVE_TO_NV;
using gles::GL_SRC_ALPHA_SATURATE_EXT;
using gles::GL_LINE_TO_NV;
using gles::GL_RELATIVE_LINE_TO_NV;
using gles::GL_CONTEXT_LOST;
using gles::GL_HORIZONTAL_LINE_TO_NV;
using gles::GL_RELATIVE_HORIZONTAL_LINE_TO_NV;
using gles::GL_VERTICAL_LINE_TO_NV;
using gles::GL_RELATIVE_VERTICAL_LINE_TO_NV;
using gles::GL_QUADRATIC_CURVE_TO_NV;
using gles::GL_RELATIVE_QUADRATIC_CURVE_TO_NV;
using gles::GL_POLYGON_MODE_NV;
using gles::GL_PATH_MODELVIEW_STACK_DEPTH_NV;
using gles::GL_PATH_PROJECTION_STACK_DEPTH_NV;
using gles::GL_PATH_MODELVIEW_MATRIX_NV;
using gles::GL_PATH_PROJECTION_MATRIX_NV;
using gles::GL_CUBIC_CURVE_TO_NV;
using gles::GL_RELATIVE_CUBIC_CURVE_TO_NV;
using gles::GL_MAX_CLIP_DISTANCES_APPLE;
using gles::GL_MAX_CLIP_DISTANCES_EXT;
using gles::GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV;
using gles::GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV;
using gles::GL_SMOOTH_QUADRATIC_CURVE_TO_NV;
using gles::GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV;
using gles::GL_SMOOTH_CUBIC_CURVE_TO_NV;
using gles::GL_TEXTURE_BORDER_COLOR_EXT;
using gles::GL_TEXTURE_BORDER_COLOR_OES;
using gles::GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV;
using gles::GL_SMALL_CCW_ARC_TO_NV;
using gles::GL_RELATIVE_SMALL_CCW_ARC_TO_NV;
using gles::GL_SMALL_CW_ARC_TO_NV;
using gles::GL_INT64_NV;
using gles::GL_UNSIGNED_INT64_NV;
using gles::GL_RELATIVE_SMALL_CW_ARC_TO_NV;
using gles::GL_XOR_NV;
using gles::GL_LARGE_CCW_ARC_TO_NV;
using gles::GL_RELATIVE_LARGE_CCW_ARC_TO_NV;
using gles::GL_PATH_MODELVIEW_NV;
using gles::GL_PATH_PROJECTION_NV;
using gles::GL_LARGE_CW_ARC_TO_NV;
using gles::GL_RELATIVE_LARGE_CW_ARC_TO_NV;
using gles::GL_STENCIL_INDEX_OES;
using gles::GL_RED_NV;
using gles::GL_GREEN_NV;
using gles::GL_BLUE_NV;
using gles::GL_CONIC_CURVE_TO_NV;
using gles::GL_RELATIVE_CONIC_CURVE_TO_NV;
using gles::GL_POINT_NV;
using gles::GL_LINE_NV;
using gles::GL_FILL_NV;
using gles::GL_POLYGON_OFFSET_POINT_NV;
using gles::GL_POLYGON_OFFSET_LINE_NV;
using gles::GL_CLIP_DISTANCE0_APPLE;
using gles::GL_CLIP_DISTANCE0_EXT;
using gles::GL_CLIP_DISTANCE1_APPLE;
using gles::GL_CLIP_DISTANCE1_EXT;
using gles::GL_CLIP_DISTANCE2_APPLE;
using gles::GL_CLIP_DISTANCE2_EXT;
using gles::GL_CLIP_DISTANCE3_APPLE;
using gles::GL_CLIP_DISTANCE3_EXT;
using gles::GL_CLIP_DISTANCE4_APPLE;
using gles::GL_CLIP_DISTANCE4_EXT;
using gles::GL_CLIP_DISTANCE5_APPLE;
using gles::GL_CLIP_DISTANCE5_EXT;
using gles::GL_CLIP_DISTANCE6_APPLE;
using gles::GL_CLIP_DISTANCE6_EXT;
using gles::GL_CLIP_DISTANCE7_APPLE;
using gles::GL_CLIP_DISTANCE7_EXT;
using gles::GL_MIN;
using gles::GL_MAX;
using gles::GL_ALPHA8_EXT;
using gles::GL_ALPHA8_OES;
using gles::GL_LUMINANCE8_EXT;
using gles::GL_LUMINANCE8_OES;
using gles::GL_LUMINANCE4_ALPHA4_OES;
using gles::GL_LUMINANCE8_ALPHA8_EXT;
using gles::GL_LUMINANCE8_ALPHA8_OES;
using gles::GL_TEXTURE_BINDING_3D_OES;
using gles::GL_TEXTURE_DEPTH;
using gles::GL_MAX_3D_TEXTURE_SIZE;
using gles::GL_MAX_3D_TEXTURE_SIZE_OES;
using gles::GL_MULTISAMPLE_EXT;
using gles::GL_SAMPLE_ALPHA_TO_ONE_EXT;
using gles::GL_BGRA_EXT;
using gles::GL_BGRA_IMG;
using gles::GL_MAX_ELEMENTS_VERTICES;
using gles::GL_MAX_ELEMENTS_INDICES;
using gles::GL_CLAMP_TO_BORDER_EXT;
using gles::GL_CLAMP_TO_BORDER_OES;
using gles::GL_TEXTURE_MAX_LEVEL_APPLE;
using gles::GL_DEPTH_COMPONENT24;
using gles::GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT;
using gles::GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT;
using gles::GL_FRAMEBUFFER_DEFAULT;
using gles::GL_FRAMEBUFFER_UNDEFINED_OES;
using gles::GL_DEPTH_STENCIL_ATTACHMENT;
using gles::GL_MAJOR_VERSION;
using gles::GL_MINOR_VERSION;
using gles::GL_NUM_EXTENSIONS;
using gles::GL_CONTEXT_FLAGS;
using gles::GL_BUFFER_IMMUTABLE_STORAGE_EXT;
using gles::GL_BUFFER_STORAGE_FLAGS_EXT;
using gles::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED;
using gles::GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES;
using gles::GL_RG_EXT;
using gles::GL_RG_INTEGER;
using gles::GL_DEBUG_OUTPUT_SYNCHRONOUS;
using gles::GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH;
using gles::GL_LOSE_CONTEXT_ON_RESET;
using gles::GL_LOSE_CONTEXT_ON_RESET_EXT;
using gles::GL_GUILTY_CONTEXT_RESET_EXT;
using gles::GL_INNOCENT_CONTEXT_RESET_EXT;
using gles::GL_UNKNOWN_CONTEXT_RESET_EXT;
using gles::GL_RESET_NOTIFICATION_STRATEGY;
using gles::GL_RESET_NOTIFICATION_STRATEGY_EXT;
using gles::GL_PROGRAM_PIPELINE_BINDING;
using gles::GL_MAX_VIEWPORTS_NV;
using gles::GL_MAX_VIEWPORTS_OES;
using gles::GL_VIEWPORT_SUBPIXEL_BITS_NV;
using gles::GL_VIEWPORT_SUBPIXEL_BITS_OES;
using gles::GL_VIEWPORT_BOUNDS_RANGE_NV;
using gles::GL_VIEWPORT_BOUNDS_RANGE_OES;
using gles::GL_LAYER_PROVOKING_VERTEX;
using gles::GL_LAYER_PROVOKING_VERTEX_EXT;
using gles::GL_LAYER_PROVOKING_VERTEX_OES;
using gles::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV;
using gles::GL_VIEWPORT_INDEX_PROVOKING_VERTEX_OES;
using gles::GL_UNDEFINED_VERTEX;
using gles::GL_UNDEFINED_VERTEX_EXT;
using gles::GL_UNDEFINED_VERTEX_OES;
using gles::GL_NO_RESET_NOTIFICATION;
using gles::GL_NO_RESET_NOTIFICATION_EXT;
using gles::GL_MAX_COMPUTE_SHARED_MEMORY_SIZE;
using gles::GL_MAX_COMPUTE_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_COMPUTE_ATOMIC_COUNTERS;
using gles::GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS;
using gles::GL_DEBUG_SEVERITY_NOTIFICATION;
using gles::GL_MAX_DEBUG_GROUP_STACK_DEPTH;
using gles::GL_DEBUG_GROUP_STACK_DEPTH;
using gles::GL_MAX_UNIFORM_LOCATIONS;
using gles::GL_VERTEX_ATTRIB_BINDING;
using gles::GL_VERTEX_BINDING_DIVISOR;
using gles::GL_VERTEX_BINDING_OFFSET;
using gles::GL_VERTEX_BINDING_STRIDE;
using gles::GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET;
using gles::GL_MAX_VERTEX_ATTRIB_BINDINGS;
using gles::GL_TEXTURE_VIEW_MIN_LEVEL_EXT;
using gles::GL_TEXTURE_VIEW_MIN_LEVEL_OES;
using gles::GL_TEXTURE_VIEW_NUM_LEVELS_EXT;
using gles::GL_TEXTURE_VIEW_NUM_LEVELS_OES;
using gles::GL_TEXTURE_VIEW_MIN_LAYER_EXT;
using gles::GL_TEXTURE_VIEW_MIN_LAYER_OES;
using gles::GL_TEXTURE_VIEW_NUM_LAYERS_EXT;
using gles::GL_TEXTURE_VIEW_NUM_LAYERS_OES;
using gles::GL_TEXTURE_IMMUTABLE_LEVELS;
using gles::GL_MAX_VERTEX_ATTRIB_STRIDE;
using gles::GL_MAX_LABEL_LENGTH;
using gles::GL_MAX_CULL_DISTANCES_EXT;
using gles::GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES_EXT;
using gles::GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT;
using gles::GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG;
using gles::GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT;
using gles::GL_UNSIGNED_INT_2_10_10_10_REV_EXT;
using gles::GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE;
using gles::GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE;
using gles::GL_PERFQUERY_DONOT_FLUSH_INTEL;
using gles::GL_PERFQUERY_FLUSH_INTEL;
using gles::GL_PERFQUERY_WAIT_INTEL;
using gles::GL_BLACKHOLE_RENDER_INTEL;
using gles::GL_CONSERVATIVE_RASTERIZATION_INTEL;
using gles::GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV;
using gles::GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV;
using gles::GL_ALL_COMPLETED_NV;
using gles::GL_FENCE_STATUS_NV;
using gles::GL_FENCE_CONDITION_NV;
using gles::GL_UNSIGNED_INT_24_8;
using gles::GL_UNSIGNED_INT_24_8_OES;
using gles::GL_MAX_TEXTURE_LOD_BIAS;
using gles::GL_TEXTURE_MAX_ANISOTROPY_EXT;
using gles::GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT;
using gles::GL_SRC1_ALPHA_EXT;
using gles::GL_VERTEX_ARRAY_BINDING;
using gles::GL_VERTEX_ARRAY_BINDING_OES;
using gles::GL_UNSIGNED_SHORT_8_8_APPLE;
using gles::GL_UNSIGNED_SHORT_8_8_REV_APPLE;
using gles::GL_Z400_BINARY_AMD;
using gles::GL_PROGRAM_BINARY_LENGTH_OES;
using gles::GL_MIRROR_CLAMP_TO_EDGE_EXT;
using gles::GL_PROGRAM_BINARY_FORMAT_MESA;
using gles::GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD;
using gles::GL_3DC_X_AMD;
using gles::GL_3DC_XY_AMD;
using gles::GL_NUM_PROGRAM_BINARY_FORMATS;
using gles::GL_NUM_PROGRAM_BINARY_FORMATS_OES;
using gles::GL_PROGRAM_BINARY_FORMATS;
using gles::GL_PROGRAM_BINARY_FORMATS_OES;
using gles::GL_RGB32F;
using gles::GL_RGB32F_EXT;
using gles::GL_ALPHA32F_EXT;
using gles::GL_LUMINANCE32F_EXT;
using gles::GL_LUMINANCE_ALPHA32F_EXT;
using gles::GL_ALPHA16F_EXT;
using gles::GL_LUMINANCE16F_EXT;
using gles::GL_LUMINANCE_ALPHA16F_EXT;
using gles::GL_WRITEONLY_RENDERING_QCOM;
using gles::GL_MAX_DRAW_BUFFERS;
using gles::GL_MAX_DRAW_BUFFERS_EXT;
using gles::GL_MAX_DRAW_BUFFERS_NV;
using gles::GL_DRAW_BUFFER0;
using gles::GL_DRAW_BUFFER0_EXT;
using gles::GL_DRAW_BUFFER0_NV;
using gles::GL_DRAW_BUFFER1;
using gles::GL_DRAW_BUFFER1_EXT;
using gles::GL_DRAW_BUFFER1_NV;
using gles::GL_DRAW_BUFFER2;
using gles::GL_DRAW_BUFFER2_EXT;
using gles::GL_DRAW_BUFFER2_NV;
using gles::GL_DRAW_BUFFER3;
using gles::GL_DRAW_BUFFER3_EXT;
using gles::GL_DRAW_BUFFER3_NV;
using gles::GL_DRAW_BUFFER4;
using gles::GL_DRAW_BUFFER4_EXT;
using gles::GL_DRAW_BUFFER4_NV;
using gles::GL_DRAW_BUFFER5;
using gles::GL_DRAW_BUFFER5_EXT;
using gles::GL_DRAW_BUFFER5_NV;
using gles::GL_DRAW_BUFFER6;
using gles::GL_DRAW_BUFFER6_EXT;
using gles::GL_DRAW_BUFFER6_NV;
using gles::GL_DRAW_BUFFER7;
using gles::GL_DRAW_BUFFER7_EXT;
using gles::GL_DRAW_BUFFER7_NV;
using gles::GL_DRAW_BUFFER8;
using gles::GL_DRAW_BUFFER8_EXT;
using gles::GL_DRAW_BUFFER8_NV;
using gles::GL_DRAW_BUFFER9;
using gles::GL_DRAW_BUFFER9_EXT;
using gles::GL_DRAW_BUFFER9_NV;
using gles::GL_DRAW_BUFFER10;
using gles::GL_DRAW_BUFFER10_EXT;
using gles::GL_DRAW_BUFFER10_NV;
using gles::GL_DRAW_BUFFER11;
using gles::GL_DRAW_BUFFER11_EXT;
using gles::GL_DRAW_BUFFER11_NV;
using gles::GL_DRAW_BUFFER12;
using gles::GL_DRAW_BUFFER12_EXT;
using gles::GL_DRAW_BUFFER12_NV;
using gles::GL_DRAW_BUFFER13;
using gles::GL_DRAW_BUFFER13_EXT;
using gles::GL_DRAW_BUFFER13_NV;
using gles::GL_DRAW_BUFFER14;
using gles::GL_DRAW_BUFFER14_EXT;
using gles::GL_DRAW_BUFFER14_NV;
using gles::GL_DRAW_BUFFER15;
using gles::GL_DRAW_BUFFER15_EXT;
using gles::GL_DRAW_BUFFER15_NV;
using gles::GL_TEXTURE_DEPTH_SIZE;
using gles::GL_TEXTURE_COMPARE_MODE_EXT;
using gles::GL_TEXTURE_COMPARE_FUNC_EXT;
using gles::GL_COMPARE_REF_TO_TEXTURE;
using gles::GL_COMPARE_REF_TO_TEXTURE_EXT;
using gles::GL_QUERY_COUNTER_BITS_EXT;
using gles::GL_CURRENT_QUERY_EXT;
using gles::GL_QUERY_RESULT_EXT;
using gles::GL_QUERY_RESULT_AVAILABLE_EXT;
using gles::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT;
using gles::GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES;
using gles::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT;
using gles::GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES;
using gles::GL_GEOMETRY_SHADER_INVOCATIONS;
using gles::GL_GEOMETRY_SHADER_INVOCATIONS_EXT;
using gles::GL_GEOMETRY_SHADER_INVOCATIONS_OES;
using gles::GL_WRITE_ONLY_OES;
using gles::GL_BUFFER_ACCESS_OES;
using gles::GL_BUFFER_MAPPED_OES;
using gles::GL_BUFFER_MAP_POINTER;
using gles::GL_BUFFER_MAP_POINTER_OES;
using gles::GL_TIME_ELAPSED_EXT;
using gles::GL_PIXEL_PACK_BUFFER_NV;
using gles::GL_PIXEL_UNPACK_BUFFER_NV;
using gles::GL_PIXEL_PACK_BUFFER_BINDING;
using gles::GL_PIXEL_PACK_BUFFER_BINDING_NV;
using gles::GL_ETC1_SRGB8_NV;
using gles::GL_PIXEL_UNPACK_BUFFER_BINDING;
using gles::GL_PIXEL_UNPACK_BUFFER_BINDING_NV;
using gles::GL_TEXTURE_STENCIL_SIZE;
using gles::GL_SRC1_COLOR_EXT;
using gles::GL_ONE_MINUS_SRC1_COLOR_EXT;
using gles::GL_ONE_MINUS_SRC1_ALPHA_EXT;
using gles::GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT;
using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE;
using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT;
using gles::GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV;
using gles::GL_MAX_ARRAY_TEXTURE_LAYERS;
using gles::GL_MIN_PROGRAM_TEXEL_OFFSET;
using gles::GL_MAX_PROGRAM_TEXEL_OFFSET;
using gles::GL_GEOMETRY_LINKED_VERTICES_OUT_EXT;
using gles::GL_GEOMETRY_LINKED_VERTICES_OUT_OES;
using gles::GL_GEOMETRY_LINKED_INPUT_TYPE_EXT;
using gles::GL_GEOMETRY_LINKED_INPUT_TYPE_OES;
using gles::GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT;
using gles::GL_GEOMETRY_LINKED_OUTPUT_TYPE_OES;
using gles::GL_SAMPLER_BINDING;
using gles::GL_RGB_422_APPLE;
using gles::GL_UNIFORM_BUFFER_BINDING;
using gles::GL_UNIFORM_BUFFER_START;
using gles::GL_UNIFORM_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_UNIFORM_BLOCKS;
using gles::GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
using gles::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT;
using gles::GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES;
using gles::GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
using gles::GL_MAX_COMBINED_UNIFORM_BLOCKS;
using gles::GL_MAX_UNIFORM_BUFFER_BINDINGS;
using gles::GL_MAX_UNIFORM_BLOCK_SIZE;
using gles::GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES;
using gles::GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
using gles::GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_TEXTURE_SRGB_DECODE_EXT;
using gles::GL_DECODE_EXT;
using gles::GL_SKIP_DECODE_EXT;
using gles::GL_PROGRAM_PIPELINE_OBJECT_EXT;
using gles::GL_RGB_RAW_422_APPLE;
using gles::GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT;
using gles::GL_SYNC_OBJECT_APPLE;
using gles::GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT;
using gles::GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT;
using gles::GL_PROGRAM_OBJECT_EXT;
using gles::GL_SHADER_OBJECT_EXT;
using gles::GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
using gles::GL_MAX_VERTEX_UNIFORM_COMPONENTS;
using gles::GL_MAX_VARYING_COMPONENTS;
using gles::GL_PALETTE4_RGB8_OES;
using gles::GL_PALETTE4_RGBA8_OES;
using gles::GL_PALETTE4_R5_G6_B5_OES;
using gles::GL_PALETTE4_RGBA4_OES;
using gles::GL_PALETTE4_RGB5_A1_OES;
using gles::GL_PALETTE8_RGB8_OES;
using gles::GL_PALETTE8_RGBA8_OES;
using gles::GL_PALETTE8_R5_G6_B5_OES;
using gles::GL_PALETTE8_RGBA4_OES;
using gles::GL_PALETTE8_RGB5_A1_OES;
using gles::GL_COUNTER_TYPE_AMD;
using gles::GL_COUNTER_RANGE_AMD;
using gles::GL_UNSIGNED_INT64_AMD;
using gles::GL_PERCENTAGE_AMD;
using gles::GL_PERFMON_RESULT_AVAILABLE_AMD;
using gles::GL_PERFMON_RESULT_SIZE_AMD;
using gles::GL_PERFMON_RESULT_AMD;
using gles::GL_TEXTURE_WIDTH_QCOM;
using gles::GL_TEXTURE_HEIGHT_QCOM;
using gles::GL_TEXTURE_DEPTH_QCOM;
using gles::GL_TEXTURE_INTERNAL_FORMAT_QCOM;
using gles::GL_TEXTURE_FORMAT_QCOM;
using gles::GL_TEXTURE_TYPE_QCOM;
using gles::GL_TEXTURE_IMAGE_VALID_QCOM;
using gles::GL_TEXTURE_NUM_LEVELS_QCOM;
using gles::GL_TEXTURE_TARGET_QCOM;
using gles::GL_TEXTURE_OBJECT_VALID_QCOM;
using gles::GL_STATE_RESTORE;
using gles::GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT;
using gles::GL_TEXTURE_PROTECTED_EXT;
using gles::GL_TEXTURE_FOVEATED_FEATURE_BITS_QCOM;
using gles::GL_TEXTURE_FOVEATED_MIN_PIXEL_DENSITY_QCOM;
using gles::GL_TEXTURE_FOVEATED_FEATURE_QUERY_QCOM;
using gles::GL_TEXTURE_FOVEATED_NUM_FOCAL_POINTS_QUERY_QCOM;
using gles::GL_FRAMEBUFFER_INCOMPLETE_FOVEATION_QCOM;
using gles::GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG;
using gles::GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG;
using gles::GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG;
using gles::GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG;
using gles::GL_SGX_BINARY_IMG;
using gles::GL_TEXTURE_RED_TYPE;
using gles::GL_TEXTURE_GREEN_TYPE;
using gles::GL_TEXTURE_BLUE_TYPE;
using gles::GL_TEXTURE_ALPHA_TYPE;
using gles::GL_TEXTURE_DEPTH_TYPE;
using gles::GL_UNSIGNED_NORMALIZED;
using gles::GL_UNSIGNED_NORMALIZED_EXT;
using gles::GL_TEXTURE_BINDING_2D_ARRAY;
using gles::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT;
using gles::GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES;
using gles::GL_TEXTURE_BUFFER_BINDING;
using gles::GL_TEXTURE_BUFFER_BINDING_EXT;
using gles::GL_TEXTURE_BUFFER_BINDING_OES;
using gles::GL_TEXTURE_BUFFER_EXT;
using gles::GL_TEXTURE_BUFFER_OES;
using gles::GL_MAX_TEXTURE_BUFFER_SIZE;
using gles::GL_MAX_TEXTURE_BUFFER_SIZE_EXT;
using gles::GL_MAX_TEXTURE_BUFFER_SIZE_OES;
using gles::GL_TEXTURE_BINDING_BUFFER;
using gles::GL_TEXTURE_BINDING_BUFFER_EXT;
using gles::GL_TEXTURE_BINDING_BUFFER_OES;
using gles::GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
using gles::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT;
using gles::GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES;
using gles::GL_ANY_SAMPLES_PASSED_EXT;
using gles::GL_SAMPLE_SHADING;
using gles::GL_SAMPLE_SHADING_OES;
using gles::GL_MIN_SAMPLE_SHADING_VALUE;
using gles::GL_MIN_SAMPLE_SHADING_VALUE_OES;
using gles::GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE;
using gles::GL_UNSIGNED_INT_5_9_9_9_REV;
using gles::GL_UNSIGNED_INT_5_9_9_9_REV_APPLE;
using gles::GL_TEXTURE_SHARED_SIZE;
using gles::GL_SLUMINANCE_ALPHA_NV;
using gles::GL_SLUMINANCE8_ALPHA8_NV;
using gles::GL_SLUMINANCE_NV;
using gles::GL_SLUMINANCE8_NV;
using gles::GL_COMPRESSED_SRGB_S3TC_DXT1_NV;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV;
using gles::GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV;
using gles::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
using gles::GL_PRIMITIVES_GENERATED_EXT;
using gles::GL_PRIMITIVES_GENERATED_OES;
using gles::GL_RASTERIZER_DISCARD;
using gles::GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
using gles::GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
using gles::GL_INTERLEAVED_ATTRIBS;
using gles::GL_SEPARATE_ATTRIBS;
using gles::GL_ATC_RGB_AMD;
using gles::GL_ATC_RGBA_EXPLICIT_ALPHA_AMD;
using gles::GL_LOWER_LEFT_EXT;
using gles::GL_UPPER_LEFT_EXT;
using gles::GL_DRAW_FRAMEBUFFER_BINDING;
using gles::GL_DRAW_FRAMEBUFFER_BINDING_ANGLE;
using gles::GL_DRAW_FRAMEBUFFER_BINDING_APPLE;
using gles::GL_DRAW_FRAMEBUFFER_BINDING_NV;
using gles::GL_READ_FRAMEBUFFER_ANGLE;
using gles::GL_READ_FRAMEBUFFER_APPLE;
using gles::GL_READ_FRAMEBUFFER_NV;
using gles::GL_DRAW_FRAMEBUFFER_ANGLE;
using gles::GL_DRAW_FRAMEBUFFER_APPLE;
using gles::GL_DRAW_FRAMEBUFFER_NV;
using gles::GL_READ_FRAMEBUFFER_BINDING;
using gles::GL_READ_FRAMEBUFFER_BINDING_ANGLE;
using gles::GL_READ_FRAMEBUFFER_BINDING_APPLE;
using gles::GL_READ_FRAMEBUFFER_BINDING_NV;
using gles::GL_RENDERBUFFER_SAMPLES_ANGLE;
using gles::GL_RENDERBUFFER_SAMPLES_APPLE;
using gles::GL_RENDERBUFFER_SAMPLES_EXT;
using gles::GL_RENDERBUFFER_SAMPLES_NV;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES;
using gles::GL_STENCIL_INDEX1_OES;
using gles::GL_STENCIL_INDEX4_OES;
using gles::GL_STENCIL_INDEX8_OES;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV;
using gles::GL_MAX_SAMPLES;
using gles::GL_MAX_SAMPLES_ANGLE;
using gles::GL_MAX_SAMPLES_APPLE;
using gles::GL_MAX_SAMPLES_EXT;
using gles::GL_MAX_SAMPLES_NV;
using gles::GL_HALF_FLOAT_OES;
using gles::GL_RGB565_OES;
using gles::GL_ETC1_RGB8_OES;
using gles::GL_TEXTURE_EXTERNAL_OES;
using gles::GL_TEXTURE_BINDING_EXTERNAL_OES;
using gles::GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES;
using gles::GL_PRIMITIVE_RESTART_FIXED_INDEX;
using gles::GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT;
using gles::GL_MAX_ELEMENT_INDEX;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT;
using gles::GL_RED_INTEGER;
using gles::GL_RGB_INTEGER;
using gles::GL_RGBA_INTEGER;
using gles::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT;
using gles::GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES;
using gles::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT;
using gles::GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES;
using gles::GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
using gles::GL_FRAMEBUFFER_SRGB_EXT;
using gles::GL_COMPRESSED_RED_GREEN_RGTC2_EXT;
using gles::GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT;
using gles::GL_SAMPLER_2D_ARRAY;
using gles::GL_SAMPLER_BUFFER;
using gles::GL_SAMPLER_BUFFER_EXT;
using gles::GL_SAMPLER_BUFFER_OES;
using gles::GL_SAMPLER_2D_ARRAY_SHADOW;
using gles::GL_SAMPLER_2D_ARRAY_SHADOW_NV;
using gles::GL_SAMPLER_CUBE_SHADOW;
using gles::GL_SAMPLER_CUBE_SHADOW_NV;
using gles::GL_UNSIGNED_INT_VEC2;
using gles::GL_UNSIGNED_INT_VEC3;
using gles::GL_UNSIGNED_INT_VEC4;
using gles::GL_INT_SAMPLER_2D;
using gles::GL_INT_SAMPLER_3D;
using gles::GL_INT_SAMPLER_CUBE;
using gles::GL_INT_SAMPLER_2D_ARRAY;
using gles::GL_INT_SAMPLER_BUFFER;
using gles::GL_INT_SAMPLER_BUFFER_EXT;
using gles::GL_INT_SAMPLER_BUFFER_OES;
using gles::GL_UNSIGNED_INT_SAMPLER_2D;
using gles::GL_UNSIGNED_INT_SAMPLER_3D;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_BUFFER;
using gles::GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT;
using gles::GL_UNSIGNED_INT_SAMPLER_BUFFER_OES;
using gles::GL_GEOMETRY_SHADER_EXT;
using gles::GL_GEOMETRY_SHADER_OES;
using gles::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
using gles::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES;
using gles::GL_MAX_GEOMETRY_OUTPUT_VERTICES;
using gles::GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT;
using gles::GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES;
using gles::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT;
using gles::GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES;
using gles::GL_UNSIGNED_INT_10_10_10_2_OES;
using gles::GL_INT_10_10_10_2_OES;
using gles::GL_QUERY_WAIT_NV;
using gles::GL_QUERY_NO_WAIT_NV;
using gles::GL_QUERY_BY_REGION_WAIT_NV;
using gles::GL_QUERY_BY_REGION_NO_WAIT_NV;
using gles::GL_POLYGON_OFFSET_CLAMP_EXT;
using gles::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
using gles::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gles::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
using gles::GL_COLOR_SAMPLES_NV;
using gles::GL_TRANSFORM_FEEDBACK_BINDING;
using gles::GL_TIMESTAMP_EXT;
using gles::GL_DEPTH_COMPONENT16_NONLINEAR_NV;
using gles::GL_FIRST_VERTEX_CONVENTION_EXT;
using gles::GL_FIRST_VERTEX_CONVENTION_OES;
using gles::GL_LAST_VERTEX_CONVENTION_EXT;
using gles::GL_LAST_VERTEX_CONVENTION_OES;
using gles::GL_SAMPLE_LOCATION_NV;
using gles::GL_SAMPLE_POSITION;
using gles::GL_SAMPLE_MASK;
using gles::GL_SAMPLE_MASK_VALUE;
using gles::GL_MAX_SAMPLE_MASK_WORDS;
using gles::GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
using gles::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT;
using gles::GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES;
using gles::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
using gles::GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES;
using gles::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
using gles::GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES;
using gles::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
using gles::GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES;
using gles::GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
using gles::GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
using gles::GL_PATCH_VERTICES_EXT;
using gles::GL_PATCH_VERTICES_OES;
using gles::GL_TESS_CONTROL_OUTPUT_VERTICES;
using gles::GL_TESS_CONTROL_OUTPUT_VERTICES_EXT;
using gles::GL_TESS_CONTROL_OUTPUT_VERTICES_OES;
using gles::GL_TESS_GEN_MODE;
using gles::GL_TESS_GEN_MODE_EXT;
using gles::GL_TESS_GEN_MODE_OES;
using gles::GL_TESS_GEN_SPACING;
using gles::GL_TESS_GEN_SPACING_EXT;
using gles::GL_TESS_GEN_SPACING_OES;
using gles::GL_TESS_GEN_VERTEX_ORDER;
using gles::GL_TESS_GEN_VERTEX_ORDER_EXT;
using gles::GL_TESS_GEN_VERTEX_ORDER_OES;
using gles::GL_TESS_GEN_POINT_MODE;
using gles::GL_TESS_GEN_POINT_MODE_EXT;
using gles::GL_TESS_GEN_POINT_MODE_OES;
using gles::GL_ISOLINES;
using gles::GL_ISOLINES_EXT;
using gles::GL_ISOLINES_OES;
using gles::GL_FRACTIONAL_ODD;
using gles::GL_FRACTIONAL_ODD_EXT;
using gles::GL_FRACTIONAL_ODD_OES;
using gles::GL_FRACTIONAL_EVEN;
using gles::GL_FRACTIONAL_EVEN_EXT;
using gles::GL_FRACTIONAL_EVEN_OES;
using gles::GL_MAX_PATCH_VERTICES;
using gles::GL_MAX_PATCH_VERTICES_EXT;
using gles::GL_MAX_PATCH_VERTICES_OES;
using gles::GL_MAX_TESS_GEN_LEVEL;
using gles::GL_MAX_TESS_GEN_LEVEL_EXT;
using gles::GL_MAX_TESS_GEN_LEVEL_OES;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES;
using gles::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT;
using gles::GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES;
using gles::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT;
using gles::GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES;
using gles::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT;
using gles::GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES;
using gles::GL_MAX_TESS_PATCH_COMPONENTS;
using gles::GL_MAX_TESS_PATCH_COMPONENTS_EXT;
using gles::GL_MAX_TESS_PATCH_COMPONENTS_OES;
using gles::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT;
using gles::GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES;
using gles::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
using gles::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT;
using gles::GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES;
using gles::GL_TESS_EVALUATION_SHADER_EXT;
using gles::GL_TESS_EVALUATION_SHADER_OES;
using gles::GL_TESS_CONTROL_SHADER_EXT;
using gles::GL_TESS_CONTROL_SHADER_OES;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT;
using gles::GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT;
using gles::GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES;
using gles::GL_COMPRESSED_RGBA_BPTC_UNORM_EXT;
using gles::GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_EXT;
using gles::GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_EXT;
using gles::GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_EXT;
using gles::GL_COVERAGE_COMPONENT_NV;
using gles::GL_COVERAGE_COMPONENT4_NV;
using gles::GL_COVERAGE_ATTACHMENT_NV;
using gles::GL_COVERAGE_BUFFERS_NV;
using gles::GL_COVERAGE_SAMPLES_NV;
using gles::GL_COVERAGE_ALL_FRAGMENTS_NV;
using gles::GL_COVERAGE_EDGE_FRAGMENTS_NV;
using gles::GL_COVERAGE_AUTOMATIC_NV;
using gles::GL_INCLUSIVE_EXT;
using gles::GL_EXCLUSIVE_EXT;
using gles::GL_WINDOW_RECTANGLE_EXT;
using gles::GL_WINDOW_RECTANGLE_MODE_EXT;
using gles::GL_MAX_WINDOW_RECTANGLES_EXT;
using gles::GL_NUM_WINDOW_RECTANGLES_EXT;
using gles::GL_COPY_READ_BUFFER_BINDING;
using gles::GL_COPY_READ_BUFFER_NV;
using gles::GL_COPY_WRITE_BUFFER_BINDING;
using gles::GL_COPY_WRITE_BUFFER_NV;
using gles::GL_MAX_IMAGE_UNITS;
using gles::GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES;
using gles::GL_IMAGE_BINDING_NAME;
using gles::GL_IMAGE_BINDING_LEVEL;
using gles::GL_IMAGE_BINDING_LAYERED;
using gles::GL_IMAGE_BINDING_LAYER;
using gles::GL_IMAGE_BINDING_ACCESS;
using gles::GL_DRAW_INDIRECT_BUFFER_BINDING;
using gles::GL_VERTEX_BINDING_BUFFER;
using gles::GL_MALI_SHADER_BINARY_ARM;
using gles::GL_MALI_PROGRAM_BINARY_ARM;
using gles::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT;
using gles::GL_SHADER_PIXEL_LOCAL_STORAGE_EXT;
using gles::GL_FETCH_PER_SAMPLE_ARM;
using gles::GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM;
using gles::GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT;
using gles::GL_TEXTURE_ASTC_DECODE_PRECISION_EXT;
using gles::GL_RGBA16_SNORM_EXT;
using gles::GL_SIGNED_NORMALIZED;
using gles::GL_PERFMON_GLOBAL_MODE_QCOM;
using gles::GL_CPU_OPTIMIZED_QCOM;
using gles::GL_GPU_OPTIMIZED_QCOM;
using gles::GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM;
using gles::GL_GPU_DISJOINT_EXT;
using gles::GL_SR8_EXT;
using gles::GL_SRG8_EXT;
using gles::GL_TEXTURE_FORMAT_SRGB_OVERRIDE_EXT;
using gles::GL_SHADER_BINARY_VIV;
using gles::GL_INT8_NV;
using gles::GL_INT8_VEC2_NV;
using gles::GL_INT8_VEC3_NV;
using gles::GL_INT8_VEC4_NV;
using gles::GL_INT16_NV;
using gles::GL_INT16_VEC2_NV;
using gles::GL_INT16_VEC3_NV;
using gles::GL_INT16_VEC4_NV;
using gles::GL_INT64_VEC2_NV;
using gles::GL_INT64_VEC3_NV;
using gles::GL_INT64_VEC4_NV;
using gles::GL_UNSIGNED_INT8_NV;
using gles::GL_UNSIGNED_INT8_VEC2_NV;
using gles::GL_UNSIGNED_INT8_VEC3_NV;
using gles::GL_UNSIGNED_INT8_VEC4_NV;
using gles::GL_UNSIGNED_INT16_NV;
using gles::GL_UNSIGNED_INT16_VEC2_NV;
using gles::GL_UNSIGNED_INT16_VEC3_NV;
using gles::GL_UNSIGNED_INT16_VEC4_NV;
using gles::GL_UNSIGNED_INT64_VEC2_NV;
using gles::GL_UNSIGNED_INT64_VEC3_NV;
using gles::GL_UNSIGNED_INT64_VEC4_NV;
using gles::GL_FLOAT16_NV;
using gles::GL_FLOAT16_VEC2_NV;
using gles::GL_FLOAT16_VEC3_NV;
using gles::GL_FLOAT16_VEC4_NV;
using gles::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
using gles::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT;
using gles::GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_EXT;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_OES;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT;
using gles::GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES;
using gles::GL_INT_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
using gles::GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT;
using gles::GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES;
using gles::GL_FACTOR_MIN_AMD;
using gles::GL_FACTOR_MAX_AMD;
using gles::GL_IMAGE_2D;
using gles::GL_IMAGE_3D;
using gles::GL_IMAGE_CUBE;
using gles::GL_IMAGE_BUFFER;
using gles::GL_IMAGE_BUFFER_EXT;
using gles::GL_IMAGE_BUFFER_OES;
using gles::GL_IMAGE_2D_ARRAY;
using gles::GL_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_IMAGE_CUBE_MAP_ARRAY_EXT;
using gles::GL_IMAGE_CUBE_MAP_ARRAY_OES;
using gles::GL_INT_IMAGE_2D;
using gles::GL_INT_IMAGE_3D;
using gles::GL_INT_IMAGE_CUBE;
using gles::GL_INT_IMAGE_BUFFER;
using gles::GL_INT_IMAGE_BUFFER_EXT;
using gles::GL_INT_IMAGE_BUFFER_OES;
using gles::GL_INT_IMAGE_2D_ARRAY;
using gles::GL_INT_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
using gles::GL_INT_IMAGE_CUBE_MAP_ARRAY_OES;
using gles::GL_UNSIGNED_INT_IMAGE_2D;
using gles::GL_UNSIGNED_INT_IMAGE_3D;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE;
using gles::GL_UNSIGNED_INT_IMAGE_BUFFER;
using gles::GL_UNSIGNED_INT_IMAGE_BUFFER_EXT;
using gles::GL_UNSIGNED_INT_IMAGE_BUFFER_OES;
using gles::GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT;
using gles::GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES;
using gles::GL_IMAGE_BINDING_FORMAT;
using gles::GL_SQUARE_NV;
using gles::GL_ROUND_NV;
using gles::GL_TRIANGULAR_NV;
using gles::GL_BEVEL_NV;
using gles::GL_MITER_REVERT_NV;
using gles::GL_MITER_TRUNCATE_NV;
using gles::GL_PATH_ERROR_POSITION_NV;
using gles::GL_PATH_GEN_MODE_NV;
using gles::GL_PATH_GEN_COEFF_NV;
using gles::GL_PATH_GEN_COMPONENTS_NV;
using gles::GL_MOVE_TO_RESETS_NV;
using gles::GL_MOVE_TO_CONTINUES_NV;
using gles::GL_PATH_STENCIL_FUNC_NV;
using gles::GL_PATH_STENCIL_REF_NV;
using gles::GL_PATH_STENCIL_VALUE_MASK_NV;
using gles::GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV;
using gles::GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV;
using gles::GL_PATH_COVER_DEPTH_FUNC_NV;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
using gles::GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
using gles::GL_MAX_VERTEX_IMAGE_UNIFORMS;
using gles::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
using gles::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT;
using gles::GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES;
using gles::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
using gles::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT;
using gles::GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES;
using gles::GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
using gles::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT;
using gles::GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES;
using gles::GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
using gles::GL_MAX_COMBINED_IMAGE_UNIFORMS;
using gles::GL_SHADER_STORAGE_BUFFER_BINDING;
using gles::GL_SHADER_STORAGE_BUFFER_START;
using gles::GL_SHADER_STORAGE_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT;
using gles::GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES;
using gles::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT;
using gles::GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES;
using gles::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT;
using gles::GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES;
using gles::GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS;
using gles::GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS;
using gles::GL_MAX_SHADER_STORAGE_BLOCK_SIZE;
using gles::GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS;
using gles::GL_DISPATCH_INDIRECT_BUFFER_BINDING;
using gles::GL_COLOR_ATTACHMENT_EXT;
using gles::GL_MULTIVIEW_EXT;
using gles::GL_MAX_MULTIVIEW_BUFFERS_EXT;
using gles::GL_CONTEXT_ROBUST_ACCESS_EXT;
using gles::GL_TEXTURE_2D_MULTISAMPLE_ARRAY_OES;
using gles::GL_TEXTURE_BINDING_2D_MULTISAMPLE;
using gles::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
using gles::GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY_OES;
using gles::GL_TEXTURE_SAMPLES;
using gles::GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
using gles::GL_SAMPLER_2D_MULTISAMPLE;
using gles::GL_INT_SAMPLER_2D_MULTISAMPLE;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
using gles::GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
using gles::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
using gles::GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY_OES;
using gles::GL_MAX_COLOR_TEXTURE_SAMPLES;
using gles::GL_MAX_DEPTH_TEXTURE_SAMPLES;
using gles::GL_MAX_INTEGER_SAMPLES;
using gles::GL_MAX_SERVER_WAIT_TIMEOUT;
using gles::GL_MAX_SERVER_WAIT_TIMEOUT_APPLE;
using gles::GL_OBJECT_TYPE_APPLE;
using gles::GL_SYNC_CONDITION_APPLE;
using gles::GL_SYNC_STATUS_APPLE;
using gles::GL_SYNC_FLAGS_APPLE;
using gles::GL_SYNC_FENCE;
using gles::GL_SYNC_FENCE_APPLE;
using gles::GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE;
using gles::GL_UNSIGNALED;
using gles::GL_UNSIGNALED_APPLE;
using gles::GL_SIGNALED;
using gles::GL_SIGNALED_APPLE;
using gles::GL_ALREADY_SIGNALED_APPLE;
using gles::GL_TIMEOUT_EXPIRED_APPLE;
using gles::GL_CONDITION_SATISFIED_APPLE;
using gles::GL_WAIT_FAILED_APPLE;
using gles::GL_MAX_VERTEX_OUTPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_INPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT;
using gles::GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES;
using gles::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
using gles::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT;
using gles::GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES;
using gles::GL_MAX_FRAGMENT_INPUT_COMPONENTS;
using gles::GL_TEXTURE_IMMUTABLE_FORMAT;
using gles::GL_TEXTURE_IMMUTABLE_FORMAT_EXT;
using gles::GL_SGX_PROGRAM_BINARY_IMG;
using gles::GL_RENDERBUFFER_SAMPLES_IMG;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG;
using gles::GL_MAX_SAMPLES_IMG;
using gles::GL_TEXTURE_SAMPLES_IMG;
using gles::GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG;
using gles::GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG;
using gles::GL_CUBIC_IMG;
using gles::GL_CUBIC_MIPMAP_NEAREST_IMG;
using gles::GL_CUBIC_MIPMAP_LINEAR_IMG;
using gles::GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_AND_DOWNSAMPLE_IMG;
using gles::GL_NUM_DOWNSAMPLE_SCALES_IMG;
using gles::GL_DOWNSAMPLE_SCALES_IMG;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SCALE_IMG;
using gles::GL_MAX_DEBUG_MESSAGE_LENGTH;
using gles::GL_MAX_DEBUG_LOGGED_MESSAGES;
using gles::GL_DEBUG_LOGGED_MESSAGES;
using gles::GL_BUFFER_OBJECT_EXT;
using gles::GL_QUERY_OBJECT_EXT;
using gles::GL_VERTEX_ARRAY_OBJECT_EXT;
using gles::GL_VIRTUAL_PAGE_SIZE_X_EXT;
using gles::GL_VIRTUAL_PAGE_SIZE_Y_EXT;
using gles::GL_VIRTUAL_PAGE_SIZE_Z_EXT;
using gles::GL_MAX_SPARSE_TEXTURE_SIZE_EXT;
using gles::GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT;
using gles::GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT;
using gles::GL_TEXTURE_BUFFER_OFFSET;
using gles::GL_TEXTURE_BUFFER_OFFSET_EXT;
using gles::GL_TEXTURE_BUFFER_OFFSET_OES;
using gles::GL_TEXTURE_BUFFER_SIZE;
using gles::GL_TEXTURE_BUFFER_SIZE_EXT;
using gles::GL_TEXTURE_BUFFER_SIZE_OES;
using gles::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT;
using gles::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT;
using gles::GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES;
using gles::GL_TEXTURE_SPARSE_EXT;
using gles::GL_VIRTUAL_PAGE_SIZE_INDEX_EXT;
using gles::GL_NUM_VIRTUAL_PAGE_SIZES_EXT;
using gles::GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT;
using gles::GL_NUM_SPARSE_LEVELS_EXT;
using gles::GL_MAX_SHADER_COMPILER_THREADS_KHR;
using gles::GL_COMPLETION_STATUS_KHR;
using gles::GL_MAX_COMPUTE_UNIFORM_BLOCKS;
using gles::GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS;
using gles::GL_MAX_COMPUTE_IMAGE_UNIFORMS;
using gles::GL_MAX_COMPUTE_WORK_GROUP_COUNT;
using gles::GL_MAX_COMPUTE_WORK_GROUP_SIZE;
using gles::GL_SHADER_BINARY_DMP;
using gles::GL_SMAPHS30_PROGRAM_BINARY_DMP;
using gles::GL_SMAPHS_PROGRAM_BINARY_DMP;
using gles::GL_DMP_PROGRAM_BINARY_DMP;
using gles::GL_GCCSO_SHADER_BINARY_FJ;
using gles::GL_BLEND_PREMULTIPLIED_SRC_NV;
using gles::GL_BLEND_OVERLAP_NV;
using gles::GL_UNCORRELATED_NV;
using gles::GL_DISJOINT_NV;
using gles::GL_CONJOINT_NV;
using gles::GL_BLEND_ADVANCED_COHERENT_KHR;
using gles::GL_BLEND_ADVANCED_COHERENT_NV;
using gles::GL_SRC_NV;
using gles::GL_DST_NV;
using gles::GL_SRC_OVER_NV;
using gles::GL_DST_OVER_NV;
using gles::GL_SRC_IN_NV;
using gles::GL_DST_IN_NV;
using gles::GL_SRC_OUT_NV;
using gles::GL_DST_OUT_NV;
using gles::GL_SRC_ATOP_NV;
using gles::GL_DST_ATOP_NV;
using gles::GL_PLUS_NV;
using gles::GL_PLUS_DARKER_NV;
using gles::GL_MULTIPLY;
using gles::GL_MULTIPLY_KHR;
using gles::GL_MULTIPLY_NV;
using gles::GL_SCREEN;
using gles::GL_SCREEN_KHR;
using gles::GL_SCREEN_NV;
using gles::GL_OVERLAY;
using gles::GL_OVERLAY_KHR;
using gles::GL_OVERLAY_NV;
using gles::GL_DARKEN;
using gles::GL_DARKEN_KHR;
using gles::GL_DARKEN_NV;
using gles::GL_LIGHTEN;
using gles::GL_LIGHTEN_KHR;
using gles::GL_LIGHTEN_NV;
using gles::GL_COLORDODGE;
using gles::GL_COLORDODGE_KHR;
using gles::GL_COLORDODGE_NV;
using gles::GL_COLORBURN;
using gles::GL_COLORBURN_KHR;
using gles::GL_COLORBURN_NV;
using gles::GL_HARDLIGHT;
using gles::GL_HARDLIGHT_KHR;
using gles::GL_HARDLIGHT_NV;
using gles::GL_SOFTLIGHT;
using gles::GL_SOFTLIGHT_KHR;
using gles::GL_SOFTLIGHT_NV;
using gles::GL_DIFFERENCE;
using gles::GL_DIFFERENCE_KHR;
using gles::GL_DIFFERENCE_NV;
using gles::GL_MINUS_NV;
using gles::GL_EXCLUSION;
using gles::GL_EXCLUSION_KHR;
using gles::GL_EXCLUSION_NV;
using gles::GL_CONTRAST_NV;
using gles::GL_INVERT_RGB_NV;
using gles::GL_LINEARDODGE_NV;
using gles::GL_LINEARBURN_NV;
using gles::GL_VIVIDLIGHT_NV;
using gles::GL_LINEARLIGHT_NV;
using gles::GL_PINLIGHT_NV;
using gles::GL_HARDMIX_NV;
using gles::GL_HSL_HUE;
using gles::GL_HSL_HUE_KHR;
using gles::GL_HSL_HUE_NV;
using gles::GL_HSL_SATURATION;
using gles::GL_HSL_SATURATION_KHR;
using gles::GL_HSL_SATURATION_NV;
using gles::GL_HSL_COLOR;
using gles::GL_HSL_COLOR_KHR;
using gles::GL_HSL_COLOR_NV;
using gles::GL_HSL_LUMINOSITY;
using gles::GL_HSL_LUMINOSITY_KHR;
using gles::GL_HSL_LUMINOSITY_NV;
using gles::GL_PLUS_CLAMPED_NV;
using gles::GL_PLUS_CLAMPED_ALPHA_NV;
using gles::GL_MINUS_CLAMPED_NV;
using gles::GL_INVERT_OVG_NV;
using gles::GL_PRIMITIVE_BOUNDING_BOX;
using gles::GL_PRIMITIVE_BOUNDING_BOX_EXT;
using gles::GL_PRIMITIVE_BOUNDING_BOX_OES;
using gles::GL_ATOMIC_COUNTER_BUFFER_START;
using gles::GL_ATOMIC_COUNTER_BUFFER_SIZE;
using gles::GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES;
using gles::GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
using gles::GL_MAX_VERTEX_ATOMIC_COUNTERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT;
using gles::GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT;
using gles::GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT;
using gles::GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES;
using gles::GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
using gles::GL_MAX_COMBINED_ATOMIC_COUNTERS;
using gles::GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
using gles::GL_UNSIGNED_INT_ATOMIC_COUNTER;
using gles::GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
using gles::GL_FRAGMENT_COVERAGE_TO_COLOR_NV;
using gles::GL_FRAGMENT_COVERAGE_COLOR_NV;
using gles::GL_DEBUG_OUTPUT;
using gles::GL_IS_PER_PATCH;
using gles::GL_IS_PER_PATCH_EXT;
using gles::GL_IS_PER_PATCH_OES;
using gles::GL_NAME_LENGTH;
using gles::GL_TYPE;
using gles::GL_ARRAY_SIZE;
using gles::GL_OFFSET;
using gles::GL_BLOCK_INDEX;
using gles::GL_ARRAY_STRIDE;
using gles::GL_MATRIX_STRIDE;
using gles::GL_IS_ROW_MAJOR;
using gles::GL_ATOMIC_COUNTER_BUFFER_INDEX;
using gles::GL_BUFFER_BINDING;
using gles::GL_BUFFER_DATA_SIZE;
using gles::GL_NUM_ACTIVE_VARIABLES;
using gles::GL_ACTIVE_VARIABLES;
using gles::GL_REFERENCED_BY_VERTEX_SHADER;
using gles::GL_REFERENCED_BY_TESS_CONTROL_SHADER;
using gles::GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT;
using gles::GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES;
using gles::GL_REFERENCED_BY_TESS_EVALUATION_SHADER;
using gles::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT;
using gles::GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES;
using gles::GL_REFERENCED_BY_GEOMETRY_SHADER;
using gles::GL_REFERENCED_BY_GEOMETRY_SHADER_EXT;
using gles::GL_REFERENCED_BY_GEOMETRY_SHADER_OES;
using gles::GL_REFERENCED_BY_FRAGMENT_SHADER;
using gles::GL_REFERENCED_BY_COMPUTE_SHADER;
using gles::GL_TOP_LEVEL_ARRAY_SIZE;
using gles::GL_TOP_LEVEL_ARRAY_STRIDE;
using gles::GL_LOCATION;
using gles::GL_LOCATION_INDEX_EXT;
using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT;
using gles::GL_FRAMEBUFFER_DEFAULT_LAYERS_OES;
using gles::GL_MAX_FRAMEBUFFER_WIDTH;
using gles::GL_MAX_FRAMEBUFFER_HEIGHT;
using gles::GL_MAX_FRAMEBUFFER_LAYERS;
using gles::GL_MAX_FRAMEBUFFER_LAYERS_EXT;
using gles::GL_MAX_FRAMEBUFFER_LAYERS_OES;
using gles::GL_MAX_FRAMEBUFFER_SAMPLES;
using gles::GL_RASTER_MULTISAMPLE_EXT;
using gles::GL_RASTER_SAMPLES_EXT;
using gles::GL_MAX_RASTER_SAMPLES_EXT;
using gles::GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT;
using gles::GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT;
using gles::GL_EFFECTIVE_RASTER_SAMPLES_EXT;
using gles::GL_DEPTH_SAMPLES_NV;
using gles::GL_STENCIL_SAMPLES_NV;
using gles::GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV;
using gles::GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV;
using gles::GL_COVERAGE_MODULATION_TABLE_NV;
using gles::GL_COVERAGE_MODULATION_NV;
using gles::GL_COVERAGE_MODULATION_TABLE_SIZE_NV;
using gles::GL_FILL_RECTANGLE_NV;
using gles::GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV;
using gles::GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV;
using gles::GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV;
using gles::GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV;
using gles::GL_PROGRAMMABLE_SAMPLE_LOCATION_NV;
using gles::GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV;
using gles::GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV;
using gles::GL_CONSERVATIVE_RASTERIZATION_NV;
using gles::GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV;
using gles::GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV;
using gles::GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV;
using gles::GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV;
using gles::GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV;
using gles::GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV;
using gles::GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV;
using gles::GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV;
using gles::GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV;
using gles::GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV;
using gles::GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV;
using gles::GL_VIEWPORT_SWIZZLE_X_NV;
using gles::GL_VIEWPORT_SWIZZLE_Y_NV;
using gles::GL_VIEWPORT_SWIZZLE_Z_NV;
using gles::GL_VIEWPORT_SWIZZLE_W_NV;
using gles::GL_CLIP_ORIGIN_EXT;
using gles::GL_CLIP_DEPTH_MODE_EXT;
using gles::GL_NEGATIVE_ONE_TO_ONE_EXT;
using gles::GL_ZERO_TO_ONE_EXT;
using gles::GL_TEXTURE_REDUCTION_MODE_EXT;
using gles::GL_WEIGHTED_AVERAGE_EXT;
using gles::GL_FONT_GLYPHS_AVAILABLE_NV;
using gles::GL_FONT_TARGET_UNAVAILABLE_NV;
using gles::GL_FONT_UNAVAILABLE_NV;
using gles::GL_FONT_UNINTELLIGIBLE_NV;
using gles::GL_STANDARD_FONT_FORMAT_NV;
using gles::GL_FRAGMENT_INPUT_NV;
using gles::GL_MULTISAMPLES_NV;
using gles::GL_SUPERSAMPLE_SCALE_X_NV;
using gles::GL_SUPERSAMPLE_SCALE_Y_NV;
using gles::GL_CONFORMANT_NV;
using gles::GL_VIEWPORT_POSITION_W_SCALE_NV;
using gles::GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV;
using gles::GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV;
using gles::GL_MULTISAMPLE_LINE_WIDTH_RANGE;
using gles::GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY;
using gles::GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE;
using gles::GL_BGRA8_EXT;
using gles::GL_TEXTURE_USAGE_ANGLE;
using gles::GL_FRAMEBUFFER_ATTACHMENT_ANGLE;
using gles::GL_PACK_REVERSE_ROW_ORDER_ANGLE;
using gles::GL_PROGRAM_BINARY_ANGLE;
using gles::GL_COMPRESSED_RGBA_ASTC_4x4;
using gles::GL_COMPRESSED_RGBA_ASTC_4x4_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_5x4;
using gles::GL_COMPRESSED_RGBA_ASTC_5x4_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_5x5;
using gles::GL_COMPRESSED_RGBA_ASTC_5x5_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_6x5;
using gles::GL_COMPRESSED_RGBA_ASTC_6x5_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_6x6;
using gles::GL_COMPRESSED_RGBA_ASTC_6x6_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_8x5;
using gles::GL_COMPRESSED_RGBA_ASTC_8x5_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_8x6;
using gles::GL_COMPRESSED_RGBA_ASTC_8x6_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_8x8;
using gles::GL_COMPRESSED_RGBA_ASTC_8x8_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_10x5;
using gles::GL_COMPRESSED_RGBA_ASTC_10x5_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_10x6;
using gles::GL_COMPRESSED_RGBA_ASTC_10x6_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_10x8;
using gles::GL_COMPRESSED_RGBA_ASTC_10x8_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_10x10;
using gles::GL_COMPRESSED_RGBA_ASTC_10x10_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_12x10;
using gles::GL_COMPRESSED_RGBA_ASTC_12x10_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_12x12;
using gles::GL_COMPRESSED_RGBA_ASTC_12x12_KHR;
using gles::GL_COMPRESSED_RGBA_ASTC_3x3x3_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_4x3x3_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_4x4x3_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_4x4x4_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_5x4x4_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_5x5x4_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_5x5x5_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_6x5x5_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_6x6x5_OES;
using gles::GL_COMPRESSED_RGBA_ASTC_6x6x6_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES;
using gles::GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES;
using gles::GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV2_IMG;
using gles::GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV2_IMG;
using gles::GL_PERFQUERY_COUNTER_EVENT_INTEL;
using gles::GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL;
using gles::GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL;
using gles::GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL;
using gles::GL_PERFQUERY_COUNTER_RAW_INTEL;
using gles::GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL;
using gles::GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL;
using gles::GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL;
using gles::GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL;
using gles::GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL;
using gles::GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL;
using gles::GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL;
using gles::GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL;
using gles::GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL;
using gles::GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL;
using gles::GL_CONSERVATIVE_RASTER_MODE_NV;
using gles::GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV;
using gles::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV;
using gles::GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_NV;
using gles::GL_NUM_TILING_TYPES_EXT;
using gles::GL_TILING_TYPES_EXT;
using gles::GL_OPTIMAL_TILING_EXT;
using gles::GL_LINEAR_TILING_EXT;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR;
using gles::GL_MAX_VIEWS_OVR;
using gles::GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR;
using gles::GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR;
using gles::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_FAST_SIZE_EXT;
using gles::GL_MAX_SHADER_COMBINED_LOCAL_STORAGE_SIZE_EXT;
using gles::GL_FRAMEBUFFER_INCOMPLETE_INSUFFICIENT_SHADER_COMBINED_LOCAL_STORAGE_EXT;
using gles::GL_SHARED_EDGE_NV;
using gles::GL_ROUNDED_RECT_NV;
using gles::GL_RELATIVE_ROUNDED_RECT_NV;
using gles::GL_ROUNDED_RECT2_NV;
using gles::GL_RELATIVE_ROUNDED_RECT2_NV;
using gles::GL_ROUNDED_RECT4_NV;
using gles::GL_RELATIVE_ROUNDED_RECT4_NV;
using gles::GL_ROUNDED_RECT8_NV;
using gles::GL_RELATIVE_ROUNDED_RECT8_NV;
using gles::GL_RESTART_PATH_NV;
using gles::GL_DUP_FIRST_CUBIC_CURVE_TO_NV;
using gles::GL_DUP_LAST_CUBIC_CURVE_TO_NV;
using gles::GL_RECT_NV;
using gles::GL_RELATIVE_RECT_NV;
using gles::GL_CIRCULAR_CCW_ARC_TO_NV;
using gles::GL_CIRCULAR_CW_ARC_TO_NV;
using gles::GL_CIRCULAR_TANGENT_ARC_TO_NV;
using gles::GL_ARC_TO_NV;
using gles::GL_RELATIVE_ARC_TO_NV;
using gles::GL_UUID_SIZE_EXT;
using gles::GL_LUID_SIZE_EXT;



} // namespace gles20ext
