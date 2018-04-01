
#include <iostream>
#include <map>
#include <array>
#include <set>
#include <cstring>

#include <GLFW/glfw3.h>

#include <glesbinding-aux/Meta.h>
#include <glesbinding/AbstractFunction.h>
#include <glesbinding-aux/ContextInfo.h>
#include <glesbinding/Version.h>

#include <glesbinding/gles/gles.h>

#include <glesbinding/Binding.h>

#include <glesbinding-aux/ValidVersions.h>
#include <glesbinding-aux/types_to_string.h>


using namespace gles;
using namespace glesbinding;

void print(
  const Version & version
, const Version & result)
{
    std::cout << "  "
        << version << "  " << result << std::endl;
}

bool isCore(const Version & /*version*/)
{
    return false;
}

Version printVersionOfContextRequest(const Version & version)
{
    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version.majorVersion());
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version.minorVersion());

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
    if (!window)
    {
        print(version, Version());
        return Version();
    }

    glfwMakeContextCurrent(window);
    Binding::initialize([](const char * name) {
        return glfwGetProcAddress(name);
    });

    auto result = aux::ContextInfo::version();

    print(version, result);

    glfwMakeContextCurrent(nullptr);
    glfwDestroyWindow(window);

    return result;
}



int main(int argc, char * argv[])
{
    if (!glfwInit())
        return 1;

    //glfwSetErrorCallback(error);

    std::cout << std::endl << "test: requesting all context configurations ..." << std::endl
        << std::endl << "  scheme: <requested_version>  <forward> <core>  <created_version>" << std::endl << std::endl;

    std::map<Version, std::array<Version, 4>> markdown;

    for (const auto & version : aux::ValidVersions::versions())
    {
        markdown[version][0] = printVersionOfContextRequest(version);
        std::cout << std::endl;
    }

    auto printMarkdown = false;
    for (int i = 0; i < argc; ++i)
        printMarkdown |= (strcmp(argv[i], "--markdown") == 0);

    if (printMarkdown)
    {
        std::cout << "printing markdown formatted results ..." << std::endl;

        std::cout << std::endl << "|";

        for (const auto & version : aux::ValidVersions::versions())
            std::cout << version << (version != aux::ValidVersions::latest() ? "<br>" : "");

        for (int i = 0; i < 4; ++i)
        {
            std::cout << "|";
            for (const auto & version : aux::ValidVersions::versions())
                std::cout << markdown[version][i] << (version != aux::ValidVersions::latest() ? "<br>" : "");
        }
        std::cout << "|" << std::endl << std::endl;
    }

    const auto version = aux::ValidVersions::latest();

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_ES_API);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, version.majorVersion());
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, version.minorVersion());

    GLFWwindow * window = glfwCreateWindow(320, 240, "", nullptr, nullptr);
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

    // print some gl infos (query)

    std::cout
        << "OpenGL ES Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL ES Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL ES Renderer: " << aux::ContextInfo::renderer() << std::endl
        << "OpenGL ES Revision: " << aux::Meta::glesRevision() << " (gl.xml)" << std::endl << std::endl;

    glfwTerminate();
    return 0;
}
