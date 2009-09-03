/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class NSImageView, NSSecureTextField, NSTextField, NSURLAuthenticationChallenge, RSSNonBlockingPanel;

@interface RSSAuthenticationPanel
{
    NSTextField *mainLabel;
    RSSNonBlockingPanel *panel;
    NSSecureTextField *password;
    NSTextField *smallLabel;
    NSTextField *username;
    NSImageView *imageView;
    BOOL nibLoaded;
    BOOL usingSheet;
    id callback;
    id context;
    SEL selector;
    NSURLAuthenticationChallenge *challenge;
}

- (id)initWithCallback:(id)arg1 selector:(SEL)arg2 context:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)cancel:(id)arg1;
- (void)logIn:(id)arg1;
- (BOOL)loadNib;
- (void)setUpForChallenge:(id)arg1;
- (void)runAsModalDialogWithChallenge:(id)arg1;
- (void)runAsSheetOnWindow:(id)arg1 withChallenge:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

