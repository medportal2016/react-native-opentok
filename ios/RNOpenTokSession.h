#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import "React/RCTBridgeModule.h"
#endif

#import <OpenTok/OpenTok.h>

@interface RNOpenTokSession : NSObject <RCTBridgeModule, OTSessionDelegate>

@property (nonatomic) OTSession *session;

@end
