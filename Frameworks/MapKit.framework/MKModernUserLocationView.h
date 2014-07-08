/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CALayer, UIImage;

@interface MKModernUserLocationView : MKUserLocationView  {
    CALayer *_innerCircleLayer;
    bool_shouldInnerPulse;
    struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; } *_innerImageMask;
    bool_rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
    CALayer *_baseDimmingLayer;
}

@property bool shouldInnerPulse;
@property(retain) UIImage * innerImageMask;
@property bool rotateInnerImageToMatchCourse;

+ (double)innerDiameter;
+ (double)baseDiameter;

- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)rotateInnerImageToMatchCourse;
- (id)innerImageMask;
- (bool)shouldInnerPulse;
- (void)setRotateInnerImageToMatchCourse:(bool)arg1;
- (void)setInnerImageMask:(struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)arg1;
- (void)_updateInnerCourseRotation;
- (struct CGColor { }*)_accuracyFillColor;
- (id)_baseDimmingLayer;
- (void)_updatePulseColor;
- (void)_updateInnerImage;
- (void)_updateBaseImage;
- (void)_updatePulseAnimation;
- (id)_innerPulseAnimation;
- (void)_updateAccuracyColors;
- (void)setShouldInnerPulse:(bool)arg1;
- (void)_updateInnerMaskLayer;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)_baseLayer;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (id)_layerToMatchAccuracyRing;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setMapRotationRadians:(double)arg1;
- (void)_setMapDisplayStyle:(unsigned long long)arg1;
- (void)setEffectsEnabled:(bool)arg1;
- (void)_dealloc;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)didMoveToWindow;

@end