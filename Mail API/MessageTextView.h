/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSTextView.h"

@interface MessageTextView : NSTextView
{
    struct _NSRect previousVisibleRect;
}

+ (void)initialize;
- (id)defaultFont;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)dealloc;
- (void)setDelegate:(id)fp8;
- (id)_attachmentForPoint:(struct _NSPoint)fp8;
- (id)attachmentForEvent:(id)fp8;
- (id)menuForEvent:(id)fp8;
- (void)selectText:(id)fp8;
- (id)hitTest:(struct _NSPoint)fp8;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateMenuItem:(id)fp8;
- (BOOL)writeSelectionToPasteboard:(id)fp8 type:(id)fp12;
- (id)writablePasteboardTypes;
- (void)textView:(id)fp8 clickedOnCell:(id)fp12 event:(id)fp16 inRect:(struct _NSRect)fp20 atIndex:(unsigned int)fp36;
- (struct _NSRect)_cellFrameForAttachment:(id)fp8 atCharIndex:(int)fp12;
- (void)textStorageContentWillChange;
- (void)resetCursorRects;
- (void)coalescedResetCursorRects;
- (id)view:(id)fp8 stringForToolTip:(int)fp12 point:(struct _NSPoint)fp16 userData:(void *)fp24;
- (BOOL)moreThanOneAttachmentSelected;
- (id)selectedAttachments;
- (id)imageOfAttachmentsFromRange:(struct _NSRange)fp8 lowerLeft:(struct _NSPoint *)fp16;
- (void)openAttachment:(id)fp8;
- (void)quickLookAttachment:(id)fp8;
- (void)openAttachmentWithApplication:(id)fp8;
- (void)chooseApplicationToOpenAttachment:(id)fp8;
- (void)saveAttachment:(id)fp8;
- (void)saveAttachmentToDownloadsDirectory:(id)fp8;
- (void)deleteAttachment:(id)fp8;
- (void)viewAttachmentInline:(id)fp8;
- (void)importInvitations:(id)fp8;
- (void)_attachmentFinishedDownloading:(id)fp8;
- (void)drawRect:(struct _NSRect)fp8;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)fp8;
- (BOOL)accessibilityIsAttributeSettable:(id)fp8;

@end

