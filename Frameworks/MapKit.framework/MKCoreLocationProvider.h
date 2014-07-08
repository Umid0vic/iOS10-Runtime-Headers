/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSBundle, NSString, CLLocationManager, <MKLocationProviderDelegate>, NSLock;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {
    CLLocationManager *_clLocationManager;
    <MKLocationProviderDelegate> *_delegate;
    bool_locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authorizationRequestBlock;

    bool_waitingForAuthorization;
    bool_hasQueriedAuthorization;
    NSLock *_authorizationLock;
}

@property(readonly) CLLocationManager * _clLocationManager;
@property <MKLocationProviderDelegate> * delegate;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property double desiredAccuracy;
@property(getter=isLocationServicesPreferencesDialogEnabled) bool locationServicesPreferencesDialogEnabled;
@property double distanceFilter;
@property bool matchInfoEnabled;
@property int headingOrientation;
@property(copy) id authorizationRequestBlock;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) int authorizationStatus;
@property(readonly) bool airplaneModeBlocksLocation;
@property long long activityType;
@property(readonly) bool usesCLMapCorrection;
@property(readonly) bool isSimulation;


- (bool)isSimulation;
- (bool)usesCLMapCorrection;
- (bool)airplaneModeBlocksLocation;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (id)authorizationRequestBlock;
- (bool)matchInfoEnabled;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (id)effectiveBundleIdentifier;
- (void)setEffectiveBundle:(id)arg1;
- (void)dismissHeadingCalibrationDisplay;
- (int)headingOrientation;
- (void)setMatchInfoEnabled:(bool)arg1;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (void)_resetForNewEffectiveBundle;
- (double)desiredAccuracy;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (id)_clLocationManager;
- (void)_updateAuthorizationStatus;
- (void)_createCLLocationManager;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (double)expectedGpsUpdateInterval;
- (void)setHeadingOrientation:(int)arg1;
- (double)distanceFilter;
- (void)setDistanceFilter:(double)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setDesiredAccuracy:(double)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (int)authorizationStatus;
- (void)setActivityType:(long long)arg1;
- (long long)activityType;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)effectiveBundle;

@end