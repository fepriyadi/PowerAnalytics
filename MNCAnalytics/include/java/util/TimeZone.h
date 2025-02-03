//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/TimeZone.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTimeZone")
#ifdef RESTRICT_JavaUtilTimeZone
#define INCLUDE_ALL_JavaUtilTimeZone 0
#else
#define INCLUDE_ALL_JavaUtilTimeZone 1
#endif
#undef RESTRICT_JavaUtilTimeZone

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilTimeZone_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone))
#define JavaUtilTimeZone_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSIntArray;
@class IOSObjectArray;
@class JavaUtilDate;
@class JavaUtilLocale;

/*!
 @brief <code>TimeZone</code> represents a time zone offset, and also figures out daylight
  savings.
 <p>
  Typically, you get a <code>TimeZone</code> using <code>getDefault</code>
  which creates a <code>TimeZone</code> based on the time zone where the program
  is running. For example, for a program running in Japan, <code>getDefault</code>
  creates a <code>TimeZone</code> object based on Japanese Standard Time. 
 <p>
  You can also get a <code>TimeZone</code> using <code>getTimeZone</code>
  along with a time zone ID. For instance, the time zone ID for the
  U.S. Pacific Time zone is "America/Los_Angeles". So, you can get a U.S. Pacific Time 
 <code>TimeZone</code> object with: 
 <blockquote>@code

  TimeZone tz = TimeZone.getTimeZone("America/Los_Angeles"); 
  
@endcode</blockquote>
  You can use the <code>getAvailableIDs</code> method to iterate through
  all the supported time zone IDs. You can then choose a
  supported ID to get a <code>TimeZone</code>.
  If the time zone you want is not represented by one of the
  supported IDs, then a custom time zone ID can be specified to
  produce a TimeZone. The syntax of a custom time zone ID is: 
 <blockquote>@code

   <a name="CustomID"><i>CustomID:</i></a>
                  <code>GMT</code> <i>Sign</i> <i>Hours</i> <code>:</code> <i>Minutes</i>
                  <code>GMT</code> <i>Sign</i> <i>Hours</i> <i>Minutes</i>
                  <code>GMT</code> <i>Sign</i> <i>Hours</i>
   <i>Sign:</i> one of
                  <code>+ -</code>
   <i>Hours:</i>
                  <i>Digit</i>
                  <i>Digit</i> <i>Digit</i>
   <i>Minutes:</i>
                  <i>Digit</i> <i>Digit</i>
   <i>Digit:</i> one of
                  <code>0 1 2 3 4 5 6 7 8 9</code>
   
@endcode</blockquote>
  
 <i>Hours</i> must be between 0 to 23 and <i>Minutes</i> must be
  between 00 to 59.  For example, "GMT+10" and "GMT+0010" mean ten
  hours and ten minutes ahead of GMT, respectively. 
 <p>
  The format is locale independent and digits must be taken from the
  Basic Latin block of the Unicode standard. No daylight saving time
  transition schedule can be specified with a custom time zone ID. If
  the specified string doesn't match the syntax, <code>"GMT"</code>
  is used. 
 <p>
  When creating a <code>TimeZone</code>, the specified custom time
  zone ID is normalized in the following syntax: 
 <blockquote>@code

   <a name="NormalizedCustomID"><i>NormalizedCustomID:</i></a>
                  <code>GMT</code> <i>Sign</i> <i>TwoDigitHours</i> <code>:</code> <i>Minutes</i>
   <i>Sign:</i> one of
                  <code>+ -</code>
   <i>TwoDigitHours:</i>
                  <i>Digit</i> <i>Digit</i>
   <i>Minutes:</i>
                  <i>Digit</i> <i>Digit</i>
   <i>Digit:</i> one of
                  <code>0 1 2 3 4 5 6 7 8 9</code>
   
@endcode</blockquote>
  For example, TimeZone.getTimeZone("GMT-8").getID() returns "GMT-08:00". 
 <h3>Three-letter time zone IDs</h3>
  For compatibility with JDK 1.1.x, some other three-letter time zone IDs
  (such as "PST", "CTT", "AST") are also supported. However, <strong>their
  use is deprecated</strong> because the same abbreviation is often used
  for multiple time zones (for example, "CST" could be U.S. "Central Standard
  Time" and "China Standard Time"), and the Java platform can then only
  recognize one of them.
 - seealso: Calendar
 - seealso: GregorianCalendar
 - seealso: SimpleTimeZone
 @author Mark Davis, David Goldsmith, Chen-Lieh Huang, Alan Liu
 @since JDK1.1
 */
