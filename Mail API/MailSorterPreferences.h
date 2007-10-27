/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

#import "SyncableDataInterestedPartyProtocol.h"

@class AddressTextField, CriteriaUIHelper, DraggingTextView, MailboxesChooser, MessageRule, NSButton, NSMenu, NSMutableArray, NSPanel, NSPopUpButton, NSScrollView, NSTableView, NSTextField, NSTextView, NSView, SoundPopUpButton;

@interface MailSorterPreferences : NSPreferencesModule <SyncableDataInterestedParty>
{
    NSTableView *rulesTable;
    NSButton *editButton;
    NSButton *duplicateButton;
    NSButton *removeButton;
    NSPanel *ruleDetailPanel;
    NSTextField *ruleNameField;
    NSMutableArray *_actionViews;
    NSMenu *_actionMenu;
    NSScrollView *_actionContainer;
    NSView *_soundActionView;
    NSView *_colorActionView;
    NSView *_transferActionView;
    NSView *_copyActionView;
    NSView *_autoReplyActionView;
    NSView *_autoForwardActionView;
    NSView *_autoRedirectActionView;
    NSView *_markDeletedActionView;
    NSView *_markAsReadActionView;
    NSView *_markAsFlaggedActionView;
    NSView *_stopEvaluatingRulesActionView;
    NSView *_runAppleScriptActionView;
    NSView *_notifyUserActionView;
    NSPopUpButton *colorPopup;
    NSPopUpButton *colorStylePopup;
    SoundPopUpButton *soundPopup;
    AddressTextField *_forwardRecipientsField;
    AddressTextField *_redirectRecipientsField;
    NSPanel *responseMessageTextPanel;
    NSTextView *responseMessageTextView;
    NSTextField *appleScriptPathField;
    CriteriaUIHelper *criteriaUIHelper;
    MailboxesChooser *destinationChooser;
    MailboxesChooser *copyDestinationChooser;
    BOOL colorPanelShouldBeHidden;
    int currentlySelectedRow;
    MessageRule *_ruleBeingValidated;
    MessageRule *_ruleBeingEdited;
    DraggingTextView *addressFieldEditor;
    BOOL isDuplicatingRule;
    BOOL hasPendingChanges;
}

- (void)dealloc;
- (id)titleForIdentifier:(id)fp8;
- (id)windowTitle;
- (void)awakeFromNib;
- (id)windowWillReturnFieldEditor:(id)fp8 toObject:(id)fp12;
- (id)viewForPreferenceNamed:(id)fp8;
- (id)preferencesNibName;
- (id)imageForPreferenceNamed:(id)fp8;
- (BOOL)dataWillBeSynced;
- (void)dataWasSynced;
- (void)_validateButtonState;
- (void)initializeFromDefaults;
- (void)saveChanges;
- (void)createRule:(id)fp8;
- (void)duplicateRule:(id)fp8;
- (void)editRule:(id)fp8;
- (void)removeRuleSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)removeRule:(id)fp8;
- (int)numberOfRowsInTableView:(id)fp8;
- (id)tableView:(id)fp8 objectValueForTableColumn:(id)fp12 row:(int)fp16;
- (void)tableView:(id)fp8 setObjectValue:(id)fp12 forTableColumn:(id)fp16 row:(int)fp20;
- (int)tableView:(id)fp8 highlightStyleForRow:(int)fp12 inRect:(struct _NSRect *)fp16 color:(id *)fp20;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 row:(int)fp20;
- (BOOL)tableView:(id)fp8 doCommandBySelector:(SEL)fp12;
- (BOOL)tableView:(id)fp8 writeRows:(id)fp12 toPasteboard:(id)fp16;
- (unsigned int)tableView:(id)fp8 validateDrop:(id)fp12 proposedRow:(int)fp16 proposedDropOperation:(unsigned int)fp20;
- (BOOL)tableView:(id)fp8 acceptDrop:(id)fp12 row:(int)fp16 dropOperation:(unsigned int)fp20;
- (void)tableViewSelectionDidChange:(id)fp8;
- (void)_setOtherColor:(id)fp8;
- (void)removeAction:(id)fp8;
- (id)_actionViewForTag:(int)fp8;
- (void)addActionForTag:(int)fp8 atIndex:(int)fp12;
- (void)_configureColorPopupForColorStyle:(int)fp8;
- (void)_configureActionsForRule:(id)fp8;
- (void)addressesNeedRedisplay:(id)fp8;
- (void)addAction:(id)fp8;
- (void)_validateActionMenuItem:(id)fp8 currentTag:(int)fp12;
- (void)runRuleDetailPanelForRule:(id)fp8 inWindow:(id)fp12;
- (void)_ruleDetailSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)applyRulesSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)okClicked:(id)fp8;
- (void)alertDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)cancelClicked:(id)fp8;
- (void)colorChanged:(id)fp8;
- (void)colorPicked:(id)fp8;
- (void)colorStyleChanged:(id)fp8;
- (void)setResponseMessageClicked:(id)fp8;
- (void)responseMessageOKClicked:(id)fp8;
- (void)responseMessageCancelClicked:(id)fp8;
- (void)flagsToApplyChanged:(id)fp8;
- (void)chooseAppleScriptPanelSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)chooseAppleScriptClicked:(id)fp8;
- (void)mailboxSelected:(id)fp8;
- (void)actionPopupWillPopup:(id)fp8;
- (void)actionPopupChanged:(id)fp8;
- (id)titleForSoundFile:(id)fp8;

@end

