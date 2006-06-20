/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/AuthScheme.h>

@interface KPOPAuthScheme : AuthScheme
{
}

- (BOOL)supportsAccountType:(id)fp8;
- (Class)connectionClassForAccount:(id)fp8;
- (unsigned int)defaultPortForAccount:(id)fp8;
- (Class)authenticatorClassForAccount:(id)fp8;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
- (BOOL)hasEncryption;
- (BOOL)canAuthenticateAccount:(id)fp8 connection:(id)fp12;

@end

