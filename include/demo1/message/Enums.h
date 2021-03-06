// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"Enums"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"
#include "demo1/message/EnumsCommon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Enums.
/// @tparam TOpt Extra options
/// @see @ref Enums
/// @headerfile "demo1/message/Enums.h"
template <typename TOpt = demo1::options::DefaultOptions>
struct EnumsFields
{
    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Simple enum with sequential values
    /// @see @ref demo1::message::EnumsFieldsCommon::F1Val
    class F1 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            demo1::message::EnumsFieldsCommon::F1Val,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base = 
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                demo1::message::EnumsFieldsCommon::F1Val,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::EnumsFieldsCommon::F1Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return demo1::message::EnumsFieldsCommon::F1Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     Enum with signed values
    /// @see @ref demo1::message::EnumsFieldsCommon::F2Val
    class F2 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            demo1::message::EnumsFieldsCommon::F2Val,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<-1>,
            comms::option::def::ValidNumValueRange<5, 7>
        >
    {
        using Base = 
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                demo1::message::EnumsFieldsCommon::F2Val,
                comms::option::def::DefaultNumValue<6>,
                comms::option::def::ValidNumValue<-1>,
                comms::option::def::ValidNumValueRange<5, 7>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::EnumsFieldsCommon::F2Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return demo1::message::EnumsFieldsCommon::F2Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Enum with non-standard length
    /// @see @ref demo1::message::EnumsFieldsCommon::F3Val
    class F3 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            demo1::message::EnumsFieldsCommon::F3Val,
            comms::option::def::DefaultNumValue<66051L>,
            comms::option::def::FixedLength<3U>,
            comms::option::def::ValidNumValue<66051L>,
            comms::option::def::ValidNumValue<263430L>
        >
    {
        using Base = 
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                demo1::message::EnumsFieldsCommon::F3Val,
                comms::option::def::DefaultNumValue<66051L>,
                comms::option::def::FixedLength<3U>,
                comms::option::def::ValidNumValue<66051L>,
                comms::option::def::ValidNumValue<263430L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::EnumsFieldsCommon::F3Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return demo1::message::EnumsFieldsCommon::F3Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief Definition of <b>"F4"</b> field.
    /// @details
    ///     Enum with variable length
    /// @see @ref demo1::message::EnumsFieldsCommon::F4Val
    class F4 : public
        comms::field::EnumValue<
            demo1::field::FieldBase<>,
            demo1::message::EnumsFieldsCommon::F4Val,
            comms::option::def::VarLength<1U, 2U>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<128>
        >
    {
        using Base = 
            comms::field::EnumValue<
                demo1::field::FieldBase<>,
                demo1::message::EnumsFieldsCommon::F4Val,
                comms::option::def::VarLength<1U, 2U>,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::ValidNumValue<128>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;
    
        /// @brief Name of the field.
        static const char* name()
        {
            return demo1::message::EnumsFieldsCommon::F4Common::name();
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            return demo1::message::EnumsFieldsCommon::F4Common::valueName(val);
        }
        
        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::value());
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3,
        F4
    >;
};

/// @brief Definition of <b>"Enums"</b> message class.
/// @details
///     See @ref EnumsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Enums.h"
template <typename TMsgBase, typename TOpt = demo1::options::DefaultOptions>
class Enums : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Enums,
        comms::option::def::StaticNumIdImpl<demo1::MsgId_Enums>,
        comms::option::def::FieldsImpl<typename EnumsFields<TOpt>::All>,
        comms::option::def::MsgType<Enums<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Enums,
            comms::option::def::StaticNumIdImpl<demo1::MsgId_Enums>,
            comms::option::def::FieldsImpl<typename EnumsFields<TOpt>::All>,
            comms::option::def::MsgType<Enums<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_f1 type and @b field_f1() access fuction
    ///         for @ref EnumsFields::F1 field.
    ///     @li @b Field_f2 type and @b field_f2() access fuction
    ///         for @ref EnumsFields::F2 field.
    ///     @li @b Field_f3 type and @b field_f3() access fuction
    ///         for @ref EnumsFields::F3 field.
    ///     @li @b Field_f4 type and @b field_f4() access fuction
    ///         for @ref EnumsFields::F4 field.
    COMMS_MSG_FIELDS_NAMES(
        f1,
        f2,
        f3,
        f4
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 7U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return demo1::message::EnumsCommon::name();
    }
    
    
};

} // namespace message

} // namespace demo1


