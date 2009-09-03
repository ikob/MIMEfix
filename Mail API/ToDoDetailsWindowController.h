/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "ChildWindowController.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@interface ToDoDetailsWindowController : ChildWindowController <NSAnimationDelegate, NSWindowDelegate>
{
    struct {
        unsigned int animateShowWindow:1;
        unsigned int animateClose:1;
        unsigned int animateMoveWindowToPoint:1;
        unsigned int animating:1;
        unsigned int delegateRespondsToShouldAnimateCloseWindow:1;
        unsigned int delegateRespondsToShouldAnimateShowWindow:1;
        unsigned int delegateRespondsToShouldAnimateMoveWindow:1;
        unsigned int delegateRespondsToUndoManagerForWindow:1;
        unsigned int reserved:24;
    } _moreFlags;
}

+ (id)sharedInstance;
- (id)windowWillReturnUndoManager:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)window;
- (id)windowNibName;
- (void)loadWindow;
- (id)todo;
- (void)setToDo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAnimateShowWindow;
- (void)setShouldAnimateShowWindow:(BOOL)arg1;
- (BOOL)shouldAnimateClose;
- (void)setShouldAnimateClose:(BOOL)arg1;
- (BOOL)shouldAnimateMoveWindowToPoint;
- (void)setShouldAnimateMoveWindowToPoint:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)parentWindowDidResignKey:(id)arg1;
- (void)parentWindowDidResize:(id)arg1;
- (void)parentWindowDidMove:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)window:(id)arg1 didProcessEvent:(id)arg2;
- (BOOL)_shouldAnimateWindowClose;
- (BOOL)_shouldAnimateShowWindow;
- (BOOL)_shouldAnimateMoveWindowToPoint;
- (void)showWindow:(id)arg1;
- (void)animateShowWindow:(id)arg1;
- (BOOL)canClose;
- (void)close;
- (void)closeImmediately;
- (void)animateClose;
- (void)animateMoveWindowToPoint:(struct CGPoint)arg1;
- (void)moveWindowToPoint:(struct CGPoint)arg1;
- (void)animationDidEnd:(id)arg1;
- (BOOL)animationShouldStart:(id)arg1;

@end

