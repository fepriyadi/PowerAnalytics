#import "MncDigitalAnalytics.h"
#import <sys/utsname.h>
@interface MncDigitalAnalytics ()

@end

@implementation MncDigitalAnalytics

static MncDigitalAnalytics *mMncDigitalAnalytics;

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
    NSLog(@"MncDigitalAnalytics:%@", s);
}

//////////////////////////////////////////////////////////////////////////////////////////
// Methods Used by Application

+ (MncDigitalAnalytics*) initSdk_:(NSString*)clientKey withProductDomain:(NSString*)productDomain {
    if(mMncDigitalAnalytics == nil) {
        mMncDigitalAnalytics = [[MncDigitalAnalytics alloc] init];
    }
    if (clientKey == (id)[NSNull null] || clientKey.length == 0 ) {
        [MncDigitalAnalytics dp_:@"initSdk_: Can't init SDK with 'null/empty' clientKey"];
        return nil;
    }
    [mMncDigitalAnalytics setClientStuffWithNSString:@"ios"
        withNSString:clientKey
        withNSString:productDomain
        withNSString:[[NSBundle mainBundle] bundleIdentifier]
        withNSString:nil
    ];
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"initSdk_:clientKey: %@ :productDomain: %@ :docpath: %@",
        clientKey, productDomain, [paths objectAtIndex:0]
    ]];
    return mMncDigitalAnalytics;
}
+ (void) setEnvironmentProduction:(BOOL)production {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"setEnvironmentProduction: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"setEnvironmentProduction:production: %@", production?@"Yes":@"No"]];
    [mMncDigitalAnalytics setEnvironmentProduction_WithBoolean:production];
}
+ (void) dryRun:(BOOL)dryRun {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"dryRun: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"dryRun:dryRun: %@", dryRun?@"Yes":@"No"]];
    [mMncDigitalAnalytics dryRun_WithBoolean:dryRun];
}
+ (void) setUserID:(NSString*)userID {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"setUserID: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"setUserID:userID: %@", userID]];
    [mMncDigitalAnalytics setClientStuffWithNSString:@"ios"
        withNSString:nil withNSString:nil withNSString:nil
        withNSString:userID
    ];
}
+ (void) forceFlush {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"setUserID: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"forceFlush"];
    [mMncDigitalAnalytics flushDataWithBoolean:NO withBoolean:NO];
}
+ (void) setStagingUrl:(NSString *)stagingUrl {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"setStagingUrl: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"setStagingUrl:url: %@", stagingUrl]];
    [mMncDigitalAnalytics setStagingUrl_WithNSString:stagingUrl];
}


//////////////////////////////////////////////////////////////////////////////////////////
// Video Analytics

