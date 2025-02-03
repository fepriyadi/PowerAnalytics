//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/SortedLists.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedLists")
#ifdef RESTRICT_ComGoogleCommonCollectSortedLists
#define INCLUDE_ALL_ComGoogleCommonCollectSortedLists 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedLists 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedLists

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectSortedLists_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists))
#define ComGoogleCommonCollectSortedLists_

@class ComGoogleCommonCollectSortedLists_KeyAbsentBehavior;
@class ComGoogleCommonCollectSortedLists_KeyPresentBehavior;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangComparable;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

/*!
 @brief Static methods pertaining to sorted <code>List</code> instances.
 <p>In this documentation, the terms <i>greatest</i>, <i>greater</i>, <i>least</i>, and 
 <i>lesser</i> are considered to refer to the comparator on the elements, and the terms 
 <i>first</i> and <i>last</i> are considered to refer to the elements' ordering in a list.
 @author Louis Wasserman
 */
@interface ComGoogleCommonCollectSortedLists : NSObject

#pragma mark Public

/*!
 @brief Searches the specified list for the specified object using the binary search algorithm.The
  list must be sorted into ascending order according to the specified comparator (as by the 
 <code>Collections.sort(List, Comparator)</code> method), prior to
  making this call.
 If it is not sorted, the results are undefined. 
 <p>If there are elements in the list which compare as equal to the key, the choice of <code>KeyPresentBehavior</code>
  decides which index is returned. If no elements compare as equal to the
  key, the choice of <code>KeyAbsentBehavior</code> decides which index is returned. 
 <p>This method runs in log(n) time on random-access lists, which offer near-constant-time
  access to each list element.
 @param list the list to be searched.
 @param key the value to be searched for.
 @param comparator the comparator by which the list is ordered.
 @param presentBehavior the specification for what to do if at least one element of the list      compares as equal to the key.
 @param absentBehavior the specification for what to do if no elements of the list compare as      equal to the key.
 @return the index determined by the <code>KeyPresentBehavior</code>, if the key is in the list;
      otherwise the index determined by the <code>KeyAbsentBehavior</code>.
 */
+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList> __nonnull)list
                              withId:(id __nullable)key
              withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior * __nonnull)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior * __nonnull)absentBehavior;

/*!
 @brief Searches the specified naturally ordered list for the specified object using the binary search
  algorithm.
 <p>Equivalent to <code>binarySearch(List, Function, Object, Comparator, KeyPresentBehavior,
 KeyAbsentBehavior)</code>
  using <code>Ordering.natural</code>.
 */
+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList> __nonnull)list
              withJavaLangComparable:(id<JavaLangComparable> __nonnull)e
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior * __nonnull)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior * __nonnull)absentBehavior;

/*!
 @brief Binary searches the list for the specified key, using the specified key function.
 <p>Equivalent to <code>binarySearch(List, Object, Comparator, KeyPresentBehavior,
 KeyAbsentBehavior)</code>
  using <code>Lists.transform(list,
  keyFunction)</code>
 .
 */
+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList> __nonnull)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)keyFunction
                              withId:(id __nullable)key
              withJavaUtilComparator:(id<JavaUtilComparator> __nonnull)keyComparator
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior * __nonnull)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior * __nonnull)absentBehavior;

/*!
 @brief Binary searches the list for the specified key, using the specified key function.
 <p>Equivalent to <code>binarySearch(List, Function, Object, Comparator, KeyPresentBehavior,
 KeyAbsentBehavior)</code>
  using <code>Ordering.natural</code>.
 */
+ (jint)binarySearchWithJavaUtilList:(id<JavaUtilList> __nonnull)list
     withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)keyFunction
              withJavaLangComparable:(id<JavaLangComparable> __nullable)key
withComGoogleCommonCollectSortedLists_KeyPresentBehavior:(ComGoogleCommonCollectSortedLists_KeyPresentBehavior * __nonnull)presentBehavior
withComGoogleCommonCollectSortedLists_KeyAbsentBehavior:(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior * __nonnull)absentBehavior;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedLists)

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<JavaLangComparable> e, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withJavaLangComparable_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id<JavaLangComparable> key, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withComGoogleCommonBaseFunction_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id<ComGoogleCommonBaseFunction> keyFunction, id key, id<JavaUtilComparator> keyComparator, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

FOUNDATION_EXPORT jint ComGoogleCommonCollectSortedLists_binarySearchWithJavaUtilList_withId_withJavaUtilComparator_withComGoogleCommonCollectSortedLists_KeyPresentBehavior_withComGoogleCommonCollectSortedLists_KeyAbsentBehavior_(id<JavaUtilList> list, id key, id<JavaUtilComparator> comparator, ComGoogleCommonCollectSortedLists_KeyPresentBehavior *presentBehavior, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *absentBehavior);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists)

