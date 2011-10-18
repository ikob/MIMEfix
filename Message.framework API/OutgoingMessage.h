/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/Message.h>

@class MutableMessageHeaders, NSData, NSString, _OutgoingMessageBody;

@interface OutgoingMessage : Message
{
    NSString *_remoteID;
    NSString *_existingRemoteID;
    NSData *_rawData;
    _OutgoingMessageBody *_messageBody;
    MutableMessageHeaders *_messageHeaders;
    unsigned long long _localAttachmentsSize;
}

- (id)init;
- (void)dealloc;
- (id)bodyData;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageStore;
- (id)messageBody;
- (void)setMessageBody:(id)arg1;
- (id)messageBodyIfAvailable;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)messageDataIncludingFromSpace:(BOOL)arg1;
- (id)headers;
- (id)headersIfAvailable;
- (unsigned long long)messageSize;
- (void)setRawData:(id)arg1;
- (void)setLocalAttachmentsSize:(unsigned long long)arg1;
- (void)setRemoteID:(id)arg1;
- (id)remoteID;
@property(retain, nonatomic) NSString *existingRemoteID; // @synthesize existingRemoteID=_existingRemoteID;
@property(retain, nonatomic) MutableMessageHeaders *mutableHeaders; // @synthesize mutableHeaders=_messageHeaders;

@end

