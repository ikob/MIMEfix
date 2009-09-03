/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface EWSCopyItemsRequestOperation : EWSRequestOperation <NSCoding>
{
    NSString *_sourceEWSFolderIdString;
    NSString *_destinationEWSFolderIdString;
    NSArray *_EWSItemIds;
    NSArray *_offlineCreatedEWSItemIdStrings;
}

@property(retain) NSArray *offlineCreatedEWSItemIdStrings; // @synthesize offlineCreatedEWSItemIdStrings=_offlineCreatedEWSItemIdStrings;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSArray",&,V_offlineCreatedEWSItemIdStrings,P

@property(retain) NSArray *EWSItemIds; // @synthesize EWSItemIds=_EWSItemIds;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSArray",&,N,V_EWSItemIds,P

@property(retain) NSString *destinationEWSFolderIdString; // @synthesize destinationEWSFolderIdString=_destinationEWSFolderIdString;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",&,N,V_destinationEWSFolderIdString,P

@property(retain) NSString *sourceEWSFolderIdString; // @synthesize sourceEWSFolderIdString=_sourceEWSFolderIdString;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",&,N,V_sourceEWSFolderIdString,P


+ (Class)classForResponse;
- (id)initWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (void)_ewsCopyItemsRequestOperationCommonInitWithEWSItemIds:(id)arg1 sourceIdString:(id)arg2 destinationIdString:(id)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (id)activityString;
- (id)prepareRequest;
- (void)setupOfflineResponse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)offlineCreatedEWSItemIdStrings;
- (void)setOfflineCreatedEWSItemIdStrings:(id)arg1;
- (id)EWSItemIds;
- (void)setEWSItemIds:(id)arg1;
- (id)destinationEWSFolderIdString;
- (void)setDestinationEWSFolderIdString:(id)arg1;
- (id)sourceEWSFolderIdString;
- (void)setSourceEWSFolderIdString:(id)arg1;

@end
