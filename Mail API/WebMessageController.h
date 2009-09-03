/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class MessageWebView, NSString, NSView, WebMessageDocument, WebView;

@interface WebMessageController
{
    WebMessageDocument *_document;
    MessageWebView *_webView;
    NSView *_mainFrameDocumentView;
    NSString *_sender;
    id _delegate;
    BOOL _finishedFirstLayout;
}

@property(retain) WebView *webView;
@property(readonly) WebMessageDocument *document; // @synthesize document=_document;
@property id delegate; // @synthesize delegate=_delegate;

+ (void)initialize;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)setWebView:(id)arg1;
- (id)webView;
- (void)setSender:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)documentResized;
- (BOOL)hasFinishedLoading;
- (BOOL)hasFinishedFirstLayout;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)stopLoading;
- (void)dealloc;
- (void)adjustFontSizeBy:(float)arg1;
- (void)refreshWithViewingState:(id)arg1;
- (id)mainFrameDocumentView;
- (void)setMainFrameDocumentView:(id)arg1;
- (void)_openLink:(id)arg1;
- (void)_openLinkBehind:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)document;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

