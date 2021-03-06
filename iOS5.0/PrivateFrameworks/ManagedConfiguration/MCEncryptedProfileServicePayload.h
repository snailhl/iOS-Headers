/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload
{
    NSString *_urlString;
}

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
- (id)initWithURLString:(id)arg1 profile:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;

@end

