//
//  ADAddressUtils.h
//  定位类
//
//  Created by hzb on 2022/3/10.
//  Copyright © 2022 Xlgcx. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ADAddressUtils : NSObject

///是否正在定位
@property (nonatomic, assign) BOOL isLocationing;

///是否正在心跳
@property (nonatomic, assign) BOOL isHearting;

#pragma mark - 类单例方法
+ (ADAddressUtils *)share;

+ (void)requestLocationApiWithOrderID:(NSString *)orderId;

- (void)startLocation:(NSString *)orderId;

- (void)stopLocation;

/////心跳包 60秒一次
//- (void)startHeartBeat:(NSString *)orderId;

//- (void)stopHeartBeat;

- (NSArray *)queryDBData;

@end

@interface LocationModel : NSObject

@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *lng;
@property (nonatomic, copy) NSString *ts;
@property (nonatomic, copy) NSString *order_id;
/** 车速*/
@property (nonatomic, copy) NSString *speed;
@property (nonatomic, copy) NSString *other;//车速

@end

NS_ASSUME_NONNULL_END