+ (void) videoLoadWithCategory:(NSString*)category withVideoId:(NSString*)sid withVideoName:(NSString*)name {
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoLoad:category: %@ :id: %@ :name: %@", category, sid, name]];
    if(mMncDigitalAnalytics == nil) {
        mMncDigitalAnalytics = [[MncDigitalAnalytics alloc] init];
        [mMncDigitalAnalytics setClientStuffWithNSString:@"ios"
            withNSString:nil withNSString:nil withNSString:nil withNSString:nil
        ];
        [mMncDigitalAnalytics setLastEnvironment];
    }
    [mMncDigitalAnalytics videoLoad_WithNSString:category withNSString:sid withNSString:name];
}
+ (void) videoAttributes:(NSString*)attributes {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAttributes: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAttributes:attributes: %@", attributes]];
    [mMncDigitalAnalytics videoAttributes_WithNSString:attributes];
}
+ (void) videoTags:(NSString*)tags {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoTags: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoTags:tags: %@", tags]];
    [mMncDigitalAnalytics videoTags_WithNSString:tags];
}
+ (void) videoPlay {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoPlay: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoPlay_] == NO) { return; }
    [MncDigitalAnalytics dp_:@"videoPlay"];
}
+ (void) videoPause {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoPause: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoPause"];
    [mMncDigitalAnalytics videoPause_];
}
+ (void) videoPause:(NSString*)videoName {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoPauseWithName: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoPauseWithName"];
    [mMncDigitalAnalytics videoPause_WithNSString:videoName];
}
+ (void) videoComplete {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoComplete: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoComplete"];
    [mMncDigitalAnalytics videoComplete_];
}
+ (void) videoBuffer {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoBuffer: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoBuffer_] == NO) { return; }
    [MncDigitalAnalytics dp_:@"videoBuffer"];
}
+ (void) videoDurationWithValue:(double)duration {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoDuration: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoDuration_WithDouble:duration] == NO) { return; }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoDuration:duration: %.2f", duration]];
}
+ (void) videoPlayingWithPosition:(double)position {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoPlayingWithPosition: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoPlaying_WithDouble:position] == NO) { return; }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoPlaying:position: %.2f", position]];
}
+ (void) videoBitrateWithValue:(int)video withAudio:(int)audio {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoBitrateWithValue: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoBitrate_WithInt:video withInt:audio] == NO) { return; }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoBitrate:video: %d :audio: %d", video, audio]];
}
+ (void) videoSeekWithPosition:(double)position {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoSeekWithPosition: SDK not initalized"];
        return;
    }
    if([mMncDigitalAnalytics videoSeek_WithDouble:position] == NO) { return; }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoSeek:position: %.2f", position]];
}
+ (void) videoUnload {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoUnload: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoUnload"];
    [mMncDigitalAnalytics videoUnload_];
}
+ (void) videoUnload:(NSString*)videoName {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoUnloadWithName: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoUnloadWithName"];
    [mMncDigitalAnalytics videoUnload_WithNSString:videoName];
}
+ (void) videoErrorWithMessage:(NSString*)message {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoErrorWithMessage: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoError:message: %@", message]];
    [mMncDigitalAnalytics videoError_WithNSString:message];
}
// Ads
+ (void) videoAdLoad:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdload: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdload:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdLoad_WithNSString:tag];
}
+ (void) videoAdUnload {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdUnload: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoAdUnload"];
    [mMncDigitalAnalytics videoAdUnload_];
}
+ (void) videoAdBuffer {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdBuffer: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:@"videoAdBuffer"];
    [mMncDigitalAnalytics videoAdBuffer_];
}
+ (void) videoAdAbr:(int)bitrate {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdAbr: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdAbr:bitrate: %d", bitrate]];
    [mMncDigitalAnalytics videoAdAbr_WithInt:bitrate];
}
+ (void) videoAdVbr:(int)bitrate {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdVbr: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdVbr:bitrate: %d", bitrate]];
    [mMncDigitalAnalytics videoAdVbr_WithInt:bitrate];
}
+ (void) videoAdPlay:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdPlay: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdPlay:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdPlay_WithNSString:tag];
}
+ (void) videoAdPause:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdPause: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdPause:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdPause_WithNSString:tag];
}
+ (void) videoAdError:(NSString*)tag withMessage:(NSString*)msg {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdError: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdError:tag: %@ :msg: %@", tag, msg]];
    [mMncDigitalAnalytics videoAdError_WithNSString:tag withNSString:msg];
}
+ (void) videoAdComplete:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdComplete: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdComplete:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdComplete_WithNSString:tag];
}
+ (void) videoAdClicked:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdClicked: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdClicked:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdClicked_WithNSString:tag];
}
+ (void) videoAdSkipped:(NSString*)tag {
    if(mMncDigitalAnalytics == nil) {
        [MncDigitalAnalytics dp_:@"videoAdSkipped: SDK not initalized"];
        return;
    }
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"videoAdSkipped:tag: %@", tag]];
    [mMncDigitalAnalytics videoAdSkipped_WithNSString:tag];
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
    // [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"getAppString:fname: %@ :s: %@", fname, s]];
    return s;
}

- (jboolean) setAppStringWithNSString:(NSString *)fname withNSString:(NSString *)s {
    BOOL bs = [super setAppStringWithNSString:fname withNSString:s];
    if(bs) { return YES; }
    // [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"setAppString:fname: %@ :s: %@", fname, s]];
    NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docdir = [paths objectAtIndex:0];
    NSString *filePath = [NSString stringWithFormat:@"%@/%@", docdir, fname];
    [s writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
    return YES;
}

- (NSString*) getDeviceDetails {
    UIDevice *device = [UIDevice currentDevice];
    NSString *s = [NSString stringWithFormat:@"iOS,%@,Apple,%@,Apple", [device systemVersion], [MncDigitalAnalytics getDeviceName]];
    [MncDigitalAnalytics dp_:[NSString stringWithFormat:@"getDeviceDetail %@", s]];
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
