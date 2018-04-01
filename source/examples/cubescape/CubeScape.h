
#pragma once

#include <glesbinding/gles/types.h>

#include <chrono>

#include "glutils.h"


class CubeScape
{
public:
    CubeScape();
    ~CubeScape();

    void resize(int width, int height);
    void draw();

    void setNumCubes(int numCubes);
    int numCubes() const;

protected:
    gles::GLint a_vertex;
    gles::GLint u_transform;
    gles::GLint u_time;
    gles::GLint u_numcubes;

    gles::GLuint m_vao;
    gles::GLuint m_indices;
    gles::GLuint m_vertices;

    gles::GLuint m_program;

    gles::GLuint m_textures[2];
    
    float m_a;
    int m_numcubes;

    mat4 m_view;
    mat4 m_projection;

    using clock = std::chrono::system_clock;
    clock::time_point m_time;
};
