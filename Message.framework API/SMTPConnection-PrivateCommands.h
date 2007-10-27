/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/SMTPConnection.h>

@interface SMTPConnection (PrivateCommands)
- (int)_sendCommand:(const char *)fp8 length:(unsigned int)fp12 argument:(id)fp16 trailer:(unsigned char)fp20;
- (int)_getReply;
- (void)_readResponseRange:(struct _NSRange *)fp8 isContinuation:(char *)fp12;
- (id)_getValidDomain;
- (int)_doHandshakeWithSecurityLayerType:(int)fp8 tryHELOIfELHOFails:(BOOL)fp12;
- (int)_sendELHOWithClientDomainName:(id)fp8;
- (int)_sendHELOWithClientDomainName:(id)fp8;
- (BOOL)_hasParameter:(id)fp8 forKeyword:(id)fp12;
@end

