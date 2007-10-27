/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface SearchHistory : NSObject
{
    BOOL _timerScheduled;
    NSMutableDictionary *_defaults;
}

+ (id)sharedInstance;
- (id)init;
- (int)searchFieldForString:(id)fp8 andArea:(int)fp12 initWithFieldIfAbsent:(int)fp16;
- (void)setSearchField:(int)fp8 forString:(id)fp12 andArea:(int)fp16;
- (void)pruneOldHistoryItems;
- (void)writeChangesToDisk:(id)fp8;
- (void)cleanUpAndCommitChanges;

@end

