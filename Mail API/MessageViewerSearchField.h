/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface MessageViewerSearchField
{
    id <MessageViewerSearchFieldFocusDelegate> _focusDelegate;
    BOOL _focused;
}

@property(getter=isFocused) BOOL focused;
@property id <MessageViewerSearchFieldFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)firstResponderDidChange:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (BOOL)isFocused;
- (void)setFocused:(BOOL)arg1;
- (id)focusDelegate;
- (void)setFocusDelegate:(id)arg1;

@end
