/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@interface MessageKeychainManager : NSObject
{
}

+ (void)initialize;
+ (unsigned long)_protocolForAccountType:(id)fp8;
+ (long)_setPassword:(id)fp8 forKeychainItem:(struct OpaqueSecKeychainItemRef *)fp12;
+ (id)_passwordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(unsigned long)fp20 itemRef:(struct OpaqueSecKeychainItemRef **)fp24;
+ (id)passwordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(id)fp20;
+ (void)setPassword:(id)fp8 forHost:(id)fp12 username:(id)fp16 port:(int)fp20 protocol:(id)fp24;
+ (void)removePasswordForHost:(id)fp8 username:(id)fp12 port:(int)fp16 protocol:(id)fp20;
+ (id)_passwordForGenericAccount:(id)fp8 service:(id)fp12 itemRef:(struct OpaqueSecKeychainItemRef **)fp16;
+ (id)passwordForServiceName:(id)fp8 accountName:(id)fp12;
+ (void)setPassword:(id)fp8 forServiceName:(id)fp12 accountName:(id)fp16;
+ (void)removePasswordForServiceName:(id)fp8 accountName:(id)fp12;
+ (void)setSessionTrustedCertificates:(id)fp8 forHost:(id)fp12;
+ (id)sessionTrustedCertificatesForHost:(id)fp8;
+ (struct OpaqueSecCertificateRef *)copyTrustedSigningCertificateForAddress:(id)fp8;
+ (struct OpaqueSecCertificateRef *)copyTrustedEncryptionCertificateForAddress:(id)fp8;
+ (BOOL)canSignMessagesFromAddress:(id)fp8;
+ (BOOL)canEncryptMessagesToAddress:(id)fp8;
+ (BOOL)canEncryptMessagesToAddresses:(id)fp8 sender:(id)fp12;
+ (struct OpaqueSecPolicyRef *)copySSLPolicyForHost:(id)fp8 isClientCertificate:(BOOL)fp12;
+ (struct OpaqueSecPolicyRef *)copySMIMEPolicyForAddress:(id)fp8 usage:(unsigned short)fp12;

@end

