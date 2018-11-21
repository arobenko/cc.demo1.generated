#include "Ack.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Ack.h"
#include "cc_plugin/field/MsgId.h"

namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = demo1::message::AckFields<>::MsgId;
    return cc_plugin::field::createProps_msgId(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    return props;
}

} // namespace

class AckImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Ack<demo1::cc_plugin::Message>,
        AckImpl
    >
{
public:
    AckImpl() = default;
    AckImpl(const AckImpl&) = delete;
    AckImpl(AckImpl&&) = delete;
    virtual ~AckImpl() = default;
    AckImpl& operator=(const AckImpl&) = default;
    AckImpl& operator=(AckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Ack::Ack() : m_pImpl(new AckImpl) {}
Ack::~Ack() = default;

Ack& Ack::operator=(const Ack& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Ack& Ack::operator=(Ack&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Ack::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Ack::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Ack::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Ack::resetImpl()
{
    m_pImpl->reset();
}

bool Ack::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Ack*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Ack::MsgIdParamType Ack::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Ack::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Ack::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Ack::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Ack::lengthImpl() const
{
    return m_pImpl->length();
}

bool Ack::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


