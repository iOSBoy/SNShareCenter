//
//  SNShareCenter.m
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import "SNShareCenter.h"

#import "SNShareClient.h"

#import "SNWBShareClient.h"
#import "SNWXShareClient.h"
#import "SNQQShareClient.h"

@implementation SNShareCenter

+ (instancetype)defaultShareCenter
{
    static SNShareCenter *shareCenter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        shareCenter = [[SNShareCenter alloc] init];

    });
    return shareCenter;
}


- (id<SNShareClient>)shareClientWithClient:(SNShareClientType)client
{
    id<SNShareClient> _shareClient;
    switch (client) {
        case SNShareClientWB:
        {
            _shareClient = [[SNWBShareClient alloc] init];
        }
            break;
        case SNShareClientWX:
        {
            _shareClient = [[SNWXShareClient alloc] init];
        }
            break;
        case SNShareClientQQ:
        {
            _shareClient = [[SNQQShareClient alloc] init];
        }
            break;
        default:
            NSLog(@"不支持该平台的分享");
            break;
    }
    return _shareClient;
}


- (void)shareMessage:(NSString *)message toClient:(SNShareClientType)client
{
    [[self shareClientWithClient:client] shareMessage:@""];
}
@end
