/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSMutableData, NSMutableString;

@interface IMAPClientData
{
    NSMutableData *_data;
    NSMutableString *_commandString;
    IMAPClientData *_nextData;
    struct _NSRange _dontLogRange;
    BOOL _isFrozen;
}

@property BOOL isFrozen; // @synthesize isFrozen=_isFrozen;
@property struct _NSRange dontLogRange; // @synthesize dontLogRange=_dontLogRange;
@property(retain) IMAPClientData *nextData; // @synthesize nextData=_nextData;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"IMAPClientData",&,V_nextData,P

@property(retain) NSMutableString *commandString; // @synthesize commandString=_commandString;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSMutableString",&,V_commandString,P

@property(retain) NSMutableData *data; // @synthesize data=_data;
// Preceeding property had unknown attributes: P
// Original attribute string: T@"NSMutableData",&,V_data,P


- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithStringWaitingForArguments:(id)arg1;
- (void)addStringArgument:(id)arg1;
- (void)addDataArgument:(id)arg1 literalPlus:(BOOL)arg2;
- (void)freeze;
- (BOOL)isFrozen;
- (void)setIsFrozen:(BOOL)arg1;
- (struct _NSRange)dontLogRange;
- (void)setDontLogRange:(struct _NSRange)arg1;
- (id)nextData;
- (void)setNextData:(id)arg1;
- (id)commandString;
- (void)setCommandString:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;

@end
