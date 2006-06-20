/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import <Message/IMAPAccount.h>

@interface iToolsAccount : IMAPAccount
{
    BOOL _isPrimaryiToolsAccount;
}

+ (id)defaultPathNameForAccountWithHostname:(id)fp8 username:(id)fp12;
+ (id)primaryUsername;
+ (BOOL)primaryUsernameExists;
+ (id)iToolsMailHostname;
+ (id)iToolsSMTPHostname;
+ (id)accountTypeString;
- (BOOL)_isReallyPrimaryiToolsAccount;
- (BOOL)isPrimaryiToolsAccount;
- (void)setIsPrimaryiToolsAccount:(BOOL)fp8;
- (BOOL)isActive;
- (id)hostname;
- (void)setHostname:(id)fp8;
- (void)setPortNumber:(unsigned int)fp8;
- (unsigned int)portNumber;
- (void)setUsername:(id)fp8;
- (void)setPasswordInKeychain:(id)fp8;
- (void)_removePasswordInKeychain;
- (id)passwordFromKeychain;
- (id)displayName;
- (id)username;
- (id)rawEmailAddresses;
- (id)emailAddresses;
- (void)setDeliveryAccount:(id)fp8;
- (id)deliveryAccount;

@end

