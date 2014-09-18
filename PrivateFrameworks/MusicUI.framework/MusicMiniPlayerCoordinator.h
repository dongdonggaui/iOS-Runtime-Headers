/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString, UIActionSheet;

@interface MusicMiniPlayerCoordinator : RUMiniPlayerCoordinator <UIActionSheetDelegate> {
    UIActionSheet *_repeatActionSheet;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (Class)_miniPlayerPlaybackControlsViewClass;
- (void)_startGeniusPlaylistFromItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(long long)arg2;
- (bool)playbackControls:(id)arg1 changedRepeatType:(unsigned long long)arg2;
- (bool)playbackControls:(id)arg1 changedShuffleType:(unsigned long long)arg2;
- (unsigned long long)repeatTypeForPlaybackControls:(id)arg1;
- (unsigned long long)shuffleTypeForPlaybackControls:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;

@end