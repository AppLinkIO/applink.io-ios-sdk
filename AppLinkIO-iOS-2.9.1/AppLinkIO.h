//
//  AppLinkIO.h
//  AppLinkIO
//
//  Created by Adam Hass on 7/15/19.
//  Copyright © 2019 AppLink.io. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AppLinkIO : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
