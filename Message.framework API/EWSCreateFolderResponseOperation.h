/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSResponseOperation.h>

@class NSString;

@interface EWSCreateFolderResponseOperation : EWSResponseOperation
{
    NSString *_createdFolderId;
}

@property(copy) NSString *createdFolderId; // @synthesize createdFolderId=_createdFolderId;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",C,V_createdFolderId,P


- (void)dealloc;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
- (void)executeOperation;
- (id)createdFolderId;
- (void)setCreatedFolderId:(id)arg1;

@end

