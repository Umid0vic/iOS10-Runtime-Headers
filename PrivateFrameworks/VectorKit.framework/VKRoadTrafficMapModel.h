/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKRoadMapModel, VKTrafficDrawStyle;

@interface VKRoadTrafficMapModel : VKVectorMapModel  {
    VKRoadMapModel *_roadModel;
    bool_enabled;
    VKTrafficDrawStyle *_trafficDrawStyle;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > { 
        struct __compressed_pair<vk::TrafficManager *, std::__1::default_delete<vk::TrafficManager> > { 
            struct TrafficManager {} *__first_; 
        } __ptr_; 
    } _trafficManager;
}

@property bool enabled;
@property(retain) VKRoadMapModel * roadModel;


- (id)roadModel;
- (unsigned long long)mapLayerPosition;
- (void)stylesheetDidChange;
- (void)setRoadModel:(id)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (bool)enabled;
- (void)setEnabled:(bool)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didReceiveMemoryWarning;

@end