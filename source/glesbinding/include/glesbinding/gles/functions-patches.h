
#pragma once


#include <glesbinding/glesbinding_api.h>

#include <glesbinding/nogles.h>
#include <glesbinding/gles/types.h>


namespace gles
{


GLESBINDING_API void glTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels);

GLESBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLboolean param);
GLESBINDING_API void glTexParameteri(GLenum target, GLenum pname, GLenum param);


} // namespace gles
