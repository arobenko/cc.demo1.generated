#pragma once

#include "comms_champion/MessageBase.h"
#include "demo1/Message.h"

namespace demo1
{

namespace cc_plugin
{

using Message =
    comms_champion::MessageBase<
        demo1::Message
    >;

} // namespace cc_plugin

} // namespace demo1



