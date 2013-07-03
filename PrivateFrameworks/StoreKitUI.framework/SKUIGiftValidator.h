/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SSVLoadURLOperation, NSURL;

@interface SKUIGiftValidator : NSObject  {
    NSOperationQueue *_operationQueue;
    int _validationCount;
    SSVLoadURLOperation *_validationOperation;
    NSURL *_validationURL;
}

@property(getter=isValidating,readonly) BOOL validating;
@property(retain) NSOperationQueue * operationQueue;


- (BOOL)isValidating;
- (void)validateDonation:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(int)arg3 block:(id)arg4;
- (void)_validateWithBodyDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)cancelValidation;
- (void)validateGift:(id)arg1 withCompletionBlock:(id)arg2;
- (id)initWithValidationURL:(id)arg1;
- (void).cxx_destruct;
- (void)setOperationQueue:(id)arg1;
- (id)operationQueue;

@end