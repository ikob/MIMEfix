/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "MailApp.h"

@interface MailApp (AppleScript)
- (void)_runTestNamed:(id)fp8 iteration:(unsigned int)fp12;
- (void)application:(id)fp8 runTest:(unsigned int)fp12 duration:(double)fp16;
- (void)openSelectedFolder:(id)fp8;
- (id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)fp8;
- (id)applescriptSelection;
- (id)accounts;
- (id)_accountsOfClass:(Class)fp8;
- (id)popAccounts;
- (id)imapAccounts;
- (id)iToolsAccounts;
- (void)insertInDeliveryAccounts:(id)fp8 atIndex:(int)fp12;
- (void)insertInDeliveryAccounts:(id)fp8;
- (void)removeFromDeliveryAccountsAtIndex:(unsigned int)fp8;
- (id)messageViewers;
- (id)valueInMessageViewersWithUniqueID:(id)fp8;
- (void)insertInMessageViewers:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInMessageViewers:(id)fp8;
- (void)removeFromMessageViewersAtIndex:(unsigned int)fp8;
- (id)inbox;
- (id)outbox;
- (id)draftsMailbox;
- (id)sentMailbox;
- (id)trashMailbox;
- (id)junkMailbox;
- (id)mailboxes;
- (id)valueInMailboxesWithName:(id)fp8;
- (void)removeFromMailboxesAtIndex:(unsigned int)fp8;
- (void)insertInMailboxes:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInMailboxes:(id)fp8;
- (void)replaceInMailboxes:(id)fp8 atIndex:(unsigned int)fp12;
- (id)messageEditors;
- (void)insertInMessageEditors:(id)fp8 atIndex:(unsigned int)fp12;
- (void)removeFromMessageEditorsAtIndex:(unsigned int)fp8;
- (void)_insertInComposeMessagesIfAbsent:(id)fp8;
- (id)composeMessages;
- (void)insertInComposeMessages:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInComposeMessages:(id)fp8;
- (void)removeFromComposeMessagesAtIndex:(unsigned int)fp8;
- (void)removeFromComposeMessages:(id)fp8;
- (id)valueInComposeMessagesWithUniqueID:(id)fp8;
- (id)_objectSpecifierForObject:(id)fp8 inArray:(id)fp12 withKey:(id)fp16;
- (id)uniqueIDForComposeMessage:(id)fp8;
- (id)objectSpecifierForComposeMessage:(id)fp8;
- (id)objectSpecifierForMessageEditor:(id)fp8;
- (BOOL)useKeychain;
- (void)setUseKeychain:(BOOL)fp8;
- (BOOL)logAllSocketActivity;
- (void)setLogAllSocketActivity:(BOOL)fp8;
- (id)logActivityOnPorts;
- (void)setLogActivityOnPorts:(id)fp8;
- (id)logActivityOnHosts;
- (void)setLogActivityOnHosts:(id)fp8;
- (id)logMessages;
- (id)memoryStatistics;
- (id)userEmail;
- (id)handleCheckMailCommand:(id)fp8;
- (id)handleSynchronizeAccountCommand:(id)fp8;
- (id)handleImportMboxCommand:(id)fp8;
@end

