/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class SSDownloadManager, NSMutableSet, NSObject<OS_dispatch_queue>, SSDownloadHandler, NSMutableArray;

@interface MPStorePlayWhileDownloadController : NSObject <SSDownloadHandlerDelegate, UIAlertViewDelegate> {
    NSMutableSet *_cellularRestrictedAlertViews;
    SSDownloadHandler *_downloadHandler;
    SSDownloadManager *_downloadManager;
    NSObject<OS_dispatch_queue> *_downloadSessionQueue;
    NSMutableArray *_downloadSessions;
}

+ (id)sharedController;

- (id)_openSessionWithProperties:(id)arg1 style:(int*)arg2;
- (id)_openSessionWithProperties:(id)arg1 options:(id)arg2;
- (void)_closeSessionForAsset:(id)arg1;
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)arg1;
- (id)_downloadSessionWithID:(id)arg1;
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)arg1;
- (BOOL)_showNoNetworkDialogForMediaItem:(id)arg1;
- (BOOL)isSessionRequiredToPlayMediaItem:(id)arg1;
- (BOOL)canOpenSessionWithMediaItem:(id)arg1;
- (id)openSessionWithMediaItem:(id)arg1 options:(id)arg2;
- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (id)_init;

@end