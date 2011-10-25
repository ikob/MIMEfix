/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MFRedundantTextIdentifier : NSObject
{
    NSString *_htmlOriginal;
    NSString *_htmlReply;
    NSDictionary *_originalAttachmentContextsByURL;
    NSDictionary *_replyAttachmentContextsByURL;
    BOOL _matchedEntireOriginalContiguously;
    BOOL _replyHasRedundantContent;
}

+ (void)initialize;
+ (id)_htmlMarkerForContentType:(unsigned long long)arg1;
- (id)initWithHtmlOriginal:(id)arg1 originalAttachmentViewControllersByURL:(id)arg2 htmlReply:(id)arg3 replyAttachmentViewControllersByURL:(id)arg4;
- (void)dealloc;
- (id)_attachmentContextsByURLforAttachmentViewControllersByURL:(id)arg1;
- (id)replyWithRedundantTextMarkers;
@property(readonly, nonatomic) BOOL replyHasRedundantContent; // @synthesize replyHasRedundantContent=_replyHasRedundantContent;
@property(readonly, nonatomic) BOOL matchedEntireOriginalContiguously; // @synthesize matchedEntireOriginalContiguously=_matchedEntireOriginalContiguously;
@property(readonly, nonatomic) NSDictionary *replyAttachmentContextsByURL; // @synthesize replyAttachmentContextsByURL=_replyAttachmentContextsByURL;
@property(readonly, nonatomic) NSDictionary *originalAttachmentContextsByURL; // @synthesize originalAttachmentContextsByURL=_originalAttachmentContextsByURL;
@property(readonly, nonatomic) NSString *htmlReply; // @synthesize htmlReply=_htmlReply;
@property(readonly, nonatomic) NSString *htmlOriginal; // @synthesize htmlOriginal=_htmlOriginal;

@end
