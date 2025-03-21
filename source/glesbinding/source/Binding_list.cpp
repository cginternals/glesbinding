
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


const Binding::array_t Binding::s_functions =
{{
    &AcquireKeyedMutexWin32EXT,
    &ActiveProgramEXT,
    &ActiveShaderProgram,
    &ActiveShaderProgramEXT,
    &ActiveTexture,
    &AlphaFuncQCOM,
    &ApplyFramebufferAttachmentCMAAINTEL,
    &AttachShader,
    &BeginConditionalRenderNV,
    &BeginPerfMonitorAMD,
    &BeginPerfQueryINTEL,
    &BeginQuery,
    &BeginQueryEXT,
    &BeginTransformFeedback,
    &BindAttribLocation,
    &BindBuffer,
    &BindBufferBase,
    &BindBufferRange,
    &BindFragDataLocationEXT,
    &BindFragDataLocationIndexedEXT,
    &BindFramebuffer,
    &BindImageTexture,
    &BindProgramPipeline,
    &BindProgramPipelineEXT,
    &BindRenderbuffer,
    &BindSampler,
    &BindShadingRateImageNV,
    &BindTexture,
    &BindTransformFeedback,
    &BindVertexArray,
    &BindVertexArrayOES,
    &BindVertexBuffer,
    &BlendBarrier,
    &BlendBarrierKHR,
    &BlendBarrierNV,
    &BlendColor,
    &BlendEquation,
    &BlendEquationEXT,
    &BlendEquationi,
    &BlendEquationiEXT,
    &BlendEquationiOES,
    &BlendEquationSeparate,
    &BlendEquationSeparatei,
    &BlendEquationSeparateiEXT,
    &BlendEquationSeparateiOES,
    &BlendFunc,
    &BlendFunci,
    &BlendFunciEXT,
    &BlendFunciOES,
    &BlendFuncSeparate,
    &BlendFuncSeparatei,
    &BlendFuncSeparateiEXT,
    &BlendFuncSeparateiOES,
    &BlendParameteriNV,
    &BlitFramebuffer,
    &BlitFramebufferANGLE,
    &BlitFramebufferLayerEXT,
    &BlitFramebufferLayersEXT,
    &BlitFramebufferNV,
    &BufferAttachMemoryNV,
    &BufferData,
    &BufferPageCommitmentMemNV,
    &BufferStorageEXT,
    &BufferStorageExternalEXT,
    &BufferStorageMemEXT,
    &BufferSubData,
    &CheckFramebufferStatus,
    &Clear,
    &ClearBufferfi,
    &ClearBufferfv,
    &ClearBufferiv,
    &ClearBufferuiv,
    &ClearColor,
    &ClearDepthf,
    &ClearPixelLocalStorageuiEXT,
    &ClearStencil,
    &ClearTexImageEXT,
    &ClearTexSubImageEXT,
    &ClientWaitSync,
    &ClientWaitSyncAPPLE,
    &ClipControlEXT,
    &ColorMask,
    &ColorMaski,
    &ColorMaskiEXT,
    &ColorMaskiOES,
    &CompileShader,
    &CompressedTexImage2D,
    &CompressedTexImage3D,
    &CompressedTexImage3DOES,
    &CompressedTexSubImage2D,
    &CompressedTexSubImage3D,
    &CompressedTexSubImage3DOES,
    &ConservativeRasterParameteriNV,
    &CopyBufferSubData,
    &CopyBufferSubDataNV,
    &CopyImageSubData,
    &CopyImageSubDataEXT,
    &CopyImageSubDataOES,
    &CopyPathNV,
    &CopyTexImage2D,
    &CopyTexSubImage2D,
    &CopyTexSubImage3D,
    &CopyTexSubImage3DOES,
    &CopyTextureLevelsAPPLE,
    &CoverageMaskNV,
    &CoverageModulationNV,
    &CoverageModulationTableNV,
    &CoverageOperationNV,
    &CoverFillPathInstancedNV,
    &CoverFillPathNV,
    &CoverStrokePathInstancedNV,
    &CoverStrokePathNV,
    &CreateMemoryObjectsEXT,
    &CreatePerfQueryINTEL,
    &CreateProgram,
    &CreateSemaphoresNV,
    &CreateShader,
    &CreateShaderProgramEXT,
    &CreateShaderProgramv,
    &CreateShaderProgramvEXT,
    &CullFace,
    &DebugMessageCallback,
    &DebugMessageCallbackKHR,
    &DebugMessageControl,
    &DebugMessageControlKHR,
    &DebugMessageInsert,
    &DebugMessageInsertKHR,
    &DeleteBuffers,
    &DeleteFencesNV,
    &DeleteFramebuffers,
    &DeleteMemoryObjectsEXT,
    &DeletePathsNV,
    &DeletePerfMonitorsAMD,
    &DeletePerfQueryINTEL,
    &DeleteProgram,
    &DeleteProgramPipelines,
    &DeleteProgramPipelinesEXT,
    &DeleteQueries,
    &DeleteQueriesEXT,
    &DeleteRenderbuffers,
    &DeleteSamplers,
    &DeleteSemaphoresEXT,
    &DeleteShader,
    &DeleteSync,
    &DeleteSyncAPPLE,
    &DeleteTextures,
    &DeleteTransformFeedbacks,
    &DeleteVertexArrays,
    &DeleteVertexArraysOES,
    &DepthFunc,
    &DepthMask,
    &DepthRangeArrayfvNV,
    &DepthRangeArrayfvOES,
    &DepthRangef,
    &DepthRangeIndexedfNV,
    &DepthRangeIndexedfOES,
    &DetachShader,
    &Disable,
    &DisableDriverControlQCOM,
    &Disablei,
    &DisableiEXT,
    &DisableiNV,
    &DisableiOES,
    &DisableVertexAttribArray,
    &DiscardFramebufferEXT,
    &DispatchCompute,
    &DispatchComputeIndirect,
    &DrawArrays,
    &DrawArraysIndirect,
    &DrawArraysInstanced,
    &DrawArraysInstancedANGLE,
    &DrawArraysInstancedBaseInstanceEXT,
    &DrawArraysInstancedEXT,
    &DrawArraysInstancedNV,
    &DrawBuffers,
    &DrawBuffersEXT,
    &DrawBuffersIndexedEXT,
    &DrawBuffersNV,
    &DrawElements,
    &DrawElementsBaseVertex,
    &DrawElementsBaseVertexEXT,
    &DrawElementsBaseVertexOES,
    &DrawElementsIndirect,
    &DrawElementsInstanced,
    &DrawElementsInstancedANGLE,
    &DrawElementsInstancedBaseInstanceEXT,
    &DrawElementsInstancedBaseVertex,
    &DrawElementsInstancedBaseVertexBaseInstanceEXT,
    &DrawElementsInstancedBaseVertexEXT,
    &DrawElementsInstancedBaseVertexOES,
    &DrawElementsInstancedEXT,
    &DrawElementsInstancedNV,
    &DrawMeshTasksIndirectNV,
    &DrawMeshTasksNV,
    &DrawRangeElements,
    &DrawRangeElementsBaseVertex,
    &DrawRangeElementsBaseVertexEXT,
    &DrawRangeElementsBaseVertexOES,
    &DrawTransformFeedbackEXT,
    &DrawTransformFeedbackInstancedEXT,
    &DrawVkImageNV,
    &EGLImageTargetRenderbufferStorageOES,
    &EGLImageTargetTexStorageEXT,
    &EGLImageTargetTexture2DOES,
    &EGLImageTargetTextureStorageEXT,
    &Enable,
    &EnableDriverControlQCOM,
    &Enablei,
    &EnableiEXT,
    &EnableiNV,
    &EnableiOES,
    &EnableVertexAttribArray,
    &EndConditionalRenderNV,
    &EndPerfMonitorAMD,
    &EndPerfQueryINTEL,
    &EndQuery,
    &EndQueryEXT,
    &EndTilingQCOM,
    &EndTransformFeedback,
    &ExtGetBufferPointervQCOM,
    &ExtGetBuffersQCOM,
    &ExtGetFramebuffersQCOM,
    &ExtGetProgramBinarySourceQCOM,
    &ExtGetProgramsQCOM,
    &ExtGetRenderbuffersQCOM,
    &ExtGetShadersQCOM,
    &ExtGetTexLevelParameterivQCOM,
    &ExtGetTexSubImageQCOM,
    &ExtGetTexturesQCOM,
    &ExtIsProgramBinaryQCOM,
    &ExtrapolateTex2DQCOM,
    &ExtTexObjectStateOverrideiQCOM,
    &FenceSync,
    &FenceSyncAPPLE,
    &Finish,
    &FinishFenceNV,
    &Flush,
    &FlushMappedBufferRange,
    &FlushMappedBufferRangeEXT,
    &FragmentCoverageColorNV,
    &FramebufferFetchBarrierEXT,
    &FramebufferFetchBarrierQCOM,
    &FramebufferFoveationConfigQCOM,
    &FramebufferFoveationParametersQCOM,
    &FramebufferParameteri,
    &FramebufferParameteriMESA,
    &FramebufferPixelLocalStorageSizeEXT,
    &FramebufferRenderbuffer,
    &FramebufferSampleLocationsfvNV,
    &FramebufferShadingRateEXT,
    &FramebufferTexture,
    &FramebufferTexture2D,
    &FramebufferTexture2DDownsampleIMG,
    &FramebufferTexture2DMultisampleEXT,
    &FramebufferTexture2DMultisampleIMG,
    &FramebufferTexture3DOES,
    &FramebufferTextureEXT,
    &FramebufferTextureLayer,
    &FramebufferTextureLayerDownsampleIMG,
    &FramebufferTextureMultisampleMultiviewOVR,
    &FramebufferTextureMultiviewOVR,
    &FramebufferTextureOES,
    &FrontFace,
    &GenBuffers,
    &GenerateMipmap,
    &GenFencesNV,
    &GenFramebuffers,
    &GenPathsNV,
    &GenPerfMonitorsAMD,
    &GenProgramPipelines,
    &GenProgramPipelinesEXT,
    &GenQueries,
    &GenQueriesEXT,
    &GenRenderbuffers,
    &GenSamplers,
    &GenSemaphoresEXT,
    &GenTextures,
    &GenTransformFeedbacks,
    &GenVertexArrays,
    &GenVertexArraysOES,
    &GetActiveAttrib,
    &GetActiveUniform,
    &GetActiveUniformBlockiv,
    &GetActiveUniformBlockName,
    &GetActiveUniformsiv,
    &GetAttachedShaders,
    &GetAttribLocation,
    &GetBooleani_v,
    &GetBooleanv,
    &GetBufferParameteri64v,
    &GetBufferParameteriv,
    &GetBufferPointerv,
    &GetBufferPointervOES,
    &GetCoverageModulationTableNV,
    &GetDebugMessageLog,
    &GetDebugMessageLogKHR,
    &GetDriverControlsQCOM,
    &GetDriverControlStringQCOM,
    &GetError,
    &GetFenceivNV,
    &GetFirstPerfQueryIdINTEL,
    &GetFloati_vNV,
    &GetFloati_vOES,
    &GetFloatv,
    &GetFragDataIndexEXT,
    &GetFragDataLocation,
    &GetFragmentShadingRatesEXT,
    &GetFramebufferAttachmentParameteriv,
    &GetFramebufferParameteriv,
    &GetFramebufferParameterivMESA,
    &GetFramebufferPixelLocalStorageSizeEXT,
    &GetGraphicsResetStatus,
    &GetGraphicsResetStatusEXT,
    &GetGraphicsResetStatusKHR,
    &GetImageHandleNV,
    &GetInteger64i_v,
    &GetInteger64v,
    &GetInteger64vAPPLE,
    &GetInteger64vEXT,
    &GetIntegeri_v,
    &GetIntegeri_vEXT,
    &GetIntegerv,
    &GetInternalformativ,
    &GetInternalformatSampleivNV,
    &GetMemoryObjectDetachedResourcesuivNV,
    &GetMemoryObjectParameterivEXT,
    &GetMultisamplefv,
    &GetNextPerfQueryIdINTEL,
    &GetnUniformfv,
    &GetnUniformfvEXT,
    &GetnUniformfvKHR,
    &GetnUniformiv,
    &GetnUniformivEXT,
    &GetnUniformivKHR,
    &GetnUniformuiv,
    &GetnUniformuivKHR,
    &GetObjectLabel,
    &GetObjectLabelEXT,
    &GetObjectLabelKHR,
    &GetObjectPtrLabel,
    &GetObjectPtrLabelKHR,
    &GetPathColorGenfvNV,
    &GetPathColorGenivNV,
    &GetPathCommandsNV,
    &GetPathCoordsNV,
    &GetPathDashArrayNV,
    &GetPathLengthNV,
    &GetPathMetricRangeNV,
    &GetPathMetricsNV,
    &GetPathParameterfvNV,
    &GetPathParameterivNV,
    &GetPathSpacingNV,
    &GetPathTexGenfvNV,
    &GetPathTexGenivNV,
    &GetPerfCounterInfoINTEL,
    &GetPerfMonitorCounterDataAMD,
    &GetPerfMonitorCounterInfoAMD,
    &GetPerfMonitorCountersAMD,
    &GetPerfMonitorCounterStringAMD,
    &GetPerfMonitorGroupsAMD,
    &GetPerfMonitorGroupStringAMD,
    &GetPerfQueryDataINTEL,
    &GetPerfQueryIdByNameINTEL,
    &GetPerfQueryInfoINTEL,
    &GetPointerv,
    &GetPointervKHR,
    &GetProgramBinary,
    &GetProgramBinaryOES,
    &GetProgramInfoLog,
    &GetProgramInterfaceiv,
    &GetProgramiv,
    &GetProgramPipelineInfoLog,
    &GetProgramPipelineInfoLogEXT,
    &GetProgramPipelineiv,
    &GetProgramPipelineivEXT,
    &GetProgramResourcefvNV,
    &GetProgramResourceIndex,
    &GetProgramResourceiv,
    &GetProgramResourceLocation,
    &GetProgramResourceLocationIndexEXT,
    &GetProgramResourceName,
    &GetQueryiv,
    &GetQueryivEXT,
    &GetQueryObjecti64vEXT,
    &GetQueryObjectivEXT,
    &GetQueryObjectui64vEXT,
    &GetQueryObjectuiv,
    &GetQueryObjectuivEXT,
    &GetRenderbufferParameteriv,
    &GetSamplerParameterfv,
    &GetSamplerParameterIiv,
    &GetSamplerParameterIivEXT,
    &GetSamplerParameterIivOES,
    &GetSamplerParameterIuiv,
    &GetSamplerParameterIuivEXT,
    &GetSamplerParameterIuivOES,
    &GetSamplerParameteriv,
    &GetSemaphoreParameterivNV,
    &GetSemaphoreParameterui64vEXT,
    &GetShaderInfoLog,
    &GetShaderiv,
    &GetShaderPrecisionFormat,
    &GetShaderSource,
    &GetShadingRateImagePaletteNV,
    &GetShadingRateSampleLocationivNV,
    &GetString,
    &GetStringi,
    &GetSynciv,
    &GetSyncivAPPLE,
    &GetTexLevelParameterfv,
    &GetTexLevelParameteriv,
    &GetTexParameterfv,
    &GetTexParameterIiv,
    &GetTexParameterIivEXT,
    &GetTexParameterIivOES,
    &GetTexParameterIuiv,
    &GetTexParameterIuivEXT,
    &GetTexParameterIuivOES,
    &GetTexParameteriv,
    &GetTextureHandleIMG,
    &GetTextureHandleNV,
    &GetTextureSamplerHandleIMG,
    &GetTextureSamplerHandleNV,
    &GetTransformFeedbackVarying,
    &GetTranslatedShaderSourceANGLE,
    &GetUniformBlockIndex,
    &GetUniformfv,
    &GetUniformi64vNV,
    &GetUniformIndices,
    &GetUniformiv,
    &GetUniformLocation,
    &GetUniformuiv,
    &GetUnsignedBytei_vEXT,
    &GetUnsignedBytevEXT,
    &GetVertexAttribfv,
    &GetVertexAttribIiv,
    &GetVertexAttribIuiv,
    &GetVertexAttribiv,
    &GetVertexAttribPointerv,
    &GetVkProcAddrNV,
    &Hint,
    &ImportMemoryFdEXT,
    &ImportMemoryWin32HandleEXT,
    &ImportMemoryWin32NameEXT,
    &ImportSemaphoreFdEXT,
    &ImportSemaphoreWin32HandleEXT,
    &ImportSemaphoreWin32NameEXT,
    &InsertEventMarkerEXT,
    &InterpolatePathsNV,
    &InvalidateFramebuffer,
    &InvalidateSubFramebuffer,
    &IsBuffer,
    &IsEnabled,
    &IsEnabledi,
    &IsEnablediEXT,
    &IsEnablediNV,
    &IsEnablediOES,
    &IsFenceNV,
    &IsFramebuffer,
    &IsImageHandleResidentNV,
    &IsMemoryObjectEXT,
    &IsPathNV,
    &IsPointInFillPathNV,
    &IsPointInStrokePathNV,
    &IsProgram,
    &IsProgramPipeline,
    &IsProgramPipelineEXT,
    &IsQuery,
    &IsQueryEXT,
    &IsRenderbuffer,
    &IsSampler,
    &IsSemaphoreEXT,
    &IsShader,
    &IsSync,
    &IsSyncAPPLE,
    &IsTexture,
    &IsTextureHandleResidentNV,
    &IsTransformFeedback,
    &IsVertexArray,
    &IsVertexArrayOES,
    &LabelObjectEXT,
    &LineWidth,
    &LinkProgram,
    &MakeImageHandleNonResidentNV,
    &MakeImageHandleResidentNV,
    &MakeTextureHandleNonResidentNV,
    &MakeTextureHandleResidentNV,
    &MapBufferOES,
    &MapBufferRange,
    &MapBufferRangeEXT,
    &MatrixFrustumEXT,
    &MatrixLoad3x2fNV,
    &MatrixLoad3x3fNV,
    &MatrixLoaddEXT,
    &MatrixLoadfEXT,
    &MatrixLoadIdentityEXT,
    &MatrixLoadTranspose3x3fNV,
    &MatrixLoadTransposedEXT,
    &MatrixLoadTransposefEXT,
    &MatrixMult3x2fNV,
    &MatrixMult3x3fNV,
    &MatrixMultdEXT,
    &MatrixMultfEXT,
    &MatrixMultTranspose3x3fNV,
    &MatrixMultTransposedEXT,
    &MatrixMultTransposefEXT,
    &MatrixOrthoEXT,
    &MatrixPopEXT,
    &MatrixPushEXT,
    &MatrixRotatedEXT,
    &MatrixRotatefEXT,
    &MatrixScaledEXT,
    &MatrixScalefEXT,
    &MatrixTranslatedEXT,
    &MatrixTranslatefEXT,
    &MaxActiveShaderCoresARM,
    &MaxShaderCompilerThreadsKHR,
    &MemoryBarrier,
    &MemoryBarrierByRegion,
    &MemoryObjectParameterivEXT,
    &MinSampleShading,
    &MinSampleShadingOES,
    &MultiDrawArraysEXT,
    &MultiDrawArraysIndirectEXT,
    &MultiDrawElementsBaseVertexEXT,
    &MultiDrawElementsEXT,
    &MultiDrawElementsIndirectEXT,
    &MultiDrawMeshTasksIndirectCountNV,
    &MultiDrawMeshTasksIndirectNV,
    &NamedBufferAttachMemoryNV,
    &NamedBufferPageCommitmentMemNV,
    &NamedBufferStorageExternalEXT,
    &NamedBufferStorageMemEXT,
    &NamedFramebufferSampleLocationsfvNV,
    &NamedFramebufferTextureMultiviewOVR,
    &NamedRenderbufferStorageMultisampleAdvancedAMD,
    &ObjectLabel,
    &ObjectLabelKHR,
    &ObjectPtrLabel,
    &ObjectPtrLabelKHR,
    &PatchParameteri,
    &PatchParameteriEXT,
    &PatchParameteriOES,
    &PathColorGenNV,
    &PathCommandsNV,
    &PathCoordsNV,
    &PathCoverDepthFuncNV,
    &PathDashArrayNV,
    &PathFogGenNV,
    &PathGlyphIndexArrayNV,
    &PathGlyphIndexRangeNV,
    &PathGlyphRangeNV,
    &PathGlyphsNV,
    &PathMemoryGlyphIndexArrayNV,
    &PathParameterfNV,
    &PathParameterfvNV,
    &PathParameteriNV,
    &PathParameterivNV,
    &PathStencilDepthOffsetNV,
    &PathStencilFuncNV,
    &PathStringNV,
    &PathSubCommandsNV,
    &PathSubCoordsNV,
    &PathTexGenNV,
    &PauseTransformFeedback,
    &PixelStorei,
    &PointAlongPathNV,
    &PolygonModeNV,
    &PolygonOffset,
    &PolygonOffsetClampEXT,
    &PopDebugGroup,
    &PopDebugGroupKHR,
    &PopGroupMarkerEXT,
    &PrimitiveBoundingBox,
    &PrimitiveBoundingBoxEXT,
    &PrimitiveBoundingBoxOES,
    &ProgramBinary,
    &ProgramBinaryOES,
    &ProgramParameteri,
    &ProgramParameteriEXT,
    &ProgramPathFragmentInputGenNV,
    &ProgramUniform1f,
    &ProgramUniform1fEXT,
    &ProgramUniform1fv,
    &ProgramUniform1fvEXT,
    &ProgramUniform1i,
    &ProgramUniform1i64NV,
    &ProgramUniform1i64vNV,
    &ProgramUniform1iEXT,
    &ProgramUniform1iv,
    &ProgramUniform1ivEXT,
    &ProgramUniform1ui,
    &ProgramUniform1ui64NV,
    &ProgramUniform1ui64vNV,
    &ProgramUniform1uiEXT,
    &ProgramUniform1uiv,
    &ProgramUniform1uivEXT,
    &ProgramUniform2f,
    &ProgramUniform2fEXT,
    &ProgramUniform2fv,
    &ProgramUniform2fvEXT,
    &ProgramUniform2i,
    &ProgramUniform2i64NV,
    &ProgramUniform2i64vNV,
    &ProgramUniform2iEXT,
    &ProgramUniform2iv,
    &ProgramUniform2ivEXT,
    &ProgramUniform2ui,
    &ProgramUniform2ui64NV,
    &ProgramUniform2ui64vNV,
    &ProgramUniform2uiEXT,
    &ProgramUniform2uiv,
    &ProgramUniform2uivEXT,
    &ProgramUniform3f,
    &ProgramUniform3fEXT,
    &ProgramUniform3fv,
    &ProgramUniform3fvEXT,
    &ProgramUniform3i,
    &ProgramUniform3i64NV,
    &ProgramUniform3i64vNV,
    &ProgramUniform3iEXT,
    &ProgramUniform3iv,
    &ProgramUniform3ivEXT,
    &ProgramUniform3ui,
    &ProgramUniform3ui64NV,
    &ProgramUniform3ui64vNV,
    &ProgramUniform3uiEXT,
    &ProgramUniform3uiv,
    &ProgramUniform3uivEXT,
    &ProgramUniform4f,
    &ProgramUniform4fEXT,
    &ProgramUniform4fv,
    &ProgramUniform4fvEXT,
    &ProgramUniform4i,
    &ProgramUniform4i64NV,
    &ProgramUniform4i64vNV,
    &ProgramUniform4iEXT,
    &ProgramUniform4iv,
    &ProgramUniform4ivEXT,
    &ProgramUniform4ui,
    &ProgramUniform4ui64NV,
    &ProgramUniform4ui64vNV,
    &ProgramUniform4uiEXT,
    &ProgramUniform4uiv,
    &ProgramUniform4uivEXT,
    &ProgramUniformHandleui64IMG,
    &ProgramUniformHandleui64NV,
    &ProgramUniformHandleui64vIMG,
    &ProgramUniformHandleui64vNV,
    &ProgramUniformMatrix2fv,
    &ProgramUniformMatrix2fvEXT,
    &ProgramUniformMatrix2x3fv,
    &ProgramUniformMatrix2x3fvEXT,
    &ProgramUniformMatrix2x4fv,
    &ProgramUniformMatrix2x4fvEXT,
    &ProgramUniformMatrix3fv,
    &ProgramUniformMatrix3fvEXT,
    &ProgramUniformMatrix3x2fv,
    &ProgramUniformMatrix3x2fvEXT,
    &ProgramUniformMatrix3x4fv,
    &ProgramUniformMatrix3x4fvEXT,
    &ProgramUniformMatrix4fv,
    &ProgramUniformMatrix4fvEXT,
    &ProgramUniformMatrix4x2fv,
    &ProgramUniformMatrix4x2fvEXT,
    &ProgramUniformMatrix4x3fv,
    &ProgramUniformMatrix4x3fvEXT,
    &PushDebugGroup,
    &PushDebugGroupKHR,
    &PushGroupMarkerEXT,
    &QueryCounterEXT,
    &RasterSamplesEXT,
    &ReadBuffer,
    &ReadBufferIndexedEXT,
    &ReadBufferNV,
    &ReadnPixels,
    &ReadnPixelsEXT,
    &ReadnPixelsKHR,
    &ReadPixels,
    &ReleaseKeyedMutexWin32EXT,
    &ReleaseShaderCompiler,
    &RenderbufferStorage,
    &RenderbufferStorageMultisample,
    &RenderbufferStorageMultisampleAdvancedAMD,
    &RenderbufferStorageMultisampleANGLE,
    &RenderbufferStorageMultisampleAPPLE,
    &RenderbufferStorageMultisampleEXT,
    &RenderbufferStorageMultisampleIMG,
    &RenderbufferStorageMultisampleNV,
    &ResetMemoryObjectParameterNV,
    &ResolveDepthValuesNV,
    &ResolveMultisampleFramebufferAPPLE,
    &ResumeTransformFeedback,
    &SampleCoverage,
    &SampleMaski,
    &SamplerParameterf,
    &SamplerParameterfv,
    &SamplerParameteri,
    &SamplerParameterIiv,
    &SamplerParameterIivEXT,
    &SamplerParameterIivOES,
    &SamplerParameterIuiv,
    &SamplerParameterIuivEXT,
    &SamplerParameterIuivOES,
    &SamplerParameteriv,
    &Scissor,
    &ScissorArrayvNV,
    &ScissorArrayvOES,
    &ScissorExclusiveArrayvNV,
    &ScissorExclusiveNV,
    &ScissorIndexedNV,
    &ScissorIndexedOES,
    &ScissorIndexedvNV,
    &ScissorIndexedvOES,
    &SelectPerfMonitorCountersAMD,
    &SemaphoreParameterivNV,
    &SemaphoreParameterui64vEXT,
    &SetFenceNV,
    &ShaderBinary,
    &ShaderSource,
    &ShadingRateCombinerOpsEXT,
    &ShadingRateEXT,
    &ShadingRateImageBarrierNV,
    &ShadingRateImagePaletteNV,
    &ShadingRateQCOM,
    &ShadingRateSampleOrderCustomNV,
    &ShadingRateSampleOrderNV,
    &SignalSemaphoreEXT,
    &SignalVkFenceNV,
    &SignalVkSemaphoreNV,
    &StartTilingQCOM,
    &StencilFillPathInstancedNV,
    &StencilFillPathNV,
    &StencilFunc,
    &StencilFuncSeparate,
    &StencilMask,
    &StencilMaskSeparate,
    &StencilOp,
    &StencilOpSeparate,
    &StencilStrokePathInstancedNV,
    &StencilStrokePathNV,
    &StencilThenCoverFillPathInstancedNV,
    &StencilThenCoverFillPathNV,
    &StencilThenCoverStrokePathInstancedNV,
    &StencilThenCoverStrokePathNV,
    &SubpixelPrecisionBiasNV,
    &TestFenceNV,
    &TexAttachMemoryNV,
    &TexBuffer,
    &TexBufferEXT,
    &TexBufferOES,
    &TexBufferRange,
    &TexBufferRangeEXT,
    &TexBufferRangeOES,
    &TexEstimateMotionQCOM,
    &TexEstimateMotionRegionsQCOM,
    &TexImage2D,
    &TexImage3D,
    &TexImage3DOES,
    &TexPageCommitmentEXT,
    &TexPageCommitmentMemNV,
    &TexParameterf,
    &TexParameterfv,
    &TexParameteri,
    &TexParameterIiv,
    &TexParameterIivEXT,
    &TexParameterIivOES,
    &TexParameterIuiv,
    &TexParameterIuivEXT,
    &TexParameterIuivOES,
    &TexParameteriv,
    &TexStorage1DEXT,
    &TexStorage2D,
    &TexStorage2DEXT,
    &TexStorage2DMultisample,
    &TexStorage3D,
    &TexStorage3DEXT,
    &TexStorage3DMultisample,
    &TexStorage3DMultisampleOES,
    &TexStorageAttribs2DEXT,
    &TexStorageAttribs3DEXT,
    &TexStorageMem1DEXT,
    &TexStorageMem2DEXT,
    &TexStorageMem2DMultisampleEXT,
    &TexStorageMem3DEXT,
    &TexStorageMem3DMultisampleEXT,
    &TexSubImage2D,
    &TexSubImage3D,
    &TexSubImage3DOES,
    &TextureAttachMemoryNV,
    &TextureBarrierNV,
    &TextureFoveationParametersQCOM,
    &TexturePageCommitmentMemNV,
    &TextureStorage1DEXT,
    &TextureStorage2DEXT,
    &TextureStorage3DEXT,
    &TextureStorageMem1DEXT,
    &TextureStorageMem2DEXT,
    &TextureStorageMem2DMultisampleEXT,
    &TextureStorageMem3DEXT,
    &TextureStorageMem3DMultisampleEXT,
    &TextureViewEXT,
    &TextureViewOES,
    &TransformFeedbackVaryings,
    &TransformPathNV,
    &Uniform1f,
    &Uniform1fv,
    &Uniform1i,
    &Uniform1i64NV,
    &Uniform1i64vNV,
    &Uniform1iv,
    &Uniform1ui,
    &Uniform1ui64NV,
    &Uniform1ui64vNV,
    &Uniform1uiv,
    &Uniform2f,
    &Uniform2fv,
    &Uniform2i,
    &Uniform2i64NV,
    &Uniform2i64vNV,
    &Uniform2iv,
    &Uniform2ui,
    &Uniform2ui64NV,
    &Uniform2ui64vNV,
    &Uniform2uiv,
    &Uniform3f,
    &Uniform3fv,
    &Uniform3i,
    &Uniform3i64NV,
    &Uniform3i64vNV,
    &Uniform3iv,
    &Uniform3ui,
    &Uniform3ui64NV,
    &Uniform3ui64vNV,
    &Uniform3uiv,
    &Uniform4f,
    &Uniform4fv,
    &Uniform4i,
    &Uniform4i64NV,
    &Uniform4i64vNV,
    &Uniform4iv,
    &Uniform4ui,
    &Uniform4ui64NV,
    &Uniform4ui64vNV,
    &Uniform4uiv,
    &UniformBlockBinding,
    &UniformHandleui64IMG,
    &UniformHandleui64NV,
    &UniformHandleui64vIMG,
    &UniformHandleui64vNV,
    &UniformMatrix2fv,
    &UniformMatrix2x3fv,
    &UniformMatrix2x3fvNV,
    &UniformMatrix2x4fv,
    &UniformMatrix2x4fvNV,
    &UniformMatrix3fv,
    &UniformMatrix3x2fv,
    &UniformMatrix3x2fvNV,
    &UniformMatrix3x4fv,
    &UniformMatrix3x4fvNV,
    &UniformMatrix4fv,
    &UniformMatrix4x2fv,
    &UniformMatrix4x2fvNV,
    &UniformMatrix4x3fv,
    &UniformMatrix4x3fvNV,
    &UnmapBuffer,
    &UnmapBufferOES,
    &UseProgram,
    &UseProgramStages,
    &UseProgramStagesEXT,
    &UseShaderProgramEXT,
    &ValidateProgram,
    &ValidateProgramPipeline,
    &ValidateProgramPipelineEXT,
    &VertexAttrib1f,
    &VertexAttrib1fv,
    &VertexAttrib2f,
    &VertexAttrib2fv,
    &VertexAttrib3f,
    &VertexAttrib3fv,
    &VertexAttrib4f,
    &VertexAttrib4fv,
    &VertexAttribBinding,
    &VertexAttribDivisor,
    &VertexAttribDivisorANGLE,
    &VertexAttribDivisorEXT,
    &VertexAttribDivisorNV,
    &VertexAttribFormat,
    &VertexAttribI4i,
    &VertexAttribI4iv,
    &VertexAttribI4ui,
    &VertexAttribI4uiv,
    &VertexAttribIFormat,
    &VertexAttribIPointer,
    &VertexAttribPointer,
    &VertexBindingDivisor,
    &Viewport,
    &ViewportArrayvNV,
    &ViewportArrayvOES,
    &ViewportIndexedfNV,
    &ViewportIndexedfOES,
    &ViewportIndexedfvNV,
    &ViewportIndexedfvOES,
    &ViewportPositionWScaleNV,
    &ViewportSwizzleNV,
    &WaitSemaphoreEXT,
    &WaitSync,
    &WaitSyncAPPLE,
    &WaitVkSemaphoreNV,
    &WeightPathsNV,
    &WindowRectanglesEXT
}};


} // namespace glesbinding