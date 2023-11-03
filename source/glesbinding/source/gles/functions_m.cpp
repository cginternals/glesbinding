
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glMakeImageHandleNonResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeImageHandleNonResidentNV(handle);
}

void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
    return glesbinding::Binding::MakeImageHandleResidentNV(handle, access);
}

void glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeTextureHandleNonResidentNV(handle);
}

void glMakeTextureHandleResidentNV(GLuint64 handle)
{
    return glesbinding::Binding::MakeTextureHandleResidentNV(handle);
}

void * glMapBufferOES(GLenum target, GLenum access)
{
    return glesbinding::Binding::MapBufferOES(target, access);
}

void * glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, MapBufferAccessMask access)
{
    return glesbinding::Binding::MapBufferRange(target, offset, length, access);
}

void * glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, MapBufferAccessMask access)
{
    return glesbinding::Binding::MapBufferRangeEXT(target, offset, length, access);
}

void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glesbinding::Binding::MatrixFrustumEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoad3x2fNV(matrixMode, m);
}

void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoad3x3fNV(matrixMode, m);
}

void glMatrixLoaddEXT(GLenum mode, const GLdouble * m)
{
    return glesbinding::Binding::MatrixLoaddEXT(mode, m);
}

void glMatrixLoadfEXT(GLenum mode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoadfEXT(mode, m);
}

void glMatrixLoadIdentityEXT(GLenum mode)
{
    return glesbinding::Binding::MatrixLoadIdentityEXT(mode);
}

void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoadTranspose3x3fNV(matrixMode, m);
}

void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glesbinding::Binding::MatrixLoadTransposedEXT(mode, m);
}

void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixLoadTransposefEXT(mode, m);
}

void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMult3x2fNV(matrixMode, m);
}

void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMult3x3fNV(matrixMode, m);
}

void glMatrixMultdEXT(GLenum mode, const GLdouble * m)
{
    return glesbinding::Binding::MatrixMultdEXT(mode, m);
}

void glMatrixMultfEXT(GLenum mode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMultfEXT(mode, m);
}

void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMultTranspose3x3fNV(matrixMode, m);
}

void glMatrixMultTransposedEXT(GLenum mode, const GLdouble * m)
{
    return glesbinding::Binding::MatrixMultTransposedEXT(mode, m);
}

void glMatrixMultTransposefEXT(GLenum mode, const GLfloat * m)
{
    return glesbinding::Binding::MatrixMultTransposefEXT(mode, m);
}

void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return glesbinding::Binding::MatrixOrthoEXT(mode, left, right, bottom, top, zNear, zFar);
}

void glMatrixPopEXT(GLenum mode)
{
    return glesbinding::Binding::MatrixPopEXT(mode);
}

void glMatrixPushEXT(GLenum mode)
{
    return glesbinding::Binding::MatrixPushEXT(mode);
}

void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return glesbinding::Binding::MatrixRotatedEXT(mode, angle, x, y, z);
}

void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return glesbinding::Binding::MatrixRotatefEXT(mode, angle, x, y, z);
}

void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glesbinding::Binding::MatrixScaledEXT(mode, x, y, z);
}

void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glesbinding::Binding::MatrixScalefEXT(mode, x, y, z);
}

void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z)
{
    return glesbinding::Binding::MatrixTranslatedEXT(mode, x, y, z);
}

void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z)
{
    return glesbinding::Binding::MatrixTranslatefEXT(mode, x, y, z);
}

void glMaxShaderCompilerThreadsKHR(GLuint count)
{
    return glesbinding::Binding::MaxShaderCompilerThreadsKHR(count);
}

void glMemoryBarrier(MemoryBarrierMask barriers)
{
    return glesbinding::Binding::MemoryBarrier(barriers);
}

void glMemoryBarrierByRegion(MemoryBarrierMask barriers)
{
    return glesbinding::Binding::MemoryBarrierByRegion(barriers);
}

void glMemoryObjectParameterivEXT(GLuint memoryObject, GLenum pname, const GLint * params)
{
    return glesbinding::Binding::MemoryObjectParameterivEXT(memoryObject, pname, params);
}

void glMinSampleShading(GLfloat value)
{
    return glesbinding::Binding::MinSampleShading(value);
}

void glMinSampleShadingOES(GLfloat value)
{
    return glesbinding::Binding::MinSampleShadingOES(value);
}

void glMultiDrawArraysEXT(GLenum mode, const GLint * first, const GLsizei * count, GLsizei primcount)
{
    return glesbinding::Binding::MultiDrawArraysEXT(mode, first, count, primcount);
}

void glMultiDrawArraysIndirectEXT(GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}

void glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex)
{
    return glesbinding::Binding::MultiDrawElementsBaseVertexEXT(mode, count, type, indices, drawcount, basevertex);
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei primcount)
{
    return glesbinding::Binding::MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}

void glMultiDrawMeshTasksIndirectCountNV(GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawMeshTasksIndirectCountNV(indirect, drawcount, maxdrawcount, stride);
}

void glMultiDrawMeshTasksIndirectNV(GLintptr indirect, GLsizei drawcount, GLsizei stride)
{
    return glesbinding::Binding::MultiDrawMeshTasksIndirectNV(indirect, drawcount, stride);
}


} // namespace gles