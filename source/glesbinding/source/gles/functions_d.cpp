
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glDebugMessageCallback(GLDEBUGPROC callback, const void * userParam)
{
    return glesbinding::Binding::DebugMessageCallback(callback, userParam);
}

void glDebugMessageCallbackKHR(GLDEBUGPROCKHR callback, const void * userParam)
{
    return glesbinding::Binding::DebugMessageCallbackKHR(callback, userParam);
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glesbinding::Binding::DebugMessageControl(source, type, severity, count, ids, enabled);
}

void glDebugMessageControlKHR(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint * ids, GLboolean enabled)
{
    return glesbinding::Binding::DebugMessageControlKHR(source, type, severity, count, ids, enabled);
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glesbinding::Binding::DebugMessageInsert(source, type, id, severity, length, buf);
}

void glDebugMessageInsertKHR(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar * buf)
{
    return glesbinding::Binding::DebugMessageInsertKHR(source, type, id, severity, length, buf);
}

void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glesbinding::Binding::DeleteBuffers(n, buffers);
}

void glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
    return glesbinding::Binding::DeleteFencesNV(n, fences);
}

void glDeleteFramebuffers(GLsizei n, const GLuint * framebuffers)
{
    return glesbinding::Binding::DeleteFramebuffers(n, framebuffers);
}

void glDeleteMemoryObjectsEXT(GLsizei n, const GLuint * memoryObjects)
{
    return glesbinding::Binding::DeleteMemoryObjectsEXT(n, memoryObjects);
}

void glDeletePathsNV(GLuint path, GLsizei range)
{
    return glesbinding::Binding::DeletePathsNV(path, range);
}

void glDeletePerfMonitorsAMD(GLsizei n, GLuint * monitors)
{
    return glesbinding::Binding::DeletePerfMonitorsAMD(n, monitors);
}

void glDeletePerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::DeletePerfQueryINTEL(queryHandle);
}

void glDeleteProgram(GLuint program)
{
    return glesbinding::Binding::DeleteProgram(program);
}

void glDeleteProgramPipelines(GLsizei n, const GLuint * pipelines)
{
    return glesbinding::Binding::DeleteProgramPipelines(n, pipelines);
}

void glDeleteProgramPipelinesEXT(GLsizei n, const GLuint * pipelines)
{
    return glesbinding::Binding::DeleteProgramPipelinesEXT(n, pipelines);
}

void glDeleteQueries(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteQueries(n, ids);
}

void glDeleteQueriesEXT(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteQueriesEXT(n, ids);
}

void glDeleteRenderbuffers(GLsizei n, const GLuint * renderbuffers)
{
    return glesbinding::Binding::DeleteRenderbuffers(n, renderbuffers);
}

void glDeleteSamplers(GLsizei count, const GLuint * samplers)
{
    return glesbinding::Binding::DeleteSamplers(count, samplers);
}

void glDeleteSemaphoresEXT(GLsizei n, const GLuint * semaphores)
{
    return glesbinding::Binding::DeleteSemaphoresEXT(n, semaphores);
}

void glDeleteShader(GLuint shader)
{
    return glesbinding::Binding::DeleteShader(shader);
}

void glDeleteSync(GLsync sync)
{
    return glesbinding::Binding::DeleteSync(sync);
}

void glDeleteSyncAPPLE(GLsync sync)
{
    return glesbinding::Binding::DeleteSyncAPPLE(sync);
}

void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return glesbinding::Binding::DeleteTextures(n, textures);
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint * ids)
{
    return glesbinding::Binding::DeleteTransformFeedbacks(n, ids);
}

void glDeleteVertexArrays(GLsizei n, const GLuint * arrays)
{
    return glesbinding::Binding::DeleteVertexArrays(n, arrays);
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint * arrays)
{
    return glesbinding::Binding::DeleteVertexArraysOES(n, arrays);
}

void glDepthFunc(GLenum func)
{
    return glesbinding::Binding::DepthFunc(func);
}

void glDepthMask(GLboolean flag)
{
    return glesbinding::Binding::DepthMask(flag);
}

void glDepthRangeArrayfvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::DepthRangeArrayfvNV(first, count, v);
}

void glDepthRangeArrayfvOES(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::DepthRangeArrayfvOES(first, count, v);
}

void glDepthRangef(GLfloat n, GLfloat f)
{
    return glesbinding::Binding::DepthRangef(n, f);
}

void glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
    return glesbinding::Binding::DepthRangeIndexedfNV(index, n, f);
}

void glDepthRangeIndexedfOES(GLuint index, GLfloat n, GLfloat f)
{
    return glesbinding::Binding::DepthRangeIndexedfOES(index, n, f);
}

void glDetachShader(GLuint program, GLuint shader)
{
    return glesbinding::Binding::DetachShader(program, shader);
}

void glDisable(GLenum cap)
{
    return glesbinding::Binding::Disable(cap);
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
    return glesbinding::Binding::DisableDriverControlQCOM(driverControl);
}

void glDisablei(GLenum target, GLuint index)
{
    return glesbinding::Binding::Disablei(target, index);
}

void glDisableiEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiEXT(target, index);
}

void glDisableiNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiNV(target, index);
}

void glDisableiOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::DisableiOES(target, index);
}

void glDisableVertexAttribArray(GLuint index)
{
    return glesbinding::Binding::DisableVertexAttribArray(index);
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glesbinding::Binding::DiscardFramebufferEXT(target, numAttachments, attachments);
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
    return glesbinding::Binding::DispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

void glDispatchComputeIndirect(GLintptr indirect)
{
    return glesbinding::Binding::DispatchComputeIndirect(indirect);
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return glesbinding::Binding::DrawArrays(mode, first, count);
}

void glDrawArraysIndirect(GLenum mode, const void * indirect)
{
    return glesbinding::Binding::DrawArraysIndirect(mode, indirect);
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
    return glesbinding::Binding::DrawArraysInstanced(mode, first, count, instancecount);
}

void glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedANGLE(mode, first, count, primcount);
}

void glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
    return glesbinding::Binding::DrawArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}

void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedEXT(mode, start, count, primcount);
}

void glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
    return glesbinding::Binding::DrawArraysInstancedNV(mode, first, count, primcount);
}

void glDrawBuffers(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffers(n, bufs);
}

void glDrawBuffersEXT(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffersEXT(n, bufs);
}

void glDrawBuffersIndexedEXT(GLint n, const GLenum * location, const GLint * indices)
{
    return glesbinding::Binding::DrawBuffersIndexedEXT(n, location, indices);
}

void glDrawBuffersNV(GLsizei n, const GLenum * bufs)
{
    return glesbinding::Binding::DrawBuffersNV(n, bufs);
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return glesbinding::Binding::DrawElements(mode, count, type, indices);
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsBaseVertex(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}

void glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsBaseVertexOES(mode, count, type, indices, basevertex);
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void * indirect)
{
    return glesbinding::Binding::DrawElementsIndirect(mode, type, indirect);
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glesbinding::Binding::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

void glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance)
{
    return glesbinding::Binding::DrawElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertex(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

void glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex)
{
    return glesbinding::Binding::DrawElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}

void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

void glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei primcount)
{
    return glesbinding::Binding::DrawElementsInstancedNV(mode, count, type, indices, primcount);
}

void glDrawMeshTasksIndirectNV(GLintptr indirect)
{
    return glesbinding::Binding::DrawMeshTasksIndirectNV(indirect);
}

void glDrawMeshTasksNV(GLuint first, GLuint count)
{
    return glesbinding::Binding::DrawMeshTasksNV(first, count);
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return glesbinding::Binding::DrawRangeElements(mode, start, end, count, type, indices);
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}

void glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex)
{
    return glesbinding::Binding::DrawRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}

void glDrawTransformFeedbackEXT(GLenum mode, GLuint id)
{
    return glesbinding::Binding::DrawTransformFeedbackEXT(mode, id);
}

void glDrawTransformFeedbackInstancedEXT(GLenum mode, GLuint id, GLsizei instancecount)
{
    return glesbinding::Binding::DrawTransformFeedbackInstancedEXT(mode, id, instancecount);
}

void glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
    return glesbinding::Binding::DrawVkImageNV(vkImage, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}


} // namespace gles