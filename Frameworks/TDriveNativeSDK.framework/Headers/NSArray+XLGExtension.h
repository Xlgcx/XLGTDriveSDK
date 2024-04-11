//
//  NSArray+XLGExtension.h
//  SharenGo
//  Notes：添加数组处理的相关方法
//
//  Created by Xlgcx on 2018/5/14.
//  Copyright © 2018年 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (XLGExtension)

#pragma mark - 判断数组是否为空
+ (BOOL)isEmpty:(id _Nullable )array;

#pragma mark - 数组转json字符串【一整行，NSString/NSNumber/NSDictionary/NSArray适用】
- (nullable NSString *)jsonStringEncoded;

#pragma mark - 数组转json字符串【格式化输出】
- (nullable NSString *)jsonPrettyStringEncoded;

#pragma mark - 数组转json data
- (NSData *_Nullable)toJSONData;

#pragma mark - 打印中文正常显示
- (NSString *_Nullable)description;

@end
