// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::field::PropRemLen field.

#pragma once

#include <cstdint>

namespace demo1
{

namespace field
{

/// @brief Common types and functions for
///     @ref demo1::field::PropRemLen field.
struct PropRemLenCommon
{
    /// @brief Re-definition of the value type used by
    ///     demo1::field::PropRemLen field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref demo1::field::PropRemLen field.
    static const char* name()
    {
        return "Length";
    }
    
};

} // namespace field

} // namespace demo1


