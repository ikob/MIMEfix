/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSActionCell.h"

@class MailAccount, NSString;

@interface AccountCell : NSActionCell
{
    NSString *subtitle;
    MailAccount *account;
}

- (id)initTextCell:(id)fp8;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)setAccount:(id)fp8;
- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (id)title;
- (id)icon;
- (void)drawWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)drawString:(id)fp8 inRect:(struct _NSRect)fp12 withAttributes:(id)fp28;

@end

