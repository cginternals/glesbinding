
#include <glesbinding-aux/Meta.h>

#include <glesbinding/gles/bitfield.h>

#include "Meta_Maps.h"


using namespace gles;


namespace
{


const auto none = std::string{};


} // namespace


namespace glesbinding { namespace aux
{


const std::string & Meta::getString(const AttribMask glesbitfield)
{
    const auto i = Meta_StringsByAttribMask.find(glesbitfield);
    if (i != Meta_StringsByAttribMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const BufferStorageMask glesbitfield)
{
    const auto i = Meta_StringsByBufferStorageMask.find(glesbitfield);
    if (i != Meta_StringsByBufferStorageMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ClearBufferMask glesbitfield)
{
    const auto i = Meta_StringsByClearBufferMask.find(glesbitfield);
    if (i != Meta_StringsByClearBufferMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const ContextFlagMask glesbitfield)
{
    const auto i = Meta_StringsByContextFlagMask.find(glesbitfield);
    if (i != Meta_StringsByContextFlagMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FragmentShaderDestMaskATI glesbitfield)
{
    const auto i = Meta_StringsByFragmentShaderDestMaskATI.find(glesbitfield);
    if (i != Meta_StringsByFragmentShaderDestMaskATI.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const FragmentShaderDestModMaskATI glesbitfield)
{
    const auto i = Meta_StringsByFragmentShaderDestModMaskATI.find(glesbitfield);
    if (i != Meta_StringsByFragmentShaderDestModMaskATI.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const MapBufferAccessMask glesbitfield)
{
    const auto i = Meta_StringsByMapBufferAccessMask.find(glesbitfield);
    if (i != Meta_StringsByMapBufferAccessMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const MemoryBarrierMask glesbitfield)
{
    const auto i = Meta_StringsByMemoryBarrierMask.find(glesbitfield);
    if (i != Meta_StringsByMemoryBarrierMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PathFontStyle glesbitfield)
{
    const auto i = Meta_StringsByPathFontStyle.find(glesbitfield);
    if (i != Meta_StringsByPathFontStyle.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PathMetricMask glesbitfield)
{
    const auto i = Meta_StringsByPathMetricMask.find(glesbitfield);
    if (i != Meta_StringsByPathMetricMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const PerformanceQueryCapsMaskINTEL glesbitfield)
{
    const auto i = Meta_StringsByPerformanceQueryCapsMaskINTEL.find(glesbitfield);
    if (i != Meta_StringsByPerformanceQueryCapsMaskINTEL.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const SyncObjectMask glesbitfield)
{
    const auto i = Meta_StringsBySyncObjectMask.find(glesbitfield);
    if (i != Meta_StringsBySyncObjectMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const UnusedMask glesbitfield)
{
    const auto i = Meta_StringsByUnusedMask.find(glesbitfield);
    if (i != Meta_StringsByUnusedMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const UseProgramStageMask glesbitfield)
{
    const auto i = Meta_StringsByUseProgramStageMask.find(glesbitfield);
    if (i != Meta_StringsByUseProgramStageMask.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace glesbinding::aux