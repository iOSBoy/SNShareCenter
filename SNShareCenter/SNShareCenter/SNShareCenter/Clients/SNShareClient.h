//
//  SNShareClient.h
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SNShareMessage.h"
@protocol SNShareClient <NSObject>
- (void)shareMessage:(SNShareMessage *)message;
@end
