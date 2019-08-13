
#pragma once


#include <string>
#include <iosfwd>

#include <glesbinding-aux/glesbinding-aux_api.h>
#include <glesbinding-aux/glesbinding-aux_features.h>

#include <glesbinding/gles/types.h>
#include <glesbinding/Value.h>


namespace gles
{


GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLboolean & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLenum & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const GLextension & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AttribMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MapBufferAccessMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value);


} // namespace gles


namespace glesbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
GLESBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
GLESBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLenum> & value);

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLboolean> & value);

/**
*  @brief
*    A specialized ostream operator for the GLubyte * Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLubyte *> & value);

/**
*  @brief
*    A specialized ostream operator for the GLchar * Value template
*/
template <>
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<gles::GLchar *> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
GLESBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace glesbinding


#include <glesbinding-aux/types_to_string.inl>