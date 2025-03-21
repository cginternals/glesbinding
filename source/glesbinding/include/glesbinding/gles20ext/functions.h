
#pragma once


#include <glesbinding/nogles.h>
#include <glesbinding/gles/functions.h>


namespace gles20ext
{

// import functions
using gles::glAcquireKeyedMutexWin32EXT;
using gles::glActiveProgramEXT;
using gles::glActiveShaderProgram;
using gles::glActiveShaderProgramEXT;
using gles::glAlphaFuncQCOM;
using gles::glApplyFramebufferAttachmentCMAAINTEL;
using gles::glBeginConditionalRenderNV;
using gles::glBeginPerfMonitorAMD;
using gles::glBeginPerfQueryINTEL;
using gles::glBeginQuery;
using gles::glBeginQueryEXT;
using gles::glBeginTransformFeedback;
using gles::glBindBufferBase;
using gles::glBindBufferRange;
using gles::glBindFragDataLocationEXT;
using gles::glBindFragDataLocationIndexedEXT;
using gles::glBindImageTexture;
using gles::glBindProgramPipeline;
using gles::glBindProgramPipelineEXT;
using gles::glBindSampler;
using gles::glBindShadingRateImageNV;
using gles::glBindTransformFeedback;
using gles::glBindVertexArray;
using gles::glBindVertexArrayOES;
using gles::glBindVertexBuffer;
using gles::glBlendBarrier;
using gles::glBlendBarrierKHR;
using gles::glBlendBarrierNV;
using gles::glBlendEquationEXT;
using gles::glBlendEquationi;
using gles::glBlendEquationiEXT;
using gles::glBlendEquationiOES;
using gles::glBlendEquationSeparatei;
using gles::glBlendEquationSeparateiEXT;
using gles::glBlendEquationSeparateiOES;
using gles::glBlendFunci;
using gles::glBlendFunciEXT;
using gles::glBlendFunciOES;
using gles::glBlendFuncSeparatei;
using gles::glBlendFuncSeparateiEXT;
using gles::glBlendFuncSeparateiOES;
using gles::glBlendParameteriNV;
using gles::glBlitFramebuffer;
using gles::glBlitFramebufferANGLE;
using gles::glBlitFramebufferLayerEXT;
using gles::glBlitFramebufferLayersEXT;
using gles::glBlitFramebufferNV;
using gles::glBufferAttachMemoryNV;
using gles::glBufferPageCommitmentMemNV;
using gles::glBufferStorageEXT;
using gles::glBufferStorageExternalEXT;
using gles::glBufferStorageMemEXT;
using gles::glClearBufferfi;
using gles::glClearBufferfv;
using gles::glClearBufferiv;
using gles::glClearBufferuiv;
using gles::glClearPixelLocalStorageuiEXT;
using gles::glClearTexImageEXT;
using gles::glClearTexSubImageEXT;
using gles::glClientWaitSync;
using gles::glClientWaitSyncAPPLE;
using gles::glClipControlEXT;
using gles::glColorMaski;
using gles::glColorMaskiEXT;
using gles::glColorMaskiOES;
using gles::glCompressedTexImage3D;
using gles::glCompressedTexImage3DOES;
using gles::glCompressedTexSubImage3D;
using gles::glCompressedTexSubImage3DOES;
using gles::glConservativeRasterParameteriNV;
using gles::glCopyBufferSubData;
using gles::glCopyBufferSubDataNV;
using gles::glCopyImageSubData;
using gles::glCopyImageSubDataEXT;
using gles::glCopyImageSubDataOES;
using gles::glCopyPathNV;
using gles::glCopyTexSubImage3D;
using gles::glCopyTexSubImage3DOES;
using gles::glCopyTextureLevelsAPPLE;
using gles::glCoverageMaskNV;
using gles::glCoverageModulationNV;
using gles::glCoverageModulationTableNV;
using gles::glCoverageOperationNV;
using gles::glCoverFillPathInstancedNV;
using gles::glCoverFillPathNV;
using gles::glCoverStrokePathInstancedNV;
using gles::glCoverStrokePathNV;
using gles::glCreateMemoryObjectsEXT;
using gles::glCreatePerfQueryINTEL;
using gles::glCreateSemaphoresNV;
using gles::glCreateShaderProgramEXT;
using gles::glCreateShaderProgramv;
using gles::glCreateShaderProgramvEXT;
using gles::glDebugMessageCallback;
using gles::glDebugMessageCallbackKHR;
using gles::glDebugMessageControl;
using gles::glDebugMessageControlKHR;
using gles::glDebugMessageInsert;
using gles::glDebugMessageInsertKHR;
using gles::glDeleteFencesNV;
using gles::glDeleteMemoryObjectsEXT;
using gles::glDeletePathsNV;
using gles::glDeletePerfMonitorsAMD;
using gles::glDeletePerfQueryINTEL;
using gles::glDeleteProgramPipelines;
using gles::glDeleteProgramPipelinesEXT;
using gles::glDeleteQueries;
using gles::glDeleteQueriesEXT;
using gles::glDeleteSamplers;
using gles::glDeleteSemaphoresEXT;
using gles::glDeleteSync;
using gles::glDeleteSyncAPPLE;
using gles::glDeleteTransformFeedbacks;
using gles::glDeleteVertexArrays;
using gles::glDeleteVertexArraysOES;
using gles::glDepthRangeArrayfvNV;
using gles::glDepthRangeArrayfvOES;
using gles::glDepthRangeIndexedfNV;
using gles::glDepthRangeIndexedfOES;
using gles::glDisableDriverControlQCOM;
using gles::glDisablei;
using gles::glDisableiEXT;
using gles::glDisableiNV;
using gles::glDisableiOES;
using gles::glDiscardFramebufferEXT;
using gles::glDispatchCompute;
using gles::glDispatchComputeIndirect;
using gles::glDrawArraysIndirect;
using gles::glDrawArraysInstanced;
using gles::glDrawArraysInstancedANGLE;
using gles::glDrawArraysInstancedBaseInstanceEXT;
using gles::glDrawArraysInstancedEXT;
using gles::glDrawArraysInstancedNV;
using gles::glDrawBuffers;
using gles::glDrawBuffersEXT;
using gles::glDrawBuffersIndexedEXT;
using gles::glDrawBuffersNV;
using gles::glDrawElementsBaseVertex;
using gles::glDrawElementsBaseVertexEXT;
using gles::glDrawElementsBaseVertexOES;
using gles::glDrawElementsIndirect;
using gles::glDrawElementsInstanced;
using gles::glDrawElementsInstancedANGLE;
using gles::glDrawElementsInstancedBaseInstanceEXT;
using gles::glDrawElementsInstancedBaseVertex;
using gles::glDrawElementsInstancedBaseVertexBaseInstanceEXT;
using gles::glDrawElementsInstancedBaseVertexEXT;
using gles::glDrawElementsInstancedBaseVertexOES;
using gles::glDrawElementsInstancedEXT;
using gles::glDrawElementsInstancedNV;
using gles::glDrawMeshTasksIndirectNV;
using gles::glDrawMeshTasksNV;
using gles::glDrawRangeElements;
using gles::glDrawRangeElementsBaseVertex;
using gles::glDrawRangeElementsBaseVertexEXT;
using gles::glDrawRangeElementsBaseVertexOES;
using gles::glDrawTransformFeedbackEXT;
using gles::glDrawTransformFeedbackInstancedEXT;
using gles::glDrawVkImageNV;
using gles::glEGLImageTargetRenderbufferStorageOES;
using gles::glEGLImageTargetTexStorageEXT;
using gles::glEGLImageTargetTexture2DOES;
using gles::glEGLImageTargetTextureStorageEXT;
using gles::glEnableDriverControlQCOM;
using gles::glEnablei;
using gles::glEnableiEXT;
using gles::glEnableiNV;
using gles::glEnableiOES;
using gles::glEndConditionalRenderNV;
using gles::glEndPerfMonitorAMD;
using gles::glEndPerfQueryINTEL;
using gles::glEndQuery;
using gles::glEndQueryEXT;
using gles::glEndTilingQCOM;
using gles::glEndTransformFeedback;
using gles::glExtGetBufferPointervQCOM;
using gles::glExtGetBuffersQCOM;
using gles::glExtGetFramebuffersQCOM;
using gles::glExtGetProgramBinarySourceQCOM;
using gles::glExtGetProgramsQCOM;
using gles::glExtGetRenderbuffersQCOM;
using gles::glExtGetShadersQCOM;
using gles::glExtGetTexLevelParameterivQCOM;
using gles::glExtGetTexSubImageQCOM;
using gles::glExtGetTexturesQCOM;
using gles::glExtIsProgramBinaryQCOM;
using gles::glExtrapolateTex2DQCOM;
using gles::glExtTexObjectStateOverrideiQCOM;
using gles::glFenceSync;
using gles::glFenceSyncAPPLE;
using gles::glFinishFenceNV;
using gles::glFlushMappedBufferRange;
using gles::glFlushMappedBufferRangeEXT;
using gles::glFragmentCoverageColorNV;
using gles::glFramebufferFetchBarrierEXT;
using gles::glFramebufferFetchBarrierQCOM;
using gles::glFramebufferFoveationConfigQCOM;
using gles::glFramebufferFoveationParametersQCOM;
using gles::glFramebufferParameteri;
using gles::glFramebufferParameteriMESA;
using gles::glFramebufferPixelLocalStorageSizeEXT;
using gles::glFramebufferSampleLocationsfvNV;
using gles::glFramebufferShadingRateEXT;
using gles::glFramebufferTexture;
using gles::glFramebufferTexture2DDownsampleIMG;
using gles::glFramebufferTexture2DMultisampleEXT;
using gles::glFramebufferTexture2DMultisampleIMG;
using gles::glFramebufferTexture3DOES;
using gles::glFramebufferTextureEXT;
using gles::glFramebufferTextureLayer;
using gles::glFramebufferTextureLayerDownsampleIMG;
using gles::glFramebufferTextureMultisampleMultiviewOVR;
using gles::glFramebufferTextureMultiviewOVR;
using gles::glFramebufferTextureOES;
using gles::glGenFencesNV;
using gles::glGenPathsNV;
using gles::glGenPerfMonitorsAMD;
using gles::glGenProgramPipelines;
using gles::glGenProgramPipelinesEXT;
using gles::glGenQueries;
using gles::glGenQueriesEXT;
using gles::glGenSamplers;
using gles::glGenSemaphoresEXT;
using gles::glGenTransformFeedbacks;
using gles::glGenVertexArrays;
using gles::glGenVertexArraysOES;
using gles::glGetActiveUniformBlockiv;
using gles::glGetActiveUniformBlockName;
using gles::glGetActiveUniformsiv;
using gles::glGetBooleani_v;
using gles::glGetBufferParameteri64v;
using gles::glGetBufferPointerv;
using gles::glGetBufferPointervOES;
using gles::glGetCoverageModulationTableNV;
using gles::glGetDebugMessageLog;
using gles::glGetDebugMessageLogKHR;
using gles::glGetDriverControlsQCOM;
using gles::glGetDriverControlStringQCOM;
using gles::glGetFenceivNV;
using gles::glGetFirstPerfQueryIdINTEL;
using gles::glGetFloati_vNV;
using gles::glGetFloati_vOES;
using gles::glGetFragDataIndexEXT;
using gles::glGetFragDataLocation;
using gles::glGetFragmentShadingRatesEXT;
using gles::glGetFramebufferParameteriv;
using gles::glGetFramebufferParameterivMESA;
using gles::glGetFramebufferPixelLocalStorageSizeEXT;
using gles::glGetGraphicsResetStatus;
using gles::glGetGraphicsResetStatusEXT;
using gles::glGetGraphicsResetStatusKHR;
using gles::glGetImageHandleNV;
using gles::glGetInteger64i_v;
using gles::glGetInteger64v;
using gles::glGetInteger64vAPPLE;
using gles::glGetInteger64vEXT;
using gles::glGetIntegeri_v;
using gles::glGetIntegeri_vEXT;
using gles::glGetInternalformativ;
using gles::glGetInternalformatSampleivNV;
using gles::glGetMemoryObjectDetachedResourcesuivNV;
using gles::glGetMemoryObjectParameterivEXT;
using gles::glGetMultisamplefv;
using gles::glGetNextPerfQueryIdINTEL;
using gles::glGetnUniformfv;
using gles::glGetnUniformfvEXT;
using gles::glGetnUniformfvKHR;
using gles::glGetnUniformiv;
using gles::glGetnUniformivEXT;
using gles::glGetnUniformivKHR;
using gles::glGetnUniformuiv;
using gles::glGetnUniformuivKHR;
using gles::glGetObjectLabel;
using gles::glGetObjectLabelEXT;
using gles::glGetObjectLabelKHR;
using gles::glGetObjectPtrLabel;
using gles::glGetObjectPtrLabelKHR;
using gles::glGetPathColorGenfvNV;
using gles::glGetPathColorGenivNV;
using gles::glGetPathCommandsNV;
using gles::glGetPathCoordsNV;
using gles::glGetPathDashArrayNV;
using gles::glGetPathLengthNV;
using gles::glGetPathMetricRangeNV;
using gles::glGetPathMetricsNV;
using gles::glGetPathParameterfvNV;
using gles::glGetPathParameterivNV;
using gles::glGetPathSpacingNV;
using gles::glGetPathTexGenfvNV;
using gles::glGetPathTexGenivNV;
using gles::glGetPerfCounterInfoINTEL;
using gles::glGetPerfMonitorCounterDataAMD;
using gles::glGetPerfMonitorCounterInfoAMD;
using gles::glGetPerfMonitorCountersAMD;
using gles::glGetPerfMonitorCounterStringAMD;
using gles::glGetPerfMonitorGroupsAMD;
using gles::glGetPerfMonitorGroupStringAMD;
using gles::glGetPerfQueryDataINTEL;
using gles::glGetPerfQueryIdByNameINTEL;
using gles::glGetPerfQueryInfoINTEL;
using gles::glGetPointerv;
using gles::glGetPointervKHR;
using gles::glGetProgramBinary;
using gles::glGetProgramBinaryOES;
using gles::glGetProgramInterfaceiv;
using gles::glGetProgramPipelineInfoLog;
using gles::glGetProgramPipelineInfoLogEXT;
using gles::glGetProgramPipelineiv;
using gles::glGetProgramPipelineivEXT;
using gles::glGetProgramResourcefvNV;
using gles::glGetProgramResourceIndex;
using gles::glGetProgramResourceiv;
using gles::glGetProgramResourceLocation;
using gles::glGetProgramResourceLocationIndexEXT;
using gles::glGetProgramResourceName;
using gles::glGetQueryiv;
using gles::glGetQueryivEXT;
using gles::glGetQueryObjecti64vEXT;
using gles::glGetQueryObjectivEXT;
using gles::glGetQueryObjectui64vEXT;
using gles::glGetQueryObjectuiv;
using gles::glGetQueryObjectuivEXT;
using gles::glGetSamplerParameterfv;
using gles::glGetSamplerParameterIiv;
using gles::glGetSamplerParameterIivEXT;
using gles::glGetSamplerParameterIivOES;
using gles::glGetSamplerParameterIuiv;
using gles::glGetSamplerParameterIuivEXT;
using gles::glGetSamplerParameterIuivOES;
using gles::glGetSamplerParameteriv;
using gles::glGetSemaphoreParameterivNV;
using gles::glGetSemaphoreParameterui64vEXT;
using gles::glGetShadingRateImagePaletteNV;
using gles::glGetShadingRateSampleLocationivNV;
using gles::glGetStringi;
using gles::glGetSynciv;
using gles::glGetSyncivAPPLE;
using gles::glGetTexLevelParameterfv;
using gles::glGetTexLevelParameteriv;
using gles::glGetTexParameterIiv;
using gles::glGetTexParameterIivEXT;
using gles::glGetTexParameterIivOES;
using gles::glGetTexParameterIuiv;
using gles::glGetTexParameterIuivEXT;
using gles::glGetTexParameterIuivOES;
using gles::glGetTextureHandleIMG;
using gles::glGetTextureHandleNV;
using gles::glGetTextureSamplerHandleIMG;
using gles::glGetTextureSamplerHandleNV;
using gles::glGetTransformFeedbackVarying;
using gles::glGetTranslatedShaderSourceANGLE;
using gles::glGetUniformBlockIndex;
using gles::glGetUniformi64vNV;
using gles::glGetUniformIndices;
using gles::glGetUniformuiv;
using gles::glGetUnsignedBytei_vEXT;
using gles::glGetUnsignedBytevEXT;
using gles::glGetVertexAttribIiv;
using gles::glGetVertexAttribIuiv;
using gles::glGetVkProcAddrNV;
using gles::glImportMemoryFdEXT;
using gles::glImportMemoryWin32HandleEXT;
using gles::glImportMemoryWin32NameEXT;
using gles::glImportSemaphoreFdEXT;
using gles::glImportSemaphoreWin32HandleEXT;
using gles::glImportSemaphoreWin32NameEXT;
using gles::glInsertEventMarkerEXT;
using gles::glInterpolatePathsNV;
using gles::glInvalidateFramebuffer;
using gles::glInvalidateSubFramebuffer;
using gles::glIsEnabledi;
using gles::glIsEnablediEXT;
using gles::glIsEnablediNV;
using gles::glIsEnablediOES;
using gles::glIsFenceNV;
using gles::glIsImageHandleResidentNV;
using gles::glIsMemoryObjectEXT;
using gles::glIsPathNV;
using gles::glIsPointInFillPathNV;
using gles::glIsPointInStrokePathNV;
using gles::glIsProgramPipeline;
using gles::glIsProgramPipelineEXT;
using gles::glIsQuery;
using gles::glIsQueryEXT;
using gles::glIsSampler;
using gles::glIsSemaphoreEXT;
using gles::glIsSync;
using gles::glIsSyncAPPLE;
using gles::glIsTextureHandleResidentNV;
using gles::glIsTransformFeedback;
using gles::glIsVertexArray;
using gles::glIsVertexArrayOES;
using gles::glLabelObjectEXT;
using gles::glMakeImageHandleNonResidentNV;
using gles::glMakeImageHandleResidentNV;
using gles::glMakeTextureHandleNonResidentNV;
using gles::glMakeTextureHandleResidentNV;
using gles::glMapBufferOES;
using gles::glMapBufferRange;
using gles::glMapBufferRangeEXT;
using gles::glMatrixFrustumEXT;
using gles::glMatrixLoad3x2fNV;
using gles::glMatrixLoad3x3fNV;
using gles::glMatrixLoaddEXT;
using gles::glMatrixLoadfEXT;
using gles::glMatrixLoadIdentityEXT;
using gles::glMatrixLoadTranspose3x3fNV;
using gles::glMatrixLoadTransposedEXT;
using gles::glMatrixLoadTransposefEXT;
using gles::glMatrixMult3x2fNV;
using gles::glMatrixMult3x3fNV;
using gles::glMatrixMultdEXT;
using gles::glMatrixMultfEXT;
using gles::glMatrixMultTranspose3x3fNV;
using gles::glMatrixMultTransposedEXT;
using gles::glMatrixMultTransposefEXT;
using gles::glMatrixOrthoEXT;
using gles::glMatrixPopEXT;
using gles::glMatrixPushEXT;
using gles::glMatrixRotatedEXT;
using gles::glMatrixRotatefEXT;
using gles::glMatrixScaledEXT;
using gles::glMatrixScalefEXT;
using gles::glMatrixTranslatedEXT;
using gles::glMatrixTranslatefEXT;
using gles::glMaxActiveShaderCoresARM;
using gles::glMaxShaderCompilerThreadsKHR;
using gles::glMemoryBarrier;
using gles::glMemoryBarrierByRegion;
using gles::glMemoryObjectParameterivEXT;
using gles::glMinSampleShading;
using gles::glMinSampleShadingOES;
using gles::glMultiDrawArraysEXT;
using gles::glMultiDrawArraysIndirectEXT;
using gles::glMultiDrawElementsBaseVertexEXT;
using gles::glMultiDrawElementsEXT;
using gles::glMultiDrawElementsIndirectEXT;
using gles::glMultiDrawMeshTasksIndirectCountNV;
using gles::glMultiDrawMeshTasksIndirectNV;
using gles::glNamedBufferAttachMemoryNV;
using gles::glNamedBufferPageCommitmentMemNV;
using gles::glNamedBufferStorageExternalEXT;
using gles::glNamedBufferStorageMemEXT;
using gles::glNamedFramebufferSampleLocationsfvNV;
using gles::glNamedFramebufferTextureMultiviewOVR;
using gles::glNamedRenderbufferStorageMultisampleAdvancedAMD;
using gles::glObjectLabel;
using gles::glObjectLabelKHR;
using gles::glObjectPtrLabel;
using gles::glObjectPtrLabelKHR;
using gles::glPatchParameteri;
using gles::glPatchParameteriEXT;
using gles::glPatchParameteriOES;
using gles::glPathColorGenNV;
using gles::glPathCommandsNV;
using gles::glPathCoordsNV;
using gles::glPathCoverDepthFuncNV;
using gles::glPathDashArrayNV;
using gles::glPathFogGenNV;
using gles::glPathGlyphIndexArrayNV;
using gles::glPathGlyphIndexRangeNV;
using gles::glPathGlyphRangeNV;
using gles::glPathGlyphsNV;
using gles::glPathMemoryGlyphIndexArrayNV;
using gles::glPathParameterfNV;
using gles::glPathParameterfvNV;
using gles::glPathParameteriNV;
using gles::glPathParameterivNV;
using gles::glPathStencilDepthOffsetNV;
using gles::glPathStencilFuncNV;
using gles::glPathStringNV;
using gles::glPathSubCommandsNV;
using gles::glPathSubCoordsNV;
using gles::glPathTexGenNV;
using gles::glPauseTransformFeedback;
using gles::glPointAlongPathNV;
using gles::glPolygonModeNV;
using gles::glPolygonOffsetClampEXT;
using gles::glPopDebugGroup;
using gles::glPopDebugGroupKHR;
using gles::glPopGroupMarkerEXT;
using gles::glPrimitiveBoundingBox;
using gles::glPrimitiveBoundingBoxEXT;
using gles::glPrimitiveBoundingBoxOES;
using gles::glProgramBinary;
using gles::glProgramBinaryOES;
using gles::glProgramParameteri;
using gles::glProgramParameteriEXT;
using gles::glProgramPathFragmentInputGenNV;
using gles::glProgramUniform1f;
using gles::glProgramUniform1fEXT;
using gles::glProgramUniform1fv;
using gles::glProgramUniform1fvEXT;
using gles::glProgramUniform1i;
using gles::glProgramUniform1i64NV;
using gles::glProgramUniform1i64vNV;
using gles::glProgramUniform1iEXT;
using gles::glProgramUniform1iv;
using gles::glProgramUniform1ivEXT;
using gles::glProgramUniform1ui;
using gles::glProgramUniform1ui64NV;
using gles::glProgramUniform1ui64vNV;
using gles::glProgramUniform1uiEXT;
using gles::glProgramUniform1uiv;
using gles::glProgramUniform1uivEXT;
using gles::glProgramUniform2f;
using gles::glProgramUniform2fEXT;
using gles::glProgramUniform2fv;
using gles::glProgramUniform2fvEXT;
using gles::glProgramUniform2i;
using gles::glProgramUniform2i64NV;
using gles::glProgramUniform2i64vNV;
using gles::glProgramUniform2iEXT;
using gles::glProgramUniform2iv;
using gles::glProgramUniform2ivEXT;
using gles::glProgramUniform2ui;
using gles::glProgramUniform2ui64NV;
using gles::glProgramUniform2ui64vNV;
using gles::glProgramUniform2uiEXT;
using gles::glProgramUniform2uiv;
using gles::glProgramUniform2uivEXT;
using gles::glProgramUniform3f;
using gles::glProgramUniform3fEXT;
using gles::glProgramUniform3fv;
using gles::glProgramUniform3fvEXT;
using gles::glProgramUniform3i;
using gles::glProgramUniform3i64NV;
using gles::glProgramUniform3i64vNV;
using gles::glProgramUniform3iEXT;
using gles::glProgramUniform3iv;
using gles::glProgramUniform3ivEXT;
using gles::glProgramUniform3ui;
using gles::glProgramUniform3ui64NV;
using gles::glProgramUniform3ui64vNV;
using gles::glProgramUniform3uiEXT;
using gles::glProgramUniform3uiv;
using gles::glProgramUniform3uivEXT;
using gles::glProgramUniform4f;
using gles::glProgramUniform4fEXT;
using gles::glProgramUniform4fv;
using gles::glProgramUniform4fvEXT;
using gles::glProgramUniform4i;
using gles::glProgramUniform4i64NV;
using gles::glProgramUniform4i64vNV;
using gles::glProgramUniform4iEXT;
using gles::glProgramUniform4iv;
using gles::glProgramUniform4ivEXT;
using gles::glProgramUniform4ui;
using gles::glProgramUniform4ui64NV;
using gles::glProgramUniform4ui64vNV;
using gles::glProgramUniform4uiEXT;
using gles::glProgramUniform4uiv;
using gles::glProgramUniform4uivEXT;
using gles::glProgramUniformHandleui64IMG;
using gles::glProgramUniformHandleui64NV;
using gles::glProgramUniformHandleui64vIMG;
using gles::glProgramUniformHandleui64vNV;
using gles::glProgramUniformMatrix2fv;
using gles::glProgramUniformMatrix2fvEXT;
using gles::glProgramUniformMatrix2x3fv;
using gles::glProgramUniformMatrix2x3fvEXT;
using gles::glProgramUniformMatrix2x4fv;
using gles::glProgramUniformMatrix2x4fvEXT;
using gles::glProgramUniformMatrix3fv;
using gles::glProgramUniformMatrix3fvEXT;
using gles::glProgramUniformMatrix3x2fv;
using gles::glProgramUniformMatrix3x2fvEXT;
using gles::glProgramUniformMatrix3x4fv;
using gles::glProgramUniformMatrix3x4fvEXT;
using gles::glProgramUniformMatrix4fv;
using gles::glProgramUniformMatrix4fvEXT;
using gles::glProgramUniformMatrix4x2fv;
using gles::glProgramUniformMatrix4x2fvEXT;
using gles::glProgramUniformMatrix4x3fv;
using gles::glProgramUniformMatrix4x3fvEXT;
using gles::glPushDebugGroup;
using gles::glPushDebugGroupKHR;
using gles::glPushGroupMarkerEXT;
using gles::glQueryCounterEXT;
using gles::glRasterSamplesEXT;
using gles::glReadBuffer;
using gles::glReadBufferIndexedEXT;
using gles::glReadBufferNV;
using gles::glReadnPixels;
using gles::glReadnPixelsEXT;
using gles::glReadnPixelsKHR;
using gles::glReleaseKeyedMutexWin32EXT;
using gles::glRenderbufferStorageMultisample;
using gles::glRenderbufferStorageMultisampleAdvancedAMD;
using gles::glRenderbufferStorageMultisampleANGLE;
using gles::glRenderbufferStorageMultisampleAPPLE;
using gles::glRenderbufferStorageMultisampleEXT;
using gles::glRenderbufferStorageMultisampleIMG;
using gles::glRenderbufferStorageMultisampleNV;
using gles::glResetMemoryObjectParameterNV;
using gles::glResolveDepthValuesNV;
using gles::glResolveMultisampleFramebufferAPPLE;
using gles::glResumeTransformFeedback;
using gles::glSampleMaski;
using gles::glSamplerParameterf;
using gles::glSamplerParameterfv;
using gles::glSamplerParameteri;
using gles::glSamplerParameterIiv;
using gles::glSamplerParameterIivEXT;
using gles::glSamplerParameterIivOES;
using gles::glSamplerParameterIuiv;
using gles::glSamplerParameterIuivEXT;
using gles::glSamplerParameterIuivOES;
using gles::glSamplerParameteriv;
using gles::glScissorArrayvNV;
using gles::glScissorArrayvOES;
using gles::glScissorExclusiveArrayvNV;
using gles::glScissorExclusiveNV;
using gles::glScissorIndexedNV;
using gles::glScissorIndexedOES;
using gles::glScissorIndexedvNV;
using gles::glScissorIndexedvOES;
using gles::glSelectPerfMonitorCountersAMD;
using gles::glSemaphoreParameterivNV;
using gles::glSemaphoreParameterui64vEXT;
using gles::glSetFenceNV;
using gles::glShadingRateCombinerOpsEXT;
using gles::glShadingRateEXT;
using gles::glShadingRateImageBarrierNV;
using gles::glShadingRateImagePaletteNV;
using gles::glShadingRateQCOM;
using gles::glShadingRateSampleOrderCustomNV;
using gles::glShadingRateSampleOrderNV;
using gles::glSignalSemaphoreEXT;
using gles::glSignalVkFenceNV;
using gles::glSignalVkSemaphoreNV;
using gles::glStartTilingQCOM;
using gles::glStencilFillPathInstancedNV;
using gles::glStencilFillPathNV;
using gles::glStencilStrokePathInstancedNV;
using gles::glStencilStrokePathNV;
using gles::glStencilThenCoverFillPathInstancedNV;
using gles::glStencilThenCoverFillPathNV;
using gles::glStencilThenCoverStrokePathInstancedNV;
using gles::glStencilThenCoverStrokePathNV;
using gles::glSubpixelPrecisionBiasNV;
using gles::glTestFenceNV;
using gles::glTexAttachMemoryNV;
using gles::glTexBuffer;
using gles::glTexBufferEXT;
using gles::glTexBufferOES;
using gles::glTexBufferRange;
using gles::glTexBufferRangeEXT;
using gles::glTexBufferRangeOES;
using gles::glTexEstimateMotionQCOM;
using gles::glTexEstimateMotionRegionsQCOM;
using gles::glTexImage3D;
using gles::glTexImage3DOES;
using gles::glTexPageCommitmentEXT;
using gles::glTexPageCommitmentMemNV;
using gles::glTexParameterIiv;
using gles::glTexParameterIivEXT;
using gles::glTexParameterIivOES;
using gles::glTexParameterIuiv;
using gles::glTexParameterIuivEXT;
using gles::glTexParameterIuivOES;
using gles::glTexStorage1DEXT;
using gles::glTexStorage2D;
using gles::glTexStorage2DEXT;
using gles::glTexStorage2DMultisample;
using gles::glTexStorage3D;
using gles::glTexStorage3DEXT;
using gles::glTexStorage3DMultisample;
using gles::glTexStorage3DMultisampleOES;
using gles::glTexStorageAttribs2DEXT;
using gles::glTexStorageAttribs3DEXT;
using gles::glTexStorageMem1DEXT;
using gles::glTexStorageMem2DEXT;
using gles::glTexStorageMem2DMultisampleEXT;
using gles::glTexStorageMem3DEXT;
using gles::glTexStorageMem3DMultisampleEXT;
using gles::glTexSubImage3D;
using gles::glTexSubImage3DOES;
using gles::glTextureAttachMemoryNV;
using gles::glTextureBarrierNV;
using gles::glTextureFoveationParametersQCOM;
using gles::glTexturePageCommitmentMemNV;
using gles::glTextureStorage1DEXT;
using gles::glTextureStorage2DEXT;
using gles::glTextureStorage3DEXT;
using gles::glTextureStorageMem1DEXT;
using gles::glTextureStorageMem2DEXT;
using gles::glTextureStorageMem2DMultisampleEXT;
using gles::glTextureStorageMem3DEXT;
using gles::glTextureStorageMem3DMultisampleEXT;
using gles::glTextureViewEXT;
using gles::glTextureViewOES;
using gles::glTransformFeedbackVaryings;
using gles::glTransformPathNV;
using gles::glUniform1i64NV;
using gles::glUniform1i64vNV;
using gles::glUniform1ui;
using gles::glUniform1ui64NV;
using gles::glUniform1ui64vNV;
using gles::glUniform1uiv;
using gles::glUniform2i64NV;
using gles::glUniform2i64vNV;
using gles::glUniform2ui;
using gles::glUniform2ui64NV;
using gles::glUniform2ui64vNV;
using gles::glUniform2uiv;
using gles::glUniform3i64NV;
using gles::glUniform3i64vNV;
using gles::glUniform3ui;
using gles::glUniform3ui64NV;
using gles::glUniform3ui64vNV;
using gles::glUniform3uiv;
using gles::glUniform4i64NV;
using gles::glUniform4i64vNV;
using gles::glUniform4ui;
using gles::glUniform4ui64NV;
using gles::glUniform4ui64vNV;
using gles::glUniform4uiv;
using gles::glUniformBlockBinding;
using gles::glUniformHandleui64IMG;
using gles::glUniformHandleui64NV;
using gles::glUniformHandleui64vIMG;
using gles::glUniformHandleui64vNV;
using gles::glUniformMatrix2x3fv;
using gles::glUniformMatrix2x3fvNV;
using gles::glUniformMatrix2x4fv;
using gles::glUniformMatrix2x4fvNV;
using gles::glUniformMatrix3x2fv;
using gles::glUniformMatrix3x2fvNV;
using gles::glUniformMatrix3x4fv;
using gles::glUniformMatrix3x4fvNV;
using gles::glUniformMatrix4x2fv;
using gles::glUniformMatrix4x2fvNV;
using gles::glUniformMatrix4x3fv;
using gles::glUniformMatrix4x3fvNV;
using gles::glUnmapBuffer;
using gles::glUnmapBufferOES;
using gles::glUseProgramStages;
using gles::glUseProgramStagesEXT;
using gles::glUseShaderProgramEXT;
using gles::glValidateProgramPipeline;
using gles::glValidateProgramPipelineEXT;
using gles::glVertexAttribBinding;
using gles::glVertexAttribDivisor;
using gles::glVertexAttribDivisorANGLE;
using gles::glVertexAttribDivisorEXT;
using gles::glVertexAttribDivisorNV;
using gles::glVertexAttribFormat;
using gles::glVertexAttribI4i;
using gles::glVertexAttribI4iv;
using gles::glVertexAttribI4ui;
using gles::glVertexAttribI4uiv;
using gles::glVertexAttribIFormat;
using gles::glVertexAttribIPointer;
using gles::glVertexBindingDivisor;
using gles::glViewportArrayvNV;
using gles::glViewportArrayvOES;
using gles::glViewportIndexedfNV;
using gles::glViewportIndexedfOES;
using gles::glViewportIndexedfvNV;
using gles::glViewportIndexedfvOES;
using gles::glViewportPositionWScaleNV;
using gles::glViewportSwizzleNV;
using gles::glWaitSemaphoreEXT;
using gles::glWaitSync;
using gles::glWaitSyncAPPLE;
using gles::glWaitVkSemaphoreNV;
using gles::glWeightPathsNV;
using gles::glWindowRectanglesEXT;

} // namespace gles20ext