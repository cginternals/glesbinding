
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
    return glesbinding::Binding::EGLImageTargetRenderbufferStorageOES(target, image);
}

void glEGLImageTargetTexStorageEXT(GLenum target, GLeglImageOES image, const GLint* attrib_list)
{
    return glesbinding::Binding::EGLImageTargetTexStorageEXT(target, image, attrib_list);
}

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
    return glesbinding::Binding::EGLImageTargetTexture2DOES(target, image);
}

void glEGLImageTargetTextureStorageEXT(GLuint texture, GLeglImageOES image, const GLint* attrib_list)
{
    return glesbinding::Binding::EGLImageTargetTextureStorageEXT(texture, image, attrib_list);
}

void glEnable(GLenum cap)
{
    return glesbinding::Binding::Enable(cap);
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
    return glesbinding::Binding::EnableDriverControlQCOM(driverControl);
}

void glEnablei(GLenum target, GLuint index)
{
    return glesbinding::Binding::Enablei(target, index);
}

void glEnableiEXT(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiEXT(target, index);
}

void glEnableiNV(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiNV(target, index);
}

void glEnableiOES(GLenum target, GLuint index)
{
    return glesbinding::Binding::EnableiOES(target, index);
}

void glEnableVertexAttribArray(GLuint index)
{
    return glesbinding::Binding::EnableVertexAttribArray(index);
}

void glEndConditionalRenderNV()
{
    return glesbinding::Binding::EndConditionalRenderNV();
}

void glEndPerfMonitorAMD(GLuint monitor)
{
    return glesbinding::Binding::EndPerfMonitorAMD(monitor);
}

void glEndPerfQueryINTEL(GLuint queryHandle)
{
    return glesbinding::Binding::EndPerfQueryINTEL(queryHandle);
}

void glEndQuery(GLenum target)
{
    return glesbinding::Binding::EndQuery(target);
}

void glEndQueryEXT(GLenum target)
{
    return glesbinding::Binding::EndQueryEXT(target);
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
    return glesbinding::Binding::EndTilingQCOM(preserveMask);
}

void glEndTransformFeedback()
{
    return glesbinding::Binding::EndTransformFeedback();
}

void glExtGetBufferPointervQCOM(GLenum target, void ** params)
{
    return glesbinding::Binding::ExtGetBufferPointervQCOM(target, params);
}

void glExtGetBuffersQCOM(GLuint * buffers, GLint maxBuffers, GLint * numBuffers)
{
    return glesbinding::Binding::ExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}

void glExtGetFramebuffersQCOM(GLuint * framebuffers, GLint maxFramebuffers, GLint * numFramebuffers)
{
    return glesbinding::Binding::ExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar * source, GLint * length)
{
    return glesbinding::Binding::ExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

void glExtGetProgramsQCOM(GLuint * programs, GLint maxPrograms, GLint * numPrograms)
{
    return glesbinding::Binding::ExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}

void glExtGetRenderbuffersQCOM(GLuint * renderbuffers, GLint maxRenderbuffers, GLint * numRenderbuffers)
{
    return glesbinding::Binding::ExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}

void glExtGetShadersQCOM(GLuint * shaders, GLint maxShaders, GLint * numShaders)
{
    return glesbinding::Binding::ExtGetShadersQCOM(shaders, maxShaders, numShaders);
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint * params)
{
    return glesbinding::Binding::ExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void * texels)
{
    return glesbinding::Binding::ExtGetTexSubImageQCOM(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}

void glExtGetTexturesQCOM(GLuint * textures, GLint maxTextures, GLint * numTextures)
{
    return glesbinding::Binding::ExtGetTexturesQCOM(textures, maxTextures, numTextures);
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
    return glesbinding::Binding::ExtIsProgramBinaryQCOM(program);
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
    return glesbinding::Binding::ExtTexObjectStateOverrideiQCOM(target, pname, param);
}


} // namespace gles