/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBUIRoundedBannerItemView.h"

@class SBBulletinBannerItem, UIImageView, UILabel, UIView;

@interface SBBulletinBannerView : SBUIRoundedBannerItemView
{
    SBBulletinBannerItem *_item;
    UIView *_iconView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    float _imageWidth;
    UIImageView *_accessoryImageView;
    UIImageView *_backgroundImageView;
}

- (id)_backgroundImageWithAttachmentImage:(id)arg1;
- (void)layoutSubviews;
- (void)_createSubviewsWithBackgroundImage:(id)arg1;
- (void)dealloc;
- (id)bannerItem;
- (id)initWithItem:(id)arg1;

@end
