
#include "Binding_pch.h"


using namespace gles;


namespace glesbinding
{


Function<void, GLuint, GLuint, GLuint64> Binding::NamedBufferAttachMemoryNV("glNamedBufferAttachMemoryNV");
Function<void, GLuint, GLintptr, GLsizeiptr, GLuint, GLuint64, GLboolean> Binding::NamedBufferPageCommitmentMemNV("glNamedBufferPageCommitmentMemNV");
Function<void, GLuint, GLintptr, GLsizeiptr, GLeglClientBufferEXT, BufferStorageMask> Binding::NamedBufferStorageExternalEXT("glNamedBufferStorageExternalEXT");
Function<void, GLuint, GLsizeiptr, GLuint, GLuint64> Binding::NamedBufferStorageMemEXT("glNamedBufferStorageMemEXT");
Function<void, GLuint, GLuint, GLsizei, const GLfloat *> Binding::NamedFramebufferSampleLocationsfvNV("glNamedFramebufferSampleLocationsfvNV");
Function<void, GLuint, GLenum, GLuint, GLint, GLint, GLsizei> Binding::NamedFramebufferTextureMultiviewOVR("glNamedFramebufferTextureMultiviewOVR");
Function<void, GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei> Binding::NamedRenderbufferStorageMultisampleAdvancedAMD("glNamedRenderbufferStorageMultisampleAdvancedAMD");


} // namespace glesbinding