/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class IMAPClientFetchDataItem, IMAPFetchResult;

@interface _IMAPFetchUnit
{
    unsigned int _uid;
    IMAPClientFetchDataItem *_fetchItem;
    IMAPFetchResult *_expectedFetchResult;
}

@property(retain) IMAPFetchResult *expectedFetchResult; // @synthesize expectedFetchResult=_expectedFetchResult;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"IMAPFetchResult",&,V_expectedFetchResult,P

@property(retain) IMAPClientFetchDataItem *fetchItem; // @synthesize fetchItem=_fetchItem;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"IMAPClientFetchDataItem",&,V_fetchItem,P

@property unsigned int uid; // @synthesize uid=_uid;

- (void)dealloc;
- (void)_setupExpectedFetchResult;
- (BOOL)matchesFetchResponse:(id)arg1;
- (id)createFailedFetchResponse;
- (id)expectedFetchResult;
- (void)setExpectedFetchResult:(id)arg1;
- (id)fetchItem;
- (void)setFetchItem:(id)arg1;
- (unsigned int)uid;
- (void)setUid:(unsigned int)arg1;

@end

