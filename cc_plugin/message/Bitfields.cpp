#include "Bitfields.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/Bitfields.h"
namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct F1Members
{
    static QVariantMap createProps_mem1()
    {
        using Field = demo1::message::BitfieldsFields<>::F1Members::Mem1;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_mem2()
    {
        using Field = demo1::message::BitfieldsFields<>::F1Members::Mem2;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "Bit0")
                .add(1U, "Bit1")
                .add(2U, "Bit2")
                .asMap();
        
    }
    
    static QVariantMap createProps_mem3()
    {
        using Field = demo1::message::BitfieldsFields<>::F1Members::Mem3;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("V1", 0)
                .add("V2", 3)
                .asMap();
        
    }
    
};

static QVariantMap createProps_f1()
{
    using Field = demo1::message::BitfieldsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(F1Members::createProps_mem1())
            .add(F1Members::createProps_mem2())
            .add(F1Members::createProps_mem3())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1());
    return props;
}

} // namespace

class BitfieldsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::Bitfields<demo1::cc_plugin::Message>,
        BitfieldsImpl
    >
{
public:
    BitfieldsImpl() = default;
    BitfieldsImpl(const BitfieldsImpl&) = delete;
    BitfieldsImpl(BitfieldsImpl&&) = delete;
    virtual ~BitfieldsImpl() = default;
    BitfieldsImpl& operator=(const BitfieldsImpl&) = default;
    BitfieldsImpl& operator=(BitfieldsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Bitfields::Bitfields() : m_pImpl(new BitfieldsImpl) {}
Bitfields::~Bitfields() = default;

Bitfields& Bitfields::operator=(const Bitfields& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Bitfields& Bitfields::operator=(Bitfields&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Bitfields::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Bitfields::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Bitfields::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Bitfields::resetImpl()
{
    m_pImpl->reset();
}

bool Bitfields::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Bitfields*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Bitfields::MsgIdParamType Bitfields::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Bitfields::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Bitfields::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Bitfields::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Bitfields::lengthImpl() const
{
    return m_pImpl->length();
}

bool Bitfields::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


