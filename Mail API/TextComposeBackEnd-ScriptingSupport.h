/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "TextComposeBackEnd.h"

@interface TextComposeBackEnd (ScriptingSupport)
+ (id)_messageEditorForComposeBackEnd:(id)fp8 window:(id *)fp12;
- (BOOL)isVisible;
- (void)setIsVisible:(BOOL)fp8;
- (id)appleScriptSender;
- (void)setAppleScriptSender:(id)fp8;
- (id)appleScriptSubject;
- (void)setAppleScriptSubject:(id)fp8;
- (id)content;
- (void)setContent:(id)fp8;
- (id)messageSignature;
- (void)setMessageSignature:(id)fp8;
- (void)_addRecipientsForKey:(id)fp8 toArray:(id)fp12;
- (id)recipients;
- (id)toRecipients;
- (id)ccRecipients;
- (id)bccRecipients;
- (void)insertRecipient:(id)fp8 atIndex:(unsigned int)fp12 inHeaderWithKey:(id)fp16;
- (void)insertInToRecipients:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInToRecipients:(id)fp8;
- (void)insertInCcRecipients:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInCcRecipients:(id)fp8;
- (void)insertInBccRecipients:(id)fp8 atIndex:(unsigned int)fp12;
- (void)insertInBccRecipients:(id)fp8;
- (void)removeFromToRecipientsAtIndex:(unsigned int)fp8;
- (void)removeFromCcRecipientsAtIndex:(unsigned int)fp8;
- (void)removeFromBccRecipientsAtIndex:(unsigned int)fp8;
- (void)replaceFormattedAddress:(id)fp8 withAddress:(id)fp12 forKey:(id)fp16;
- (id)handleSaveMessageCommand:(id)fp8;
- (id)handleSendMessageCommand:(id)fp8;
- (id)handleCloseScriptCommand:(id)fp8;
- (id)uniqueID;
- (id)objectSpecifier;
- (void)setHtmlContent:(id)fp8;
- (void)setVcardPath:(id)fp8;
@end

