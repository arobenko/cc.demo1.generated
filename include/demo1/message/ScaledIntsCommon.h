// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::message::ScaledInts message and its fields.

#pragma once

#include <cstdint>
#include "demo1/field/LatCommon.h"
#include "demo1/field/LonCommon.h"

namespace demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref demo1::message::ScaledInts message.
/// @see demo1::message::ScaledIntsFields
struct ScaledIntsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref demo1::message::ScaledIntsFields::Lat field.
    using LatCommon = demo1::field::LatCommon;
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::ScaledIntsFields::Lon field.
    using LonCommon = demo1::field::LonCommon;
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::ScaledIntsFields::Height field.
    struct HeightCommon
    {
        /// @brief Re-definition of the value type used by
        ///     demo1::message::ScaledIntsFields::Height field.
        using ValueType = std::int32_t;
    
        /// @brief Name of the @ref demo1::message::ScaledIntsFields::Height field.
        static const char* name()
        {
            return "Height";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref demo1::message::ScaledIntsFields::SomeScaledVal field.
    struct SomeScaledValCommon
    {
        /// @brief Re-definition of the value type used by
        ///     demo1::message::ScaledIntsFields::SomeScaledVal field.
        using ValueType = std::uint32_t;
    
        /// @brief Name of the @ref demo1::message::ScaledIntsFields::SomeScaledVal field.
        static const char* name()
        {
            return "Some Scaled Value";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref demo1::message::ScaledInts message.
/// @see demo1::message::ScaledInts
struct ScaledIntsCommon
{
    /// @brief Name of the @ref demo1::message::ScaledInts message.
    static const char* name()
    {
        return "Scaled Ints";
    }
    
};

} // namespace message

} // namespace demo1


