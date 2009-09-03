/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Message/IMAPSingleClientOperation.h>

@class NSMutableDictionary, NSString;

@interface IMAPClientListOperation : IMAPSingleClientOperation
{
    NSString *_mailboxName;
    NSString *_referenceName;
    int _options;
    NSMutableDictionary *_listing;
    NSString *_separator;
}

@property(copy) NSString *separator; // @synthesize separator=_separator;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",C,V_separator,P

@property(retain) NSMutableDictionary *listing; // @synthesize listing=_listing;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSMutableDictionary",&,V_listing,P

@property int options; // @synthesize options=_options;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",C,V_referenceName,P

@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSString",C,V_mailboxName,P


- (void)dealloc;
- (id)initWithMailboxName:(id)arg1 referenceName:(id)arg2 options:(int)arg3;
- (id)initWithMailboxName:(id)arg1 options:(int)arg2;
- (id)commandTypeString;
- (id)createCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)executeOnConnection:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)listing;
- (void)setListing:(id)arg1;
- (int)options;
- (void)setOptions:(int)arg1;
- (id)referenceName;
- (void)setReferenceName:(id)arg1;
- (id)mailboxName;
- (void)setMailboxName:(id)arg1;

@end
