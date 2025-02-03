//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/fepriyadi/dev/android/office/mnc/digital/analytics/mobile-sdk/iospowerlytics/j2objc/java/TTask.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_TTask")
#ifdef RESTRICT_TTask
#define INCLUDE_ALL_TTask 0
#else
#define INCLUDE_ALL_TTask 1
#endif
#undef RESTRICT_TTask

#if !defined (ComPowerAnalyticsTTask_) && (INCLUDE_ALL_TTask || defined(INCLUDE_ComPowerAnalyticsTTask))
#define ComPowerAnalyticsTTask_

#define RESTRICT_AndroidOsAsyncTask 1
#define INCLUDE_AndroidOsAsyncTask 1
#include "android/os/AsyncTask.h"

@class IOSObjectArray;

@interface ComPowerAnalyticsTTask : AndroidOsAsyncTask

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (id)doInBackgroundWithNSObjectArray:(IOSObjectArray *)params;

- (void)onPostExecuteWithId:(id)s;

- (void)onProgressUpdateWithNSObjectArray:(IOSObjectArray *)objs;

- (id)ttBackground;

- (void)ttDone;

- (void)ttDuringWithNSObjectArray:(IOSObjectArray *)objs;

- (void)ttUpdateWithNSObjectArray:(IOSObjectArray *)objs;

@end

J2OBJC_EMPTY_STATIC_INIT(ComPowerAnalyticsTTask)

FOUNDATION_EXPORT void ComPowerAnalyticsTTask_init(ComPowerAnalyticsTTask *self);

FOUNDATION_EXPORT ComPowerAnalyticsTTask *new_ComPowerAnalyticsTTask_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComPowerAnalyticsTTask *create_ComPowerAnalyticsTTask_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComPowerAnalyticsTTask)

#endif

#pragma pop_macro("INCLUDE_ALL_TTask")
