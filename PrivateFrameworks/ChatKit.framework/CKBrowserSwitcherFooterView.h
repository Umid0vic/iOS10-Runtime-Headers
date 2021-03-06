/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherFooterView : UIView <_UIBackdropViewGraphicsQualityChangeDelegate> {
    UILabel * _appNameLabel;
    _UIBackdropView * _backdropView;
    long long  _barStyle;
    UIButton * _browserButton;
    bool  _dragging;
    UIButton * _expandButton;
    UIView * _grayLine;
    CKBrowserSwitcherScrollBar * _switcherScrollBar;
}

@property (nonatomic, retain) UILabel *appNameLabel;
@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, readonly) long long barStyle;
@property (nonatomic, retain) UIButton *browserButton;
@property (getter=isDragging, nonatomic) bool dragging;
@property (nonatomic, retain) UIButton *expandButton;
@property (nonatomic, retain) UIView *grayLine;
@property (nonatomic, retain) CKBrowserSwitcherScrollBar *switcherScrollBar;

- (void).cxx_destruct;
- (void)_animateInScrollBar;
- (void)_animateOutScrollBar;
- (id)appNameLabel;
- (id)backdropView;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (long long)barStyle;
- (id)browserButton;
- (id)expandButton;
- (id)grayLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 barStyle:(long long)arg2;
- (bool)isDragging;
- (void)layoutSubviews;
- (void)setAppNameLabel:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBrowserButton:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setExpandButton:(id)arg1;
- (void)setGrayLine:(id)arg1;
- (void)setSwitcherScrollBar:(id)arg1;
- (id)switcherScrollBar;

@end
