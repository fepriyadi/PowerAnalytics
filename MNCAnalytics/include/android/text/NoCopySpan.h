//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/NoCopySpan.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextNoCopySpan")
#ifdef RESTRICT_AndroidTextNoCopySpan
#define INCLUDE_ALL_AndroidTextNoCopySpan 0
#else
#define INCLUDE_ALL_AndroidTextNoCopySpan 1
#endif
#undef RESTRICT_AndroidTextNoCopySpan
#ifdef INCLUDE_AndroidTextNoCopySpan_Concrete
#define INCLUDE_AndroidTextNoCopySpan 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextNoCopySpan_) && (INCLUDE_ALL_AndroidTextNoCopySpan || defined(INCLUDE_AndroidTextNoCopySpan))
#define AndroidTextNoCopySpan_

/*!
 @brief This interface should be added to a span object that should not be copied
  into a new Spenned when performing a slice or copy operation on the original
  Spanned it was placed in.
 */
@protocol AndroidTextNoCopySpan < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextNoCopySpan)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextNoCopySpan)

#endif

#if !defined (AndroidTextNoCopySpan_Concrete_) && (INCLUDE_ALL_AndroidTextNoCopySpan || defined(INCLUDE_AndroidTextNoCopySpan_Concrete))
#define AndroidTextNoCopySpan_Concrete_

/*!
 @brief Convenience equivalent for when you would just want a new Object() for
  a span but want it to be no-copy.Use this instead.
 */
@interface AndroidTextNoCopySpan_Concrete : NSObject < AndroidTextNoCopySpan >

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextNoCopySpan_Concrete)

FOUNDATION_EXPORT void AndroidTextNoCopySpan_Concrete_init(AndroidTextNoCopySpan_Concrete *self);

FOUNDATION_EXPORT AndroidTextNoCopySpan_Concrete *new_AndroidTextNoCopySpan_Concrete_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextNoCopySpan_Concrete *create_AndroidTextNoCopySpan_Concrete_init(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextNoCopySpan_Concrete)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextNoCopySpan")
