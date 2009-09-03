/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextViewDelegate-Protocol.h"

@protocol DraggingTextViewDelegate <NSTextViewDelegate>

@optional
- (BOOL)textView:(id)arg1 shouldReadSelectionFromPasteboard:(id)arg2 type:(id)arg3 result:(char *)arg4;
- (unsigned long long)textView:(id)arg1 draggingEntered:(id)arg2;
- (unsigned long long)textView:(id)arg1 draggingUpdated:(id)arg2;
- (void)textView:(id)arg1 draggingExited:(id)arg2;
- (void)textView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)textView:(id)arg1 shouldDragSelectionWithEvent:(id)arg2 offset:(struct CGSize)arg3 slideBack:(BOOL)arg4;
- (void)textView:(id)arg1 draggedImage:(id)arg2 endedAt:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
@end

