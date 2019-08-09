
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glValidateProgram(GLuint program)
{
    return glesbinding::Binding::ValidateProgram(program);
}

void glValidateProgramPipeline(GLuint pipeline)
{
    return glesbinding::Binding::ValidateProgramPipeline(pipeline);
}

void glValidateProgramPipelineEXT(GLuint pipeline)
{
    return glesbinding::Binding::ValidateProgramPipelineEXT(pipeline);
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
    return glesbinding::Binding::VertexAttrib1f(index, x);
}

void glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib1fv(index, v);
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
    return glesbinding::Binding::VertexAttrib2f(index, x, y);
}

void glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib2fv(index, v);
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
    return glesbinding::Binding::VertexAttrib3f(index, x, y, z);
}

void glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib3fv(index, v);
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return glesbinding::Binding::VertexAttrib4f(index, x, y, z, w);
}

void glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::VertexAttrib4fv(index, v);
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
    return glesbinding::Binding::VertexAttribBinding(attribindex, bindingindex);
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisor(index, divisor);
}

void glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorANGLE(index, divisor);
}

void glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorEXT(index, divisor);
}

void glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
    return glesbinding::Binding::VertexAttribDivisorNV(index, divisor);
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
    return glesbinding::Binding::VertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
    return glesbinding::Binding::VertexAttribI4i(index, x, y, z, w);
}

void glVertexAttribI4iv(GLuint index, const GLint * v)
{
    return glesbinding::Binding::VertexAttribI4iv(index, v);
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
    return glesbinding::Binding::VertexAttribI4ui(index, x, y, z, w);
}

void glVertexAttribI4uiv(GLuint index, const GLuint * v)
{
    return glesbinding::Binding::VertexAttribI4uiv(index, v);
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
    return glesbinding::Binding::VertexAttribIFormat(attribindex, size, type, relativeoffset);
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return glesbinding::Binding::VertexAttribIPointer(index, size, type, stride, pointer);
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glesbinding::Binding::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
    return glesbinding::Binding::VertexBindingDivisor(bindingindex, divisor);
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glesbinding::Binding::Viewport(x, y, width, height);
}

void glViewportArrayvNV(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::ViewportArrayvNV(first, count, v);
}

void glViewportArrayvOES(GLuint first, GLsizei count, const GLfloat * v)
{
    return glesbinding::Binding::ViewportArrayvOES(first, count, v);
}

void glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glesbinding::Binding::ViewportIndexedfNV(index, x, y, w, h);
}

void glViewportIndexedfOES(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
    return glesbinding::Binding::ViewportIndexedfOES(index, x, y, w, h);
}

void glViewportIndexedfvNV(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::ViewportIndexedfvNV(index, v);
}

void glViewportIndexedfvOES(GLuint index, const GLfloat * v)
{
    return glesbinding::Binding::ViewportIndexedfvOES(index, v);
}

void glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff)
{
    return glesbinding::Binding::ViewportPositionWScaleNV(index, xcoeff, ycoeff);
}

void glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew)
{
    return glesbinding::Binding::ViewportSwizzleNV(index, swizzlex, swizzley, swizzlez, swizzlew);
}


} // namespace gles