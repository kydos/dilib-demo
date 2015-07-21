#include "statexSplDcps.h"
#include "statex_DCPS.hpp"

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>
#include <org/opensplice/core/EntityRegistry.hpp>

c_bool
__dilib_demo_DevicePosition__copyIn(
    c_base base,
    const class ::dilib::demo::DevicePosition *from,
    struct _dilib_demo_DevicePosition *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->did = c_stringNew(base, from->did_.c_str());
#else
            to->did = c_stringNew(base, from->did_.c_str());
#endif
    to->lat = (c_float)from->lat_;
    to->lon = (c_float)from->lon_;
    to->lev = (c_float)from->lev_;
    return result;
}

INSTANTIATE_TYPED_REGISTRIES(::dilib::demo::DevicePosition)

void
__dilib_demo_DevicePosition__copyOut(
    const void *_from,
    void *_to)
{
    const struct _dilib_demo_DevicePosition *from = (const struct _dilib_demo_DevicePosition *)_from;
    class ::dilib::demo::DevicePosition *to = (class ::dilib::demo::DevicePosition *)_to;
    to->did_ = (from->did ? from->did : "");
    to->lat_ = (::DDS::Float)from->lat;
    to->lon_ = (::DDS::Float)from->lon;
    to->lev_ = (::DDS::Float)from->lev;
}

