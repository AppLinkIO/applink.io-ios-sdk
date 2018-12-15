//
//  AppLinkIO_URLProtocol.h
//  AppLinkIO
//
//  Copyright © 2018 AppLink.io, Inc. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface AppLinkIO_URLProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate> 

@property (nonatomic, strong) NSURLConnection *connection;
@property (nonatomic, strong) NSURLResponse *response;
@property (nonatomic, strong) NSMutableData *data;
@property (nonatomic, strong) NSDate *startDate;

@end


