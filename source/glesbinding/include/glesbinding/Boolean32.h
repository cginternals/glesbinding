
#pragma once


#include <functional>

#include <glesbinding/glesbinding_api.h>
#include <glesbinding/glesbinding_features.h>


namespace glesbinding
{


class GLESBINDING_API Boolean32
{
public:
    using underlying_type = unsigned int;

public:
    GLESBINDING_CONSTEXPR inline Boolean32();
    GLESBINDING_CONSTEXPR inline Boolean32(bool on);
    GLESBINDING_CONSTEXPR inline Boolean32(char on);
    GLESBINDING_CONSTEXPR inline Boolean32(unsigned char on);
    GLESBINDING_CONSTEXPR inline Boolean32(int on);
    GLESBINDING_CONSTEXPR inline Boolean32(unsigned int on);

    GLESBINDING_CONSTEXPR inline explicit operator bool() const;
    GLESBINDING_CONSTEXPR inline explicit operator char() const;
    GLESBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    GLESBINDING_CONSTEXPR inline explicit operator int() const;
    GLESBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    GLESBINDING_CONSTEXPR inline bool operator<(const Boolean32 & other) const;
    GLESBINDING_CONSTEXPR inline bool operator>(const Boolean32 & other) const;
    GLESBINDING_CONSTEXPR inline bool operator<=(const Boolean32 & other) const;
    GLESBINDING_CONSTEXPR inline bool operator>=(const Boolean32 & other) const;

    GLESBINDING_CONSTEXPR inline bool operator==(const Boolean32 & other) const;
    GLESBINDING_CONSTEXPR inline bool operator!=(const Boolean32 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <glesbinding/Boolean32.inl>