/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MessageStore.h>

#import "RouterStoreProtocol.h"

@class ActivityMonitor, MessageRouter, NSMutableSet;

@interface POP3FetchStore : MessageStore <RouterStore>
{
    BOOL _currentlyFetchingMessage;
    BOOL _lastConnectionFailed;
    unsigned int _numMessagesToFetch;
    unsigned int _numMessagesFetchedSoFar;
    unsigned int _sizeOfMessageBeingFetched;
    unsigned int _numBytesReceivedSoFar;
    unsigned int _totalBytesToFetch;
    unsigned int _totalBytesReceivedSoFar;
    NSMutableSet *_skippedMessageIds;
    struct __CFDictionary *_serverMessageIdsByNumber;
    struct __CFArray *_messageNumbersToDelete;
    int _activityMonitorKey;
    double _lastBatchStartTime;
    MessageRouter *_router;
    ActivityMonitor *_fetchingActivityMonitor;
}

- (id)initWithPOPAccount:(id)fp8;
- (void)dealloc;
- (void)finalize;
- (id)mailboxUid;
- (BOOL)isOpened;
- (id)displayName;
- (void)fetchSynchronously;
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)fp8;
- (void)deleteMessages:(id)fp8;
- (void)_backgroundFetchFailed:(id)fp8;
- (id)_fetchHeaderDataForMessage:(id)fp8;
- (id)_fetchBodyDataForMessage:(id)fp8 andHeaderDataIfReadilyAvailable:(id *)fp12;
- (id)messageForMessageID:(id)fp8;
- (BOOL)connectionShouldPrefetchMessages;
- (void)connection:(id)fp8 receivedNumberOfBytes:(int)fp12;
- (int)connection:(id)fp8 willRetrieveMessageNumber:(unsigned int)fp12 header:(id)fp16 size:(unsigned int)fp20;
- (id)_defaultRouterDestination;
- (void)writeUpdatedMessageDataToDisk;
- (void)messagesWillBeRouted:(id)fp8;
- (void)messagesWereRouted:(id)fp8;
- (void)cancel;
- (void)waitForRoutingToFinish;
- (void)connection:(id)fp8 didRetrieveData:(id)fp12 forMessageNumber:(unsigned int)fp16;
- (void)messageFlagsDidChange:(id)fp8 flags:(id)fp12;

@end

