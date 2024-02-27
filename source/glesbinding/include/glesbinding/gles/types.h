
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>

#include <KHR/khrplatform.h>

#ifdef _MSC_VER
#define GLES_APIENTRY __stdcall
#else
#define GLES_APIENTRY
#endif

#include <glesbinding/nogles.h>
#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>
#include <glesbinding/gles/boolean.h>


namespace gles
{


enum class AttribMask : unsigned int;
enum class BufferStorageMask : unsigned int;
enum class ClearBufferMask : unsigned int;
enum class ContextFlagMask : unsigned int;
enum class FragmentShaderDestMaskATI : unsigned int;
enum class GLenum : unsigned int;
enum class GLextension : int;
enum class MapBufferAccessMask : unsigned int;
enum class MemoryBarrierMask : unsigned int;
enum class PathFontStyle : unsigned int;
enum class PathMetricMask : unsigned int;
enum class PerformanceQueryCapsMaskINTEL : unsigned int;
enum class SyncObjectMask : unsigned int;
enum class UnusedMask : unsigned int;
enum class UseProgramStageMask : unsigned int;
using EGLchar = char;
using EGLint = int;
using EGLNativeDisplayType = void *;
using EGLNativePixmapType = void *;
using EGLNativeWindowType = void *;
using GLbitfield = unsigned int;
using GLchar = char;
using GLclampf = khronos_float_t;
using GLdouble = double;
using GLeglClientBufferEXT = void *;
using GLeglImageOES = void *;
using GLfloat = khronos_float_t;
using GLint = int;
using GLint64 = khronos_int64_t;
using GLint64EXT = khronos_int64_t;
using GLintptr = khronos_intptr_t;
using GLsizei = int;
using GLsizeiptr = khronos_ssize_t;
using GLsync = struct __GLsync *;
using GLubyte = khronos_uint8_t;
using GLuint = unsigned int;
using GLuint64 = khronos_uint64_t;
using GLuint64EXT = khronos_uint64_t;
using GLDEBUGPROC = void (GLES_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GLES_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLVULKANPROCNV = void (GLES_APIENTRY *)(void);


} // namespace gles


#include <glesbinding/gles/types.inl>