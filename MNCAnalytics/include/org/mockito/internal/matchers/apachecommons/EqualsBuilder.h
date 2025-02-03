//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/apachecommons/EqualsBuilder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsEqualsBuilder")
#ifdef RESTRICT_OrgMockitoInternalMatchersApachecommonsEqualsBuilder
#define INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsEqualsBuilder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsEqualsBuilder 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersApachecommonsEqualsBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersApachecommonsEqualsBuilder_) && (INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsEqualsBuilder || defined(INCLUDE_OrgMockitoInternalMatchersApachecommonsEqualsBuilder))
#define OrgMockitoInternalMatchersApachecommonsEqualsBuilder_

@class IOSBooleanArray;
@class IOSByteArray;
@class IOSCharArray;
@class IOSClass;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class IOSShortArray;

/*!
 @brief <p>Assists in implementing <code>Object.equals(Object)</code> methods.
 </p>
  
 <p> This class provides methods to build a good equals method for any
  class. It follows rules laid out in 
 <a href="http://java.sun.com/docs/books/effective/index.html">Effective Java</a>
  , by Joshua Bloch. In particular the rule for comparing <code>doubles</code>,
  <code>floats</code>, and arrays can be tricky. Also, making sure that 
 <code>equals()</code> and <code>hashCode()</code> are consistent can be
  difficult.</p>
  
 <p>Two Objects that compare as equals must generate the same hash code,
  but two Objects with the same hash code do not have to be equal.</p>
  
 <p>All relevant fields should be included in the calculation of equals.
  Derived fields may be ignored. In particular, any field used in
  generating a hash code must be used in the equals method, and vice
  versa.</p>
  
 <p>Typical use for the code is as follows:</p>
  <pre class="code"><code class="java">
  public boolean equals(Object obj) {
    if (obj == null) { return false; }
    if (obj == this) { return true; }
    if (obj.getClass() != getClass()) {
      return false;
    }
    MyClass rhs = (MyClass) obj;
    return new EqualsBuilder()
                  .appendSuper(super.equals(obj))
                  .append(field1, rhs.field1)
                  .append(field2, rhs.field2)
                  .append(field3, rhs.field3)
                  .isEquals();
   } 
 </code>
@endcode
  
 <p> Alternatively, there is a method that uses reflection to determine
  the fields to test. Because these fields are usually private, the method, 
 <code>reflectionEquals</code>, uses <code>AccessibleObject.setAccessible</code> to
  change the visibility of the fields. This will fail under a security
  manager, unless the appropriate permissions are set up correctly. It is
  also slower than testing explicitly.</p>
  
 <p> A typical invocation for this method would look like:</p>
  <pre class="code"><code class="java">
  public boolean equals(Object obj) {
    return EqualsBuilder.reflectionEquals(this, obj);
  } 
 </code>
@endcode
 @author <a href="mailto:steve.downey@@netfolio.com">Steve Downey</a>
 @author Stephen Colebourne
 @author Gary Gregory
 @author Pete Gieser
 @author Arun Mammen Thomas
 @since 1.0
 @version $Id: EqualsBuilder.java 611543 2008-01-13 07:00:22Z bayard $
 */
@interface OrgMockitoInternalMatchersApachecommonsEqualsBuilder : NSObject

#pragma mark Public

/*!
 @brief <p>Constructor for EqualsBuilder.
 </p>
  
 <p>Starts off assuming that equals is <code>true</code>.</p>
 - seealso: Object#equals(Object)
 */
- (instancetype __nonnull)initPackagePrivate;

