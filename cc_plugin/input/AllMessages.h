#pragma once

#include <tuple>
#include "cc_plugin/message/Ack.h"
#include "cc_plugin/message/Bitfields.h"
#include "cc_plugin/message/Datas.h"
#include "cc_plugin/message/Enums.h"
#include "cc_plugin/message/Floats.h"
#include "cc_plugin/message/Lists.h"
#include "cc_plugin/message/Optionals.h"
#include "cc_plugin/message/ScaledInts.h"
#include "cc_plugin/message/Sets.h"
#include "cc_plugin/message/SimpleInts.h"
#include "cc_plugin/message/Strings.h"
#include "cc_plugin/message/Variants.h"

namespace demo1
{

namespace cc_plugin
{

namespace input
{

using AllMessages =
    std::tuple<
        demo1::cc_plugin::message::Ack,
        demo1::cc_plugin::message::SimpleInts,
        demo1::cc_plugin::message::ScaledInts,
        demo1::cc_plugin::message::Floats,
        demo1::cc_plugin::message::Enums,
        demo1::cc_plugin::message::Sets,
        demo1::cc_plugin::message::Bitfields,
        demo1::cc_plugin::message::Strings,
        demo1::cc_plugin::message::Datas,
        demo1::cc_plugin::message::Lists,
        demo1::cc_plugin::message::Optionals,
        demo1::cc_plugin::message::Variants
    >;

} // namespace input

} // namespace cc_plugin

} // namespace demo1

