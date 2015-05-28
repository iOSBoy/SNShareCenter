//
//  SNClientOAuth.h
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SNClientOAuth : NSObject

@property (nonatomic, strong) NSString  *accessToken;
@property (nonatomic, strong) NSString  *userId;
@property (nonatomic, strong) NSData    *orginalData;

@end
