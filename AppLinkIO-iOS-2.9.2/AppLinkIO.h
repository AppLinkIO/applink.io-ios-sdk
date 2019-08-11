//
//  AppLinkIO.h
//  AppLinkIO
// 
//  Copyright © 2017-Present AppLink.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <UserNotifications/UserNotifications.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppLinkIO : NSObject <UIApplicationDelegate, CLLocationManagerDelegate, UNUserNotificationCenterDelegate>

@property (atomic) BOOL loggingEnabled;
@property (atomic) BOOL trackingOptedOut;
@property (atomic) BOOL locationMonitoringEnabled;
@property (atomic) BOOL uploadingEnabled;

@property (nonatomic, copy) NSString *apiURL;

@property (atomic) NSUInteger batchTime;


+ (nullable AppLinkIO *)sharedInstance;

+ (AppLinkIO *)initAppLinkIO:(NSString*)projectToken;
+ (AppLinkIO *)initAppLinkIO:(NSString*)projectToken with:(nullable NSDictionary*)projectOptions;


- (instancetype)initAppLinkIO:(NSString *)projectToken with:(nullable NSDictionary *)projectOptions;

// Users

- (void)linkUser:(NSString *)userId;
- (void)reset; 

- (void)setUser:(NSDictionary *)attributes;
- (void)setUser:(NSString *)attribute with:(id)object;

- (void)incrementUser:(NSDictionary *)attributes;
- (void)incrementUser:(NSString *)attribute by:(NSNumber *)object;

- (void)trackUserRevenue:(NSNumber *)amount;
- (void)trackUserRevenue:(NSNumber *)amount with:(nullable NSDictionary *)attributes;

// Push Notifications
- (void)setPushToken:(NSData *)deviceToken;

// Events

- (void)trackEvent:(NSString *)name;
- (void)trackEvent:(NSString *)name with:(nullable NSDictionary *)attributes;



@end

NS_ASSUME_NONNULL_END
