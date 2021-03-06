//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WBSHistoryItem;

@interface WBSHistoryVisit : NSObject
{
    BOOL _loadSuccessful;
    BOOL _httpNonGet;
    BOOL _synthesized;
    int _databaseID;
    int _redirectSourceDatabaseID;
    int _redirectDestinationDatabaseID;
    WBSHistoryItem *_item;
    int _origin;
    NSString *_title;
    WBSHistoryVisit *_redirectSource;
    WBSHistoryVisit *_redirectDestination;
    long long _generation;
    double _visitTime;
}

+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;
@property(retain, nonatomic) WBSHistoryVisit *redirectDestination; // @synthesize redirectDestination=_redirectDestination;
@property(retain, nonatomic) WBSHistoryVisit *redirectSource; // @synthesize redirectSource=_redirectSource;
@property(readonly, nonatomic, getter=isSynthesized) BOOL synthesized; // @synthesize synthesized=_synthesized;
@property(readonly, nonatomic, getter=wasHTTPNonGet) BOOL httpNonGet; // @synthesize httpNonGet=_httpNonGet;
@property(nonatomic, getter=loadWasSuccessful) BOOL loadSuccessful; // @synthesize loadSuccessful=_loadSuccessful;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(nonatomic) __weak WBSHistoryItem *item; // @synthesize item=_item;
@property(nonatomic) long long generation; // @synthesize generation=_generation;
@property(nonatomic) int redirectDestinationDatabaseID; // @synthesize redirectDestinationDatabaseID=_redirectDestinationDatabaseID;
@property(nonatomic) int redirectSourceDatabaseID; // @synthesize redirectSourceDatabaseID=_redirectSourceDatabaseID;
@property(nonatomic) int databaseID; // @synthesize databaseID=_databaseID;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int redirectSourceChainLength;
@property(readonly, nonatomic) WBSHistoryVisit *endOfRedirectChain;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned int)arg3;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(BOOL)arg3 wasHTTPNonGet:(BOOL)arg4 origin:(int)arg5;

@end

