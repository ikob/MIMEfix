/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "WebMessageController.h"

#import "MessageContentDisplay-Protocol.h"

@class MessageViewingState, NSInvocation, NSString;

@interface WebMessageDisplay : WebMessageController <MessageContentDisplay>
{
    NSInvocation *_displayChangedInvocation;
    float _textSizeMultiplier;
    MessageViewingState *_viewingState;
    NSString *_dataDetectorsUUID;
}

@property id delegate;

+ (void)initialize;
+ (id)dataDetectorManager;
+ (id)copyDocumentForMessage:(id)arg1 viewingState:(id)arg2;
+ (Class)documentClass;
+ (id)webResourcesForAttachments:(id)arg1 urls:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)contentView;
- (id)textView;
- (void)documentResized;
- (void)display:(id)arg1 inContainerView:(id)arg2 replacingView:(id)arg3 invokeWhenDisplayChanged:(id)arg4;
- (void)prepareToRemoveView;
- (void)invalidateViewingState;
- (BOOL)isOkayToDownloadAttachment:(id)arg1;
- (void)attachmentFinishedDownloading:(id)arg1;
- (void)highlightSearchText:(id)arg1;
- (void)setSelectedTextRepresentation:(id)arg1;
- (id)selectedTextRepresentation;
- (id)selectedText;
- (id)selectionParsedMessage;
- (id)attachmentsInSelection;
- (id)parsedMessage;
- (void)adjustFontSizeBy:(long long)arg1 viewingState:(id)arg2;
- (id)findTarget;
- (void)detectDataInMessage:(id)arg1 usingContext:(id)arg2;
- (void)cancelDataDetection;
- (BOOL)scrollVerticallyBy:(double)arg1;
- (double)verticalPageScrollDistance;
- (BOOL)scrollHorizontallyBy:(double)arg1;
- (void)webView:(id)arg1 didWriteSelectionToPasteboard:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_setDisplayChangedInvocation:(id)arg1;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 willPerformDragSourceAction:(int)arg2 fromPoint:(struct CGPoint)arg3 withPasteboard:(id)arg4;

@end

