/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSPopUpButtonCell.h"

@class NSCell;

@interface ToDoListPopUpButtonCell : NSPopUpButtonCell
{
    NSCell *textCell;
    NSCell *indicatorCell;
    BOOL _expanding;
    BOOL _hasKeyboardFocus;
    BOOL _hasMouseFocus;
}

- (id)initTextCell:(id)fp8 pullsDown:(BOOL)fp12;
- (void)awakeFromNib;
- (void)_generalInitWithString:(id)fp8;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)hasFocus;
- (BOOL)hasKeyboardFocus;
- (void)setHasKeyboardFocus:(BOOL)fp8;
- (BOOL)hasMouseFocus;
- (void)setHasMouseFocus:(BOOL)fp8;
- (void)setLineBreakMode:(unsigned int)fp8;
- (void)setAlignment:(unsigned int)fp8;
- (void)setFont:(id)fp8;
- (void)setBackgroundStyle:(int)fp8;
- (void)setControlSize:(unsigned int)fp8;
- (void)setEnabled:(BOOL)fp8;
- (id)attributedTitle;
- (struct _NSRect)titleRectForBounds:(struct _NSRect)fp8;
- (struct _NSRect)indicatorRectForBounds:(struct _NSRect)fp8;
- (void)drawTitleWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (id)_indicatorImage;
- (void)drawBorderAndBackgroundWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (struct _NSRect)expansionFrameWithFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (void)drawWithExpansionFrame:(struct _NSRect)fp8 inView:(id)fp24;
- (id)menuForEvent:(id)fp8 inRect:(struct _NSRect)fp12 ofView:(id)fp28;
- (void)addTrackingAreasForView:(id)fp8 inRect:(struct _NSRect)fp12 withUserInfo:(id)fp28 mouseLocation:(struct _NSPoint)fp32;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;

@end

