// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace demo1
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref demo1::message::Ack message.
        using Ack = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::Bitfields message.
        using Bitfields = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref demo1::message::Datas message.
        struct DatasFields
        {
            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F1 field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F2 field.
            using F2 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F3 field.
            using F3 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::DatasFields::F4 field.
            using F4 = comms::option::app::EmptyOption;
            
        }; // struct DatasFields
        
        /// @brief Extra options for
        ///     @ref demo1::message::Datas message.
        using Datas = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::Enums message.
        using Enums = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::Floats message.
        using Floats = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref demo1::message::Lists message.
        struct ListsFields
        {
            /// @brief Extra options for @ref
            ///     demo1::message::ListsFields::F1 field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::ListsFields::F2 field.
            using F2 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::ListsFields::F3 field.
            using F3 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for all the member fields of
            ///     @ref demo1::message::ListsFields::F4 list.
            struct F4Members
            {
                /// @brief Extra options for all the member fields of
                ///     @ref demo1::message::ListsFields::F4Members::Element bundle.
                struct ElementMembers
                {
                    /// @brief Extra options for @ref
                    ///     demo1::message::ListsFields::F4Members::ElementMembers::Mem2
                    ///     field.
                    using Mem2 = comms::option::app::EmptyOption;
                    
                };
                
            };
            
            /// @brief Extra options for @ref
            ///     demo1::message::ListsFields::F4 field.
            using F4 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::ListsFields::F5 field.
            using F5 = comms::option::app::EmptyOption;
            
        }; // struct ListsFields
        
        /// @brief Extra options for
        ///     @ref demo1::message::Lists message.
        using Lists = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::Optionals message.
        using Optionals = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::ScaledInts message.
        using ScaledInts = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::Sets message.
        using Sets = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref demo1::message::SimpleInts message.
        using SimpleInts = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref demo1::message::Strings message.
        struct StringsFields
        {
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F1 field.
            using F1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F2 field.
            using F2 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F3 field.
            using F3 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F4 field.
            using F4 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::message::StringsFields::F5 field.
            using F5 = comms::option::app::EmptyOption;
            
        }; // struct StringsFields
        
        /// @brief Extra options for
        ///     @ref demo1::message::Strings message.
        using Strings = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref demo1::message::Variants message.
        struct VariantsFields
        {
            /// @brief Extra options for all the member fields of
            ///     @ref demo1::message::VariantsFields::Props1 list.
            struct Props1Members
            {
                /// @brief Extra options for all the member fields of
                ///     @ref demo1::message::VariantsFields::Props1Members::Property bitfield.
                struct PropertyMembers
                {
                    /// @brief Extra options for all the member fields of
                    ///     @ref demo1::message::VariantsFields::Props1Members::PropertyMembers::Prop3 bundle.
                    struct Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props1Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val = comms::option::app::EmptyOption;
                        
                    };
                    
                };
                
            };
            
            /// @brief Extra options for @ref
            ///     demo1::message::VariantsFields::Props1
            ///     field.
            using Props1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for all the member fields of
            ///     @ref demo1::message::VariantsFields::Props2 list.
            struct Props2Members
            {
                /// @brief Extra options for all the member fields of
                ///     @ref demo1::message::VariantsFields::Props2Members::Property bitfield.
                struct PropertyMembers
                {
                    /// @brief Extra options for all the member fields of
                    ///     @ref demo1::message::VariantsFields::Props2Members::PropertyMembers::Prop3 bundle.
                    struct Prop3Members
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props2Members::PropertyMembers::Prop3Members::Val
                        ///     field.
                        using Val = comms::option::app::EmptyOption;
                        
                    };
                    
                    /// @brief Extra options for all the member fields of
                    ///     @ref demo1::message::VariantsFields::Props2Members::PropertyMembers::UnknownProp bundle.
                    struct UnknownPropMembers
                    {
                        /// @brief Extra options for @ref
                        ///     demo1::message::VariantsFields::Props2Members::PropertyMembers::UnknownPropMembers::Val
                        ///     field.
                        using Val = comms::option::app::EmptyOption;
                        
                    };
                    
                };
                
            };
            
            /// @brief Extra options for @ref
            ///     demo1::message::VariantsFields::Props2
            ///     field.
            using Props2 = comms::option::app::EmptyOption;
            
        }; // struct VariantsFields
        
        /// @brief Extra options for
        ///     @ref demo1::message::Variants message.
        using Variants = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref demo1::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     demo1::frame::FrameLayers::Data layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     demo1::frame::FrameLayers::Id layer.
            using Id = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace demo1


