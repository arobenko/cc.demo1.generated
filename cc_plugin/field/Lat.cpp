#include "Lat.h"

#include "comms_champion/property/field.h"
#include "demo1/field/Lat.h"


namespace cc = comms_champion;

namespace demo1
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_lat(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = demo1::field::Lat<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .scaledDecimals(7U)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace demo1


