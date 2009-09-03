/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class AuthScheme, MailAccount, NSButton, NSPopUpButton, NSTextField, NSView, SpecialMailboxes;

@interface AccountDetails
{
    NSView *_detailView;
    NSButton *_enableAccountCheckbox;
    NSTextField *_directory;
    NSButton *_chooseDirectoryButton;
    NSTextField *_portNumberField;
    NSButton *_autoFetch;
    NSButton *_sslSwitch;
    NSPopUpButton *_authenticationPopup;
    NSTextField *_domainLabel;
    NSTextField *_domainField;
    SpecialMailboxes *_specialMailboxes;
    MailAccount *_account;
    AuthScheme *_authScheme;
}

+ (id)accountDetailsForAccountClass:(Class)arg1;
+ (id)accountDetailsNibName;
- (id)init;
- (void)dealloc;
- (Class)accountClass;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)_updateDomainUI;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (id)detailView;
- (void)setupAccountFromValuesInSpecialMailboxesUI:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (id)setupSpecialMailboxesUIFromValuesInAccount:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (void)openAccountPathDialog:(id)arg1;
- (void)accountPathDialogDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)accountPath;
- (void)setAccountPath:(id)arg1;
- (BOOL)userWantsAccountActive;
- (id)portFieldForSSLCheckBox:(id)arg1;
- (void)sslChanged:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)_specialMailboxesDidChange:(id)arg1;

@end

