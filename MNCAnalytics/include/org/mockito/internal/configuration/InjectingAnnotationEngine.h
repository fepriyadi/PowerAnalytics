//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/InjectingAnnotationEngine.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectingAnnotationEngine")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectingAnnotationEngine
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectingAnnotationEngine 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectingAnnotationEngine 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectingAnnotationEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalConfigurationInjectingAnnotationEngine_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectingAnnotationEngine || defined(INCLUDE_OrgMockitoInternalConfigurationInjectingAnnotationEngine))
#define OrgMockitoInternalConfigurationInjectingAnnotationEngine_

#define RESTRICT_OrgMockitoPluginsAnnotationEngine 1
#define INCLUDE_OrgMockitoPluginsAnnotationEngine 1
#include "org/mockito/plugins/AnnotationEngine.h"

#define RESTRICT_OrgMockitoConfigurationAnnotationEngine 1
#define INCLUDE_OrgMockitoConfigurationAnnotationEngine 1
#include "org/mockito/configuration/AnnotationEngine.h"

@class IOSClass;
@protocol JavaUtilSet;

/*!
 @brief See <code>MockitoAnnotations</code>
 */
@interface OrgMockitoInternalConfigurationInjectingAnnotationEngine : NSObject < OrgMockitoPluginsAnnotationEngine, OrgMockitoConfigurationAnnotationEngine >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Initializes mock/spies dependencies for objects annotated with 
 &#064;InjectMocks for given testClassInstance.
 <p>
  See examples in javadoc for <code>MockitoAnnotations</code> class.
 @param testClassInstance Test class, usually 
  <code> this </code>
 */
- (void)injectMocksWithId:(id)testClassInstance;

/*!
 @brief Process the fields of the test instance and create Mocks, Spies, Captors and inject them on fields
  annotated &#64;InjectMocks.
 <p>
  This code process the test class and the super classes. 
 <ol>
  <li>First create Mocks, Spies, Captors.</li>
  <li>Then try to inject them.</li>
  </ol>
 @param clazz Not used
 @param testInstance The instance of the test, should not be null.
 - seealso: org.mockito.plugins.AnnotationEngine#process(Class, Object)
 */
- (void)processWithIOSClass:(IOSClass *)clazz
                     withId:(id)testInstance;

#pragma mark Protected

- (void)onInjectionWithId:(id)testClassInstance
             withIOSClass:(IOSClass *)clazz
          withJavaUtilSet:(id<JavaUtilSet>)mockDependentFields
          withJavaUtilSet:(id<JavaUtilSet>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectingAnnotationEngine)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectingAnnotationEngine_init(OrgMockitoInternalConfigurationInjectingAnnotationEngine *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectingAnnotationEngine *new_OrgMockitoInternalConfigurationInjectingAnnotationEngine_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectingAnnotationEngine *create_OrgMockitoInternalConfigurationInjectingAnnotationEngine_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectingAnnotationEngine)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectingAnnotationEngine")
