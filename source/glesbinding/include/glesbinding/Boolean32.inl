
#pragma once


namespace glesbinding
{


GLESBINDING_CONSTEXPR Boolean32::Boolean32()
: Boolean32(false)
{
}

GLESBINDING_CONSTEXPR Boolean32::Boolean32(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR Boolean32::Boolean32(char value)
: m_value(value)
{
}

GLESBINDING_CONSTEXPR Boolean32::Boolean32(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR Boolean32::Boolean32(int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR Boolean32::Boolean32(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

GLESBINDING_CONSTEXPR Boolean32::operator bool() const
{
    return m_value != 0;
}

GLESBINDING_CONSTEXPR Boolean32::operator char() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR Boolean32::operator unsigned char() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR Boolean32::operator int() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR Boolean32::operator unsigned int() const
{
    return m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator<(const Boolean32 & other) const
{
    return m_value < other.m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator>(const Boolean32 & other) const
{
    return m_value > other.m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator<=(const Boolean32 & other) const
{
    return m_value <= other.m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator>=(const Boolean32 & other) const
{
    return m_value >= other.m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator==(const Boolean32 & other) const
{
    return m_value == other.m_value;
}

GLESBINDING_CONSTEXPR bool Boolean32::operator!=(const Boolean32 & other) const
{
    return m_value != other.m_value;
}


} // namespace glesbinding


namespace std
{


template<>
struct hash<glesbinding::Boolean32>
{
    std::size_t operator()(const glesbinding::Boolean32 & boolean) const
    {
        return hash<glesbinding::Boolean32::underlying_type>()(static_cast<glesbinding::Boolean32::underlying_type>(boolean));
    }
};


} // namespace std