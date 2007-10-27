/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/IMAPDownload.h>

@class NSMutableArray;

@interface IMAPCompoundDownload : IMAPDownload
{
    NSMutableArray *_subdownloads;
}

- (id)createClone;
- (void)dealloc;
- (id)subdownloads;
- (void)addSubdownload:(id)fp8;
- (void)removeSubdownload:(id)fp8;
- (void)addCommandsToPipeline:(id)fp8 withCache:(id)fp12;
- (void)processResults;
- (BOOL)isComplete;
- (id)error;
- (unsigned long)bytesFetched;
- (unsigned long)expectedLength;

@end

