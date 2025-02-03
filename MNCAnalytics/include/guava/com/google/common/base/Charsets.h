//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/base/Charsets.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseCharsets")
#ifdef RESTRICT_ComGoogleCommonBaseCharsets
#define INCLUDE_ALL_ComGoogleCommonBaseCharsets 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseCharsets 1
#endif
#undef RESTRICT_ComGoogleCommonBaseCharsets

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseCharsets_) && (INCLUDE_ALL_ComGoogleCommonBaseCharsets || defined(INCLUDE_ComGoogleCommonBaseCharsets))
#define ComGoogleCommonBaseCharsets_

@class JavaNioCharsetCharset;

/*!
 @brief Contains constant definitions for the six standard <code>Charset</code> instances, which are
  guaranteed to be supported by all Java platform implementations.
 <p>Assuming you're free to choose, note that <b><code>UTF_8</code> is widely preferred</b>.
  
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/StringsExplained#charsets">
 <code>Charsets</code></a>.
 @author Mike Bostock
 @since 1.0
 */
@interface ComGoogleCommonBaseCharsets : NSObject
@property (readonly, class, strong) JavaNioCharsetCharset *US_ASCII NS_SWIFT_NAME(US_ASCII);
@property (readonly, class, strong) JavaNioCharsetCharset *ISO_8859_1 NS_SWIFT_NAME(ISO_8859_1);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_8 NS_SWIFT_NAME(UTF_8);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16BE NS_SWIFT_NAME(UTF_16BE);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16LE NS_SWIFT_NAME(UTF_16LE);
@property (readonly, class, strong) JavaNioCharsetCharset *UTF_16 NS_SWIFT_NAME(UTF_16);

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBaseCharsets)

/*!
 @brief US-ASCII: seven-bit ASCII, the Basic Latin block of the Unicode character set (ISO646-US).
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.US_ASCII</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_US_ASCII(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_US_ASCII;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, US_ASCII, JavaNioCharsetCharset *)

/*!
 @brief ISO-8859-1: ISO Latin Alphabet Number 1 (ISO-LATIN-1).
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.ISO_8859_1</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_ISO_8859_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_ISO_8859_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, ISO_8859_1, JavaNioCharsetCharset *)

/*!
 @brief UTF-8: eight-bit UCS Transformation Format.
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.UTF_8</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_UTF_8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, UTF_8, JavaNioCharsetCharset *)

/*!
 @brief UTF-16BE: sixteen-bit UCS Transformation Format, big-endian byte order.
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.UTF_16BE</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_UTF_16BE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_UTF_16BE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, UTF_16BE, JavaNioCharsetCharset *)

/*!
 @brief UTF-16LE: sixteen-bit UCS Transformation Format, little-endian byte order.
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.UTF_16LE</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_UTF_16LE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_UTF_16LE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, UTF_16LE, JavaNioCharsetCharset *)

/*!
 @brief UTF-16: sixteen-bit UCS Transformation Format, byte order identified by an optional byte-order
  mark.
 <p><b>Note for Java 7 and later:</b> this constant should be treated as deprecated; use <code>java.nio.charset.StandardCharsets.UTF_16</code>
  instead.
 */
inline JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_get_UTF_16(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *ComGoogleCommonBaseCharsets_UTF_16;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonBaseCharsets, UTF_16, JavaNioCharsetCharset *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseCharsets)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseCharsets")
