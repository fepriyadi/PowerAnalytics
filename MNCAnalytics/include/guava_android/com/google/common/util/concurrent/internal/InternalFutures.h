//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/internal/InternalFutures.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentInternalInternalFutures")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentInternalInternalFutures
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentInternalInternalFutures 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentInternalInternalFutures 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentInternalInternalFutures

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentInternalInternalFutures_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentInternalInternalFutures || defined(INCLUDE_ComGoogleCommonUtilConcurrentInternalInternalFutures))
#define ComGoogleCommonUtilConcurrentInternalInternalFutures_

@class ComGoogleCommonUtilConcurrentInternalInternalFutureFailureAccess;
@class JavaLangThrowable;

/*!
 @brief Static utilities for <code>InternalFutureFailureAccess</code>.Most users will never need to use this
  class.
 <p>This class is GWT-compatible.
 @since <code>com.google.guava:failureaccess:1.0</code>, which was added as a dependency of Guava in
      Guava 27.0
 */
@interface ComGoogleCommonUtilConcurrentInternalInternalFutures : NSObject

#pragma mark Public

/*!
 @brief Usually returns <code>null</code> but, if the given <code>Future</code> has failed, may <i>optionally</i>
  return the cause of the failure."
 Failure" means specifically "completed with an exception"; it
  does not include "was cancelled." To be explicit: If this method returns a non-null value,
  then: 
 <ul>
    <li><code>isDone()</code> must return <code>true</code>
    <li><code>isCancelled()</code> must return <code>false</code>
    <li><code>get()</code> must not block, and it must throw an <code>ExecutionException</code> with the
        return value of this method as its cause 
 </ul>
 */
+ (JavaLangThrowable *)tryInternalFastPathGetFailureWithComGoogleCommonUtilConcurrentInternalInternalFutureFailureAccess:(ComGoogleCommonUtilConcurrentInternalInternalFutureFailureAccess *)future;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentInternalInternalFutures)

FOUNDATION_EXPORT JavaLangThrowable *ComGoogleCommonUtilConcurrentInternalInternalFutures_tryInternalFastPathGetFailureWithComGoogleCommonUtilConcurrentInternalInternalFutureFailureAccess_(ComGoogleCommonUtilConcurrentInternalInternalFutureFailureAccess *future);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentInternalInternalFutures)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentInternalInternalFutures")
