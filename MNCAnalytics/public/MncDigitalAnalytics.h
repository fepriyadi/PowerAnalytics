
///////////////////////////////////////////////////
//
// Version 1.1
//
// Copyright 2018 MNC All rights reserved
//
///////////////////////////////////////////////////

#import <UIKit/UIKit.h>
#import "Core.h"

//extern NSString* const MNCA_CONTENT_ID;
//extern NSString* const MNCA_CONTENT_CATEGORY;
//extern NSString* const MNCA_CONTENT_NAME;
//extern NSString* const MNCA_BTN_NAME;
//extern NSString* const MNCA_BTN_DESC;
//extern NSString* const MNCA_SIGNUP_METHOD;
//extern NSString* const MNCA_SIGN_METHOD;

@interface MncDigitalAnalytics : Core

+ (MncDigitalAnalytics*) initSdk_:(NSString*)clientKey withProductDomain:(NSString*)productDomain;
+ (void) setEnvironmentProduction:(BOOL)production;
+ (void) dryRun:(BOOL)dryRun;
+ (void) setUserID:(NSString*)userID;
+ (void) forceFlush;
+ (void) setStagingUrl:(NSString*)stagingUrl;

//////////////////////////////////////////////////////////////////////////////////////////
// Video Analytics

+ (void) videoLoadWithCategory:(NSString*)category withVideoId:(NSString*)sid withVideoName:(NSString*)name;
+ (void) videoAttributes:(NSString*)attributes;
+ (void) videoTags:(NSString*)tags;
+ (void) videoPlay;
+ (void) videoPause;
+ (void) videoComplete;
+ (void) videoBuffer;
+ (void) videoDurationWithValue:(double)duration;
+ (void) videoPlayingWithPosition:(double)position;
+ (void) videoBitrateWithValue:(int)video withAudio:(int)audio;
+ (void) videoSeekWithPosition:(double)position;
+ (void) videoUnload;
+ (void) videoErrorWithMessage:(NSString*)message;
// Ads
+ (void) videoAdPlay:(NSString*)tag;
+ (void) videoAdPause:(NSString*)tag;
+ (void) videoAdError:(NSString*)tag withMessage:(NSString*)msg;
+ (void) videoAdComplete:(NSString*)tag;
+ (void) videoAdClicked:(NSString*)tag;
+ (void) videoAdSkipped:(NSString*)tag;
//+ (void) videoMediaPlayer:(NSString*)params;
//track screen
//+ (void) appSignIn:(NSDictionary*)params;
//+ (void) appSignOut:(NSDictionary*)params;
//+ (void) appSignUp:(NSDictionary*)params;
//+ (void) appSelectContent:(NSDictionary*)params;
//+ (void) appRemoveFavorite:(NSDictionary*)params;
//+ (void) appAddFavorite:(NSDictionary*)params;
//+ (void) appSearchContent:(NSDictionary*)params;
//+ (void) appScrollContent:(NSDictionary*)params;
//+ (void) appShareContent:(NSDictionary*)params;
//+ (void) appBtnClick:(NSDictionary*)params;
//+ (void) appSetScreen:(NSString*)viewName withScreenName:(NSString*)screenName;
//+ (void) appScreenStart;
//+ (void) appScreenStop;

@end