@interface JavaUtilTimeZone : NSObject < JavaIoSerializable, NSCopying >
@property (readonly, class) jint SHORT NS_SWIFT_NAME(SHORT);
@property (readonly, class) jint LONG NS_SWIFT_NAME(LONG);
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, class, strong) JavaUtilTimeZone *NO_TIMEZONE NS_SWIFT_NAME(NO_TIMEZONE);

#pragma mark Public

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors, typically
  implicit.)
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a copy of this <code>TimeZone</code>.
 @return a clone of this <code>TimeZone</code>
 */
- (id)java_clone;

/*!
 @brief Returns a string representation of an offset from UTC.
 <p>The format is "[GMT](+|-)HH[:]MM". The output is not localized.
 @param includeGmt true to include "GMT", false to exclude
 @param includeMinuteSeparator true to include the separator between hours and minutes, false      to exclude.
 @param offsetMillis the offset from UTC
 */
+ (NSString *)createGmtOffsetStringWithBoolean:(jboolean)includeGmt
                                   withBoolean:(jboolean)includeMinuteSeparator
                                       withInt:(jint)offsetMillis;

/*!
 @brief Gets all the available IDs supported.
 @return an array of IDs.
 */
+ (IOSObjectArray *)getAvailableIDs;

/*!
 @brief Gets the available IDs according to the given time zone offset in milliseconds.
 @param rawOffset the given time zone GMT offset in milliseconds.
 @return an array of IDs, where the time zone for that ID has
  the specified GMT offset. For example, "America/Phoenix" and "America/Denver"
  both have GMT-07:00, but differ in daylight saving behavior.
 - seealso: #getRawOffset()
 */
+ (IOSObjectArray *)getAvailableIDsWithInt:(jint)rawOffset;

/*!
 @brief Gets the default <code>TimeZone</code> for this host.
 The source of the default <code>TimeZone</code>
  may vary with implementation.
 @return a default <code>TimeZone</code>.
 - seealso: #setDefault
 */
+ (JavaUtilTimeZone *)getDefault;

/*!
 @brief Returns a long standard time name of this <code>TimeZone</code> suitable for
  presentation to the user in the default locale.
 <p>This method is equivalent to: 
 <blockquote>@code

  getDisplayName(false, <code>LONG</code>,
                 Locale.getDefault(<code>Locale.Category.DISPLAY</code>))
   
@endcode</blockquote>
 @return the human-readable name of this time zone in the default locale.
 @since 1.2
 - seealso: #getDisplayName(boolean, int, Locale)
 - seealso: Locale#getDefault(Locale.Category)
 - seealso: Locale.Category
 */
- (NSString *)getDisplayName;

/*!
 @brief Returns a name in the specified <code>style</code> of this <code>TimeZone</code>
  suitable for presentation to the user in the default locale.If the
  specified <code>daylight</code> is <code>true</code>, a Daylight Saving Time name
  is returned (even if this <code>TimeZone</code> doesn't observe Daylight Saving
  Time).
 Otherwise, a Standard Time name is returned. 
 <p>This method is equivalent to: 
 <blockquote>@code

  getDisplayName(daylight, style,
                 Locale.getDefault(<code>Locale.Category.DISPLAY</code>))
   
@endcode</blockquote>
 @param daylight_<code>true</code>  specifying a Daylight Saving Time name, or                  
 <code>false</code>  specifying a Standard Time name
 @param style either <code>LONG</code>  or <code>SHORT</code>
 @return the human-readable name of this time zone in the default locale.
 @throw IllegalArgumentExceptionif <code>style</code> is invalid.
 @since 1.2
 - seealso: #getDisplayName(boolean, int, Locale)
 - seealso: Locale#getDefault(Locale.Category)
 - seealso: Locale.Category
 - seealso: java.text.DateFormatSymbols#getZoneStrings()
 */
