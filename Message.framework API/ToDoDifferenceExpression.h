/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class ToDoUIDRemoteIDPair;

@interface ToDoDifferenceExpression
{
    ToDoUIDRemoteIDPair *_storeDifference;
    int _storeDifferenceType;
    ToDoUIDRemoteIDPair *_cacheDifference;
    int _cacheDifferenceType;
    BOOL _avoidAsserts;
}

- (id)init;
- (void)dealloc;
- (id)storeDifference;
- (void)setStoreDifference:(id)arg1 type:(int)arg2;
- (id)cacheDifference;
- (void)setCacheDifference:(id)arg1 type:(int)arg2;
- (id)generateResult;
- (id)generateForcedStoreResult;
- (id)generateForcedCacheResult;
- (int)resolveConflictForStoreAgent:(id)arg1 cacheAgent:(id)arg2 mailboxID:(long long)arg3;
- (id)description;
- (void)setAvoidAsserts:(BOOL)arg1;
- (void)handleInvalidResult:(id)arg1;

@end

