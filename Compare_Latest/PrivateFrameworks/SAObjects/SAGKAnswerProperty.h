/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSNumber, NSString, SAUIAppPunchOut;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>
{
}

+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerProperty;
@property(copy, nonatomic) NSString *valueAnnotation;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *selected;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
