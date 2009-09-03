/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class DefaultApplicationPopUpButton, NSButton, NSPopUpButton, NSTextField, SoundPopUpButton;

@interface GeneralPreferences
{
    NSPopUpButton *fetchFrequencyPopup;
    SoundPopUpButton *newMailSoundPopup;
    NSButton *playMailSoundsCheckbox;
    NSPopUpButton *dockBadgePopup;
    DefaultApplicationPopUpButton *defaultMailClientPopUp;
    NSButton *indexDecryptedMessagesButton;
    NSButton *indexTrashButton;
    NSButton *indexJunkButton;
    NSPopUpButton *downloadFolderPopup;
    NSPopUpButton *addInvitationsPopup;
    NSPopUpButton *attachmentDeletionPopup;
    NSTextField *aosSyncDescriptionField;
    NSButton *aosSyncButton;
}

- (BOOL)isResizable;
- (void)_updateAddInvitationsPopup;
- (void)_addInvitationsBehaviorChanged:(id)arg1;
- (void)_setupDockCountPopup;
- (void)awakeFromNib;
- (void)dealloc;
- (id)titleForIdentifier:(id)arg1;
- (id)windowTitle;
- (void)initializeFromDefaults;
- (void)fetchFrequencyChanged:(id)arg1;
- (void)indexDecryptedMessagesButtonClicked:(id)arg1;
- (void)indexTrashButtonClicked:(id)arg1;
- (void)indexJunkButtonClicked:(id)arg1;
- (void)showMoreInfoAboutDotMac:(id)arg1;
- (void)showDotMacSystemPrefs:(id)arg1;
- (void)newMailSoundDidChange:(id)arg1;
- (id)titleForSoundFile:(id)arg1;
- (void)playSoundsClicked:(id)arg1;
- (void)dockBadgePopupChanged:(id)arg1;
- (void)_openPanelSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)chooseNewDownloadFolder:(id)arg1;
- (void)addInvitationsPopupChanged:(id)arg1;
- (void)attachmentDeletionPopupChanged:(id)arg1;

@end

