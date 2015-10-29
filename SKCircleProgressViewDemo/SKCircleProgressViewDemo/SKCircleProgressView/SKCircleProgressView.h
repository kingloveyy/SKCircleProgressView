//
//  SKCircleProgressView.h
//  SKCircleProgressViewDemo
//
//  Created by king on 15/10/27.
//  Copyright © 2015年 king. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SKCircleProgressView : UIView
/**
 *  进度条宽度
 */
@property (nonatomic,assign) CGFloat progressLineWidth;
/**
 *  背景线条宽度
 */
@property (nonatomic,assign) CGFloat backgourndLineWidth;
/**
 *  进度百分比
 */
@property (nonatomic,assign) CGFloat Percentage;
/**
 *  背景填充颜色
 */
@property (nonatomic,strong) UIColor *backgroundStrokeColor;
/**
 *  进度条填充颜色
 */
@property (nonatomic,strong) UIColor *progressStrokeColor;
/**
 *  距离边框边距偏移量
 */
@property (nonatomic,assign) CGFloat offset;
/**
 *  步长
 */
@property (nonatomic,assign) CGFloat step;
/**
 *  数字字体颜色
 */
@property (nonatomic,strong) UIColor *digitTintColor;

-(void)setProgress:(CGFloat)Percentage Animated:(BOOL)animated;
@end
