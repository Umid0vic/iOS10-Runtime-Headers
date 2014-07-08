/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSObject<OS_dispatch_queue>, NSMutableArray, VKTimer;

@interface MKThrottledGate : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}


- (void)dispatch:(id)arg1;
- (id)initWithMax:(int)arg1 refreshRate:(double)arg2 queue:(id)arg3;
- (bool)_replenishAvailableJobsIfNecessary;
- (void)_ensureTimer;
- (bool)_dispatchWaitingJobsIfNecessary;
- (void)_timerFired:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end