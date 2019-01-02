//
//  AppLinkIO_URLSession.h
//  AppLinkIO
//
//  Copyright © 2019 AppLink.io, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppLinkIO_URLSession : NSObject

+ (AppLinkIO_URLSession *)defaultConfiguration;

- (void)load;
- (void)unload;

@end

