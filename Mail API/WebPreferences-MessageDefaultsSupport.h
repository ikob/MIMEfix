/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "WebPreferences.h"

@interface WebPreferences (MessageDefaultsSupport)
+ (id)standardMailWebPreferences;
+ (id)standardNoteWebPreferences;
- (void)configureMailPreferences;
- (void)configureStandardFont:(id)fp8 fixedFont:(id)fp12;
- (void)configureNotePreferences;
- (void)configureMessagePreferences;
- (void)_performDelayedEnablingOnMainThread;
- (void)_performDelayedEnabling;
@end

