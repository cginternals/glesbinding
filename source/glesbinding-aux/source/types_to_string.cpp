
#include <glesbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glesbinding/Version.h>
#include <glesbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glesbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glesbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferBitQCOM & value)
{
    stream << glesbinding::aux::bitfieldString<BufferBitQCOM>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glesbinding::aux::bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glesbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << glesbinding::aux::bitfieldString<ContextFlagMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const FoveationConfigBitQCOM & value)
{
    stream << glesbinding::aux::bitfieldString<FoveationConfigBitQCOM>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value)
{
    stream << glesbinding::aux::bitfieldString<MapBufferAccessMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << glesbinding::aux::bitfieldString<MemoryBarrierMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glesbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << glesbinding::aux::bitfieldString<PathMetricMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << glesbinding::aux::bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << glesbinding::aux::bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << glesbinding::aux::bitfieldString<SyncObjectMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << glesbinding::aux::bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glesbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace gles

namespace gles
{


std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << glesbinding::aux::bitfieldString<BufferAccessMask>(value);
    return stream;
}


} // namespace gles



namespace glesbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
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
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLubyte *> & value)
{
    auto s = glesbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLchar *> & value)
{
    auto s = glesbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gles::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

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

    if (typeid(*value) == typeid(Value<gles::GLvoid *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLvoid *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLextension>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLextension>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLextension *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLextension *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLenum>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLenum>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLenum *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLenum *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLboolean>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLboolean>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLboolean *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLboolean *>*>(value);
    }


    // Omit gles::GLbitfield


    // Omit gles::GLvoid

    if (typeid(*value) == typeid(Value<gles::GLbyte>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLbyte>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLbyte *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLbyte *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLubyte>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLubyte>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLubyte *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLshort>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLshort>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLshort *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLshort *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLushort>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLushort>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLushort *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLushort *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLint>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLint *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLint *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLuint>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLuint *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLclampx>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampx>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLclampx *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampx *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLsizei>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizei>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLsizei *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizei *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLfloat>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfloat>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLfloat *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfloat *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLclampf>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampf>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLclampf *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampf *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLdouble>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLdouble>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLdouble *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLdouble *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLclampd>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampd>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLclampd *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLclampd *>*>(value);
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

    if (typeid(*value) == typeid(Value<gles::GLchar>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLchar>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLchar *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLcharARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLcharARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLcharARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLcharARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLhandleARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhandleARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLhandleARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhandleARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLhalf>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalf>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLhalf *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalf *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLhalfARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalfARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLhalfARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalfARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLfixed>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfixed>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLfixed *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLfixed *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLintptr>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLintptr *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLintptrARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptrARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLintptrARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLintptrARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLsizeiptr>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptr>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLsizeiptr *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptr *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLsizeiptrARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptrARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLsizeiptrARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsizeiptrARB *>*>(value);
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

    if (typeid(*value) == typeid(Value<gles::GLsync>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsync>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLsync *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLsync *>*>(value);
    }


    // Omit gles::_cl_context


    // Omit gles::_cl_event

    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROC *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROC *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCARB>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCARB>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCARB *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCARB *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCKHR *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCKHR *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCAMD>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCAMD>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLDEBUGPROCAMD *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLDEBUGPROCAMD *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLhalfNV>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalfNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLhalfNV *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLhalfNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLvdpauSurfaceNV>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLvdpauSurfaceNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLvdpauSurfaceNV *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLvdpauSurfaceNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLVULKANPROCNV *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLVULKANPROCNV *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLuint_array_2>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint_array_2>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::GLuint_array_2 *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLuint_array_2 *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::AttribMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::AttribMask>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::AttribMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::AttribMask *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::BufferBitQCOM>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferBitQCOM>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::BufferBitQCOM *>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferBitQCOM *>*>(value);
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

    if (typeid(*value) == typeid(Value<gles::FoveationConfigBitQCOM>))
    {
        return stream << *reinterpret_cast<const Value<gles::FoveationConfigBitQCOM>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::FoveationConfigBitQCOM *>))
    {
        return stream << *reinterpret_cast<const Value<gles::FoveationConfigBitQCOM *>*>(value);
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

    if (typeid(*value) == typeid(Value<gles::UseProgramStageMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::UseProgramStageMask>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::UseProgramStageMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::UseProgramStageMask *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::UnusedMask>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::UnusedMask *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::BufferAccessMask>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferAccessMask>*>(value);
    }
    if (typeid(*value) == typeid(Value<gles::BufferAccessMask *>))
    {
        return stream << *reinterpret_cast<const Value<gles::BufferAccessMask *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace glesbinding
