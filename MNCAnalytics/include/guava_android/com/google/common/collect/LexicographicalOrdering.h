//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/LexicographicalOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectLexicographicalOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectLexicographicalOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectLexicographicalOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectLexicographicalOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectLexicographicalOrdering

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectLexicographicalOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectLexicographicalOrdering || defined(INCLUDE_ComGoogleCommonCollectLexicographicalOrdering))
#define ComGoogleCommonCollectLexicographicalOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

/*!
 @brief An ordering which sorts iterables by comparing corresponding elements pairwise.
 */
@interface ComGoogleCommonCollectLexicographicalOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  id<JavaUtilComparator> elementOrder_;
}

#pragma mark Public

- (jint)compareWithId:(id<JavaLangIterable> __nonnull)leftIterable
               withId:(id<JavaLangIterable> __nonnull)rightIterable;

- (jboolean)isEqual:(id __nullable)object;

- (NSUInteger)hash;

- (id<JavaLangIterable>)maxWithId:(id<JavaLangIterable> __nonnull)arg0
                           withId:(id<JavaLangIterable> __nonnull)arg1;

- (id<JavaLangIterable>)maxWithId:(id<JavaLangIterable> __nonnull)arg0
                           withId:(id<JavaLangIterable> __nonnull)arg1
                           withId:(id<JavaLangIterable> __nonnull)arg2
                withNSObjectArray:(IOSObjectArray * __nonnull)arg3;

- (id<JavaLangIterable>)maxWithJavaLangIterable:(id<JavaLangIterable> __nonnull)arg0;

- (id<JavaLangIterable>)maxWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)arg0;

- (id<JavaLangIterable>)minWithId:(id<JavaLangIterable> __nonnull)arg0
                           withId:(id<JavaLangIterable> __nonnull)arg1;

- (id<JavaLangIterable>)minWithId:(id<JavaLangIterable> __nonnull)arg0
                           withId:(id<JavaLangIterable> __nonnull)arg1
                           withId:(id<JavaLangIterable> __nonnull)arg2
                withNSObjectArray:(IOSObjectArray * __nonnull)arg3;

- (id<JavaLangIterable>)minWithJavaLangIterable:(id<JavaLangIterable> __nonnull)arg0;

- (id<JavaLangIterable>)minWithJavaUtilIterator:(id<JavaUtilIterator> __nonnull)arg0;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)elementOrder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLexicographicalOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectLexicographicalOrdering, elementOrder_, id<JavaUtilComparator>)

FOUNDATION_EXPORT void ComGoogleCommonCollectLexicographicalOrdering_initPackagePrivateWithJavaUtilComparator_(ComGoogleCommonCollectLexicographicalOrdering *self, id<JavaUtilComparator> elementOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectLexicographicalOrdering *new_ComGoogleCommonCollectLexicographicalOrdering_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> elementOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectLexicographicalOrdering *create_ComGoogleCommonCollectLexicographicalOrdering_initPackagePrivateWithJavaUtilComparator_(id<JavaUtilComparator> elementOrder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLexicographicalOrdering)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectLexicographicalOrdering")
