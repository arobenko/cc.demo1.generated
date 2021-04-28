// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref demo1::message::Sets message and its fields.

#pragma once

#include <type_traits>

namespace demo1
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref demo1::message::Sets message.
/// @see demo1::message::SetsFields
struct SetsFieldsCommon
{
    /// @brief Common functions for
    ///     @ref demo1::message::SetsFields::F1 field.
    struct F1Common
    {
        /// @brief Name of the @ref demo1::message::SetsFields::F1 field.
        static const char* name()
        {
            return "F1";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref demo1::message::SetsFields::F1 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Bit0",
                "Bit1",
                "Bit2"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::SetsFields::F2 field.
    struct F2Common
    {
        /// @brief Name of the @ref demo1::message::SetsFields::F2 field.
        static const char* name()
        {
            return "F2";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref demo1::message::SetsFields::F2 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Bit0",
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "Bit15"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref demo1::message::SetsFields::F3 field.
    struct F3Common
    {
        /// @brief Name of the @ref demo1::message::SetsFields::F3 field.
        static const char* name()
        {
            return "F3";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref demo1::message::SetsFields::F3 field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Bit0",
                nullptr,
                "Bit2"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref demo1::message::Sets message.
/// @see demo1::message::Sets
struct SetsCommon
{
    /// @brief Name of the @ref demo1::message::Sets message.
    static const char* name()
    {
        return "Sets";
    }
    
};

} // namespace message

} // namespace demo1


