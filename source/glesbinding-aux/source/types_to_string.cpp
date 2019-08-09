
#include <glesbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glesbinding/Version.h>
#include <glesbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glesbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glesbinding::aux::bitfieldString<BufferStorageMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glesbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << glesbinding::aux::bitfieldString<ContextFlagMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value)
{
    stream << glesbinding::aux::bitfieldString<MapBufferAccessMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << glesbinding::aux::bitfieldString<MemoryBarrierMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glesbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << glesbinding::aux::bitfieldString<PathMetricMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << glesbinding::aux::bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << glesbinding::aux::bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << glesbinding::aux::bitfieldString<SyncObjectMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glesbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << glesbinding::aux::bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gles


namespace glesbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLenum> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLboolean> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLchar *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLubyte *> & value)
{
    auto s = aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}


std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::AttribMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::AttribMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::AttribMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::AttribMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::BufferStorageMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferStorageMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::BufferStorageMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferStorageMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::ClearBufferMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::ClearBufferMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::ClearBufferMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::ClearBufferMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::ContextFlagMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::ContextFlagMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::ContextFlagMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::ContextFlagMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLbitfield>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLbitfield>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLbitfield *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLbitfield *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLchar>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLchar>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLchar *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLclampf>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampf>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLclampf *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampf *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLdouble>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLdouble>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLdouble *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLdouble *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLeglClientBufferEXT>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLeglClientBufferEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLeglClientBufferEXT *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLeglClientBufferEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLeglImageOES>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLeglImageOES>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLeglImageOES *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLeglImageOES *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLenum>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLenum *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLextension>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLextension *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLfloat>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfloat>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLfloat *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfloat *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLint>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLint *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLint64>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint64>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLint64 *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint64 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLint64EXT>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint64EXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLint64EXT *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint64EXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLintptr>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptr>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLintptr *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptr *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLsizei>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizei>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLsizei *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizei *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLsizeiptr>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptr>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLsizeiptr *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptr *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLsync>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsync>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLsync *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsync *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLubyte>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLubyte>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLubyte *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLuint>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLuint *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLuint64>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint64>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLuint64 *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint64 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLuint64EXT>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint64EXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLuint64EXT *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint64EXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::MapBufferAccessMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::MapBufferAccessMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::MapBufferAccessMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::MapBufferAccessMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::MemoryBarrierMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::MemoryBarrierMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::MemoryBarrierMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::MemoryBarrierMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::PathFontStyle>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathFontStyle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::PathFontStyle *>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathFontStyle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::PathMetricMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathMetricMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::PathMetricMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathMetricMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::PathRenderingMaskNV>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathRenderingMaskNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::PathRenderingMaskNV *>))
    {
        return stream << *reinterpret_cast<const Value<gles::PathRenderingMaskNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::PerformanceQueryCapsMaskINTEL>))
    {
        return stream << *reinterpret_cast<const Value<gles::PerformanceQueryCapsMaskINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::PerformanceQueryCapsMaskINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<gles::PerformanceQueryCapsMaskINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::SyncObjectMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::SyncObjectMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::SyncObjectMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::SyncObjectMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::UnusedMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<gles::UseProgramStageMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::UseProgramStageMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::UseProgramStageMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::UseProgramStageMask *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace glesbinding