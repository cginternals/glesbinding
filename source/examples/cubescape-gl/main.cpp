
#include <iostream>

#include <GLFW/glfw3.h>

#include <glesbinding/glesbinding.h>
#include <glesbinding/Version.h>
#include <glesbinding/FunctionCall.h>
#include <glesbinding/CallbackMask.h>

#include <glesbinding/gles/gles.h>
#include <glesbinding/getProcAddress.h>

#include <glesbinding-aux/ContextInfo.h>
#include <glesbinding-aux/Meta.h>
#include <glesbinding-aux/types_to_string.h>
#include <glesbinding-aux/ValidVersions.h>
// #include <glesbinding-aux/debug.h>

#include "CubeScape.h"


using namespace gles;
using namespace glesbinding;


namespace
{
    CubeScape * cubescape(nullptr);
}


void error(int errnum, const char * errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}


void framebuffer_size_callback(GLFWwindow * /*window*/, int width, int height)
{
    cubescape->resize(width, height);
}

void key_callback(GLFWwindow * window, int key, int /*scancode*/, int action, int /*mods*/)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, 1);

    bool numCubesChanged = false;

    if (key == GLFW_KEY_I && (action == GLFW_PRESS || action == GLFW_REPEAT))
    {
        cubescape->setNumCubes(cubescape->numCubes() + 1);
        numCubesChanged = true;        
    }

    if (key == GLFW_KEY_D && (action == GLFW_PRESS || action == GLFW_REPEAT))
    {
        cubescape->setNumCubes(cubescape->numCubes() - 1);
        numCubesChanged = true;
    }

    if (numCubesChanged)
    {
        const int n = cubescape->numCubes();
        std::cout << "#cubes = " << n << " * " << n << " = " << n * n << std::endl;
    }
}


int main(int, char *[])
{
    glfwSetErrorCallback(error);

    if (!glfwInit())
        return 1;

    glfwDefaultWindowHints();

#ifdef SYSTEM_DARWIN
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, true);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#endif

    GLFWwindow * window = glfwCreateWindow(640, 480, "", nullptr, nullptr);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glfwMakeContextCurrent(window);

    glesbinding::initialize(glfwGetProcAddress, false); // only resolve functions that are actually used (lazy)
    // glesbinding::aux::enableGetErrorCallback();

    // print some gl infos (query)

    std::cout << std::endl
        << "OpenGL Version:  " << aux::ContextInfo::version() << std::endl
        << "OpenGL Vendor:   " << aux::ContextInfo::vendor() << std::endl
        << "OpenGL Renderer: " << aux::ContextInfo::renderer() << std::endl;

    std::cout << std::endl
        << "Press i or d to either increase or decrease number of cubes." << std::endl << std::endl;


    cubescape = new CubeScape();

    int width, height; glfwGetFramebufferSize(window, &width, &height);
    cubescape->resize(width, height);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        cubescape->draw();
        glfwSwapBuffers(window);
    }

    delete cubescape;
    cubescape = nullptr;

    glfwTerminate();
    return 0;
}
