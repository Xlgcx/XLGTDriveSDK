//
//  XLGIndicator.h
//  SharenGo
//  Notes：
//
//  Created by Xlgcx han on 2019/10/11.
//  Copyright © 2019 Driver. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XLGIndicator : UIView

+ (XLGIndicator *)sharedIndicator;

- (void)showLoading;

- (void)hiddenLoading;

@end

NS_ASSUME_NONNULL_END
