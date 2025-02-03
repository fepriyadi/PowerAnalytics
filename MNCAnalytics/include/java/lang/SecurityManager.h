//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/SecurityManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangSecurityManager")
#ifdef RESTRICT_JavaLangSecurityManager
#define INCLUDE_ALL_JavaLangSecurityManager 0
#else
#define INCLUDE_ALL_JavaLangSecurityManager 1
#endif
#undef RESTRICT_JavaLangSecurityManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangSecurityManager_) && (INCLUDE_ALL_JavaLangSecurityManager || defined(INCLUDE_JavaLangSecurityManager))
#define JavaLangSecurityManager_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaLangClassLoader;
@class JavaLangThread;
@class JavaLangThreadGroup;
@class JavaNetInetAddress;
@class JavaSecurityPermission;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaLangSecurityManager : NSObject {
 @public
  /*!
   */
  jboolean inCheck_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (void)checkAcceptWithNSString:(NSString *)host
                        withInt:(jint)port;

- (void)checkAccessWithJavaLangThread:(JavaLangThread *)t;

- (void)checkAccessWithJavaLangThreadGroup:(JavaLangThreadGroup *)g;

- (void)checkAwtEventQueueAccess;

- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(jint)port;

- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(jint)port
                          withId:(id)context;

- (void)checkCreateClassLoader;

- (void)checkDeleteWithNSString:(NSString *)file;

- (void)checkExecWithNSString:(NSString *)cmd;

- (void)checkExitWithInt:(jint)status;

- (void)checkLinkWithNSString:(NSString *)lib;

- (void)checkListenWithInt:(jint)port;

- (void)checkMemberAccessWithIOSClass:(IOSClass *)clazz
                              withInt:(jint)which;

- (void)checkMulticastWithJavaNetInetAddress:(JavaNetInetAddress *)maddr;

/*!
 */
- (void)checkMulticastWithJavaNetInetAddress:(JavaNetInetAddress *)maddr
                                    withByte:(jbyte)ttl __attribute__((deprecated));

- (void)checkPackageAccessWithNSString:(NSString *)pkg;

- (void)checkPackageDefinitionWithNSString:(NSString *)pkg;

- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)perm;

- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)perm
                                           withId:(id)context;

- (void)checkPrintJobAccess;

- (void)checkPropertiesAccess;

- (void)checkPropertyAccessWithNSString:(NSString *)key;

- (void)checkReadWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)checkReadWithNSString:(NSString *)file;

- (void)checkReadWithNSString:(NSString *)file
                       withId:(id)context;

- (void)checkSecurityAccessWithNSString:(NSString *)target;

- (void)checkSetFactory;

- (void)checkSystemClipboardAccess;

- (jboolean)checkTopLevelWindowWithId:(id)window;

- (void)checkWriteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)checkWriteWithNSString:(NSString *)file;

/*!
 */
- (jboolean)getInCheck __attribute__((deprecated));

- (id)getSecurityContext;

/*!
 @brief Returns the current thread's thread group.
 */
- (JavaLangThreadGroup *)getThreadGroup;

#pragma mark Protected

/*!
 */
- (jint)classDepthWithNSString:(NSString *)name __attribute__((deprecated));

/*!
 */
- (jint)classLoaderDepth __attribute__((deprecated));

/*!
 */
- (JavaLangClassLoader *)currentClassLoader __attribute__((deprecated));

/*!
 */
- (IOSClass *)currentLoadedClass __attribute__((deprecated));

- (IOSObjectArray *)getClassContext;

/*!
 */
- (jboolean)inClassWithNSString:(NSString *)name __attribute__((deprecated));

/*!
 */
- (jboolean)inClassLoader __attribute__((deprecated));

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangSecurityManager)

FOUNDATION_EXPORT void JavaLangSecurityManager_init(JavaLangSecurityManager *self);

FOUNDATION_EXPORT JavaLangSecurityManager *new_JavaLangSecurityManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangSecurityManager *create_JavaLangSecurityManager_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSecurityManager)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangSecurityManager")
