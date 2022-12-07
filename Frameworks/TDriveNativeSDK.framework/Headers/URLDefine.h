//
//  ADURLDefine.h
//  Teacher
//
//  Created by Xlgcx on 2021/11/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface URLDefine : NSObject

#pragma mark - ---------------接口地址---------------

// 接口地址&图片地址
NSString *ROOT_URL(void);

// 隐私权政策
#define KPrivacyProtocolUrl @"https://static.evcoming.com/agrees/privacy/accomany-driver-index.html"

// 服务协议
#define KUserProtocalUrl @"https://static.evcoming.com/agrees/register/accomany-driver-index.html"

#define URL_StartSoundRecording @"drive-app/soundRecording/startSoundRecording" //开始录音记录

#define URL_UploadSoundFile @"drive-app/soundRecording/updateSoundFile" //上传音频文件

#define URL_DeleteSoundRecord @"drive-app/soundRecording/deleteSoundFileRecord"//删除录音文件

#define URL_SendPhoneSMS @"drive-app/carOperation/sendPhoneSMS" //发送验证码

#define URL_Login @"drive-app/carOperation/login" //登录

#define URL_CarOperationInfo @"drive-app/carOperation/getCarOperation" //获取信息

#define URL_Logout @"drive-app/carOperation/logout" //退出登录

#define URL_Telephone @"drive-app/carOperation/telephone" //客服电话

#define URL_GetDriveServiceOrder @"drive-app/tryDrive/getOngoingDriveServiceOrder" //查询进行中的试驾服务单

#define URL_VersionCheck @"app/version/check" //版本更新

#define URL_GetGpsSwitch @"drive-app/tryDrive/getGpsSwitch" //gps开关

#define URL_HeartBeat @"drive-app/tryDrive/heartBeat/" //录音心跳

#define URL_ReportGpsLocationInfo @"drive-app/tryDrive/reportGpsLocationInfo/" //上传单次定位

#define URL_SaveSpeed @"drive-app/car/saveSpeed/" //保存当前车速

#define URL_FinishTryDrive @"drive-app/tryDrive/finishTryDrive/"//结束试驾

#define URL_ConfirmTryDriveDetails @"drive-app/tryDrive/confirmTryDriveDetails" //创建试驾单详情

// SDK初始化的url
#define SDK_Init_URL @"drive-app/carOperation/initialSDK"

// 登录url
#define SDK_Login_URL @"drive-app/carOperation/login" //登录

// 创建试驾单URL
#define SDK_CreateOrder_URL @"drive-app/tryDrive/startTryDrive"

// 供慧商宝结束试驾单时调用
#define SDK_ServiceOrderForSDK_URL @"drive-app/tryDrive/getServiceOrderForSDK/"

// 查询当月试驾统计信息，供慧商宝app调用
#define SDK_MonthlySummary_URL @"drive-app/monthlySummary/getCurrentMonthlySummary"

// 根据用户和设备查询订单
#define SDK_CheckOrderUserAndPhone_URL @"drive-app/tryDrive/checkOrderUserAndPhone"

// 查询哪吒车辆状态
#define SDK_QueryVehicleStatus_URL @"drive-app/tryDrive/queryVehicleStatus"

// 查询哪吒车辆状态开关
#define SDK_QueryStatusOnOrderStart_URL @"drive-app/tryDrive/queryStatusOnOrderStart"

@end

NS_ASSUME_NONNULL_END
