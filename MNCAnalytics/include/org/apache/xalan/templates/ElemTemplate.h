//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemTemplate.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplate")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemTemplate
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplate 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplate 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemTemplate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesElemTemplate_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplate || defined(INCLUDE_OrgApacheXalanTemplatesElemTemplate))
#define OrgApacheXalanTemplatesElemTemplate_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetComposed;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathXPath;
@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief Implement xsl:template.
 @code

   <!ELEMENT xsl:template
   (#PCDATA
    %instructions;
    %result-elements;
    | xsl:param) 
  >
  
  <!ATTLIST xsl:template
    match %pattern; #IMPLIED
    name %qname; #IMPLIED
    priority %priority; #IMPLIED
    mode %qname; #IMPLIED
    %space-att; 
  >
   
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesElemTemplate : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  /*!
   @brief The stack frame size for this template, which is equal to the maximum number 
  of params and variables that can be declared in the template at one time.
   */
  jint m_frameSize_;
  /*!
   @brief The size of the portion of the stack frame that can hold parameter 
  arguments.
   */
  jint m_inArgsSize_;
}
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief This function is called after everything else has been
  recomposed, and allows the template to set remaining
  values that may be based on some other property that
  depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief This after the template's children have been composed.
 */
- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Copy the template contents into the result tree.
 The content of the xsl:template element is the template
  that is instantiated when the template rule is applied.
 @param transformer non-null reference to the the current transform-time state.
 @throw TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "match" attribute.
 The match attribute is a Pattern that identifies the source
  node or nodes to which the rule applies. The match attribute
  is required unless the xsl:template element has a name
  attribute (see [6 Named Templates]). It is an error for the
  value of the match attribute to contain a VariableReference.
 - seealso: <a href="http://www.w3.org/TR/xslt#patterns">patterns in XSLT Specification</a>
 @return Value of the "match" attribute
 */
- (OrgApacheXpathXPath *)getMatch;

/*!
 @brief Get the "mode" attribute.
 Modes allow an element to be processed multiple times,
  each time producing a different result.  If xsl:template
  does not have a match attribute, it must not have a mode attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#modes">modes in XSLT Specification</a>
 @return Value of the "mode" attribute
 */
- (OrgApacheXmlUtilsQName *)getMode;

/*!
 @brief Get the "name" attribute.
 An xsl:template element with a name attribute specifies a named template.
  If an xsl:template element has a name attribute, it may, but need not,
  also have a match attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#named-templates">named-templates in XSLT Specification</a>
 @return Value of the "name" attribute
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "priority" attribute.
 The priority of a template rule is specified by the priority
  attribute on the template rule. The value of this must be a
  real number (positive or negative), matching the production
  Number with an optional leading minus sign (-).
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">conflict in XSLT Specification</a>
 @return The value of the "priority" attribute
 */
- (jdouble)getPriority;

/*!
 @brief Return the public identifier for the current document event.
 <p>This will be the public identifier
 @return A string containing the public identifier, or
          null if none is available.
 - seealso: #getSystemId
 */
- (NSString *)getPublicId;

/*!
 @brief Get the owning stylesheet.
 @return The owning stylesheet.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheet;

/*!
 @brief Get the stylesheet composed (resolves includes and
  imports and has methods on it that return "composed" properties.
 @return The stylesheet composed.
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getStylesheetComposed;

/*!
 @brief Get the root stylesheet.
 @return The root stylesheet for this element
 */
- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheetRoot;

/*!
 @brief Return the system identifier for the current document event.
 <p>If the system identifier is a URL, the parser must resolve it
  fully before passing it to the application.</p>
 @return A string containing the system identifier, or null
          if none is available.
 - seealso: #getPublicId
 */
- (NSString *)getSystemId;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for the element
 */
- (jint)getXSLToken;

/*!
 @brief This function is called during recomposition to
  control how this element is composed.
 @param root The root stylesheet for this transformation.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Set the location information for this element.
 @param locator SourceLocator holding location information
 */
- (void)setLocaterInfoWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Set the "match" attribute.
 The match attribute is a Pattern that identifies the source
  node or nodes to which the rule applies. The match attribute
  is required unless the xsl:template element has a name
  attribute (see [6 Named Templates]). It is an error for the
  value of the match attribute to contain a VariableReference.
 - seealso: <a href="http://www.w3.org/TR/xslt#patterns">patterns in XSLT Specification</a>
 @param v Value to set for the "match" attribute
 */
- (void)setMatchWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

/*!
 @brief Set the "mode" attribute.
 Modes allow an element to be processed multiple times,
  each time producing a different result.  If xsl:template
  does not have a match attribute, it must not have a mode attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#modes">modes in XSLT Specification</a>
 @param v Value to set the "mode" attribute
 */
- (void)setModeWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)v;

/*!
 @brief Set the "name" attribute.
 An xsl:template element with a name attribute specifies a named template.
  If an xsl:template element has a name attribute, it may, but need not,
  also have a match attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#named-templates">named-templates in XSLT Specification</a>
 @param v Value to set the "name" attribute
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)v;

/*!
 @brief Set the "priority" attribute.
 The priority of a template rule is specified by the priority
  attribute on the template rule. The value of this must be a
  real number (positive or negative), matching the production
  Number with an optional leading minus sign (-).
 - seealso: <a href="http://www.w3.org/TR/xslt#conflict">conflict in XSLT Specification</a>
 @param v The value to set for the "priority" attribute
 */
- (void)setPriorityWithDouble:(jdouble)v;

/*!
 @brief Set the owning stylesheet.
 @param sheet The owning stylesheet for this element
 */
- (void)setStylesheetWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)sheet;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemTemplate)

inline jlong OrgApacheXalanTemplatesElemTemplate_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesElemTemplate_serialVersionUID -5283056789965384058LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemTemplate, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemTemplate_init(OrgApacheXalanTemplatesElemTemplate *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTemplate *new_OrgApacheXalanTemplatesElemTemplate_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTemplate *create_OrgApacheXalanTemplatesElemTemplate_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemTemplate)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplate")
