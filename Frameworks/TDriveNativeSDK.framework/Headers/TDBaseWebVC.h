//
//  TDBaseWebVC.h
//  SharenGo
//  Notes：WebVC基类
//
//  Created by Jason on 2018/5/10.
//  Copyright © 2018年 Driver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TDBaseVC.h"

@interface TDBaseWebVC : TDBaseVC

/** 注册JS Method 方法名数组 */
@property (nonatomic, retain) NSMutableArray *jsMethodArray;
/** 返回按钮回调 */
@property (nonatomic, copy) dispatch_block_t backBlock;

/**
 适用于传可扩展的参数

 @param title 标题【值为空用网页的title】
 @param url url
 @return 当前控制器
 */
- (instancetype)initWithTitle:(NSString *)title withUrl:(NSString *)url;

/**
 适用于只传url、title

 @param title 标题【值为空用网页的title】
 @param url url
 */
+ (void)showWithTitle:(NSString *)title withUrl:(NSString *)url;

/**
 适用于只传url、title

 @param title 标题【值为空用网页的title】
 @param url url
 */
+ (void)showWithTitle:(NSString *)title withUrl:(NSString *)url hiddenNav:(BOOL)hidden;

@end
