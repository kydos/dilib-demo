#ifndef STATEXSPLTYPES_H
#define STATEXSPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

#include "statex_DCPS.hpp"


extern c_metaObject __statex_dilib__load (c_base base);

extern c_metaObject __statex_dilib_demo__load (c_base base);

extern const char *dilib_demo_DevicePosition_metaDescriptor[];
extern const c_ulong dilib_demo_DevicePosition_metaDescriptorArrLength;
extern c_metaObject __dilib_demo_DevicePosition__load (c_base base);
struct _dilib_demo_DevicePosition ;
extern  c_bool __dilib_demo_DevicePosition__copyIn(c_base base, const class dilib::demo::DevicePosition *from, struct _dilib_demo_DevicePosition *to);
extern  void __dilib_demo_DevicePosition__copyOut(const void *_from, void *_to);
struct _dilib_demo_DevicePosition {
    c_string did;
    c_float lat;
    c_float lon;
    c_float lev;
};

#undef OS_API
#endif
