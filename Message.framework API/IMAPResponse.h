/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class MFError, NSString;

@interface IMAPResponse : NSObject
{
    union _IMAPResponseData _data;
    NSString *_tag;
    MFError *_error;
    BOOL _responseType;
    BOOL _wasHandled;
}

- (BOOL)responseType;
- (void)setResponseType:(BOOL)arg1;
- (BOOL)isUntagged;
- (BOOL)isAlertResponse;
- (id)tag;
- (void)setTag:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (long long)responseCode;
- (id)responseInfo;
- (id)userData;
- (id)userString;
- (void)setUserData:(id)arg1 responseCode:(long long)arg2 responseInfo:(id)arg3;
- (id)capabilities;
- (void)setCapabilities:(id)arg1;
- (unsigned long long)number;
- (void)setNumber:(unsigned long long)arg1;
- (id)flags;
- (void)setFlags:(id)arg1;
- (id)mailboxName;
- (id)statusEntries;
- (void)setMailboxName:(id)arg1 statusEntries:(id)arg2;
- (id)searchResults;
- (void)setSearchResults:(id)arg1;
- (unsigned long long)mailboxAttributes;
- (id)separator;
- (void)setMailboxAttributes:(unsigned long long)arg1 separator:(id)arg2 mailboxName:(id)arg3;
- (id)fetchResultWithType:(unsigned long long)arg1;
- (id)fetchResults;
- (void)setFetchResults:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)quotaRootNames;
- (void)setMailboxName:(id)arg1 quotaRootNames:(id)arg2;
- (id)quotaRootName;
- (id)quotas;
- (void)setQuotaRootName:(id)arg1 quotas:(id)arg2;
- (id)serverID;
- (void)_setServerID:(id)arg1;
- (BOOL)uidFlagsChange;
- (void)setUidFlagsChange:(BOOL)arg1;
- (id)uids;
- (void)setUids:(id)arg1;
- (id)flagsFetchResult;
- (void)setFlagsFetchResult:(id)arg1;
- (id)responseName;
- (id)parameters;
- (void)setResponseName:(id)arg1 parameters:(id)arg2;
- (id)description;
- (id)initWithConnection:(id)arg1 error:(id *)arg2;
- (void)setError:(id)arg1;
- (id)error;
@property BOOL wasHandled; // @synthesize wasHandled=_wasHandled;

@end

