#import <Foundation/Foundation.h>
#import <MobileRTC/MobileRTC.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNZoomUsManager : NSObject <MobileRTCAuthDelegate, MobileRTCMeetingServiceDelegate>

+ (RNZoomUsManager *)sharedInstance;

- (void)authenticate:(NSString *)appKey appSecret:(NSString *)appSecret completion:(void (^_Nonnull)(NSUInteger resultCode))completion;
- (void)joinMeeting:(NSString *)meetingId userName:(NSString *)userName password:(NSString *)password completion:(void (^_Nonnull)(NSUInteger resultCode))completion;
- (void)startMeeting:(NSString *)meetingId userName:(NSString *)userName userId:(NSString *)userId userZak:(NSString *)userZak completion:(void (^_Nonnull)(NSUInteger resultCode))completion;
- (void)hideMeeting:(void (^_Nonnull)(NSUInteger resultCode))completion;
- (void)showMeeting:(void (^_Nonnull)(NSUInteger resultCode))completion;


@end

NS_ASSUME_NONNULL_END
