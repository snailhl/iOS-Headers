/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

// Not exported
@interface TSPCopyAssistant : TSPPasteboardWriteAssistant
{
    TSPPasteboard *_pasteboard;
    _Bool _didAttemptToCopy;
}

- (void).cxx_destruct;
- (void)copyToPasteboardIsSmartCopy:(_Bool)arg1;
- (void)copyToPasteboard;
- (void)loadNativeData;
- (id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

