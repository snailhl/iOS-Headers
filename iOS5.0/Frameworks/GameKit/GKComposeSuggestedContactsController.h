/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView;

@interface GKComposeSuggestedContactsController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_searchResultItems;
    id <GKComposeSuggestedContactsControllerDelegate> _delegate;
}

@property(nonatomic) id <GKComposeSuggestedContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *searchResultItems; // @synthesize searchResultItems=_searchResultItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)loadView;
@property(readonly, nonatomic) UITableView *searchResultsTable;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end
