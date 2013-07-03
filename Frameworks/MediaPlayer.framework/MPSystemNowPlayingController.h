/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, NSObject<OS_dispatch_queue>;

@interface MPSystemNowPlayingController : NSObject  {
    BOOL _hasSeenAnyItem;
    MPAVController *_player;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_statusBarQueue;
}

@property MPAVController * player;


- (void)postProgressUpdateForItem:(id)arg1;
- (void)postNowPlayingInfoForItem:(id)arg1;
- (unsigned int)_chapterIndexForItem:(id)arg1 atTime:(double)arg2;
- (int)_MRShuffleModeForMPShuffleType:(unsigned int)arg1;
- (int)_MRRepeatModeForMPRepeatType:(unsigned int)arg1;
- (id)_progressInfoForItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (id)init;
- (void).cxx_destruct;

@end