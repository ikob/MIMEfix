/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/MailboxUid.h>

@interface SpecialMailboxUid : MailboxUid
{
}

+ (id)specialMailboxWithIdentifier:(id)fp8;
+ (id)specialMailboxUidForMailboxUidType:(int)fp8;
+ (id)inboxMailboxUid;
+ (id)sentMessagesMailboxUid;
+ (id)draftsMailboxUid;
+ (id)junkMailboxUid;
+ (id)outboxMailboxUid;
+ (id)trashMailboxUid;
+ (id)notesMailboxUid;
+ (id)todosMailboxUid;
+ (id)replaceToDosSpecialMailboxWithChildrenInArray:(id)fp8;
- (id)criterion;
- (id)displayName;
- (id)name;
- (id)account;
- (id)children;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)fp8;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)fp8;
- (id)childAtIndex:(unsigned int)fp8;
- (unsigned int)numberOfChildren;
- (unsigned int)numberOfVisibleChildren;
- (unsigned int)unreadCount;
- (id)tildeAbbreviatedPath;
- (id)_viewerAttributesKey;
- (id)_loadUserInfo;
- (void)saveUserInfo;

@end

