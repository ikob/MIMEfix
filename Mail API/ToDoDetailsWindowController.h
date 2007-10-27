/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "ChildWindowController.h"

@interface ToDoDetailsWindowController : ChildWindowController
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
- (id)windowWillReturnUndoManager:(id)fp8;
- (id)initWithWindow:(id)fp8;
- (id)window;
- (id)windowNibName;
- (void)loadWindow;
- (id)todo;
- (void)setToDo:(id)fp8;
- (void)setDelegate:(id)fp8;
- (BOOL)shouldAnimateShowWindow;
- (void)setShouldAnimateShowWindow:(BOOL)fp8;
- (BOOL)shouldAnimateClose;
- (void)setShouldAnimateClose:(BOOL)fp8;
- (BOOL)shouldAnimateMoveWindowToPoint;
- (void)setShouldAnimateMoveWindowToPoint:(BOOL)fp8;
- (BOOL)isAnimating;
- (void)parentWindowDidResignKey:(id)fp8;
- (void)parentWindowDidResize:(id)fp8;
- (void)parentWindowDidMove:(id)fp8;
- (void)windowDidResignKey:(id)fp8;
- (void)windowDidResize:(id)fp8;
- (void)window:(id)fp8 didProcessEvent:(id)fp12;
- (BOOL)_shouldAnimateWindowClose;
- (BOOL)_shouldAnimateShowWindow;
- (BOOL)_shouldAnimateMoveWindowToPoint;
- (void)showWindow:(id)fp8;
- (void)animateShowWindow:(id)fp8;
- (BOOL)canClose;
- (void)close;
- (void)closeImmediately;
- (void)animateClose;
- (void)animateMoveWindowToPoint:(struct _NSPoint)fp8;
- (void)moveWindowToPoint:(struct _NSPoint)fp8;
- (void)animationDidEnd:(id)fp8;
- (BOOL)animationShouldStart:(id)fp8;

@end

