/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSString, SKAction;

@interface SKRunAction : SKAction  {
    SKAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    bool_waitForKeyedAction;
    bool_runOnSubSprite;
    bool_fired;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;

- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end