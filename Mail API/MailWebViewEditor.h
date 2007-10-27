/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "WebViewEditor.h"

#import "DOMEventListenerProtocol.h"

@class DOMNode, NSArray, NSMutableArray;

@interface MailWebViewEditor : WebViewEditor <DOMEventListener>
{
    BOOL needToFinishMakingPlainAfterRemovingStationery;
    NSArray *backgroundTilingElements;
    NSArray *backgroundTilingDivs;
    NSArray *backgroundTilingFixedSizes;
    NSMutableArray *uneditedEditableElements;
    NSMutableArray *editedEditableElements;
    DOMNode *editableElementWithMouseDown;
    BOOL shouldAttachFilesAtEnd;
}

- (id)insertablePasteboardTypes;
- (void)prepareToGoAway;
- (void)dealloc;
- (void)setUp;
- (void)setBackEnd:(id)fp8;
- (BOOL)allowQuoting;
- (void)setAllowsRichText:(BOOL)fp8;
- (id)alertForConvertingToRichText;
- (BOOL)webView:(id)fp8 shouldInsertAttachments:(id)fp12 context:(id)fp16;
- (BOOL)isOkayToLoadStationery;
- (void)continueCannotInsertStationery:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (BOOL)shouldAttachFilesAtEnd;
- (void)_insertAttributedStringOfAttachments:(id)fp8 allAttachmentsAreOkay:(BOOL)fp12;
- (void)continueShouldInsertAttachments:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (BOOL)isOkayToInsertAttachment:(id)fp8;
- (void)insertAttributedStringOfAttachments:(id)fp8 allAttachmentsAreOkay:(BOOL)fp12;
- (void)continueInsertAttributedStringOfAttachments:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (BOOL)webView:(id)fp8 canInsertFromPasteboard:(id)fp12 forDrag:(BOOL)fp16;
- (void)prepareToRemoveStationery;
- (void)webViewDidLoadStationery:(id)fp8;
- (void)stationeryDidFinishLoadingResources:(id)fp8;
- (void)handleEvent:(id)fp8;
- (void)doOrUndoEditingInSignatureWithInfo:(id)fp8;
- (id)editedEditableElements;
- (void)mouseDownDidHappen:(id)fp8 inWebView:(id)fp12;
- (void)mouseUpDidHappen:(id)fp8 inWebView:(id)fp12;
- (void)webViewDidChange:(id)fp8;
- (id)replaceOldSignatureWithNewSignature:(id)fp8;
- (void)webViewDidChangeSelection:(id)fp8;
- (BOOL)webView:(id)fp8 doCommandBySelector:(SEL)fp12;
- (BOOL)insertNewline:(id)fp8;
- (void)webView:(id)fp8 didWriteSelectionToPasteboard:(id)fp12;
- (void)changeDocumentBackgroundColorWithContext:(id)fp8;
- (void)continueChangeDocumentBackgroundColor:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (id)backgroundTilingFixedSizes;
- (void)setBackgroundTilingFixedSizes:(id)fp8;
- (id)backgroundTilingDivs;
- (void)setBackgroundTilingDivs:(id)fp8;
- (id)backgroundTilingElements;
- (void)setBackgroundTilingElements:(id)fp8;
- (void)setShouldAttachFilesAtEnd:(BOOL)fp8;

@end

