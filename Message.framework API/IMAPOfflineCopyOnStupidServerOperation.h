/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPOperation.h>

@interface IMAPOfflineCopyOnStupidServerOperation : IMAPOperation
{
    struct __CFArray *messageIds;
    struct __CFArray *internalDates;
}

- (void)serializeIntoData:(id)arg1;
- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (void)dealloc;
- (void)finalize;
- (BOOL)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (unsigned long long)approximateSize;

@end

