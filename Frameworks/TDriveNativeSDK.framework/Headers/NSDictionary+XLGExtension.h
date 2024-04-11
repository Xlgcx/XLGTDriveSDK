//
//  NSDictionary+XLGExtension.h
//  SharenGo
//  Notes：添加字典处理的相关方法
//
//  Created by Xlgcx on 2018/5/7.
//  Copyright © 2018年 Driver. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (XLGExtension)

#pragma mark - 判断字典是否为空
+ (BOOL)isEmpty:(id _Nullable )dictionary;

#pragma mark - 字典转json字符串【一整行，NSString/NSNumber/NSDictionary/NSArray适用】
- (nullable NSString *)jsonStringEncoded;

#pragma mark - 字典转json字符串【格式化输出】
- (nullable NSString *)jsonPrettyStringEncoded;

#pragma mark - 字典转json data
- (NSData *_Nullable)toJSONData;

#pragma mark - 打印中文正常显示
- (NSString *_Nullable)description;

#pragma mark - key-value&key-value
- (NSString *_Nonnull)URLString;

#pragma mark - 将所有的NSNull类型转化成@""
+ (_Null_unspecified id)changeType:(_Null_unspecified id)myObj;

@end
