//
//  SNShareCenter.h
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SNShareMessage.h"

typedef NS_ENUM(NSInteger, SNShareClientType) {
    SNShareClientWB,
    SNShareClientWX,
    SNShareClientQQ
};


@interface SNShareCenter : NSObject
+ (instancetype)defaultShareCenter;
- (void)shareMessage:(SNShareMessage *)message toClient:(SNShareClientType)client;
@end
