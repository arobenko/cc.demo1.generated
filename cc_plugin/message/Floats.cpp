#include "Floats.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Floats.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_timeout()
{
    using Field = demo1::message::FloatsFields<>::Timeout;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_distance()
{
    using Field = demo1::message::FloatsFields<>::Distance;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_timeout());
    props.append(createProps_distance());
    return props;
}

} // namespace

class FloatsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Floats<demo1::cc_plugin::Message>,
        FloatsImpl
    >
{
public:
    FloatsImpl() = default;
    FloatsImpl(const FloatsImpl&) = delete;
    FloatsImpl(FloatsImpl&&) = delete;
    virtual ~FloatsImpl() = default;
    FloatsImpl& operator=(const FloatsImpl&) = default;
    FloatsImpl& operator=(FloatsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Floats::Floats() : m_pImpl(new FloatsImpl) {}
Floats::~Floats() = default;

Floats& Floats::operator=(const Floats& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Floats& Floats::operator=(Floats&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Floats::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Floats::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Floats::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Floats::resetImpl()
{
    m_pImpl->reset();
}

bool Floats::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Floats*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Floats::MsgIdParamType Floats::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Floats::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Floats::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Floats::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Floats::lengthImpl() const
{
    return m_pImpl->length();
}

bool Floats::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


