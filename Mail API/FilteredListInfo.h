/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface FilteredListInfo : NSObject
{
    NSMutableArray *filteredMessages;
    NSArray *changedMessages;
    NSMutableArray *filteredThreads;
    NSArray *changedThreads;
    NSDictionary *changedFlags;
    NSMutableArray *messagesFilteredIn;
    NSMutableArray *messagesFilteredOut;
    int taskType;
}

+ (id)infoForType:(int)fp8;
- (void)dealloc;

@end

