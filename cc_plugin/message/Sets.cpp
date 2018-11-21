#include "Sets.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Sets.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_f1()
{
    using Field = demo1::message::SetsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "Bit0")
            .add(1U, "Bit1")
            .add(2U, "Bit2")
            .asMap();
    
}

static QVariantMap createProps_f2()
{
    using Field = demo1::message::SetsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "Bit0")
            .add(15U, "Bit15")
            .asMap();
    
}

static QVariantMap createProps_f3()
{
    using Field = demo1::message::SetsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "Bit0")
            .add(2U, "Bit2")
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    return props;
}

} // namespace

class SetsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Sets<demo1::cc_plugin::Message>,
        SetsImpl
    >
{
public:
    SetsImpl() = default;
    SetsImpl(const SetsImpl&) = delete;
    SetsImpl(SetsImpl&&) = delete;
    virtual ~SetsImpl() = default;
    SetsImpl& operator=(const SetsImpl&) = default;
    SetsImpl& operator=(SetsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Sets::Sets() : m_pImpl(new SetsImpl) {}
Sets::~Sets() = default;

Sets& Sets::operator=(const Sets& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Sets& Sets::operator=(Sets&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Sets::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Sets::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Sets::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Sets::resetImpl()
{
    m_pImpl->reset();
}

bool Sets::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Sets*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Sets::MsgIdParamType Sets::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Sets::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Sets::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Sets::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Sets::lengthImpl() const
{
    return m_pImpl->length();
}

bool Sets::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


