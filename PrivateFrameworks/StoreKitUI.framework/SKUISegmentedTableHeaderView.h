/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SUSegmentedControl, UIView;

@interface SKUISegmentedTableHeaderView : UIView  {
    UIView *_borderView;
    SUSegmentedControl *_segmentedControl;
}

@property BOOL hidesBorderView;
@property(retain) SUSegmentedControl * segmentedControl;


- (void)setSegmentedControl:(id)arg1;
- (void)setHidesBorderView:(BOOL)arg1;
- (BOOL)hidesBorderView;
- (id)_borderView;
- (void).cxx_destruct;
- (id)segmentedControl;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end