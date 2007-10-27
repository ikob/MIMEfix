/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class InvocationQueue, NSDate, NSMutableArray, NSMutableSet;

@interface ParentalControlManager : NSObject
{
    NSMutableSet *_pcStores;
    InvocationQueue *_tasks;
    NSDate *_lastCleanupDate;
    NSMutableArray *_recentRequests;
    BOOL _recentRequestsDirty;
    NSMutableSet *_pendingRequests;
}

+ (id)sharedManager;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)parentalControlDirectory;
- (BOOL)isInSpamProtectionMode;
- (id)headersRequiredForParentalControl;
- (void)deleteAccount:(id)fp8;
- (void)_cleanupPCStoresAfterDelay:(double)fp8;
- (void)_approveSenders:(id)fp8 sourcePCMailbox:(id)fp12 destinationAccount:(id)fp16;
- (void)_rejectSenders:(id)fp8 sourcePCMailbox:(id)fp12;
- (id)_openStoreForPCMailbox:(id)fp8 keepOpen:(BOOL)fp12;
- (id)_openStoreForPCMailbox:(id)fp8;
- (id)_openPCStoreForAccount:(id)fp8;
- (id)_makeRequestMessageForMessage:(id)fp8 isOutgoingMessage:(BOOL)fp12;
- (id)_deliverMessage:(id)fp8;
- (id)_recentRequestsFilePath;
- (id)_recentRequestsNoLock;
- (BOOL)_hasRecentlySentPermissionRequestForSender:(id)fp8;
- (void)_removeSendersFromRecentRequests:(id)fp8;
- (BOOL)_hasPendingRequestForSender:(id)fp8;
- (void)_requestApprovalForIncomingMessage:(id)fp8 srcStore:(id)fp12 pcStore:(id)fp16 messageInPCStore:(id)fp20;
- (void)_reallyRequestApprovalForIncomingMessage:(id)fp8 srcStore:(id)fp12 pcStore:(id)fp16 messageInPCStore:(id)fp20;
- (void)_approveAddresses:(id)fp8 responseFromAccount:(id)fp12;
- (void)_rejectAddresses:(id)fp8 responseFromAccount:(id)fp12;
- (void)_cleanupPCStore:(id)fp8;
- (void)_reallyCleanupPCStores;
- (void)_cleanupPCStores;
- (BOOL)processIncomingMessage:(id)fp8 messageIsParentResponse:(char *)fp12;
- (BOOL)haveEmailsBeenApproved:(id)fp8 unapprovedOnes:(id)fp12;
- (void)_deliverApprovalRequestMessage:(id)fp8 forOutgoingMessage:(id)fp12;
- (void)_requestApprovalForOutgoingMessage:(id)fp8 srcStore:(id)fp12;
- (BOOL)requestApprovalForOutgoingMessage:(id)fp8;
- (void)saveChanges;
- (id)_makeResponseMessageToRequest:(id)fp8 approve:(BOOL)fp12;
- (void)_deliverResponseMessage:(id)fp8 requestMessage:(id)fp12;
- (BOOL)_respondToRequest:(id)fp8 approve:(BOOL)fp12;
- (BOOL)approveRequest:(id)fp8;
- (BOOL)rejectRequest:(id)fp8;
- (BOOL)isEmail:(id)fp8 inEmailList:(id)fp12;
- (void)_approveEmailListChanged:(id)fp8;

@end

