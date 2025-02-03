//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ImmediateFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentImmediateFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentImmediateFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListenableFuture 1
#include "com/google/common/util/concurrent/ListenableFuture.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief Implementation of <code>Futures.immediateFuture</code>.
 */
@interface ComGoogleCommonUtilConcurrentImmediateFuture : NSObject < ComGoogleCommonUtilConcurrentListenableFuture >
@property (readonly, class, strong) id<ComGoogleCommonUtilConcurrentListenableFuture> NULL_ NS_SWIFT_NAME(NULL_);

#pragma mark Public

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id)get;

- (id)getWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (jboolean)isCancelled;

- (jboolean)isDone;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithId:(id __nullable)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture)

inline id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentImmediateFuture_get_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentImmediateFuture_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentImmediateFuture, NULL, id<ComGoogleCommonUtilConcurrentListenableFuture>)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_initPackagePrivateWithId_(ComGoogleCommonUtilConcurrentImmediateFuture *self, id value);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_initPackagePrivateWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_initPackagePrivateWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@class JavaLangThrowable;

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable * __nonnull)thrown;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *self, JavaLangThrowable *thrown);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(JavaLangThrowable *thrown) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture_initWithJavaLangThrowable_(JavaLangThrowable *thrown);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateFailedFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture))
#define ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/AbstractFuture.h"

@interface ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *new_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture *create_ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentImmediateFuture_ImmediateCancelledFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentImmediateFuture")
