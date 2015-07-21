#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif
#ifndef CCPP_SQMESSAGE_H
#define CCPP_SQMESSAGE_H

#include "sqmessage.h"
#undef OS_API
#include "sqmessageDcps.h"
#undef OS_API

#include <orb_abstraction.h>
#include "sqmessageDcps_impl.h"

#endif /* CCPP_SQMESSAGE_H */

#ifdef SQMESSAGE_DCPS_TYPESUPPORT_DEFINED
#ifndef SQMESSAGE_DCPS_HPP_
#define SQMESSAGE_DCPS_HPP_
#include "dds/dds.hpp"

REGISTER_TOPIC_TRAITS(::dilib::demo::Message)

#endif
#endif
