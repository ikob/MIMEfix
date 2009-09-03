/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@class NSMutableArray;

@interface RemoteStoreAccount : MailAccount
{
    NSMutableArray *_mailboxesToSynchronize;
    BOOL _fallsBackToLocalAccountForToDos;
}

@property BOOL storeDraftsOnServer;
@property BOOL storeNotesOnServer;
@property BOOL storeSentMessagesOnServer;
@property BOOL storeTrashOnServer;
@property BOOL storeJunkOnServer;
@property(readonly) BOOL storeJunkOnServerDefault;
@property BOOL storeToDosOnServer;
@property BOOL fallsBackToLocalAccountForToDos; // @synthesize fallsBackToLocalAccountForToDos=_fallsBackToLocalAccountForToDos;

- (id)init;
- (void)dealloc;
- (void)updateFromSyncedDictionary:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)_infoForMatchingURL:(id)arg1;
- (void)fetchSynchronously;
- (BOOL)canGoOffline;
- (void)setCachePolicy:(int)arg1 permanently:(BOOL)arg2;
- (int)cachePolicy;
- (BOOL)storeDraftsOnServer;
- (void)setStoreDraftsOnServer:(BOOL)arg1;
- (BOOL)storeNotesOnServer;
- (void)setStoreNotesOnServer:(BOOL)arg1;
- (BOOL)storeToDosOnServer;
- (BOOL)isSourceOfToDosTruth;
- (void)setStoreToDosOnServer:(BOOL)arg1;
- (BOOL)storeJunkOnServer;
- (void)setStoreJunkOnServer:(BOOL)arg1;
- (BOOL)storeJunkOnServerDefault;
- (BOOL)storeSentMessagesOnServer;
- (void)setStoreSentMessagesOnServer:(BOOL)arg1;
- (BOOL)storeTrashOnServer;
- (void)setStoreTrashOnServer:(BOOL)arg1;
- (BOOL)_isMailboxTypeStoredLocally:(int)arg1;
- (BOOL)_setStoreSpecialMailboxUidType:(int)arg1 onServer:(BOOL)arg2;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (id)_localMailboxNameForType:(int)arg1 usingDisplayName:(id)arg2;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2;
- (id)_specialMailboxUidWithType:(int)arg1 create:(BOOL)arg2 isLocal:(BOOL)arg3;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (BOOL)_canEmptyMessagesFromMailboxUid:(id)arg1;
- (BOOL)_shouldCacheAggressively;
- (BOOL)canBeSynchronized;
- (void)considerSynchronizingNow;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (void)_nowWouldBeAGoodTimeToStartBackgroundSynchronizationWithUserInput:(BOOL)arg1;
- (BOOL)needToSynchronizeMailboxCaches;
- (void)_synchronizeAccountWithServerWithUserInput:(id)arg1;
- (BOOL)_synchronizeMailboxListWithUserInput:(BOOL)arg1;
- (BOOL)synchronizesDataWithServer;
- (void)didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;
- (void)_synchronizeMailboxes:(id)arg1;
- (BOOL)_addMailboxesToSynchronize:(id)arg1;
- (BOOL)_shouldSynchronizeMailbox:(id)arg1;
- (void)_synchronizeMailboxesSynchronously;
- (void)_checkForNewMessagesInStore:(id)arg1;
- (id)offlineCacheDirectory;
- (BOOL)fallsBackToLocalAccountForToDos;
- (void)setFallsBackToLocalAccountForToDos:(BOOL)arg1;

@end

