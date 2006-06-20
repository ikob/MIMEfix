/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "MessageMall.h"

@class MessageCriterion, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ConcreteMessageMall : MessageMall
{
    NSMutableArray *_selectedMailboxUids;
    NSMutableArray *_allStores;
    NSMutableDictionary *_allMessagesByStore;
    NSMutableDictionary *_allNonDeletedMessagesByStore;
    NSMutableSet *_allNonDeletedMessagesSet;
    NSMutableDictionary *_sortedMessagesByStore;
    NSMutableDictionary *_sortedNonDeletedMessagesByStore;
    NSMutableArray *_filteredMessages;
    NSMutableArray *_filteredThreads;
    NSMutableSet *_hiddenMessages;
    NSMutableSet *_undeletedMessages;
    NSMutableSet *_focusedMessages;
    NSMutableDictionary *_searchRanks;
    float _highestSearchRank;
    MessageCriterion *_activeSearchCriterion;
    NSMutableSet *_deletedSearchResults;
    NSMutableSet *_storesBeingOpened;
    NSString *_sortOrder;
    NSMutableDictionary *_messageThreadingDataByMessage;
    NSMutableDictionary *_messagesByMessageIDHeaderDigest;
    NSMutableDictionary *_messagesByInReplyToHeaderDigest;
    NSMutableDictionary *_messagesBySubject;
    NSMutableDictionary *_messagesByID;
    NSMutableSet *_searchMonitors;
    NSMutableArray *_sortedFilteredMessages;
}

- (void)dealloc;
- (id)init;

@end

