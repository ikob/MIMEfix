/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/Message.h>

@class MessageHeaders, NSData, NSString;

@interface RecoveredMessage : Message
{
    NSString *_path;
    NSString *_remoteID;
    NSString *_remoteMailboxURL;
    NSString *_originalMailboxURL;
    MessageHeaders *_headers;
    unsigned int _size;
    CDAnonymousStruct4 _imapFlags;
    NSData *_data;
    unsigned int _loadedFileData:1;
}

- (void)_loadFileDataIfNeeded;
- (id)initWithPath:(id)fp8;
- (id)messageID;
- (id)remoteMailboxURL;
- (id)originalMailboxURL;
- (id)headerData;
- (id)headers;
- (id)messageDataIncludingFromSpace:(BOOL)fp8 newDocumentID:(id)fp12;
- (id)bodyData;
- (id)dataForMimePart:(id)fp8;
- (BOOL)hasCachedDataForMimePart:(id)fp8;
- (id)messageBody;
- (id)messageBodyUpdatingFlags:(BOOL)fp8;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)fp8;
- (CDAnonymousStruct4)imapFlags;
- (unsigned long)messageFlags;
- (CDAnonymousStruct6)moreMessageFlags;
- (void)dealloc;
- (void)finalize;
- (void)flushCachedData;
- (BOOL)setMessageID:(unsigned int)fp8 directory:(id)fp12;

@end

