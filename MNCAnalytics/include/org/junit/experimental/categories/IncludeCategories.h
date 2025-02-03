//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/categories/IncludeCategories.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesIncludeCategories")
#ifdef RESTRICT_OrgJunitExperimentalCategoriesIncludeCategories
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesIncludeCategories 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalCategoriesIncludeCategories 1
#endif
#undef RESTRICT_OrgJunitExperimentalCategoriesIncludeCategories

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitExperimentalCategoriesIncludeCategories_) && (INCLUDE_ALL_OrgJunitExperimentalCategoriesIncludeCategories || defined(INCLUDE_OrgJunitExperimentalCategoriesIncludeCategories))
#define OrgJunitExperimentalCategoriesIncludeCategories_

#define RESTRICT_OrgJunitExperimentalCategoriesCategoryFilterFactory 1
#define INCLUDE_OrgJunitExperimentalCategoriesCategoryFilterFactory 1
#include "org/junit/experimental/categories/CategoryFilterFactory.h"

@class OrgJunitRunnerManipulationFilter;
@protocol JavaUtilList;

/*!
 @brief <code>org.junit.runner.FilterFactory</code> to include categories.
 The <code>Filter</code> that is created will filter out tests that are categorized with any of the
  given categories.
  Usage from command line: 
 <code>
      --filter=org.junit.experimental.categories.IncludeCategories=pkg.of.Cat1,pkg.of.Cat2 
 </code>
  Usage from API: 
 <code>
      new IncludeCategories().createFilter(Cat1.class, Cat2.class); 
 </code>
 */
@interface OrgJunitExperimentalCategoriesIncludeCategories : OrgJunitExperimentalCategoriesCategoryFilterFactory

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

/*!
 @brief Creates a <code>Filter</code> which is only passed by tests that are
  categorized with any of the specified categories.
 @param categories Category classes.
 */
- (OrgJunitRunnerManipulationFilter *)createFilterWithJavaUtilList:(id<JavaUtilList>)categories;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalCategoriesIncludeCategories)

FOUNDATION_EXPORT void OrgJunitExperimentalCategoriesIncludeCategories_init(OrgJunitExperimentalCategoriesIncludeCategories *self);

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesIncludeCategories *new_OrgJunitExperimentalCategoriesIncludeCategories_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalCategoriesIncludeCategories *create_OrgJunitExperimentalCategoriesIncludeCategories_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalCategoriesIncludeCategories)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalCategoriesIncludeCategories")
