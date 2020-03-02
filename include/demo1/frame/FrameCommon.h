// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    fields used in definition of @ref demo1::frame::Frame frame.

#pragma once

#include <cstdint>

namespace demo1
{

namespace frame
{

/// @brief Common types and functions of fields using in definition of
///     @ref demo1::frame::Frame frame.
/// @see demo1::frame::FrameLayers
struct FrameLayersCommon
{
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref demo1::frame::FrameLayers::SyncMembers struct.
    struct SyncMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref demo1::frame::FrameLayers::SyncMembers::Sync field.
        struct SyncCommon
        {
            /// @brief Re-definition of the value type used by
            ///     demo1::frame::FrameLayers::SyncMembers::Sync field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref demo1::frame::FrameLayers::SyncMembers::Sync field.
            static const char* name()
            {
                return "Sync";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref demo1::frame::FrameLayers::ChecksumMembers struct.
    struct ChecksumMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref demo1::frame::FrameLayers::ChecksumMembers::Checksum field.
        struct ChecksumCommon
        {
            /// @brief Re-definition of the value type used by
            ///     demo1::frame::FrameLayers::ChecksumMembers::Checksum field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref demo1::frame::FrameLayers::ChecksumMembers::Checksum field.
            static const char* name()
            {
                return "Checksum";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the fields defined in
    ///     @ref demo1::frame::FrameLayers::SizeMembers struct.
    struct SizeMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref demo1::frame::FrameLayers::SizeMembers::Size field.
        struct SizeCommon
        {
            /// @brief Re-definition of the value type used by
            ///     demo1::frame::FrameLayers::SizeMembers::Size field.
            using ValueType = std::uint16_t;
        
            /// @brief Name of the @ref demo1::frame::FrameLayers::SizeMembers::Size field.
            static const char* name()
            {
                return "Size";
            }
            
        };
        
    };
    
};
} // namespace frame

} // namespace demo1


