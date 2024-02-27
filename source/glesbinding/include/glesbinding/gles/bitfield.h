
#pragma once


#include <glesbinding/nogles.h>

#include <glesbinding/glesbinding_features.h>

#include <glesbinding/SharedBitfield.h>


namespace gles
{


enum class AttribMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT                        = 0x00000100,
    GL_STENCIL_BUFFER_BIT                      = 0x00000400,
    GL_COLOR_BUFFER_BIT                        = 0x00004000
};


enum class BufferStorageMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT                            = 0x0001,
    GL_MAP_READ_BIT_EXT                        = 0x0001,
    GL_MAP_WRITE_BIT                           = 0x0002,
    GL_MAP_WRITE_BIT_EXT                       = 0x0002,
    GL_MAP_PERSISTENT_BIT_EXT                  = 0x0040,
    GL_MAP_COHERENT_BIT_EXT                    = 0x0080,
    GL_DYNAMIC_STORAGE_BIT_EXT                 = 0x0100,
    GL_CLIENT_STORAGE_BIT_EXT                  = 0x0200
};


enum class ClearBufferMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_DEPTH_BUFFER_BIT                        = 0x00000100, // reuse from AttribMask
    GL_STENCIL_BUFFER_BIT                      = 0x00000400, // reuse from AttribMask
    GL_COLOR_BUFFER_BIT                        = 0x00004000, // reuse from AttribMask
    GL_COVERAGE_BUFFER_BIT_NV                  = 0x00008000
};


enum class ContextFlagMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_CONTEXT_FLAG_DEBUG_BIT                  = 0x00000002,
    GL_CONTEXT_FLAG_DEBUG_BIT_KHR              = 0x00000002,
    GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT          = 0x00000004,
    GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR           = 0x00000008,
    GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT  = 0x00000010
};


enum class FragmentShaderDestMaskATI : unsigned int
{
    GL_NONE_BIT                                = 0x0 // Generic GL_NONE_BIT
};


enum class MapBufferAccessMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_MAP_READ_BIT                            = 0x0001, // reuse from BufferStorageMask
    GL_MAP_READ_BIT_EXT                        = 0x0001, // reuse from BufferStorageMask
    GL_MAP_WRITE_BIT                           = 0x0002, // reuse from BufferStorageMask
    GL_MAP_WRITE_BIT_EXT                       = 0x0002, // reuse from BufferStorageMask
    GL_MAP_INVALIDATE_RANGE_BIT                = 0x0004,
    GL_MAP_INVALIDATE_RANGE_BIT_EXT            = 0x0004,
    GL_MAP_INVALIDATE_BUFFER_BIT               = 0x0008,
    GL_MAP_INVALIDATE_BUFFER_BIT_EXT           = 0x0008,
    GL_MAP_FLUSH_EXPLICIT_BIT                  = 0x0010,
    GL_MAP_FLUSH_EXPLICIT_BIT_EXT              = 0x0010,
    GL_MAP_UNSYNCHRONIZED_BIT                  = 0x0020,
    GL_MAP_UNSYNCHRONIZED_BIT_EXT              = 0x0020,
    GL_MAP_PERSISTENT_BIT_EXT                  = 0x0040, // reuse from BufferStorageMask
    GL_MAP_COHERENT_BIT_EXT                    = 0x0080 // reuse from BufferStorageMask
};


