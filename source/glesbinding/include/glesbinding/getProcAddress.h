
#pragma once


#include <glesbinding/glesbinding_api.h>

#include <glesbinding/ProcAddress.h>


namespace glesbinding
{


/**
*  @brief
*    Default getProcAddress implementation using libdl (Unix) and LoadLibrary (Windows).
*
*  @param[in] name
*    The name of the OpenGL ES function
*
*  @return
*    The resolved function pointer
*
*  @remark
*    Using glesbinding::getProcAddress is provided for convenience only. Please don't use this in new code.
*    Instead, use an external function resolution callback, e.g.,
*     * eglGetProcAddress
*     * glfwGetProcAddress
*     * QOpenGlContext::getProcAddress
*/
GLESBINDING_API ProcAddress getProcAddress(const char * name);


} // namespace glesbinding
