#include "Strings.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Strings.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_f4Len()
{
    using Field = demo1::message::StringsFields<>::F4Len;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f1()
{
    using Field = demo1::message::StringsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f2()
{
    using Field = demo1::message::StringsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f3()
{
    using Field = demo1::message::StringsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f4()
{
    using Field = demo1::message::StringsFields<>::F4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f5()
{
    using Field = demo1::message::StringsFields<>::F5;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f4Len());
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    props.append(createProps_f4());
    props.append(createProps_f5());
    return props;
}

} // namespace

class StringsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Strings<demo1::cc_plugin::Message>,
        StringsImpl
    >
{
public:
    StringsImpl() = default;
    StringsImpl(const StringsImpl&) = delete;
    StringsImpl(StringsImpl&&) = delete;
    virtual ~StringsImpl() = default;
    StringsImpl& operator=(const StringsImpl&) = default;
    StringsImpl& operator=(StringsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Strings::Strings() : m_pImpl(new StringsImpl) {}
Strings::~Strings() = default;

Strings& Strings::operator=(const Strings& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Strings& Strings::operator=(Strings&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Strings::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Strings::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Strings::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Strings::resetImpl()
{
    m_pImpl->reset();
}

bool Strings::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Strings*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Strings::MsgIdParamType Strings::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Strings::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Strings::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Strings::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Strings::lengthImpl() const
{
    return m_pImpl->length();
}

bool Strings::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


