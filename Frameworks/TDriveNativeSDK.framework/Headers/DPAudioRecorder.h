#import <Foundation/Foundation.h>

typedef void(^AudioRecorderFinishRecordingBlock)(NSInteger audioTimeLength,NSString *path, NSString *orderId);

typedef void(^AudioStartRecordingBlock)(BOOL isRecording, NSString *filePath, NSString *createTime, NSString *orderId);

typedef void(^AudioRecordingFailBlock)(NSString *reason);

typedef void(^AudioSpeakPowerBlock)(float power);

typedef void(^RecordDuration)(NSInteger count);

/// 录制语音
@interface DPAudioRecorder : NSObject

/// 录制完成的回调
@property (nonatomic, copy) AudioRecorderFinishRecordingBlock audioRecorderFinishRecording;
/// 开始录制回调
@property (nonatomic, copy) AudioStartRecordingBlock audioStartRecording;
/// 录制失败回调
@property (nonatomic, copy) AudioRecordingFailBlock audioRecordingFail;
/// 音频值测量回调
@property (nonatomic, copy) AudioSpeakPowerBlock audioSpeakPower;

/// 音频值测量回调
@property (nonatomic, copy) AudioRecorderFinishRecordingBlock interruptRecording;
///音视频存储路径
@property (nonatomic, strong) NSString *originWaveFilePath;
///是否正在录音
@property (nonatomic, assign) BOOL isRecording;

@property (nonatomic, assign)  NSInteger rateKey; //采样率
@property (nonatomic, assign)  NSInteger bitDepthKey; //采样位数
@property (nonatomic, assign)  NSInteger channelsKey;//通道数目

@property (nonatomic, copy)  NSString *orderId;//订单id

@property (nonatomic, copy) RecordDuration counter;

+ (DPAudioRecorder *)sharedInstance;

/// 开始录音方法
- (void)startRecording;

/// 停止录音方法
- (void)stopRecording;

@end
