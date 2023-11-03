
#pragma once


#include <glesbinding/gles/types.h>


namespace std
{


template<>
struct hash<gles::GLextension>
{
    std::size_t operator()(const gles::GLextension & t) const
    {
        return hash<std::underlying_type<gles::GLextension>::type>()(static_cast<std::underlying_type<gles::GLextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<gles::GLenum>
{
    std::size_t operator()(const gles::GLenum & t) const
    {
        return hash<std::underlying_type<gles::GLenum>::type>()(static_cast<std::underlying_type<gles::GLenum>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline GLenum operator+(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) + b);
}

GLESBINDING_CONSTEXPR inline GLenum operator-(const GLenum & a, const std::underlying_type<GLenum>::type b)
{
    return static_cast<GLenum>(static_cast<std::underlying_type<GLenum>::type>(a) - b);
}

GLESBINDING_CONSTEXPR inline bool operator==(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) == b;
}

GLESBINDING_CONSTEXPR inline bool operator!=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) != b;
}

GLESBINDING_CONSTEXPR inline bool operator< (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) < b;
}

GLESBINDING_CONSTEXPR inline bool operator<=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) <= b;
}

GLESBINDING_CONSTEXPR inline bool operator> (const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) > b;
}

GLESBINDING_CONSTEXPR inline bool operator>=(const GLenum & a, std::underlying_type<GLenum>::type b)
{
    return static_cast<std::underlying_type<GLenum>::type>(a) >= b;
}

GLESBINDING_CONSTEXPR inline bool operator==(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a == static_cast<std::underlying_type<GLenum>::type>(b);
}

GLESBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a != static_cast<std::underlying_type<GLenum>::type>(b);
}

GLESBINDING_CONSTEXPR inline bool operator< (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a < static_cast<std::underlying_type<GLenum>::type>(b);
}

GLESBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a <= static_cast<std::underlying_type<GLenum>::type>(b);
}

GLESBINDING_CONSTEXPR inline bool operator> (std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a > static_cast<std::underlying_type<GLenum>::type>(b);
}

GLESBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<GLenum>::type a, const GLenum & b)
{
    return a >= static_cast<std::underlying_type<GLenum>::type>(b);
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::AttribMask>
{
    std::size_t operator()(const gles::AttribMask & t) const
    {
        return hash<std::underlying_type<gles::AttribMask>::type>()(static_cast<std::underlying_type<gles::AttribMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline AttribMask operator|(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator|=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) | static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline AttribMask operator&(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator&=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) & static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline AttribMask operator^(const AttribMask & a, const AttribMask & b)
{
    return static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));
}

inline AttribMask & operator^=(AttribMask & a, const AttribMask & b)
{
    a = static_cast<AttribMask>(static_cast<std::underlying_type<AttribMask>::type>(a) ^ static_cast<std::underlying_type<AttribMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::BufferStorageMask>
{
    std::size_t operator()(const gles::BufferStorageMask & t) const
    {
        return hash<std::underlying_type<gles::BufferStorageMask>::type>()(static_cast<std::underlying_type<gles::BufferStorageMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline BufferStorageMask operator|(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator|=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) | static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferStorageMask operator&(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator&=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) & static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline BufferStorageMask operator^(const BufferStorageMask & a, const BufferStorageMask & b)
{
    return static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));
}

inline BufferStorageMask & operator^=(BufferStorageMask & a, const BufferStorageMask & b)
{
    a = static_cast<BufferStorageMask>(static_cast<std::underlying_type<BufferStorageMask>::type>(a) ^ static_cast<std::underlying_type<BufferStorageMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::ClearBufferMask>
{
    std::size_t operator()(const gles::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<gles::ClearBufferMask>::type>()(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline ClearBufferMask operator|(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator|=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) | static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ClearBufferMask operator&(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator&=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) & static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ClearBufferMask operator^(const ClearBufferMask & a, const ClearBufferMask & b)
{
    return static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));
}

inline ClearBufferMask & operator^=(ClearBufferMask & a, const ClearBufferMask & b)
{
    a = static_cast<ClearBufferMask>(static_cast<std::underlying_type<ClearBufferMask>::type>(a) ^ static_cast<std::underlying_type<ClearBufferMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::ContextFlagMask>
{
    std::size_t operator()(const gles::ContextFlagMask & t) const
    {
        return hash<std::underlying_type<gles::ContextFlagMask>::type>()(static_cast<std::underlying_type<gles::ContextFlagMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline ContextFlagMask operator|(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator|=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) | static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ContextFlagMask operator&(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator&=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) & static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline ContextFlagMask operator^(const ContextFlagMask & a, const ContextFlagMask & b)
{
    return static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));
}

inline ContextFlagMask & operator^=(ContextFlagMask & a, const ContextFlagMask & b)
{
    a = static_cast<ContextFlagMask>(static_cast<std::underlying_type<ContextFlagMask>::type>(a) ^ static_cast<std::underlying_type<ContextFlagMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::FragmentShaderDestMaskATI>
{
    std::size_t operator()(const gles::FragmentShaderDestMaskATI & t) const
    {
        return hash<std::underlying_type<gles::FragmentShaderDestMaskATI>::type>()(static_cast<std::underlying_type<gles::FragmentShaderDestMaskATI>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator|(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator|=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator&(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator&=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FragmentShaderDestMaskATI operator^(const FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    return static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));
}

inline FragmentShaderDestMaskATI & operator^=(FragmentShaderDestMaskATI & a, const FragmentShaderDestMaskATI & b)
{
    a = static_cast<FragmentShaderDestMaskATI>(static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestMaskATI>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::FragmentShaderDestModMaskATI>
{
    std::size_t operator()(const gles::FragmentShaderDestModMaskATI & t) const
    {
        return hash<std::underlying_type<gles::FragmentShaderDestModMaskATI>::type>()(static_cast<std::underlying_type<gles::FragmentShaderDestModMaskATI>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator|(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator|=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) | static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator&(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator&=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) & static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline FragmentShaderDestModMaskATI operator^(const FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    return static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));
}

inline FragmentShaderDestModMaskATI & operator^=(FragmentShaderDestModMaskATI & a, const FragmentShaderDestModMaskATI & b)
{
    a = static_cast<FragmentShaderDestModMaskATI>(static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(a) ^ static_cast<std::underlying_type<FragmentShaderDestModMaskATI>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::MapBufferAccessMask>
{
    std::size_t operator()(const gles::MapBufferAccessMask & t) const
    {
        return hash<std::underlying_type<gles::MapBufferAccessMask>::type>()(static_cast<std::underlying_type<gles::MapBufferAccessMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline MapBufferAccessMask operator|(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) | static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator|=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) | static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MapBufferAccessMask operator&(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) & static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator&=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) & static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MapBufferAccessMask operator^(const MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    return static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));
}

inline MapBufferAccessMask & operator^=(MapBufferAccessMask & a, const MapBufferAccessMask & b)
{
    a = static_cast<MapBufferAccessMask>(static_cast<std::underlying_type<MapBufferAccessMask>::type>(a) ^ static_cast<std::underlying_type<MapBufferAccessMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::MemoryBarrierMask>
{
    std::size_t operator()(const gles::MemoryBarrierMask & t) const
    {
        return hash<std::underlying_type<gles::MemoryBarrierMask>::type>()(static_cast<std::underlying_type<gles::MemoryBarrierMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator|(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator|=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) | static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator&(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator&=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) & static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline MemoryBarrierMask operator^(const MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    return static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));
}

inline MemoryBarrierMask & operator^=(MemoryBarrierMask & a, const MemoryBarrierMask & b)
{
    a = static_cast<MemoryBarrierMask>(static_cast<std::underlying_type<MemoryBarrierMask>::type>(a) ^ static_cast<std::underlying_type<MemoryBarrierMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::PathFontStyle>
{
    std::size_t operator()(const gles::PathFontStyle & t) const
    {
        return hash<std::underlying_type<gles::PathFontStyle>::type>()(static_cast<std::underlying_type<gles::PathFontStyle>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PathFontStyle operator|(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator|=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) | static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathFontStyle operator&(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator&=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) & static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathFontStyle operator^(const PathFontStyle & a, const PathFontStyle & b)
{
    return static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));
}

inline PathFontStyle & operator^=(PathFontStyle & a, const PathFontStyle & b)
{
    a = static_cast<PathFontStyle>(static_cast<std::underlying_type<PathFontStyle>::type>(a) ^ static_cast<std::underlying_type<PathFontStyle>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::PathMetricMask>
{
    std::size_t operator()(const gles::PathMetricMask & t) const
    {
        return hash<std::underlying_type<gles::PathMetricMask>::type>()(static_cast<std::underlying_type<gles::PathMetricMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PathMetricMask operator|(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator|=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) | static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathMetricMask operator&(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator&=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) & static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PathMetricMask operator^(const PathMetricMask & a, const PathMetricMask & b)
{
    return static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));
}

inline PathMetricMask & operator^=(PathMetricMask & a, const PathMetricMask & b)
{
    a = static_cast<PathMetricMask>(static_cast<std::underlying_type<PathMetricMask>::type>(a) ^ static_cast<std::underlying_type<PathMetricMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::PerformanceQueryCapsMaskINTEL>
{
    std::size_t operator()(const gles::PerformanceQueryCapsMaskINTEL & t) const
    {
        return hash<std::underlying_type<gles::PerformanceQueryCapsMaskINTEL>::type>()(static_cast<std::underlying_type<gles::PerformanceQueryCapsMaskINTEL>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator|(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator|=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) | static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator&(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator&=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) & static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline PerformanceQueryCapsMaskINTEL operator^(const PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    return static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));
}

inline PerformanceQueryCapsMaskINTEL & operator^=(PerformanceQueryCapsMaskINTEL & a, const PerformanceQueryCapsMaskINTEL & b)
{
    a = static_cast<PerformanceQueryCapsMaskINTEL>(static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(a) ^ static_cast<std::underlying_type<PerformanceQueryCapsMaskINTEL>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::SyncObjectMask>
{
    std::size_t operator()(const gles::SyncObjectMask & t) const
    {
        return hash<std::underlying_type<gles::SyncObjectMask>::type>()(static_cast<std::underlying_type<gles::SyncObjectMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline SyncObjectMask operator|(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator|=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) | static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline SyncObjectMask operator&(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator&=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) & static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline SyncObjectMask operator^(const SyncObjectMask & a, const SyncObjectMask & b)
{
    return static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));
}

inline SyncObjectMask & operator^=(SyncObjectMask & a, const SyncObjectMask & b)
{
    a = static_cast<SyncObjectMask>(static_cast<std::underlying_type<SyncObjectMask>::type>(a) ^ static_cast<std::underlying_type<SyncObjectMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::UnusedMask>
{
    std::size_t operator()(const gles::UnusedMask & t) const
    {
        return hash<std::underlying_type<gles::UnusedMask>::type>()(static_cast<std::underlying_type<gles::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace gles


namespace std
{


template<>
struct hash<gles::UseProgramStageMask>
{
    std::size_t operator()(const gles::UseProgramStageMask & t) const
    {
        return hash<std::underlying_type<gles::UseProgramStageMask>::type>()(static_cast<std::underlying_type<gles::UseProgramStageMask>::type>(t));
    }
};


} // namespace std


namespace gles
{


GLESBINDING_CONSTEXPR inline UseProgramStageMask operator|(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator|=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) | static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UseProgramStageMask operator&(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator&=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) & static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}

GLESBINDING_CONSTEXPR inline UseProgramStageMask operator^(const UseProgramStageMask & a, const UseProgramStageMask & b)
{
    return static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));
}

inline UseProgramStageMask & operator^=(UseProgramStageMask & a, const UseProgramStageMask & b)
{
    a = static_cast<UseProgramStageMask>(static_cast<std::underlying_type<UseProgramStageMask>::type>(a) ^ static_cast<std::underlying_type<UseProgramStageMask>::type>(b));

    return a;
}


} // namespace gles