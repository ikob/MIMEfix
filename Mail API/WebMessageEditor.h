/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "MessageEditor.h"

@class EditingMessageWebView, EditingWebMessageController, NSArray, NSDictionary, NSMutableDictionary, WebFrame;

@interface WebMessageEditor : MessageEditor
{
    EditingMessageWebView *composeWebView;
    EditingWebMessageController *_controller;
    unsigned int _sendWhenFinishLoading:1;
    unsigned int _needToDoExpensiveTextForRichness:1;
    unsigned int _needToCheckRichnessInRange:1;
    NSDictionary *_infoForRichnessTest;
    NSArray *attachmentsForContextualMenu;
    WebFrame *_loadArchiveTargetFrame;
    NSMutableDictionary *_bodiesByAttachmentURL;
}

- (void)dealloc;
- (void)_setupInlineSpellChecking;
- (BOOL)loadEditorNib;
- (void)appendAttributedString:(id)fp8;
- (void)updateMainContentView;
- (Class)backEndClass;
- (id)mainContentView;
- (id)attachmentStatusNeighbourView;
- (id)attachments;
- (BOOL)validateAction:(SEL)fp8 tag:(int)fp12;
- (void)insertOriginalAttachments:(id)fp8 gatekeeperApproved:(BOOL)fp12;
- (void)insertOriginalAttachmentsWithGatekeeperApproval:(id)fp8;
- (void)insertOriginalAttachments:(id)fp8;
- (void)removeAttachments:(id)fp8;
- (void)_toggleRichSheetDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (void)toggleRich:(id)fp8;
- (BOOL)startFinalSpellCheck;
- (void)endFinalSpellCheck;
- (void)_changeSignatureFrom:(id)fp8 to:(id)fp12;
- (void)updateContentsToShowSignature:(id)fp8;
- (unsigned long long)textLengthEstimate;
- (void)updateRichTextFlag;
- (BOOL)isRichText;
- (BOOL)allowsRichText;
- (void)_changeSendFormatInBackEndAndView:(int)fp8;
- (void)setRichText:(BOOL)fp8;
- (void)mailAttachmentsAdded:(id)fp8;
- (void)_generateWebArchivesToAppendForMessages:(id)fp8;
- (id)mimeBodyForAttachmentWithURL:(id)fp8;
- (void)appendMessageArray:(id)fp8;
- (void)_appendMessages:(id)fp8 withWebArchives:(id)fp12;
- (void)addFileWrappersForPaths:(id)fp8;
- (void)redisplayChangedAttachment:(id)fp8;
- (void)backEnd:(id)fp8 didCompleteLoadForEditorSettings:(id)fp12;
- (void)checkRichnessForEditedRange:(id)fp8;
- (void)_finalSetup;
- (void)_continueFinalSetupAllowingSignatureChange:(BOOL)fp8;
- (void)_continueFinalSetup;
- (void)_continueFinalSetupWithoutSignature;
- (void)webView:(id)fp8 didFinishLoadForFrame:(id)fp12;
- (void)webView:(id)fp8 didFailProvisionalLoadWithError:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 didFailLoadWithError:(id)fp12 forFrame:(id)fp16;
- (void)webView:(id)fp8 decidePolicyForNavigationAction:(id)fp12 request:(id)fp16 frame:(id)fp20 decisionListener:(id)fp24;
- (id)webView:(id)fp8 resource:(id)fp12 willSendRequest:(id)fp16 redirectResponse:(id)fp20 fromDataSource:(id)fp24;
- (BOOL)webViewShouldBeginEditing:(id)fp8 inDOMRange:(id)fp12;
- (BOOL)webViewShouldEndEditing:(id)fp8 inDOMRange:(id)fp12;
- (BOOL)webView:(id)fp8 shouldInsertNode:(id)fp12 replacingDOMRange:(id)fp16 givenAction:(int)fp20;
- (BOOL)webView:(id)fp8 shouldInsertText:(id)fp12 replacingDOMRange:(id)fp16 givenAction:(int)fp20;
- (BOOL)webView:(id)fp8 shouldDeleteDOMRange:(id)fp12;
- (BOOL)webView:(id)fp8 shouldChangeSelectedDOMRange:(id)fp12 toDOMRange:(id)fp16 affinity:(int)fp20 stillSelecting:(BOOL)fp24;
- (void)stayPlainOrBecomeRich:(id)fp8 returnCode:(int)fp12 contextInfo:(id)fp16;
- (BOOL)webView:(id)fp8 shouldApplyStyle:(id)fp12 toElementsInDOMRange:(id)fp16;
- (BOOL)webView:(id)fp8 shouldChangeTypingStyle:(id)fp12 toStyle:(id)fp16;
- (BOOL)webView:(id)fp8 doCommandBySelector:(SEL)fp12;
- (void)webViewDidBeginEditing:(id)fp8;
- (void)webViewDidChange:(id)fp8;
- (void)webViewDidEndEditing:(id)fp8;
- (void)webViewDidChangeTypingStyle:(id)fp8;
- (void)webViewDidChangeSelection:(id)fp8;
- (id)webView:(id)fp8 shouldReplaceSelectionWithWebArchive:(id)fp12 givenAction:(int)fp16;
- (void)webView:(id)fp8 didAddMailAttachment:(id)fp12;
- (void)webView:(id)fp8 willRemoveMailAttachment:(id)fp12;
- (id)webView:(id)fp8 plainTextEquivalentForNode:(id)fp12;
- (void)changeFromHeader:(id)fp8;
- (void)send:(id)fp8;
- (void)willShowContextualMenuForAttachment:(id)fp8;
- (id)selectedAttachments;
- (id)attachmentsForContextualMenu;
- (BOOL)moreThanOneAttachmentSelected;
- (id)attachmentForEvent:(id)fp8;
- (void)openAttachment:(id)fp8;
- (void)openAttachmentWithApplication:(id)fp8;
- (void)chooseApplicationToOpenAttachment:(id)fp8;
- (void)saveAttachment:(id)fp8;
- (void)saveAttachmentToDownloadsDirectory:(id)fp8;
- (void)viewAttachmentInline:(id)fp8;
- (BOOL)validateMenuItem:(id)fp8;
- (void)forceWindowClose;
- (void)pasteAsMarkup;

@end

