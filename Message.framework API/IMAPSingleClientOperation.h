/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPClientOperation.h>

@class MFError, NSMutableArray, NSString;

@interface IMAPSingleClientOperation : IMAPClientOperation
{
    NSMutableArray *_untaggedResponses;
    MFError *_error;
    unsigned long long _sequenceNumber;
    unsigned long long _sessionNumber;
    BOOL _isComplete;
}

@property(readonly) BOOL handlesAllUntaggedResponses;
@property(readonly) NSString *tag;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",R,P

@property(readonly) NSString *debugCommandString;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",R,P

@property BOOL isComplete; // @synthesize isComplete=_isComplete;
@property unsigned long long sessionNumber; // @synthesize sessionNumber=_sessionNumber;
@property unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain) MFError *error; // @synthesize error=_error;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"MFError",&,V_error,P

@property(retain) NSMutableArray *untaggedResponses; // @synthesize untaggedResponses=_untaggedResponses;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSMutableArray",&,V_untaggedResponses,P


- (void)dealloc;
- (int)composition;
- (BOOL)handlesAllUntaggedResponses;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)cleanupAfterCompletion;
- (id)debugCommandString;
- (id)createCommandDataForLiteralPlus:(BOOL)arg1;
- (id)tag;
- (id)createCommandString;
- (BOOL)isComplete;
- (void)setIsComplete:(BOOL)arg1;
- (unsigned long long)sessionNumber;
- (void)setSessionNumber:(unsigned long long)arg1;
- (unsigned long long)sequenceNumber;
- (id)error;
- (void)setError:(id)arg1;
- (id)untaggedResponses;
- (void)setUntaggedResponses:(id)arg1;

@end
