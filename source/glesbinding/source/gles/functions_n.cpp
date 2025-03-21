
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glNamedBufferAttachMemoryNV(GLuint buffer, GLuint memory, GLuint64 offset)
{
    return glesbinding::Binding::NamedBufferAttachMemoryNV(buffer, memory, offset);
}

void glNamedBufferPageCommitmentMemNV(GLuint buffer, GLintptr offset, GLsizeiptr size, GLuint memory, GLuint64 memOffset, GLboolean commit)
{
    return glesbinding::Binding::NamedBufferPageCommitmentMemNV(buffer, offset, size, memory, memOffset, commit);
}

void glNamedBufferStorageExternalEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLeglClientBufferEXT clientBuffer, BufferStorageMask flags)
{
    return glesbinding::Binding::NamedBufferStorageExternalEXT(buffer, offset, size, clientBuffer, flags);
}

void glNamedBufferStorageMemEXT(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset)
{
    return glesbinding::Binding::NamedBufferStorageMemEXT(buffer, size, memory, offset);
}

void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::NamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}

void glNamedFramebufferTextureMultiviewOVR(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return glesbinding::Binding::NamedFramebufferTextureMultiviewOVR(framebuffer, attachment, texture, level, baseViewIndex, numViews);
}

void glNamedRenderbufferStorageMultisampleAdvancedAMD(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::NamedRenderbufferStorageMultisampleAdvancedAMD(renderbuffer, samples, storageSamples, internalformat, width, height);
}


} // namespace gles