#endif

#if !defined (ComGoogleCommonCollectSortedLists_KeyPresentBehavior_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists_KeyPresentBehavior))
#define ComGoogleCommonCollectSortedLists_KeyPresentBehavior_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum) {
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_ANY_PRESENT = 0,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_LAST_PRESENT = 1,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_FIRST_PRESENT = 2,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_FIRST_AFTER = 3,
  ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum_LAST_BEFORE = 4,
};

/*!
 @brief A specification for which index to return if the list contains at least one element that
  compares as equal to the key.
 */
@interface ComGoogleCommonCollectSortedLists_KeyPresentBehavior : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ANY_PRESENT NS_SWIFT_NAME(ANY_PRESENT);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyPresentBehavior *LAST_PRESENT NS_SWIFT_NAME(LAST_PRESENT);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyPresentBehavior *FIRST_PRESENT NS_SWIFT_NAME(FIRST_PRESENT);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyPresentBehavior *FIRST_AFTER NS_SWIFT_NAME(FIRST_AFTER);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyPresentBehavior *LAST_BEFORE NS_SWIFT_NAME(LAST_BEFORE);
#pragma mark Public

+ (ComGoogleCommonCollectSortedLists_KeyPresentBehavior *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (jint)resultIndexWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator
                                   withId:(id __nonnull)key
                         withJavaUtilList:(id<JavaUtilList> __nonnull)list
                                  withInt:(jint)foundIndex;

- (ComGoogleCommonCollectSortedLists_KeyPresentBehavior_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_values_[];

/*!
 @brief Return the index of any list element that compares as equal to the key.No guarantees are
  made as to which index is returned, if more than one element compares as equal to the key.
 */
inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_ANY_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, ANY_PRESENT)

/*!
 @brief Return the index of the last list element that compares as equal to the key.
 */
inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_LAST_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, LAST_PRESENT)

/*!
 @brief Return the index of the first list element that compares as equal to the key.
 */
inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_FIRST_PRESENT(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, FIRST_PRESENT)

/*!
 @brief Return the index of the first list element that compares as greater than the key, or <code>list.size()</code>
  if there is no such element.
 */
inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_FIRST_AFTER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, FIRST_AFTER)

/*!
 @brief Return the index of the last list element that compares as less than the key, or <code>-1</code>
  if there is no such element.
 */
inline ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_get_LAST_BEFORE(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyPresentBehavior, LAST_BEFORE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyPresentBehavior *ComGoogleCommonCollectSortedLists_KeyPresentBehavior_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyPresentBehavior)

#endif

#if !defined (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedLists || defined(INCLUDE_ComGoogleCommonCollectSortedLists_KeyAbsentBehavior))
#define ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum) {
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_NEXT_LOWER = 0,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_NEXT_HIGHER = 1,
  ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum_INVERTED_INSERTION_INDEX = 2,
};

/*!
 @brief A specification for which index to return if the list contains no elements that compare as
  equal to the key.
 */
@interface ComGoogleCommonCollectSortedLists_KeyAbsentBehavior : JavaLangEnum

@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *NEXT_LOWER NS_SWIFT_NAME(NEXT_LOWER);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *NEXT_HIGHER NS_SWIFT_NAME(NEXT_HIGHER);
@property (readonly, class, nonnull) ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *INVERTED_INSERTION_INDEX NS_SWIFT_NAME(INVERTED_INSERTION_INDEX);
#pragma mark Public

+ (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *)valueOfWithNSString:(NSString * __nonnull)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (jint)resultIndexWithInt:(jint)higherIndex;

- (ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_values_[];

/*!
 @brief Return the index of the next lower element in the list, or <code>-1</code> if there is no such
  element.
 */
inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_NEXT_LOWER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, NEXT_LOWER)

/*!
 @brief Return the index of the next higher element in the list, or <code>list.size()</code> if there is
  no such element.
 */
inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_NEXT_HIGHER(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, NEXT_HIGHER)

/*!
 @brief Return <code>~insertionIndex</code>, where <code>insertionIndex</code> is defined as the point at which
  the key would be inserted into the list: the index of the next higher element in the list, or 
 <code>list.size()</code> if there is no such element.
 <p>Note that the return value will be <code>>= 0</code> if and only if there is an element of the
  list that compares as equal to the key. 
 <p>This is equivalent to the behavior of <code>java.util.Collections.binarySearch(List,
 Object)</code>
  when the key isn't present, since <code>~insertionIndex</code> is equal to <code>-1 -
  insertionIndex</code>
 .
 */
inline ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_get_INVERTED_INSERTION_INDEX(void);
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior, INVERTED_INSERTION_INDEX)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_values(void);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectSortedLists_KeyAbsentBehavior *ComGoogleCommonCollectSortedLists_KeyAbsentBehavior_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedLists_KeyAbsentBehavior)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedLists")
