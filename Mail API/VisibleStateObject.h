/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface VisibleStateObject : NSObject
{
    struct visible_state vs;
    NSMutableDictionary *selectedMessageIDs;
    NSMutableArray *openThreadIDs;
}

- (void)dealloc;

@end

