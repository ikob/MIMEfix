/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "TableViewManager.h"

@interface TableViewManager (FilteredList_Management)
- (void)mallStructureWillChange:(id)fp8;
- (void)setMailboxUids:(id)fp8 isSettingUpUI:(BOOL)fp12;
- (void)storeStructureChanged:(id)fp8;
- (void)messagesCompacted:(id)fp8;
- (void)messageFlagsChanged:(id)fp8;
- (void)_scrollToHappyPlace;
- (void)_recordVisibleState:(struct visible_state *)fp8 deletedAreGoingAway:(BOOL)fp12 considerPinToEnd:(BOOL)fp16;
- (BOOL)_restoreVisibleState:(struct visible_state *)fp8 forceSelToVisible:(BOOL)fp12;
- (void)dumpVisibleState;
- (int)indexOfTopmostVisibleMessageMustBeSelected:(BOOL)fp8 okayIfDeleted:(BOOL)fp12;
- (int)indexOfLastReadMessage;
- (id)persistentVisibleStateCreateIfNecessary:(BOOL)fp8;
- (void)_saveScrollAndSelection:(BOOL)fp8;
- (void)saveScrollAndSelection;
- (BOOL)restoreScrollAndSelection;
- (void)_setScrollAndSelectionForThreadOpenedOrClosed:(id)fp8 flag:(BOOL)fp12 clickedRow:(int)fp16 rowToSelectInOpeningThread:(int)fp20;
- (id)selectedMessageIDs;
- (id)openThreadIDs;
- (void)setSelectedMessageIDs:(id)fp8 openThreadIDs:(id)fp12;
- (void)clearSearch;
- (BOOL)isShowingSearchResults;
- (BOOL)rankColumnIsVisible;
- (void)searchForString:(id)fp8 in:(int)fp12 withOptions:(int)fp16;
- (BOOL)isFocused;
- (void)setFocusedMessages:(id)fp8;
- (BOOL)isSortedByRank;
- (BOOL)isSortedByDateReceived;
- (BOOL)isSortedChronologically;
- (int)sortColumn;
- (int)searchSortColumn;
- (void)setSortColumn:(int)fp8 ascending:(BOOL)fp12;
- (BOOL)isSortedAscending;
- (void)setIsSortedAscending:(BOOL)fp8;
- (BOOL)isSearchSortedAscending;
- (int)state;
- (id)filteredMessages;
- (void)clearTrackingRects;
- (void)updateTrackingRects;
- (int)_indexOfMemberToSelectWhenOpeningThread:(id)fp8;
- (double)_getAnimationDuration:(int)fp8;
- (id)_createHiliteImage;
- (id)_createBackgroundImage;
- (id)_createSnapshotOfRect:(struct _NSRect)fp8 styleMask:(unsigned int)fp24 backing:(unsigned int)fp28 defer:(BOOL)fp32;
- (id)_createSnapshotOfRow:(int)fp8 styleMask:(unsigned int)fp12 backing:(unsigned int)fp16 defer:(BOOL)fp20;
- (BOOL)_isRowVisible:(int)fp8;
- (struct _NSSize)_calculateTruncationAmountUsingRowHeight:(float)fp8 collapseOrExpandAmount:(float)fp12 invisibleThreadAmountAbove:(float)fp16 invisibleThreadAmountBelow:(float)fp20;
- (void)_animateThreadCollapsing:(int)fp8 threadRow:(int)fp12 clickedRow:(int)fp16;
- (float)_animateThreadOpening:(id)fp8 threadMessageCount:(int)fp12 threadRow:(int)fp16 rowToBeSelected:(int)fp20;
- (void)searchFinished:(id)fp8;
- (void)tableView:(id)fp8 willMoveToWindow:(id)fp12;
- (void)tableViewDidMoveToWindow:(id)fp8;
- (BOOL)selectMessageWithIDIfExists:(id)fp8;
@end

