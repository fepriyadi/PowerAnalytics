#import "PowerAnalytics.h"
#import <sys/utsname.h>
@interface PowerAnalytics ()

@end

@implementation PowerAnalytics

static PowerAnalytics *mPowerAnalytics;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
- (instancetype) init {
    self = [super self];
    if(self) {
    }
    return self;
}
#pragma clang diagnostic pop

+ (void) dp_:(NSString*)s {
    // Pastikan dibawah ini di uncomment jika mo release
    if(Core_bProduction) { return; }
    NSLog(@"PowerAnalytics:%@", s);
}

//////////////////////////////////////////////////////////////////////////////////////////
// Methods Used by Application

+ (PowerAnalytics*) initSdk_:(NSString*)clientKey withProductDomain:(NSString*)productDomain {
    if(mPowerAnalytics == nil) {
        mPowerAnalytics = [[PowerAnalytics alloc] init];
    }
    [mPowerAnalytics setClientStuffWithNSString:@"ios"
        withNSString:clientKey
        withNSString:productDomain
        withNSString:[[NSBundle mainBundle] bundleIdentifier]
        withNSString:nil
    ];
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    [PowerAnalytics dp_:[NSString stringWithFormat:@"initSdk_:clientKey: %@ :productDomain: %@ :docpath: %@",
        clientKey, productDomain, [paths objectAtIndex:0]
    ]];
    return mPowerAnalytics;
}
+ (void) setEnvironmentProduction:(BOOL)production {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"setEnvironmentProduction: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"setEnvironmentProduction:production: %@", production?@"Yes":@"No"]];
    [mPowerAnalytics setEnvironmentProduction_WithBoolean:production];
}
+ (void) dryRun:(BOOL)dryRun {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"dryRun: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"dryRun:dryRun: %@", dryRun?@"Yes":@"No"]];
    [mPowerAnalytics dryRun_WithBoolean:dryRun];
}
+ (void) setUserID:(NSString*)userID {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"setUserID: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"setUserID:userID: %@", userID]];
    [mPowerAnalytics setClientStuffWithNSString:@"ios"
        withNSString:nil withNSString:nil withNSString:nil
        withNSString:userID
    ];
}
+ (void) forceFlush {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"setUserID: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:@"forceFlush"];
    [mPowerAnalytics flushDataWithBoolean:NO withBoolean:NO];
}
+ (void) setStagingUrl:(NSString *)stagingUrl {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"setStagingUrl: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"setStagingUrl:url: %@", stagingUrl]];
    [mPowerAnalytics setStagingUrl_WithNSString:stagingUrl];
}


//////////////////////////////////////////////////////////////////////////////////////////
// Video Analytics

+ (void) videoLoadWithCategory:(NSString*)category withVideoId:(NSString*)sid withVideoName:(NSString*)name {
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoLoad:category: %@ :id: %@ :name: %@", category, sid, name]];
    if(mPowerAnalytics == nil) {
        mPowerAnalytics = [[PowerAnalytics alloc] init];
        [mPowerAnalytics setClientStuffWithNSString:@"ios"
            withNSString:nil withNSString:nil withNSString:nil withNSString:nil
        ];
        [mPowerAnalytics setLastEnvironment];
    }
    [mPowerAnalytics videoLoad_WithNSString:category withNSString:sid withNSString:name];
}
+ (void) videoAttributes:(NSString*)attributes {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAttributes: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAttributes:attributes: %@", attributes]];
    [mPowerAnalytics videoAttributes_WithNSString:attributes];
}
+ (void) videoTags:(NSString*)tags {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoTags: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoTags:tags: %@", tags]];
    [mPowerAnalytics videoTags_WithNSString:tags];
}
+ (void) videoPlay {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoPlay: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoPlay_] == NO) { return; }
    [PowerAnalytics dp_:@"videoPlay"];
}
+ (void) videoPause {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoPause: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:@"videoPause"];
    [mPowerAnalytics videoPause_];
}
+ (void) videoComplete {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoComplete: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:@"videoComplete"];
    [mPowerAnalytics videoComplete_];
}
+ (void) videoBuffer {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoBuffer: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoBuffer_] == NO) { return; }
    [PowerAnalytics dp_:@"videoBuffer"];
}
+ (void) videoDurationWithValue:(double)duration {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoDuration: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoDuration_WithDouble:duration] == NO) { return; }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoDuration:duration: %.2f", duration]];
}
+ (void) videoPlayingWithPosition:(double)position {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoPlayingWithPosition: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoPlaying_WithDouble:position] == NO) { return; }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoPlaying:position: %.2f", position]];
}
+ (void) videoBitrateWithValue:(int)video withAudio:(int)audio {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoBitrateWithValue: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoBitrate_WithInt:video withInt:audio] == NO) { return; }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoBitrate:video: %d :audio: %d", video, audio]];
}
+ (void) videoSeekWithPosition:(double)position {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoSeekWithPosition: SDK not initalized"];
        return;
    }
    if([mPowerAnalytics videoSeek_WithDouble:position] == NO) { return; }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoSeek:position: %.2f", position]];
}
+ (void) videoUnload {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoUnload: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:@"videoUnload"];
    [mPowerAnalytics videoUnload_];
}
+ (void) videoErrorWithMessage:(NSString*)message {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoErrorWithMessage: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoError:message: %@", message]];
    [mPowerAnalytics videoError_WithNSString:message];
}
// Ads
+ (void) videoAdPlay:(NSString*)tag {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdPlay: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdPlay:tag: %@", tag]];
    [mPowerAnalytics videoAdPlay_WithNSString:tag];
}
+ (void) videoAdPause:(NSString*)tag {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdPause: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdPause:tag: %@", tag]];
    [mPowerAnalytics videoAdPause_WithNSString:tag];
}
+ (void) videoAdError:(NSString*)tag withMessage:(NSString*)msg {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdError: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdError:tag: %@ :msg: %@", tag, msg]];
    [mPowerAnalytics videoAdError_WithNSString:tag withNSString:msg];
}
+ (void) videoAdComplete:(NSString*)tag {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdComplete: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdComplete:tag: %@", tag]];
    [mPowerAnalytics videoAdComplete_WithNSString:tag];
}
+ (void) videoAdClicked:(NSString*)tag {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdClicked: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdClicked:tag: %@", tag]];
    [mPowerAnalytics videoAdClicked_WithNSString:tag];
}
+ (void) videoAdSkipped:(NSString*)tag {
    if(mPowerAnalytics == nil) {
        [PowerAnalytics dp_:@"videoAdSkipped: SDK not initalized"];
        return;
    }
    [PowerAnalytics dp_:[NSString stringWithFormat:@"videoAdSkipped:tag: %@", tag]];
    [mPowerAnalytics videoAdSkipped_WithNSString:tag];
}

//////////////////////////////////////////////////////////////////////////////////////////
// Mandatory Overridden Methods

- (NSString*) getAppStringWithNSString:(NSString*)fname {
    NSString *s = [super getAppStringWithNSString:fname];
    if(s != nil) { return s; }
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docdir = [paths objectAtIndex:0];
    NSString *filePath = [NSString stringWithFormat:@"%@/%@", docdir, fname];
    s = [[NSString alloc] initWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:nil];
    // [PowerAnalytics dp_:[NSString stringWithFormat:@"getAppString:fname: %@ :s: %@", fname, s]];
    return s;
}

- (jboolean) setAppStringWithNSString:(NSString *)fname withNSString:(NSString *)s {
    BOOL bs = [super setAppStringWithNSString:fname withNSString:s];
    if(bs) { return YES; }
    // [PowerAnalytics dp_:[NSString stringWithFormat:@"setAppString:fname: %@ :s: %@", fname, s]];
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docdir = [paths objectAtIndex:0];
    NSString *filePath = [NSString stringWithFormat:@"%@/%@", docdir, fname];
    [s writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
    return YES;
}

- (NSString*) getDeviceDetails {
    UIDevice *device = [UIDevice currentDevice];
    NSString *s = [NSString stringWithFormat:@"iOS,%@,Apple,%@,Apple", [device systemVersion], [PowerAnalytics getDeviceName]];
    [PowerAnalytics dp_:[NSString stringWithFormat:@"getDeviceDetail %@", s]];
    return s;
}

- (NSString*) getAppVersion {
    NSDictionary *info = [[NSBundle mainBundle] infoDictionary];
    NSString *version = [info objectForKey:@"CFBundleShortVersionString"];
    return version;
}

+ (NSString*) getDeviceName{
    struct utsname systemInfo;
    uname(&systemInfo);
    NSString* code = [NSString stringWithCString:systemInfo.machine
                                        encoding:NSUTF8StringEncoding];
    if(code == nil)
        return @"Unknown";
    else
        return code;
}

@end
