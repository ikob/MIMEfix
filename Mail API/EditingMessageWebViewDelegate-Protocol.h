/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EditingMessageWebViewDelegate <NSObject>
- (BOOL)allowQuoting;
- (BOOL)allowsRichText;
- (void)setAllowsRichText:(BOOL)arg1;
- (void)editLink;
- (void)removeSelectedLink;
- (BOOL)selectionIsInList;
- (void)increaseListNestingLevel:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

@optional
- (void)webViewWillStartLiveResize:(id)arg1;
- (void)webViewDidEndLiveResize:(id)arg1;
- (void)webView:(id)arg1 willReplaceSelectionWithFragment:(id *)arg2 pasteboard:(id)arg3 type:(id)arg4 options:(int *)arg5;
- (void)webView:(id)arg1 didAddMailAttachment:(id)arg2;
- (void)webView:(id)arg1 willRemoveMailAttachment:(id)arg2;
- (id)webView:(id)arg1 shouldReplaceSelectionWithWebArchive:(id)arg2 givenAction:(int)arg3;
- (BOOL)webView:(id)arg1 canInsertFromDraggingInfo:(id)arg2;
- (BOOL)webView:(id)arg1 canInsertFromPasteboard:(id)arg2 forDrag:(BOOL)arg3;
- (void)webViewMainDocumentBaseURIDidChange:(id)arg1;
- (BOOL)webViewShouldReplaceSelectionWithContentsOfWebpage:(id)arg1;
- (void)webViewWillInsertContentsOfWebpage:(id)arg1;
@end

