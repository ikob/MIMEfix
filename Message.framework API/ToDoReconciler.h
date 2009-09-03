/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSConditionLock, NSLock, NSMutableDictionary;

@interface ToDoReconciler
{
    NSMutableDictionary *_reconciliationAgentsData;
    int _reconcilerPhase;
    long long _mailboxID;
    id <ReconciliationMechanism> _mechanism;
    unsigned long long _numAgentsCompleteForPhase;
    NSConditionLock *_agentConditionLock;
    BOOL _requestsPending;
    BOOL _isReconciling;
    NSLock *_reconcilerBusyLock;
}

+ (id)reconcilerForMailboxID:(id)arg1;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)dealloc;
- (void)requestReconciliation:(id)arg1;

@end

