
#include <iostream>
#include <map>
#include <set>
#include <vector>

#include <GLFW/glfw3.h>

#include <glesbinding/AbstractFunction.h>
#include <glesbinding/Version.h>
#include <glesbinding/Binding.h>

#include <glesbinding/gles/gles.h>

#include <glesbinding-aux/Meta.h>
#include <glesbinding-aux/ContextInfo.h>
#include <glesbinding-aux/ValidVersions.h>
#include <glesbinding-aux/types_to_string.h>


using namespace gles;
using namespace glesbinding;


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

inline void coutFunc(const AbstractFunction * func)
{
    std::cout << "\t(0x" << reinterpret_cast<void *>(func->address()) << ") " << func->name() << std::endl;
}

int main()
{
    if (!glfwInit())
        return 1;

    glfwSetErrorCallback(error);

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    auto window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }
    glfwHideWindow(window);

    glfwMakeContextCurrent(window);

    Binding::initialize([](const char * name) {
        return glfwGetProcAddress(name);
    });

    // gather available extensions

    auto resolved = 0u;
    auto assigned = 0u;

    std::set<std::string> unknownExts;

    const auto supportedExts = aux::ContextInfo::extensions(unknownExts);
    const auto allExts = aux::Meta::extensions();

    // sort extensions by version

    auto extsByVer = std::map<Version, std::set<GLextension>>();
    auto suppByVer = std::map<Version, int>(); // num supported exts by version

    auto versions = aux::Meta::versions();
    versions.insert(Version{}); // provide NONE Version for extensions without associated version 

    for (auto & version : versions)
    {
        const auto extensions = aux::Meta::extensions(version);
        if (extensions.empty())
            continue;

        extsByVer[version] = extensions;
        suppByVer[version] = 0;
    }

    // iterate over all extensions by version and show functions

    auto funcsByExt = std::map<GLextension, std::set<const AbstractFunction *>>();
    auto nonExtFuncs = std::set<const AbstractFunction *>();

    for (auto * function : Binding::functions())
    {
        if (function->isResolved())
            ++resolved;

        if (aux::Meta::extensions(function->name()).empty())
        {
            nonExtFuncs.insert(function);
        }
        else
        {
            const auto extensions = aux::Meta::extensions(function->name());
            for (const auto & extension : extensions)
                funcsByExt[extension].insert(function);
            ++assigned;
        }
    }

    // print all extensions with support info and functions 

    for (auto i : extsByVer)
    {   
        std::cout << std::endl << std::endl << "[" << i.first << " EXTENSIONS]" << std::endl;
        for (auto & ext : i.second)
        {
            const auto supported = supportedExts.find(ext) != supportedExts.cend();
            if (supported)
                ++suppByVer[i.first];

            std::cout << std::endl << aux::Meta::getString(ext) << (supported ? " (supported)" : "") << std::endl;
            if (funcsByExt.find(ext) != funcsByExt.cend())
                for (auto func : funcsByExt[ext])
                    coutFunc(func);
        }
    }

    // show unknown extensions

    std::cout << std::endl << std::endl << "[EXTENSIONS NOT COVERED BY GLBINDING]" << std::endl << std::endl;
    for (const auto & ext : unknownExts)
        std::cout << ext << std::endl;

    // show non ext functions

    std::cout << std::endl << std::endl << "[NON-EXTENSION OR NOT-COVERED-EXTENSION FUNCTIONS]" << std::endl << std::endl;
    for (const AbstractFunction * func : nonExtFuncs)
        coutFunc(func);

    // print summary

    std::cout << std::endl << std::endl << "[SUMMARY]" << std::endl << std::endl;

    std::cout << "# Functions:     " << resolved << " of " << Binding::size() << " resolved"
        << " (" << (Binding::size() - resolved) << " unresolved)" << std::endl;

    std::cout << "                 " << assigned << " assigned to extensions";

    std::cout << "." << std::endl;

    std::cout << std::endl;
    std::cout << "# Extensions:    " << (supportedExts.size() + unknownExts.size()) << " of " << allExts.size() + unknownExts.size() << " supported"
        << " (" << unknownExts.size() << " of which are unknown to glesbinding)" << std::endl;

    for (auto p : extsByVer)
    {
        const auto & numSupported = suppByVer[p.first];
        std::cout << "  # " << p.first << " assoc.:  " << numSupported << " / " << p.second.size() << std::endl;
    }

    std::cout << std::endl;
    std::cout << "# Missing Feature Extensions and Functions: " << std::endl;

    auto unsupportedExtensions = std::set<GLextension>{};
    auto unsupportedFunctions = std::set<AbstractFunction *>{};
    for (auto p : extsByVer)
    {
        if (p.first.isNull())
            continue;

        unsupportedExtensions.clear();
        unsupportedFunctions.clear();
        const auto supported = aux::ContextInfo::supported(p.first, unsupportedExtensions, unsupportedFunctions);

        if (supported)
            continue;

        if (!unsupportedExtensions.empty())
        {
            std::cout << "  # " << p.first << " assoc. Extensions:" << std::endl;
            for (const auto extension : unsupportedExtensions)
                std::cout << "                 " << aux::Meta::getString(extension) << std::endl;
        }
        if(!unsupportedFunctions.empty())
        {
            std::cout << "  # " << p.first << " assoc. Functions:" << std::endl;
            for (const auto function : unsupportedFunctions)
                std::cout << "                 " << function->name() << std::endl;
        }
    }

    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL ES Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL ES Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL ES Renderer: " << aux::ContextInfo::renderer() << std::endl
        << "OpenGL ES Revision: " << aux::Meta::glesRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
