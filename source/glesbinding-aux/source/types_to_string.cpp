
#include <glesbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glesbinding/Version.h>
#include <glesbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gles
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    const auto strings = glesbinding::aux::Meta::getStrings(value);

    if (strings.size() == 0)
    {
        return stream;
    }

    stream << strings[0];

    for (auto i = static_cast<std::size_t>(1); i < strings.size(); ++i)
        stream << " | " << strings[i];

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
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

std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << glesbinding::aux::bitfieldString<FragmentShaderDestMaskATI>(value);
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
    stream << value.value();

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
std::ostream & operator<<(std::ostream & stream, const Value<const char *> & value)
{
    auto s = aux::wrapString(value.value());
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

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

    if (typeid(*value) == typeid(Value<char>))
    {
        return stream << *reinterpret_cast<const Value<char>*>(value);
    }

    if (typeid(*value) == typeid(Value<double>))
    {
        return stream << *reinterpret_cast<const Value<double>*>(value);
    }

    if (typeid(*value) == typeid(Value<float>))
    {
        return stream << *reinterpret_cast<const Value<float>*>(value);
    }

    if (typeid(*value) == typeid(Value<int>))
    {
        return stream << *reinterpret_cast<const Value<int>*>(value);
    }

    if (typeid(*value) == typeid(Value<long>))
    {
        return stream << *reinterpret_cast<const Value<long>*>(value);
    }

    if (typeid(*value) == typeid(Value<long long>))
    {
        return stream << *reinterpret_cast<const Value<long long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned char>))
    {
        return stream << *reinterpret_cast<const Value<unsigned char>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned int>))
    {
        return stream << *reinterpret_cast<const Value<unsigned int>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long>*>(value);
    }

    if (typeid(*value) == typeid(Value<unsigned long long>))
    {
        return stream << *reinterpret_cast<const Value<unsigned long long>*>(value);
    }
if (typeid(*value) == typeid(Value<const char *>))
    {
        return stream << *reinterpret_cast<const Value<const char *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLchar *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLchar *>*>(value);
    }

    if (typeid(*value) == typeid(Value<gles::GLubyte *>))
    {
        return stream << *reinterpret_cast<const Value<gles::GLubyte *>*>(value);
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

    
    if (typeid(*value) == typeid(Value<gles::FragmentShaderDestMaskATI>))
    {
        return stream << *reinterpret_cast<const Value<gles::FragmentShaderDestMaskATI>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<gles::FragmentShaderDestMaskATI *>))
    {
        return stream << *reinterpret_cast<const Value<gles::FragmentShaderDestMaskATI *>*>(value);
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