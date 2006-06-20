/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

#import "MVMailboxSelectionOwnerProtocol.h"

@class ASExtendedOutlineView, NSArray, NSFont, NSMutableAttributedString, NSMutableDictionary, NSTimer;

@interface MailboxesOutlineViewOwner : NSObject <MVMailboxSelectionOwner>
{
    id _delegate;
    ASExtendedOutlineView *_outlineView;
    NSArray *_savedSelection;
    NSFont *_normalFont;
    NSFont *_boldFont;
    NSMutableAttributedString *_cellValue;
    BOOL putSmartMailboxesAtTheBottom;
    float _idealOutlineViewWidth;
    float _minimumWidthNeededToUseMailboxes;
    float _minimizedOutlineViewWidth;
    NSArray *_specialMailboxUids;
    NSTimer *_progressIndicatorTimer;
    NSMutableDictionary *_mailboxesShowingProgress;
    struct __CFDictionary *_mailboxesByActivity;
    int minimumRowHeightForFont;
}

+ (void)deliveryFailureHasHappened:(id)fp8;
+ (void)userDidSaveAsDraft:(id)fp8;
+ (void)messagesWereAddedToMailboxes:(id)fp8;
+ (void)accountWasAdded:(id)fp8;
+ (void)allViewersAreClosed;
+ (BOOL)shouldShowOutbox;
+ (BOOL)shouldShowDrafts;
+ (void)setShouldShowOutbox:(BOOL)fp8;
+ (void)setShouldShowDrafts:(BOOL)fp8;
+ (void)tellAllInstancesToShowSpecialMailbox:(id)fp8;
+ (void)startWatchingForIncomingDrafts;
+ (void)stopWatchingForIncomingDrafts;
+ (BOOL)atLeastOneAccountStoresDraftsOnServer;
+ (BOOL)draftsHasMessageWithNoWindow;
+ (void)openDraftsMailboxes;
- (id)init;
- (void)dealloc;
- (void)_invalidateProgressIndicatorTimer;
- (void)setOutlineView:(id)fp8;
- (void)monitoredActivityStarted:(id)fp8;
- (void)monitoredActivityEnded:(id)fp8;
- (void)monitoredActivityAddedTarget:(id)fp8;
- (void)monitoredActivityRemovedTarget:(id)fp8;
- (void)stopProgressForMailboxPaths:(id)fp8;
- (id)mailboxesForActivity:(id)fp8;
- (void)setDelegate:(id)fp8;
- (float)idealWidthForSubtree:(id)fp8;
- (float)idealOutlineViewWidth;
- (float)minimizedOutlineViewWidth;
- (float)minimumWidthNeededToUseMailboxes;
- (id)selectedMailbox;
- (id)selectedMailboxes;
- (void)selectPathsToMailboxes:(id)fp8;
- (BOOL)canSelectMailbox:(id)fp8;
- (void)revealMailbox:(id)fp8;
- (BOOL)_revealPathToMailbox:(id)fp8 andSelect:(BOOL)fp12 extendingSelection:(BOOL)fp16;
- (BOOL)mailboxIsExpanded:(id)fp8;
- (unsigned int)numberOfSpecialMailboxes;
- (id)specialMailboxUids;
- (unsigned int)numberOfSmartMailboxes;
- (BOOL)outboxIsEmpty;
- (void)messageIsBeingDelivered:(id)fp8;
- (void)showOutboxForSlowDeliveryOfMessage:(id)fp8;
- (void)outboxContentsChanged:(id)fp8;
- (id)outlineView:(id)fp8 child:(int)fp12 ofItem:(id)fp16;
- (BOOL)outlineView:(id)fp8 isItemExpandable:(id)fp12;
- (int)outlineView:(id)fp8 numberOfChildrenOfItem:(id)fp12;
- (BOOL)outlineView:(id)fp8 shouldExpandItem:(id)fp12;
- (id)iconForMailboxUid:(id)fp8 smallSize:(BOOL)fp12;
- (id)mailboxSelectionWindow;
- (void)editNameOfMailbox:(id)fp8;
- (BOOL)outlineView:(id)fp8 shouldEditTableColumn:(id)fp12 item:(id)fp16;
- (BOOL)control:(id)fp8 textShouldEndEditing:(id)fp12;
- (void)controlTextDidEndEditing:(id)fp8;
- (BOOL)control:(id)fp8 textView:(id)fp12 doCommandBySelector:(SEL)fp16;
- (id)outlineView:(id)fp8 objectValueForTableColumn:(id)fp12 byItem:(id)fp16;
- (id)outlineView:(id)fp8 persistentObjectForItem:(id)fp12;
- (id)outlineView:(id)fp8 itemForPersistentObject:(id)fp12;
- (int)outlineView:(id)fp8 heightOfRow:(int)fp12;
- (void)redrawProgressIndicators:(id)fp8;
- (void)redrawRowsForMailboxesAtPaths:(id)fp8;
- (BOOL)_isMailboxOffline:(id)fp8 level:(int)fp12 alertState:(int *)fp16;
- (void)_configureCell:(id)fp8 forMailboxUid:(id)fp12 forTableColumn:(id)fp16;
- (void)outlineView:(id)fp8 willDisplayCell:(id)fp12 forTableColumn:(id)fp16 item:(id)fp20;
- (unsigned int)outlineView:(id)fp8 draggingSourceOperationMaskForLocal:(BOOL)fp12;
- (void)outlineView:(id)fp8 didEndDragWithImage:(id)fp12 atPoint:(struct _NSPoint)fp16 operation:(unsigned int)fp24;
- (BOOL)outlineView:(id)fp8 writeItems:(id)fp12 toPasteboard:(id)fp16;
- (id)outlineView:(id)fp8 dragImage:(id)fp12 forRowsWithIndexes:(id)fp16 tableColumns:(id)fp20 event:(id)fp24 offset:(struct _NSPoint *)fp28;
- (unsigned int)outlineView:(id)fp8 validateDrop:(id)fp12 proposedItem:(id)fp16 proposedChildIndex:(int)fp20;
- (BOOL)outlineView:(id)fp8 acceptDrop:(id)fp12 item:(id)fp16 childIndex:(int)fp20;
- (void)outlineViewSelectionDidChange:(id)fp8;
- (void)outlineViewItemDidExpand:(id)fp8;
- (void)outlineViewItemDidCollapse:(id)fp8;
- (void)selectAllInOutlineView:(id)fp8;
- (void)setFirstResponderAfterMouseDownOnOutlineView:(id)fp8;
- (int)totalUnreadCountForItem:(id)fp8;
- (BOOL)outlineView:(id)fp8 handleDoubleClickEvent:(id)fp12 forItem:(id)fp16 inRow:(int)fp20;
- (BOOL)outlineView:(id)fp8 shouldTrackMouseInCell:(id)fp12 forTableColumn:(id)fp16 item:(id)fp20;
- (void)showOfflineStatus:(id)fp8;
- (void)offlineAlertSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)unreadCountChanged:(id)fp8;
- (void)startShowingOutbox;
- (void)startShowingDrafts;
- (BOOL)outboxContainsMessageWhoseAccountIsOffline;
- (void)openDraftsMailboxes;
- (void)_reloadChildrenOfMailboxUid:(id)fp8;
- (void)mailboxListingDidChange:(id)fp8;
- (void)accountOfflineStatusDidChange:(id)fp8;
- (void)accountsChanged:(id)fp8;
- (void)viewerPreferencesChanged:(id)fp8;
- (BOOL)outlineView:(id)fp8 shouldCollapseAutoExpandedItemsForDeposited:(BOOL)fp12;
- (void)readDefaultsFromDictionary:(id)fp8;
- (void)writeDefaultsToDictionary:(id)fp8;
- (id)outlineView:(id)fp8 toolTipForCell:(id)fp12 rect:(struct _NSRect *)fp16 tableColumn:(id)fp20 item:(id)fp24 mouseLocation:(struct _NSPoint)fp28;

@end

