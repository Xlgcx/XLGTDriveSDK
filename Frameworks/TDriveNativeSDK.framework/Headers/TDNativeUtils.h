//
//  Utils.h
//  Chaozhi
//  Notes：工具类
//
//  Created by Xlgcx on 2020/11/7.
//  Copyright © 2020 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVKit/AVKit.h>

@interface TDNativeUtils : NSObject

#pragma mark - 类单例方法
+ (TDNativeUtils *)share;

#pragma mark - 获取当前时间
+(NSString *)getCurrentDate;

#pragma mark - 获取当前控制器
+ (UIViewController *)getCurrentVC;

#pragma mark - 退出登录，isJumpLoginVC 是否跳转到登录页面
+ (void)logout:(BOOL)isJumpLoginVC;

#pragma mark - 判断字符串是否为空
+ (BOOL)isBlankString:(id)string;

#pragma mark - 仿安卓消息提示
+ (void)showToast:(NSString *)message;

+ (UIViewController *)getViewController:(NSString *)stordyName WithVCName:(NSString *)name;

#pragma mark - 获取顶部的控制器
+(UIViewController *)theTopViewControler;

+ (NSString *)createMyFilePath;

+(void)requestMicphonePermission:(void (^)(BOOL granted))handler;

#pragma mark - 根据秒显示时分秒
+ (NSString *)timeFormatter:(NSInteger)seconds;


+ (NSString *)arrayToJson:(NSArray *)array;

#pragma mark - 获取保存在Keychian中的UUID
+ (NSString *)getKCID;

#pragma mark - 获取手机型号
+ (NSString *)getIphoneType;

@end
