
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


void glHint(GLenum target, GLenum mode)
{
    return glesbinding::Binding::Hint(target, mode);
}


} // namespace gles