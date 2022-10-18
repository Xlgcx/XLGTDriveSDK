//
//  FlutterManager.h
//  AccompanyDriver
//
//  Created by hzb on 2022/3/8.
//  Copyright © 2022 Xlgcx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <flutter_boost/FlutterBoost.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDNativeFlutterManager : NSObject

///APP启动需要先初始化插件
+ (void)setupFlutter:(UIApplication *)application;

///新增试驾单【哪吒】
+ (void)addOrderPage;

///试驾报告列表
+ (void)reportListPage;

///进行中订单【哪吒】
+ (void)showOrderDetailPage;

///试驾单详情
+ (void)showOrderDetailPage:(NSString *)orderId;

///月度详情
+ (void)showMonthOrderDetailPage;

///创建订单【车机版】
+ (void)addOrderCarMachinePage;

///扫码
+ (void)scanPage;

///跳转首页
+ (void)homePage;

///创建订单【1.9】
+ (void)createOrderPage;

///订单确认【1.9】
+ (void)showWaitOrderPage;

///进行中订单【1.9】
+ (void)showOrderOngoingPage;

@end

NS_ASSUME_NONNULL_END
