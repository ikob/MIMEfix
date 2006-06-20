/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/IMAPDownload.h>

@class NSError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    NSMutableData *_mdata;
    NSString *_section;
    NSError *_error;
    unsigned int _length:32;
    unsigned int _knownLength:1;
    unsigned int _complete:1;
}

- (id)initWithUid:(unsigned long)fp8 section:(id)fp12 estimatedLength:(unsigned long)fp16;
- (id)initWithUid:(unsigned long)fp8 section:(id)fp12 length:(unsigned long)fp16;
- (id)section;
- (void)dealloc;
- (void)handleFetchResult:(id)fp8;
- (void)processResults;
- (void)addCommandsToPipeline:(id)fp8 withCache:(id)fp12;
- (BOOL)isComplete;
- (id)data;
- (id)error;
- (void)setError:(id)fp8;

@end

