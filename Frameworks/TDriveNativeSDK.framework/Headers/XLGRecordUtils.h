//
//  XLGRecordUtils.h
//  SubscribeService
//
//  Created by Driver on 2021/10/6.
//  Copyright © 2021 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XLGRecordUtils : NSObject

+ (XLGRecordUtils *)sharedInstance;

- (void)startRecordAction:(NSString *)driverOrderId;

+ (void)endRecordAction;

+ (void)uploadAllRecordFile:(NSString *)where;

+ (void)configAVAudioSession;

/** 根据订单id查询文件个数 */
+ (NSInteger)queryFileWithOrderId:(NSString *)orderId;

/** 根据订单id上传所有文件*/
+ (void)uploadFileWithOrderId:(NSString *)orderId;

@end

NS_ASSUME_NONNULL_END
