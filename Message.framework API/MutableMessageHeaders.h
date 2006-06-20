/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/MessageHeaders.h>

@class NSMutableArray, NSMutableDictionary;

@interface MutableMessageHeaders : MessageHeaders
{
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

- (id)mutableCopy;
- (void)dealloc;
- (void)finalize;
- (id)allHeaderKeys;
- (BOOL)hasHeaderForKey:(id)fp8;
- (id)_headerValueForKey:(id)fp8;
- (id)firstHeaderForKey:(id)fp8;
- (void)removeHeaderForKey:(id)fp8;
- (void)setHeader:(id)fp8 forKey:(id)fp12;
- (void)appendFromSpaceIfMissing;
- (void)_appendHeaderKey:(id)fp8 value:(id)fp12 toData:(id)fp16;
- (void)_appendAddedHeaderKey:(id)fp8 value:(id)fp12 toData:(id)fp16;
- (id)_encodedHeadersIncludingFromSpace:(BOOL)fp8;
- (void)setAddressList:(id)fp8 forKey:(id)fp12;

@end

