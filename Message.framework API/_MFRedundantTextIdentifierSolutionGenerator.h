/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface _MFRedundantTextIdentifierSolutionGenerator : NSObject
{
    CDStruct_7e4886f7 *_replyBuffer;
    CDStruct_7e4886f7 *_originalBuffer;
    unsigned long long _replyLength;
    unsigned long long _originalLength;
    NSDictionary *_originalAttachmentContextsByURL;
    NSDictionary *_replyAttachmentContextsByURL;
}

- (id)initWithReply:(CDStruct_7e4886f7 *)arg1 replyLength:(unsigned long long)arg2 replyAttachmentContextsByURL:(id)arg3 original:(CDStruct_7e4886f7 *)arg4 originalLength:(unsigned long long)arg5 originalAttachmentContextsByURL:(id)arg6;
- (void)dealloc;
- (id)generateBestSolution;
- (id)generateBestSolutionInForwardDirection:(BOOL)arg1 replyStartIndex:(unsigned long long)arg2 originalStartIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, nonatomic) unsigned long long originalLength; // @synthesize originalLength=_originalLength;
@property(readonly, nonatomic) unsigned long long replyLength; // @synthesize replyLength=_replyLength;
@property(readonly, nonatomic) CDStruct_7e4886f7 *originalBuffer; // @synthesize originalBuffer=_originalBuffer;
@property(readonly, nonatomic) CDStruct_7e4886f7 *replyBuffer; // @synthesize replyBuffer=_replyBuffer;

@end
