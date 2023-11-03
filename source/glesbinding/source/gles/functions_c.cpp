
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


GLenum glCheckFramebufferStatus(GLenum target)
{
    return glesbinding::Binding::CheckFramebufferStatus(target);
}

void glClear(ClearBufferMask mask)
{
    return glesbinding::Binding::Clear(mask);
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
    return glesbinding::Binding::ClearBufferfi(buffer, drawbuffer, depth, stencil);
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat * value)
{
    return glesbinding::Binding::ClearBufferfv(buffer, drawbuffer, value);
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint * value)
{
    return glesbinding::Binding::ClearBufferiv(buffer, drawbuffer, value);
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint * value)
{
    return glesbinding::Binding::ClearBufferuiv(buffer, drawbuffer, value);
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glesbinding::Binding::ClearColor(red, green, blue, alpha);
}

void glClearDepthf(GLfloat d)
{
    return glesbinding::Binding::ClearDepthf(d);
}

void glClearPixelLocalStorageuiEXT(GLsizei offset, GLsizei n, const GLuint * values)
{
    return glesbinding::Binding::ClearPixelLocalStorageuiEXT(offset, n, values);
}

void glClearStencil(GLint s)
{
    return glesbinding::Binding::ClearStencil(s);
}

void glClearTexImageEXT(GLuint texture, GLint level, GLenum format, GLenum type, const void * data)
{
    return glesbinding::Binding::ClearTexImageEXT(texture, level, format, type, data);
}

void glClearTexSubImageEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data)
{
    return glesbinding::Binding::ClearTexSubImageEXT(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

GLenum glClientWaitSync(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return glesbinding::Binding::ClientWaitSync(sync, flags, timeout);
}

GLenum glClientWaitSyncAPPLE(GLsync sync, SyncObjectMask flags, GLuint64 timeout)
{
    return glesbinding::Binding::ClientWaitSyncAPPLE(sync, flags, timeout);
}

void glClipControlEXT(GLenum origin, GLenum depth)
{
    return glesbinding::Binding::ClipControlEXT(origin, depth);
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return glesbinding::Binding::ColorMask(red, green, blue, alpha);
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glesbinding::Binding::ColorMaski(index, r, g, b, a);
}

void glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glesbinding::Binding::ColorMaskiEXT(index, r, g, b, a);
}

void glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    return glesbinding::Binding::ColorMaskiOES(index, r, g, b, a);
}

void glCompileShader(GLuint shader)
{
    return glesbinding::Binding::CompileShader(shader);
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexImage3DOES(target, level, internalformat, width, height, depth, border, imageSize, data);
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return glesbinding::Binding::CompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void glConservativeRasterParameteriNV(GLenum pname, GLint param)
{
    return glesbinding::Binding::ConservativeRasterParameteriNV(pname, param);
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glesbinding::Binding::CopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyBufferSubDataNV(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
    return glesbinding::Binding::CopyBufferSubDataNV(readTarget, writeTarget, readOffset, writeOffset, size);
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glesbinding::Binding::CopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glesbinding::Binding::CopyImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
    return glesbinding::Binding::CopyImageSubDataOES(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

void glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
    return glesbinding::Binding::CopyPathNV(resultPath, srcPath);
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return glesbinding::Binding::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::CopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
    return glesbinding::Binding::CopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

void glCoverageMaskNV(GLboolean mask)
{
    return glesbinding::Binding::CoverageMaskNV(mask);
}

void glCoverageModulationNV(GLenum components)
{
    return glesbinding::Binding::CoverageModulationNV(components);
}

void glCoverageModulationTableNV(GLsizei n, const GLfloat * v)
{
    return glesbinding::Binding::CoverageModulationTableNV(n, v);
}

void glCoverageOperationNV(GLenum operation)
{
    return glesbinding::Binding::CoverageOperationNV(operation);
}

void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::CoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverFillPathNV(GLuint path, GLenum coverMode)
{
    return glesbinding::Binding::CoverFillPathNV(path, coverMode);
}

void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void * paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat * transformValues)
{
    return glesbinding::Binding::CoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

void glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
    return glesbinding::Binding::CoverStrokePathNV(path, coverMode);
}

void glCreateMemoryObjectsEXT(GLsizei n, GLuint * memoryObjects)
{
    return glesbinding::Binding::CreateMemoryObjectsEXT(n, memoryObjects);
}

void glCreatePerfQueryINTEL(GLuint queryId, GLuint * queryHandle)
{
    return glesbinding::Binding::CreatePerfQueryINTEL(queryId, queryHandle);
}

GLuint glCreateProgram()
{
    return glesbinding::Binding::CreateProgram();
}

void glCreateSemaphoresNV(GLsizei n, GLuint * semaphores)
{
    return glesbinding::Binding::CreateSemaphoresNV(n, semaphores);
}

GLuint glCreateShader(GLenum type)
{
    return glesbinding::Binding::CreateShader(type);
}

GLuint glCreateShaderProgramEXT(GLenum type, const GLchar * string)
{
    return glesbinding::Binding::CreateShaderProgramEXT(type, string);
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glesbinding::Binding::CreateShaderProgramv(type, count, strings);
}

GLuint glCreateShaderProgramvEXT(GLenum type, GLsizei count, const GLchar *const* strings)
{
    return glesbinding::Binding::CreateShaderProgramvEXT(type, count, strings);
}

void glCullFace(GLenum mode)
{
    return glesbinding::Binding::CullFace(mode);
}


} // namespace gles