//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SUMenuViewController, SUProtocolButton;

@protocol SUMenuViewControllerDelegate <NSObject>

@optional
- (void)menuViewControllerDidCancel:(SUMenuViewController *)arg1;
- (void)menuViewController:(SUMenuViewController *)arg1 didTapButton:(SUProtocolButton *)arg2;
- (void)menuViewController:(SUMenuViewController *)arg1 didSelectItemAtIndex:(int)arg2;
@end
