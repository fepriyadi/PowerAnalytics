//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/AbstractSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractSetMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractSetMultimap))
#define ComGoogleCommonCollectAbstractSetMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap 1
#include "com/google/common/collect/AbstractMapBasedMultimap.h"

#define RESTRICT_ComGoogleCommonCollectSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectSetMultimap 1
#include "com/google/common/collect/SetMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Basic implementation of the <code>SetMultimap</code> interface.It's a wrapper around <code>AbstractMapBasedMultimap</code>
  that converts the returned collections into <code>Sets</code>.
 The <code>createCollection</code>
  method must return a <code>Set</code>.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectAbstractSetMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap < ComGoogleCommonCollectSetMultimap >

#pragma mark Public

/*!
 @brief <p>Though the method signature doesn't say so explicitly, the returned map has <code>Set</code>
  values.
 */
- (id<JavaUtilMap>)asMap;

/*!
 @brief <p>Because a <code>SetMultimap</code> has unique values for a given key, this method returns a 
 <code>Set</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code> interface.
 */
- (id<JavaUtilSet>)entries;

/*!
 @brief Compares the specified object to this multimap for equality.
 <p>Two <code>SetMultimap</code> instances are equal if, for each key, they contain the same values.
  Equality does not depend on the ordering of keys or values.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief <p>Because a <code>SetMultimap</code> has unique values for a given key, this method returns a 
 <code>Set</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code> interface.
 */
- (id<JavaUtilSet>)getWithId:(id __nullable)key;

/*!
 @brief Stores a key-value pair in the multimap.
 @param key key to store in the multimap
 @param value value to store in the multimap
 @return <code>true</code> if the method increased the size of the multimap, or <code>false</code> if the
      multimap already contained the key-value pair
 */
- (jboolean)putWithId:(id __nullable)key
               withId:(id __nullable)value;

/*!
 @brief <p>Because a <code>SetMultimap</code> has unique values for a given key, this method returns a 
 <code>Set</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code> interface.
 */
- (id<JavaUtilSet>)removeAllWithId:(id __nullable)key;

/*!
 @brief <p>Because a <code>SetMultimap</code> has unique values for a given key, this method returns a 
 <code>Set</code>, instead of the <code>Collection</code> specified in the <code>Multimap</code> interface.
 <p>Any duplicates in <code>values</code> will be stored in the multimap once.
 */
- (id<JavaUtilSet>)replaceValuesWithId:(id __nullable)key
                  withJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

#pragma mark Protected

/*!
 @brief Creates a new multimap that uses the provided map.
 @param map place to store the mapping from each key to its corresponding values
 */
- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)map;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

- (id<JavaUtilSet>)createUnmodifiableEmptyCollection;

- (id<JavaUtilCollection>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id __nonnull)key
                        withJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractSetMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractSetMultimap_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonCollectAbstractSetMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractSetMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractSetMultimap")
