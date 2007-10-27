/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class NSDate;

@interface IMAPClientDoneOperation : IMAPSingleClientOperation
{
    NSDate *_resetDate;
    BOOL _resetDateHasPassed;
    BOOL _updatingReadiness;
    BOOL _shouldQueueIdleWhenFinished;
}

- (void)dealloc;
- (id)init;
- (const char *)commandTypeCString;
- (id)createCommandDataForLiteralPlus:(BOOL)fp8;
- (void)setResetDate:(id)fp8;
- (id)resetDate;
- (void)setFinished:(BOOL)fp8;
- (void)setSequenceNumber:(unsigned int)fp8;
- (BOOL)executeOnConnection:(id)fp8;
- (void)cancel;
- (BOOL)isReady;
- (void)updateReadiness;
- (void)setResetDateEarlierThanNow;
- (BOOL)shouldQueueIdleWhenFinished;
- (void)setShouldQueueIdleWhenFinished:(BOOL)fp8;

@end

