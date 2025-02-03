//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/InvalidPathException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileInvalidPathException")
#ifdef RESTRICT_JavaNioFileInvalidPathException
#define INCLUDE_ALL_JavaNioFileInvalidPathException 0
#else
#define INCLUDE_ALL_JavaNioFileInvalidPathException 1
#endif
#undef RESTRICT_JavaNioFileInvalidPathException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileInvalidPathException_) && (INCLUDE_ALL_JavaNioFileInvalidPathException || defined(INCLUDE_JavaNioFileInvalidPathException))
#define JavaNioFileInvalidPathException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when path string cannot be converted into a 
 <code>Path</code> because the path string contains invalid characters, or
  the path string is invalid for other file system specific reasons.
 */
@interface JavaNioFileInvalidPathException : JavaLangIllegalArgumentException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an instance from the given input string and reason.The
  resulting object will have an error index of <tt>-1</tt>.
 @param input the input string
 @param reason a string explaining why the input was rejected
 @throw NullPointerException
 if either the input or reason strings are <tt>null</tt>
 */
- (instancetype __nonnull)initWithNSString:(NSString *)input
                              withNSString:(NSString *)reason;

/*!
 @brief Constructs an instance from the given input string, reason, and error
  index.
 @param input the input string
 @param reason a string explaining why the input was rejected
 @param index the index at which the error occurred,                  or 
  <tt> -1 </tt>  if the index is not known
 @throw NullPointerException
 if either the input or reason strings are <tt>null</tt>
 @throw IllegalArgumentException
 if the error index is less than <tt>-1</tt>
 */
- (instancetype __nonnull)initWithNSString:(NSString *)input
                              withNSString:(NSString *)reason
                                   withInt:(jint)index;

/*!
 @brief Returns an index into the input string of the position at which the
  error occurred, or <tt>-1</tt> if this position is not known.
 @return the error index
 */
- (jint)getIndex;

/*!
 @brief Returns the input string.
 @return the input string
 */
- (NSString *)getInput;

/*!
 @brief Returns a string describing the error.The resulting string
  consists of the reason string followed by a colon character
  (<tt>':'</tt>), a space, and the input string.
 If the error index is
  defined then the string <tt>" at index "</tt> followed by the index, in
  decimal, is inserted after the reason string and before the colon
  character.
 @return a string describing the error
 */
- (NSString *)getMessage;

/*!
 @brief Returns a string explaining why the input string was rejected.
 @return the reason string
 */
- (NSString *)getReason;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileInvalidPathException)

inline jlong JavaNioFileInvalidPathException_get_serialVersionUID(void);
#define JavaNioFileInvalidPathException_serialVersionUID 4355821422286746137LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileInvalidPathException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileInvalidPathException_initWithNSString_withNSString_withInt_(JavaNioFileInvalidPathException *self, NSString *input, NSString *reason, jint index);

FOUNDATION_EXPORT JavaNioFileInvalidPathException *new_JavaNioFileInvalidPathException_initWithNSString_withNSString_withInt_(NSString *input, NSString *reason, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileInvalidPathException *create_JavaNioFileInvalidPathException_initWithNSString_withNSString_withInt_(NSString *input, NSString *reason, jint index);

FOUNDATION_EXPORT void JavaNioFileInvalidPathException_initWithNSString_withNSString_(JavaNioFileInvalidPathException *self, NSString *input, NSString *reason);

FOUNDATION_EXPORT JavaNioFileInvalidPathException *new_JavaNioFileInvalidPathException_initWithNSString_withNSString_(NSString *input, NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileInvalidPathException *create_JavaNioFileInvalidPathException_initWithNSString_withNSString_(NSString *input, NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileInvalidPathException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileInvalidPathException")
