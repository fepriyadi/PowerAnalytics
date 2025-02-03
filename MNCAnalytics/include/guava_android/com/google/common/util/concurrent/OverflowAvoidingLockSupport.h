//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/OverflowAvoidingLockSupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport || defined(INCLUDE_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport))
#define ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport_

/*!
 @brief Works around an android bug, where parking for more than INT_MAX seconds can produce an abort
  signal on 32 bit devices running Android Q.
 */
@interface ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport : NSObject
@property (readonly, class) jlong MAX_NANOSECONDS_THRESHOLD NS_SWIFT_NAME(MAX_NANOSECONDS_THRESHOLD);

#pragma mark Package-Private

+ (void)parkNanosWithId:(id __nullable)blocker
               withLong:(jlong)nanos;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport)

inline jlong ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport_get_MAX_NANOSECONDS_THRESHOLD(void);
#define ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport_MAX_NANOSECONDS_THRESHOLD 2147483647999999999LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport, MAX_NANOSECONDS_THRESHOLD, jlong)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport_parkNanosWithId_withLong_(id blocker, jlong nanos);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentOverflowAvoidingLockSupport")
