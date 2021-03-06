/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@interface AuthScheme : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_plainAuthScheme;
+ (id)_apopAuthScheme;
+ (id)_cramMd5AuthScheme;
+ (id)_ntlmAuthScheme;
+ (id)_appleTokenAuthScheme;
+ (id)_gssApiAuthScheme;
+ (id)_externalAuthScheme;
+ (id)knownSchemes;
+ (id)schemeWithName:(id)arg1;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithAccountInfo:(id)arg1;
+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;
- (void)dealloc;
- (void)finalize;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (BOOL)hasEncryption;
- (long long)securityLevel;
- (BOOL)canAuthenticateAccount:(id)arg1 connection:(id)arg2;
- (id)saslClientForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)requiresPassword;
- (BOOL)requiresDomain;
- (id)name;
- (id)humanReadableName;
- (long long)compareBySecurityLevel:(id)arg1;
- (unsigned int)applescriptScheme;

@end

