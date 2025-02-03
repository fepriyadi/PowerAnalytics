//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/KeyPairGeneratorSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi")
#ifdef RESTRICT_JavaSecurityKeyPairGeneratorSpi
#define INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi 0
#else
#define INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi 1
#endif
#undef RESTRICT_JavaSecurityKeyPairGeneratorSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityKeyPairGeneratorSpi_) && (INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi || defined(INCLUDE_JavaSecurityKeyPairGeneratorSpi))
#define JavaSecurityKeyPairGeneratorSpi_

@class JavaSecurityKeyPair;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <p> This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>KeyPairGenerator</code> class, which is used to generate
  pairs of public and private keys.
 <p> All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a key pair generator for a particular algorithm. 
 <p> In case the client does not explicitly initialize the KeyPairGenerator
  (via a call to an <code>initialize</code> method), each provider must
  supply (and document) a default initialization.
  For example, the <i>Sun</i> provider uses a default modulus size (keysize)
  of 1024 bits.
 @author Benjamin Renaud
 - seealso: KeyPairGenerator
 - seealso: java.security.spec.AlgorithmParameterSpec
 */
@interface JavaSecurityKeyPairGeneratorSpi : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Generates a key pair.Unless an initialization method is called
  using a KeyPairGenerator interface, algorithm-specific defaults
  will be used.
 This will generate a new key pair every time it
  is called.
 @return the newly generated <code>KeyPair</code>
 */
- (JavaSecurityKeyPair *)generateKeyPair;

/*!
 @brief Initializes the key pair generator using the specified parameter
  set and user-provided source of randomness.
 <p>This concrete method has been added to this previously-defined
  abstract class. (For backwards compatibility, it cannot be abstract.)
  It may be overridden by a provider to initialize the key pair
  generator. Such an override
  is expected to throw an InvalidAlgorithmParameterException if
  a parameter is inappropriate for this key pair generator.
  If this method is not overridden, it always throws an
  UnsupportedOperationException.
 @param params the parameter set used to generate the keys.
 @param random the source of randomness for this generator.
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key pair generator.
 @since 1.2
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
                                  withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes the key pair generator for a certain keysize, using
  the default parameter set.
 @param keysize the keysize. This is an  algorithm-specific metric, such as modulus length, specified in
   number of bits.
 @param random the source of randomness for this generator.
 @throw InvalidParameterExceptionif the <code>keysize</code> is not
  supported by this KeyPairGeneratorSpi object.
 */
- (void)initialize__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyPairGeneratorSpi)

FOUNDATION_EXPORT void JavaSecurityKeyPairGeneratorSpi_init(JavaSecurityKeyPairGeneratorSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyPairGeneratorSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi")
