/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString;

@interface CKComposition : NSObject
{
    NSAttributedString *_text;
    NSAttributedString *_subject;
}

+ (id)compositionForMessageParts:(id)arg1;
+ (id)savedCompositionForGUID:(id)arg1;
+ (void)deleteCompositionWithGUID:(id)arg1;
@property(copy, nonatomic) NSAttributedString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (id)compositionByAppendingMessagePart:(id)arg1;
- (id)mediaObjects;
- (_Bool)isTextOnly;
- (_Bool)hasNonwhiteSpaceContent;
- (_Bool)hasContent;
- (void)saveCompositionWithGUID:(id)arg1;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
