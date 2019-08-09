
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glQueryCounterEXT(GLuint id, GLenum target)
{
    return glesbinding::Binding::QueryCounterEXT(id, target);
}


} // namespace gles