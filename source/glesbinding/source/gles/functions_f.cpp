
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


GLsync glFenceSync(GLenum condition, GLbitfield flags)
{
    return glesbinding::Binding::FenceSync(condition, flags);
}

GLsync glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
    return glesbinding::Binding::FenceSyncAPPLE(condition, flags);
}

void glFinish()
{
    return glesbinding::Binding::Finish();
}

void glFinishFenceNV(GLuint fence)
{
    return glesbinding::Binding::FinishFenceNV(fence);
}

void glFlush()
{
    return glesbinding::Binding::Flush();
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glesbinding::Binding::FlushMappedBufferRange(target, offset, length);
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
    return glesbinding::Binding::FlushMappedBufferRangeEXT(target, offset, length);
}

void glFragmentCoverageColorNV(GLuint color)
{
    return glesbinding::Binding::FragmentCoverageColorNV(color);
}

void glFramebufferFetchBarrierEXT()
{
    return glesbinding::Binding::FramebufferFetchBarrierEXT();
}

void glFramebufferFetchBarrierQCOM()
{
    return glesbinding::Binding::FramebufferFetchBarrierQCOM();
}

void glFramebufferFoveationConfigQCOM(GLuint framebuffer, GLuint numLayers, GLuint focalPointsPerLayer, GLuint requestedFeatures, GLuint * providedFeatures)
{
    return glesbinding::Binding::FramebufferFoveationConfigQCOM(framebuffer, numLayers, focalPointsPerLayer, requestedFeatures, providedFeatures);
}

void glFramebufferFoveationParametersQCOM(GLuint framebuffer, GLuint layer, GLuint focalPoint, GLfloat focalX, GLfloat focalY, GLfloat gainX, GLfloat gainY, GLfloat foveaArea)
{
    return glesbinding::Binding::FramebufferFoveationParametersQCOM(framebuffer, layer, focalPoint, focalX, focalY, gainX, gainY, foveaArea);
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
    return glesbinding::Binding::FramebufferParameteri(target, pname, param);
}

void glFramebufferPixelLocalStorageSizeEXT(GLuint target, GLsizei size)
{
    return glesbinding::Binding::FramebufferPixelLocalStorageSizeEXT(target, size);
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
    return glesbinding::Binding::FramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::FramebufferSampleLocationsfvNV(target, start, count, v);
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTexture(target, attachment, texture, level);
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTexture2D(target, attachment, textarget, texture, level);
}

void glFramebufferTexture2DDownsampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint xscale, GLint yscale)
{
    return glesbinding::Binding::FramebufferTexture2DDownsampleIMG(target, attachment, textarget, texture, level, xscale, yscale);
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glesbinding::Binding::FramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
    return glesbinding::Binding::FramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

void glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
    return glesbinding::Binding::FramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTextureEXT(target, attachment, texture, level);
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
    return glesbinding::Binding::FramebufferTextureLayer(target, attachment, texture, level, layer);
}

void glFramebufferTextureLayerDownsampleIMG(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer, GLint xscale, GLint yscale)
{
    return glesbinding::Binding::FramebufferTextureLayerDownsampleIMG(target, attachment, texture, level, layer, xscale, yscale);
}

void glFramebufferTextureMultisampleMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews)
{
    return glesbinding::Binding::FramebufferTextureMultisampleMultiviewOVR(target, attachment, texture, level, samples, baseViewIndex, numViews);
}

void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
    return glesbinding::Binding::FramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

void glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
    return glesbinding::Binding::FramebufferTextureOES(target, attachment, texture, level);
}

void glFrontFace(GLenum mode)
{
    return glesbinding::Binding::FrontFace(mode);
}


} // namespace gles