/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class MimeBody, MimePart, NSDictionary, NSMutableDictionary, NSURL, ParsedMessage;

@interface WebMessageDocument : NSObject
{
    NSDictionary *_mimePartsByURL;
    NSMutableDictionary *_attachmentsByURL;
    NSMutableDictionary *_headerAttachmentsByURL;
    NSMutableDictionary *_backgroundImageAttachments;
    NSURL *_baseURL;
    MimeBody *_mimeBody;
    MimePart *_htmlPart;
    ParsedMessage *_parsedMessage;
    unsigned int _preferredCharset;
    int _uniqueId;
    BOOL _shouldDownloadRemoteURLs;
    BOOL _containsRemoteContent;
    BOOL _messageIsFromMicrosoft;
    BOOL _collapseQuotedBlocks;
}

+ (void)initialize;
+ (id)openDocuments;
+ (id)invalidBaseURL;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 forURL:(id)arg3;
+ (void)document:(id *)arg1 attachmentController:(id *)arg2 mimePart:(id *)arg3 forURL:(id)arg4;
+ (void)document:(id *)arg1 attachment:(id *)arg2 forURL:(id)arg3;
+ (id)documentWithUniqueIdentifier:(unsigned long long)arg1;
+ (void)documentWillClose:(id)arg1;
- (id)initWithMimeBody:(id)arg1 forDisplay:(BOOL)arg2;
- (id)initForDisplay:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)mimePartForURL:(id)arg1;
- (id)attachmentForURL:(id)arg1 inHeaderView:(BOOL)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)addAttachment:(id)arg1 forURL:(id)arg2 inHeaderView:(BOOL)arg3;
- (void)addAttachment:(id)arg1 forURL:(id)arg2;
- (void)addAttachments:(id)arg1;
- (BOOL)hasAttachmentViewController:(id)arg1;
- (id)userAttachments;
- (BOOL)hasAttachments;
- (id)attachments;
- (id)attachmentsByURL;
- (void)clearAttachmentsByURL;
- (id)mimeBody;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (id)preferredCharacterSet;
- (unsigned long long)uniqueIdentifier;
- (id)parsedMessage;
- (id)parsedMessageFromRange:(id)arg1;
- (void)setShouldDownloadRemoteURLs:(BOOL)arg1;
- (BOOL)shouldDownloadRemoteURLs;
- (void)setContainsRemoteContent:(BOOL)arg1;
- (BOOL)containsRemoteContent;
- (void)setMessageIsFromMicrosoft:(BOOL)arg1;
- (BOOL)messageIsFromMicrosoft;
- (void)setCollapseQuotedBlocks:(BOOL)arg1;
- (BOOL)collapseQuotedBlocks;
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;

@end

