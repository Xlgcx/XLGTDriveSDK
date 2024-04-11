//
//  UILabel+XLGExtension.h
//  SharenGo
//  Notes：UILable 添加一些参数及方法
//
//  Created by Xlgcx on 2018/5/14.
//  Copyright © 2018年 Driver. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (XLGExtension)

/**
 字间距
 */
@property (nonatomic, assign) CGFloat characterSpace;

/**
 行间距
 */
@property (nonatomic, assign) CGFloat lineSpace;

/**
 关键字
 */
@property (nonatomic, copy) NSString *keywords;
@property (nonatomic, strong) UIFont *keywordsFont;
@property (nonatomic, strong) UIColor *keywordsColor;

/**
 下划线
 */
@property (nonatomic, copy) NSString *underlineStr;
@property (nonatomic, strong) UIColor *underlineColor;

/**
 *  设置字间距
 */
- (void)setColumnSpace:(CGFloat)columnSpace;
/**
 *  设置行距
 */
- (void)setRowSpace:(CGFloat)rowSpace;

/**
 计算label宽高，必须调用
 
 @param maxWidth 最大宽度
 @return label的rect
 */
- (CGSize)getLableRectWithMaxWidth:(CGFloat)maxWidth;

/**
 获取文字高度

 @param width 宽度
 @param title 文字
 @param font 字体
 @return 高度
 */
+ (CGFloat)getHeightByWidth:(CGFloat)width title:(NSString *)title font:(CGFloat)font;

/**
 获取文字宽度

 @param title 文字
 @param font 字体
 @return 宽度
 */
+ (CGFloat)getWidthWithTitle:(NSString *)title andFont:(CGFloat)font;

/**
 *  计算UILabel的高度(带有行间距的情况)
 *  @param width 宽度
 *  @return 高度
 *  @param zpace  字间距 --> @10 这样设置  默认的话设置 0 就ok
 */
- (CGFloat)LW_getSpaceLabelHeightWithLabelWidth:(CGFloat)width withSpace:(CGFloat)space withZspace:(NSNumber *)zpace;

/**
 *  给UILabel设置行间距和字间距
 *  @param space 间距
 *  @param text  内容
 *  @param font  字体
 *  @param zpace  字间距 --> @10 这样设置  默认的话设置 0 就ok
 */
- (void)LW_setLineSpace:(CGFloat)space withLabelText:(NSString*)text withFont:(UIFont*)font withZspace:(NSNumber *)zpace;

/**
 *  给UILabel设置行间距
 *  @param label 控件
 *  @param lineSpace 行间距
 */
+ (void)setUILabel:(UILabel *)label LineSpace:(CGFloat)lineSpace;

/**
 * 点击回调
 * @param lc_tapBlock index 没有点到时返回-1;charAttributedString 选中的字符的属性字符串
 */
@property (nonatomic,copy) void (^lc_tapBlock)(NSInteger index,NSAttributedString *charAttributedString);


@end
