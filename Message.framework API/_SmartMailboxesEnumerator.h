/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class NSArray, _MailboxUidEnumerator;

@interface _SmartMailboxesEnumerator : NSEnumerator
{
    NSArray *smartMailboxes;
    int currentMailboxIndex;
    _MailboxUidEnumerator *currentMailboxEnumerator;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithSmartMailboxUids:(id)fp8;
- (id)nextObject;

@end

