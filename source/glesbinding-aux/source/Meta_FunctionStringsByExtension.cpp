
#include "Meta_Maps.h"

#include <glesbinding/gles/extension.h>


using namespace gles;


namespace glesbinding { namespace aux
{


const std::unordered_map<GLextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { GLextension::GL_AMD_performance_monitor, { "glBeginPerfMonitorAMD", "glDeletePerfMonitorsAMD", "glEndPerfMonitorAMD", "glGenPerfMonitorsAMD", "glGetPerfMonitorCounterDataAMD", "glGetPerfMonitorCounterInfoAMD", "glGetPerfMonitorCounterStringAMD", "glGetPerfMonitorCountersAMD", "glGetPerfMonitorGroupStringAMD", "glGetPerfMonitorGroupsAMD", "glSelectPerfMonitorCountersAMD" } },
    { GLextension::GL_ANGLE_framebuffer_blit, { "glBlitFramebufferANGLE" } },
    { GLextension::GL_ANGLE_framebuffer_multisample, { "glRenderbufferStorageMultisampleANGLE" } },
    { GLextension::GL_ANGLE_instanced_arrays, { "glDrawArraysInstancedANGLE", "glDrawElementsInstancedANGLE", "glVertexAttribDivisorANGLE" } },
    { GLextension::GL_ANGLE_translated_shader_source, { "glGetTranslatedShaderSourceANGLE" } },
    { GLextension::GL_APPLE_copy_texture_levels, { "glCopyTextureLevelsAPPLE" } },
    { GLextension::GL_APPLE_framebuffer_multisample, { "glRenderbufferStorageMultisampleAPPLE", "glResolveMultisampleFramebufferAPPLE" } },
    { GLextension::GL_APPLE_sync, { "glClientWaitSyncAPPLE", "glDeleteSyncAPPLE", "glFenceSyncAPPLE", "glGetInteger64vAPPLE", "glGetSyncivAPPLE", "glIsSyncAPPLE", "glWaitSyncAPPLE" } },
    { GLextension::GL_EXT_EGL_image_storage, { "glEGLImageTargetTexStorageEXT", "glEGLImageTargetTextureStorageEXT" } },
    { GLextension::GL_EXT_base_instance, { "glDrawArraysInstancedBaseInstanceEXT", "glDrawElementsInstancedBaseInstanceEXT", "glDrawElementsInstancedBaseVertexBaseInstanceEXT" } },
    { GLextension::GL_EXT_blend_func_extended, { "glBindFragDataLocationEXT", "glBindFragDataLocationIndexedEXT", "glGetFragDataIndexEXT", "glGetProgramResourceLocationIndexEXT" } },
    { GLextension::GL_EXT_buffer_storage, { "glBufferStorageEXT" } },
    { GLextension::GL_EXT_clear_texture, { "glClearTexImageEXT", "glClearTexSubImageEXT" } },
    { GLextension::GL_EXT_clip_control, { "glClipControlEXT" } },
    { GLextension::GL_EXT_copy_image, { "glCopyImageSubDataEXT" } },
    { GLextension::GL_EXT_debug_label, { "glGetObjectLabelEXT", "glLabelObjectEXT" } },
    { GLextension::GL_EXT_debug_marker, { "glInsertEventMarkerEXT", "glPopGroupMarkerEXT", "glPushGroupMarkerEXT" } },
    { GLextension::GL_EXT_discard_framebuffer, { "glDiscardFramebufferEXT" } },
    { GLextension::GL_EXT_disjoint_timer_query, { "glBeginQueryEXT", "glDeleteQueriesEXT", "glEndQueryEXT", "glGenQueriesEXT", "glGetQueryObjecti64vEXT", "glGetQueryObjectivEXT", "glGetQueryObjectui64vEXT", "glGetQueryObjectuivEXT", "glGetQueryivEXT", "glIsQueryEXT", "glQueryCounterEXT" } },
    { GLextension::GL_EXT_draw_buffers, { "glDrawBuffersEXT" } },
    { GLextension::GL_EXT_draw_buffers_indexed, { "glBlendEquationSeparateiEXT", "glBlendEquationiEXT", "glBlendFuncSeparateiEXT", "glBlendFunciEXT", "glColorMaskiEXT", "glDisableiEXT", "glEnableiEXT", "glIsEnablediEXT" } },
    { GLextension::GL_EXT_draw_elements_base_vertex, { "glDrawElementsBaseVertexEXT", "glDrawElementsInstancedBaseVertexEXT", "glDrawRangeElementsBaseVertexEXT", "glMultiDrawElementsBaseVertexEXT" } },
    { GLextension::GL_EXT_draw_instanced, { "glDrawArraysInstancedEXT", "glDrawElementsInstancedEXT" } },
    { GLextension::GL_EXT_draw_transform_feedback, { "glDrawTransformFeedbackEXT", "glDrawTransformFeedbackInstancedEXT" } },
    { GLextension::GL_EXT_external_buffer, { "glBufferStorageExternalEXT", "glNamedBufferStorageExternalEXT" } },
    { GLextension::GL_EXT_geometry_shader, { "glFramebufferTextureEXT" } },
    { GLextension::GL_EXT_instanced_arrays, { "glDrawArraysInstancedEXT", "glDrawElementsInstancedEXT", "glVertexAttribDivisorEXT" } },
    { GLextension::GL_EXT_map_buffer_range, { "glFlushMappedBufferRangeEXT", "glMapBufferRangeEXT" } },
    { GLextension::GL_EXT_memory_object, { "glBufferStorageMemEXT", "glCreateMemoryObjectsEXT", "glDeleteMemoryObjectsEXT", "glGetMemoryObjectParameterivEXT", "glGetUnsignedBytei_vEXT", "glGetUnsignedBytevEXT", "glIsMemoryObjectEXT", "glMemoryObjectParameterivEXT", "glNamedBufferStorageMemEXT", "glTexStorageMem2DEXT", "glTexStorageMem2DMultisampleEXT", "glTexStorageMem3DEXT", "glTexStorageMem3DMultisampleEXT", "glTextureStorageMem2DEXT", "glTextureStorageMem2DMultisampleEXT", "glTextureStorageMem3DEXT", "glTextureStorageMem3DMultisampleEXT" } },
    { GLextension::GL_EXT_memory_object_fd, { "glImportMemoryFdEXT" } },
    { GLextension::GL_EXT_memory_object_win32, { "glImportMemoryWin32HandleEXT", "glImportMemoryWin32NameEXT" } },
    { GLextension::GL_EXT_multi_draw_arrays, { "glMultiDrawArraysEXT", "glMultiDrawElementsEXT" } },
    { GLextension::GL_EXT_multi_draw_indirect, { "glMultiDrawArraysIndirectEXT", "glMultiDrawElementsIndirectEXT" } },
    { GLextension::GL_EXT_multisampled_render_to_texture, { "glFramebufferTexture2DMultisampleEXT", "glRenderbufferStorageMultisampleEXT" } },
    { GLextension::GL_EXT_multiview_draw_buffers, { "glDrawBuffersIndexedEXT", "glGetIntegeri_vEXT", "glReadBufferIndexedEXT" } },
    { GLextension::GL_EXT_occlusion_query_boolean, { "glBeginQueryEXT", "glDeleteQueriesEXT", "glEndQueryEXT", "glGenQueriesEXT", "glGetQueryObjectuivEXT", "glGetQueryivEXT", "glIsQueryEXT" } },
    { GLextension::GL_EXT_polygon_offset_clamp, { "glPolygonOffsetClampEXT" } },
    { GLextension::GL_EXT_primitive_bounding_box, { "glPrimitiveBoundingBoxEXT" } },
    { GLextension::GL_EXT_raster_multisample, { "glRasterSamplesEXT" } },
    { GLextension::GL_EXT_robustness, { "glGetGraphicsResetStatusEXT", "glGetnUniformfvEXT", "glGetnUniformivEXT", "glReadnPixelsEXT" } },
    { GLextension::GL_EXT_semaphore, { "glDeleteSemaphoresEXT", "glGenSemaphoresEXT", "glGetSemaphoreParameterui64vEXT", "glGetUnsignedBytei_vEXT", "glGetUnsignedBytevEXT", "glIsSemaphoreEXT", "glSemaphoreParameterui64vEXT", "glSignalSemaphoreEXT", "glWaitSemaphoreEXT" } },
    { GLextension::GL_EXT_semaphore_fd, { "glImportSemaphoreFdEXT" } },
    { GLextension::GL_EXT_semaphore_win32, { "glImportSemaphoreWin32HandleEXT", "glImportSemaphoreWin32NameEXT" } },
    { GLextension::GL_EXT_shader_framebuffer_fetch_non_coherent, { "glFramebufferFetchBarrierEXT" } },
    { GLextension::GL_EXT_shader_pixel_local_storage2, { "glClearPixelLocalStorageuiEXT", "glFramebufferPixelLocalStorageSizeEXT", "glGetFramebufferPixelLocalStorageSizeEXT" } },
    { GLextension::GL_EXT_sparse_texture, { "glTexPageCommitmentEXT" } },
    { GLextension::GL_EXT_tessellation_shader, { "glPatchParameteriEXT" } },
    { GLextension::GL_EXT_texture_border_clamp, { "glGetSamplerParameterIivEXT", "glGetSamplerParameterIuivEXT", "glGetTexParameterIivEXT", "glGetTexParameterIuivEXT", "glSamplerParameterIivEXT", "glSamplerParameterIuivEXT", "glTexParameterIivEXT", "glTexParameterIuivEXT" } },
    { GLextension::GL_EXT_texture_buffer, { "glTexBufferEXT", "glTexBufferRangeEXT" } },
    { GLextension::GL_EXT_texture_storage, { "glTexStorage1DEXT", "glTexStorage2DEXT", "glTexStorage3DEXT", "glTextureStorage1DEXT", "glTextureStorage2DEXT", "glTextureStorage3DEXT" } },
    { GLextension::GL_EXT_texture_view, { "glTextureViewEXT" } },
    { GLextension::GL_EXT_win32_keyed_mutex, { "glAcquireKeyedMutexWin32EXT", "glReleaseKeyedMutexWin32EXT" } },
    { GLextension::GL_EXT_window_rectangles, { "glWindowRectanglesEXT" } },
    { GLextension::GL_IMG_bindless_texture, { "glGetTextureHandleIMG", "glGetTextureSamplerHandleIMG", "glProgramUniformHandleui64IMG", "glProgramUniformHandleui64vIMG", "glUniformHandleui64IMG", "glUniformHandleui64vIMG" } },
    { GLextension::GL_IMG_framebuffer_downsample, { "glFramebufferTexture2DDownsampleIMG", "glFramebufferTextureLayerDownsampleIMG" } },
    { GLextension::GL_IMG_multisampled_render_to_texture, { "glFramebufferTexture2DMultisampleIMG", "glRenderbufferStorageMultisampleIMG" } },
    { GLextension::GL_INTEL_framebuffer_CMAA, { "glApplyFramebufferAttachmentCMAAINTEL" } },
    { GLextension::GL_INTEL_performance_query, { "glBeginPerfQueryINTEL", "glCreatePerfQueryINTEL", "glDeletePerfQueryINTEL", "glEndPerfQueryINTEL", "glGetFirstPerfQueryIdINTEL", "glGetNextPerfQueryIdINTEL", "glGetPerfCounterInfoINTEL", "glGetPerfQueryDataINTEL", "glGetPerfQueryIdByNameINTEL", "glGetPerfQueryInfoINTEL" } },
    { GLextension::GL_KHR_blend_equation_advanced, { "glBlendBarrierKHR" } },
    { GLextension::GL_KHR_parallel_shader_compile, { "glMaxShaderCompilerThreadsKHR" } },
    { GLextension::GL_NV_bindless_texture, { "glGetImageHandleNV", "glGetTextureHandleNV", "glGetTextureSamplerHandleNV", "glIsImageHandleResidentNV", "glIsTextureHandleResidentNV", "glMakeImageHandleNonResidentNV", "glMakeImageHandleResidentNV", "glMakeTextureHandleNonResidentNV", "glMakeTextureHandleResidentNV", "glProgramUniformHandleui64NV", "glProgramUniformHandleui64vNV", "glUniformHandleui64NV", "glUniformHandleui64vNV" } },
    { GLextension::GL_NV_blend_equation_advanced, { "glBlendBarrierNV", "glBlendParameteriNV" } },
    { GLextension::GL_NV_clip_space_w_scaling, { "glViewportPositionWScaleNV" } },
    { GLextension::GL_NV_conditional_render, { "glBeginConditionalRenderNV", "glEndConditionalRenderNV" } },
    { GLextension::GL_NV_conservative_raster, { "glSubpixelPrecisionBiasNV" } },
    { GLextension::GL_NV_conservative_raster_pre_snap_triangles, { "glConservativeRasterParameteriNV" } },
    { GLextension::GL_NV_copy_buffer, { "glCopyBufferSubDataNV" } },
    { GLextension::GL_NV_coverage_sample, { "glCoverageMaskNV", "glCoverageOperationNV" } },
    { GLextension::GL_NV_draw_buffers, { "glDrawBuffersNV" } },
    { GLextension::GL_NV_draw_instanced, { "glDrawArraysInstancedNV", "glDrawElementsInstancedNV" } },
    { GLextension::GL_NV_draw_vulkan_image, { "glDrawVkImageNV", "glGetVkProcAddrNV", "glSignalVkFenceNV", "glSignalVkSemaphoreNV", "glWaitVkSemaphoreNV" } },
    { GLextension::GL_NV_fence, { "glDeleteFencesNV", "glFinishFenceNV", "glGenFencesNV", "glGetFenceivNV", "glIsFenceNV", "glSetFenceNV", "glTestFenceNV" } },
    { GLextension::GL_NV_fragment_coverage_to_color, { "glFragmentCoverageColorNV" } },
    { GLextension::GL_NV_framebuffer_blit, { "glBlitFramebufferNV" } },
    { GLextension::GL_NV_framebuffer_mixed_samples, { "glCoverageModulationNV", "glCoverageModulationTableNV", "glGetCoverageModulationTableNV", "glRasterSamplesEXT" } },
    { GLextension::GL_NV_framebuffer_multisample, { "glRenderbufferStorageMultisampleNV" } },
    { GLextension::GL_NV_gpu_shader5, { "glGetUniformi64vNV", "glProgramUniform1i64NV", "glProgramUniform1i64vNV", "glProgramUniform1ui64NV", "glProgramUniform1ui64vNV", "glProgramUniform2i64NV", "glProgramUniform2i64vNV", "glProgramUniform2ui64NV", "glProgramUniform2ui64vNV", "glProgramUniform3i64NV", "glProgramUniform3i64vNV", "glProgramUniform3ui64NV", "glProgramUniform3ui64vNV", "glProgramUniform4i64NV", "glProgramUniform4i64vNV", "glProgramUniform4ui64NV", "glProgramUniform4ui64vNV", "glUniform1i64NV", "glUniform1i64vNV", "glUniform1ui64NV", "glUniform1ui64vNV", "glUniform2i64NV", "glUniform2i64vNV", "glUniform2ui64NV", "glUniform2ui64vNV", "glUniform3i64NV", "glUniform3i64vNV", "glUniform3ui64NV", "glUniform3ui64vNV", "glUniform4i64NV", "glUniform4i64vNV", "glUniform4ui64NV", "glUniform4ui64vNV" } },
    { GLextension::GL_NV_instanced_arrays, { "glVertexAttribDivisorNV" } },
    { GLextension::GL_NV_internalformat_sample_query, { "glGetInternalformatSampleivNV" } },
    { GLextension::GL_NV_non_square_matrices, { "glUniformMatrix2x3fvNV", "glUniformMatrix2x4fvNV", "glUniformMatrix3x2fvNV", "glUniformMatrix3x4fvNV", "glUniformMatrix4x2fvNV", "glUniformMatrix4x3fvNV" } },
    { GLextension::GL_NV_path_rendering, { "glCopyPathNV", "glCoverFillPathInstancedNV", "glCoverFillPathNV", "glCoverStrokePathInstancedNV", "glCoverStrokePathNV", "glDeletePathsNV", "glGenPathsNV", "glGetPathCommandsNV", "glGetPathCoordsNV", "glGetPathDashArrayNV", "glGetPathLengthNV", "glGetPathMetricRangeNV", "glGetPathMetricsNV", "glGetPathParameterfvNV", "glGetPathParameterivNV", "glGetPathSpacingNV", "glGetProgramResourcefvNV", "glInterpolatePathsNV", "glIsPathNV", "glIsPointInFillPathNV", "glIsPointInStrokePathNV", "glMatrixFrustumEXT", "glMatrixLoad3x2fNV", "glMatrixLoad3x3fNV", "glMatrixLoadIdentityEXT", "glMatrixLoadTranspose3x3fNV", "glMatrixLoadTransposedEXT", "glMatrixLoadTransposefEXT", "glMatrixLoaddEXT", "glMatrixLoadfEXT", "glMatrixMult3x2fNV", "glMatrixMult3x3fNV", "glMatrixMultTranspose3x3fNV", "glMatrixMultTransposedEXT", "glMatrixMultTransposefEXT", "glMatrixMultdEXT", "glMatrixMultfEXT", "glMatrixOrthoEXT", "glMatrixPopEXT", "glMatrixPushEXT", "glMatrixRotatedEXT", "glMatrixRotatefEXT", "glMatrixScaledEXT", "glMatrixScalefEXT", "glMatrixTranslatedEXT", "glMatrixTranslatefEXT", "glPathCommandsNV", "glPathCoordsNV", "glPathCoverDepthFuncNV", "glPathDashArrayNV", "glPathGlyphIndexArrayNV", "glPathGlyphIndexRangeNV", "glPathGlyphRangeNV", "glPathGlyphsNV", "glPathMemoryGlyphIndexArrayNV", "glPathParameterfNV", "glPathParameterfvNV", "glPathParameteriNV", "glPathParameterivNV", "glPathStencilDepthOffsetNV", "glPathStencilFuncNV", "glPathStringNV", "glPathSubCommandsNV", "glPathSubCoordsNV", "glPointAlongPathNV", "glProgramPathFragmentInputGenNV", "glStencilFillPathInstancedNV", "glStencilFillPathNV", "glStencilStrokePathInstancedNV", "glStencilStrokePathNV", "glStencilThenCoverFillPathInstancedNV", "glStencilThenCoverFillPathNV", "glStencilThenCoverStrokePathInstancedNV", "glStencilThenCoverStrokePathNV", "glTransformPathNV", "glWeightPathsNV" } },
    { GLextension::GL_NV_polygon_mode, { "glPolygonModeNV" } },
    { GLextension::GL_NV_read_buffer, { "glReadBufferNV" } },
    { GLextension::GL_NV_sample_locations, { "glFramebufferSampleLocationsfvNV", "glNamedFramebufferSampleLocationsfvNV", "glResolveDepthValuesNV" } },
    { GLextension::GL_NV_viewport_array, { "glDepthRangeArrayfvNV", "glDepthRangeIndexedfNV", "glDisableiNV", "glEnableiNV", "glGetFloati_vNV", "glIsEnablediNV", "glScissorArrayvNV", "glScissorIndexedNV", "glScissorIndexedvNV", "glViewportArrayvNV", "glViewportIndexedfNV", "glViewportIndexedfvNV" } },
    { GLextension::GL_NV_viewport_swizzle, { "glViewportSwizzleNV" } },
    { GLextension::GL_OES_EGL_image, { "glEGLImageTargetRenderbufferStorageOES", "glEGLImageTargetTexture2DOES" } },
    { GLextension::GL_OES_copy_image, { "glCopyImageSubDataOES" } },
    { GLextension::GL_OES_draw_buffers_indexed, { "glBlendEquationSeparateiOES", "glBlendEquationiOES", "glBlendFuncSeparateiOES", "glBlendFunciOES", "glColorMaskiOES", "glDisableiOES", "glEnableiOES", "glIsEnablediOES" } },
    { GLextension::GL_OES_draw_elements_base_vertex, { "glDrawElementsBaseVertexOES", "glDrawElementsInstancedBaseVertexOES", "glDrawRangeElementsBaseVertexOES", "glMultiDrawElementsBaseVertexEXT" } },
    { GLextension::GL_OES_geometry_shader, { "glFramebufferTextureOES" } },
    { GLextension::GL_OES_get_program_binary, { "glGetProgramBinaryOES", "glProgramBinaryOES" } },
    { GLextension::GL_OES_mapbuffer, { "glGetBufferPointervOES", "glMapBufferOES", "glUnmapBufferOES" } },
    { GLextension::GL_OES_primitive_bounding_box, { "glPrimitiveBoundingBoxOES" } },
    { GLextension::GL_OES_sample_shading, { "glMinSampleShadingOES" } },
    { GLextension::GL_OES_tessellation_shader, { "glPatchParameteriOES" } },
    { GLextension::GL_OES_texture_3D, { "glCompressedTexImage3DOES", "glCompressedTexSubImage3DOES", "glCopyTexSubImage3DOES", "glFramebufferTexture3DOES", "glTexImage3DOES", "glTexSubImage3DOES" } },
    { GLextension::GL_OES_texture_border_clamp, { "glGetSamplerParameterIivOES", "glGetSamplerParameterIuivOES", "glGetTexParameterIivOES", "glGetTexParameterIuivOES", "glSamplerParameterIivOES", "glSamplerParameterIuivOES", "glTexParameterIivOES", "glTexParameterIuivOES" } },
    { GLextension::GL_OES_texture_buffer, { "glTexBufferOES", "glTexBufferRangeOES" } },
    { GLextension::GL_OES_texture_storage_multisample_2d_array, { "glTexStorage3DMultisampleOES" } },
    { GLextension::GL_OES_texture_view, { "glTextureViewOES" } },
    { GLextension::GL_OES_vertex_array_object, { "glBindVertexArrayOES", "glDeleteVertexArraysOES", "glGenVertexArraysOES", "glIsVertexArrayOES" } },
    { GLextension::GL_OES_viewport_array, { "glDepthRangeArrayfvOES", "glDepthRangeIndexedfOES", "glDisableiOES", "glEnableiOES", "glGetFloati_vOES", "glIsEnablediOES", "glScissorArrayvOES", "glScissorIndexedOES", "glScissorIndexedvOES", "glViewportArrayvOES", "glViewportIndexedfOES", "glViewportIndexedfvOES" } },
    { GLextension::GL_OVR_multiview, { "glFramebufferTextureMultiviewOVR" } },
    { GLextension::GL_OVR_multiview_multisampled_render_to_texture, { "glFramebufferTextureMultisampleMultiviewOVR" } },
    { GLextension::GL_QCOM_alpha_test, { "glAlphaFuncQCOM" } },
    { GLextension::GL_QCOM_driver_control, { "glDisableDriverControlQCOM", "glEnableDriverControlQCOM", "glGetDriverControlStringQCOM", "glGetDriverControlsQCOM" } },
    { GLextension::GL_QCOM_extended_get, { "glExtGetBufferPointervQCOM", "glExtGetBuffersQCOM", "glExtGetFramebuffersQCOM", "glExtGetRenderbuffersQCOM", "glExtGetTexLevelParameterivQCOM", "glExtGetTexSubImageQCOM", "glExtGetTexturesQCOM", "glExtTexObjectStateOverrideiQCOM" } },
    { GLextension::GL_QCOM_extended_get2, { "glExtGetProgramBinarySourceQCOM", "glExtGetProgramsQCOM", "glExtGetShadersQCOM", "glExtIsProgramBinaryQCOM" } },
    { GLextension::GL_QCOM_framebuffer_foveated, { "glFramebufferFoveationConfigQCOM", "glFramebufferFoveationParametersQCOM" } },
    { GLextension::GL_QCOM_shader_framebuffer_fetch_noncoherent, { "glFramebufferFetchBarrierQCOM" } },
    { GLextension::GL_QCOM_texture_foveated, { "glTextureFoveationParametersQCOM" } },
    { GLextension::GL_QCOM_tiled_rendering, { "glEndTilingQCOM", "glStartTilingQCOM" } },

};


} } // namespace glesbinding::aux
