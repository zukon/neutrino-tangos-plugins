#include <config.h>

#if HAVE_COOL_HARDWARE
#ifndef RC_DEVICE
#define RC_DEVICE "/dev/input/nevis_ir"
#endif
#ifndef RC_DEVICE_FALLBACK
#define RC_DEVICE_FALLBACK "/dev/input/event0"
#endif

#elif BOXMODEL_H7 || BOXMODEL_H9COMBO || BOXMODEL_H9
#ifndef RC_DEVICE
#define RC_DEVICE "/dev/input/event2"
#endif
#ifndef RC_DEVICE_FALLBACK
#define RC_DEVICE_FALLBACK "/dev/input/event1"
#endif

#elif BOXMODEL_OSMIO4K
#ifndef RC_DEVICE
#define RC_DEVICE "/dev/input/event0"
#endif
#ifndef RC_DEVICE_FALLBACK
#define RC_DEVICE_FALLBACK "/dev/input/event1"
#endif

#elif BOXMODEL_OSMIO4KPLUS
#ifndef RC_DEVICE
#define RC_DEVICE "/dev/input/event0"
#endif
#ifndef RC_DEVICE_FALLBACK
#define RC_DEVICE_FALLBACK "/dev/input/event1"
#endif

#else
#ifndef RC_DEVICE
#define RC_DEVICE "/dev/input/event1"
#endif
#ifndef RC_DEVICE_FALLBACK
#define RC_DEVICE_FALLBACK "/dev/input/event0"
#endif

#endif
