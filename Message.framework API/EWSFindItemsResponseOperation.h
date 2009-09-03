/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSResponseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface EWSFindItemsResponseOperation : EWSResponseOperation
{
    NSArray *_EWSFolderIds;
    NSMutableDictionary *_rootFoldersByEWSFolderId;
}

@property(retain) NSDictionary *rootFoldersByEWSFolderId;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSDictionary",&,N,P

@property(retain) NSArray *EWSFolderIds; // @synthesize EWSFolderIds=_EWSFolderIds;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSArray",&,N,V_EWSFolderIds,P


- (void)dealloc;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)executeOperation;
- (id)rootFolderForEWSFolderId:(id)arg1;
- (void)setRootFoldersByEWSFolderId:(id)arg1;
- (id)rootFoldersByEWSFolderId;
- (id)EWSFolderIds;
- (void)setEWSFolderIds:(id)arg1;

@end
