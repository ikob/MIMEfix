/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface (null) (MailUIExtras)
+ (BOOL)_existsAccountOfClass:(Class)arg1;
+ (BOOL)exchangeAccountExists;
+ (BOOL)iToolsAccountExists;
+ (BOOL)primaryiToolsAccountExists;
+ (id)mailAccountWithName:(id)arg1;
+ (id)mailAccountOfClass:(Class)arg1 withHostname:(id)arg2 username:(id)arg3;
- (void)_addAuthScheme:(id)arg1 toPopUp:(id)arg2;
- (void)configureAuthenticationPopUp:(id)arg1;
- (void)configureAuthenticationPopUp:(id)arg1 withAuthSchemes:(id)arg2;
- (id)authSchemeBindingProxies;
@end

