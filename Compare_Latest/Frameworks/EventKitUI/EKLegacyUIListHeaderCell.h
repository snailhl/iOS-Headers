//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EKLegacyUIListHeaderCellContentView;

@interface EKLegacyUIListHeaderCell : UIView
{
    EKLegacyUIListHeaderCellContentView *_contentView;
    BOOL _showWeekNumber;
}

@property(nonatomic) BOOL showWeekNumber; // @synthesize showWeekNumber=_showWeekNumber;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_backgroundImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(BOOL)arg1;
@property(readonly, nonatomic) BOOL reusable;
@property(nonatomic) BOOL indentsForDots;
@property(nonatomic) double date;
- (id)initWithFrame:(struct CGRect)arg1 date:(double)arg2;

@end

