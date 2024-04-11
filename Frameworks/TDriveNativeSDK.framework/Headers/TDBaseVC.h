//
//  TDBaseVC.h
//  Chaozhi
//  Notes：VC基类
//
//  Created by Xlgcx on 2018/5/7.
//  Copyright © 2018年 Driver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TDBaseNavBar.h"

@interface TDBaseVC : UIViewController

//self.navBar.hidden = YES; //隐藏导航条,在子类viewWillAppear里面调用
@property (nonatomic,retain) TDBaseNavBar *navBar;
@property (nonatomic,retain) UINavigationItem *navItem;
@property (nonatomic,retain) UIButton *backBtn;
@property (nonatomic,retain) id pushParameter;
/** 返回优先级 0默认返回上一页  -1返回根视图  1返回上上页  。。。依次类推 */
@property (nonatomic,assign) NSInteger backPriority;

/*!
 *  @brief 无网络
 */
- (void)netWorkDisappear:(NSNotification *)noti;

/*!
 *  @brief 有网络
 */
- (void)netWorkAppear:(NSNotification *)noti;

/*!
 *  @brief 初始化页面
 */
- (void)initView;

/*!
 *  @brief 获取数据
 */
- (void)getData;

/*!
 *  @brief 返回
 */
- (void)backAction;

/*!
 *  @brief 颜色设置
 */
- (void)colorRefreshSet;

/**
 *  短信验证码按钮封装
 */
- (void)startTimeCount:(UIButton *)l_timeButton;

@end
