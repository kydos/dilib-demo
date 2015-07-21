#ifndef SQMESSAGESPLTYPES_H
#define SQMESSAGESPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "sqmessage_DCPS.hpp"


extern c_metaObject __sqmessage_dilib__load (c_base base);

extern c_metaObject __sqmessage_dilib_demo__load (c_base base);

extern const char *dilib_demo_Message_metaDescriptor[];
extern const c_ulong dilib_demo_Message_metaDescriptorArrLength;
extern c_metaObject __dilib_demo_Message__load (c_base base);
struct _dilib_demo_Message ;
extern  c_bool __dilib_demo_Message__copyIn(c_base base, const class dilib::demo::Message *from, struct _dilib_demo_Message *to);
extern  void __dilib_demo_Message__copyOut(const void *_from, void *_to);
struct _dilib_demo_Message {
    c_string key;
    c_string body;
};

#undef OS_API
#endif
