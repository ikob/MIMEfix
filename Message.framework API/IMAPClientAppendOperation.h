/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/IMAPClientMailboxOperation.h>

@class ActivityMonitor, NSArray, NSData, NSDate, NSDictionary;

@interface IMAPClientAppendOperation : IMAPClientMailboxOperation
{
    NSDate *_dateReceived;
    NSArray *_serverFlags;
    NSData *_data;
    NSDictionary *_newMessageInfo;
    BOOL _shouldTryCreate;
    ActivityMonitor *_progressMonitor;
}

- (void)dealloc;
- (id)initWithMailboxName:(id)fp8 flags:(id)fp12 dateReceived:(id)fp16 data:(id)fp20;
- (const char *)commandTypeCString;
- (id)detailsString;
- (id)createCommandDataForLiteralPlus:(BOOL)fp8;
- (BOOL)executeOnConnection:(id)fp8;
- (id)progressMonitor;
- (void)setProgressMonitor:(id)fp8;
- (BOOL)shouldTryCreate;
- (void)setShouldTryCreate:(BOOL)fp8;
- (id)newMessageInfo;
- (void)setNewMessageInfo:(id)fp8;
- (id)data;
- (void)setData:(id)fp8;
- (id)serverFlags;
- (void)setServerFlags:(id)fp8;
- (id)dateReceived;
- (void)setDateReceived:(id)fp8;

@end

