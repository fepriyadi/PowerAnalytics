//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/CommonDataSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxSqlCommonDataSource")
#ifdef RESTRICT_JavaxSqlCommonDataSource
#define INCLUDE_ALL_JavaxSqlCommonDataSource 0
#else
#define INCLUDE_ALL_JavaxSqlCommonDataSource 1
#endif
#undef RESTRICT_JavaxSqlCommonDataSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlCommonDataSource_) && (INCLUDE_ALL_JavaxSqlCommonDataSource || defined(INCLUDE_JavaxSqlCommonDataSource))
#define JavaxSqlCommonDataSource_

@class JavaIoPrintWriter;
@class JavaUtilLoggingLogger;

/*!
 @brief Interface that defines the methods which are common between <code>DataSource</code>,
  <code>XADataSource</code> and <code>ConnectionPoolDataSource</code>.
 <p>
 */
@protocol JavaxSqlCommonDataSource < JavaObject >

/*!
 @brief <p>Retrieves the log writer for this <code>DataSource</code>
  object.
 <p>The log writer is a character output stream to which all logging
  and tracing messages for this data source will be
  printed.  This includes messages printed by the methods of this
  object, messages printed by methods of other objects manufactured
  by this object, and so on.  Messages printed to a data source
  specific log writer are not printed to the log writer associated
  with the <code>java.sql.DriverManager</code> class.  When a 
 <code>DataSource</code> object is
  created, the log writer is initially null; in other words, the
  default is for logging to be disabled.
 @return the log writer for this data source or null if
         logging is disabled
 @throw java.sql.SQLExceptionif a database access error occurs
 - seealso: #setLogWriter
 @since 1.4
 */
- (JavaIoPrintWriter *)getLogWriter;

/*!
 @brief <p>Sets the log writer for this <code>DataSource</code>
  object to the given <code>java.io.PrintWriter</code> object.
 <p>The log writer is a character output stream to which all logging
  and tracing messages for this data source will be
  printed.  This includes messages printed by the methods of this
  object, messages printed by methods of other objects manufactured
  by this object, and so on.  Messages printed to a data source-
  specific log writer are not printed to the log writer associated
  with the <code>java.sql.DriverManager</code> class. When a 
 <code>DataSource</code> object is created the log writer is
  initially null; in other words, the default is for logging to be
  disabled.
 @param outArg the new log writer; to disable logging, set to null
 @throw SQLExceptionif a database access error occurs
 - seealso: #getLogWriter
 @since 1.4
 */
- (void)setLogWriterWithJavaIoPrintWriter:(JavaIoPrintWriter *)outArg;

/*!
 @brief <p>Sets the maximum time in seconds that this data source will wait
  while attempting to connect to a database.
 A value of zero
  specifies that the timeout is the default system timeout
  if there is one; otherwise, it specifies that there is no timeout.
  When a <code>DataSource</code> object is created, the login timeout is
  initially zero.
 @param seconds the data source login time limit
 @throw SQLExceptionif a database access error occurs.
 - seealso: #getLoginTimeout
 @since 1.4
 */
- (void)setLoginTimeoutWithInt:(jint)seconds;

/*!
 @brief Gets the maximum time in seconds that this data source can wait
  while attempting to connect to a database.A value of zero
  means that the timeout is the default system timeout
  if there is one; otherwise, it means that there is no timeout.
 When a <code>DataSource</code> object is created, the login timeout is
  initially zero.
 @return the data source login time limit
 @throw SQLExceptionif a database access error occurs.
 - seealso: #setLoginTimeout
 @since 1.4
 */
- (jint)getLoginTimeout;

/*!
 @brief Return the parent Logger of all the Loggers used by this data source.This
  should be the Logger farthest from the root Logger that is
  still an ancestor of all of the Loggers used by this data source.
 Configuring
  this Logger will affect all of the log messages generated by the data source.
  In the worst case, this may be the root Logger.
 @return the parent Logger for this data source
 @throw SQLFeatureNotSupportedExceptionif the data source does not use <code>java.util.logging<code>.
 @since 1.7
 */
- (JavaUtilLoggingLogger *)getParentLogger;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlCommonDataSource)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlCommonDataSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSqlCommonDataSource")
