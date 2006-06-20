/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MimePart : NSObject
{
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange _range;
    id _parentOrBody;
    MimePart *_nextPart;
}

+ (void)initialize;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)type;
- (void)setType:(id)fp8;
- (id)subtype;
- (void)setSubtype:(id)fp8;
- (id)bodyParameterForKey:(id)fp8;
- (void)setBodyParameter:(id)fp8 forKey:(id)fp12;
- (id)bodyParameterKeys;
- (id)contentTransferEncoding;
- (void)setContentTransferEncoding:(id)fp8;
- (id)disposition;
- (void)setDisposition:(id)fp8;
- (id)dispositionParameterForKey:(id)fp8;
- (void)setDispositionParameter:(id)fp8 forKey:(id)fp12;
- (id)dispositionParameterKeys;
- (id)contentDescription;
- (void)setContentDescription:(id)fp8;
- (id)contentID;
- (void)setContentID:(id)fp8;
- (id)contentLocation;
- (void)setContentLocation:(id)fp8;
- (id)languages;
- (void)setLanguages:(id)fp8;
- (id)parentPart;
- (id)firstChildPart;
- (id)nextSiblingPart;
- (id)subparts;
- (id)subpartAtIndex:(int)fp8;
- (void)setSubparts:(id)fp8;
- (void)addSubpart:(id)fp8;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)fp8;
- (id)bodyData;
- (id)mimeBody;
- (void)setMimeBody:(id)fp8;
- (id)description;
- (id)attachmentFilename;
- (BOOL)hasCachedDataInStore;
- (unsigned int)numberOfAttachments;
- (void)getNumberOfAttachments:(unsigned int *)fp8 isSigned:(char *)fp12 isEncrypted:(char *)fp16;
- (id)attachments;
- (unsigned long)textEncoding;
- (unsigned int)approximateRawSize;
- (BOOL)isReadableText;
- (BOOL)isAttachment;
- (BOOL)isRich;
- (BOOL)isHTML;
- (BOOL)usesKnownSignatureProtocol;
- (id)attributedString;
- (id)fileWrapper;
- (void)configureFileWrapper:(id)fp8;
- (id)stringValueForJunkEvaluation:(BOOL)fp8;
- (id)startPart;
- (int)numberOfAlternatives;
- (id)alternativeAtIndex:(int)fp8;
- (id)signedData;
- (id)textHtmlPart;
- (id)webArchive;
- (id)decryptedMessageBody;
- (void)clearCachedDescryptedMessageBody;
- (void)_setDecryptedMessageBody:(id)fp8;

@end

