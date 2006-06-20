/*
 *     Generated by class-dump 3.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2005 by Steve Nygard.
 */

#import "NSView.h"

@class NSImage, NSScrollView;

@interface ShadowView : NSView
{
    NSImage *image;
    NSScrollView *scrollView;
    BOOL shadowIsOnLeftSideOfSuperview;
}

+ (float)shadowWidth;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)dealloc;
- (void)drawOnLeftSideOfSuperview:(BOOL)fp8;
- (void)resizeWithOldSuperviewSize:(struct _NSSize)fp8;
- (void)hideIfAppropriate;
- (void)drawRect:(struct _NSRect)fp8;
- (id)hitTest:(struct _NSPoint)fp8;

@end

