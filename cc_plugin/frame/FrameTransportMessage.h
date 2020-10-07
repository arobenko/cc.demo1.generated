// Generated by commsdsl2comms v3.5.2

#pragma once

#include <tuple>
#include <QtCore/QVariantList>
#include "comms_champion/TransportMessageBase.h"
#include "demo1/frame/Frame.h"
#include "cc_plugin/Message.h"

namespace demo1
{

namespace cc_plugin
{

namespace frame
{

struct FrameTransportMessageFields
{
    using All =
        std::tuple<
            demo1::frame::FrameLayers<>::SyncMembers::Sync,
            demo1::frame::FrameLayers<>::SizeMembers::Size,
            demo1::field::MsgId<>,
            demo1::frame::FrameLayers<>::Data::Field,
            demo1::frame::FrameLayers<>::ChecksumMembers::Checksum
        >;
};

class FrameTransportMessage : public
    comms_champion::TransportMessageBase<
        demo1::cc_plugin::Message,
        FrameTransportMessageFields::All
    >
{
protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
};

} // namespace frame

} // namespace cc_plugin

} // namespace demo1


