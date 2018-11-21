#include "Enums.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Enums.h"
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
    using Field = demo1::message::EnumsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("V0", 0)
            .add("V1", 1)
            .add("V2", 2)
            .asMap();
    
}

static QVariantMap createProps_f2()
{
    using Field = demo1::message::EnumsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("V1", -1)
            .add("V2", 5)
            .add("V3", 6)
            .add("V4", 7)
            .asMap();
    
}

static QVariantMap createProps_f3()
{
    using Field = demo1::message::EnumsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("V1", 66051L)
            .add("V2", 263430L)
            .asMap();
    
}

static QVariantMap createProps_f4()
{
    using Field = demo1::message::EnumsFields<>::F4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("V1", 0)
            .add("V2", 128)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    props.append(createProps_f4());
    return props;
}

} // namespace

class EnumsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Enums<demo1::cc_plugin::Message>,
        EnumsImpl
    >
{
public:
    EnumsImpl() = default;
    EnumsImpl(const EnumsImpl&) = delete;
    EnumsImpl(EnumsImpl&&) = delete;
    virtual ~EnumsImpl() = default;
    EnumsImpl& operator=(const EnumsImpl&) = default;
    EnumsImpl& operator=(EnumsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Enums::Enums() : m_pImpl(new EnumsImpl) {}
Enums::~Enums() = default;

Enums& Enums::operator=(const Enums& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Enums& Enums::operator=(Enums&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Enums::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Enums::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Enums::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Enums::resetImpl()
{
    m_pImpl->reset();
}

bool Enums::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Enums*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Enums::MsgIdParamType Enums::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Enums::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Enums::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Enums::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Enums::lengthImpl() const
{
    return m_pImpl->length();
}

bool Enums::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


