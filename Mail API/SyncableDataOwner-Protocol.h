/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SyncableDataOwner <NSObject>
- (BOOL)dataWillBeSyncedVersion:(id *)arg1 data:(id *)arg2 type:(id)arg3;
- (BOOL)dataWasSyncedVersion:(id)arg1 newData:(id)arg2 acceptedChanges:(id)arg3;
@end
