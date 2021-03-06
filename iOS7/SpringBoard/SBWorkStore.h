/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SBWorkStore : NSObject
{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableDictionary *_workExpirationPeriods;
    double _defaultWorkExpirationPeriod;
}

@property(nonatomic) double defaultWorkExpirationPeriod; // @synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod;
@property(readonly, nonatomic) unsigned long long maxWorkPerKey; // @synthesize maxWorkPerKey=_maxWorkPerKey;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSArray *keysWithWork; // @synthesize keysWithWork=_keysWithWork;
@property(readonly, nonatomic) NSMutableDictionary *workItemsPerKey; // @synthesize workItemsPerKey=_workItemsPerKey;
- (id)description;
- (void)_notifyObserversWorkDidChange;
- (void)_queue_expireWorkForKey:(id)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;
- (void)purgeWorkForKey:(id)arg1;
- (id)dequeueWorkForKey:(id)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;

@end

