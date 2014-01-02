/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSATheme.h>

#import "TSKTransformableObject-Protocol.h"
#import "TSSPresetSource-Protocol.h"

@class KNSlideNode, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, TSUPointerKeyDictionary;

// Not exported
@interface KNTheme : TSATheme <TSSPresetSource, TSKTransformableObject>
{
    NSString *mUUID;
    NSArray *mMasters;
    NSObject<OS_dispatch_queue> *mDefaultMasterSlideNodeQueue;
    KNSlideNode *mDefaultMasterSlideNode;
    long long mSlideStyleIndex;
    NSMutableArray *mClassicThemeRecords;
    NSMutableDictionary *mSlideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary *mFormulaReferenceNamesForSlideNodesCache;
}

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (void)registerPresetSourceClasses;
+ (id)generateUUID;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *classicThemeRecords; // @synthesize classicThemeRecords=mClassicThemeRecords;
- (id)modelPathComponentForChild:(id)arg1;
- (id)childEnumerator;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)p_cacheSlideNodes;
- (void)invalidateSlideNameCache;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (void)resolveDefaultMaster;
- (void)selectSecondMasterAsDefault;
- (void)p_selectSecondMasterAsDefault;
- (void)addClassicThemeRecord:(id)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
- (id)mappedMasterForSlide:(id)arg1;
- (id)mappedMasterForMaster:(id)arg1;
- (void)removeAllMasters;
- (void)removeMasterSlideNode:(id)arg1;
- (id)nameForMasterCopyWithName:(id)arg1;
- (id)masterWithName:(id)arg1;
- (_Bool)containsMasterWithName:(id)arg1;
- (void)insertMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4;
- (void)addMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 dolcContext:(id)arg3;
- (void)addMasterSlideNode:(id)arg1 dolcContext:(id)arg2;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)bootstrapWhiteThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapGradientThemeOfSize:(struct CGSize)arg1;
- (void)bootstrapBlackThemeOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double cornerRadius;
- (void)bootstrapThemeOfSize:(struct CGSize)arg1 alternate:(int)arg2;
@property(retain, nonatomic) KNSlideNode *defaultMasterSlideNode;
- (void)p_setDefaultMasterSlideNode:(id)arg1;
@property(retain, nonatomic) NSString *UUID;
@property(retain, nonatomic) NSArray *masters;

@end
