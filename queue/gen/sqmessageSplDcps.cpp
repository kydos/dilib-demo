#include "sqmessageSplDcps.h"
#include "sqmessage_DCPS.hpp"

#include <v_kernel.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>
#include <org/opensplice/core/EntityRegistry.hpp>

c_bool
__dilib_demo_Message__copyIn(
    c_base base,
    const class ::dilib::demo::Message *from,
    struct _dilib_demo_Message *to)
{
    c_bool result = OS_C_TRUE;
    (void) base;

#ifdef OSPL_BOUNDS_CHECK
        to->key = c_stringNew(base, from->key_.c_str());
#else
            to->key = c_stringNew(base, from->key_.c_str());
#endif
#ifdef OSPL_BOUNDS_CHECK
        to->body = c_stringNew(base, from->body_.c_str());
#else
            to->body = c_stringNew(base, from->body_.c_str());
#endif
    return result;
}

INSTANTIATE_TYPED_REGISTRIES(::dilib::demo::Message)

void
__dilib_demo_Message__copyOut(
    const void *_from,
    void *_to)
{
    const struct _dilib_demo_Message *from = (const struct _dilib_demo_Message *)_from;
    class ::dilib::demo::Message *to = (class ::dilib::demo::Message *)_to;
    to->key_ = (from->key ? from->key : "");
    to->body_ = (from->body ? from->body : "");
}

