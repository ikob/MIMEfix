/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (LockingAdditions)
+ (void)clearLocks;
- (void)lock;
- (BOOL)tryLock;
- (void)lockWithPriority;
- (BOOL)tryLockWithPriority;
- (void)unlock;
- (void)yieldLock;
- (BOOL)isLocked;
@end

