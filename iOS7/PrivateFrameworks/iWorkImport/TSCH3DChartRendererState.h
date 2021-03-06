/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSCHUnretainedParent-Protocol.h"

@class CALayer<TSCH3DGLLayer>, TSCH3DChartRenderCycle, TSCH3DChartRep, TSCH3DGLLayerDelegate, TSCH3DRenderProcessor, TSCH3DScene, TSCH3DSession, TSCH3DSharegroupToken;

// Not exported
@interface TSCH3DChartRendererState : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    TSCH3DSession *mSession;
    TSCH3DRenderProcessor *mProcessor;
    TSCH3DChartRenderCycle *mRenderCycle;
    _Bool mInteractive;
    _Bool mWantInteractiveMode;
    _Bool mIsInteractiveMode;
    struct CGSize mMinimumBufferSize;
    struct CGRect mLayerVisibleBounds;
    CALayer<TSCH3DGLLayer> *mGLLayer;
    TSCH3DGLLayerDelegate *mGLLayerDelegate;
    TSCH3DSharegroupToken *mSharegroupToken;
}

@property(readonly, nonatomic) TSCH3DSharegroupToken *sharegroupToken; // @synthesize sharegroupToken=mSharegroupToken;
@property(nonatomic) struct CGRect layerVisibleBounds; // @synthesize layerVisibleBounds=mLayerVisibleBounds;
@property(readonly, nonatomic) TSCH3DRenderProcessor *processor; // @synthesize processor=mProcessor;
- (id).cxx_construct;
- (id)GLLayer;
- (void)recreateGLLayer;
- (void)p_createGLLayer;
- (void)releaseGLLayer;
- (void)p_setupSession;
- (void)p_setupRenderCycle;
@property(readonly, nonatomic) _Bool mustRecreateRenderCycleForCurrentRenderCycleClass;
- (_Bool)p_reusableForCurrentRenderCycleClass;
- (void)p_setupInteractiveMode;
- (void)setIfIsMoreDemandingPerformance:(int)arg1;
@property(nonatomic) int performance;
- (void)endInteractiveMode;
- (void)beginInteractiveModeWithMinimumBufferSize:(struct CGSize)arg1 performanceHint:(int)arg2;
- (_Bool)usesMultipassRendering;
- (_Bool)isOneShot;
@property(readonly, nonatomic) _Bool framebufferCanRender;
@property(readonly, nonatomic) _Bool canRender;
@property(readonly, nonatomic) TSCH3DChartRenderCycle *renderCycle; // @synthesize renderCycle=mRenderCycle;
- (void)setupForRendering;
- (_Bool)renderLegendIntoSeparateLayer;
- (void)p_validateLabelBitmapContextInfoForScene:(id)arg1;
- (void)p_updateLabelBitmapContextInfoForScene:(id)arg1;
@property(readonly, nonatomic) TSCH3DScene *scene;
@property(readonly, nonatomic) TSCH3DSession *session;
@property(readonly, nonatomic) _Bool hasSession;
- (void)destroyFramebuffer;
- (void)destroy;
- (void)clearParent;
- (void)dealloc;
- (id)initWithRep:(id)arg1 sharegroupToken:(id)arg2;

@end

