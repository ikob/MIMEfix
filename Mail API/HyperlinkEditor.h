/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMHTMLAnchorElement, DOMNode, EditingMessageWebView, NSButton, NSString, NSTextField;

@interface HyperlinkEditor : NSObject
{
    NSTextField *_linkTextField;
    NSButton *_okButton;
    EditingMessageWebView *_webView;
    id _delegate;
    DOMHTMLAnchorElement *_selectedAnchor;
    DOMNode *_selectionContents;
    NSString *_replacementLink;
}

- (void)dealloc;
- (id)initForWebView:(id)fp8 delegate:(id)fp12;
- (void)editLink;
- (void)removeSelectedLink;
- (void)orderOutPanel:(id)fp8;
- (void)controlTextDidChange:(id)fp8;

@end

