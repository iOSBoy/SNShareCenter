//
//  SNClient.h
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SNClient : NSObject

@property (nonatomic, strong) NSString *client;
@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, strong) NSString *appSecret;
@property (nonatomic, strong) NSString *redirectUri;
@property (nonatomic, strong) NSString *appId;

@end
