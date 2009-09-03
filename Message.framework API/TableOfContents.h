/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface TableOfContents
{
    BOOL _isValid;
    NSMutableArray *_messages;
    NSString *_path;
    NSData *_data;
    unsigned long long _pos;
    CDAnonymousStruct9 _header;
    NSMutableDictionary *_messageIDMap;
    BOOL _isDirty;
}

- (BOOL)_checkHeader;
- (BOOL)loadCacheFromFileUsingUniqueStrings:(id)arg1;
- (BOOL)loadCacheFromFileUsingUniqueStrings:(id)arg1 messageStore:(id)arg2;
- (void)appendHeader:(CDAnonymousStruct9)arg1 toData:(id)arg2;
- (id)appendCachedDataToData:(id)arg1;
- (void)setTimeStamp:(int)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (BOOL)isDirty;
- (BOOL)isValid;
- (void)forceValidityToYES;
- (id)storePath;
- (void)rebuildCacheFromMessages:(id)arg1;
- (int)count;
- (id)messages;
- (void)removeMessage:(id)arg1;
- (void)_addMessageToMap:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)addMessages:(id)arg1;
- (id)description;
- (BOOL)flushToFile;
- (id)messageForMessageID:(id)arg1;
- (id)sortOrder;
- (void)setSortOrder:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)isSortedAscending;
- (BOOL)isSortedByDateReceived;
- (void)sort;

@end

