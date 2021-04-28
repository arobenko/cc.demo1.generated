// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"Lon"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "demo1/field/FieldBase.h"
#include "demo1/field/LonCommon.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace field
{

/// @brief Definition of <b>"Lon"</b> field.
/// @details
///     Longitude in 1/10^7 of the degrees
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = demo1::options::DefaultOptions, typename... TExtraOpts>
struct Lon : public
    comms::field::IntValue<
        demo1::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::ScalingRatio<1, 10000000L>,
        comms::option::def::UnitsDegrees
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return demo1::field::LonCommon::name();
    }
    
};

} // namespace field

} // namespace demo1


