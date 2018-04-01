
#include <iostream>
#include <algorithm>
#include <set>
#include <iomanip>

#include <glesbinding/Version.h>

#include <glesbinding/gles/enum.h>
#include <glesbinding/gles/extension.h>

#include <glesbinding-aux/Meta.h>
#include <glesbinding-aux/ValidVersions.h>

using namespace gles; 
using namespace glesbinding;

int main(int, char * [])
{
    // enlist all versions

    std::cout << std::endl << std::endl << "[VERSIONS]" << std::endl << std::endl;

    std::cout << "# Versions: " << aux::Meta::versions().size() << std::endl << std::endl;

    for (Version v : aux::Meta::versions())
        std::cout << v.toString() << std::endl;

    // enlist all enums

    std::cout << std::endl << std::endl << "[ENUMS]" << std::endl << std::endl;

    std::cout << "# Enums: " << aux::Meta::enums().size() << std::endl << std::endl;

    for (GLenum e : aux::Meta::enums()) // c++ 14 ...
        std::cout << " (" << std::hex << std::showbase << std::internal << std::setfill('0') << std::setw(8) 
            << static_cast<std::underlying_type<GLenum>::type>(e) << ") " << aux::Meta::getString(e) << std::dec << std::endl;

    std::cout << std::dec;
    
    // enlist all extensions

    std::cout << std::endl << std::endl << "[EXTENSIONS]" << std::endl << std::endl;

    std::cout << " # Extensions: " << aux::Meta::extensions().size() << std::endl << std::endl;

    for (GLextension extension : aux::Meta::extensions())
    {
        const Version v = aux::Meta::version(extension);
        std::cout << " " << aux::Meta::getString(extension) << " " << (v.isNull() ? "" : v.toString()) << std::endl;
    }
    
    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL ES Revision: " << aux::Meta::glesRevision() << " (gl.xml)" << std::endl << std::endl;

    return 0;
}
