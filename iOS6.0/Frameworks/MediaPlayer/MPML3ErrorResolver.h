/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPAVErrorResolver.h>

#import "SSRequestDelegate-Protocol.h"

@class MPMediaItem, NSError, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate>
{
    MPMediaItem *_mediaItem;
    SSKeybagRequest *_request;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SSKeybagRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)resolveError:(id)arg1;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

@end

