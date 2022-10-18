//
//  XLGRecordModel.h
//  SubscribeService
//
//  Created by Driver on 2021/10/6.
//  Copyright © 2021 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface XLGRecordModel : NSObject

///数据库 文件名称
@property (nonatomic,retain) NSString *file_name;
///数据库 文件路径
@property (nonatomic,retain) NSString *file_path;
///用户id
@property (nonatomic,retain) NSString *user_id;
///订单id
@property (nonatomic,retain) NSString *order_id;
///文件创建试驾
@property (nonatomic,retain) NSString *file_createTime;
///服务器是否已经创建
@property (nonatomic,assign) BOOL server_create;

@property (nonatomic,retain) NSString *other_content;

@end

NS_ASSUME_NONNULL_END
