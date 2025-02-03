//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/errorprone/annotations/NoAllocation.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsNoAllocation")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsNoAllocation
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsNoAllocation 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsNoAllocation 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsNoAllocation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsNoAllocation_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsNoAllocation || defined(INCLUDE_ComGoogleErrorproneAnnotationsNoAllocation))
#define ComGoogleErrorproneAnnotationsNoAllocation_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotation for method declarations, which denotes that this method will not cause allocations
  that are visible from source code.Compilers or runtimes can still introduce opportunities for
  allocation to occur that might result in garbage collection.
 <p>Be careful using this annotation. It should be used sparingly, typically only for methods
  called within inner loops or user interface event handlers. Misuse will likely lead to decreased
  performance and significantly more complex code.
 */
@protocol ComGoogleErrorproneAnnotationsNoAllocation < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsNoAllocation : NSObject < ComGoogleErrorproneAnnotationsNoAllocation >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsNoAllocation)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsNoAllocation> create_ComGoogleErrorproneAnnotationsNoAllocation(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsNoAllocation)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsNoAllocation")
