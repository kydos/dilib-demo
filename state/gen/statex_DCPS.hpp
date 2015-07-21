#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif
#ifndef CCPP_STATEX_H
#define CCPP_STATEX_H

#include "statex.h"
#undef OS_API
#include "statexDcps.h"
#undef OS_API

#include <orb_abstraction.h>
#include "statexDcps_impl.h"

#endif /* CCPP_STATEX_H */

#ifdef STATEX_DCPS_TYPESUPPORT_DEFINED
#ifndef STATEX_DCPS_HPP_
#define STATEX_DCPS_HPP_
#include "dds/dds.hpp"

REGISTER_TOPIC_TRAITS(::dilib::demo::DevicePosition)

#endif
#endif
