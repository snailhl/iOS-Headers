//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLTextureProgram.h>

__attribute__((visibility("hidden")))
@interface VGLClutTextureProgram : VGLTextureProgram
{
    int _uClutSampler;
    int _clutSampler;
    int _uVariation;
    float _variation;
}

+ (id)fragName;
@property(nonatomic) float variation; // @synthesize variation=_variation;
@property(nonatomic) int clutSampler; // @synthesize clutSampler=_clutSampler;
- (void)setup;

@end

