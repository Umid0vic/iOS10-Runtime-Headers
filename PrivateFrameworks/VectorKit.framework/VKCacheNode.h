/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKCacheNode;

@interface VKCacheNode : NSObject  {
    struct VKCacheKey { 
        unsigned int a; 
        unsigned int b; 
        unsigned int c; 
        unsigned int d; 
    } _key;
    id _value;
    VKCacheNode *_next;
    VKCacheNode *_previous;
}

@property struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } key;
@property(retain) id value;
@property(retain) VKCacheNode * next;
@property VKCacheNode * previous;


- (void)setPrevious:(id)arg1;
- (void)setNext:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })key;
- (void)dealloc;
- (id).cxx_construct;
- (void)setKey:(struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)previous;
- (id)next;

@end