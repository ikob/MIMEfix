/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class Message, MessageThread, NSMutableSet;

@interface MessageThreadingData : NSObject
{
    Message *parent;
    NSMutableSet *replies;
    MessageThread *thread;
}

- (id)description;
- (void)dealloc;

@end

