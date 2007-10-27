/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MailAccount.h>

@class NSMutableArray;

@interface LocalAccount : MailAccount
{
    NSMutableArray *_disembodiedUids;
}

+ (id)localAccount;
+ (id)defaultPathNameForAccount;
+ (id)defaultPathNameForAccountWithHostname:(id)fp8 username:(id)fp12;
+ (id)accountTypeString;
- (id)initWithPath:(id)fp8;
- (id)rootMailboxUid;
- (id)uniqueId;
- (Class)storeClass;
- (Class)todoStoreClass;
- (id)mailboxPathExtension;
- (id)primaryMailboxUid;
- (void)setPath:(id)fp8;
- (id)displayName;
- (void)setHostname:(id)fp8;
- (void)setUsername:(id)fp8;
- (id)password:(BOOL)fp8;
- (void)setPassword:(id)fp8;
- (BOOL)canFetch;
- (BOOL)shouldAutoFetch;
- (BOOL)shouldStoreNotesInInbox;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)fp8;
- (int)emptyTrashFrequency;
- (BOOL)shouldMoveDeletedMessagesToTrash;
- (void)_synchronouslyLoadListingForParent:(id)fp8;
- (id)_copyMailboxUidWithParent:(id)fp8 name:(id)fp12 attributes:(unsigned int)fp16 existingMailboxUid:(id)fp20;
- (BOOL)_setChildren:(id)fp8 forMailboxUid:(id)fp12;
- (id)createMailboxWithParent:(id)fp8 name:(id)fp12 displayName:(id)fp16;
- (id)createMailboxWithParent:(id)fp8 name:(id)fp12 error:(id *)fp16;
- (BOOL)renameMailbox:(id)fp8 newName:(id)fp12 parent:(id)fp16;
- (void)insertInMailboxes:(id)fp8 atIndex:(unsigned int)fp12;
- (id)mailboxUidForFileSystemPath:(id)fp8;
- (id)_URLScheme;
- (id)_infoForMatchingURL:(id)fp8;
- (BOOL)synchronizesDataWithServer;
- (id)_specialMailboxNameForType:(int)fp8;
- (id)todosMailboxUidCreateIfNeeded:(BOOL)fp8;
- (BOOL)isEditableByUser;
- (BOOL)canParticipateInRules;
- (BOOL)providesAccountInformation;
- (BOOL)isZeroConfiguration;
- (BOOL)isRemoteAccount;
- (BOOL)hasTrashMailbox;
- (BOOL)supportsAppleScript;

@end

