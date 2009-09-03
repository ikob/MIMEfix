/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSView;

@interface MouseTracker
{
    NSView *_view;
    struct CGRect _trackingRect;
    long long _trackingRectTag;
    BOOL _mouseOver;
    id _delegate;
}

- (id)initWithTrackingRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (struct CGRect)trackingRect;
- (id)view;
- (BOOL)mouseOver;
- (void)_updateMouseIsOver;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;

@end