enum class MemoryBarrierMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT         = 0x00000001,
    GL_ELEMENT_ARRAY_BARRIER_BIT               = 0x00000002,
    GL_UNIFORM_BARRIER_BIT                     = 0x00000004,
    GL_TEXTURE_FETCH_BARRIER_BIT               = 0x00000008,
    GL_SHADER_IMAGE_ACCESS_BARRIER_BIT         = 0x00000020,
    GL_COMMAND_BARRIER_BIT                     = 0x00000040,
    GL_PIXEL_BUFFER_BARRIER_BIT                = 0x00000080,
    GL_TEXTURE_UPDATE_BARRIER_BIT              = 0x00000100,
    GL_BUFFER_UPDATE_BARRIER_BIT               = 0x00000200,
    GL_FRAMEBUFFER_BARRIER_BIT                 = 0x00000400,
    GL_TRANSFORM_FEEDBACK_BARRIER_BIT          = 0x00000800,
    GL_ATOMIC_COUNTER_BARRIER_BIT              = 0x00001000,
    GL_SHADER_STORAGE_BARRIER_BIT              = 0x00002000,
    GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT    = 0x00004000,
    GL_ALL_BARRIER_BITS                        = 0xFFFFFFFF
};


enum class PathFontStyle : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_BOLD_BIT_NV                             = 0x01,
    GL_ITALIC_BIT_NV                           = 0x02
};


enum class PathMetricMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_GLYPH_WIDTH_BIT_NV                      = 0x01,
    GL_GLYPH_HEIGHT_BIT_NV                     = 0x02,
    GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV       = 0x04,
    GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV       = 0x08,
    GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = 0x10,
    GL_GLYPH_VERTICAL_BEARING_X_BIT_NV         = 0x20,
    GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV         = 0x40,
    GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV   = 0x80,
    GL_GLYPH_HAS_KERNING_BIT_NV                = 0x100,
    GL_FONT_X_MIN_BOUNDS_BIT_NV                = 0x00010000,
    GL_FONT_Y_MIN_BOUNDS_BIT_NV                = 0x00020000,
    GL_FONT_X_MAX_BOUNDS_BIT_NV                = 0x00040000,
    GL_FONT_Y_MAX_BOUNDS_BIT_NV                = 0x00080000,
    GL_FONT_UNITS_PER_EM_BIT_NV                = 0x00100000,
    GL_FONT_ASCENDER_BIT_NV                    = 0x00200000,
    GL_FONT_DESCENDER_BIT_NV                   = 0x00400000,
    GL_FONT_HEIGHT_BIT_NV                      = 0x00800000,
    GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV           = 0x01000000,
    GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV          = 0x02000000,
    GL_FONT_UNDERLINE_POSITION_BIT_NV          = 0x04000000,
    GL_FONT_UNDERLINE_THICKNESS_BIT_NV         = 0x08000000,
    GL_FONT_HAS_KERNING_BIT_NV                 = 0x10000000,
    GL_FONT_NUM_GLYPH_INDICES_BIT_NV           = 0x20000000
};


enum class PerformanceQueryCapsMaskINTEL : unsigned int
{
    GL_PERFQUERY_SINGLE_CONTEXT_INTEL          = 0x00000000,
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_PERFQUERY_GLOBAL_CONTEXT_INTEL          = 0x00000001
};


enum class SyncObjectMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_SYNC_FLUSH_COMMANDS_BIT                 = 0x00000001,
    GL_SYNC_FLUSH_COMMANDS_BIT_APPLE           = 0x00000001
};


enum class UnusedMask : unsigned int
{
    GL_UNUSED_BIT                              = 0x00000000
};


enum class UseProgramStageMask : unsigned int
{
    GL_NONE_BIT                                = 0x0, // Generic GL_NONE_BIT
    GL_VERTEX_SHADER_BIT                       = 0x00000001,
    GL_VERTEX_SHADER_BIT_EXT                   = 0x00000001,
    GL_FRAGMENT_SHADER_BIT                     = 0x00000002,
    GL_FRAGMENT_SHADER_BIT_EXT                 = 0x00000002,
    GL_GEOMETRY_SHADER_BIT                     = 0x00000004,
    GL_GEOMETRY_SHADER_BIT_EXT                 = 0x00000004,
    GL_GEOMETRY_SHADER_BIT_OES                 = 0x00000004,
    GL_TESS_CONTROL_SHADER_BIT                 = 0x00000008,
    GL_TESS_CONTROL_SHADER_BIT_EXT             = 0x00000008,
    GL_TESS_CONTROL_SHADER_BIT_OES             = 0x00000008,
    GL_TESS_EVALUATION_SHADER_BIT              = 0x00000010,
    GL_TESS_EVALUATION_SHADER_BIT_EXT          = 0x00000010,
    GL_TESS_EVALUATION_SHADER_BIT_OES          = 0x00000010,
    GL_COMPUTE_SHADER_BIT                      = 0x00000020,
    GL_MESH_SHADER_BIT_NV                      = 0x00000040,
    GL_TASK_SHADER_BIT_NV                      = 0x00000080,
    GL_ALL_SHADER_BITS                         = 0xFFFFFFFF,
    GL_ALL_SHADER_BITS_EXT                     = 0xFFFFFFFF
};


