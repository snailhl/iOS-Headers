//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureFigAudioDevice_FigRecorder, AVCaptureFigVideoDevice_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, AVRunLoopCondition, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface AVCaptureSessionInternal_FigRecorder : NSObject
{
    AVWeakReference *weakReference;
    NSString *sessionPreset;
    BOOL adjustingDeviceActiveFormat;
    int sessionPresetChangeSeed;
    int resolvedSessionPresetChangeSeed;
    int videoDeviceChangeSeed;
    int resolvedVideoDeviceChangeSeed;
    int beginConfigRefCount;
    NSMutableDictionary *captureOptions;
    NSMutableDictionary *figRecorderOptions;
    AVCaptureFigAudioDevice_FigRecorder *audioDevice;
    AVCaptureFigVideoDevice_FigRecorder *videoDevice;
    struct OpaqueCMBaseObject *recorder;
    NSMutableArray *inputs;
    NSMutableArray *outputs;
    NSMutableArray *connections;
    NSMutableArray *liveConnections;
    AVCaptureVideoPreviewLayer_FigRecorder *videoPreviewLayer;
    NSError *stopError;
    BOOL running;
    BOOL interrupted;
    BOOL recording;
    BOOL usesApplicationAudioSession;
    BOOL automaticallyConfiguresApplicationAudioSession;
    AVRunLoopCondition *runLoopCondition;
    BOOL waitingForRecorderDidStartPreviewing;
    BOOL waitingForRecorderDidStartRecording;
    BOOL waitingForRecorderDidStopSource;
    BOOL waitingForRecorderDidStopPreviewing;
    BOOL waitingForRecorderDidStopRecording;
    struct OpaqueCMClock *masterClock;
}

- (void)dealloc;
- (id)init;

@end

