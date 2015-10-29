//
//  ViewController.m
//  SKCircleProgressViewDemo
//
//  Created by king on 15/10/27.
//  Copyright © 2015年 king. All rights reserved.
//

#import "ViewController.h"
#import "SKCircleProgressView/SKCircleProgressView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    SKCircleProgressView *progress = [[SKCircleProgressView alloc] initWithFrame:CGRectMake(100, 150, 100, 100)];
    [self.view addSubview:progress];
    [progress setProgressStrokeColor:[UIColor colorWithRed:(233 / 255.0) green:(192 / 255.0) blue:(10 / 255.0) alpha:1]];
    [progress setBackgroundStrokeColor:[UIColor colorWithRed:(217 / 255.0) green:(234 / 255.0) blue:(234 / 255.0) alpha:1]];
    [progress setProgress:0.88 Animated:YES];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
