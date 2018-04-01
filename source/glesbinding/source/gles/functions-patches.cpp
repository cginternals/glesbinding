
#include <glesbinding/gles/functions-patches.h>

#include <vector>

#include <glesbinding/gles/functions.h>


namespace gles
{


void glTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    glTexImage2D(target, level, static_cast<GLint>(internalformat), width, height, border, format, type, pixels);
}

void glTexParameteri(GLenum target, GLenum pname, GLboolean param)
{
    glTexParameteri(target, pname, static_cast<GLint>(param));
}

void glTexParameteri(GLenum target, GLenum pname, GLenum param)
{
    glTexParameteri(target, pname, static_cast<GLint>(param));
}


} // namespace gles
