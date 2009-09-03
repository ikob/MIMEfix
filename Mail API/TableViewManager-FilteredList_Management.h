/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "TableViewManager.h"

@interface TableViewManager (FilteredList_Management)
- (void)mallStructureWillChange:(id)arg1;
- (void)setMailboxUids:(id)arg1 isSettingUpUI:(BOOL)arg2;
- (void)storeStructureChanged:(id)arg1;
- (void)messagesCompacted:(id)arg1;
- (void)messageFlagsChanged:(id)arg1;
- (void)_scrollToHappyPlace;
- (void)_recordVisibleState:(id)arg1 deletedAreGoingAway:(BOOL)arg2 considerPinToEnd:(BOOL)arg3;
- (BOOL)_restoreVisibleState:(id)arg1 forceSelToVisible:(BOOL)arg2;
- (void)dumpVisibleState;
- (long long)indexOfTopmostVisibleMessageMustBeSelected:(BOOL)arg1 okayIfDeleted:(BOOL)arg2;
- (long long)indexOfLastReadMessage;
- (id)persistentVisibleStateCreateIfNecessary:(BOOL)arg1;
- (void)_saveScrollAndSelection:(BOOL)arg1;
- (void)saveScrollAndSelection;
- (BOOL)restoreScrollAndSelection;
- (void)_setScrollAndSelectionForThreadOpenedOrClosed:(id)arg1 flag:(BOOL)arg2 clickedRow:(long long)arg3 rowToSelectInOpeningThread:(long long)arg4;
- (id)selectedMessageIDs;
- (id)openThreadIDs;
- (void)setSelectedMessageIDs:(id)arg1 openThreadIDs:(id)arg2;
- (void)clearSearch;
- (BOOL)isShowingSearchResults;
- (BOOL)rankColumnIsVisible;
- (void)searchForString:(id)arg1 in:(int)arg2 withOptions:(int)arg3;
- (BOOL)isFocused;
- (void)setFocusedMessages:(id)arg1;
- (BOOL)isSortedByRank;
- (BOOL)isSortedByDateReceived;
- (BOOL)isSortedChronologically;
- (int)sortColumn;
- (int)searchSortColumn;
- (void)setSortColumn:(int)arg1 ascending:(BOOL)arg2;
- (BOOL)isSortedAscending;
- (void)setIsSortedAscending:(BOOL)arg1;
- (BOOL)isSearchSortedAscending;
- (long long)state;
- (id)filteredMessages;
- (void)clearTrackingRects;
- (void)updateTrackingRects;
- (long long)_indexOfMemberToSelectWhenOpeningThread:(id)arg1;
- (double)_getAnimationDuration:(long long)arg1;
- (id)_createHiliteImage;
- (id)_createBackgroundImage;
- (id)_createSnapshotOfRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)_createSnapshotOfRow:(long long)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (BOOL)_isRowVisible:(long long)arg1;
- (struct CGSize)_calculateTruncationAmountUsingRowHeight:(double)arg1 collapseOrExpandAmount:(double)arg2 invisibleThreadAmountAbove:(double)arg3 invisibleThreadAmountBelow:(double)arg4;
- (void)_animateThreadCollapsing:(long long)arg1 threadRow:(long long)arg2 clickedRow:(long long)arg3;
- (double)_animateThreadOpening:(id)arg1 threadMessageCount:(long long)arg2 threadRow:(long long)arg3 rowToBeSelected:(long long)arg4;
- (void)searchFinished:(id)arg1;
- (void)tableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)tableViewDidMoveToWindow:(id)arg1;
- (BOOL)selectMessageWithIDIfExists:(id)arg1;
@end