// import bitfields to namespace

GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ALL_BARRIER_BITS = MemoryBarrierMask::GL_ALL_BARRIER_BITS;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_ALL_SHADER_BITS = UseProgramStageMask::GL_ALL_SHADER_BITS;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_ALL_SHADER_BITS_EXT = UseProgramStageMask::GL_ALL_SHADER_BITS_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ATOMIC_COUNTER_BARRIER_BIT = MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const PathFontStyle GL_BOLD_BIT_NV = PathFontStyle::GL_BOLD_BIT_NV;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_BUFFER_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT = MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT;
GLESBINDING_CONSTEXPR static const BufferStorageMask GL_CLIENT_STORAGE_BIT_EXT = BufferStorageMask::GL_CLIENT_STORAGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_COMMAND_BARRIER_BIT = MemoryBarrierMask::GL_COMMAND_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_COMPUTE_SHADER_BIT = UseProgramStageMask::GL_COMPUTE_SHADER_BIT;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT = ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_DEBUG_BIT_KHR = ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT_KHR;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR = ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT = ContextFlagMask::GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const ContextFlagMask GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT = ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT;
GLESBINDING_CONSTEXPR static const ClearBufferMask GL_COVERAGE_BUFFER_BIT_NV = ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const BufferStorageMask GL_DYNAMIC_STORAGE_BIT_EXT = BufferStorageMask::GL_DYNAMIC_STORAGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_ELEMENT_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_ASCENDER_BIT_NV = PathMetricMask::GL_FONT_ASCENDER_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_DESCENDER_BIT_NV = PathMetricMask::GL_FONT_DESCENDER_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_HAS_KERNING_BIT_NV = PathMetricMask::GL_FONT_HAS_KERNING_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_HEIGHT_BIT_NV = PathMetricMask::GL_FONT_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV = PathMetricMask::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV = PathMetricMask::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_NUM_GLYPH_INDICES_BIT_NV = PathMetricMask::GL_FONT_NUM_GLYPH_INDICES_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_UNDERLINE_POSITION_BIT_NV = PathMetricMask::GL_FONT_UNDERLINE_POSITION_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_UNDERLINE_THICKNESS_BIT_NV = PathMetricMask::GL_FONT_UNDERLINE_THICKNESS_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_UNITS_PER_EM_BIT_NV = PathMetricMask::GL_FONT_UNITS_PER_EM_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_X_MAX_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_X_MAX_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_X_MIN_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_X_MIN_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_Y_MAX_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_Y_MAX_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_FONT_Y_MIN_BOUNDS_BIT_NV = PathMetricMask::GL_FONT_Y_MIN_BOUNDS_BIT_NV;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_FRAGMENT_SHADER_BIT_EXT = UseProgramStageMask::GL_FRAGMENT_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_FRAMEBUFFER_BARRIER_BIT = MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT_EXT = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_GEOMETRY_SHADER_BIT_OES = UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_HAS_KERNING_BIT_NV = PathMetricMask::GL_GLYPH_HAS_KERNING_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_HEIGHT_BIT_NV = PathMetricMask::GL_GLYPH_HEIGHT_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV = PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_VERTICAL_BEARING_X_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV = PathMetricMask::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV;
GLESBINDING_CONSTEXPR static const PathMetricMask GL_GLYPH_WIDTH_BIT_NV = PathMetricMask::GL_GLYPH_WIDTH_BIT_NV;
GLESBINDING_CONSTEXPR static const PathFontStyle GL_ITALIC_BIT_NV = PathFontStyle::GL_ITALIC_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_COHERENT_BIT_EXT = BufferStorageMask::GL_MAP_COHERENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_FLUSH_EXPLICIT_BIT = MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_FLUSH_EXPLICIT_BIT_EXT = MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT_EXT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_INVALIDATE_BUFFER_BIT = MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_INVALIDATE_BUFFER_BIT_EXT = MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT_EXT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_INVALIDATE_RANGE_BIT = MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_INVALIDATE_RANGE_BIT_EXT = MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_PERSISTENT_BIT_EXT = BufferStorageMask::GL_MAP_PERSISTENT_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_READ_BIT = BufferStorageMask::GL_MAP_READ_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_READ_BIT_EXT = BufferStorageMask::GL_MAP_READ_BIT_EXT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_UNSYNCHRONIZED_BIT = MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT;
GLESBINDING_CONSTEXPR static const MapBufferAccessMask GL_MAP_UNSYNCHRONIZED_BIT_EXT = MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT_EXT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_WRITE_BIT = BufferStorageMask::GL_MAP_WRITE_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<BufferStorageMask, MapBufferAccessMask> GL_MAP_WRITE_BIT_EXT = BufferStorageMask::GL_MAP_WRITE_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_MESH_SHADER_BIT_NV = UseProgramStageMask::GL_MESH_SHADER_BIT_NV;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, BufferStorageMask, ClearBufferMask, ContextFlagMask, FragmentShaderDestMaskATI, MapBufferAccessMask, MemoryBarrierMask, PathFontStyle, PathMetricMask, PerformanceQueryCapsMaskINTEL, SyncObjectMask, UseProgramStageMask> GL_NONE_BIT = AttribMask::GL_NONE_BIT;
GLESBINDING_CONSTEXPR static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_GLOBAL_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL;
GLESBINDING_CONSTEXPR static const PerformanceQueryCapsMaskINTEL GL_PERFQUERY_SINGLE_CONTEXT_INTEL = PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_PIXEL_BUFFER_BARRIER_BIT = MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_IMAGE_ACCESS_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_SHADER_STORAGE_BARRIER_BIT = MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const glesbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_STENCIL_BUFFER_BIT = AttribMask::GL_STENCIL_BUFFER_BIT;
GLESBINDING_CONSTEXPR static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT;
GLESBINDING_CONSTEXPR static const SyncObjectMask GL_SYNC_FLUSH_COMMANDS_BIT_APPLE = SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT_APPLE;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TASK_SHADER_BIT_NV = UseProgramStageMask::GL_TASK_SHADER_BIT_NV;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT_EXT = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_CONTROL_SHADER_BIT_OES = UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT_EXT = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_EXT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_TESS_EVALUATION_SHADER_BIT_OES = UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_OES;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_FETCH_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TEXTURE_UPDATE_BARRIER_BIT = MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_TRANSFORM_FEEDBACK_BARRIER_BIT = MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_UNIFORM_BARRIER_BIT = MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const UnusedMask GL_UNUSED_BIT = UnusedMask::GL_UNUSED_BIT;
GLESBINDING_CONSTEXPR static const MemoryBarrierMask GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT = MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_VERTEX_SHADER_BIT = UseProgramStageMask::GL_VERTEX_SHADER_BIT;
GLESBINDING_CONSTEXPR static const UseProgramStageMask GL_VERTEX_SHADER_BIT_EXT = UseProgramStageMask::GL_VERTEX_SHADER_BIT_EXT;


} // namespace gles