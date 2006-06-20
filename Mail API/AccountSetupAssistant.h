/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "Assistant.h"

@class AccountSummary, ActivityMonitor, MFError, MailAccount, NSArray, NSButton, NSComboBox, NSImageView, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSProgressIndicator, NSTabView, NSTextField, NSView, SMTPAccount;

@interface AccountSetupAssistant : Assistant
{
    NSView *_topView;
    NSTabView *_tabView;
    NSTextField *_fullname;
    NSTextField *_emailAddress;
    NSTextField *_accountDescription;
    NSPopUpButton *_accountTypePopup;
    NSImageView *_fullnameInavlidImage;
    NSImageView *_emailInavlidImage;
    NSImageView *_accountDescriptionInavlidImage;
    NSTextField *_userInfoVerificationStatus;
    NSImageView *_userInfoCautionImage;
    NSTabView *_tabViewForUserInfoSubviews;
    NSTextField *_ispUsername;
    NSTextField *_ispPassword;
    NSTextField *_ispDomain;
    NSImageView *_ispUsernameInavlidImage;
    NSImageView *_ispPasswordInavlidImage;
    NSProgressIndicator *_ispVerificationProgress;
    NSTextField *_incomingServer;
    NSTextField *_username;
    NSTextField *_password;
    NSTextField *_outlookServer;
    NSTextField *_outlookServerLabel;
    NSTextField *_outlookServerExampleText;
    NSImageView *_incomingServerInavlidImage;
    NSImageView *_usernameInavlidImage;
    NSImageView *_passwordInavlidImage;
    NSImageView *_outlookServerInavlidImage;
    NSTextField *_incomingServerVerificationStatus;
    NSProgressIndicator *_incomingServerVerificationProgress;
    NSImageView *_incomingServerCautionImage;
    NSButton *_incomingUseSSLCheckbox;
    NSPopUpButton *_incomingAuthPopup;
    NSTextField *_incomingAuthPopupLabel;
    NSTextField *_incomingSecurityMessage;
    NSImageView *_incomingSecurityCautionImage;
    NSTextField *_incomingServerDomainLabel;
    NSTextField *_incomingServerDomain;
    NSComboBox *_smtpServerComboBox;
    NSButton *_smtpAuthenticateCheckbox;
    NSTextField *_smtpUsername;
    NSTextField *_smtpPassword;
    NSImageView *_smtpServerInavlidImage;
    NSTextField *_smtpServerVerificationStatus;
    NSProgressIndicator *_smtpServerVerificationProgress;
    NSImageView *_smtpServerCautionImage;
    NSButton *_smtpUseSSLCheckbox;
    NSPopUpButton *_smtpAuthPopup;
    NSTextField *_smtpAuthPopupLabel;
    NSTextField *_smtpSecurityMessage;
    NSImageView *_smtpSecurityCautionImage;
    NSTextField *_smtpServerDomainLabel;
    NSTextField *_smtpServerDomain;
    NSView *_summaryContainerView;
    AccountSummary *_summary;
    NSButton *_importMailboxesButton;
    NSButton *_createAnotherAccountButton;
    NSMutableArray *_previousTabs;
    NSMutableDictionary *_validationResults;
    NSMutableArray *_tabViewItemsThatHaveBeenInitialized;
    MailAccount *_account;
    SMTPAccount *_smtpAccount;
    ActivityMonitor *_accountValidationActivity;
    struct {
        unsigned int isForStartup:1;
        unsigned int incomingServerSupportsSSL:1;
        unsigned int smtpServerSupportsSSL:1;
        unsigned int smtpServerComboBoxSelectionChanged:1;
        unsigned int smtpServerComboBoxHasNoServer:1;
        unsigned int overrideISPSMTPPort:1;
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
    NSMutableArray *_deliveryAccounts;
}

- (id)initWithAssistentManager:(id)fp8 isForStartup:(BOOL)fp12;
- (void)dealloc;
- (id)windowTitle;
- (void)start;
- (void)stop;
- (void)goForward;
- (void)goBackward;
- (void)setupKeyViewLoop;
- (void)_goForward;
- (void)_goBackward;
- (int)_tabIndexOfSelectedTabViewItem;
- (Class)_accountClass;
- (id)_ispAccountInfo;
- (BOOL)_shouldSkipIncomingServerTabForSelectedAccount;
- (BOOL)_shouldSkipIncomingSecurityTabForSelectedAccountBasedOnISPInfo:(id)fp8;
- (BOOL)_shouldSkipOutgoingServerTabForSelectedAccount;
- (BOOL)_incomingServerValid;
- (BOOL)_outgoingServerValid;
- (void)_addTheNewAccount;
- (void)_updateSMTPUserPasswordEditableState;
- (void)_updateUserInfoDynamicUI;
- (void)_updateSSLUIForTab:(int)fp8;
- (void)_updateDomainUIForTab:(int)fp8;
- (id)_statusViewsInTabAtIndex:(int)fp8;
- (void)_layoutStatusViewsInTabAtIndex:(int)fp8;
- (int)numberOfItemsInComboBox:(id)fp8;
- (id)comboBox:(id)fp8 objectValueForItemAtIndex:(int)fp12;
- (void)_configureSMTPComboBoxItmes;
- (BOOL)_initializeTabAtIndex:(int)fp8;
- (int)_nextTabOf:(int)fp8;
- (int)_previousTab;
- (void)_setupBackForwardCancelButtons;
- (void)_setupTabAtIndex:(int)fp8;
- (void)_setupKeyViewLoopForTabAtIndex:(int)fp8;
- (void)_setupHelpButton;
- (void)_selectTabAtIndex:(int)fp8 update:(BOOL)fp12;
- (id)_account;
- (id)_smtpAccount;
- (void)_invalidateItem:(id)fp8;
- (void)_setValidationResult:(BOOL)fp8 error:(id)fp12 forItem:(id)fp16 withValue:(id)fp20;
- (BOOL)_needToValidateItem:(id)fp8 withValue:(id)fp12 valid:(char *)fp16 error:(id *)fp20;
- (void)_configureAccount:(id)fp8 withISPInfo:(id)fp12;
- (void)_configureSMTPAccountWithISPInfo:(id)fp8 withUsername:(id)fp12 andPassword:(id)fp16;
- (void)_updateAccountInfoFromValuesInTabAtIndex:(int)fp8;
- (void)_validateAccountInBackground:(id)fp8;
- (void)_updateValidationStatusForAccount:(id)fp8 status:(id)fp12;
- (void)_backgroundValidateAccountFinished:(id)fp8 authSchemes:(id)fp12;
- (BOOL)_validateValesInTabAtIndex:(int)fp8;
- (void)accountTypeChanged:(id)fp8;
- (void)smtpAuthenticateCheckboxChanged:(id)fp8;
- (void)smtpComboBoxDidEndEditing:(id)fp8;
- (void)importMailboxes:(id)fp8;
- (void)createAnotherAccount:(id)fp8;
- (void)authenticationPopupChanged:(id)fp8;
- (BOOL)doNotShowActivityStatusInMessageViewer;
- (void)_validateAccount:(id)fp8;
- (void)_reset;
- (void)comboBoxSelectionDidChange:(id)fp8;

@end

