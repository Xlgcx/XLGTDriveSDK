//
//  TDMonthDataVC.h
//  试驾月度数据UI
//
//  Created by hzb on 2022/6/21.
//  Copyright © 2022 Xlgcx. All rights reserved.
//

/**
调用示例（必须把控制器也加上去，否则点击不能响应事件）
 TDMonthDataVC *vc = [[TDMonthDataVC alloc]init];
 vc.view.frame = CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, 320);
 self.view addSubview:vc.view];
 [self addChildViewController:vc];
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TDMonthDataVC : UIViewController

@end

NS_ASSUME_NONNULL_END
