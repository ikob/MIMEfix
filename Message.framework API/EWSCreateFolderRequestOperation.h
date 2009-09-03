/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface EWSCreateFolderRequestOperation : EWSRequestOperation <NSCoding>
{
    NSString *_parentEWSFolderIdString;
    NSString *_offlineCreatedEWSFolderIdString;
    NSString *_folderName;
    int _mailboxType;
}

@property int mailboxType; // @synthesize mailboxType=_mailboxType;
// Preceeding property had unknown attributes: N
// Original attribute string: Ti,N,V_mailboxType

@property(copy) NSString *folderName; // @synthesize folderName=_folderName;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_folderName,P

@property(copy) NSString *offlineCreatedEWSFolderIdString; // @synthesize offlineCreatedEWSFolderIdString=_offlineCreatedEWSFolderIdString;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",C,V_offlineCreatedEWSFolderIdString,P

@property(copy) NSString *parentEWSFolderIdString; // @synthesize parentEWSFolderIdString=_parentEWSFolderIdString;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_parentEWSFolderIdString,P


+ (Class)classForResponse;
- (id)initWithParentEWSFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3 gateway:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)_ewsCreateFolderRequestOperationCommonInitWithFolderIdString:(id)arg1 name:(id)arg2 mailboxType:(int)arg3;
- (void)dealloc;
- (id)copyWithUpdatedNameCount:(unsigned long long)arg1;
- (id)activityString;
- (BOOL)isFolderRequest;
- (id)prepareRequest;
- (void)setupOfflineResponse;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)mailboxType;
- (void)setMailboxType:(int)arg1;
- (id)folderName;
- (void)setFolderName:(id)arg1;
- (id)offlineCreatedEWSFolderIdString;
- (void)setOfflineCreatedEWSFolderIdString:(id)arg1;
- (id)parentEWSFolderIdString;
- (void)setParentEWSFolderIdString:(id)arg1;

@end

