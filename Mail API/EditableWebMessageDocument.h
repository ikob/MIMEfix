/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "WebMessageDocument.h"

@class DOMHTMLDocument, NSMutableDictionary;

@interface EditableWebMessageDocument : WebMessageDocument
{
    DOMHTMLDocument *_htmlDocument;
    NSMutableDictionary *_attachmentsByURL;
}

- (id)htmlDocument;
- (void)setHTMLDocument:(id)fp8;
- (void)setBaseURL:(id)fp8;
- (id)attachmentForURL:(id)fp8;
- (id)prepareToAddArchive:(id)fp8 attachmentDelegate:(id)fp12;
- (id)prepareToAddArchive:(id)fp8;
- (void)addAttachment:(id)fp8 forURL:(id)fp12;
- (id)attachmentElementEnumeratorWithOptions:(int)fp8;
- (id)attachmentElementEnumeratorForRange:(id)fp8 withOptions:(int)fp12;

@end

