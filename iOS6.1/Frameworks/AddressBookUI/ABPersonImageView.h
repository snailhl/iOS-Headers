/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPasteboardControl.h>

@class ABClippingImageView, UIImage, UIImageView;

@interface ABPersonImageView : ABPasteboardControl
{
    void *_displayedPerson;
    UIImageView *_personImageView;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    BOOL _isEditing;
    BOOL _showLabel;
    BOOL _scalesContentToFit;
    BOOL _needsReflow;
    BOOL _needsReload;
    id <ABPersonImageDataDelegate> _imageDataDelegate;
    BOOL _multiplePhotoBackdropEnabled;
    BOOL _shouldPickBestImage;
    id <ABStyleProvider> _styleProvider;
    BOOL _allowsEditing;
}

+ (struct CGSize)sizeForOptimalPerformance;
+ (id)newImageWithName:(id)arg1;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) BOOL scalesContentToFit; // @synthesize scalesContentToFit=_scalesContentToFit;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL shouldPickBestImage; // @synthesize shouldPickBestImage=_shouldPickBestImage;
@property(nonatomic) BOOL multiplePhotoBackdropEnabled; // @synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled;
@property(nonatomic) id <ABPersonImageDataDelegate> imageDataDelegate; // @synthesize imageDataDelegate=_imageDataDelegate;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (id)_newDictionaryWithImageData;
- (BOOL)hasImageToDisplay;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
@property(nonatomic) void *displayedPerson;
- (void)setNeedsReload;
- (void)setNeedsReflow;
- (void)reload;
- (id)copyDefaultImageForPerson:(void *)arg1;
- (id)copyImageForPerson:(void *)arg1 withFrameSize:(struct CGSize)arg2 operation:(id)arg3 cache:(id)arg4;
- (void)layoutSubviews;
- (void)reflowIfNeeded;
- (void)reloadIfNeeded;
- (void)reflow;
- (id)framedPhoto;
- (void)_drawEditLabelInFrame:(struct CGRect)arg1;
- (id)pasteboardMaskImageView;
- (id)emptyImageView;
- (id)editingImageView;
- (id)personImageView;
@property(readonly, nonatomic) UIImage *attributionImage;
@property(readonly, nonatomic) UIImage *overlayImage;
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImage *maskImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end
