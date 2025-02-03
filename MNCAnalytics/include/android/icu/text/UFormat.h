//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/UFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextUFormat")
#ifdef RESTRICT_AndroidIcuTextUFormat
#define INCLUDE_ALL_AndroidIcuTextUFormat 0
#else
#define INCLUDE_ALL_AndroidIcuTextUFormat 1
#endif
#undef RESTRICT_AndroidIcuTextUFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextUFormat_) && (INCLUDE_ALL_AndroidIcuTextUFormat || defined(INCLUDE_AndroidIcuTextUFormat))
#define AndroidIcuTextUFormat_

#define RESTRICT_JavaTextFormat 1
#define INCLUDE_JavaTextFormat 1
#include "java/text/Format.h"

@class AndroidIcuUtilULocale;
@class AndroidIcuUtilULocale_Type;

/*!
 @brief An abstract class that extends <code>java.text.Format</code> to provide
  additional ICU protocol, specifically, the <tt>getLocale()</tt>
  API.All ICU format classes are subclasses of this class.
 - seealso: android.icu.util.ULocale
 @author weiv
 @author Alan Liu
 */
@interface AndroidIcuTextUFormat : JavaTextFormat

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Return the locale that was used to create this object, or null.
 This may may differ from the locale requested at the time of
  this object's creation.  For example, if an object is created
  for locale <tt>en_US_CALIFORNIA</tt>, the actual data may be
  drawn from <tt>en</tt> (the <i>actual</i> locale), and 
 <tt>en_US</tt> may be the most specific locale that exists (the 
 <i>valid</i> locale). 
 <p>Note: This method will be implemented in ICU 3.0; ICU 2.8
  contains a partial preview implementation.  The <i>actual</i>
  locale is returned correctly, but the <i>valid</i> locale is
  not, in most cases.
 @param type type of information requested, either <code>android.icu.util.ULocale.VALID_LOCALE</code>
   or <code>android.icu.util.ULocale.ACTUAL_LOCALE</code>
  .
 @return the information specified by <i>type</i>, or null if
  this object was not constructed from locale data.
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (AndroidIcuUtilULocale *)getLocaleWithAndroidIcuUtilULocale_Type:(AndroidIcuUtilULocale_Type *)type;

#pragma mark Package-Private

/*!
 @brief Set information about the locales that were used to create this
  object.If the object was not constructed from locale data,
  both arguments should be set to null.
 Otherwise, neither
  should be null.  The actual locale must be at the same level or
  less specific than the valid locale.  This method is intended
  for use by factories or other entities that create objects of
  this class.
 @param valid the most specific locale containing any resource  data, or null
 @param actual the locale containing data used to construct this  object, or null
 - seealso: android.icu.util.ULocale
 - seealso: android.icu.util.ULocale#VALID_LOCALE
 - seealso: android.icu.util.ULocale#ACTUAL_LOCALE
 */
- (void)setLocaleWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)valid
                 withAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextUFormat)

FOUNDATION_EXPORT void AndroidIcuTextUFormat_init(AndroidIcuTextUFormat *self);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextUFormat)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextUFormat")
