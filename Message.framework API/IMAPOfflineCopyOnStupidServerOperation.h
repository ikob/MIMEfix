/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/IMAPOperation.h>

@interface IMAPOfflineCopyOnStupidServerOperation : IMAPOperation
{
    struct __CFArray *messageIds;
    struct __CFArray *internalDates;
}

- (void)serializeIntoData:(id)fp8;
- (unsigned char)_magic;
- (void)_deserializeOpSpecificValuesFromData:(id)fp8 cursor:(unsigned int *)fp12;
- (void)dealloc;
- (void)finalize;
- (BOOL)getMessageId:(id *)fp8 andInternalDate:(id *)fp12 forDestinationUid:(unsigned int)fp16;
- (void)setMessageId:(id)fp8 andInternalDate:(id)fp12 forMessageWithSourceUid:(unsigned int)fp16;
- (void)expungeTemporaryUid:(unsigned int)fp8;
- (unsigned int)approximateSize;

@end