/*!
 @brief <p>Test if two <code>booleans</code>s are equal.
 </p>
 @param lhs the left hand  <code> boolean </code>
 @param rhs the right hand  <code> boolean </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithBoolean:(jboolean)lhs
                                                                withBoolean:(jboolean)rhs;

/*!
 @brief <p>Deep comparison of array of <code>boolean</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(boolean, boolean)</code> is used.</p>
 @param lhs the left hand  <code> boolean[] </code>
 @param rhs the right hand  <code> boolean[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithBooleanArray:(IOSBooleanArray *)lhs
                                                                withBooleanArray:(IOSBooleanArray *)rhs;

/*!
 @brief <p>Test if two <code>byte</code>s are equal.
 </p>
 @param lhs the left hand  <code> byte </code>
 @param rhs the right hand  <code> byte </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithByte:(jbyte)lhs
                                                                withByte:(jbyte)rhs;

/*!
 @brief <p>Deep comparison of array of <code>byte</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(byte, byte)</code> is used.</p>
 @param lhs the left hand  <code> byte[] </code>
 @param rhs the right hand  <code> byte[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithByteArray:(IOSByteArray *)lhs
                                                                withByteArray:(IOSByteArray *)rhs;

/*!
 @brief <p>Test if two <code>char</code>s are equal.
 </p>
 @param lhs the left hand  <code> char </code>
 @param rhs the right hand  <code> char </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithChar:(jchar)lhs
                                                                withChar:(jchar)rhs;

/*!
 @brief <p>Deep comparison of array of <code>char</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(char, char)</code> is used.</p>
 @param lhs the left hand  <code> char[] </code>
 @param rhs the right hand  <code> char[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithCharArray:(IOSCharArray *)lhs
                                                                withCharArray:(IOSCharArray *)rhs;

/*!
 @brief <p>Test if two <code>double</code>s are equal by testing that the
  pattern of bits returned by <code>doubleToLong</code> are equal.
 </p>
  
 <p>This handles NaNs, Infinities, and <code>-0.0</code>.</p>
  
 <p>It is compatible with the hash code generated by 
 <code>HashCodeBuilder</code>.</p>
 @param lhs the left hand  <code> double </code>
 @param rhs the right hand  <code> double </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithDouble:(jdouble)lhs
                                                                withDouble:(jdouble)rhs;

/*!
 @brief <p>Deep comparison of array of <code>double</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(double, double)</code> is used.</p>
 @param lhs the left hand  <code> double[] </code>
 @param rhs the right hand  <code> double[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithDoubleArray:(IOSDoubleArray *)lhs
                                                                withDoubleArray:(IOSDoubleArray *)rhs;

/*!
 @brief <p>Test if two <code>float</code>s are equal byt testing that the
  pattern of bits returned by doubleToLong are equal.
 </p>
  
 <p>This handles NaNs, Infinities, and <code>-0.0</code>.</p>
  
 <p>It is compatible with the hash code generated by 
 <code>HashCodeBuilder</code>.</p>
 @param lhs the left hand  <code> float </code>
 @param rhs the right hand  <code> float </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithFloat:(jfloat)lhs
                                                                withFloat:(jfloat)rhs;

/*!
 @brief <p>Deep comparison of array of <code>float</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(float, float)</code> is used.</p>
 @param lhs the left hand  <code> float[] </code>
 @param rhs the right hand  <code> float[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithFloatArray:(IOSFloatArray *)lhs
                                                                withFloatArray:(IOSFloatArray *)rhs;

/*!
 @brief <p>Test if two <code>int</code>s are equal.
 </p>
 @param lhs the left hand  <code> int </code>
 @param rhs the right hand  <code> int </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithInt:(jint)lhs
                                                                withInt:(jint)rhs;

/*!
 @brief <p>Deep comparison of array of <code>int</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(int, int)</code> is used.</p>
 @param lhs the left hand  <code> int[] </code>
 @param rhs the right hand  <code> int[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithIntArray:(IOSIntArray *)lhs
                                                                withIntArray:(IOSIntArray *)rhs;

/*!
 @brief <p>
  Test if two <code>long</code> s are equal.
 </p>
 @param lhs the left hand 
  <code> long </code>
 @param rhs the right hand 
  <code> long </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithLong:(jlong)lhs
                                                                withLong:(jlong)rhs;

/*!
 @brief <p>Deep comparison of array of <code>long</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(long, long)</code> is used.</p>
 @param lhs the left hand  <code> long[] </code>
 @param rhs the right hand  <code> long[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithLongArray:(IOSLongArray *)lhs
                                                                withLongArray:(IOSLongArray *)rhs;

/*!
 @brief <p>Test if two <code>Object</code>s are equal using their 
 <code>equals</code> method.
 </p>
 @param lhs the left hand object
 @param rhs the right hand object
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithId:(id)lhs
                                                                withId:(id)rhs;

/*!
 @brief <p>Performs a deep comparison of two <code>Object</code> arrays.
 </p>
  
 <p>This also will be called for the top level of
  multi-dimensional, ragged, and multi-typed arrays.</p>
 @param lhs the left hand  <code> Object[] </code>
 @param rhs the right hand  <code> Object[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithNSObjectArray:(IOSObjectArray *)lhs
                                                                withNSObjectArray:(IOSObjectArray *)rhs;

/*!
 @brief <p>Test if two <code>short</code>s are equal.
 </p>
 @param lhs the left hand  <code> short </code>
 @param rhs the right hand  <code> short </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithShort:(jshort)lhs
                                                                withShort:(jshort)rhs;

/*!
 @brief <p>Deep comparison of array of <code>short</code>.
 Length and all
  values are compared.</p>
  
 <p>The method <code>append(short, short)</code> is used.</p>
 @param lhs the left hand  <code> short[] </code>
 @param rhs the right hand  <code> short[] </code>
 @return EqualsBuilder - used to chain calls.
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendWithShortArray:(IOSShortArray *)lhs
                                                                withShortArray:(IOSShortArray *)rhs;

/*!
 @brief <p>Adds the result of <code>super.equals()</code> to this builder.
 </p>
 @param superEquals the result of calling  <code> super.equals() </code>
 @return EqualsBuilder - used to chain calls.
 @since 2.1.0
 */
