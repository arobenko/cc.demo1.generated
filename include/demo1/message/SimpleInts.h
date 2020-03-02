// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains definition of <b>"Simple Ints"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/message/SimpleIntsCommon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref SimpleInts.
/// @tparam TOpt Extra options
/// @see @ref SimpleInts
/// @headerfile "demo1/message/SimpleInts.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct SimpleIntsFields
{
    /// @brief Definition of <b>"F1"</b> field.
    struct F1 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int8_t,
            comms::option::def::DefaultNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F1Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    struct F2 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F2Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    struct F3 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int16_t,
            comms::option::def::DefaultNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F3Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F4"</b> field.
    struct F4 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::DefaultNumValue<4>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F4Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F5"</b> field.
    struct F5 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int32_t,
            comms::option::def::DefaultNumValue<5>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F5Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F6"</b> field.
    struct F6 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::DefaultNumValue<6>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F6Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F7"</b> field.
    struct F7 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int64_t,
            comms::option::def::DefaultNumValue<7>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F7Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F8"</b> field.
    struct F8 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::uint64_t,
            comms::option::def::DefaultNumValue<8>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F8Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F9"</b> field.
    struct F9 : public
        comms::field::IntValue<
            demo1::field::FieldBase<>,
            std::int32_t,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::DefaultNumValue<9>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F9Common::name();
        }
        
    };
    
    /// @brief Definition of <b>"F10"</b> field.
    /// @details
    ///     Using little endian (LEB-128) to encode this field.
    struct F10 : public
        comms::field::IntValue<
            demo1::field::FieldBase<comms::option::def::LittleEndian>,
            std::uint32_t,
            comms::option::def::VarLength<1U, 4U>,
            comms::option::def::DefaultNumValue<10>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::SimpleIntsFieldsCommon::F10Common::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3,
        F4,
        F5,
        F6,
        F7,
        F8,
        F9,
        F10
    >;
};

/// @brief Definition of <b>"Simple Ints"</b> message class.
/// @details
///     See @ref SimpleIntsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/SimpleInts.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class SimpleInts : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::SimpleInts,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_SimpleInts>,
        comms::option::def::FieldsImpl<typename SimpleIntsFields<TOpt>::All>,
        comms::option::def::MsgType<SimpleInts<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::SimpleInts,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_SimpleInts>,
            comms::option::def::FieldsImpl<typename SimpleIntsFields<TOpt>::All>,
            comms::option::def::MsgType<SimpleInts<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_f1 type and @b field_f1() fuction
    ///         for @ref SimpleIntsFields::F1 field.
    ///     @li @b Field_f2 type and @b field_f2() fuction
    ///         for @ref SimpleIntsFields::F2 field.
    ///     @li @b Field_f3 type and @b field_f3() fuction
    ///         for @ref SimpleIntsFields::F3 field.
    ///     @li @b Field_f4 type and @b field_f4() fuction
    ///         for @ref SimpleIntsFields::F4 field.
    ///     @li @b Field_f5 type and @b field_f5() fuction
    ///         for @ref SimpleIntsFields::F5 field.
    ///     @li @b Field_f6 type and @b field_f6() fuction
    ///         for @ref SimpleIntsFields::F6 field.
    ///     @li @b Field_f7 type and @b field_f7() fuction
    ///         for @ref SimpleIntsFields::F7 field.
    ///     @li @b Field_f8 type and @b field_f8() fuction
    ///         for @ref SimpleIntsFields::F8 field.
    ///     @li @b Field_f9 type and @b field_f9() fuction
    ///         for @ref SimpleIntsFields::F9 field.
    ///     @li @b Field_f10 type and @b field_f10() fuction
    ///         for @ref SimpleIntsFields::F10 field.
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2,
        f3,
        f4,
        f5,
        f6,
        f7,
        f8,
        f9,
        f10
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 38U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return demo1::message::SimpleIntsCommon::name();
    }
    
    
};

} // namespace message

} // namespace demo1


