//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/runners/JUnit38ClassRunner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersJUnit38ClassRunner")
#ifdef RESTRICT_OrgJunitInternalRunnersJUnit38ClassRunner
#define INCLUDE_ALL_OrgJunitInternalRunnersJUnit38ClassRunner 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersJUnit38ClassRunner 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersJUnit38ClassRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalRunnersJUnit38ClassRunner_) && (INCLUDE_ALL_OrgJunitInternalRunnersJUnit38ClassRunner || defined(INCLUDE_OrgJunitInternalRunnersJUnit38ClassRunner))
#define OrgJunitInternalRunnersJUnit38ClassRunner_

#define RESTRICT_OrgJunitRunnerRunner 1
#define INCLUDE_OrgJunitRunnerRunner 1
#include "org/junit/runner/Runner.h"

#define RESTRICT_OrgJunitRunnerManipulationFilterable 1
#define INCLUDE_OrgJunitRunnerManipulationFilterable 1
#include "org/junit/runner/manipulation/Filterable.h"

#define RESTRICT_OrgJunitRunnerManipulationOrderable 1
#define INCLUDE_OrgJunitRunnerManipulationOrderable 1
#include "org/junit/runner/manipulation/Orderable.h"

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationOrderer;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JunitFrameworkTest;
@protocol JunitFrameworkTestListener;

@interface OrgJunitInternalRunnersJUnit38ClassRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationOrderable >

#pragma mark Public

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)klass;

- (instancetype __nonnull)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (id<JunitFrameworkTestListener>)createAdaptingListenerWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (OrgJunitRunnerDescription *)getDescription;

/*!
 @since 4.13
 */
- (void)orderWithOrgJunitRunnerManipulationOrderer:(OrgJunitRunnerManipulationOrderer *)orderer;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersJUnit38ClassRunner)

FOUNDATION_EXPORT void OrgJunitInternalRunnersJUnit38ClassRunner_initWithIOSClass_(OrgJunitInternalRunnersJUnit38ClassRunner *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit38ClassRunner *new_OrgJunitInternalRunnersJUnit38ClassRunner_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit38ClassRunner *create_OrgJunitInternalRunnersJUnit38ClassRunner_initWithIOSClass_(IOSClass *klass);

FOUNDATION_EXPORT void OrgJunitInternalRunnersJUnit38ClassRunner_initWithJunitFrameworkTest_(OrgJunitInternalRunnersJUnit38ClassRunner *self, id<JunitFrameworkTest> test);

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit38ClassRunner *new_OrgJunitInternalRunnersJUnit38ClassRunner_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersJUnit38ClassRunner *create_OrgJunitInternalRunnersJUnit38ClassRunner_initWithJunitFrameworkTest_(id<JunitFrameworkTest> test);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersJUnit38ClassRunner)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersJUnit38ClassRunner")
