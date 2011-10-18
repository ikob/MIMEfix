/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class MTMMailbox, MTMWindowController, NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer;

@interface StarFieldController : NSObject
{
    NSMutableDictionary *_windowControllers;
    NSMutableDictionary *_bufferedControllers;
    MTMWindowController *_currentActiveWindowController;
    MTMWindowController *_currentTimeWindowController;
    struct CGRect _mailFrame;
    struct CGRect _initialFrame;
    NSDictionary *_mailDisplayState;
    NSMutableArray *_thumbnailUpdateQueue;
    NSTimer *_updateTimer;
    NSDictionary *_sharedDisplayState;
    BOOL _showChangedItemsOnly;
    BOOL _isInTimeMachine;
    BOOL _timeMachineStarted;
    BOOL _firstThumbnailUpdateRequest;
    BOOL _hasAtLeastSentOneThumbnail;
    BOOL _dismissed;
    MTMMailbox *_pausedMailbox;
}

+ (id)keyPathsForValuesAffectingIsInTimeMachine;
+ (id)sharedController;
- (id)init;
- (void)dealloc;
- (id)mainURL;
- (void)showCurrentStateMailDisplayState:(id)arg1;
@property(readonly) MTMWindowController *currentTimeWindowController;
@property(readonly) MTMWindowController *activeWindowController;
- (void)startEnterTransitionOfWindowController:(id)arg1 fromFrame:(struct CGRect)arg2;
- (void)_enterTransitionDidEnd:(id)arg1;
- (void)startExitTransitionOfWindowController:(id)arg1;
- (void)appHasExitedTimeMachineAndFinishedRestoring;
- (id)windowControllerForURL:(id)arg1 forDisplay:(BOOL)arg2 canCreate:(BOOL)arg3;
- (void)removeWindowControllerForURL:(id)arg1;
- (void)setActiveWindowController:(id)arg1;
- (BOOL)startTimeMachine;
- (void)timeMachineWasDismissed;
- (void)_updateAllThumbnails;
- (void)updateAllThumbnails;
- (void)updateThumbnailForURL:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)markSnapshotAsDirty:(id)arg1;
- (void)updateNextThumbnail;
- (void)scheduleUpdateForURL:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)_correctedURLForURL:(id)arg1 proposedQueryString:(id)arg2;
- (id)revisionIDForURL:(id)arg1;
- (id)activateWindowForURL:(id)arg1 changedItemsOnly:(BOOL)arg2 atFrame:(struct CGRect)arg3;
- (id)deactivateWindowForURL:(id)arg1;
- (void)showChangedItemsOnlyToggled:(BOOL)arg1;
- (void)restoreFromURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) BOOL timeMachineStarted; // @synthesize timeMachineStarted=_timeMachineStarted;
@property BOOL showChangedItemsOnly; // @synthesize showChangedItemsOnly=_showChangedItemsOnly;
@property BOOL isInTimeMachine; // @synthesize isInTimeMachine=_isInTimeMachine;
@property(retain) NSDictionary *sharedDisplayState; // @synthesize sharedDisplayState=_sharedDisplayState;

@end

