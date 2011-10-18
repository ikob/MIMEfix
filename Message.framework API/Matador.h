/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class InvocationQueue, NSConditionLock, NSMutableSet;

@interface Matador : NSObject
{
    NSConditionLock *_attachmentIndexingLock;
    NSMutableSet *_messsagesScheduledForAttachmentIndexing;
    InvocationQueue *_indexQueue;
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)_setAttributeForFileAtPath:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)setAttributeForFileAtPath:(id)arg1 name:(id)arg2 value:(id)arg3;
- (BOOL)_shouldIndexAttachmentsForMessage:(id)arg1;
- (void)_synchronouslyIndexAttachmentsForMessage:(id)arg1;
- (void)_synchronouslyIndexAttachmentsForMessages:(id)arg1;
- (void)_scheduleAttachmentIndexingForMessages:(id)arg1;
- (void)_triggerDelayedAttachmentIndexing;
- (void)_triggerNowAttachmentIndexing;
- (void)_indexAttachmentsForScheduledMessages;
- (void)indexAttachmentsForMessages:(id)arg1;
- (void)indexAttachmentsForMessage:(id)arg1;
- (void)immediatelyIndexAttachmentsForMessages:(id)arg1;
- (void)immediatelyIndexAttachmentsForMessage:(id)arg1;

@end

