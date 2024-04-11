//
//  ZNavView.h
//  Merchant
//  Notes：
//
//  Created by zhanbing han on 2020/4/16.
//  Copyright © 2020 Driver. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZNavView : UIView
/** <#object#> */
@property (nonatomic,copy) NSString *title;
/** <#object#> */
@property (nonatomic,copy) dispatch_block_t backBlock;
@end

NS_ASSUME_NONNULL_END
