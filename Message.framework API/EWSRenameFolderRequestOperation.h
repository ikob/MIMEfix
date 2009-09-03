/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSGetFolderResponseOperation, NSString;

@interface EWSRenameFolderRequestOperation : EWSRequestOperation
{
    NSString *_folderIdString;
    NSString *_folderName;
    EWSGetFolderResponseOperation *_changeKeysResponse;
}

@property(retain) EWSGetFolderResponseOperation *changeKeysResponse; // @synthesize changeKeysResponse=_changeKeysResponse;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"EWSGetFolderResponseOperation",&,N,V_changeKeysResponse,P

@property(copy) NSString *folderName; // @synthesize folderName=_folderName;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_folderName,P

@property(copy) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
// Preceeding property had unknown attributes: N,P
// Original attribute string: T@"NSString",C,N,V_folderIdString,P


+ (Class)classForResponse;
- (id)initWithEWSFolderIdString:(id)arg1 name:(id)arg2 gateway:(id)arg3;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)activityString;
- (BOOL)isFolderRequest;
- (id)prepareRequest;
- (id)changeKeysResponse;
- (void)setChangeKeysResponse:(id)arg1;
- (id)folderName;
- (void)setFolderName:(id)arg1;
- (id)folderIdString;
- (void)setFolderIdString:(id)arg1;

@end
