/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class ActivityMonitor, NSMutableArray;

@interface LibraryThread : NSObject
{
    NSMutableArray *_requests;
    ActivityMonitor *_monitor;
    struct __CFDictionary *_storeReqCounts;
}

+ (id)sharedInstance;
- (void)_runThread;
- (void)addMessages:(id)fp8 toStore:(id)fp12;
- (id)messagesBeingAddedToStore:(id)fp8;
- (BOOL)isAddingMessagesToStore:(id)fp8;

@end

