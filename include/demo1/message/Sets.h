/// @file
/// @brief Contains definition of <b>"Sets"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "demo1/DefaultOptions.h"
#include "demo1/MsgId.h"
#include "demo1/field/FieldBase.h"

namespace demo1
{

namespace message
{

/// @brief Fields of @ref Sets.
/// @tparam TOpt Extra options
/// @see @ref Sets
/// @headerfile "demo1/message/Sets.h"
template <typename TOpt = demo1::DefaultOptions>
struct SetsFields
{
    /// @brief Definition of <b>"F1"</b> field.
    /// @details
    ///     Sequential 1 byte set
    class F1 : public
        comms::field::BitmaskValue<
            demo1::field::FieldBase<>,
            comms::option::FixedLength<1U>,
            comms::option::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::FixedLength<1U>,
                comms::option::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_Bit0, @b getBitValue_Bit0() and @b setBitValue_Bit0().
        ///      @li @b BitIdx_Bit1, @b getBitValue_Bit1() and @b setBitValue_Bit1().
        ///      @li @b BitIdx_Bit2, @b getBitValue_Bit2() and @b setBitValue_Bit2().
        COMMS_BITMASK_BITS_SEQ(
            Bit0,
            Bit1,
            Bit2
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "F1";
        }
        
    };
    
    /// @brief Definition of <b>"F2"</b> field.
    /// @details
    ///     Non Sequential 2 bytes set
    class F2 : public
        comms::field::BitmaskValue<
            demo1::field::FieldBase<>,
            comms::option::FixedLength<2U>,
            comms::option::DefaultNumValue<0x8000U>,
            comms::option::BitmaskReservedBits<0x7FFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::FixedLength<2U>,
                comms::option::DefaultNumValue<0x8000U>,
                comms::option::BitmaskReservedBits<0x7FFEU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_Bit0.
        ///      @li @b BitIdx_Bit15.
        COMMS_BITMASK_BITS(
            Bit0=0,
            Bit15=15
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_Bit0() and @b setBitValue_Bit0().
        ///      @li @b getBitValue_Bit15() and @b setBitValue_Bit15().
        COMMS_BITMASK_BITS_ACCESS(
            Bit0,
            Bit15
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "F2";
        }
        
    };
    
    /// @brief Definition of <b>"F3"</b> field.
    /// @details
    ///     Non standard length (3 bytes) set
    class F3 : public
        comms::field::BitmaskValue<
            demo1::field::FieldBase<>,
            comms::option::FixedLength<3U>,
            comms::option::BitmaskReservedBits<0xFFFFFAUL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                demo1::field::FieldBase<>,
                comms::option::FixedLength<3U>,
                comms::option::BitmaskReservedBits<0xFFFFFAUL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_Bit0.
        ///      @li @b BitIdx_Bit2.
        COMMS_BITMASK_BITS(
            Bit0=0,
            Bit2=2
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_Bit0() and @b setBitValue_Bit0().
        ///      @li @b getBitValue_Bit2() and @b setBitValue_Bit2().
        COMMS_BITMASK_BITS_ACCESS(
            Bit0,
            Bit2
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "F3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        F1,
        F2,
        F3
    >;
};

/// @brief Definition of <b>"Sets"</b> message class.
/// @details
///     See @ref SetsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "demo1/message/Sets.h"
template <typename TMsgBase, typename TOpt = demo1::DefaultOptions>
class Sets : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Sets,
        comms::option::StaticNumIdImpl<demo1::MsgId_Sets>,
        comms::option::FieldsImpl<typename SetsFields<TOpt>::All>,
        comms::option::MsgType<Sets<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Sets,
            comms::option::StaticNumIdImpl<demo1::MsgId_Sets>,
            comms::option::FieldsImpl<typename SetsFields<TOpt>::All>,
            comms::option::MsgType<Sets<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_f1() for @ref SetsFields::F1 field.
    ///     @li @b field_f2() for @ref SetsFields::F2 field.
    ///     @li @b field_f3() for @ref SetsFields::F3 field.
    COMMS_MSG_FIELDS_ACCESS(
        f1,
        f2,
        f3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "Sets";
    }
    
    
};

} // namespace message

} // namespace demo1


