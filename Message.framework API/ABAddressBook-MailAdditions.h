/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "ABAddressBook.h"

@interface ABAddressBook (MailAdditions)
+ (BOOL)firstNameShouldBeFirst;
+ (BOOL)firstNameShouldBeFirstForRecord:(id)fp8;
- (id)recordsCompletingSearchString:(id)fp8 searchSubscribedContent:(BOOL)fp12;
- (id)recordsCompletingSearchString:(id)fp8;
- (id)_bestRecordMatchingFormattedAddress:(id)fp8 inSubscribedContent:(BOOL)fp12;
- (id)bestRecordMatchingFormattedAddress:(id)fp8;
- (id)recordWithEmailAddress:(id)fp8;
@end

