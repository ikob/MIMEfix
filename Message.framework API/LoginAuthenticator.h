/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/SASLAuthenticator.h>

@interface LoginAuthenticator : SASLAuthenticator
{
    BOOL _justSentPassword;
}

- (id)saslName;
- (id)responseForServerData:(id)fp8;
- (BOOL)justSentPlainTextPassword;

@end

