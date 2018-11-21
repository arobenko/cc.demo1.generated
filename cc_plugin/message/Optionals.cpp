#include "Optionals.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Optionals.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_flags()
{
    using Field = demo1::message::OptionalsFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "F2Exists")
            .add(1U, "F3Missing")
            .asMap();
    
}

struct F2Members
{
    static QVariantMap createProps_f2()
    {
        using Field = demo1::message::OptionalsFields<>::F2Members::F2;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f2()
{
    using Field = demo1::message::OptionalsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(F2Members::createProps_f2())
            .asMap();
    
}

struct F3Members
{
    static QVariantMap createProps_f3()
    {
        using Field = demo1::message::OptionalsFields<>::F3Members::F3;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_f3()
{
    using Field = demo1::message::OptionalsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(F3Members::createProps_f3())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_f2());
    props.append(createProps_f3());
    return props;
}

} // namespace

class OptionalsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Optionals<demo1::cc_plugin::Message>,
        OptionalsImpl
    >
{
public:
    OptionalsImpl() = default;
    OptionalsImpl(const OptionalsImpl&) = delete;
    OptionalsImpl(OptionalsImpl&&) = delete;
    virtual ~OptionalsImpl() = default;
    OptionalsImpl& operator=(const OptionalsImpl&) = default;
    OptionalsImpl& operator=(OptionalsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Optionals::Optionals() : m_pImpl(new OptionalsImpl) {}
Optionals::~Optionals() = default;

Optionals& Optionals::operator=(const Optionals& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Optionals& Optionals::operator=(Optionals&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Optionals::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Optionals::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Optionals::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Optionals::resetImpl()
{
    m_pImpl->reset();
}

bool Optionals::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Optionals*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Optionals::MsgIdParamType Optionals::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Optionals::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Optionals::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Optionals::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Optionals::lengthImpl() const
{
    return m_pImpl->length();
}

bool Optionals::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