- (NSString *)getDisplayNameWithBoolean:(jboolean)daylight_
                                withInt:(jint)style;

/*!
 @brief Returns the <code>short</code> or <code>long</code> name of this time
  zone with either standard or daylight time, as written in <code>locale</code>.
 If the name is not available, the result is in the format 
 <code>GMT[+-]hh:mm</code>.
 @param daylightTime true for daylight time, false for standard time.
 @param style either <code>TimeZone.LONG</code>  or <code>TimeZone.SHORT</code> .
 @param locale the display locale.
 */
- (NSString *)getDisplayNameWithBoolean:(jboolean)daylightTime
                                withInt:(jint)style
                     withJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns a long standard time name of this <code>TimeZone</code> suitable for
  presentation to the user in the specified <code>locale</code>.
 <p>This method is equivalent to: 
 <blockquote>@code

  getDisplayName(false, <code>LONG</code>, locale) 
  
@endcode</blockquote>
 @param locale the locale in which to supply the display name.
 @return the human-readable name of this time zone in the given locale.
 @throw NullPointerExceptionif <code>locale</code> is <code>null</code>.
 @since 1.2
 - seealso: #getDisplayName(boolean, int, Locale)
 */
- (NSString *)getDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the amount of time to be added to local standard time
  to get local wall clock time.
 <p>The default implementation returns 3600000 milliseconds
  (i.e., one hour) if a call to <code>useDaylightTime()</code>
  returns <code>true</code>. Otherwise, 0 (zero) is returned. 
 <p>If an underlying <code>TimeZone</code> implementation subclass
  supports historical and future Daylight Saving Time schedule
  changes, this method returns the amount of saving time of the
  last known Daylight Saving Time rule that can be a future
  prediction. 
 <p>If the amount of saving time at any given time stamp is
  required, construct a <code>Calendar</code> with this <code>TimeZone</code>
  and the time stamp, and call <code>Calendar.get</code>
 <code>(</code><code>Calendar.DST_OFFSET</code><code>)</code>.
 @return the amount of saving time in milliseconds
 @since 1.4
 - seealso: #inDaylightTime(Date)
 - seealso: #getOffset(long)
 - seealso: #getOffset(int,int,int,int,int,int)
 - seealso: Calendar#ZONE_OFFSET
 */
- (jint)getDSTSavings;

/*!
 @brief Gets the ID of this time zone.
 @return the ID of this time zone.
 */
- (NSString *)getID;

/*!
 @brief Gets the time zone offset, for current date, modified in case of
  daylight savings.This is the offset to add to UTC to get local time.
 <p>
  This method returns a historically correct offset if an
  underlying <code>TimeZone</code> implementation subclass
  supports historical Daylight Saving Time schedule and GMT
  offset changes.
 @param era the era of the given date.
 @param year the year in the given date.
 @param month the month in the given date.  Month is 0-based. e.g., 0 for January.
 @param day the day-in-month of the given date.
 @param dayOfWeek the day-of-week of the given date.
 @param milliseconds the milliseconds in day in  <em> standard </em>
   local time.
 @return the offset in milliseconds to add to GMT to get local time.
 - seealso: Calendar#ZONE_OFFSET
 - seealso: Calendar#DST_OFFSET
 */
- (jint)getOffsetWithInt:(jint)era
                 withInt:(jint)year
                 withInt:(jint)month
                 withInt:(jint)day
                 withInt:(jint)dayOfWeek
                 withInt:(jint)milliseconds;

