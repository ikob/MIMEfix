/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class DOMHTMLDocument, DOMHTMLElement, NSMutableArray, NSMutableDictionary;

@interface EditableWebMessageDocument
{
    DOMHTMLDocument *_htmlDocument;
    DOMHTMLElement *_contentElement;
    NSMutableDictionary *savedUserContent;
    NSMutableDictionary *savedUserAttachments;
    NSMutableArray *orderedUserAttachmentsURLs;
    NSMutableArray *savedUserImages;
}

- (void)dealloc;
- (id)htmlDocument;
- (void)setHTMLDocument:(id)arg1;
- (id)contentElement;
- (void)setContentElement:(id)arg1;
- (id)contentFragment;
- (id)flattenedContentFragment;
- (void)saveUserContent:(id)arg1;
- (id)savedUserContent;
- (void)forgetSavedContentWithKeys:(id)arg1;
- (void)saveUserAttachments:(id)arg1 withOrdering:(id)arg2;
- (id)savedUserAttachmentsOrdering;
- (id)savedUserAttachmentForURL:(id)arg1;
- (void)removeSavedUserAttachmentWithURL:(id)arg1;
- (id)orderedCompositeImagesAndTheirURLs:(id *)arg1;
- (void)saveUserImagesFromCompositeImages;
- (id)savedUserImagesFromCompositeImages;
- (void)insertSavedUserImagesIntoCompositeImages;
- (void)forgetAllSavedContentAttachmentsAndImages;
- (id)userImageDictionaryFromAttachment:(id)arg1 withURL:(id)arg2;
- (id)attachments;
- (id)backgroundImageAttachments;
- (void)saveAttachmentsWithURLsAsBackgroundAttachments:(id)arg1;
- (id)attachmentsIncludingBackgrounds;
- (void)removeAllAttachments;
- (void)removeAllCompositeImageAttachments;
- (void)removeAllBackgroundAttachments;
- (id)attachmentForURLString:(id)arg1;
- (id)prepareToAddArchive:(id)arg1 attachmentDelegate:(id)arg2;
- (id)prepareToAddArchive:(id)arg1;
- (void)copyBackgroundImageFromURL:(id)arg1 toURL:(id)arg2;
- (id)attachmentElementEnumeratorWithOptions:(int)arg1;
- (id)attachmentElementEnumeratorForRange:(id)arg1 withOptions:(int)arg2;

@end

