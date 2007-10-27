/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/SASLAuthenticator.h>

@interface NTLMAuthenticator : SASLAuthenticator
{
    struct NtlmGenerator *_ntlmGeneratorRef;
    int _ntlmError;
}

- (void)dealloc;
- (void)finalize;
- (void)setAuthenticationState:(int)fp8;
- (id)responseForServerData:(id)fp8;

@end

