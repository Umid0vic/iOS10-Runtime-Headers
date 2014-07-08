/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSAttributedString;

@interface MKMapAttribution : NSObject  {
    NSAttributedString *_string;
    NSURL *_url;
}

@property(readonly) NSAttributedString * string;
@property(readonly) NSURL * url;
@property(readonly) NSAttributedString * disclosureArrow;


- (id)disclosureArrow;
- (id)attributedStringWithImage:(id)arg1;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3;
- (id)url;
- (id)string;
- (void).cxx_destruct;

@end