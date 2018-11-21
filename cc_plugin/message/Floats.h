#pragma once

#include <memory>
#include <QtCore/QVariantList>
#include "cc_plugin/Message.h"

namespace demo1
{

namespace cc_plugin
{

namespace message
{

class FloatsImpl;
class Floats : public demo1::cc_plugin::Message
{
public:
    Floats();
    Floats(const Floats&) = delete;
    Floats(Floats&&) = delete;
    virtual ~Floats();
    Floats& operator=(const Floats& other);
    Floats& operator=(Floats&&);

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(comms_champion::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const comms_champion::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<FloatsImpl> m_pImpl;
};

} // namespace message

} // namespace cc_plugin

} // namespace demo1



