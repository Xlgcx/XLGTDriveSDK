//
//  TDNativeNetworkUtil.h
//  SharenGo
//  Notes：网络监测工具类
//
//  Created by Xlgcx on 2020/11/9.
//  Copyright © 2020 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Reachability/Reachability.h>

@interface TDNativeNetworkUtil : NSObject

@property (nonatomic) Reachability *hostReachability;

/**
 *  判断当前网络状态
 *
 *  @return 网络状态
 */
+ (NetworkStatus)currentNetworkStatus;

/**
 *  网络实时监听
 */
- (void)listening;

+ (TDNativeNetworkUtil *)sharedInstance;

@end
