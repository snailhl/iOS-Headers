/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class NSString;

@interface LiveTraceController : PSListController
{
    NSString *_enabledTracer;
    NSString *_enabledTrigger;
}

- (id)tracingEnabled:(id)arg1;
- (void)updateEnabled;
- (void)updateDefaults;
- (void)setTracingEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

