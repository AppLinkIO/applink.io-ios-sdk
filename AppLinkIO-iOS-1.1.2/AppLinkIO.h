//
//  AppLinkIO.h
//  AppLinkIO
//
//  Copyright © 2018 AppLink.io, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AppLinkIO : NSObject

+ (void)initAppLinkIO:(NSString*)appToken;

+ (void)initAppLinkIO:(NSString*)appToken withOptions:(NSDictionary*)appOptions;

+ (void)unlinkAppLinkIO;

+ (void)linkUser:(NSString*)userEmailAddress;

+ (void)setUserAttribute:(NSString*)attributeName withValue:(NSString*)attributeValue;

+ (void)trackScreenView:(NSString*)screenName;

+ (void)trackScreenView:(NSString*)screenName withExtras:(NSDictionary*)screenExtras;

+ (void)trackEvent:(NSString*)eventName;

+ (void)trackEvent:(NSString*)eventName withExtras:(NSDictionary*)eventExtras;

+ (void)trackImpression:(NSDictionary*)displayDetails;

+ (void)trackInteraction:(NSDictionary*)displayDetails :(NSString*)interactionType;

+ (void)trackConversion:(NSDictionary*)displayDetails :(NSDictionary*)conversionDetails;

+ (void)trackSearch:(NSDictionary*)searchDetails;



@end

