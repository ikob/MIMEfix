/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "SafeObserver.h"

@class InvocationQueue, NSString;

@interface MessageMall : SafeObserver
{
    InvocationQueue *_filterTasks;
    InvocationQueue *_userTasks;
    unsigned int _sortedAscending:1;
    unsigned int _wantsToBeSortedAscending:1;
    unsigned int _includeDeleted:1;
    unsigned int _focused:1;
    unsigned int _showingSearchResults:1;
    unsigned int _searchTaskIsRunning:1;
    unsigned int _isInThreadedMode:1;
    unsigned int _wantsToBeInThreadedMode:1;
    unsigned int _postedSearchFinished:1;
    unsigned int _displayingToColumn:1;
    unsigned int _sortedFilteredMessagesIsValid:1;
    unsigned int _selectionIncludesSmartMailbox:1;
    int _activeSearchType;
    int _activeSearchTarget;
    unsigned int _currentSearchID;
    unsigned int _currentFilterSeriesID;
    NSString *_displayName;
}

+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)allMessageMalls;
+ (void)registerMall:(id)fp8;
+ (void)deregisterMall:(id)fp8;
- (id)init;
- (id)willBeReleased;
- (void)dealloc;
- (BOOL)isOpened;
- (BOOL)filteredListIncludesAllMessages;
- (int)filteredMessagesCount;
- (id)filteredMessageAtIndex:(unsigned int)fp8;
- (id)filteredMessages;
- (void)setupRowDrawingInfo:(struct __CFDictionary *)fp8;
- (unsigned int)indexOfMessageByLibraryID:(id)fp8;
- (BOOL)selectionIncludesSmartMailbox;
- (BOOL)useLibraryIDNumbering;
- (id)sortedMessagesForStore:(id)fp8;
- (unsigned int)indexOfMessage:(id)fp8 inStore:(id)fp12 messages:(id)fp16;
- (unsigned int)indexOfMessage:(id)fp8;
- (id)numberForMessage:(id)fp8;
- (int)indexOfFilteredMessage:(id)fp8;
- (id)filteredThreads;
- (void)clearFilteredMessages;
- (BOOL)isFocused;
- (void)setFocusedMessages:(id)fp8;
- (void)_setFocusedMessages:(id)fp8;
- (BOOL)isShowingSearchResults;
- (int)currentSearchType;
- (int)currentSearchTarget;
- (void)setSortOrder:(id)fp8 ascending:(BOOL)fp12;
- (id)sortOrder;
- (void)sortMessages:(id)fp8;
- (BOOL)includeDeleted;
- (void)setIncludeDeleted:(BOOL)fp8;
- (BOOL)isSortedAscending;
- (BOOL)isSortedByDateReceived;
- (void *)sortFunctionForName:(id)fp8;
- (void *)sortFunction;
- (id)expandedMailboxes:(id)fp8;
- (void)setMailboxUids:(id)fp8;
- (void)_addNonDeletedMessagesInArray:(id)fp8 fromStore:(id)fp12;
- (id)_storeForMailbox:(id)fp8 fromStores:(id)fp12 cache:(id)fp16;
- (id)_storeForMailbox:(id)fp8 cache:(id)fp12;
- (void)_removeDeletedMessagesInArray:(id)fp8;
- (void)_removeMessagesInStores:(id)fp8 fromMessages:(id)fp12 storeCache:(id)fp16;
- (void)_rebuildNonDeletedMessagesForStoresOfMessagesInArray:(id)fp8;
- (void)_addStore:(id)fp8;
- (void)_filterInMessages:(id)fp8;
- (void)_filterInMessagesSynchronously:(id)fp8;
- (void)_filterOutMessages:(id)fp8 ignoreShowDeletedPreference:(BOOL)fp12;
- (BOOL)_filterOutMessagesSynchronously:(id)fp8;
- (void)_rebuildFromStores;
- (void)_resortUsingFunction:(void *)fp8;
- (void)_refilter;
- (void)_invertFilteredList;
- (id)_backgroundInvertFilteredList;
- (void)_gatherCountsFromStoresForTotalCount:(unsigned int *)fp8 totalSize:(unsigned int *)fp12 deletedCount:(unsigned int *)fp16 deletedSize:(unsigned int *)fp20;
- (void)totalCount:(unsigned int *)fp8 andSize:(unsigned int *)fp12;
- (void)deletedCount:(unsigned int *)fp8 andSize:(unsigned int *)fp12;
- (unsigned int)totalCount;
- (unsigned int)unreadCount;
- (void)hideMessages:(id)fp8;
- (void)unhideMessages:(id)fp8;
- (id)messagesToDeleteForMessages:(id)fp8;
- (void)deleteMessages:(id)fp8 allowMoveToTrash:(BOOL)fp12;
- (void)reallyDeleteMessages:(id)fp8 allowMoveToTrash:(BOOL)fp12 retainingStores:(id)fp16;
- (void)rebuildTableOfContentsAsynchronously;
- (void)structureDidChange;
- (void)structureDidChangeFromOpeningThread:(id)fp8 andSelectMessage:(id)fp12 animate:(BOOL)fp16;
- (void)structureDidChangeByClosingThread:(id)fp8 focusRow:(int)fp12 animate:(BOOL)fp16;
- (void)structureDidChangeWithChangedThreads:(id)fp8;
- (id)threadForMessageID:(id)fp8;
- (void)updateFilteredListForMessages:(id)fp8 flags:(id)fp12;
- (void)setFlag:(id)fp8 state:(BOOL)fp12 forMessages:(id)fp16;
- (id)setFlagsFromDictionary:(id)fp8 forMessages:(id)fp12;
- (void)setJunkMailLevel:(int)fp8 forMessages:(id)fp12 trainJunkMailDatabase:(BOOL)fp16;
- (void)setJunkMailLevel:(int)fp8 forMessages:(id)fp12;
- (BOOL)canCompact;
- (void)doCompact;
- (BOOL)canRebuild;
- (void)_updateDisplayName;
- (id)displayName;
- (id)criterionForString:(id)fp8 type:(int)fp12 scope:(int)fp16;
- (void)performLibrarySearchWithCriterion:(id)fp8 ID:(unsigned int)fp12;
- (id)threadSearchSequenceNumber;
- (BOOL)shouldCancel;
- (void)newMessagesAvailable:(id)fp8 ranks:(id)fp12;
- (void)newMessagesAvailable:(id)fp8;
- (void)filterInLibrarySearchResults:(id)fp8 ranks:(id)fp12 sequenceNumber:(id)fp16;
- (id)mailboxSearchCriterionForScope:(int)fp8;
- (id)textSearchCriterionForSearchType:(int)fp8 queryString:(id)fp12;
- (void)searchForCriterion:(id)fp8;
- (void)searchForString:(id)fp8 in:(int)fp12 withOptions:(int)fp16;
- (void)reallySearchWithCriterion:(id)fp8 ID:(unsigned int)fp12;
- (void)_searchFinished;
- (void)_cancelSearch;
- (BOOL)isSearching;
- (id)copySearchRankForMessage:(id)fp8;
- (void)_normalizeSearchRanks;
- (id)mailboxUid;
- (id)allMailboxUids;
- (id)selectedMailboxUids;
- (void)messageColorsNeedToBeReevaluated;
- (BOOL)isReadOnly;
- (id)stores;
- (int)compareByNumberMessage:(id)fp8 andMessage:(id)fp12 sortedAscending:(BOOL)fp16;
- (BOOL)deletedFlagForMessage:(id)fp8;
- (BOOL)_deletedFlagForMessage:(id)fp8 hiddenMessages:(id)fp12 undeletedMessages:(id)fp16;
- (BOOL)_shouldDisplayMessage:(id)fp8 hiddenMessages:(id)fp12 undeletedMessages:(id)fp16;
- (id)_messagesThatShouldBeDisplayed:(id)fp8 hiddenMessages:(id)fp12 undeletedMessages:(id)fp16;
- (void)_componentMessageFlagsChanged:(id)fp8;
- (void)_componentStoreDidOpen:(id)fp8;
- (void)_componentStoreStructureChanged:(id)fp8;
- (void)_accountsChanged:(id)fp8;
- (void)_componentStoreMessagesWereAdded:(id)fp8;
- (void)handleMessagesAdded:(id)fp8;
- (void)_componentStoreMessagesCompacted:(id)fp8;
- (void)_performFilterTask:(id)fp8 seriesID:(unsigned int)fp12;
- (void)_filterTaskCompleted:(id)fp8 seriesID:(unsigned int)fp12;
- (void)structureWillChangeFromOpeningThread:(id)fp8;
- (void)structureWillChangeFromClosingThread:(id)fp8 focusRow:(int)fp12 animate:(BOOL)fp16;
- (void)structureWillChange;
- (id)_backgroundResortUsingSortFunction:(void *)fp8;
- (void)_removeMembersOfOpenThreads:(id)fp8;
- (id)_insertMembersOfOpenThreads:(id)fp8 usingSortFunction:(void *)fp12 context:(struct _MessageSortingInformation)fp16;
- (id)_backgroundRefilterMessages:(id)fp8 stores:(id)fp12;
- (id)_backgroundMergeMessages:(id)fp8;
- (id)_backgroundSortNewFilteredMessages:(id)fp8;
- (void)_mergeMessages:(id)fp8 intoMessages:(id)fp12 newThreads:(id *)fp16 changedThreads:(id *)fp20 usingComparator:(void *)fp24;
- (id)_backgroundFilterOutMessages:(id)fp8 ignoreShowDeletedPreference:(BOOL)fp12;
- (BOOL)isInThreadedMode;
- (void)setIsInThreadedMode:(BOOL)fp8;
- (void)toggleThreadedMode;
- (BOOL)needThreadingInfo;
- (void)setDisplayingToColumn:(BOOL)fp8;
- (BOOL)needTo;
- (unsigned int)loadOptions;
- (id)_backgroundResetThreadInfoAndGroupByThread;
- (id)_backgroundGroupMessagesByThread;
- (id)_backgroundUngroupThreads;
- (void)openThreadAtIndex:(int)fp8 animate:(BOOL)fp12;
- (void)openThreadAtIndex:(int)fp8 andSelectMessage:(id)fp12 animate:(BOOL)fp16;
- (id)quietlyOpenThreadAtIndex:(unsigned int)fp8;
- (void)closeThreadAtIndex:(int)fp8 focusRow:(int)fp12 animate:(BOOL)fp16;
- (id)quietlyCloseThreadAtIndex:(unsigned int)fp8;
- (void)openThreadsWithIDs:(id)fp8;
- (void)openAllThreads;
- (void)closeAllThreads;
- (BOOL)loadFullThreadsForMessages:(id)fp8;
- (void)_setFilteredMessages:(id)fp8;
- (void)_setFilteredMessages:(id)fp8 changedMessages:(id)fp12 filteredThreads:(id)fp16 changedThreads:(id)fp20 changedFlags:(id)fp24 messagesFilteredIn:(id)fp28 messagesFilteredOut:(id)fp32 forSeriesID:(unsigned int)fp36;
- (void)routeMessages:(id)fp8 fromStores:(id)fp12;
- (void)_unlockedAddMessagesInSameThreadAsMessage:(id)fp8 toSetOrArray:(id)fp12;
- (void)addMessagesInSameThreadAsMessage:(id)fp8 toSet:(id)fp12;
- (id)repliesToMessage:(id)fp8;
- (id)parentOfMessage:(id)fp8;
- (BOOL)messageIsPartOfAThread:(id)fp8;
- (id)messageForMessageID:(id)fp8;
- (id)threadForMessage:(id)fp8;
- (id)threadAtIndex:(unsigned int)fp8;
- (id)filteredThreadForMessage:(id)fp8;
- (id)unfilteredThreadForMessage:(id)fp8;
- (id)filteredThreadsForMessages:(id)fp8;
- (void)_deduceThreadHierarchyForMessages:(id)fp8 firstTime:(BOOL)fp12;
- (void)_clearThreadInfo;
- (void)updateThreadingDictionaryForMessages:(id)fp8;
- (void)removeMessagesFromThreadingDictionary:(id)fp8;
- (void)_resetThreadInfoFromFilteredMessages;
- (void)_updateThreadInfoForMessages:(id)fp8;
- (int)_appendDescriptionOfDictionaryMemoryUsage:(id)fp8 named:(id)fp12 toString:(id)fp16;
- (id)memoryUsageDescription;

@end

