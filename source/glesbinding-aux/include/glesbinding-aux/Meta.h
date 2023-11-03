
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <glesbinding-aux/glesbinding-aux_api.h>
#include <glesbinding-aux/glesbinding-aux_features.h>

#include <glesbinding/gles/types.h>
#include <glesbinding/AbstractFunction.h>


namespace glesbinding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class GLESBINDING_AUX_API Meta
{
public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Meta() = delete;

    /**
    *  @brief
    *    Returns the revision of the parsed gl.xml file
    *
    *  @return
    *    The revision of the parsed gl.xml file
    */
    static int glesRevision();

    /**
    *  @brief
    *    Converts a string into a bitfield symbol
    *
    *  @param[in] bitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static gles::GLbitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the gl.xml
    *
    *  @return
    *    The list of all bitfields known by the gl.xml
    */
    static std::vector<gles::GLbitfield> bitfields();

    /**
    *  @brief
    *    Converts a GLenum to a string
    *
    *  @param[in] glesenum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remark
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    // static const std::string & getString(gles::GLenum glesenum);
    
    /**
    *  @brief
    *    Converts a string to an enum symbol
    *
    *  @param[in] glesenum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static gles::GLenum getEnum(const std::string & glesenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the gl.xml
    *
    *  @return
    *    The list of all enums known by the gl.xml
    */
    static std::set<gles::GLenum> enums();

    /**
    *  @brief
    *    Converts a GLboolean to a string
    *
    *  @param[in] glesboolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the GLboolean symbol name
    *
    *  @remark
    *    Can either be `GLES_TRUE` or `GLES_FALSE`
    */
    static const std::string & getString(const gles::GLboolean & glesboolean);
    
    /**
    *  @brief
    *    Converts a string to a GLboolean symbol
    *
    *  @param[in] boolean
    *    The string representation of the GLboolean
    *
    *  @return
    *    The symbol identified through the boolean string, `GLES_FALSE` if failed
    */
    static gles::GLboolean getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a GLextension to its string representation
    *
    *  @param[in] glesextension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(gles::GLextension glesextension);
    
    /**
    *  @brief
    *    Converts a string to an GLextension
    *
    *  @param[in] extension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static gles::GLextension getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the gl.xml
    *
    *  @return
    *    The set of all extensions known by the gl.xml
    */
    static std::set<gles::GLextension> extensions();
    
    /**
    *  @brief
    *    Returns the set of extensions that are required for by the given version
    *
    *  @param[in] version
    *    The version/feature to return the required extensions for.
    *    If an null version is given, all extensions that have no
    *    version/feature associated are returned instead
    *
    *  @return
    *    The set of extensions that should be supported for the given version.
    *    All non-versioned extensions can be queried by providing the null version
    */
    static const std::set<gles::GLextension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'gles' prefix
    *
    *  @return
    *    The set of extensions that are requiring a function
    */
    static const std::set<gles::GLextension> extensions(const std::string & glesfunction);

    /**
    *  @brief
    *    Returns the list of features that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'gles' prefix
    *
    *  @return
    *    The set of features that are requiring a function
    */
    static const std::set<Version> versions(const std::string & glesfunction);
    
    /**
    *  @brief
    *    Returns the set of functions that are required for the version
    *
    *  @param[in] version
    *    The version to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the version
    *
    *  @remark
    *    This is exclusive (preceeding versions are ignored)
    */
    static const std::set<AbstractFunction *> functions(const Version & version);

    /**
    *  @brief
    *    Returns the set of functions that are required for the extension
    *
    *  @param[in] extension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(gles::GLextension extension);

    /**
    *  @brief
    *    Returns the first Version (Feature) that required the extension
    *
    *  @param[in] glesextension
    *    The extension
    *
    *  @return
    *    The first Version (Feature) that required the extension
    */
    static const Version & version(gles::GLextension glesextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the gl.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the gl.xml
    */
    static const std::set<Version> & versions();

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::AttribMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::BufferStorageMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::ClearBufferMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::ContextFlagMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::FragmentShaderDestMaskATI glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::FragmentShaderDestModMaskATI glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::MapBufferAccessMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::MemoryBarrierMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::PathFontStyle glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::PathMetricMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::PerformanceQueryCapsMaskINTEL glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::SyncObjectMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::UnusedMask glesbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] bitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(gles::UseProgramStageMask glesbitfield);


    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    The shortest string representation of the value
    *
    *  @remark
    *    Beware, that some enums in the API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(gles::GLenum glesenum);

    /**
    *  @brief
    *    Convert enum to symbol name string representation
    *
    *  @param[in] enum
    *    The enum value
    *
    *  @return
    *    All string representations of the value
    */
    static std::vector<std::string> getStrings(gles::GLenum glesenum);


private:
    /**
    *  @brief
    *    Returns the bucket index of an identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., 'gles' or 'GLES_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace glesbinding::aux