
#pragma once

#include <glesbinding/gles/gles.h>

void compile_info(const gles::GLuint shader);
void link_info(const gles::GLuint program);

struct mat4
{
    mat4();

    inline gles::GLfloat & operator[](const int i) { return m[i]; }
    inline const gles::GLfloat & operator[](const int i) const { return m[i]; }

    static mat4 lookAt(gles::GLfloat eyex, gles::GLfloat eyey, gles::GLfloat eyez
        , gles::GLfloat centerx, gles::GLfloat centery, gles::GLfloat centerz, gles::GLfloat upx, gles::GLfloat upy, gles::GLfloat upz);

    static mat4 perspective(gles::GLfloat fovy, gles::GLfloat aspect, gles::GLfloat zNear, gles::GLfloat zFar);

    static mat4 translate(gles::GLfloat x, gles::GLfloat y, gles::GLfloat z);
    static mat4 scale(gles::GLfloat x, gles::GLfloat y, gles::GLfloat z);
    static mat4 rotate(gles::GLfloat angle, gles::GLfloat x, gles::GLfloat y, gles::GLfloat z);

    gles::GLfloat m[16];
};

mat4 operator*(const mat4 & a, const mat4 & b);

struct vec3
{
    vec3();
    vec3(gles::GLfloat x, gles::GLfloat y, gles::GLfloat z);

    inline gles::GLfloat & operator[](const int i) { return v[i]; }
    inline const gles::GLfloat & operator[](const int i) const { return v[i]; }

    vec3 & operator+(const vec3 & rhs);
    vec3 & operator-(const vec3 & rhs);
    vec3 & operator*(const vec3 & rhs);
    vec3 & operator/(const vec3 & rhs);

    gles::GLfloat length();
    void normalize();

    gles::GLfloat v[3];
};

vec3 crossp(const vec3 & a, const vec3 & b);
gles::GLfloat dotp(const vec3 & a, const vec3 & b);
