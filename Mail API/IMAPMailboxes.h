/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "AccountInfoTabOwner-Protocol.h"

@class ActivityMonitor, IMAPAccount, IMAPGateway, InvocationQueue, NSArray, NSButton, NSImageView, NSOutlineView, NSPredicate, NSProgressIndicator, NSSearchField, NSTextField, NSView;

@interface IMAPMailboxes <AccountInfoTabOwner>
{
    NSView *_mailboxesView;
    NSSearchField *_searchField;
    NSOutlineView *_mailboxesOutline;
    NSButton *_subscribeButton;
    NSButton *_unsubscribeButton;
    NSProgressIndicator *_fetchProgressIndicator;
    NSTextField *_fetchStatusField;
    NSImageView *_statusImageView;
    IMAPAccount *_account;
    IMAPGateway *_gateway;
    NSPredicate *_predicate;
    NSArray *_mailboxes;
    NSArray *_filteredMailboxes;
    ActivityMonitor *_mailboxListMonitor;
    InvocationQueue *_subscribeQueue;
}

- (id)init;
- (void)dealloc;
- (id)_alertIcon;
- (void)updateUIForOnlineState:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)_setupNotifications;
- (void)setupUIWithAccount:(id)arg1;
- (void)_mailboxFetchCompleted:(id)arg1 forAccount:(id)arg2;
- (id)_recursivelyCreateMailboxEntriesForList:(id)arg1 subscribedList:(id)arg2 inLocalPath:(id)arg3 remotePath:(id)arg4 forAccount:(id)arg5;
- (void)_fetchMailboxListingForAccount:(id)arg1;
- (id)view;
- (void)_startSubscriptionRequest;
- (void)_reallyStartSubscriptionRequest:(id)arg1;
- (void)_stopSubscriptionRequest:(id)arg1;
- (void)_reallyStopSubscriptionRequest:(id)arg1 refreshList:(id)arg2;
- (void)_handleSubscriptionRequest:(BOOL)arg1 forItem:(id)arg2 refreshSet:(id)arg3 recursive:(BOOL)arg4;
- (void)_handleSubscriptionRequest:(BOOL)arg1;
- (void)subscribeButtonClicked:(id)arg1;
- (void)unsubscribeButtonClicked:(id)arg1;
- (void)filterMailboxList:(id)arg1;
- (void)clearFilteredMailboxes;
- (void)_clearFilteredMailboxes:(id)arg1;
- (id)predicate;
- (id)_mailboxEntryForPath:(id)arg1;
- (id)_mailboxEntryForMailboxUid:(id)arg1;
- (void)_updateEntryTreeForChangedEntry:(id)arg1 oldValue:(BOOL)arg2;
- (void)_reallySetSubscribedState:(BOOL)arg1 forMailboxPath:(id)arg2 parentUid:(id)arg3 account:(id)arg4 refreshListing:(BOOL)arg5;
- (void)_reallySetSubscribedState:(id)arg1 parentUid:(id)arg2 account:(id)arg3 forMailboxPath:(id)arg4;
- (void)_setSubscribedState:(BOOL)arg1 forMailboxPath:(id)arg2 parentUid:(id)arg3;
- (void)_handleError:(id)arg1 settingSubscribedState:(id)arg2 forMailboxPath:(id)arg3 account:(id)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)accountInfoWillHideView:(id)arg1;
- (void)accountInfoWillShowView:(id)arg1;

@end

