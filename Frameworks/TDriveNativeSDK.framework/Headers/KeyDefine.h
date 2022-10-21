//
//  KeyDefine.h
//  TDriveNativeSDK
//
//  Created by hzb on 2022/10/12.
//

#ifndef KeyDefine_h
#define KeyDefine_h

#define KRootURL @"ROOT_URL"
#define KUserId @"SDK_UserId"
#define KUserFlag @"SDK_UserFlag"
#define KToken @"SDK_Token"
#define KLogSwitch @"SDK_LogSwitch"
#define KAudioWifiKey @"audioUploadWifi"

#define KLog @"log"
#define KUrl @"flutter.url"
#define kServerKey   @"ServerKey"

#define KBuglyDebugAppId @"efdab1dd16"
#define KBuglyReleaseAppId @"810af04e9e"

#define NSUserDefaultsSave(key,value) [[NSUserDefaults standardUserDefaults] setObject:value forKey:key]
// 以key取出value
#define NSUserDefaultsGet(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
// 以key删除value
#define NSUserDefaultsRemove(key) [[NSUserDefaults standardUserDefaults] removeObjectForKey:key]
// 立即同步
#define NSUserDefaultsSync [[NSUserDefaults standardUserDefaults] synchronize]

#ifdef DEBUG
#define KOnline NO
#else
#define KOnline YES
#endif

#endif /* KeyDefine_h */
