/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKRouteRoadInfo : NSObject  {
    NSString *_name;
    NSString *_shieldGroup;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
}

@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * shieldGroup;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;


- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (id)shieldGroup;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (id)name;
- (void)dealloc;
- (id).cxx_construct;

@end