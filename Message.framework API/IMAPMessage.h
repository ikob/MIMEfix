/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/Message.h>

#import "NSCodingProtocol.h"

@interface IMAPMessage : Message <NSCoding>
{
    unsigned int _size;
    CDAnonymousStruct4 _imapFlags;
    unsigned int _uid;
}

+ (void)initialize;
- (id)initWithFlags:(unsigned long)fp8 size:(unsigned int)fp12 uid:(unsigned long)fp16;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)description;
- (unsigned int)messageSize;
- (id)messageID;
- (int)compareByNumberWithMessage:(id)fp8;
- (unsigned long)uid;
- (void)setUid:(unsigned long)fp8;
- (BOOL)isPartial;
- (void)setIsPartial:(BOOL)fp8;
- (BOOL)isMessageContentsLocallyAvailable;
- (BOOL)partsHaveBeenCached;
- (void)setPartsHaveBeenCached:(BOOL)fp8;
- (void)setPreferredEncoding:(unsigned long)fp8;
- (BOOL)hasTemporaryUid;
- (void)setHasTemporaryUid:(BOOL)fp8;
- (CDAnonymousStruct4)imapFlags;
- (id)mailboxName;
- (id)remoteID;

@end

