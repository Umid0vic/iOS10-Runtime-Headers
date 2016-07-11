/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRScannerCommunicationSession : TRAbstractCommunicationSession {
    SFSession * _communicationSession;
    <TRConfigurationSessionDelegate> * _delegate;
}

@property (nonatomic, retain) SFSession *communicationSession;
@property (nonatomic) <TRConfigurationSessionDelegate> *delegate;

- (void).cxx_destruct;
- (id)communicationSession;
- (id)delegate;
- (void)ensureCompatibiltiyAndOpenCommunicationsChannel;
- (id)initWithDevice:(id)arg1;
- (id)messenger;
- (void)setCommunicationSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startConfigurationSession;

@end