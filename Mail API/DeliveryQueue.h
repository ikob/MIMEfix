/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class MessageStore, NSMutableDictionary, NSMutableSet;

@interface DeliveryQueue : NSObject
{
    unsigned int _isBackgroundProcessingEnabled:1;
    unsigned int _resetDeliveryQueueWhenDoneWithCurrentMessage:1;
    MessageStore *_outboxStore;
    int _indexOfLastMessageToProcess;
    NSMutableDictionary *_errorResponses;
    NSMutableSet *_potentialAlternateDeliveryAccounts;
    NSMutableSet *_accountsOnHold;
    NSMutableDictionary *_alternateDeliveryAccounts;
    BOOL _queueIsActive;
    double _beginDeliveryTime;
}

+ (id)sharedDeliveryQueue;
- (id)init;
- (void)dealloc;
- (void)setBackgroundProcessingEnabled:(BOOL)fp8;
- (BOOL)isBackgroundProcessingEnabled;
- (void)nowWouldBeAGoodTimeToTerminate:(id)fp8;
- (void)resetStateAndReprocessQueue;
- (void)resetStateAndReprocessQueueIfNecessary;
- (void)_resetStateAndReprocessQueueIfNecessary;
- (void)_closeOutboxStore;
- (void)processDeliveryQueueStartingAtIndex:(unsigned int)fp8;
- (int)_performDeliveryOfMessage:(id)fp8 usingAccount:(id)fp12 accountUsed:(id *)fp16;
- (BOOL)_isMessageBeingEdited:(id)fp8;
- (void)_deliverQueuedMessages:(unsigned int)fp8;
- (int)appendMessageToQueue:(id)fp8 replacingOriginalMessage:(id)fp12;
- (void)cancelDeliveryOfMessage:(id)fp8;
- (void)_networkConfigurationChanged:(id)fp8;
- (id)potentialAlternateDeliveryAccounts;
- (void)setAlternateDeliveryAccount:(id)fp8 forAccount:(id)fp12;
- (void)unfreezeDeliveryAccount:(id)fp8 reprocessQueue:(BOOL)fp12;
- (id)alternateDeliveryAccountForAccount:(id)fp8;
- (BOOL)deliveryQueueContainsMessage:(id)fp8;

@end

