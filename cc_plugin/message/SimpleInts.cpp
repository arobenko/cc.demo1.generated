#include "SimpleInts.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "demo1/message/SimpleInts.h"
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
    using Field = demo1::message::SimpleIntsFields<>::F1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f2()
{
    using Field = demo1::message::SimpleIntsFields<>::F2;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f3()
{
    using Field = demo1::message::SimpleIntsFields<>::F3;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f4()
{
    using Field = demo1::message::SimpleIntsFields<>::F4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f5()
{
    using Field = demo1::message::SimpleIntsFields<>::F5;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f6()
{
    using Field = demo1::message::SimpleIntsFields<>::F6;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f7()
{
    using Field = demo1::message::SimpleIntsFields<>::F7;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f8()
{
    using Field = demo1::message::SimpleIntsFields<>::F8;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f9()
{
    using Field = demo1::message::SimpleIntsFields<>::F9;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_f10()
{
    using Field = demo1::message::SimpleIntsFields<>::F10;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_f1());
    props.append(createProps_f2());
    props.append(createProps_f3());
    props.append(createProps_f4());
    props.append(createProps_f5());
    props.append(createProps_f6());
    props.append(createProps_f7());
    props.append(createProps_f8());
    props.append(createProps_f9());
    props.append(createProps_f10());
    return props;
}

} // namespace

class SimpleIntsImpl : public
    comms_champion::ProtocolMessageBase<
        demo1::message::SimpleInts<demo1::cc_plugin::Message>,
        SimpleIntsImpl
    >
{
public:
    SimpleIntsImpl() = default;
    SimpleIntsImpl(const SimpleIntsImpl&) = delete;
    SimpleIntsImpl(SimpleIntsImpl&&) = delete;
    virtual ~SimpleIntsImpl() = default;
    SimpleIntsImpl& operator=(const SimpleIntsImpl&) = default;
    SimpleIntsImpl& operator=(SimpleIntsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

SimpleInts::SimpleInts() : m_pImpl(new SimpleIntsImpl) {}
SimpleInts::~SimpleInts() = default;

SimpleInts& SimpleInts::operator=(const SimpleInts& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SimpleInts& SimpleInts::operator=(SimpleInts&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SimpleInts::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& SimpleInts::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void SimpleInts::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void SimpleInts::resetImpl()
{
    m_pImpl->reset();
}

bool SimpleInts::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const SimpleInts*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

SimpleInts::MsgIdParamType SimpleInts::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus SimpleInts::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus SimpleInts::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool SimpleInts::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t SimpleInts::lengthImpl() const
{
    return m_pImpl->length();
}

bool SimpleInts::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace demo1


