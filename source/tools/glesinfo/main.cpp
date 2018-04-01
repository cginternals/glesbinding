
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

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

void printExtensions(const std::set<std::string> & extensions)
{
    auto column = 8;

    for (auto it = extensions.begin(); it != extensions.end(); ++it)
    {
        const auto & extensionString = *it;

        if (column > 8 && column + extensionString.size() > 78)
        {
            std::cout << std::endl << "\t";
            column = 8;
        }

        std::cout << extensionString;

        auto endOfIt = it;
        ++endOfIt;
        if (endOfIt != extensions.end())
        {
            std::cout << ", ";

            column += extensionString.size();
        }
        else
        {
            std::cout << std::endl;
        }
    }
}

void printInfos()
{
    std::cout << std::endl
        << "OpenGL Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << aux::ContextInfo::renderer() << std::endl;

    // gather available extensions

    std::set<std::string> unknownExts;

    const auto supportedExtensions = aux::ContextInfo::extensions(unknownExts);

    auto extensionsByVersion = std::map<Version, std::set<GLextension>>();

    auto versions = aux::Meta::versions();
    versions.insert(Version{}); // provide NONE Version for extensions without associated version

    for (const auto & version : versions)
    {
        const auto extensions = aux::Meta::extensions(version);
        if (extensions.empty())
            continue;

        extensionsByVersion[version] = extensions;
    }

    if (!unknownExts.empty())
    {
        std::cout << std::endl << "Miscellaneous: " << unknownExts.size() << " Extensions" << std::endl << "\t";

        printExtensions(unknownExts);
    }

    for (const auto & pair : extensionsByVersion)
    {
        auto supported = size_t(0);
        const auto required = pair.second.size();
        std::set<std::string> extensionStrings;
        for (const auto & ext : pair.second)
        {
            supported += supportedExtensions.find(ext) != supportedExtensions.cend() ? 1 : 0;
            extensionStrings.insert(aux::Meta::getString(ext));
        }

        if (pair.first.isNull())
        {
            std::cout << std::endl << "Unassociated: " << supported << " Extensions" << std::endl << "\t";
        }
        else
        {
            std::cout << std::endl << "Feature " << pair.first.toString() << (supported == required ? " (supported)" : "") << ": " << supported << " of " << required << " Extensions" << std::endl << "\t";
        }

        printExtensions(extensionStrings);
    }
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
    }, true);

    printInfos();

    glfwMakeContextCurrent(nullptr);

    glfwTerminate();
    return 0;
}
