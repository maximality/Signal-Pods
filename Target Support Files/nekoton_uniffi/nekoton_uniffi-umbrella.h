#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "nekotonFFI.h"

FOUNDATION_EXPORT double nekoton_uniffiVersionNumber;
FOUNDATION_EXPORT const unsigned char nekoton_uniffiVersionString[];
