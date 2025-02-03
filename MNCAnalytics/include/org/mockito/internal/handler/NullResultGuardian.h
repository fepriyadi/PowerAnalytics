//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/NullResultGuardian.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian")
#ifdef RESTRICT_OrgMockitoInternalHandlerNullResultGuardian
#define INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerNullResultGuardian

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalHandlerNullResultGuardian_) && (INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian || defined(INCLUDE_OrgMockitoInternalHandlerNullResultGuardian))
#define OrgMockitoInternalHandlerNullResultGuardian_

#define RESTRICT_OrgMockitoInvocationMockHandler 1
#define INCLUDE_OrgMockitoInvocationMockHandler 1
#include "org/mockito/invocation/MockHandler.h"

@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationInvocationContainer;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Protects the results from delegate MockHandler.Makes sure the results are valid.
 by Szczepan Faber, created at: 5/22/12
 */
@interface OrgMockitoInternalHandlerNullResultGuardian : NSObject < OrgMockitoInvocationMockHandler >

#pragma mark Public

- (instancetype __nonnull)initPackagePrivateWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)delegate;

- (id<OrgMockitoInvocationInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerNullResultGuardian)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerNullResultGuardian_initPackagePrivateWithOrgMockitoInvocationMockHandler_(OrgMockitoInternalHandlerNullResultGuardian *self, id<OrgMockitoInvocationMockHandler> delegate);

FOUNDATION_EXPORT OrgMockitoInternalHandlerNullResultGuardian *new_OrgMockitoInternalHandlerNullResultGuardian_initPackagePrivateWithOrgMockitoInvocationMockHandler_(id<OrgMockitoInvocationMockHandler> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerNullResultGuardian *create_OrgMockitoInternalHandlerNullResultGuardian_initPackagePrivateWithOrgMockitoInvocationMockHandler_(id<OrgMockitoInvocationMockHandler> delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerNullResultGuardian)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian")
