
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
    return glesbinding::Binding::BeginConditionalRenderNV(id, mode);
}

void glBeginPerfMonitorAMD(GLuint monitor)
{
    return glesbinding::Binding::BeginPerfMonitorAMD(monitor);
}

void glBeginPerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::BeginPerfQueryINTEL(queryHandle);
}

void glBeginQuery(GLenum target, GLuint id)
{
    return glesbinding::Binding::BeginQuery(target, id);
}

void glBeginQueryEXT(GLenum target, GLuint id)
{
    return glesbinding::Binding::BeginQueryEXT(target, id);
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
    return glesbinding::Binding::BeginTransformFeedback(primitiveMode);
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar * name)
{
    return glesbinding::Binding::BindAttribLocation(program, index, name);
}

void glBindBuffer(GLenum target, GLuint buffer)
{
    return glesbinding::Binding::BindBuffer(target, buffer);
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
    return glesbinding::Binding::BindBufferBase(target, index, buffer);
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
    return glesbinding::Binding::BindBufferRange(target, index, buffer, offset, size);
}

void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar * name)
{
    return glesbinding::Binding::BindFragDataLocationEXT(program, color, name);
}

void glBindFragDataLocationIndexedEXT(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name)
{
    return glesbinding::Binding::BindFragDataLocationIndexedEXT(program, colorNumber, index, name);
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
    return glesbinding::Binding::BindFramebuffer(target, framebuffer);
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
    return glesbinding::Binding::BindImageTexture(unit, texture, level, layered, layer, access, format);
}

void glBindProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::BindProgramPipeline(pipeline);
}

void glBindProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::BindProgramPipelineEXT(pipeline);
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
    return glesbinding::Binding::BindRenderbuffer(target, renderbuffer);
}

void glBindSampler(GLuint unit, GLuint sampler)
{
    return glesbinding::Binding::BindSampler(unit, sampler);
}

void glBindShadingRateImageNV(GLuint texture)
{
    return glesbinding::Binding::BindShadingRateImageNV(texture);
}

void glBindTexture(GLenum target, GLuint texture)
{
    return glesbinding::Binding::BindTexture(target, texture);
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
    return glesbinding::Binding::BindTransformFeedback(target, id);
}

void glBindVertexArray(GLuint array)
{
    return glesbinding::Binding::BindVertexArray(array);
}

void glBindVertexArrayOES(GLuint array)
{
    return glesbinding::Binding::BindVertexArrayOES(array);
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
    return glesbinding::Binding::BindVertexBuffer(bindingindex, buffer, offset, stride);
}

void glBlendBarrier()
{
    return glesbinding::Binding::BlendBarrier();
}

void glBlendBarrierKHR()
{
    return glesbinding::Binding::BlendBarrierKHR();
}

void glBlendBarrierNV()
{
    return glesbinding::Binding::BlendBarrierNV();
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glesbinding::Binding::BlendColor(red, green, blue, alpha);
}

void glBlendEquation(GLenum mode)
{
    return glesbinding::Binding::BlendEquation(mode);
}

void glBlendEquationEXT(GLenum mode)
{
    return glesbinding::Binding::BlendEquationEXT(mode);
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
    return glesbinding::Binding::BlendEquationi(buf, mode);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    return glesbinding::Binding::BlendEquationiEXT(buf, mode);
}

void glBlendEquationiOES(GLuint buf, GLenum mode)
{
    return glesbinding::Binding::BlendEquationiOES(buf, mode);
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparate(modeRGB, modeAlpha);
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparatei(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}

void glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
    return glesbinding::Binding::BlendEquationSeparateiOES(buf, modeRGB, modeAlpha);
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return glesbinding::Binding::BlendFunc(sfactor, dfactor);
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
    return glesbinding::Binding::BlendFunci(buf, src, dst);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    return glesbinding::Binding::BlendFunciEXT(buf, src, dst);
}

void glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
    return glesbinding::Binding::BlendFunciOES(buf, src, dst);
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return glesbinding::Binding::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glesbinding::Binding::BlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glesbinding::Binding::BlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    return glesbinding::Binding::BlendFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendParameteriNV(GLenum pname, GLint value)
{
    return glesbinding::Binding::BlendParameteriNV(pname, value);
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, ClearBufferMask mask, GLenum filter)
{
    return glesbinding::Binding::BlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void glBufferAttachMemoryNV(GLenum target, GLuint memory, GLuint64 offset)
{
    return glesbinding::Binding::BufferAttachMemoryNV(target, memory, offset);
}

void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glesbinding::Binding::BufferData(target, size, data, usage);
}

void glBufferStorageEXT(GLenum target, GLsizeiptr size, const void * data, BufferStorageMask flags)
{
    return glesbinding::Binding::BufferStorageEXT(target, size, data, flags);
}

void glBufferStorageExternalEXT(GLenum target, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, BufferStorageMask flags)
{
    return glesbinding::Binding::BufferStorageExternalEXT(target, offset, size, clientBuffer, flags);
}

void glBufferStorageMemEXT(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return glesbinding::Binding::BufferStorageMemEXT(target, size, memory, offset);
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void * data)
{
    return glesbinding::Binding::BufferSubData(target, offset, size, data);
}


} // namespace gles