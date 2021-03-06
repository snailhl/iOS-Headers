//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CAReplicatorLayer;

@interface CKTypingIndicatorLayer : CALayer
{
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    struct CGPoint _smallBubbleOffset;
    struct CGPoint _mediumBubbleOffset;
    struct CGPoint _largeBubbleOffset;
}

+ (struct CGSize)defaultSize;
@property(retain, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;
@property(retain, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property(nonatomic) struct CGPoint largeBubbleOffset; // @synthesize largeBubbleOffset=_largeBubbleOffset;
@property(retain, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property(nonatomic) struct CGPoint mediumBubbleOffset; // @synthesize mediumBubbleOffset=_mediumBubbleOffset;
@property(retain, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property(nonatomic) struct CGPoint smallBubbleOffset; // @synthesize smallBubbleOffset=_smallBubbleOffset;
@property(retain, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
- (void)stopAnimation;
- (void)startShrinkAnimation;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)startGrowAnimation;
- (id)_largeBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (id)_largeBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (id)_smallBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint)arg2;
- (void)_buildThinkingDots;
- (void)_setup;
- (void)dealloc;
- (id)init;

@end

