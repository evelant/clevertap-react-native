#import <Foundation/Foundation.h>
#import <CleverTapSDK/CleverTap.h>

@interface CleverTapReactManager : NSObject

+ (instancetype)sharedInstance;

- (void)applicationDidLaunchWithOptions:(NSDictionary *)options;

- (void)setDelegates:(CleverTap *)cleverTapInstance;

@property NSString *launchDeepLink;

@end
