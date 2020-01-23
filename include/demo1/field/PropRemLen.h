// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains definition of <b>"Length"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo1/field/FieldBase.h"
#include "demo1/field/PropRemLenCommon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace field
{

/// @brief Definition of <b>"Length"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo1::options::DefaultOptions, typename... TExtraOpts>
struct PropRemLen : public
    comms::field::IntValue<
        demo1::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return demo1::field::PropRemLenCommon::name();
    }
    
};

} // namespace field

} // namespace demo1


