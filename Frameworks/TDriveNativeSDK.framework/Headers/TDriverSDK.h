//
//  TDriverSDK.h
//  TDriverDemo_iOS
//
//  Created by hzb on 2022/5/25.
//

#import <UIKit/UIKit.h>

typedef void (^TSuccessBlock) (NSDictionary * _Nullable resultDic);
typedef void (^TFailBlock) (NSString * _Nullable error);
typedef void (^CompletionBlock) (id _Nullable responseData);
typedef void (^TOrderStateBlock) (int status); //1、订单开始 2、订单结束 3、订单返回

NS_ASSUME_NONNULL_BEGIN

@interface TDriverSDK : NSObject

/**
 被退出登录回调
 */
@property (nonatomic, copy, readwrite) dispatch_block_t reLoginBlock;

/**
 订单状态回调
 */
@property (nonatomic, copy, readwrite) TOrderStateBlock orderStateBlock;

+ (TDriverSDK *)share;

/**
 SDK初始化

 @param application Application
 */
- (void)initWithApplication:(UIApplication *)application;

/**
 登录（同步APP登录信息）

 @param mobile APP登录陪驾人手机号或用户名
 @param secretKey SDK密钥(统一社会信用代码/税号)
 @param apiUrl 接口请求域名
 @param success 成功回调
 @param fail 失败回调
 */
- (void)login:(NSString *)mobile secretKey:(NSString *)secretKey apiUrl:(NSString *)apiUrl successBlock:(TSuccessBlock)success failBlock:(TFailBlock)fail;

/**
 创建服务单（同步用户信息，同步试驾单信息）

 @param customerName 试驾人姓名
 @param mobile 试驾人手机号
 @param orderId 试驾订单ID
 @param carNo 试驾车牌号
 */
- (void)createOrderWithUserName:(NSString *)customerName mobile:(NSString *)mobile orderId:(NSString *)orderId carNo:(NSString *)carNo;

/**
 结束试驾单后数据回传（慧商宝）
 @param saleNo 销售编号
 @param success 接口调用成功的回调并返回相关数据（startTime,endTime,mileage,reportId）
 @param fail 接口调用失败的回调
 */
- (void)driveOrderSaleNo:(NSString *)saleNo successBlock:(CompletionBlock)success failBlock:(dispatch_block_t)fail;

/**
 跳转试驾报告列表页面
 */
- (void)jumpReportListPage;

/**
 跳转订单进行中页面
 */
- (void)jumpDrivingOrder:(NSString *)saleNo;

/**
 跳转试驾报告详情页面

 @param saleNo 试驾单编号
 */
- (void)jumpReportDetailPage:(NSString *)saleNo;

/**
 上传本地所有的录音文件
 */
- (void)uploadAllRecordFileAction;

/**
 默认日志关闭
 */
- (void)switchLog:(BOOL)open;

/**
 退出登录
 */
- (void)loginOut;

@end

NS_ASSUME_NONNULL_END
