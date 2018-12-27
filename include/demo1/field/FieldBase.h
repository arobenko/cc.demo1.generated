/// @file
/// @brief Contains definition of base class of all the fields.

#pragma once

#include "comms/Field.h"
#include "comms/options.h"
#include "demo1/Version.h"

namespace demo1
{

namespace field
{

/// @brief Common base class for all the fields.
/// @tparam TOpt Extra options.
template <typename... TOpt>
using FieldBase =
    comms::Field<
        TOpt...,
        comms::option::BigEndian
    >;

} // namespace field

} // namespace demo1


