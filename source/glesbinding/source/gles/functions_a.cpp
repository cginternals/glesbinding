
#include "../Binding_pch.h"

#include <glesbinding/gles/functions.h>


namespace gles
{


GLboolean glAcquireKeyedMutexWin32EXT(GLuint memory, GLuint64 key, GLuint timeout)
{
    return glesbinding::Binding::AcquireKeyedMutexWin32EXT(memory, key, timeout);
}

void glActiveProgramEXT(GLuint program)
{
    return glesbinding::Binding::ActiveProgramEXT(program);
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
    return glesbinding::Binding::ActiveShaderProgram(pipeline, program);
}

void glActiveShaderProgramEXT(GLuint pipeline, GLuint program)
{
    return glesbinding::Binding::ActiveShaderProgramEXT(pipeline, program);
}

void glActiveTexture(GLenum texture)
{
    return glesbinding::Binding::ActiveTexture(texture);
}

void glAlphaFuncQCOM(GLenum func, GLclampf ref)
{
    return glesbinding::Binding::AlphaFuncQCOM(func, ref);
}

void glApplyFramebufferAttachmentCMAAINTEL()
{
    return glesbinding::Binding::ApplyFramebufferAttachmentCMAAINTEL();
}

void glAttachShader(GLuint program, GLuint shader)
{
    return glesbinding::Binding::AttachShader(program, shader);
}


} // namespace gles