/*!
 @brief Returns the offset of this time zone from UTC at the specified
  date.If Daylight Saving Time is in effect at the specified
  date, the offset value is adjusted with the amount of daylight
  saving.
 <p>
  This method returns a historically correct offset value if an
  underlying TimeZone implementation subclass supports historical
  Daylight Saving Time schedule and GMT offset changes.
 @param date the date represented in milliseconds since January 1, 1970 00:00:00 GMT
 @return the amount of time in milliseconds to add to UTC to get local time.
 - seealso: Calendar#ZONE_OFFSET
 - seealso: Calendar#DST_OFFSET
 @since 1.4
 */
- (jint)getOffsetWithLong:(jlong)date;

/*!
 @brief Returns the amount of time in milliseconds to add to UTC to get
  standard time in this time zone.Because this value is not
  affected by daylight saving time, it is called <I>raw
  offset</I>.
 <p>
  If an underlying <code>TimeZone</code> implementation subclass
  supports historical GMT offset changes, the method returns the
  raw offset value of the current date. In Honolulu, for example,
  its raw offset changed from GMT-10:30 to GMT-10:00 in 1947, and
  this method always returns -36000000 milliseconds (i.e., -10
  hours).
 @return the amount of raw offset time in milliseconds to add to UTC.
 - seealso: Calendar#ZONE_OFFSET
 */
- (jint)getRawOffset;

/*!
 @brief Gets the <code>TimeZone</code> for the given ID.
 @param id_ the ID for a  <code> TimeZone </code> , either an abbreviation
   such as "PST", a full name such as "America/Los_Angeles", or a custom  ID such as "GMT-8:00". Note that the support of abbreviations is
   for JDK 1.1.x compatibility only and full names should be used.
 @return the specified <code>TimeZone</code>, or the GMT zone if the given ID
  cannot be understood.
 */
+ (JavaUtilTimeZone *)getTimeZoneWithNSString:(NSString *)id_;

/*!
 @brief Returns true if this zone has the same rule and offset as another zone.
 That is, if this zone differs only in ID, if at all.  Returns false
  if the other zone is null.
 @param other the  <code> TimeZone </code>  object to be compared with
 @return true if the other zone is not null and is the same as this one,
  with the possible exception of the ID
 @since 1.2
 */
- (jboolean)hasSameRulesWithJavaUtilTimeZone:(JavaUtilTimeZone *)other;

/*!
 @brief Queries if the given <code>date</code> is in Daylight Saving Time in
  this time zone.
 @param date the given Date.
 @return <code>true</code> if the given date is in Daylight Saving Time,
          <code>false</code>, otherwise.
 */
- (jboolean)inDaylightTimeWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Returns <code>true</code> if this <code>TimeZone</code> is currently in
  Daylight Saving Time, or if a transition from Standard Time to
  Daylight Saving Time occurs at any future time.
 <p>The default implementation returns <code>true</code> if 
 <code>useDaylightTime()</code> or <code>inDaylightTime(new Date())</code>
  returns <code>true</code>.
 @return <code>true</code> if this <code>TimeZone</code> is currently in
  Daylight Saving Time, or if a transition from Standard Time to
  Daylight Saving Time occurs at any future time; <code>false</code>
  otherwise.
 @since 1.7
 - seealso: #useDaylightTime()
 - seealso: #inDaylightTime(Date)
 - seealso: Calendar#DST_OFFSET
 */
- (jboolean)observesDaylightTime;

/*!
 @brief Sets the <code>TimeZone</code> that is returned by the <code>getDefault</code>
  method.
 <code>timeZone</code> is cached. If <code>timeZone</code> is null, the cached
  default <code>TimeZone</code> is cleared. This method doesn't change the value
  of the <code>user.timezone</code> property.
 @param timeZone the new default <code>TimeZone</code> , or null
 - seealso: #getDefault
 */
