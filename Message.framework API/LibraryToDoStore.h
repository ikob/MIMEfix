/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class MailboxUid;

@interface LibraryToDoStore
{
    Class _libraryClass;
    MailboxUid *_mailboxUid;
    long long _mailboxID;
}

- (id)initWithLibraryClass:(Class)arg1 mailboxUid:(id)arg2 mailboxID:(long long)arg3;
- (id)initWithMailboxUid:(id)arg1 mailboxID:(long long)arg2;
- (void)dealloc;
- (id)mailboxUid;
- (void)updateServerSnapshotForMailboxID:(long long)arg1;
- (id)snapshotForMailboxID:(long long)arg1;
- (id)todoWithUID:(id)arg1 remoteID:(id)arg2 mailboxID:(long long)arg3;
- (void)addToDos:(id)arg1;
- (void)updateToDos:(id)arg1;
- (void)deleteToDos:(id)arg1;

@end
