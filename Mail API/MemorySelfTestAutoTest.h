/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "MailAutoTest.h"

@interface MemorySelfTestAutoTest : MailAutoTest
{
}

- (id)init;
- (void)setUp;
- (void)performTest;
- (void)tearDown;
- (void)sendMessageWithContent:(id)arg1 subject:(id)arg2 recipient:(id)arg3;
- (void)fetchMailInAccount:(id)arg1;
- (id)createMailboxWithName:(id)arg1 account:(id)arg2;
- (BOOL)moveMessageWithSubject:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)deleteMessageWithSubject:(id)arg1 mailbox:(id)arg2;

@end

