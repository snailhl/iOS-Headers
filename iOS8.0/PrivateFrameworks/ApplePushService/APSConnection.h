//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUTWeakReference, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSString;

@interface APSConnection : NSObject
{
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned int _messageSize;
    unsigned int _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned int _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
}

+ (void)notifySafeToSendFilter;
+ (void)_setTokenState;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)invalidateDeviceIdentity;
+ (void)requestCourierConnection;
+ (void)_blockingXPCCallWithArgumentBlock:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (struct __SecIdentity *)copyIdentity;
+ (BOOL)isValidEnvironment:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)sendFakeMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (BOOL)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverOutgoingMessageResultWithID:(unsigned int)arg1 error:(id)arg2;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)arg1;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (BOOL)isConnected;
@property(nonatomic) BOOL usesAppLaunchStats;
- (void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
@property(nonatomic) unsigned int largeMessageSize;
@property(nonatomic) unsigned int messageSize;
@property(readonly, retain, nonatomic) NSData *publicToken;
- (void)moveTopic:(id)arg1 fromList:(unsigned int)arg2 toList:(unsigned int)arg3;
- (id)_listForIdentifierOnIvarQueue:(unsigned int)arg1;
- (id)opportunisticTopics;
- (id)ignoredTopics;
- (id)enabledTopics;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_disconnectFromDealloc;
- (void)_disconnect;
- (void)_disconnectOnIvarQueue;
- (void)_cancelConnection;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_handleEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) id <APSConnectionDelegate> delegate;
- (void)dealloc;
- (void)_shutdownFromDealloc;
- (void)shutdown;
- (void)_shutdownOnIvarQueue;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;

@end

