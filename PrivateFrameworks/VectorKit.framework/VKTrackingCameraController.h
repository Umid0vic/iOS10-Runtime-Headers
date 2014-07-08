/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class VKAnimation, VKMapModel, <VKTrackingCameraControllerDelegate>, VKMapCanvas, VKCameraContext;

@interface VKTrackingCameraController : VKCameraController  {
    <VKTrackingCameraControllerDelegate> *_trackingDelegate;
    int _viewStyle;
    int _focusStyle;
    VKAnimation *_animation;
    double _verticalGroundspan;
    double _verticalGroundspanScale;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _farthestPoi;
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        double course; 
        boolonRoute; 
    } _puckPosition;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _puckTargetPosition;
    double _startZoomScale;
    double _endZoomScale;
    double _zoomScale;
    double _startPinchScale;
    VKMapModel *_mapModel;
    VKMapCanvas *_mapCanvas;
    double _startTime;
    bool_animatingIn;
    double _startPitch;
    double _startCourse;
    double _startDistance;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _startPuckScreenPosition;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    double _puckOffset;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _previousReference;
    double _previousCourse;
    double _previousOffset;
    struct VKCircularBuffer<double> { struct vector<double, std::__1::allocator<double> > { double *x_1_1_1; double *x_1_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; boolx3; double x4; } *_rotationRateBuffer;
    double _previousStepTime;
    VKAnimation *_tapZoomAnimation;
    double _tracePlaybackSpeedMultiplier;
    bool_receivedFirstUpdate;
    bool_puckAnimatorRunning;
    double _cruisePhi;
    double _cruiseHeight;
    double _cruisePhiOverride;
    double _cruiseHeightOverride;
    VKCameraContext *_lastCameraContext;
    bool_shouldLimitTopDownHeight;
    struct VKEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _insets;
    bool_insetsAnimating;
    double _puckOffsetDelta;
    struct VKNavigationCameraModel { 
        double _halfVerticalFov; 
        double _horizontalFov; 
        double _tanHalfHorizontalFov; 
        double _courseOverride; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _pitchSpring; 
        struct AngularSpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _courseSpring; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _referenceScreenOffsetSpring; 
        struct SpringDamper { 
            double _position; 
            double _velocity; 
            double _acceleration; 
            double _kSpring; 
            double _kDamper; 
            double _restingPosition; 
            bool_directionIsPositive; 
        } _boomLengthSpring; 
        struct State { 
            double _course; 
            double _referenceScreenOffset; 
            double _pitch; 
            double _boomLength; 
        } _targetState; 
        double _previousUpdateTime; 
    } _cameraModel;
    int _panStyle;
    struct State { 
        struct State { 
            double _course; 
            double _referenceScreenOffset; 
            double _pitch; 
            double _boomLength; 
        } modelState; 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } puckPosition; 
    } _panStartCameraState;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _panCameraOffset;
    double _panReturnStartTime;
    struct CGPoint { 
        double x; 
        double y; 
    } _startPanPoint;
    double _panCourseOffset;
    double _panPitch;
    double _panStartPitch;
    double _panBoomLength;
    double _panStartBoomLength;
    double _panRouteOffset;
    VKAnimation *_panAnimation;
    bool_panning;
    double _pitchOffset;
    VKAnimation *_pitchAnimation;
    bool_pitching;
    bool_zooming;
    double _userZoomFocusStyleZoomScale;
    double _userZoomFocusStyleMinZoomScale;
    double _userZoomFocusStyleMaxZoomScale;
    VKAnimation *_zoomScaleAnimation;
    struct fast_shared_ptr<vk::RouteLineSection> { 
        struct _fast_shared_ptr_control {} *_control; 
    } _matchedSection;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _matchedIndex;
    bool_successfullyStartedRouteLinePan;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _lastRouteLinePanPuckPosition;
    int _panDirection;
    float _halfPuckSize;
    long long _desiredMapMode;
    double _mapModeTransitionZoomScale;
    bool_shouldAllowMapModeTransition;
    double _maxBoomLength;
    double _maxDistanceScale;
    bool_canZoomIn;
    bool_canZoomOut;
}

@property <VKTrackingCameraControllerDelegate> * trackingDelegate;
@property(retain) VKMapModel * mapModel;
@property VKMapCanvas * mapCanvas;
@property int panStyle;
@property(readonly) bool canZoomIn;
@property(readonly) bool canZoomOut;
@property double zoomScale;
@property double tracePlaybackSpeedMultiplier;
@property bool shouldLimitTopDownHeight;
@property double verticalGroundspanScale;
@property double userZoomFocusStyleGroundspanMeters;
@property double userZoomFocusStyleMinGroundspanMeters;
@property double userZoomFocusStyleMaxGroundspanMeters;
@property float puckSize;


- (void)setVerticalGroundspanScale:(double)arg1;
- (int)panStyle;
- (bool)shouldLimitTopDownHeight;
- (void)setTrackingDelegate:(id)arg1;
- (id)trackingDelegate;
- (void)setMapModeTransitionZoomScale:(double)arg1;
- (void)_startTapZoomAnimationFrom:(double)arg1 to:(double)arg2 completionHandler:(id)arg3;
- (void)setRelevantZoomScale:(double)arg1;
- (void)setUserZoomFocusStyleZoomScale:(double)arg1;
- (void)setCanZoomOut:(bool)arg1;
- (double)relavantMinZoomScale;
- (void)setCanZoomIn:(bool)arg1;
- (double)relavantMaxZoomScale;
- (void)_updateCameraForStartAnimation:(double)arg1 position:(struct VKPoint { double x1; double x2; double x3; })arg2 orientation:(const struct { double x1[4][4]; }*)arg3;
- (void)pauseIfNeeded;
- (void)resumeIfNeeded;
- (void)_handleZoomChanged;
- (void)_resumeAnimationIfNecessary;
- (void)_updateCruiseHeightAndPhi;
- (double)relevantZoomScale;
- (void)_updateVerticalGroundspanForCameraContext:(id)arg1 reference:(struct VKPoint { double x1; double x2; double x3; })arg2 focus:(struct VKPoint { double x1; double x2; double x3; })arg3 offset:(double)arg4;
- (double)verticalGroundspanScale;
- (float)puckSize;
- (double)tracePlaybackSpeedMultiplier;
- (void)stopPanning:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canZoomOut;
- (bool)canZoomIn;
- (bool)isAtDefaultZoomScale;
- (void)setZoomStyle:(int)arg1;
- (void)startWithPounce:(bool)arg1 pounceCompletionHandler:(id)arg2;
- (void)startPanning:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanStyle:(int)arg1;
- (void)setShouldLimitTopDownHeight:(bool)arg1;
- (void)zoom:(double)arg1 relativeToPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (void)pan:(struct CGPoint { double x1; double x2; })arg1 worldDelta:(const struct Matrix<double, 3, 1> { double x1[3]; }*)arg2;
- (void)setPuckSize:(float)arg1;
- (id)mapModel;
- (void)updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })arg1 index:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;
- (void)canvasFrameDidChange;
- (void)setMapCanvas:(id)arg1;
- (void)setMapModel:(id)arg1;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (double)userZoomFocusStyleGroundspanMeters;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; boolx3; }*)arg2;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)updateCameraContext:(id)arg1;
- (void)edgeInsetsWillBeginAnimating;
- (void)edgeInsetsDidEndAnimating;
- (void)setGesturing:(bool)arg1;
- (bool)isGesturing;
- (id)detailedDescription;
- (id)mapCanvas;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_step;
- (void)setZoomScale:(double)arg1;
- (double)zoomScale;

@end