//
//  SNClientUser.h
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SNClientUser : NSObject

@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *avatar;
@property (nonatomic, strong) NSString *platform;
@property (nonatomic, strong) NSString *gender;

@property (nonatomic, strong) NSData   *orginalData;

@end
