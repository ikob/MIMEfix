/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSTargetFolderIdType, NSString;

@interface EWSSyncFolderItemsRequestOperation : EWSRequestOperation
{
    NSString *_syncState;
    EWSTargetFolderIdType *_targetFolder;
}

@property(readonly) NSString *targetFolderName;
// Preceeding property had unknown attributes: D,P
// Original attribute string: T@"NSString",R,D,P

@property(readonly) NSString *targetFolderIdString;
// Preceeding property had unknown attributes: D,P
// Original attribute string: T@"NSString",R,D,P

@property(retain) EWSTargetFolderIdType *targetFolder; // @synthesize targetFolder=_targetFolder;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"EWSTargetFolderIdType",&,N,V_targetFolder,P

@property(copy) NSString *syncState; // @synthesize syncState=_syncState;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_syncState,P


+ (id)keyPathsForValuesAffectingTargetFolderIdString;
+ (id)keyPathsForValuesAffectingTargetFolderName;
+ (Class)classForResponse;
- (id)initWithTargetFolder:(id)arg1 syncState:(id)arg2 gateway:(id)arg3;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)activityString;
- (id)prepareRequest;
- (id)targetFolderIdString;
- (id)targetFolderName;
- (id)targetFolder;
- (void)setTargetFolder:(id)arg1;
- (id)syncState;
- (void)setSyncState:(id)arg1;

@end

