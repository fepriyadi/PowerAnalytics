//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/ParameterMetaData.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlParameterMetaData")
#ifdef RESTRICT_JavaSqlParameterMetaData
#define INCLUDE_ALL_JavaSqlParameterMetaData 0
#else
#define INCLUDE_ALL_JavaSqlParameterMetaData 1
#endif
#undef RESTRICT_JavaSqlParameterMetaData

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlParameterMetaData_) && (INCLUDE_ALL_JavaSqlParameterMetaData || defined(INCLUDE_JavaSqlParameterMetaData))
#define JavaSqlParameterMetaData_

#define RESTRICT_JavaSqlWrapper 1
#define INCLUDE_JavaSqlWrapper 1
#include "java/sql/Wrapper.h"

/*!
 @brief An object that can be used to get information about the types
  and properties for each parameter marker in a 
 <code>PreparedStatement</code> object.For some queries and driver
  implementations, the data that would be returned by a <code>ParameterMetaData</code>
  object may not be available until the <code>PreparedStatement</code> has
  been executed.
 <p>
 Some driver implementations may not be able to provide information about the
 types and properties for each parameter marker in a <code>CallableStatement</code>
 object.
 @since 1.4
 */
@protocol JavaSqlParameterMetaData < JavaSqlWrapper, JavaObject >

/*!
 @brief Retrieves the number of parameters in the <code>PreparedStatement</code>
  object for which this <code>ParameterMetaData</code> object contains
  information.
 @return the number of parameters
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jint)getParameterCount;

/*!
 @brief Retrieves whether null values are allowed in the designated parameter.
 @param param the first parameter is 1, the second is 2, ...
 @return the nullability status of the given parameter; one of
         <code>ParameterMetaData.parameterNoNulls</code>,
         <code>ParameterMetaData.parameterNullable</code>, or
         <code>ParameterMetaData.parameterNullableUnknown</code>
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jint)isNullableWithInt:(jint)param;

/*!
 @brief Retrieves whether values for the designated parameter can be signed numbers.
 @param param the first parameter is 1, the second is 2, ...
 @return <code>true</code> if so; <code>false</code> otherwise
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jboolean)isSignedWithInt:(jint)param;

/*!
 @brief Retrieves the designated parameter's specified column size.
 <P>The returned value represents the maximum column size for the given parameter.
  For numeric data, this is the maximum precision.  For character data, this is the length in characters.
  For datetime datatypes, this is the length in characters of the String representation (assuming the
  maximum allowed precision of the fractional seconds component). For binary data, this is the length in bytes.  For the ROWID datatype,
  this is the length in bytes. 0 is returned for data types where the
  column size is not applicable.
 @param param the first parameter is 1, the second is 2, ...
 @return precision
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jint)getPrecisionWithInt:(jint)param;

/*!
 @brief Retrieves the designated parameter's number of digits to right of the decimal point.
 0 is returned for data types where the scale is not applicable.
 @param param the first parameter is 1, the second is 2, ...
 @return scale
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jint)getScaleWithInt:(jint)param;

/*!
 @brief Retrieves the designated parameter's SQL type.
 @param param the first parameter is 1, the second is 2, ...
 @return SQL type from <code>java.sql.Types</code>
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 - seealso: Types
 */
- (jint)getParameterTypeWithInt:(jint)param;

/*!
 @brief Retrieves the designated parameter's database-specific type name.
 @param param the first parameter is 1, the second is 2, ...
 @return type the name used by the database. If the parameter type is
  a user-defined type, then a fully-qualified type name is returned.
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (NSString *)getParameterTypeNameWithInt:(jint)param;

/*!
 @brief Retrieves the fully-qualified name of the Java class whose instances
  should be passed to the method <code>PreparedStatement.setObject</code>.
 @param param the first parameter is 1, the second is 2, ...
 @return the fully-qualified name of the class in the Java programming
          language that would be used by the method         
 <code>PreparedStatement.setObject</code> to set the value
          in the specified parameter. This is the class name used
          for custom mapping.
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (NSString *)getParameterClassNameWithInt:(jint)param;

/*!
 @brief Retrieves the designated parameter's mode.
 @param param the first parameter is 1, the second is 2, ...
 @return mode of the parameter; one of
         <code>ParameterMetaData.parameterModeIn</code>,
         <code>ParameterMetaData.parameterModeOut</code>, or
         <code>ParameterMetaData.parameterModeInOut</code>
         <code>ParameterMetaData.parameterModeUnknown</code>.
 @throw SQLExceptionif a database access error occurs
 @since 1.4
 */
- (jint)getParameterModeWithInt:(jint)param;

@end

@interface JavaSqlParameterMetaData : NSObject
@property (readonly, class) jint parameterNoNulls NS_SWIFT_NAME(parameterNoNulls);
@property (readonly, class) jint parameterNullable NS_SWIFT_NAME(parameterNullable);
@property (readonly, class) jint parameterNullableUnknown NS_SWIFT_NAME(parameterNullableUnknown);
@property (readonly, class) jint parameterModeUnknown NS_SWIFT_NAME(parameterModeUnknown);
@property (readonly, class) jint parameterModeIn NS_SWIFT_NAME(parameterModeIn);
@property (readonly, class) jint parameterModeInOut NS_SWIFT_NAME(parameterModeInOut);
@property (readonly, class) jint parameterModeOut NS_SWIFT_NAME(parameterModeOut);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlParameterMetaData)

/*!
 @brief The constant indicating that a
  parameter will not allow <code>NULL</code> values.
 */
inline jint JavaSqlParameterMetaData_get_parameterNoNulls(void);
#define JavaSqlParameterMetaData_parameterNoNulls 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterNoNulls, jint)

/*!
 @brief The constant indicating that a
  parameter will allow <code>NULL</code> values.
 */
inline jint JavaSqlParameterMetaData_get_parameterNullable(void);
#define JavaSqlParameterMetaData_parameterNullable 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterNullable, jint)

/*!
 @brief The constant indicating that the
  nullability of a parameter is unknown.
 */
inline jint JavaSqlParameterMetaData_get_parameterNullableUnknown(void);
#define JavaSqlParameterMetaData_parameterNullableUnknown 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterNullableUnknown, jint)

/*!
 @brief The constant indicating that the mode of the parameter is unknown.
 */
inline jint JavaSqlParameterMetaData_get_parameterModeUnknown(void);
#define JavaSqlParameterMetaData_parameterModeUnknown 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterModeUnknown, jint)

/*!
 @brief The constant indicating that the parameter's mode is IN.
 */
inline jint JavaSqlParameterMetaData_get_parameterModeIn(void);
#define JavaSqlParameterMetaData_parameterModeIn 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterModeIn, jint)

/*!
 @brief The constant indicating that the parameter's mode is INOUT.
 */
inline jint JavaSqlParameterMetaData_get_parameterModeInOut(void);
#define JavaSqlParameterMetaData_parameterModeInOut 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterModeInOut, jint)

/*!
 @brief The constant indicating that the parameter's mode is  OUT.
 */
inline jint JavaSqlParameterMetaData_get_parameterModeOut(void);
#define JavaSqlParameterMetaData_parameterModeOut 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlParameterMetaData, parameterModeOut, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlParameterMetaData)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlParameterMetaData")
