/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray;

@interface InvocationQueue : NSObject
{
    NSMutableArray *_items;
    unsigned int _maxThreads:16;
    unsigned int _numThreads:16;
    BOOL _periodicallyFlushQueuedEvents;
    double _threadRecycleTimeout;
    NSConditionLock *_threadRecycleLock;
}

+ (void)initialize;
+ (void)cancelAllMonitoredItems;
- (id)init;
- (void)setMaxThreadCount:(unsigned int)fp8;
- (unsigned int)maxThreadCount;
- (void)dealloc;
- (void)finalize;
- (void)removeAllItems;
- (void)stop;
- (void)_drainQueue;
- (void)addInvocation:(id)fp8;
- (unsigned int)invocationCount;
- (void)setThreadRecycleTimeout:(double)fp8;
- (double)threadRecycleTimeout;
- (BOOL)periodicallyFlushQueuedEvents;
- (void)setPeriodicallyFlushQueuedEvents:(BOOL)fp8;

@end

