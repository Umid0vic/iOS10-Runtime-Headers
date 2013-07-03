/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
    CPList *list;
    int number;
    struct __CFArray { } *paragraphs;
}

@property(retain) CPList * list;
@property int number;


- (void)addParagraph:(id)arg1;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (id)list;
- (void)setList:(id)arg1;
- (void)dispose;
- (int)number;
- (void)setNumber:(int)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end