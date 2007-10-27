/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/ToDoStoreReconciliationAgent.h>

@class LibraryToDoStore;

@interface LocalToDoStoreReconciliationAgent : ToDoStoreReconciliationAgent
{
    LibraryToDoStore *_agentStore;
}

- (id)initWithMailboxUid:(id)fp8 mailboxID:(unsigned int)fp12;
- (void)dealloc;
- (void)prepareToReconcileForID:(unsigned int)fp8;
- (void)startToReconcileForID:(unsigned int)fp8;
- (void)applyReconcilerChangesForID:(unsigned int)fp8;
- (void)finishReconciliationForID:(unsigned int)fp8;
- (id)snapshotForMailboxID:(unsigned int)fp8;
- (id)todoWithUID:(id)fp8 remoteID:(id)fp12 mailboxID:(unsigned int)fp16;

@end

