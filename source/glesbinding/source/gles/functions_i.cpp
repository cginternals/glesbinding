
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glImportMemoryFdEXT(GLuint memory, GLuint64 size, GLenum handleType, GLint fd)
{
    return glesbinding::Binding::ImportMemoryFdEXT(memory, size, handleType, fd);
}

void glImportMemoryWin32HandleEXT(GLuint memory, GLuint64 size, GLenum handleType, void * handle)
{
    return glesbinding::Binding::ImportMemoryWin32HandleEXT(memory, size, handleType, handle);
}

void glImportMemoryWin32NameEXT(GLuint memory, GLuint64 size, GLenum handleType, const void * name)
{
    return glesbinding::Binding::ImportMemoryWin32NameEXT(memory, size, handleType, name);
}

void glImportSemaphoreFdEXT(GLuint semaphore, GLenum handleType, GLint fd)
{
    return glesbinding::Binding::ImportSemaphoreFdEXT(semaphore, handleType, fd);
}

void glImportSemaphoreWin32HandleEXT(GLuint semaphore, GLenum handleType, void * handle)
{
    return glesbinding::Binding::ImportSemaphoreWin32HandleEXT(semaphore, handleType, handle);
}

void glImportSemaphoreWin32NameEXT(GLuint semaphore, GLenum handleType, const void * name)
{
    return glesbinding::Binding::ImportSemaphoreWin32NameEXT(semaphore, handleType, name);
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar * marker)
{
    return glesbinding::Binding::InsertEventMarkerEXT(length, marker);
}

void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
    return glesbinding::Binding::InterpolatePathsNV(resultPath, pathA, pathB, weight);
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments)
{
    return glesbinding::Binding::InvalidateFramebuffer(target, numAttachments, attachments);
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::InvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

GLboolean glIsBuffer(GLuint buffer)
{
    return glesbinding::Binding::IsBuffer(buffer);
}

GLboolean glIsEnabled(GLenum cap)
{
    return glesbinding::Binding::IsEnabled(cap);
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnabledi(target, index);
}

GLboolean glIsEnablediEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediEXT(target, index);
}

GLboolean glIsEnablediNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediNV(target, index);
}

GLboolean glIsEnablediOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::IsEnablediOES(target, index);
}

GLboolean glIsFenceNV(GLuint fence)
{
    return glesbinding::Binding::IsFenceNV(fence);
}

GLboolean glIsFramebuffer(GLuint framebuffer)
{
    return glesbinding::Binding::IsFramebuffer(framebuffer);
}

GLboolean glIsImageHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::IsImageHandleResidentNV(handle);
}

GLboolean glIsMemoryObjectEXT(GLuint memoryObject)
{
    return glesbinding::Binding::IsMemoryObjectEXT(memoryObject);
}

GLboolean glIsPathNV(GLuint path)
{
    return glesbinding::Binding::IsPathNV(path);
}

GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::IsPointInFillPathNV(path, mask, x, y);
}

GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::IsPointInStrokePathNV(path, x, y);
}

GLboolean glIsProgram(GLuint program)
{
    return glesbinding::Binding::IsProgram(program);
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::IsProgramPipeline(pipeline);
}

GLboolean glIsProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::IsProgramPipelineEXT(pipeline);
}

GLboolean glIsQuery(GLuint id)
{
    return glesbinding::Binding::IsQuery(id);
}

GLboolean glIsQueryEXT(GLuint id)
{
    return glesbinding::Binding::IsQueryEXT(id);
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
    return glesbinding::Binding::IsRenderbuffer(renderbuffer);
}

GLboolean glIsSampler(GLuint sampler)
{
    return glesbinding::Binding::IsSampler(sampler);
}

GLboolean glIsSemaphoreEXT(GLuint semaphore)
{
    return glesbinding::Binding::IsSemaphoreEXT(semaphore);
}

GLboolean glIsShader(GLuint shader)
{
    return glesbinding::Binding::IsShader(shader);
}

GLboolean glIsSync(GLsync sync)
{
    return glesbinding::Binding::IsSync(sync);
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
    return glesbinding::Binding::IsSyncAPPLE(sync);
}

GLboolean glIsTexture(GLuint texture)
{
    return glesbinding::Binding::IsTexture(texture);
}

GLboolean glIsTextureHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::IsTextureHandleResidentNV(handle);
}

GLboolean glIsTransformFeedback(GLuint id)
{
    return glesbinding::Binding::IsTransformFeedback(id);
}

GLboolean glIsVertexArray(GLuint array)
{
    return glesbinding::Binding::IsVertexArray(array);
}

GLboolean glIsVertexArrayOES(GLuint array)
{
    return glesbinding::Binding::IsVertexArrayOES(array);
}


} // namespace gles