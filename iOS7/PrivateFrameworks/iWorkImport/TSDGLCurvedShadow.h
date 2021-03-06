/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDGLShadow.h>

@class CIContext, TSDCurvedShadow, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

// Not exported
@interface TSDGLCurvedShadow : TSDGLShadow
{
    struct CGSize mFramebufferSize;
    TSDGLFrameBuffer *mAlphaFrameBuffer;
    TSDGLDataBuffer *mAlphaDataBuffer;
    TSDGLShader *mAlphaShader;
    TSDGLFrameBuffer *mCurvedFrameBuffer;
    TSDGLDataBuffer *mCurvedDataBuffer;
    TSDGLShader *mCurvedShader;
    TSDGLFrameBuffer *mCurveInterpolationFrameBuffer;
    TSDGLDataBuffer *mCurveInterpolationDataBuffer;
    TSDGLShader *mCurveInterpolationShader;
    TSDCurvedShadow *mCurvedShadow;
    CDStruct_f2e236b6 mColor;
    double mAngle;
    char *mBuffer;
    CIContext *mCIContext;
}

+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
- (id).cxx_construct;
- (void)releaseShaders;
- (void)p_deleteFramebuffers;
- (void)p_unbindFramebuffers;
- (struct CGImage *)newCGImageWithTexture:(id)arg1 size:(struct CGSize)arg2 shader:(id)arg3 framebuffer:(id)arg4 databuffer:(id)arg5;
- (void)p_setupCurvedInterpolationShader;
- (void)p_setupCurvedShader;
- (void)p_setupAlphaShader;
- (void)p_bindCurveInterpolationFramebuffer;
- (void)p_bindCurvedFramebuffer;
- (void)p_bindAlphaFramebuffer;
- (void)p_newBlurredImageFromImage:(struct CGImage *)arg1 numBlurs:(double)arg2 blurredImage:(struct CGImage **)arg3;
- (void)p_newBlurredImageFromImage:(struct CGImage *)arg1 numBlurs:(double)arg2 halfBlurredImage:(struct CGImage **)arg3 blurredImage:(struct CGImage **)arg4;
- (void)p_newTintedImage:(struct CGImage **)arg1 fromImage:(struct CGImage *)arg2 withColor:(CDStruct_f2e236b6)arg3;
- (void)p_setupCIContext;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage *)arg2 inContext:(struct CGContext *)arg3 forSize:(struct CGSize)arg4;
- (void)dealloc;
- (id)initWithFramebufferSize:(struct CGSize)arg1;

@end

