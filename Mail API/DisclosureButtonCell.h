/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSImage;

@interface DisclosureButtonCell : NSButtonCell
{
    NSImage *onStateHighlightImage;
    NSImage *offStateHighlightImage;
    NSImage *intermediateImage;
    int stage;
    BOOL shouldDraw;
    BOOL shouldOpenUpward;
}

- (id)initImageCell:(id)fp8;
- (void)setShouldDrawButton:(BOOL)fp8;
- (void)setShouldOpenUpward:(BOOL)fp8;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (BOOL)trackMouse:(id)fp8 inRect:(struct _NSRect)fp12 ofView:(id)fp28 untilMouseUp:(BOOL)fp32;
- (void)drawInteriorWithFrame:(struct _NSRect)fp8 inView:(id)fp24;

@end

