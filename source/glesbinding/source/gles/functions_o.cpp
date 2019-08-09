
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectLabel(identifier, name, length, label);
}

void glObjectLabelKHR(GLenum identifier, GLuint name, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectLabelKHR(identifier, name, length, label);
}

void glObjectPtrLabel(const void * ptr, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectPtrLabel(ptr, length, label);
}

void glObjectPtrLabelKHR(const void * ptr, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::ObjectPtrLabelKHR(ptr, length, label);
}


} // namespace gles