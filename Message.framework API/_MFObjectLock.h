/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

#import "NSObject.h"

@interface _MFObjectLock : NSObject
{
    struct _opaque_pthread_t *lockingThread;
    struct _opaque_pthread_cond_t condition;
    unsigned int acquiredCount:16;
}

- (id)init;
- (void)dealloc;
- (void)lock;
- (BOOL)tryLock;
- (void)unlockForObject:(id)fp8;
- (void)yieldForObject:(id)fp8;
- (void)forceUnlockForObject:(id)fp8;

@end

