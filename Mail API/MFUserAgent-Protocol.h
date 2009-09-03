/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFUserAgent <NSObject>
- (id)queryUserForPasswordWithMessage:(id)arg1 title:(id)arg2 remember:(char *)arg3;
- (BOOL)showCertificateTrustPanelForError:(id)arg1 host:(id)arg2 certificates:(id)arg3;
- (long long)informUserOfError:(id)arg1;
- (BOOL)queryUserWithMessageText:(id)arg1 informativeText:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (long long)runAlertPanelWithTitle:(id)arg1 defaultTitle:(id)arg2 alternateTitle:(id)arg3 otherTitle:(id)arg4 message:(id)arg5;
- (long long)queryUserForBigMessageAction:(id)arg1;
- (void)storeBeingInvalidated:(id)arg1;
- (BOOL)shouldInvalidateMailbox:(id)arg1;
- (BOOL)isTerminating;
- (void)relaunchAndQuit;
- (BOOL)wakingFromSleep;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)personWithEmailIsOnline:(id)arg1;
- (BOOL)openTemporaryAttachments:(id)arg1 applicationBundle:(id)arg2;
- (void)informUserOfIOErrorWithStateIn:(unsigned long long *)arg1;
- (void)informUserOfBusyDatabaseWithRecoverer:(id)arg1 diagnosis:(unsigned long long *)arg2;
@end

