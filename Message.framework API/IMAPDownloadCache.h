/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMAPResponseHandlerProtocol.h"

@class NSMutableArray;

@interface IMAPDownloadCache : NSObject <IMAPResponseHandler>
{
    NSMutableArray *_downloads;
}

- (void)dealloc;
- (struct _NSRange)_lockedFindRangeOfDownloadsWithUid:(unsigned long)fp8;
- (id)downloadForMessage:(id)fp8;
- (id)_getDownloadForUid:(unsigned long)fp8 partSectionSpecifier:(id)fp12 textSectionSpecifier:(int)fp16 length:(unsigned long)fp20 estimatedLength:(unsigned long)fp24;
- (id)downloadForUid:(unsigned long)fp8 partSectionSpecifier:(id)fp12 textSectionSpecifier:(int)fp16 length:(unsigned long)fp20;
- (id)downloadForUid:(unsigned long)fp8 partSectionSpecifier:(id)fp12 textSectionSpecifier:(int)fp16 expectedLength:(unsigned long)fp20;
- (void)_lockedUpdateDownloadsInRange:(struct _NSRange)fp8 fetchResults:(id)fp16 error:(id)fp20;
- (BOOL)handleResponse:(id)fp8 forOperation:(id)fp12;
- (void)handleFetchResponse:(id)fp8 forUid:(unsigned long)fp12;
- (void)handleFetchResponses:(id)fp8;
- (void)processResultsForUid:(unsigned long)fp8;
- (void)cleanUpDownloadsForUid:(unsigned long)fp8;
- (void)addDownload:(id)fp8 forUid:(unsigned long)fp12;
- (void)_lockedAddDownload:(id)fp8 atIndex:(unsigned int)fp12 forUid:(unsigned long)fp16;
- (void)addCommandsForDownload:(id)fp8 toPipeline:(id)fp12;

@end

