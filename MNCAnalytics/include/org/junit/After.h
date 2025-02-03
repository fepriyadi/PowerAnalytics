//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/After.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitAfter")
#ifdef RESTRICT_OrgJunitAfter
#define INCLUDE_ALL_OrgJunitAfter 0
#else
#define INCLUDE_ALL_OrgJunitAfter 1
#endif
#undef RESTRICT_OrgJunitAfter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitAfter_) && (INCLUDE_ALL_OrgJunitAfter || defined(INCLUDE_OrgJunitAfter))
#define OrgJunitAfter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief If you allocate external resources in a <code>org.junit.Before</code> method you need to release them
  after the test runs.Annotating a <code>public void</code> method
  with <code>&#064;After</code> causes that method to be run after the <code>org.junit.Test</code> method.
 All <code>&#064;After</code>
  methods are guaranteed to run even if a <code>org.junit.Before</code> or <code>org.junit.Test</code> method throws an
  exception. The <code>&#064;After</code> methods declared in superclasses will be run after those of the current
  class, unless they are overridden in the current class. 
 <p>
  Here is a simple example: 
 @code

  public class Example {
     File output;    
    &#064;Before public void createOutputFile() {
           output= new File(...);
     }    
    &#064;Test public void something() {
           ...
     }    
    &#064;After public void deleteOutputFile() {
           output.delete();
     }   }   
  
@endcode
 - seealso: org.junit.Before
 - seealso: org.junit.Test
 @since 4.0
 */
@protocol OrgJunitAfter < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgJunitAfter : NSObject < OrgJunitAfter >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAfter)

FOUNDATION_EXPORT id<OrgJunitAfter> create_OrgJunitAfter(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAfter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitAfter")
