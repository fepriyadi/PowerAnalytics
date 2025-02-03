//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/CookieHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCookieHandler")
#ifdef RESTRICT_JavaNetCookieHandler
#define INCLUDE_ALL_JavaNetCookieHandler 0
#else
#define INCLUDE_ALL_JavaNetCookieHandler 1
#endif
#undef RESTRICT_JavaNetCookieHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetCookieHandler_) && (INCLUDE_ALL_JavaNetCookieHandler || defined(INCLUDE_JavaNetCookieHandler))
#define JavaNetCookieHandler_

@class JavaNetURI;
@protocol JavaUtilMap;

/*!
 @brief A CookieHandler object provides a callback mechanism to hook up a
  HTTP state management policy implementation into the HTTP protocol
  handler.The HTTP state management mechanism specifies a way to
  create a stateful session with HTTP requests and responses.
 <p>A system-wide CookieHandler that to used by the HTTP protocol
  handler can be registered by doing a
  CookieHandler.setDefault(CookieHandler). The currently registered
  CookieHandler can be retrieved by calling
  CookieHandler.getDefault().
  For more information on HTTP state management, see <a href="http://www.ietf.org/rfc/rfc2965.txt">
 <i>RFC&nbsp;2965: HTTP
  State Management Mechanism</i></a>
 @author Yingxian Wang
 @since 1.5
 */
@interface JavaNetCookieHandler : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Gets all the applicable cookies from a cookie cache for the
  specified uri in the request header.
 <P>The <code>URI</code> passed as an argument specifies the intended use for
  the cookies. In particular the scheme should reflect whether the cookies
  will be sent over http, https or used in another context like javascript.
  The host part should reflect either the destination of the cookies or
  their origin in the case of javascript.</P>
  <P>It is up to the implementation to take into account the <code>URI</code> and
  the cookies attributes and security settings to determine which ones
  should be returned.</P>
  
 <P>HTTP protocol implementers should make sure that this method is
  called after all request headers related to choosing cookies
  are added, and before the request is sent.</P>
 @param uri a <code>URI</code>  representing the intended use for the
              cookies
 @param requestHeaders - a Map from request header             field names to lists of field values representing
              the current request headers
 @return an immutable map from state management headers, with
             field names "Cookie" or "Cookie2" to a list of
             cookies containing state information
 @throw IOExceptionif an I/O error occurs
 @throw IllegalArgumentExceptionif either argument is null
 - seealso: #put(URI, Map)
 */
- (id<JavaUtilMap>)getWithJavaNetURI:(JavaNetURI *)uri
                     withJavaUtilMap:(id<JavaUtilMap>)requestHeaders;

/*!
 @brief Gets the system-wide cookie handler.
 @return the system-wide cookie handler; A null return means
         there is no system-wide cookie handler currently set.
 @throw SecurityException
 If a security manager has been installed and it denies 
 <code>NetPermission</code><code>("getCookieHandler")</code>
 - seealso: #setDefault(CookieHandler)
 */
+ (JavaNetCookieHandler *)getDefault;

/*!
 @brief Sets all the applicable cookies, examples are response header
  fields that are named Set-Cookie2, present in the response
  headers into a cookie cache.
 @param uri a <code>URI</code>  where the cookies come from
 @param responseHeaders an immutable map from field names to             lists of field values representing the response
              header fields returned
 @throw IOExceptionif an I/O error occurs
 @throw IllegalArgumentExceptionif either argument is null
 - seealso: #get(URI, Map)
 */
- (void)putWithJavaNetURI:(JavaNetURI *)uri
          withJavaUtilMap:(id<JavaUtilMap>)responseHeaders;

/*!
 @brief Sets (or unsets) the system-wide cookie handler.
 Note: non-standard http protocol handlers may ignore this setting.
 @param cHandler The HTTP cookie handler, or        
 <code>null</code>  to unset.
 @throw SecurityException
 If a security manager has been installed and it denies 
 <code>NetPermission</code><code>("setCookieHandler")</code>
 - seealso: #getDefault()
 */
+ (void)setDefaultWithJavaNetCookieHandler:(JavaNetCookieHandler *)cHandler;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCookieHandler)

FOUNDATION_EXPORT void JavaNetCookieHandler_init(JavaNetCookieHandler *self);

FOUNDATION_EXPORT JavaNetCookieHandler *JavaNetCookieHandler_getDefault(void);

FOUNDATION_EXPORT void JavaNetCookieHandler_setDefaultWithJavaNetCookieHandler_(JavaNetCookieHandler *cHandler);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCookieHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetCookieHandler")
