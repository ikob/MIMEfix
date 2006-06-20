/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAPAccount, NSFileHandle, NSMutableArray;

@interface IMAPOperationCache : NSObject
{
    IMAPAccount *_account;
    NSFileHandle *_handle;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
}

- (id)initWithIMAPAccount:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (id)account;
- (void)createMailbox:(id)fp8;
- (void)deleteMailbox:(id)fp8;
- (void)setFlags:(id)fp8 andClearFlags:(id)fp12 forMessages:(id)fp16;
- (void)setFlags:(id)fp8 andClearFlags:(id)fp12 forUids:(id)fp16 forMailbox:(id)fp20;
- (unsigned int)firstUidForCopyingMessages:(id)fp8 fromMailbox:(id)fp12 toMailbox:(id)fp16;
- (unsigned int)uidForAppendingMessageData:(id)fp8 withFlags:(id)fp12 andInternalDate:(id)fp16 toMailbox:(id)fp20;
- (void)expungeTemporaryUid:(unsigned int)fp8;
- (void)saveChanges;
- (unsigned int)numberOfPendingChanges;
- (BOOL)hasOperationsForMailbox:(id)fp8;
- (BOOL)connection:(id)fp8 shouldHandleUntaggedResponse:(id)fp12 forCommand:(CDAnonymousStruct7 *)fp16;
- (void)_performCreateOperation:(id)fp8 withContext:(CDAnonymousStruct12 *)fp12;
- (void)_performDeleteOperation:(id)fp8 withContext:(CDAnonymousStruct12 *)fp12;
- (void)_performStoreOperation:(id)fp8 withContext:(CDAnonymousStruct12 *)fp12;
- (void)_performAppendOperation:(id)fp8 withContext:(CDAnonymousStruct12 *)fp12;
- (void)_performCopyOperation:(id)fp8 withContext:(CDAnonymousStruct12 *)fp12;
- (void)performDeferredOperationsWithConnection:(id)fp8;
- (id)deferredOperations;

@end

