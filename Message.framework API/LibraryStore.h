/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MessageStore.h>

@class MessageCriterion, NSMutableArray, NSMutableIndexSet, NSString;

@interface LibraryStore : MessageStore
{
    MessageCriterion *_criterion;
    double _lastUpdated;
    NSString *_url;
    unsigned int _openOptions;
    NSMutableIndexSet *_memberLibraryIDs;
    unsigned int _messageAvailabilityCount;
    BOOL _mailboxUnreadCountUpdatePending;
    NSMutableArray *_allMessagesDuringOpening;
}

+ (void)initialize;
+ (id)_storeCacheMapTable;
+ (unsigned int)defaultLoadOptions;
+ (id)storeWithCriterion:(id)fp8;
+ (id)storeWithMailbox:(id)fp8;
+ (id)sharedInstance;
+ (BOOL)createEmptyStoreForPath:(id)fp8;
+ (BOOL)storeAtPathIsWritable:(id)fp8;
- (id)initWithCriterion:(id)fp8 mailbox:(id)fp12 readOnly:(BOOL)fp16;
- (id)initWithCriterion:(id)fp8;
- (id)initWithMailboxUid:(id)fp8 readOnly:(BOOL)fp12;
- (id)initWithMailbox:(id)fp8;
- (id)mailbox;
- (unsigned int)mailboxID;
- (void)updateCriterionFromMailbox;
- (void)_updateMailboxUnreadCount;
- (void)addCountsForMessages:(id)fp8 shouldUpdateUnreadCount:(BOOL)fp12;
- (BOOL)shouldCancel;
- (void)_newMessagesAvailable:(id)fp8;
- (void)addInvocationToQueue:(id)fp8;
- (void)newMessagesAvailable:(id)fp8;
- (void)libraryFinishedSendingMessages;
- (void)openAsynchronouslyWithOptions:(unsigned int)fp8;
- (BOOL)_shouldUpdateColorsAndAttachmentsAfterOpening;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)fp8;
- (id)openSynchronouslyUpdatingMetadata:(BOOL)fp8 returnRetainedMessages:(BOOL)fp12;
- (unsigned int)totalCount;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesWithOptions:(unsigned int)fp8;
- (void)asynchronousCopyOfAllMessagesWithOptions:(id)fp8;
- (id)mutableCopyOfAllMessages;
- (void)recalculateUnreadCountAsychronously;
- (void)messageFlagsDidChange:(id)fp8 flags:(id)fp12 oldMessageFlags:(id)fp16;
- (void)_recalculateUnreadCountSynchronously;
- (id)filterMessagesByMembership:(id)fp8;
- (void)messagesAdded:(id)fp8;
- (void)handleMessagesAdded:(id)fp8;
- (void)messagesWereAdded:(id)fp8 forIncrementalLoading:(BOOL)fp12;
- (void)messageFlagsChanged:(id)fp8;
- (void)handleMessageFlagsChanged:(id)fp8;
- (void)todosDidChangeForMessages:(id)fp8 oldToDosByMessage:(id)fp12 newToDosByMessage:(id)fp16;
- (void)messageToDosChanged:(id)fp8;
- (void)handleMessageToDosChanged:(id)fp8;
- (void)messagesCompacted:(id)fp8;
- (void)handleMessagesCompacted:(id)fp8;
- (void)messagesUpdated:(id)fp8;
- (void)handleMessagesUpdated:(id)fp8;
- (void)_invalidate;
- (void)dealloc;
- (void)finalize;
- (id)messageForMessageID:(id)fp8;
- (unsigned long)flagsForMessage:(id)fp8;
- (BOOL)hasCachedDataForMimePart:(id)fp8;
- (id)_fetchHeaderDataForMessage:(id)fp8;
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)fullBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (unsigned int)indexOfMessage:(id)fp8;
- (void)deleteMessages:(id)fp8 moveToTrash:(BOOL)fp12;
- (void)deleteMessagesOlderThanNumberOfDays:(int)fp8 compact:(BOOL)fp12;
- (BOOL)allowsAppend;
- (BOOL)allowsOverwrite;
- (int)appendMessages:(id)fp8 unsuccessfulOnes:(id)fp12 newMessageIDs:(id)fp16 newMessages:(id)fp20 newDocumentIDsByOld:(id)fp24 flagsToSet:(id)fp28 forMove:(BOOL)fp32 error:(id *)fp36;
- (int)undoAppendOfMessageIDs:(id)fp8;
- (void)finishCopyOfMessages:(id)fp8 fromStore:(id)fp12 originalsWereDeleted:(BOOL)fp16;
- (BOOL)canCompact;
- (BOOL)_shouldCallCompactWhenClosing;
- (void)doCompact;
- (id)lastMessageWithHeaders:(id)fp8 inMailbox:(id)fp12;
- (void)deleteLastMessageWithHeaders:(id)fp8 compactWhenDone:(BOOL)fp12;
- (id)messageWithValue:(id)fp8 forHeader:(id)fp12 options:(unsigned int)fp16;
- (id)dataForMimePart:(id)fp8;
- (void)writeUpdatedMessageDataToDisk;
- (void)updateMetadata;
- (void)updateUserInfoToLatestValues;
- (void)_setNeedsAutosave;
- (id)criterion;
- (id)url;
- (unsigned int)unreadCount;
- (void)_flushAllMessageData;
- (void)rebuildTableOfContentsAsynchronously;
- (void)_rebuildTableOfContentsSynchronously;
- (void)invalidateMessage:(id)fp8;
- (void)invalidateMessages:(id)fp8;
- (void)_flushAllCaches;
- (id)_cachedBodyForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedHeadersForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedBodyDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (id)_cachedHeaderDataForMessage:(id)fp8 valueIfNotPresent:(id)fp12;
- (BOOL)_updateFlagForMessage:(id)fp8 key:(id)fp12 value:(BOOL)fp16;
- (BOOL)setPreferredEncoding:(unsigned long)fp8 forMessage:(id)fp12;
- (int)setToDo:(id)fp8 forMessage:(id)fp12 oldToDo:(id)fp16;

@end

