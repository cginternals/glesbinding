
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
    return glesbinding::Binding::RasterSamplesEXT(samples, fixedsamplelocations);
}

void glReadBuffer(GLenum src)
{
    return glesbinding::Binding::ReadBuffer(src);
}

void glReadBufferIndexedEXT(GLenum src, GLint index)
{
    return glesbinding::Binding::ReadBufferIndexedEXT(src, index);
}

void glReadBufferNV(GLenum mode)
{
    return glesbinding::Binding::ReadBufferNV(mode);
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glesbinding::Binding::ReadnPixels(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glesbinding::Binding::ReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}

void glReadnPixelsKHR(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void * data)
{
    return glesbinding::Binding::ReadnPixelsKHR(x, y, width, height, format, type, bufSize, data);
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return glesbinding::Binding::ReadPixels(x, y, width, height, format, type, pixels);
}

GLboolean glReleaseKeyedMutexWin32EXT(GLuint memory, GLuint64 key)
{
    return glesbinding::Binding::ReleaseKeyedMutexWin32EXT(memory, key);
}

void glReleaseShaderCompiler()
{
    return glesbinding::Binding::ReleaseShaderCompiler();
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorage(target, internalformat, width, height);
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAdvancedAMD(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleAdvancedAMD(target, samples, storageSamples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}

void glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::RenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

void glResetMemoryObjectParameterNV(GLuint memory, GLenum pname)
{
    return glesbinding::Binding::ResetMemoryObjectParameterNV(memory, pname);
}

void glResolveDepthValuesNV()
{
    return glesbinding::Binding::ResolveDepthValuesNV();
}

void glResolveMultisampleFramebufferAPPLE()
{
    return glesbinding::Binding::ResolveMultisampleFramebufferAPPLE();
}

void glResumeTransformFeedback()
{
    return glesbinding::Binding::ResumeTransformFeedback();
}


} // namespace gles