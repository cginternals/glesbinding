
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar * label)
{
    return glesbinding::Binding::LabelObjectEXT(type, object, length, label);
}

void glLineWidth(GLfloat width)
{
    return glesbinding::Binding::LineWidth(width);
}

void glLinkProgram(GLuint program)
{
    return glesbinding::Binding::LinkProgram(program);
}


} // namespace gles