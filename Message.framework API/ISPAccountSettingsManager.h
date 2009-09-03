/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableDictionary;

@interface ISPAccountSettingsManager
{
    NSMutableDictionary *_ispAccountsSettings;
    NSMutableDictionary *_ispReceivingAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByIdentifier;
}

+ (void)initialize;
+ (id)locallyInstalledSettings;
+ (id)onlineDatabaseSettings;
+ (id)_alwaysPersistedKeys;
+ (BOOL)ispAccountInformationAvailableForDomain:(id)arg1;
+ (id)ispBrandNameForDomain:(id)arg1;
+ (id)ispSupportURLForDomain:(id)arg1;
+ (id)ispSupportURLLabelForDomain:(id)arg1;
+ (id)ispSubscriptionURLForDomain:(id)arg1;
+ (id)ispSubscriptionURLLabelForDomain:(id)arg1;
+ (id)_accountInformationStringForKey:(id)arg1 localizedKey:(id)arg2 domain:(id)arg3;
- (void)dealloc;
- (id)_persistanceFolderName;
- (void)_loadISPAccountsIfNecessary;
- (void)_unloadISPAccounts;
- (void)_loadISPPlistsAtPath:(id)arg1;
- (void)_loadISPPlist:(id)arg1 bundle:(id)arg2 path:(id)arg3;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (id)_persistantAccountSettings:(id)arg1;
- (id)_persistantISPAccountSettings:(id)arg1;
- (BOOL)_persistISPPlist:(id)arg1;
- (void)_getAccoutClass:(Class *)arg1 isReceivingAccount:(char *)arg2 isDeliveryAccount:(char *)arg3 fromAccountSettings:(id)arg4;
- (id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)receivingAccountSettingsForDomain:(id)arg1;
- (id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)deliveryAccountsSettingsForDomain:(id)arg1;
- (void)emptyCache;

@end
