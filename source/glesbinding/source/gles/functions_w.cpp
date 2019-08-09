
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glWaitSemaphoreEXT(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts)
{
    return glesbinding::Binding::WaitSemaphoreEXT(semaphore, numBufferBarriers, buffers, numTextureBarriers, textures, srcLayouts);
}

void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glesbinding::Binding::WaitSync(sync, flags, timeout);
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
    return glesbinding::Binding::WaitSyncAPPLE(sync, flags, timeout);
}

void glWaitVkSemaphoreNV(GLuint64 vkSemaphore)
{
    return glesbinding::Binding::WaitVkSemaphoreNV(vkSemaphore);
}

void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint * paths, const GLfloat * weights)
{
    return glesbinding::Binding::WeightPathsNV(resultPath, numPaths, paths, weights);
}

void glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint * box)
{
    return glesbinding::Binding::WindowRectanglesEXT(mode, count, box);
}


} // namespace gles