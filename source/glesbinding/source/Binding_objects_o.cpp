
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabel("glObjectLabel");
Function<void, GLenum, GLuint, GLsizei, const GLchar *> Binding::ObjectLabelKHR("glObjectLabelKHR");
Function<void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabel("glObjectPtrLabel");
Function<void, const void *, GLsizei, const GLchar *> Binding::ObjectPtrLabelKHR("glObjectPtrLabelKHR");


} // namespace glesbinding