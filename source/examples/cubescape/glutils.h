
#pragma once

#include <glesbinding/gles30/gles.h>

void compile_info(const gles30::GLuint shader);
void link_info(const gles30::GLuint program);

struct mat4
{
    mat4();

    inline gles30::GLfloat & operator[](const int i) { return m[i]; }
    inline const gles30::GLfloat & operator[](const int i) const { return m[i]; }

    static mat4 lookAt(gles30::GLfloat eyex, gles30::GLfloat eyey, gles30::GLfloat eyez
        , gles30::GLfloat centerx, gles30::GLfloat centery, gles30::GLfloat centerz, gles30::GLfloat upx, gles30::GLfloat upy, gles30::GLfloat upz);

    static mat4 perspective(gles30::GLfloat fovy, gles30::GLfloat aspect, gles30::GLfloat zNear, gles30::GLfloat zFar);

    static mat4 translate(gles30::GLfloat x, gles30::GLfloat y, gles30::GLfloat z);
    static mat4 scale(gles30::GLfloat x, gles30::GLfloat y, gles30::GLfloat z);
    static mat4 rotate(gles30::GLfloat angle, gles30::GLfloat x, gles30::GLfloat y, gles30::GLfloat z);

    gles30::GLfloat m[16];
};

mat4 operator*(const mat4 & a, const mat4 & b);

struct vec3
{
    vec3();
    vec3(gles30::GLfloat x, gles30::GLfloat y, gles30::GLfloat z);

    inline gles30::GLfloat & operator[](const int i) { return v[i]; }
    inline const gles30::GLfloat & operator[](const int i) const { return v[i]; }

    vec3 & operator+(const vec3 & rhs);
    vec3 & operator-(const vec3 & rhs);
    vec3 & operator*(const vec3 & rhs);
    vec3 & operator/(const vec3 & rhs);

    gles30::GLfloat length();
    void normalize();

    gles30::GLfloat v[3];
};

vec3 crossp(const vec3 & a, const vec3 & b);
gles30::GLfloat dotp(const vec3 & a, const vec3 & b);
