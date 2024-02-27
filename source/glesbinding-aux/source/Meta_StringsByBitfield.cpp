
#include "Meta_Maps.h"

#include <glesbinding/gles/bitfield.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<AttribMask, std::string> Meta_StringsByAttribMask =
{
    { AttribMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { AttribMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { AttribMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { AttribMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" }
};

const std::unordered_map<BufferStorageMask, std::string> Meta_StringsByBufferStorageMask =
{
    { BufferStorageMask::GL_CLIENT_STORAGE_BIT_EXT, "GL_CLIENT_STORAGE_BIT_EXT" },
    { BufferStorageMask::GL_DYNAMIC_STORAGE_BIT_EXT, "GL_DYNAMIC_STORAGE_BIT_EXT" },
    { BufferStorageMask::GL_MAP_COHERENT_BIT_EXT, "GL_MAP_COHERENT_BIT_EXT" },
    { BufferStorageMask::GL_MAP_PERSISTENT_BIT_EXT, "GL_MAP_PERSISTENT_BIT_EXT" },
    { BufferStorageMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
    { BufferStorageMask::GL_MAP_READ_BIT_EXT, "GL_MAP_READ_BIT_EXT" },
    { BufferStorageMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
    { BufferStorageMask::GL_MAP_WRITE_BIT_EXT, "GL_MAP_WRITE_BIT_EXT" },
    { BufferStorageMask::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<ClearBufferMask, std::string> Meta_StringsByClearBufferMask =
{
    { ClearBufferMask::GL_COLOR_BUFFER_BIT, "GL_COLOR_BUFFER_BIT" },
    { ClearBufferMask::GL_COVERAGE_BUFFER_BIT_NV, "GL_COVERAGE_BUFFER_BIT_NV" },
    { ClearBufferMask::GL_DEPTH_BUFFER_BIT, "GL_DEPTH_BUFFER_BIT" },
    { ClearBufferMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { ClearBufferMask::GL_STENCIL_BUFFER_BIT, "GL_STENCIL_BUFFER_BIT" }
};

const std::unordered_map<ContextFlagMask, std::string> Meta_StringsByContextFlagMask =
{
    { ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT, "GL_CONTEXT_FLAG_DEBUG_BIT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_DEBUG_BIT_KHR, "GL_CONTEXT_FLAG_DEBUG_BIT_KHR" },
    { ContextFlagMask::GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR, "GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR" },
    { ContextFlagMask::GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT, "GL_CONTEXT_FLAG_PROTECTED_CONTENT_BIT_EXT" },
    { ContextFlagMask::GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT, "GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT" },
    { ContextFlagMask::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<FragmentShaderDestMaskATI, std::string> Meta_StringsByFragmentShaderDestMaskATI =
{
    { FragmentShaderDestMaskATI::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<MapBufferAccessMask, std::string> Meta_StringsByMapBufferAccessMask =
{
    { MapBufferAccessMask::GL_MAP_COHERENT_BIT_EXT, "GL_MAP_COHERENT_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT, "GL_MAP_FLUSH_EXPLICIT_BIT" },
    { MapBufferAccessMask::GL_MAP_FLUSH_EXPLICIT_BIT_EXT, "GL_MAP_FLUSH_EXPLICIT_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT, "GL_MAP_INVALIDATE_BUFFER_BIT" },
    { MapBufferAccessMask::GL_MAP_INVALIDATE_BUFFER_BIT_EXT, "GL_MAP_INVALIDATE_BUFFER_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT, "GL_MAP_INVALIDATE_RANGE_BIT" },
    { MapBufferAccessMask::GL_MAP_INVALIDATE_RANGE_BIT_EXT, "GL_MAP_INVALIDATE_RANGE_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_PERSISTENT_BIT_EXT, "GL_MAP_PERSISTENT_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_READ_BIT, "GL_MAP_READ_BIT" },
    { MapBufferAccessMask::GL_MAP_READ_BIT_EXT, "GL_MAP_READ_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT, "GL_MAP_UNSYNCHRONIZED_BIT" },
    { MapBufferAccessMask::GL_MAP_UNSYNCHRONIZED_BIT_EXT, "GL_MAP_UNSYNCHRONIZED_BIT_EXT" },
    { MapBufferAccessMask::GL_MAP_WRITE_BIT, "GL_MAP_WRITE_BIT" },
    { MapBufferAccessMask::GL_MAP_WRITE_BIT_EXT, "GL_MAP_WRITE_BIT_EXT" },
    { MapBufferAccessMask::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<MemoryBarrierMask, std::string> Meta_StringsByMemoryBarrierMask =
{
    { MemoryBarrierMask::GL_ALL_BARRIER_BITS, "GL_ALL_BARRIER_BITS" },
    { MemoryBarrierMask::GL_ATOMIC_COUNTER_BARRIER_BIT, "GL_ATOMIC_COUNTER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_BUFFER_UPDATE_BARRIER_BIT, "GL_BUFFER_UPDATE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT, "GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT" },
    { MemoryBarrierMask::GL_COMMAND_BARRIER_BIT, "GL_COMMAND_BARRIER_BIT" },
    { MemoryBarrierMask::GL_ELEMENT_ARRAY_BARRIER_BIT, "GL_ELEMENT_ARRAY_BARRIER_BIT" },
    { MemoryBarrierMask::GL_FRAMEBUFFER_BARRIER_BIT, "GL_FRAMEBUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { MemoryBarrierMask::GL_PIXEL_BUFFER_BARRIER_BIT, "GL_PIXEL_BUFFER_BARRIER_BIT" },
    { MemoryBarrierMask::GL_SHADER_IMAGE_ACCESS_BARRIER_BIT, "GL_SHADER_IMAGE_ACCESS_BARRIER_BIT" },
    { MemoryBarrierMask::GL_SHADER_STORAGE_BARRIER_BIT, "GL_SHADER_STORAGE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TEXTURE_FETCH_BARRIER_BIT, "GL_TEXTURE_FETCH_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TEXTURE_UPDATE_BARRIER_BIT, "GL_TEXTURE_UPDATE_BARRIER_BIT" },
    { MemoryBarrierMask::GL_TRANSFORM_FEEDBACK_BARRIER_BIT, "GL_TRANSFORM_FEEDBACK_BARRIER_BIT" },
    { MemoryBarrierMask::GL_UNIFORM_BARRIER_BIT, "GL_UNIFORM_BARRIER_BIT" },
    { MemoryBarrierMask::GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT, "GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT" }
};

const std::unordered_map<PathFontStyle, std::string> Meta_StringsByPathFontStyle =
{
    { PathFontStyle::GL_BOLD_BIT_NV, "GL_BOLD_BIT_NV" },
    { PathFontStyle::GL_ITALIC_BIT_NV, "GL_ITALIC_BIT_NV" },
    { PathFontStyle::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<PathMetricMask, std::string> Meta_StringsByPathMetricMask =
{
    { PathMetricMask::GL_FONT_ASCENDER_BIT_NV, "GL_FONT_ASCENDER_BIT_NV" },
    { PathMetricMask::GL_FONT_DESCENDER_BIT_NV, "GL_FONT_DESCENDER_BIT_NV" },
    { PathMetricMask::GL_FONT_HAS_KERNING_BIT_NV, "GL_FONT_HAS_KERNING_BIT_NV" },
    { PathMetricMask::GL_FONT_HEIGHT_BIT_NV, "GL_FONT_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV, "GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV, "GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV" },
    { PathMetricMask::GL_FONT_NUM_GLYPH_INDICES_BIT_NV, "GL_FONT_NUM_GLYPH_INDICES_BIT_NV" },
    { PathMetricMask::GL_FONT_UNDERLINE_POSITION_BIT_NV, "GL_FONT_UNDERLINE_POSITION_BIT_NV" },
    { PathMetricMask::GL_FONT_UNDERLINE_THICKNESS_BIT_NV, "GL_FONT_UNDERLINE_THICKNESS_BIT_NV" },
    { PathMetricMask::GL_FONT_UNITS_PER_EM_BIT_NV, "GL_FONT_UNITS_PER_EM_BIT_NV" },
    { PathMetricMask::GL_FONT_X_MAX_BOUNDS_BIT_NV, "GL_FONT_X_MAX_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_X_MIN_BOUNDS_BIT_NV, "GL_FONT_X_MIN_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_Y_MAX_BOUNDS_BIT_NV, "GL_FONT_Y_MAX_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_FONT_Y_MIN_BOUNDS_BIT_NV, "GL_FONT_Y_MIN_BOUNDS_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HAS_KERNING_BIT_NV, "GL_GLYPH_HAS_KERNING_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HEIGHT_BIT_NV, "GL_GLYPH_HEIGHT_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV" },
    { PathMetricMask::GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV, "GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_X_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_X_BIT_NV" },
    { PathMetricMask::GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV, "GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV" },
    { PathMetricMask::GL_GLYPH_WIDTH_BIT_NV, "GL_GLYPH_WIDTH_BIT_NV" },
    { PathMetricMask::GL_NONE_BIT, "GL_NONE_BIT" }
};

const std::unordered_map<PerformanceQueryCapsMaskINTEL, std::string> Meta_StringsByPerformanceQueryCapsMaskINTEL =
{
    { PerformanceQueryCapsMaskINTEL::GL_NONE_BIT, "GL_NONE_BIT" },
    { PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_GLOBAL_CONTEXT_INTEL, "GL_PERFQUERY_GLOBAL_CONTEXT_INTEL" },
    { PerformanceQueryCapsMaskINTEL::GL_PERFQUERY_SINGLE_CONTEXT_INTEL, "GL_PERFQUERY_SINGLE_CONTEXT_INTEL" }
};

const std::unordered_map<SyncObjectMask, std::string> Meta_StringsBySyncObjectMask =
{
    { SyncObjectMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT, "GL_SYNC_FLUSH_COMMANDS_BIT" },
    { SyncObjectMask::GL_SYNC_FLUSH_COMMANDS_BIT_APPLE, "GL_SYNC_FLUSH_COMMANDS_BIT_APPLE" }
};

const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::GL_UNUSED_BIT, "GL_UNUSED_BIT" }
};

const std::unordered_map<UseProgramStageMask, std::string> Meta_StringsByUseProgramStageMask =
{
    { UseProgramStageMask::GL_ALL_SHADER_BITS, "GL_ALL_SHADER_BITS" },
    { UseProgramStageMask::GL_ALL_SHADER_BITS_EXT, "GL_ALL_SHADER_BITS_EXT" },
    { UseProgramStageMask::GL_COMPUTE_SHADER_BIT, "GL_COMPUTE_SHADER_BIT" },
    { UseProgramStageMask::GL_FRAGMENT_SHADER_BIT, "GL_FRAGMENT_SHADER_BIT" },
    { UseProgramStageMask::GL_FRAGMENT_SHADER_BIT_EXT, "GL_FRAGMENT_SHADER_BIT_EXT" },
    { UseProgramStageMask::GL_GEOMETRY_SHADER_BIT, "GL_GEOMETRY_SHADER_BIT" },
    { UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_EXT, "GL_GEOMETRY_SHADER_BIT_EXT" },
    { UseProgramStageMask::GL_GEOMETRY_SHADER_BIT_OES, "GL_GEOMETRY_SHADER_BIT_OES" },
    { UseProgramStageMask::GL_MESH_SHADER_BIT_NV, "GL_MESH_SHADER_BIT_NV" },
    { UseProgramStageMask::GL_NONE_BIT, "GL_NONE_BIT" },
    { UseProgramStageMask::GL_TASK_SHADER_BIT_NV, "GL_TASK_SHADER_BIT_NV" },
    { UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT, "GL_TESS_CONTROL_SHADER_BIT" },
    { UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_EXT, "GL_TESS_CONTROL_SHADER_BIT_EXT" },
    { UseProgramStageMask::GL_TESS_CONTROL_SHADER_BIT_OES, "GL_TESS_CONTROL_SHADER_BIT_OES" },
    { UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT, "GL_TESS_EVALUATION_SHADER_BIT" },
    { UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_EXT, "GL_TESS_EVALUATION_SHADER_BIT_EXT" },
    { UseProgramStageMask::GL_TESS_EVALUATION_SHADER_BIT_OES, "GL_TESS_EVALUATION_SHADER_BIT_OES" },
    { UseProgramStageMask::GL_VERTEX_SHADER_BIT, "GL_VERTEX_SHADER_BIT" },
    { UseProgramStageMask::GL_VERTEX_SHADER_BIT_EXT, "GL_VERTEX_SHADER_BIT_EXT" }
};


} } // namespace glesbinding::aux