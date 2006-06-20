/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@interface AuthScheme : NSObject
{
}

+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)fp8;
+ (id)schemeWithName:(id)fp8;
+ (id)authSchemesForAccount:(id)fp8 connection:(id)fp12;
- (id)retain;
- (unsigned int)retainCount;
- (void)release;
- (Class)connectionClassForAccount:(id)fp8;
- (Class)authenticatorClassForAccount:(id)fp8;
- (unsigned int)defaultPortForAccount:(id)fp8;
- (BOOL)hasEncryption;
- (BOOL)canAuthenticateAccount:(id)fp8 connection:(id)fp12;
- (id)authenticatorForAccount:(id)fp8 connection:(id)fp12;
- (BOOL)requiresPassword;
- (BOOL)requiresDomain;
- (id)name;
- (id)humanReadableName;

@end

