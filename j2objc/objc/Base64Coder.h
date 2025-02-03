//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/fepriyadi/dev/android/office/mnc/digital/analytics/mobile-sdk/iospowerlytics/j2objc/java/Base64Coder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_Base64Coder")
#ifdef RESTRICT_Base64Coder
#define INCLUDE_ALL_Base64Coder 0
#else
#define INCLUDE_ALL_Base64Coder 1
#endif
#undef RESTRICT_Base64Coder

#if !defined (ComPowerAnalyticsBase64Coder_) && (INCLUDE_ALL_Base64Coder || defined(INCLUDE_ComPowerAnalyticsBase64Coder))
#define ComPowerAnalyticsBase64Coder_

@class IOSByteArray;
@class IOSCharArray;

@interface ComPowerAnalyticsBase64Coder : NSObject

#pragma mark Public

+ (IOSByteArray *)decodeWithCharArray:(IOSCharArray *)inArg;

+ (IOSByteArray *)decodeWithCharArray:(IOSCharArray *)inArg
                              withInt:(jint)iOff
                              withInt:(jint)iLen;

+ (IOSByteArray *)decodeWithNSString:(NSString *)s;

+ (IOSByteArray *)decodeLinesWithNSString:(NSString *)s;

+ (NSString *)decodeStringWithNSString:(NSString *)s;

+ (IOSCharArray *)encodeWithByteArray:(IOSByteArray *)inArg;

+ (IOSCharArray *)encodeWithByteArray:(IOSByteArray *)inArg
                              withInt:(jint)iLen;

+ (IOSCharArray *)encodeWithByteArray:(IOSByteArray *)inArg
                              withInt:(jint)iOff
                              withInt:(jint)iLen;

+ (NSString *)encodeLinesWithByteArray:(IOSByteArray *)inArg;

+ (NSString *)encodeLinesWithByteArray:(IOSByteArray *)inArg
                               withInt:(jint)iOff
                               withInt:(jint)iLen
                               withInt:(jint)lineLen
                          withNSString:(NSString *)lineSeparator;

+ (NSString *)encodeStringWithNSString:(NSString *)s;

@end

J2OBJC_STATIC_INIT(ComPowerAnalyticsBase64Coder)

FOUNDATION_EXPORT NSString *ComPowerAnalyticsBase64Coder_encodeStringWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *ComPowerAnalyticsBase64Coder_encodeLinesWithByteArray_(IOSByteArray *inArg);

FOUNDATION_EXPORT NSString *ComPowerAnalyticsBase64Coder_encodeLinesWithByteArray_withInt_withInt_withInt_withNSString_(IOSByteArray *inArg, jint iOff, jint iLen, jint lineLen, NSString *lineSeparator);

FOUNDATION_EXPORT IOSCharArray *ComPowerAnalyticsBase64Coder_encodeWithByteArray_(IOSByteArray *inArg);

FOUNDATION_EXPORT IOSCharArray *ComPowerAnalyticsBase64Coder_encodeWithByteArray_withInt_(IOSByteArray *inArg, jint iLen);

FOUNDATION_EXPORT IOSCharArray *ComPowerAnalyticsBase64Coder_encodeWithByteArray_withInt_withInt_(IOSByteArray *inArg, jint iOff, jint iLen);

FOUNDATION_EXPORT NSString *ComPowerAnalyticsBase64Coder_decodeStringWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSByteArray *ComPowerAnalyticsBase64Coder_decodeLinesWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSByteArray *ComPowerAnalyticsBase64Coder_decodeWithNSString_(NSString *s);

FOUNDATION_EXPORT IOSByteArray *ComPowerAnalyticsBase64Coder_decodeWithCharArray_(IOSCharArray *inArg);

FOUNDATION_EXPORT IOSByteArray *ComPowerAnalyticsBase64Coder_decodeWithCharArray_withInt_withInt_(IOSCharArray *inArg, jint iOff, jint iLen);

J2OBJC_TYPE_LITERAL_HEADER(ComPowerAnalyticsBase64Coder)

#endif

#pragma pop_macro("INCLUDE_ALL_Base64Coder")
