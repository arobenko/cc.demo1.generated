/// @file
/// @brief Contains definition of all messages bundle.

#pragma once

#include <tuple>
#include "demo1/message/Ack.h"
#include "demo1/message/Bitfields.h"
#include "demo1/message/Datas.h"
#include "demo1/message/Enums.h"
#include "demo1/message/Floats.h"
#include "demo1/message/Lists.h"
#include "demo1/message/Optionals.h"
#include "demo1/message/ScaledInts.h"
#include "demo1/message/Sets.h"
#include "demo1/message/SimpleInts.h"
#include "demo1/message/Strings.h"
#include "demo1/message/Variants.h"
#include "demo1/options/DefaultOptions.h"

namespace demo1
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = demo1::options::DefaultOptions>
using AllMessages =
    std::tuple<
        demo1::message::Ack<TBase, TOpt>,
        demo1::message::SimpleInts<TBase, TOpt>,
        demo1::message::ScaledInts<TBase, TOpt>,
        demo1::message::Floats<TBase, TOpt>,
        demo1::message::Enums<TBase, TOpt>,
        demo1::message::Sets<TBase, TOpt>,
        demo1::message::Bitfields<TBase, TOpt>,
        demo1::message::Strings<TBase, TOpt>,
        demo1::message::Datas<TBase, TOpt>,
        demo1::message::Lists<TBase, TOpt>,
        demo1::message::Optionals<TBase, TOpt>,
        demo1::message::Variants<TBase, TOpt>
    >;

} // namespace input

} // namespace demo1