+ (void)setDefaultWithJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone;

/*!
 @brief Sets the time zone ID.This does not change any other data in
  the time zone object.
 @param ID the new time zone ID.
 */
- (void)setIDWithNSString:(NSString *)ID;

/*!
 @brief Sets the base time zone offset to GMT.
 This is the offset to add to UTC to get local time. 
 <p>
  If an underlying <code>TimeZone</code> implementation subclass
  supports historical GMT offset changes, the specified GMT
  offset is set as the latest GMT offset and the difference from
  the known latest GMT offset value is used to adjust all
  historical GMT offset values.
 @param offsetMillis the given base time zone offset to GMT.
 */
- (void)setRawOffsetWithInt:(jint)offsetMillis;

/*!
 @brief Queries if this <code>TimeZone</code> uses Daylight Saving Time.
 <p>If an underlying <code>TimeZone</code> implementation subclass
  supports historical and future Daylight Saving Time schedule
  changes, this method refers to the last known Daylight Saving Time
  rule that can be a future prediction and may not be the same as
  the current rule. Consider calling <code>observesDaylightTime()</code>
  if the current rule should also be taken into account.
 @return <code>true</code> if this <code>TimeZone</code> uses Daylight Saving Time,
          <code>false</code>, otherwise.
 - seealso: #inDaylightTime(Date)
 - seealso: Calendar#DST_OFFSET
 */
- (jboolean)useDaylightTime;

#pragma mark Package-Private

/*!
 @brief Returns the reference to the default TimeZone object.This
  method doesn't create a clone.
 */
+ (JavaUtilTimeZone *)getDefaultRef;

/*!
 @brief Gets the raw GMT offset and the amount of daylight saving of this
  time zone at the given time.
 @param date the milliseconds (since January 1, 1970,  00:00:00.000 GMT) at which the time zone offset and daylight
   saving amount are found
 @param offsets an array of int where the raw GMT offset  (offset[0]) and daylight saving amount (offset[1]) are stored,
   or null if those values are not needed. The method assumes that
   the length of the given array is two or larger.
 @return the total amount of the raw GMT offset and daylight
  saving at the specified date.
 - seealso: Calendar#ZONE_OFFSET
 - seealso: Calendar#DST_OFFSET
 */
- (jint)getOffsetsWithLong:(jlong)date
              withIntArray:(IOSIntArray *)offsets;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTimeZone)

/*!
 @brief A style specifier for <code>getDisplayName()</code> indicating
  a short name, such as "PST."
 - seealso: #LONG
 @since 1.2
 */
inline jint JavaUtilTimeZone_get_SHORT(void);
#define JavaUtilTimeZone_SHORT 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimeZone, SHORT, jint)

/*!
 @brief A style specifier for <code>getDisplayName()</code> indicating
  a long name, such as "Pacific Standard Time."
 - seealso: #SHORT
 @since 1.2
 */
inline jint JavaUtilTimeZone_get_LONG(void);
#define JavaUtilTimeZone_LONG 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimeZone, LONG, jint)

inline jlong JavaUtilTimeZone_get_serialVersionUID(void);
#define JavaUtilTimeZone_serialVersionUID 3581463369166924961LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilTimeZone, serialVersionUID, jlong)

/*!
 @brief The null constant as a TimeZone.
 */
inline JavaUtilTimeZone *JavaUtilTimeZone_get_NO_TIMEZONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_NO_TIMEZONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilTimeZone, NO_TIMEZONE, JavaUtilTimeZone *)

FOUNDATION_EXPORT void JavaUtilTimeZone_init(JavaUtilTimeZone *self);

FOUNDATION_EXPORT NSString *JavaUtilTimeZone_createGmtOffsetStringWithBoolean_withBoolean_withInt_(jboolean includeGmt, jboolean includeMinuteSeparator, jint offsetMillis);

FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_getTimeZoneWithNSString_(NSString *id_);

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_getAvailableIDsWithInt_(jint rawOffset);

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_getAvailableIDs(void);

FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_getDefault(void);

FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_getDefaultRef(void);

FOUNDATION_EXPORT void JavaUtilTimeZone_setDefaultWithJavaUtilTimeZone_(JavaUtilTimeZone *timeZone);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone)

#endif

#if !defined (JavaUtilTimeZone_GMTHolder_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone_GMTHolder))
#define JavaUtilTimeZone_GMTHolder_

@class JavaUtilTimeZone;

@interface JavaUtilTimeZone_GMTHolder : NSObject
@property (readonly, class, strong) JavaUtilTimeZone *INSTANCE NS_SWIFT_NAME(INSTANCE);

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(JavaUtilTimeZone_GMTHolder)

inline JavaUtilTimeZone *JavaUtilTimeZone_GMTHolder_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_GMTHolder_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilTimeZone_GMTHolder, INSTANCE, JavaUtilTimeZone *)

FOUNDATION_EXPORT void JavaUtilTimeZone_GMTHolder_init(JavaUtilTimeZone_GMTHolder *self);

FOUNDATION_EXPORT JavaUtilTimeZone_GMTHolder *new_JavaUtilTimeZone_GMTHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimeZone_GMTHolder *create_JavaUtilTimeZone_GMTHolder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone_GMTHolder)

#endif

#if !defined (JavaUtilTimeZone_UTCHolder_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone_UTCHolder))
#define JavaUtilTimeZone_UTCHolder_

@class JavaUtilTimeZone;

@interface JavaUtilTimeZone_UTCHolder : NSObject
@property (readonly, class, strong) JavaUtilTimeZone *INSTANCE NS_SWIFT_NAME(INSTANCE);

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(JavaUtilTimeZone_UTCHolder)

inline JavaUtilTimeZone *JavaUtilTimeZone_UTCHolder_get_INSTANCE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilTimeZone *JavaUtilTimeZone_UTCHolder_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilTimeZone_UTCHolder, INSTANCE, JavaUtilTimeZone *)

FOUNDATION_EXPORT void JavaUtilTimeZone_UTCHolder_init(JavaUtilTimeZone_UTCHolder *self);

FOUNDATION_EXPORT JavaUtilTimeZone_UTCHolder *new_JavaUtilTimeZone_UTCHolder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimeZone_UTCHolder *create_JavaUtilTimeZone_UTCHolder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone_UTCHolder)

#endif

#if !defined (JavaUtilTimeZone_AvailableIDsGetter_) && (INCLUDE_ALL_JavaUtilTimeZone || defined(INCLUDE_JavaUtilTimeZone_AvailableIDsGetter))
#define JavaUtilTimeZone_AvailableIDsGetter_

@class IOSObjectArray;

/*!
 @brief J2ObjC added.
 A static class is used for lazy-initialization of available time zone IDs.
 */
@interface JavaUtilTimeZone_AvailableIDsGetter : NSObject
@property (readonly, class, strong) IOSObjectArray *IDS NS_SWIFT_NAME(IDS);

#pragma mark Package-Private

- (instancetype __nonnull)init;

+ (IOSObjectArray *)getAllIds;

@end

J2OBJC_STATIC_INIT(JavaUtilTimeZone_AvailableIDsGetter)

inline IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_get_IDS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_IDS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilTimeZone_AvailableIDsGetter, IDS, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilTimeZone_AvailableIDsGetter_init(JavaUtilTimeZone_AvailableIDsGetter *self);

FOUNDATION_EXPORT JavaUtilTimeZone_AvailableIDsGetter *new_JavaUtilTimeZone_AvailableIDsGetter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTimeZone_AvailableIDsGetter *create_JavaUtilTimeZone_AvailableIDsGetter_init(void);

FOUNDATION_EXPORT IOSObjectArray *JavaUtilTimeZone_AvailableIDsGetter_getAllIds(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTimeZone_AvailableIDsGetter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilTimeZone")
