//
//  AppLinkIO.h
//  AppLinkIO
//
//  Copyright © 2018 AppLink.io, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <UserNotifications/UserNotifications.h>

@interface AppLinkIO : NSObject <UIApplicationDelegate, CLLocationManagerDelegate, UNUserNotificationCenterDelegate>

// Session Management
+ (void)initAppLinkIO:(nonnull NSString*)projectToken;
+ (void)initAppLinkIO:(nonnull NSString*)projectToken withOptions:(nonnull NSDictionary*)projectOptions;
+ (void)startSession;
+ (void)stopSession;

// Customization
+ (BOOL)getTrackingEnabled;
+ (void)setTrackingEnabled:(BOOL)trackingEnabled;
+ (BOOL)getUploadingEnabled;
+ (void)setUploadingEnabled:(BOOL)uploadingEnabled;

// Users
+ (void)linkUser:(nonnull NSString*)userIdentifier byType:(nonnull NSString*)identifierType;
+ (void)unlinkUser;
+ (void)setUserAttribute:(nonnull NSString*)attribute withValue:(nonnull NSString*)value;
+ (void)incrementUserAttribute:(nonnull NSString*)attribute withValue:(nonnull NSNumber*)value;
+ (void)decrementUserAttribute:(nonnull NSString*)attribute withValue:(nonnull NSNumber*)value;

// Companies
+ (void)linkCompany:(nonnull NSString*)companyName;
+ (void)unlinkCompany;
+ (void)setCompanyAttribute:(nonnull NSString*)attribute withValue:(nonnull NSString*)value;
+ (void)incrementCompanyAttribute:(nonnull NSString*)attribute withValue:(nonnull NSNumber*)value;
+ (void)decrementCompanyAttribute:(nonnull NSString*)attribute withValue:(nonnull NSNumber*)value;

// Events
+ (void)trackEvent:(nonnull NSString*)eventName;
+ (void)trackEvent:(nonnull NSString*)eventName withAttributes:(nonnull NSDictionary<NSString *, NSString *> *)attributes;

// Screen Views
+ (void)trackScreenView:(nonnull NSString*)screenName;
+ (void)trackScreenView:(nonnull NSString*)screenName withAttributes:(nonnull NSDictionary<NSString *, NSString *> *)attributes;

// Advertising
+ (void)trackAdImpression:(nonnull NSDictionary*)adDetails;
+ (void)trackAdInteraction:(nonnull NSDictionary*)adDetails :(nonnull NSString*)interactionType;
+ (void)trackAdConversion:(nonnull NSDictionary*)adDetails :(nonnull NSDictionary*)conversionDetails;

// Errors 
+ (void)logError:(nonnull NSString*)errorName :(nonnull NSString*)errorMessage  :(nullable NSException *)exception;

// Push Notifications
+ (void)setDeviceToken:(nullable NSData *)deviceToken;
+ (void)trackPushNotification:(nonnull NSDictionary *)userInfo;

// Deep Links
+ (void)trackDeepLink:(NSURL*)url;
 

@end
