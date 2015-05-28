//
//  ViewController.m
//  SNShareCenter
//
//  Created by yutao on 15-5-28.
//  Copyright (c) 2015年 yutao. All rights reserved.
//

#import "ViewController.h"
#import "SNShareCenter.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [[SNShareCenter defaultShareCenter] shareMessage:@"" toClient:SNShareClientWB];
    [[SNShareCenter defaultShareCenter] shareMessage:@"" toClient:SNShareClientWX];
    [[SNShareCenter defaultShareCenter] shareMessage:@"" toClient:SNShareClientQQ];
;

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
