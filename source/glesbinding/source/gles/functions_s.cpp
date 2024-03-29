
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return glesbinding::Binding::SampleCoverage(value, invert);
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
    return glesbinding::Binding::SampleMaski(maskNumber, mask);
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
    return glesbinding::Binding::SamplerParameterf(sampler, pname, param);
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat * param)
{
    return glesbinding::Binding::SamplerParameterfv(sampler, pname, param);
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
    return glesbinding::Binding::SamplerParameteri(sampler, pname, param);
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameterIiv(sampler, pname, param);
}

void glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameterIivEXT(sampler, pname, param);
}

void glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameterIivOES(sampler, pname, param);
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glesbinding::Binding::SamplerParameterIuiv(sampler, pname, param);
}

void glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glesbinding::Binding::SamplerParameterIuivEXT(sampler, pname, param);
}

void glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint * param)
{
    return glesbinding::Binding::SamplerParameterIuivOES(sampler, pname, param);
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint * param)
{
    return glesbinding::Binding::SamplerParameteriv(sampler, pname, param);
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::Scissor(x, y, width, height);
}

void glScissorArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return glesbinding::Binding::ScissorArrayvNV(first, count, v);
}

void glScissorArrayvOES(GLuint first, GLsizei count, const GLint * v)
{
    return glesbinding::Binding::ScissorArrayvOES(first, count, v);
}

void glScissorExclusiveArrayvNV(GLuint first, GLsizei count, const GLint * v)
{
    return glesbinding::Binding::ScissorExclusiveArrayvNV(first, count, v);
}

void glScissorExclusiveNV(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::ScissorExclusiveNV(x, y, width, height);
}

void glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::ScissorIndexedNV(index, left, bottom, width, height);
}

void glScissorIndexedOES(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::ScissorIndexedOES(index, left, bottom, width, height);
}

void glScissorIndexedvNV(GLuint index, const GLint * v)
{
    return glesbinding::Binding::ScissorIndexedvNV(index, v);
}

void glScissorIndexedvOES(GLuint index, const GLint * v)
{
    return glesbinding::Binding::ScissorIndexedvOES(index, v);
}

void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList)
{
    return glesbinding::Binding::SelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}

void glSemaphoreParameterivNV(GLuint semaphore, GLenum pname, const GLint * params)
{
    return glesbinding::Binding::SemaphoreParameterivNV(semaphore, pname, params);
}

void glSemaphoreParameterui64vEXT(GLuint semaphore, GLenum pname, const GLuint64 * params)
{
    return glesbinding::Binding::SemaphoreParameterui64vEXT(semaphore, pname, params);
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
    return glesbinding::Binding::SetFenceNV(fence, condition);
}

void glShaderBinary(GLsizei count, const GLuint * shaders, GLenum binaryFormat, const void * binary, GLsizei length)
{
    return glesbinding::Binding::ShaderBinary(count, shaders, binaryFormat, binary, length);
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glesbinding::Binding::ShaderSource(shader, count, string, length);
}

void glShadingRateCombinerOpsEXT(GLenum combinerOp0, GLenum combinerOp1)
{
    return glesbinding::Binding::ShadingRateCombinerOpsEXT(combinerOp0, combinerOp1);
}

void glShadingRateEXT(GLenum rate)
{
    return glesbinding::Binding::ShadingRateEXT(rate);
}

void glShadingRateImageBarrierNV(GLboolean synchronize)
{
    return glesbinding::Binding::ShadingRateImageBarrierNV(synchronize);
}

void glShadingRateImagePaletteNV(GLuint viewport, GLuint first, GLsizei count, const GLenum * rates)
{
    return glesbinding::Binding::ShadingRateImagePaletteNV(viewport, first, count, rates);
}

void glShadingRateQCOM(GLenum rate)
{
    return glesbinding::Binding::ShadingRateQCOM(rate);
}

void glShadingRateSampleOrderCustomNV(GLenum rate, GLuint samples, const GLint * locations)
{
    return glesbinding::Binding::ShadingRateSampleOrderCustomNV(rate, samples, locations);
}

void glShadingRateSampleOrderNV(GLenum order)
{
    return glesbinding::Binding::ShadingRateSampleOrderNV(order);
}

void glSignalSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts)
{
    return glesbinding::Binding::SignalSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, dstLayouts);
}

void glSignalVkFenceNV(GLuint64 vkFence)
{
    return glesbinding::Binding::SignalVkFenceNV(vkFence);
}

void glSignalVkSemaphoreNV(GLuint64 vkSemaphore)
{
    return glesbinding::Binding::SignalVkSemaphoreNV(vkSemaphore);
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
    return glesbinding::Binding::StartTilingQCOM(x, y, width, height, preserveMask);
}

void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
    return glesbinding::Binding::StencilFillPathNV(path, fillMode, mask);
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return glesbinding::Binding::StencilFunc(func, ref, mask);
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    return glesbinding::Binding::StencilFuncSeparate(face, func, ref, mask);
}

void glStencilMask(GLuint mask)
{
    return glesbinding::Binding::StencilMask(mask);
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
    return glesbinding::Binding::StencilMaskSeparate(face, mask);
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return glesbinding::Binding::StencilOp(fail, zfail, zpass);
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
    return glesbinding::Binding::StencilOpSeparate(face, sfail, dpfail, dppass);
}

void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
    return glesbinding::Binding::StencilStrokePathNV(path, reference, mask);
}

void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilThenCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode)
{
    return glesbinding::Binding::StencilThenCoverFillPathNV(path, fillMode, mask, coverMode);
}

void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::StencilThenCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode)
{
    return glesbinding::Binding::StencilThenCoverStrokePathNV(path, reference, mask, coverMode);
}

void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
    return glesbinding::Binding::SubpixelPrecisionBiasNV(xbits, ybits);
}


} // namespace gles