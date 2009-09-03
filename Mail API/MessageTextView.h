/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface MessageTextView
{
    struct CGRect previousVisibleRect;
}

+ (void)initialize;
- (id)defaultFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)_attachmentForPoint:(struct CGPoint)arg1;
- (id)attachmentForEvent:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)selectText:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 event:(id)arg3 inRect:(struct CGRect)arg4 atIndex:(unsigned long long)arg5;
- (struct CGRect)_cellFrameForAttachment:(id)arg1 atCharIndex:(long long)arg2;
- (void)textStorageContentWillChange;
- (void)resetCursorRects;
- (void)coalescedResetCursorRects;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)moreThanOneAttachmentSelected;
- (id)selectedAttachments;
- (id)imageOfAttachmentsFromRange:(struct _NSRange)arg1 lowerLeft:(struct CGPoint *)arg2;
- (void)openAttachment:(id)arg1;
- (void)quickLookAttachment:(id)arg1;
- (void)openAttachmentWithApplication:(id)arg1;
- (void)chooseApplicationToOpenAttachment:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)saveAttachmentToDownloadsDirectory:(id)arg1;
- (void)deleteAttachment:(id)arg1;
- (void)viewAttachmentInline:(id)arg1;
- (void)importInvitations:(id)arg1;
- (void)_attachmentFinishedDownloading:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;

@end

