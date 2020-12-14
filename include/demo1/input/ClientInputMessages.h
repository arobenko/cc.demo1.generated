// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of all client input messages bundle.

#pragma once

#include <tuple>
#include "demo1/message/Ack.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = demo1::options::DefaultOptions>
using ClientInputMessages =
    std::tuple<
        demo1::message::Ack<TBase, TOpt>
    >;

} // namespace input

} // namespace demo1


