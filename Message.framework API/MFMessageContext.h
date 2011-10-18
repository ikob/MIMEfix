/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue;

@interface MFMessageContext : NSObject
{
    NSOperationQueue *_fsQueue;
    NSOperationQueue *_waitingQueue;
}

+ (id)sharedContext;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)async_setJunkMailLevel:(int)arg1 forMessages:(id)arg2;
- (id)async_cacheHeaderAndBodyForMessage:(id)arg1 monitor:(id)arg2;
- (id)filesystemQueue;

@end