- (OrgMockitoInternalMatchersApachecommonsEqualsBuilder *)appendSuperWithBoolean:(jboolean)superEquals;

/*!
 @brief <p>Returns <code>true</code> if the fields that have been checked
  are all equal.
 </p>
 @return boolean
 */
- (jboolean)isEquals;

/*!
 @brief <p>This method uses reflection to determine if the two <code>Object</code>s
  are equal.
 </p>
  
 <p>It uses <code>AccessibleObject.setAccessible</code> to gain access to private
  fields. This means that it will throw a security exception if run under
  a security manager, if the permissions are not set up correctly. It is also
  not as efficient as testing explicitly.</p>
  
 <p>Transient members will be not be tested, as they are likely derived
  fields, and not part of the value of the Object.</p>
  
 <p>Static fields will not be tested. Superclass fields will be included.</p>
 @param lhs <code> this </code>  object
 @param rhs the other object
 @return <code>true</code> if the two Objects have tested equals.
 */
+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs;

/*!
 @brief <p>This method uses reflection to determine if the two <code>Object</code>s
  are equal.
 </p>
  
 <p>It uses <code>AccessibleObject.setAccessible</code> to gain access to private
  fields. This means that it will throw a security exception if run under
  a security manager, if the permissions are not set up correctly. It is also
  not as efficient as testing explicitly.</p>
  
 <p>If the TestTransients parameter is set to <code>true</code>, transient
  members will be tested, otherwise they are ignored, as they are likely
  derived fields, and not part of the value of the <code>Object</code>.</p>
  
 <p>Static fields will not be tested. Superclass fields will be included.</p>
 @param lhs <code> this </code>  object
 @param rhs the other object
 @param testTransients whether to include transient fields
 @return <code>true</code> if the two Objects have tested equals.
 */
+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients;

