//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/hash/Crc32cHashFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashCrc32cHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashCrc32cHashFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashCrc32cHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction || defined(INCLUDE_ComGoogleCommonHashCrc32cHashFunction))
#define ComGoogleCommonHashCrc32cHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractHashFunction 1
#include "com/google/common/hash/AbstractHashFunction.h"

@protocol ComGoogleCommonHashHashFunction;
@protocol ComGoogleCommonHashHasher;

/*!
 @brief This class generates a CRC32C checksum, defined by RFC 3720, Section 12.1.The generator
  polynomial for this checksum is <code>0x11EDC6F41</code>.
 @author Kurt Alfred Kluever
 */
@interface ComGoogleCommonHashCrc32cHashFunction : ComGoogleCommonHashAbstractHashFunction
@property (readonly, class, strong) id<ComGoogleCommonHashHashFunction> CRC_32_C NS_SWIFT_NAME(CRC_32_C);

#pragma mark Public

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashCrc32cHashFunction)

inline id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashCrc32cHashFunction_get_CRC_32_C(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashCrc32cHashFunction_CRC_32_C;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashCrc32cHashFunction, CRC_32_C, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT void ComGoogleCommonHashCrc32cHashFunction_initPackagePrivate(ComGoogleCommonHashCrc32cHashFunction *self);

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction *new_ComGoogleCommonHashCrc32cHashFunction_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction *create_ComGoogleCommonHashCrc32cHashFunction_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashCrc32cHashFunction)

#endif

#if !defined (ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_) && (INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction || defined(INCLUDE_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher))
#define ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_

#define RESTRICT_ComGoogleCommonHashAbstractByteHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractByteHasher 1
#include "com/google/common/hash/AbstractByteHasher.h"

@class ComGoogleCommonHashHashCode;
@class IOSIntArray;

@interface ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher : ComGoogleCommonHashAbstractByteHasher
@property (readonly, class, strong) IOSIntArray *CRC_TABLE NS_SWIFT_NAME(CRC_TABLE);

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hash__;

- (void)updateWithByte:(jbyte)b;

#pragma mark Package-Private

- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher)

inline IOSIntArray *ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_get_CRC_TABLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_CRC_TABLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher, CRC_TABLE, IOSIntArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *self);

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *new_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *create_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction")
