//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/TemporaryFolder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesTemporaryFolder")
#ifdef RESTRICT_OrgJunitRulesTemporaryFolder
#define INCLUDE_ALL_OrgJunitRulesTemporaryFolder 0
#else
#define INCLUDE_ALL_OrgJunitRulesTemporaryFolder 1
#endif
#undef RESTRICT_OrgJunitRulesTemporaryFolder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRulesTemporaryFolder_) && (INCLUDE_ALL_OrgJunitRulesTemporaryFolder || defined(INCLUDE_OrgJunitRulesTemporaryFolder))
#define OrgJunitRulesTemporaryFolder_

#define RESTRICT_OrgJunitRulesExternalResource 1
#define INCLUDE_OrgJunitRulesExternalResource 1
#include "org/junit/rules/ExternalResource.h"

@class IOSObjectArray;
@class JavaIoFile;
@class OrgJunitRulesTemporaryFolder_Builder;

/*!
 @brief The TemporaryFolder Rule allows creation of files and folders that should
  be deleted when the test method finishes (whether it passes or
  fails).
 By default no exception will be thrown in case the deletion fails. 
 <p>Example of usage: 
 @code

  public static class HasTempFolder {
    &#064;Rule
   public TemporaryFolder folder= new TemporaryFolder();  
  &#064;Test
   public void testUsingTempFolder() throws IOException {
       File createdFile= folder.newFile(&quot;myfile.txt&quot;);
       File createdFolder= folder.newFolder(&quot;subfolder&quot;);
       // ...
      }    }    
  
@endcode
  
 <p>TemporaryFolder rule supports assured deletion mode, which
  will fail the test in case deletion fails with <code>AssertionError</code>.
  
 <p>Creating TemporaryFolder with assured deletion: 
 @code

    &#064;Rule
   public TemporaryFolder folder= TemporaryFolder.builder().assureDeletion().build(); 
  
@endcode
 @since 4.7
 */
@interface OrgJunitRulesTemporaryFolder : OrgJunitRulesExternalResource

#pragma mark Public

/*!
 @brief Create a temporary folder which uses system default temporary-file 
  directory to create temporary resources.
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a temporary folder which uses the specified directory to create
  temporary resources.
 @param parentFolder folder where temporary resources will be created.  If 
 <code>null</code>  then system default temporary-file directory is used.
 */
- (instancetype __nonnull)initWithJavaIoFile:(JavaIoFile *)parentFolder;

/*!
 @brief Returns a new builder for building an instance of <code>TemporaryFolder</code>.
 @since 4.13
 */
+ (OrgJunitRulesTemporaryFolder_Builder *)builder;

/*!
 @brief for testing purposes only.Do not use.
 */
- (void)create;

/*!
 @brief Delete all files and folders under the temporary folder.Usually not
  called directly, since it is automatically applied by the <code>Rule</code>.
 @throw AssertionErrorif unable to clean up resources
  and deletion of resources is assured.
 */
- (void)delete__;

/*!
 @return the location of this temporary folder.
 */
- (JavaIoFile *)getRoot;

/*!
 @brief Returns a new fresh file with a random name under the temporary folder.
 */
- (JavaIoFile *)newFile OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new fresh file with the given name under the temporary folder.
 */
- (JavaIoFile *)newFileWithNSString:(NSString *)fileName OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new fresh folder with a random name under the temporary folder.
 */
- (JavaIoFile *)newFolder OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new fresh folder with the given path under the temporary
  folder.
 */
- (JavaIoFile *)newFolderWithNSString:(NSString *)path OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a new fresh folder with the given paths under the temporary
  folder.For example, if you pass in the strings <code>"parent"</code> and <code>"child"</code>
  then a directory named <code>"parent"</code> will be created under the temporary folder
  and a directory named <code>"child"</code> will be created under the newly-created 
 <code>"parent"</code> directory.
 */
- (JavaIoFile *)newFolderWithNSStringArray:(IOSObjectArray *)paths OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Create a <code>TemporaryFolder</code> initialized with
  values from a builder.
 */
- (instancetype __nonnull)initWithOrgJunitRulesTemporaryFolder_Builder:(OrgJunitRulesTemporaryFolder_Builder *)builder;

- (void)after;

- (void)before;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTemporaryFolder)

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_init(OrgJunitRulesTemporaryFolder *self);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *new_OrgJunitRulesTemporaryFolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *create_OrgJunitRulesTemporaryFolder_init(void);

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_initWithJavaIoFile_(OrgJunitRulesTemporaryFolder *self, JavaIoFile *parentFolder);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *new_OrgJunitRulesTemporaryFolder_initWithJavaIoFile_(JavaIoFile *parentFolder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *create_OrgJunitRulesTemporaryFolder_initWithJavaIoFile_(JavaIoFile *parentFolder);

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_initWithOrgJunitRulesTemporaryFolder_Builder_(OrgJunitRulesTemporaryFolder *self, OrgJunitRulesTemporaryFolder_Builder *builder);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *new_OrgJunitRulesTemporaryFolder_initWithOrgJunitRulesTemporaryFolder_Builder_(OrgJunitRulesTemporaryFolder_Builder *builder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder *create_OrgJunitRulesTemporaryFolder_initWithOrgJunitRulesTemporaryFolder_Builder_(OrgJunitRulesTemporaryFolder_Builder *builder);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder_Builder *OrgJunitRulesTemporaryFolder_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTemporaryFolder)

#endif

#if !defined (OrgJunitRulesTemporaryFolder_Builder_) && (INCLUDE_ALL_OrgJunitRulesTemporaryFolder || defined(INCLUDE_OrgJunitRulesTemporaryFolder_Builder))
#define OrgJunitRulesTemporaryFolder_Builder_

@class JavaIoFile;
@class OrgJunitRulesTemporaryFolder;

/*!
 @brief Builds an instance of <code>TemporaryFolder</code>.
 @since 4.13
 */
@interface OrgJunitRulesTemporaryFolder_Builder : NSObject

#pragma mark Public

/*!
 @brief Setting this flag assures that no resources are left undeleted.Failure
  to fulfill the assurance results in failure of tests with an 
 <code>AssertionError</code>.
 @return this
 */
- (OrgJunitRulesTemporaryFolder_Builder *)assureDeletion;

/*!
 @brief Builds a <code>TemporaryFolder</code> instance using the values in this builder.
 */
- (OrgJunitRulesTemporaryFolder *)build;

/*!
 @brief Specifies which folder to use for creating temporary resources.
 If <code>null</code> then system default temporary-file directory is
  used.
 @return this
 */
- (OrgJunitRulesTemporaryFolder_Builder *)parentFolderWithJavaIoFile:(JavaIoFile *)parentFolder;

#pragma mark Protected

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTemporaryFolder_Builder)

FOUNDATION_EXPORT void OrgJunitRulesTemporaryFolder_Builder_init(OrgJunitRulesTemporaryFolder_Builder *self);

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder_Builder *new_OrgJunitRulesTemporaryFolder_Builder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTemporaryFolder_Builder *create_OrgJunitRulesTemporaryFolder_Builder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTemporaryFolder_Builder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesTemporaryFolder")
