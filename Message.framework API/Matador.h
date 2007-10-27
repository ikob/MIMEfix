/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class InvocationQueue;

@interface Matador : NSObject
{
    InvocationQueue *_tasks;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)_setAttributeForFileAtPath:(id)fp8 name:(id)fp12 value:(id)fp16;
- (void)setAttributeForFileAtPath:(id)fp8 name:(id)fp12 value:(id)fp16;
- (void)_indexAttachmentsForMessage:(id)fp8;
- (void)_indexAttachmentsForMessages:(id)fp8;
- (void)scheduleAttachmentIndexingForMessages:(id)fp8;
- (void)immediatelyIndexAttachmentsForMessages:(id)fp8;
- (void)indexAttachmentsForMessages:(id)fp8;
- (void)indexAttachmentsForMessage:(id)fp8;
- (void)immediatelyIndexAttachmentsForMessage:(id)fp8;

@end