/*!
 @brief <p>This method uses reflection to determine if the two <code>Object</code>s
  are equal.
 </p>
  
 <p>It uses <code>AccessibleObject.setAccessible</code> to gain access to private
  fields. This means that it will throw a security exception if run under
  a security manager, if the permissions are not set up correctly. It is also
  not as efficient as testing explicitly.</p>
  
 <p>If the testTransients parameter is set to <code>true</code>, transient
  members will be tested, otherwise they are ignored, as they are likely
  derived fields, and not part of the value of the <code>Object</code>.</p>
  
 <p>Static fields will not be included. Superclass fields will be appended
  up to and including the specified superclass. A null superclass is treated
  as java.lang.Object.</p>
 @param lhs <code> this </code>  object
 @param rhs the other object
 @param testTransients whether to include transient fields
 @param reflectUpToClass the superclass to reflect up to (inclusive),   may be 
  <code> null </code>
 @return <code>true</code> if the two Objects have tested equals.
 @since 2.1.0
 */
+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients
                      withIOSClass:(IOSClass *)reflectUpToClass;

/*!
 @brief <p>This method uses reflection to determine if the two <code>Object</code>s
  are equal.
 </p>
  
 <p>It uses <code>AccessibleObject.setAccessible</code> to gain access to private
  fields. This means that it will throw a security exception if run under
  a security manager, if the permissions are not set up correctly. It is also
  not as efficient as testing explicitly.</p>
  
 <p>If the testTransients parameter is set to <code>true</code>, transient
  members will be tested, otherwise they are ignored, as they are likely
  derived fields, and not part of the value of the <code>Object</code>.</p>
  
 <p>Static fields will not be included. Superclass fields will be appended
  up to and including the specified superclass. A null superclass is treated
  as java.lang.Object.</p>
 @param lhs <code> this </code>  object
 @param rhs the other object
 @param testTransients whether to include transient fields
 @param reflectUpToClass the superclass to reflect up to (inclusive),   may be 
  <code> null </code>
 @param excludeFields array of field names to exclude from testing
 @return <code>true</code> if the two Objects have tested equals.
 @since 2.1.0
 */
+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                       withBoolean:(jboolean)testTransients
                      withIOSClass:(IOSClass *)reflectUpToClass
                 withNSStringArray:(IOSObjectArray *)excludeFields;

/*!
 @brief <p>This method uses reflection to determine if the two <code>Object</code>s
  are equal.
 </p>
  
 <p>It uses <code>AccessibleObject.setAccessible</code> to gain access to private
  fields. This means that it will throw a security exception if run under
  a security manager, if the permissions are not set up correctly. It is also
  not as efficient as testing explicitly.</p>
  
 <p>Transient members will be not be tested, as they are likely derived
  fields, and not part of the value of the Object.</p>
  
 <p>Static fields will not be tested. Superclass fields will be included.</p>
 @param lhs <code> this </code>  object
 @param rhs the other object
 @param excludeFields array of field names to exclude from testing
 @return <code>true</code> if the two Objects have tested equals.
 */
+ (jboolean)reflectionEqualsWithId:(id)lhs
                            withId:(id)rhs
                 withNSStringArray:(IOSObjectArray *)excludeFields;

#pragma mark Protected

/*!
 @brief Sets the <code>isEquals</code> value.
 @param isEquals The value to set.
 @since 2.1
 */
- (void)setEqualsWithBoolean:(jboolean)isEquals;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersApachecommonsEqualsBuilder)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersApachecommonsEqualsBuilder_initPackagePrivate(OrgMockitoInternalMatchersApachecommonsEqualsBuilder *self);

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsEqualsBuilder *new_OrgMockitoInternalMatchersApachecommonsEqualsBuilder_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersApachecommonsEqualsBuilder *create_OrgMockitoInternalMatchersApachecommonsEqualsBuilder_initPackagePrivate(void);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_(id lhs, id rhs);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withNSStringArray_(id lhs, id rhs, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_(id lhs, id rhs, jboolean testTransients);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_withIOSClass_(id lhs, id rhs, jboolean testTransients, IOSClass *reflectUpToClass);

FOUNDATION_EXPORT jboolean OrgMockitoInternalMatchersApachecommonsEqualsBuilder_reflectionEqualsWithId_withId_withBoolean_withIOSClass_withNSStringArray_(id lhs, id rhs, jboolean testTransients, IOSClass *reflectUpToClass, IOSObjectArray *excludeFields);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersApachecommonsEqualsBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersApachecommonsEqualsBuilder")
