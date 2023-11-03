
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glesbinding::Binding::GenBuffers(n, buffers);
}

void glGenerateMipmap(GLenum target)
{
    return glesbinding::Binding::GenerateMipmap(target);
}

void glGenFencesNV(GLsizei n, GLuint * fences)
{
    return glesbinding::Binding::GenFencesNV(n, fences);
}

void glGenFramebuffers(GLsizei n, GLuint * framebuffers)
{
    return glesbinding::Binding::GenFramebuffers(n, framebuffers);
}

GLuint glGenPathsNV(GLsizei range)
{
    return glesbinding::Binding::GenPathsNV(range);
}

void glGenPerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glesbinding::Binding::GenPerfMonitorsAMD(n, monitors);
}

void glGenProgramPipelines(GLsizei n, GLuint * pipelines)
{
    return glesbinding::Binding::GenProgramPipelines(n, pipelines);
}

void glGenProgramPipelinesEXT(GLsizei n, GLuint * pipelines)
{
    return glesbinding::Binding::GenProgramPipelinesEXT(n, pipelines);
}

void glGenQueries(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenQueries(n, ids);
}

void glGenQueriesEXT(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenQueriesEXT(n, ids);
}

void glGenRenderbuffers(GLsizei n, GLuint * renderbuffers)
{
    return glesbinding::Binding::GenRenderbuffers(n, renderbuffers);
}

void glGenSamplers(GLsizei count, GLuint * samplers)
{
    return glesbinding::Binding::GenSamplers(count, samplers);
}

void glGenSemaphoresEXT(GLsizei n, GLuint * semaphores)
{
    return glesbinding::Binding::GenSemaphoresEXT(n, semaphores);
}

void glGenTextures(GLsizei n, GLuint * textures)
{
    return glesbinding::Binding::GenTextures(n, textures);
}

void glGenTransformFeedbacks(GLsizei n, GLuint * ids)
{
    return glesbinding::Binding::GenTransformFeedbacks(n, ids);
}

void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glesbinding::Binding::GenVertexArrays(n, arrays);
}

void glGenVertexArraysOES(GLsizei n, GLuint * arrays)
{
    return glesbinding::Binding::GenVertexArraysOES(n, arrays);
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName)
{
    return glesbinding::Binding::GetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
    return glesbinding::Binding::GetAttachedShaders(program, maxCount, count, shaders);
}

GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetAttribLocation(program, name);
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean * data)
{
    return glesbinding::Binding::GetBooleani_v(target, index, data);
}

void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return glesbinding::Binding::GetBooleanv(pname, data);
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetBufferParameteri64v(target, pname, params);
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetBufferParameteriv(target, pname, params);
}

void glGetBufferPointerv(GLenum target, GLenum pname, void ** params)
{
    return glesbinding::Binding::GetBufferPointerv(target, pname, params);
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void ** params)
{
    return glesbinding::Binding::GetBufferPointervOES(target, pname, params);
}

void glGetCoverageModulationTableNV(GLsizei bufSize, GLfloat * v)
{
    return glesbinding::Binding::GetCoverageModulationTableNV(bufSize, v);
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glesbinding::Binding::GetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

GLuint glGetDebugMessageLogKHR(GLuint count, GLsizei bufSize, GLenum * sources, GLenum * types, GLuint * ids, GLenum * severities, GLsizei * lengths, GLchar * messageLog)
{
    return glesbinding::Binding::GetDebugMessageLogKHR(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

void glGetDriverControlsQCOM(GLint * num, GLsizei size, GLuint * driverControls)
{
    return glesbinding::Binding::GetDriverControlsQCOM(num, size, driverControls);
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei * length, GLchar * driverControlString)
{
    return glesbinding::Binding::GetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}

GLenum glGetError()
{
    return glesbinding::Binding::GetError();
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFenceivNV(fence, pname, params);
}

void glGetFirstPerfQueryIdINTEL(GLuint * queryId)
{
    return glesbinding::Binding::GetFirstPerfQueryIdINTEL(queryId);
}

void glGetFloati_vNV(GLenum target, GLuint index, GLfloat * data)
{
    return glesbinding::Binding::GetFloati_vNV(target, index, data);
}

void glGetFloati_vOES(GLenum target, GLuint index, GLfloat * data)
{
    return glesbinding::Binding::GetFloati_vOES(target, index, data);
}

void glGetFloatv(GLenum pname, GLfloat * data)
{
    return glesbinding::Binding::GetFloatv(pname, data);
}

GLint glGetFragDataIndexEXT(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetFragDataIndexEXT(program, name);
}

GLint glGetFragDataLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetFragDataLocation(program, name);
}

void glGetFragmentShadingRatesEXT(GLsizei samples, GLsizei maxCount, GLsizei * count, GLenum * shadingRates)
{
    return glesbinding::Binding::GetFragmentShadingRatesEXT(samples, maxCount, count, shadingRates);
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFramebufferParameteriv(target, pname, params);
}

void glGetFramebufferParameterivMESA(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetFramebufferParameterivMESA(target, pname, params);
}

GLsizei glGetFramebufferPixelLocalStorageSizeEXT(GLuint target)
{
    return glesbinding::Binding::GetFramebufferPixelLocalStorageSizeEXT(target);
}

GLenum glGetGraphicsResetStatus()
{
    return glesbinding::Binding::GetGraphicsResetStatus();
}

GLenum glGetGraphicsResetStatusEXT()
{
    return glesbinding::Binding::GetGraphicsResetStatusEXT();
}

GLenum glGetGraphicsResetStatusKHR()
{
    return glesbinding::Binding::GetGraphicsResetStatusKHR();
}

GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
    return glesbinding::Binding::GetImageHandleNV(texture, level, layered, layer, format);
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 * data)
{
    return glesbinding::Binding::GetInteger64i_v(target, index, data);
}

void glGetInteger64v(GLenum pname, GLint64 * data)
{
    return glesbinding::Binding::GetInteger64v(pname, data);
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetInteger64vAPPLE(pname, params);
}

void glGetInteger64vEXT(GLenum pname, GLint64 * data)
{
    return glesbinding::Binding::GetInteger64vEXT(pname, data);
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint * data)
{
    return glesbinding::Binding::GetIntegeri_v(target, index, data);
}

void glGetIntegeri_vEXT(GLenum target, GLuint index, GLint * data)
{
    return glesbinding::Binding::GetIntegeri_vEXT(target, index, data);
}

void glGetIntegerv(GLenum pname, GLint * data)
{
    return glesbinding::Binding::GetIntegerv(pname, data);
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint * params)
{
    return glesbinding::Binding::GetInternalformativ(target, internalformat, pname, count, params);
}

void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei count, GLint * params)
{
    return glesbinding::Binding::GetInternalformatSampleivNV(target, internalformat, samples, pname, count, params);
}

void glGetMemoryObjectDetachedResourcesuivNV(GLuint memory, GLenum pname, GLint first, GLsizei count, GLuint * params)
{
    return glesbinding::Binding::GetMemoryObjectDetachedResourcesuivNV(memory, pname, first, count, params);
}

void glGetMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetMemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat * val)
{
    return glesbinding::Binding::GetMultisamplefv(pname, index, val);
}

void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint * nextQueryId)
{
    return glesbinding::Binding::GetNextPerfQueryIdINTEL(queryId, nextQueryId);
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glesbinding::Binding::GetnUniformfv(program, location, bufSize, params);
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glesbinding::Binding::GetnUniformfvEXT(program, location, bufSize, params);
}

void glGetnUniformfvKHR(GLuint program, GLint location, GLsizei bufSize, GLfloat * params)
{
    return glesbinding::Binding::GetnUniformfvKHR(program, location, bufSize, params);
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetnUniformiv(program, location, bufSize, params);
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetnUniformivEXT(program, location, bufSize, params);
}

void glGetnUniformivKHR(GLuint program, GLint location, GLsizei bufSize, GLint * params)
{
    return glesbinding::Binding::GetnUniformivKHR(program, location, bufSize, params);
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glesbinding::Binding::GetnUniformuiv(program, location, bufSize, params);
}

void glGetnUniformuivKHR(GLuint program, GLint location, GLsizei bufSize, GLuint * params)
{
    return glesbinding::Binding::GetnUniformuivKHR(program, location, bufSize, params);
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectLabel(identifier, name, bufSize, length, label);
}

void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectLabelEXT(type, object, bufSize, length, label);
}

void glGetObjectLabelKHR(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectLabelKHR(identifier, name, bufSize, length, label);
}

void glGetObjectPtrLabel(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectPtrLabel(ptr, bufSize, length, label);
}

void glGetObjectPtrLabelKHR(const void * ptr, GLsizei bufSize, GLsizei * length, GLchar * label)
{
    return glesbinding::Binding::GetObjectPtrLabelKHR(ptr, bufSize, length, label);
}

void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat * value)
{
    return glesbinding::Binding::GetPathColorGenfvNV(color, pname, value);
}

void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint * value)
{
    return glesbinding::Binding::GetPathColorGenivNV(color, pname, value);
}

void glGetPathCommandsNV(GLuint path, GLubyte * commands)
{
    return glesbinding::Binding::GetPathCommandsNV(path, commands);
}

void glGetPathCoordsNV(GLuint path, GLfloat * coords)
{
    return glesbinding::Binding::GetPathCoordsNV(path, coords);
}

void glGetPathDashArrayNV(GLuint path, GLfloat * dashArray)
{
    return glesbinding::Binding::GetPathDashArrayNV(path, dashArray);
}

GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
    return glesbinding::Binding::GetPathLengthNV(path, startSegment, numSegments);
}

void glGetPathMetricRangeNV(PathMetricMask metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat * metrics)
{
    return glesbinding::Binding::GetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

void glGetPathMetricsNV(PathMetricMask metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLsizei stride, GLfloat * metrics)
{
    return glesbinding::Binding::GetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat * value)
{
    return glesbinding::Binding::GetPathParameterfvNV(path, pname, value);
}

void glGetPathParameterivNV(GLuint path, GLenum pname, GLint * value)
{
    return glesbinding::Binding::GetPathParameterivNV(path, pname, value);
}

void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat * returnedSpacing)
{
    return glesbinding::Binding::GetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat * value)
{
    return glesbinding::Binding::GetPathTexGenfvNV(texCoordSet, pname, value);
}

void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint * value)
{
    return glesbinding::Binding::GetPathTexGenivNV(texCoordSet, pname, value);
}

void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue)
{
    return glesbinding::Binding::GetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten)
{
    return glesbinding::Binding::GetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void * data)
{
    return glesbinding::Binding::GetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}

void glGetPerfMonitorCountersAMD(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei counterSize, GLuint * counters)
{
    return glesbinding::Binding::GetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, counterSize, counters);
}

void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString)
{
    return glesbinding::Binding::GetPerfMonitorCounterStringAMD(group, counter, bufSize, length, counterString);
}

void glGetPerfMonitorGroupsAMD(GLint * numGroups, GLsizei groupsSize, GLuint * groups)
{
    return glesbinding::Binding::GetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}

void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString)
{
    return glesbinding::Binding::GetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}

void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, void * data, GLuint * bytesWritten)
{
    return glesbinding::Binding::GetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

void glGetPerfQueryIdByNameINTEL(GLchar * queryName, GLuint * queryId)
{
    return glesbinding::Binding::GetPerfQueryIdByNameINTEL(queryName, queryId);
}

void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, PerformanceQueryCapsMaskINTEL capsMask)
{
    return glesbinding::Binding::GetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

void glGetPointerv(GLenum pname, void ** params)
{
    return glesbinding::Binding::GetPointerv(pname, params);
}

void glGetPointervKHR(GLenum pname, void ** params)
{
    return glesbinding::Binding::GetPointervKHR(pname, params);
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glesbinding::Binding::GetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary)
{
    return glesbinding::Binding::GetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramInfoLog(program, bufSize, length, infoLog);
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramInterfaceiv(program, programInterface, pname, params);
}

void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramiv(program, pname, params);
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramPipelineiv(pipeline, pname, params);
}

void glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetProgramPipelineivEXT(pipeline, pname, params);
}

void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLfloat * params)
{
    return glesbinding::Binding::GetProgramResourcefvNV(program, programInterface, index, propCount, props, count, length, params);
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceIndex(program, programInterface, name);
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei count, GLsizei * length, GLint * params)
{
    return glesbinding::Binding::GetProgramResourceiv(program, programInterface, index, propCount, props, count, length, params);
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceLocation(program, programInterface, name);
}

GLint glGetProgramResourceLocationIndexEXT(GLuint program, GLenum programInterface, const GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceLocationIndexEXT(program, programInterface, name);
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name)
{
    return glesbinding::Binding::GetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

void glGetQueryiv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryiv(target, pname, params);
}

void glGetQueryivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryivEXT(target, pname, params);
}

void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 * params)
{
    return glesbinding::Binding::GetQueryObjecti64vEXT(id, pname, params);
}

void glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetQueryObjectivEXT(id, pname, params);
}

void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 * params)
{
    return glesbinding::Binding::GetQueryObjectui64vEXT(id, pname, params);
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetQueryObjectuiv(id, pname, params);
}

void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetQueryObjectuivEXT(id, pname, params);
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetRenderbufferParameteriv(target, pname, params);
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetSamplerParameterfv(sampler, pname, params);
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameterIiv(sampler, pname, params);
}

void glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameterIivEXT(sampler, pname, params);
}

void glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameterIivOES(sampler, pname, params);
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetSamplerParameterIuiv(sampler, pname, params);
}

void glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetSamplerParameterIuivEXT(sampler, pname, params);
}

void glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetSamplerParameterIuivOES(sampler, pname, params);
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSamplerParameteriv(sampler, pname, params);
}

void glGetSemaphoreParameterivNV(GLuint semaphore, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetSemaphoreParameterivNV(semaphore, pname, params);
}

void glGetSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, GLuint64 * params)
{
    return glesbinding::Binding::GetSemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glesbinding::Binding::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetShaderiv(shader, pname, params);
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint * range, GLint * precision)
{
    return glesbinding::Binding::GetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glesbinding::Binding::GetShaderSource(shader, bufSize, length, source);
}

void glGetShadingRateImagePaletteNV(GLuint viewport, GLuint entry, GLenum * rate)
{
    return glesbinding::Binding::GetShadingRateImagePaletteNV(viewport, entry, rate);
}

void glGetShadingRateSampleLocationivNV(GLenum rate, GLuint samples, GLuint index, GLint * location)
{
    return glesbinding::Binding::GetShadingRateSampleLocationivNV(rate, samples, index, location);
}

const GLubyte * glGetString(GLenum name)
{
    return glesbinding::Binding::GetString(name);
}

const GLubyte * glGetStringi(GLenum name, GLuint index)
{
    return glesbinding::Binding::GetStringi(name, index);
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values)
{
    return glesbinding::Binding::GetSynciv(sync, pname, count, length, values);
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei count, GLsizei * length, GLint * values)
{
    return glesbinding::Binding::GetSyncivAPPLE(sync, pname, count, length, values);
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetTexLevelParameterfv(target, level, pname, params);
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexLevelParameteriv(target, level, pname, params);
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetTexParameterfv(target, pname, params);
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameterIiv(target, pname, params);
}

void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameterIivEXT(target, pname, params);
}

void glGetTexParameterIivOES(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameterIivOES(target, pname, params);
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetTexParameterIuiv(target, pname, params);
}

void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetTexParameterIuivEXT(target, pname, params);
}

void glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetTexParameterIuivOES(target, pname, params);
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetTexParameteriv(target, pname, params);
}

GLuint64 glGetTextureHandleIMG(GLuint texture)
{
    return glesbinding::Binding::GetTextureHandleIMG(texture);
}

GLuint64 glGetTextureHandleNV(GLuint texture)
{
    return glesbinding::Binding::GetTextureHandleNV(texture);
}

GLuint64 glGetTextureSamplerHandleIMG(GLuint texture, GLuint sampler)
{
    return glesbinding::Binding::GetTextureSamplerHandleIMG(texture, sampler);
}

GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
    return glesbinding::Binding::GetTextureSamplerHandleNV(texture, sampler);
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name)
{
    return glesbinding::Binding::GetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}

void glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source)
{
    return glesbinding::Binding::GetTranslatedShaderSourceANGLE(shader, bufSize, length, source);
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar * uniformBlockName)
{
    return glesbinding::Binding::GetUniformBlockIndex(program, uniformBlockName);
}

void glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
    return glesbinding::Binding::GetUniformfv(program, location, params);
}

void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT * params)
{
    return glesbinding::Binding::GetUniformi64vNV(program, location, params);
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices)
{
    return glesbinding::Binding::GetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

void glGetUniformiv(GLuint program, GLint location, GLint * params)
{
    return glesbinding::Binding::GetUniformiv(program, location, params);
}

GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glesbinding::Binding::GetUniformLocation(program, name);
}

void glGetUniformuiv(GLuint program, GLint location, GLuint * params)
{
    return glesbinding::Binding::GetUniformuiv(program, location, params);
}

void glGetUnsignedBytei_vEXT(GLenum target, GLuint index, GLubyte * data)
{
    return glesbinding::Binding::GetUnsignedBytei_vEXT(target, index, data);
}

void glGetUnsignedBytevEXT(GLenum pname, GLubyte * data)
{
    return glesbinding::Binding::GetUnsignedBytevEXT(pname, data);
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
    return glesbinding::Binding::GetVertexAttribfv(index, pname, params);
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetVertexAttribIiv(index, pname, params);
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint * params)
{
    return glesbinding::Binding::GetVertexAttribIuiv(index, pname, params);
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
    return glesbinding::Binding::GetVertexAttribiv(index, pname, params);
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void ** pointer)
{
    return glesbinding::Binding::GetVertexAttribPointerv(index, pname, pointer);
}

GLVULKANPROCNV glGetVkProcAddrNV(const GLchar * name)
{
    return glesbinding::Binding::GetVkProcAddrNV(name);
}


} // namespace gles