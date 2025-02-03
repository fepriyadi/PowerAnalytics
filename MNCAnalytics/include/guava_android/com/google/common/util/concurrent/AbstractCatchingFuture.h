//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/AbstractCatchingFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCatchingFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCatchingFuture

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAbstractCatchingFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractCatchingFuture))
#define ComGoogleCommonUtilConcurrentAbstractCatchingFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentFluentFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture 1
#include "com/google/common/util/concurrent/FluentFuture.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class IOSClass;
@class JavaLangThrowable;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonUtilConcurrentAsyncFunction;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol JavaUtilConcurrentExecutor;

/*!
 @brief Implementations of <code>Futures.catching*</code>.
 */
@interface ComGoogleCommonUtilConcurrentAbstractCatchingFuture : ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture < JavaLangRunnable > {
 @public
  id<ComGoogleCommonUtilConcurrentListenableFuture> inputFuture_;
  IOSClass *exceptionType_;
  id fallback_;
}

#pragma mark Public

- (void)run;

#pragma mark Protected

- (void)afterDone;

- (NSString *)pendingToString;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture> __nonnull)inputFuture
                                                                                 withIOSClass:(IOSClass * __nonnull)exceptionType
                                                                                       withId:(id __nonnull)fallback;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture> __nonnull)input
                                                                                                withIOSClass:(IOSClass * __nonnull)exceptionType
                                                              withComGoogleCommonUtilConcurrentAsyncFunction:(id<ComGoogleCommonUtilConcurrentAsyncFunction> __nonnull)fallback
                                                                              withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

+ (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture> __nonnull)input
                                                                                                withIOSClass:(IOSClass * __nonnull)exceptionType
                                                                             withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)fallback
                                                                              withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor> __nonnull)executor;

/*!
 @brief Template method for subtypes to actually run the fallback.
 */
- (id __nullable)doFallbackWithId:(id __nonnull)fallback
            withJavaLangThrowable:(JavaLangThrowable * __nonnull)throwable;

/*!
 @brief Template method for subtypes to actually set the result.
 */
- (void)setResultWithId:(id __nullable)result;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractCatchingFuture)

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, inputFuture_, id<ComGoogleCommonUtilConcurrentListenableFuture>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, exceptionType_, IOSClass *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture, fallback_, id)

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentAbstractCatchingFuture_createWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withComGoogleCommonBaseFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, IOSClass *exceptionType, id<ComGoogleCommonBaseFunction> fallback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT id<ComGoogleCommonUtilConcurrentListenableFuture> ComGoogleCommonUtilConcurrentAbstractCatchingFuture_createWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withComGoogleCommonUtilConcurrentAsyncFunction_withJavaUtilConcurrentExecutor_(id<ComGoogleCommonUtilConcurrentListenableFuture> input, IOSClass *exceptionType, id<ComGoogleCommonUtilConcurrentAsyncFunction> fallback, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractCatchingFuture_initPackagePrivateWithComGoogleCommonUtilConcurrentListenableFuture_withIOSClass_withId_(ComGoogleCommonUtilConcurrentAbstractCatchingFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> inputFuture, IOSClass *exceptionType, id fallback);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractCatchingFuture)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCatchingFuture")
